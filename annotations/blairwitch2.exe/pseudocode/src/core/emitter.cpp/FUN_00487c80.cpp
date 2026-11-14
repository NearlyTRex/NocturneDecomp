// Name: core_emitter.cpp_FUN_00487c80
// Address: 00487c80
// Address Range: [[00487c80, 00487d23]]
// Convention: unknown
// Signature: void core_emitter_cpp_FUN_00487c80(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_emitter_cpp_FUN_00487c80(int param_1)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1004 [1001];
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  uint uStack_1c;
  float fStack_10;
  
  bVar4 = 0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
  puVar2 = (uint *)&stack0xffffffc0;
  puVar3 = &stack0xffffffa8;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  fStack_28 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(local_58,fStack_4c);
  fStack_10 = fStack_28;
  fStack_24 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fStack_54,fStack_48);
  fStack_10 = fStack_24;
  fStack_20 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fStack_50,fStack_44);
  fStack_10 = fStack_20;
  core_actor_cpp_FUN_00408d70(param_1,&stack0xffffffd8);
  *unaff_ESI = uStack_1c;
  unaff_ESI[(uint)bVar4 * -2 + 1] =
       *(uint *)((int)&stack0xffffffe8 + (uint)bVar4 * 0xfffffffe * 4);
  (unaff_ESI + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       *(uint *)(&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  return;
}
