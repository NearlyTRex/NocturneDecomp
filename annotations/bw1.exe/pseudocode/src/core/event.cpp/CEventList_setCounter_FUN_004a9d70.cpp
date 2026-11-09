// Name: core_event.cpp_CEventList_setCounter_FUN_004a9d70
// Address: 004a9d70
// Address Range: [[004a9d70, 004a9e74]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_setCounter_FUN_004a9d70(CEventList *this_ptr,char *name,int value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_event_cpp_CEventList_setCounter_FUN_004a9d70(CEventList *this_ptr,char *name,int value)

{
  int iVar1;
  CEventList CVar2;
  int iVar3;
  int iVar4;
  CEventList *pCVar5;
  
  iVar4 = core_event_cpp_CEventList_findCounter_FUN_004a9fa0(this_ptr,name);
  if (iVar4 < 0) {
    if (value != 0) {
      if (9 < *(int *)(this_ptr + 0x337c)) {
        _DAT_01d1d400 = "..\\core\\event.cpp";
        _DAT_01d1d404 = 0xe09;
        core_main_c_FUN_005030e0("CEventList::setCounter - too many counters!");
      }
      pCVar5 = this_ptr + *(int *)(this_ptr + 0x337c) * 0x20 + 0x3380;
      do {
        CVar2 = (CEventList)*name;
        *pCVar5 = CVar2;
        if (CVar2 == (CEventList)0x0) break;
        CVar2 = *(CEventList *)(name + 1);
        name = name + 2;
        pCVar5[1] = CVar2;
        pCVar5 = pCVar5 + 2;
      } while (CVar2 != (CEventList)0x0);
      *(int *)(this_ptr + *(int *)(this_ptr + 0x337c) * 4 + 0x34c0) = value;
      *(int *)(this_ptr + 0x337c) = *(int *)(this_ptr + 0x337c) + 1;
      return;
    }
  }
  else {
    iVar1 = iVar4 * 4;
    if (value == 0) {
      iVar3 = *(int *)(this_ptr + 0x337c);
      *(int *)(this_ptr + 0x337c) = iVar3 + -1;
      memmove
                (this_ptr + iVar4 * 0x20 + 0x3380,this_ptr + iVar4 * 0x20 + 0x33a0,
                 ((iVar3 + -1) - iVar4) * 0x20);
      memmove
                (this_ptr + iVar1 + 0x34c0,this_ptr + iVar1 + 0x34c4,
                 (*(int *)(this_ptr + 0x337c) - iVar4) * 4);
      return;
    }
    *(int *)(this_ptr + iVar1 + 0x34c0) = value;
  }
  return;
}
