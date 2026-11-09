// Name: core_flies.cpp_FUN_004a7560
// Address: 004a7560
// Address Range: [[004a7560, 004a7654]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_FUN_004a7560(CFlies *this_ptr,int fly_index)

#include "nocturne.h"

void __cdecl core_flies_cpp_FUN_004a7560(CFlies *this_ptr,int fly_index)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint *apuStackY_1034 [1016];
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_28;
  uint *puStack_1c;
  uint *puStack_18;
  
  bVar4 = 0;
  puStack_1c = (uint *)(&this_ptr->field_0x2c4 + fly_index * 0x34);
  core_flies_cpp_FUN_004a7660(this_ptr,0);
  puVar3 = puStack_1c;
  puVar2 = puStack_1c + 1;
  uStack_4c = uStack_28;
  *(uint *)((int)&stack0xffffffb8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffbc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  if (puVar2 != &stack0xffffffb4) {
    *puVar2 = uStack_4c;
    puVar3[2] = uStack_48;
    puVar3[3] = uStack_44;
  }
  puVar3 = puStack_1c + 1;
  puStack_18 = puStack_1c + 10;
  puVar2 = puStack_1c + 4;
  do {
    core_flies_cpp_FUN_004a7660(this_ptr,puVar3);
    uStack_40 = uStack_34;
    *(uint *)((int)&stack0xffffffc4 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffd0 + (uint)bVar4 * -8);
    *(uint *)((int)&stack0xffffffc8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffd4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    if (puVar2 != &stack0xffffffc0) {
      *puVar2 = uStack_40;
      puVar2[1] = uStack_3c;
      puVar2[2] = uStack_38;
    }
    puVar3 = puVar3 + 3;
    puVar2 = puVar2 + 3;
  } while (puVar3 != puStack_18);
  uVar1 = core_actor_cpp_FUN_0040cf60(0,0x3f800000);
  *puStack_1c = uVar1;
  return;
}
