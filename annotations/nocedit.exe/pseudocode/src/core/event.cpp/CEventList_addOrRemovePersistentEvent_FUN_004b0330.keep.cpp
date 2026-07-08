// Name: core_event.cpp_CEventList_addOrRemovePersistentEvent_FUN_004b0330
// Address: 004b0330
// MANUAL RECONSTRUCTION
// Address Range: [[004b0330, 004b0453]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004b0330(CEventList *this_ptr,char *name,int add_flag)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004b0330(CEventList *this_ptr,char *name,int add_flag)

{
  int iVar2;
  int iVar4;

  if ((name != (char *)0x0) && (*name != '\0')) {
    iVar2 = core_event_cpp_CEventList_findPersistentEvent_FUN_004b0860(this_ptr,name);
    if (add_flag == 0) {
      if (-1 < iVar2) {
        iVar4 = (this_ptr->persistent_events).count + -1;
        (this_ptr->persistent_events).count = iVar4;
        memmove
                  ((this_ptr->persistent_events).names + iVar2,
                   (&this_ptr->game_flags)[1].names + iVar2 + 1,
             (iVar4 - iVar2) * sizeof(*(this_ptr->persistent_events).names));
        return;
      }
    }
    else if (iVar2 < 0) {
      if (99 < (this_ptr->persistent_events).count) {
        g_CurrentFilename = "..\\core\\event.cpp";
        g_CurrentLineNumber = 2549;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Too many persistent events!");
      }
      if (0x1f < (int)strlen(name)) {
        g_CurrentFilename = "..\\core\\event.cpp";
        g_CurrentLineNumber = 2555;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Event name %s too long!",name);
      }
      strcpy((this_ptr->persistent_events).names[(this_ptr->persistent_events).count],name);
      strupr
                ((this_ptr->persistent_events).names[(this_ptr->persistent_events).count]);
      (this_ptr->persistent_events).count = (this_ptr->persistent_events).count + 1;
      return;
    }
  }
  return;
}
