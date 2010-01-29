/*=============================================================================
 Copyright (C) 2010 WebOS Internals <http://www.webos-internals.org/>
 Copyright (C) 2010 Ryan Hope <rmh3093@gmail.com>
 Copyright (C) 2010 mdklein <???>

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 =============================================================================*/

#ifndef LIBPDL_H_
#define LIBPDL_H_

/*!
 * \brief This controls the notification popup location, it does not flip location 0,0
 *
 * This controls the notification popup location, it does not flip location 0,0
 *
 * \param Orientation an int (0=bottom, 1= right, 2=top, 3=left)
 *
 * \return zero for success ??
 */
int PDL_SetOrientation(int Orientation);

/*!
 * \brief portnum is number of port, enabled is 0 or 1
 *
 * \param portnum Port number
 * \param enabled 1 if firewall enabled
 *
 * \return zero for success ??
 */
int PDL_SetFirewallPortStatus(int portnum, int enabled);

/*!
 * \brief Get the unique id of the device
 *
 * Get the unique id of the device
 * something needs to be larger than 63, not sure what it controls right now
 * sizeofbuffer >= 63
 *
 * \param buffer A point to a buffer to store the ID in
 * \param sizeofbuffer The size of the buffer
 *
 * \return zero for success ??
 */
int PDL_GetUniqueID(char * buffer, int sizeofbuffer);

/*!
 * \brief Get device name
 *
 * \param A point to a buffer to store the device name in
 * \param sizeofbuffer The size of the buffer
 *
 * \return zero for success ??
 */
int PDL_GetDeviceName(char * buffer, int sizeofbuffer);

/*!
 * \brief Opens web browser with a particular url
 *
 * \param url The url which will be opened in the new browser card
 *
 * \return zero for success ??
 */
int PDL_LaunchBrowser(char * url);

/*!
 * \brief Opens an email pre-populated with subject and text
 *
 * \param subject The subject of the e-mail
 * \param text The body of the e-mail
 *
 * \return zero for success ??
 */
int PDL_LaunchEmail(char * subject, char * text);

/*!
 * \brief Fills buffer with language string (example: en_US)
 *
 * \param A point to a buffer to store the language string in
 * \param sizeofbuffer The size of the buffer
 *
 * \return zero for success ??
 */
int PDL_GetLanguage(char * buffer, int sizeofbuffer);

//Sends {'appName': 'com.palm.pdl', 'isPlaying': %s} where %s is true or false to luna://com.palm.mediaevents/notifyPlayingStatusChange
//true=1, false=0
int PDL_NotifyMusicPlaying(int enable);

//Cleans things up, haven't fully traced everything it's doing yet
int PDL_Quit();

//Cleans things up, haven't fully traced everything it's doing yet
int PDL_LSCall(char * arg1, char * arg2);

//The Following are WebOS hooks in SDL, I'm not sure exactly what they control or where yet, it's just passed directly to SDL

//Enables/Disables Screen Timeouts
int PDL_ScreenTimeoutEnable(int enable);

//Enables/Disables Notifications
void PDL_BannerMessagesEnable(int enable);

//Enables/Disables Custom Pause UI
void PDL_CustomPauseUiEnable(int enable);


// I think most of the keys are passed to SDL_GetKeyName, but the following are PDL specific?
// 229 = gesture forward
// 231 = gesture area
// 27 = gesture back
char * PDL_GetKeyName(int key);



void *PDLNet_Get_Info();
void *PDL_FocusMessageEnable(int bool);
void *PDL_GesturesEnable(int bool);

#endif /* LIBPDL_H_ */
