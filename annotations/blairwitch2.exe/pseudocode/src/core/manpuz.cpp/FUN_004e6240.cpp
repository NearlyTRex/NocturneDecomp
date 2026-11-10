// Name: core_manpuz.cpp_FUN_004e6240
// Address: 004e6240
// Address Range: [[004e6240, 004e6334]]
// Convention: unknown
// Signature: void core_manpuz_cpp_FUN_004e6240(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_manpuz_cpp_FUN_004e6240(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  int aiStackY_1038 [1016];
  uint uStack_50;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  int iStack_14;
  
  bVar3 = 0;
  iStack_14 = param_2;
  iVar2 = param_1 + 0x74c + param_2 * 100;
  fVar1 = ((float)param_2 + *(float *)(iVar2 + 4)) * _DAT_005f98bc;
  *(uint *)(iVar2 + 0x18) = 0;
  *(uint *)(iVar2 + 0x20) = 0;
  *(float *)(iVar2 + 0x1c) = fVar1;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
            ((CMatrix3x3f *)(iVar2 + 0x24),(CVector3f *)(iVar2 + 0x18));
  uStack_24 = *(uint *)(param_1 + 0x1668);
  uStack_2c = 0;
  uStack_28 = 0;
  core_dirmat_cpp_FUN_00449530((CMatrix3x3f *)(iVar2 + 0x24),&stack0xffffffd4);
  uStack_44 = uStack_20;
  *(uint *)((int)&stack0xffffffc0 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffffe4 + (uint)bVar3 * 0xfffffffe * 4);
  *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if ((uint *)(iVar2 + 0xc) != &stack0xffffffbc) {
    *(uint *)(iVar2 + 0xc) = uStack_44;
    *(uint *)(iVar2 + 0x10) = uStack_40;
    *(uint *)(iVar2 + 0x14) = uStack_3c;
  }
  core_actor_cpp_FUN_00408d70(param_1,iVar2 + 0xc);
  uStack_38 = uStack_50;
  *(uint *)((int)&stack0xffffffcc + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffb4 + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffb8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if ((uint *)(iVar2 + 0x58) == &stack0xffffffc8) {
    return;
  }
  *(uint *)(iVar2 + 0x58) = uStack_38;
  *(uint *)(iVar2 + 0x5c) = uStack_34;
  *(uint *)(iVar2 + 0x60) = uStack_30;
  return;
}
