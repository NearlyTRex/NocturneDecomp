// Name: core_setcolid.cpp_CDemonSet_buildCollidableActorList_FUN_005119b0
// Address: 005119b0
// Address Range: [[005119b0, 00511a02]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005119b0(int param_1)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_buildCollidableActorList_FUN_005119b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x1569c0) = 0;
  iVar2 = 0;
  iVar1 = param_1;
  if (0 < *(int *)(param_1 + 0x14cd6c)) {
    do {
      if (*(int *)(*(int *)(iVar1 + 0x14cd70) + 0x100) == 0) {
        *(int *)(param_1 + 0x1569c4 + *(int *)(param_1 + 0x1569c0) * 4) = *(int *)(iVar1 + 0x14cd70)
        ;
        *(int *)(param_1 + 0x1569c0) = *(int *)(param_1 + 0x1569c0) + 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x14cd6c));
  }
  return;
}
