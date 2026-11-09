// Name: core_emitter.cpp_FUN_00488ea0
// Address: 00488ea0
// Address Range: [[00488ea0, 00488f43]]
// Convention: unknown
// Signature: void core_emitter_cpp_FUN_00488ea0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_emitter_cpp_FUN_00488ea0(int param_1)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1004 [1001];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_10;
  
  bVar4 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
  puVar2 = (uint *)&stack0xffffffc0;
  puVar3 = &stack0xffffffa8;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  uStack_28 = core_actor_cpp_FUN_0040ce40(local_58,uStack_4c);
  uStack_10 = uStack_28;
  uStack_24 = core_actor_cpp_FUN_0040ce40(uStack_54,uStack_48);
  uStack_10 = uStack_24;
  uStack_20 = core_actor_cpp_FUN_0040ce40(uStack_50,uStack_44);
  uStack_10 = uStack_20;
  core_actor_cpp_FUN_00408b80(param_1,&stack0xffffffd8);
  *unaff_ESI = uStack_1c;
  unaff_ESI[(uint)bVar4 * -2 + 1] =
       *(uint *)((int)&stack0xffffffe8 + (uint)bVar4 * 0xfffffffe * 4);
  (unaff_ESI + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       *(uint *)(&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  return;
}
