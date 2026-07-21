// Name: FUN_00439d30
// Address: 00439d30
// Address Range: [[00439d30, 00439d93]]
// Convention: unknown
// Signature: int FUN_00439d30(undefined4 param_1)

#include "nocturne.h"

int FUN_00439d30(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004b46d0(param_1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_FUN_0059b574;
  *(uint *)(iVar1 + 0x1fa3c) = 0;
  *(uint *)(iVar1 + 0x1fa40) = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(iVar1 + 0x150,"colonel.dfm")
  ;
  *(uint *)(iVar1 + 0x1fa50) = 0x3f800000;
  *(uint *)(iVar1 + 0x1fa4c) = 0;
  *(uint *)(iVar1 + 0x1fa48) = *(uint *)(iVar1 + 0x1fa4c);
  *(uint *)(iVar1 + 0x1fa44) = *(uint *)(iVar1 + 0x1fa48);
  return iVar1;
}
