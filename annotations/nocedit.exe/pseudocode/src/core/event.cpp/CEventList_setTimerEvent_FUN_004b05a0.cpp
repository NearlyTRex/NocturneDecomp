// Name: core_event.cpp_CEventList_setTimerEvent_FUN_004b05a0
// Address: 004b05a0
// Address Range: [[004b05a0, 004b0712]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_setTimerEvent_FUN_004b05a0(CEventList *this_ptr,char *name,float duration)

#include "nocturne.h"

void __cdecl
core_event_cpp_CEventList_setTimerEvent_FUN_004b05a0(CEventList *this_ptr,char *name,float duration)

{
  double dVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char (*pacVar5) [32];
  uint local_20;
  uint uStack_1c;
  
  dVar1 = (double)duration;
  if (dVar1 < 0.0) {
    uStack_1c = (uint)((ulonglong)dVar1 >> 0x20);
    local_20 = SUB84(dVar1,0);
    g_CurrentFilename = "..\\core\\event.cpp";
    g_CurrentLineNumber = 0xa5d;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CEventList::setTimerEvent - invalid duration for %s: %f",name,local_20,uStack_1c);
  }
  iVar3 = core_event_cpp_CEventList_findTimer_FUN_004b0900(this_ptr,name);
  if (iVar3 < 0) {
    if (0.0 < duration) {
      if (9 < (this_ptr->timers).count) {
        g_CurrentFilename = "..\\core\\event.cpp";
        g_CurrentLineNumber = 0xa7e;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CEventList::setTimerEvent - too many timers!");
      }
      pacVar5 = (this_ptr->timers).names + (this_ptr->timers).count;
      do {
        cVar2 = *name;
        (*pacVar5)[0] = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = name[1];
        name = name + 2;
        (*pacVar5)[1] = cVar2;
        pacVar5 = (char (*) [32])(*pacVar5 + 2);
      } while (cVar2 != '\0');
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
                ((this_ptr->timers).names + iVar3,(this_ptr->timers).names + iVar3 + 1,
                 (iVar4 - iVar3) * 0x20);
      memmove
                ((this_ptr->timers).durations + iVar3,
                 (void *)((int)((this_ptr->counters).names + -2) + 0x18 + iVar3 * 4),
                 ((this_ptr->timers).count - iVar3) * 4);
      return;
    }
    (this_ptr->timers).durations[iVar3] = duration;
  }
  return;
}
