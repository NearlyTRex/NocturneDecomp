// Name: core_game.cpp_CGame_setStatusDisplay_FUN_004e0bf0
// Address: 004e0bf0
// MANUAL RECONSTRUCTION
// Address Range: [[004e0bf0, 004e0ccc]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_setStatusDisplay_FUN_004e0bf0(CGame *this_ptr,char *name,int value,float duration)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_setStatusDisplay_FUN_004e0bf0(CGame *this_ptr,char *name,int value,float duration)

{
  int iVar2;
  int iVar3;

  if (((0.0 < duration) && (name != (char *)0x0)) && (*name != '\0')) {
    for (iVar3 = 0; iVar3 < this_ptr->status_display_count; iVar3 = iVar3 + 1) {
      iVar2 = _stricmp(this_ptr->status_bar_names[iVar3],name);
      if (iVar2 == 0) {
        this_ptr->status_bar_values[iVar3] = (float)value;
        this_ptr->status_bar_timers[iVar3] = duration;
        return;
      }
    }
    if (this_ptr->status_display_count < 5) {
      strcpy(this_ptr->status_bar_names[this_ptr->status_display_count], name);
      this_ptr->status_bar_values[this_ptr->status_display_count] = (float)value;
      this_ptr->status_bar_timers[this_ptr->status_display_count] = duration;
      this_ptr->status_display_count = this_ptr->status_display_count + 1;
      return;
    }
  }
  return;
}
