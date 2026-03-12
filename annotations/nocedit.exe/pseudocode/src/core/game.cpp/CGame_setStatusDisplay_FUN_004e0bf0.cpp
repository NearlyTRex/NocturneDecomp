// Name: core_game.cpp_CGame_setStatusDisplay_FUN_004e0bf0
// Address: 004e0bf0
// Address Range: [[004e0bf0, 004e0ccc]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_setStatusDisplay_FUN_004e0bf0(CGame *this_ptr,char *name,int value,float duration)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_setStatusDisplay_FUN_004e0bf0(CGame *this_ptr,char *name,int value,float duration)

{
  char cVar2;
  int iVar2;
  int iVar3;
  char (*str1) [256];
  char (*pacVar4) [256];
  char cVar1;
  
  if (((0.0 < duration) && (name != (char *)0x0)) && (*name != '\0')) {
    iVar3 = 0;
    str1 = this_ptr->status_bar_names;
    if (0 < this_ptr->status_display_count) {
      do {
        iVar2 = _stricmp(*str1,name);
        if (iVar2 == 0) {
          this_ptr->status_bar_values[iVar3] = (float)value;
          this_ptr->status_bar_timers[iVar3] = duration;
          return;
        }
        iVar3 = iVar3 + 1;
        str1 = str1 + 1;
      } while (iVar3 < this_ptr->status_display_count);
    }
    if (this_ptr->status_display_count < 5) {
      pacVar4 = this_ptr->status_bar_names + this_ptr->status_display_count;
      do {
        cVar1 = *name;
        (*pacVar4)[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar2 = name[1];
        name = name + 2;
        (*pacVar4)[1] = cVar2;
        pacVar4 = (char (*) [256])(*pacVar4 + 2);
      } while (cVar2 != '\0');
      this_ptr->status_bar_values[this_ptr->status_display_count] = (float)value;
      this_ptr->status_bar_timers[this_ptr->status_display_count] = duration;
      this_ptr->status_display_count = this_ptr->status_display_count + 1;
      return;
    }
  }
  return;
}
