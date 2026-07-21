// Name: core_event.cpp_CEventList_findPersistentEvent_FUN_00480810
// Address: 00480810
// Address Range: [[00480810, 0048085a]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_findPersistentEvent_FUN_00480810(int param_1,undefined4 param_2)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_findPersistentEvent_FUN_00480810(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x258c)) {
    iVar3 = param_1 + 0x2590;
    do {
      iVar1 = _stricmp(iVar3,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x20;
    } while (iVar2 < *(int *)(param_1 + 0x258c));
  }
  return -1;
}
