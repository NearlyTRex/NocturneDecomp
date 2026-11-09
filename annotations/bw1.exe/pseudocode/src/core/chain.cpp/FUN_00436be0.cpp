// Name: core_chain.cpp_FUN_00436be0
// Address: 00436be0
// Address Range: [[00436be0, 00436d48]]
// Convention: unknown
// Signature: void core_chain_cpp_FUN_00436be0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_chain_cpp_FUN_00436be0(int param_1)

{
  uint *unaff_ESI;
  float *pfVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  float afStackY_103c [1010];
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint uStack_24;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar4 = 0;
  fStack_2c = 9999.0;
  fStack_28 = 9999.0;
  fStack_3c = -9999.0;
  fStack_38 = -9999.0;
  fStack_34 = -9999.0;
  fStack_30 = 9999.0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x158)) {
    pfVar1 = (float *)(param_1 + 0x28c);
    do {
      if (*pfVar1 < fStack_30) {
        fStack_30 = *pfVar1;
      }
      if (pfVar1[1] < fStack_2c) {
        fStack_2c = pfVar1[1];
      }
      if (pfVar1[2] < fStack_28) {
        fStack_28 = pfVar1[2];
      }
      if (fStack_3c < *pfVar1) {
        fStack_3c = *pfVar1;
      }
      if (fStack_38 < pfVar1[1]) {
        fStack_38 = pfVar1[1];
      }
      if (fStack_34 < pfVar1[2]) {
        fStack_34 = pfVar1[2];
      }
      iVar3 = iVar3 + 1;
      pfVar1 = pfVar1 + 9;
    } while (iVar3 < *(int *)(param_1 + 0x158));
  }
  core_actor_cpp_FUN_00408bb0(param_1,&stack0xffffffd0);
  uStack_18 = uStack_24;
  (&stack0xffffffec)[(uint)bVar4 * 0xfffffffe] =
       *(uint *)((int)&stack0xffffffe0 + (uint)bVar4 * 0xfffffffe * 4);
  *(uint *)((int)&stack0xfffffff0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffe4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  if (&stack0xffffff94 != &stack0xffffffe8) {
    uStack_6c = uStack_18;
    uStack_68 = uStack_14;
    uStack_64 = uStack_10;
  }
  core_actor_cpp_FUN_00408bb0(param_1,&stack0xffffffc4);
  uStack_54 = uStack_48;
  (&stack0xffffffb0)[(uint)bVar4 * 0xfffffffe] =
       *(uint *)(&stack0xffffffbc + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffb4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  if (&stack0xffffffa0 == &stack0xffffffac) {
    puVar2 = &stack0xffffff94;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *unaff_ESI = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      unaff_ESI = unaff_ESI + (uint)bVar4 * -2 + 1;
    }
    return;
  }
  uStack_60 = uStack_54;
  uStack_5c = uStack_50;
  uStack_58 = uStack_4c;
  puVar2 = &stack0xffffff94;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar4 * -2 + 1;
  }
  return;
}
