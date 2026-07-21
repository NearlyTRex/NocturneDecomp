// Name: core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_0051dc90
// Address: 0051dc90
// Address Range: [[0051dc90, 0051dcaa]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_0051dc90(int param_1)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_0051dc90(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)(iVar2 + 0x2140) = 1;
    iVar2 = iVar1;
  } while (iVar1 != param_1 + 0x78);
  return;
}
