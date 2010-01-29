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

#include <libpdl.h>

int PDL_SetOrientation(int Orientation){return 0;}
int PDL_SetFirewallPortStatus(int portnum, int enabled){return 0;}
int PDL_GetUniqueID(char * buffer, int sizeofbuffer){return 0;}
int PDL_GetDeviceName(char * buffer, int sizeofbuffer){return 0;}
int PDL_LaunchBrowser(char * url){return 0;}
int PDL_LaunchEmail(char * subject, char * text){return 0;}
int PDL_GetLanguage(char * buffer, int sizeofbuffer){return 0;}
int PDL_NotifyMusicPlaying(int enable){return 0;}
int PDL_Quit(){return 0;}
int PDL_LSCall(char * arg1, char * arg2){return 0;}
int PDL_ScreenTimeoutEnable(int enable){return 0;}
void PDL_BannerMessagesEnable(int enable){}
void PDL_CustomPauseUiEnable(int enable){}
void PDL_FocusMessageEnable(int bool){}
void PDL_GesturesEnable(int bool){}
char * PDL_GetKeyName(int key){return 0;}

void *PDLNet_Get_Info();
