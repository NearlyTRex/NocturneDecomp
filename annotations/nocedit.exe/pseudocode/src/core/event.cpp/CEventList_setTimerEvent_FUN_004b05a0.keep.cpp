// Name: core_event.cpp_CEventList_setTimerEvent_FUN_004b05a0
// Address: 004b05a0
// MANUAL RECONSTRUCTION
// Address Range: [[004b05a0, 004b0712]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_setTimerEvent_FUN_004b05a0(CEventList *this_ptr,char *name,float duration)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_setTimerEvent_FUN_004b05a0(CEventList *this_ptr,char *name,float duration)

{
  int iVar3;
  int iVar4;
  char (*pacVar5) [32];
  double dVar1;

  dVar1 = (double)duration;
  if (dVar1 < 0.0) {
    g_CurrentFilename = "..\\core\\event.cpp";
    g_CurrentLineNumber = 2653;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CEventList::setTimerEvent - invalid duration for %s: %f",name,dVar1);
  }
  iVar3 = core_event_cpp_CEventList_findTimer_FUN_004b0900(this_ptr,name);
  if (iVar3 < 0) {
    if (0.0 < duration) {
      if (9 < (this_ptr->timers).count) {
        g_CurrentFilename = "..\\core\\event.cpp";
        g_CurrentLineNumber = 2686;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CEventList::setTimerEvent - too many timers!");
      }
      pacVar5 = (this_ptr->timers).names + (this_ptr->timers).count;
      strcpy(*pacVar5,name);
      (this_ptr->timers).durations[(this_ptr->timers).count] = duration;
      (this_ptr->timers).count = (this_ptr->timers).count + 1;
      return;
    }
  }
  else {
    if (duration <= 0.0) {
      iVar4 = (this_ptr->timers).count + -1;
      (this_ptr->timers).count = iVar4;
      memmove
                ((this_ptr->timers).names + iVar3,
                 ((STimerBlock *)(&this_ptr->persistent_events + 1))->names + iVar3 + 1,
                 (iVar4 - iVar3) * 0x20);
      memmove
                ((this_ptr->timers).durations + iVar3,(this_ptr->timers).durations + iVar3 + 1,
                 ((this_ptr->timers).count - iVar3) * 4);
      return;
    }
    (this_ptr->timers).durations[iVar3] = duration;
  }
  return;
}
