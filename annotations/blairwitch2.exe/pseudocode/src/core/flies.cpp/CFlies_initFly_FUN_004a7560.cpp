// Name: core_flies.cpp_CFlies_initFly_FUN_004a7560
// Address: 004a7560
// Address Range: [[004a7560, 004a7654]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_CFlies_initFly_FUN_004a7560(CFlies *this_ptr,int fly_index)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_flies_cpp_CFlies_initFly_FUN_004a7560(CFlies *this_ptr,int fly_index)

{
  SFly *pSVar1;
  float fVar2;
  uint *puVar3;
  byte *puVar4;
  byte bVar5;
  SFly *apSStackY_1034 [1016];
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  SFly *pSStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_28;
  SFly *pSStack_1c;
  byte *puStack_18;
  
  bVar5 = 0;
  pSStack_1c = this_ptr->flies + fly_index;
  core_flies_cpp_FUN_004a7660(this_ptr,0);
  pSVar1 = pSStack_1c;
  puVar4 = &pSStack_1c->field_0x4;
  uStack_4c = uStack_28;
  (&stack0xffffffb8)[(uint)bVar5 * 0xfffffffe] = (&stack0xffffffc4)[(uint)bVar5 * 0xfffffffe + 6];
  (&stack0xffffffc4)[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 0xfffffffe] =
       (&stack0xffffffc4)[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 7];
  if ((uint *)puVar4 != &stack0xffffffb4) {
    *(uint *)puVar4 = uStack_4c;
    *(uint *)&pSVar1->field_0x8 = uStack_48;
    *(uint *)&pSVar1->field_0xc = uStack_44;
  }
  puVar4 = &pSStack_1c->field_0x4;
  puStack_18 = &pSStack_1c->field_0x28;
  puVar3 = (uint *)&pSStack_1c->field_0x10;
  do {
    core_flies_cpp_FUN_004a7660(this_ptr,puVar4);
    uStack_40 = uStack_34;
    (&stack0xffffffc4)[(uint)bVar5 * 0xfffffffe] = (&stack0xffffffc4)[(uint)bVar5 * 0xfffffffe + 3];
    (&stack0xffffffc4)[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1] =
         (&stack0xffffffc4)[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 4];
    if (puVar3 != &stack0xffffffc0) {
      *puVar3 = uStack_40;
      puVar3[1] = pSStack_3c;
      puVar3[2] = uStack_38;
    }
    puVar4 = puVar4 + 0xc;
    puVar3 = puVar3 + 3;
  } while (puVar4 != puStack_18);
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
  *(float *)pSStack_1c = fVar2;
  return;
}
