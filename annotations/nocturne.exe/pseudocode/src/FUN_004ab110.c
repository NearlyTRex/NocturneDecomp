// Name: FUN_004ab110
// Address: 004ab110
// Address Range: [[004ab110, 004ab172]]
// Convention: unknown
// Signature: undefined4 FUN_004ab110(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004ab110(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_7c [12];
  uint local_4c [12];
  uint local_1c;
  uint local_18;
  uint local_14;
  
  bVar4 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0
            (param_1 + 0x150,_DAT_01c78c14);
  puVar2 = local_4c;
  puVar3 = local_7c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  local_18 = 0x3f333333;
  local_1c = 0;
  local_14 = 0x3e99999a;
  core_xform_cpp_transformVector3x4_FUN_0055a8b0(param_2,&local_1c,local_7c);
  return param_2;
}
