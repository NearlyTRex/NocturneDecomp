// Name: core_event.cpp_CEventList_findSfxEntry_FUN_00480d10
// Address: 00480d10
// Address Range: [[00480d10, 00480d5d]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_findSfxEntry_FUN_00480d10(int param_1,undefined4 param_2)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_findSfxEntry_FUN_00480d10(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x3ac8)) {
    iVar3 = param_1 + 0x3ad0;
    do {
      iVar1 = _stricmp(iVar3,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x120;
    } while (iVar2 < *(int *)(param_1 + 0x3ac8));
  }
  return -1;
}
