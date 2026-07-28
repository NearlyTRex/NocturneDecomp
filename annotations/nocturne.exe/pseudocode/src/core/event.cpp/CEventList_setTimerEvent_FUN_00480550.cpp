// Name: core_event.cpp_CEventList_setTimerEvent_FUN_00480550
// Address: 00480550
// Address Range: [[00480550, 004806c2]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_setTimerEvent_FUN_00480550(CEventList *this_ptr,char *name,float duration)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_setTimerEvent_FUN_00480550(CEventList *this_ptr,char *name,float duration)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char (*pacVar4) [32];
  
  if ((double)duration < 0.0) {
    PTR_01cc4800 = "..\\core\\event.cpp";
    INT_01cc4804 = 0xa5d;
    core_main_c_FUN_004c8440("CEventList::setTimerEvent - invalid duration for %s: %f",name,(double)duration);
  }
  iVar2 = core_event_cpp_CEventList_findTimer_FUN_004808b0(this_ptr,name);
  if (iVar2 < 0) {
    if (0.0 < duration) {
      if (9 < (this_ptr->timers).count) {
        PTR_01cc4800 = "..\\core\\event.cpp";
        INT_01cc4804 = 0xa7e;
        core_main_c_FUN_004c8440("CEventList::setTimerEvent - too many timers!");
      }
      pacVar4 = (this_ptr->timers).names + (this_ptr->timers).count;
      do {
        cVar1 = *name;
        (*pacVar4)[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = name[1];
        name = name + 2;
        (*pacVar4)[1] = cVar1;
        pacVar4 = (char (*) [32])(*pacVar4 + 2);
      } while (cVar1 != '\0');
      (this_ptr->timers).durations[(this_ptr->timers).count] = duration;
      (this_ptr->timers).count = (this_ptr->timers).count + 1;
      return;
    }
  }
  else {
    if (duration <= 0.0) {
      iVar3 = (this_ptr->timers).count + -1;
      (this_ptr->timers).count = iVar3;
      memmove
                ((this_ptr->timers).names + iVar2,
                 ((STimerBlock *)(&this_ptr->persistent_events + 1))->names + iVar2 + 1,
                 (iVar3 - iVar2) * 0x20);
      memmove
                ((this_ptr->timers).durations + iVar2,(this_ptr->timers).durations + iVar2 + 1,
                 ((this_ptr->timers).count - iVar2) * 4);
      return;
    }
    (this_ptr->timers).durations[iVar2] = duration;
  }
  return;
}
