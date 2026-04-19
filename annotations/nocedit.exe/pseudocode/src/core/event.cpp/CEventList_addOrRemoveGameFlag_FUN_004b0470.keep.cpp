// Name: core_event.cpp_CEventList_addOrRemoveGameFlag_FUN_004b0470
// Address: 004b0470
// MANUAL RECONSTRUCTION
// Address Range: [[004b0470, 004b0593]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_004b0470(CEventList *this_ptr,char *name,int add_flag)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_004b0470(CEventList *this_ptr,char *name,int add_flag)

{
  int iVar2;
  int iVar4;

  if ((name != (char *)0x0) && (*name != '\0')) {
    iVar2 = core_event_cpp_CEventList_findGameFlag_FUN_004b08b0(this_ptr,name);
    if (add_flag == 0) {
      if (-1 < iVar2) {
        iVar4 = (this_ptr->game_flags).count + -1;
        (this_ptr->game_flags).count = iVar4;
        memmove
                  ((this_ptr->game_flags).names + iVar2,
                   (&this_ptr->current_events)[1].names + iVar2 + 1,(iVar4 - iVar2) * 0x20);
        return;
      }
    }
    else if (iVar2 < 0) {
      if (9 < (this_ptr->game_flags).count) {
        g_CurrentFilename = "..\\core\\event.cpp";
        g_CurrentLineNumber = 0xa37;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Too many game flags!");
      }
      if (0x1f < (int)strlen(name)) {
        g_CurrentFilename = "..\\core\\event.cpp";
        g_CurrentLineNumber = 0xa3d;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Event name %s too long!",name);
      }
      strcpy((this_ptr->game_flags).names[(this_ptr->game_flags).count],name);
      strupr((this_ptr->game_flags).names[(this_ptr->game_flags).count]);
      (this_ptr->game_flags).count = (this_ptr->game_flags).count + 1;
      return;
    }
  }
  return;
}
