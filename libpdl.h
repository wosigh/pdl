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

// Orientation: 0=bottom, 1= right, 2=top, 3=left
// Note: this controls the notification popup location, it does not flip location 0,0
int PDL_SetOrientation(int Orientation);

// portnum is number of port, enabled is 0 or 1
int PDL_SetFirewallPortStatus(int portnum, int enabled);

// note: something needs to be larger than 63, not sure what it controls right now
// sizeofbuffer >= 63
int PDL_GetUniqueID(char * buffer, int sizeofbuffer);

//sets buffer to device name, returns 0 on success...
int PDL_GetDeviceName(char * buffer, int sizeofbuffer);

//Opens web browser and points it to url
int PDL_LaunchBrowser(char * url);

//Opens an email pre-populated with subject and text
int PDL_LaunchEmail(char * subject, char * text);

//fills buffer with language string (example: en_US)
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
