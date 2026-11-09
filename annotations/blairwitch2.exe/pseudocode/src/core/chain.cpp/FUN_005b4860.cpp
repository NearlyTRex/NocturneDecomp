// Name: core_chain.cpp_FUN_005b4860
// Address: 005b4860
// Address Range: [[005b4860, 005b48d2]]
// Convention: unknown
// Signature: void core_chain_cpp_FUN_005b4860(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_chain_cpp_FUN_005b4860(int param_1)

{
  uint *unaff_ESI;
  byte bVar1;
  uint auStackY_1018 [1016];
  uint uStack_30;
  uint uStack_24;
  uint uStack_18;
  
  bVar1 = 0;
  core_xform_cpp_FUN_00591530
            (&DAT_0265370c,*(int *)(param_1 + 0x168) * 0x30 + *(int *)(param_1 + 0x164) + 0xfd8);
  uStack_24 = uStack_18;
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar1 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffec + (uint)bVar1 * -8);
  *(uint *)(&stack0xffffffe4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  core_actor_cpp_FUN_00408d70(*(uint *)(param_1 + 0x164),&stack0xffffffdc);
  *unaff_ESI = uStack_30;
  unaff_ESI[(uint)bVar1 * -2 + 1] = *(uint *)(&stack0xffffffd4 + (uint)bVar1 * -8);
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       *(uint *)(&stack0xffffffd8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  return;
}
