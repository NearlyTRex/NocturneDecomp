// Name: core_event.cpp_CEventList_setTimerEvent_FUN_004a9bf0
// Address: 004a9bf0
// Address Range: [[004a9bf0, 004a9d62]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_setTimerEvent_FUN_004a9bf0(CEventList *this_ptr,char *name,float duration)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_event_cpp_CEventList_setTimerEvent_FUN_004a9bf0(CEventList *this_ptr,char *name,float duration)

{
  int iVar1;
  CEventList CVar2;
  int iVar3;
  int iVar4;
  CEventList *pCVar5;
  
  if ((double)duration < 0.0) {
    _DAT_01d1d400 = "..\\core\\event.cpp";
    _DAT_01d1d404 = 0xdb4;
    core_main_c_FUN_005030e0("CEventList::setTimerEvent - invalid duration for %s: %f",name,(double)duration);
  }
  iVar4 = core_event_cpp_CEventList_findTimer_FUN_004a9f50(this_ptr,name);
  if (iVar4 < 0) {
    if (0.0 < duration) {
      if (9 < *(int *)(this_ptr + 0x3210)) {
        _DAT_01d1d400 = "..\\core\\event.cpp";
        _DAT_01d1d404 = 0xdd5;
        core_main_c_FUN_005030e0("CEventList::setTimerEvent - too many timers!");
      }
      pCVar5 = this_ptr + *(int *)(this_ptr + 0x3210) * 0x20 + 0x3214;
      do {
        CVar2 = (CEventList)*name;
        *pCVar5 = CVar2;
        if (CVar2 == (CEventList)0x0) break;
        CVar2 = *(CEventList *)(name + 1);
        name = name + 2;
        pCVar5[1] = CVar2;
        pCVar5 = pCVar5 + 2;
      } while (CVar2 != (CEventList)0x0);
      *(float *)(this_ptr + *(int *)(this_ptr + 0x3210) * 4 + 0x3354) = duration;
      *(int *)(this_ptr + 0x3210) = *(int *)(this_ptr + 0x3210) + 1;
      return;
    }
  }
  else {
    iVar1 = iVar4 * 4;
    if (duration <= 0.0) {
      iVar3 = *(int *)(this_ptr + 0x3210);
      *(int *)(this_ptr + 0x3210) = iVar3 + -1;
      memmove
                (this_ptr + iVar4 * 0x20 + 0x3214,this_ptr + iVar4 * 0x20 + 0x3234,
                 ((iVar3 + -1) - iVar4) * 0x20);
      memmove
                (this_ptr + iVar1 + 0x3354,this_ptr + iVar1 + 0x3358,
                 (*(int *)(this_ptr + 0x3210) - iVar4) * 4);
      return;
    }
    *(float *)(this_ptr + iVar1 + 0x3354) = duration;
  }
  return;
}
