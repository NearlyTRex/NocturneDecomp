// Name: core_boneguy.cpp_FUN_0041a2e0
// Address: 0041a2e0
// Address Range: [[0041a2e0, 0041a3ad]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_FUN_0041a2e0(CBoneGuy *this_ptr)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_FUN_0041a2e0(CBoneGuy *this_ptr)

{
  int iVar1;
  CBoneGuy *pCVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  int aiStackY_1800 [1525];
  uint local_24;
  int local_14;
  
  bVar6 = 0;
  local_14 = 0;
  if (0 < *(int *)&this_ptr->field_0x10b74) {
    puVar3 = (uint *)&this_ptr->field_0x10bb0;
    pCVar2 = this_ptr;
    do {
      core_xform_cpp_FUN_00594380(*(int *)&pCVar2->field_0x10bbc + 0x30);
      puVar4 = (uint *)((int)pCVar2 + (uint)bVar6 * -8 + 0x10b94);
      *(uint *)&pCVar2->field_0x10b90 = local_24;
      puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
      *puVar4 = *(uint *)(&stack0xffffffe0 + (uint)bVar6 * -8);
      *puVar5 = *(uint *)(&stack0xffffffe4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      puVar5[(uint)bVar6 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffe4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
            ((uint)bVar6 * -2 + 1) * 4);
      *(uint *)(*(int *)&pCVar2->field_0x10bbc + 0x1334) = 0;
      iVar1 = *(int *)&pCVar2->field_0x10bbc;
      if (puVar3 != (uint *)(iVar1 + 0x20)) {
        *puVar3 = *(uint *)(iVar1 + 0x20);
        puVar3[1] = *(uint *)(iVar1 + 0x24);
        puVar3[2] = *(uint *)(iVar1 + 0x28);
      }
      local_14 = local_14 + 1;
      puVar3 = puVar3 + 0x12;
      pCVar2 = (CBoneGuy *)&pCVar2->field_0x48;
    } while (local_14 < *(int *)&this_ptr->field_0x10b74);
  }
  *(uint *)&this_ptr->field_0x11118 = 2;
  *(uint *)&this_ptr->field_0x1111c = 0;
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr,"boneguy-comeback.wav");
  return;
}
