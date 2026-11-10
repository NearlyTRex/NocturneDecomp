// Name: core_boneguy.cpp_CBoneGuy_beginRecombine_FUN_0041a2e0
// Address: 0041a2e0
// Address Range: [[0041a2e0, 0041a3ad]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_beginRecombine_FUN_0041a2e0(CBoneGuy *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_boneguy_cpp_CBoneGuy_beginRecombine_FUN_0041a2e0(CBoneGuy *this_ptr)

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
  if (0 < this_ptr->box_count) {
    puVar3 = (uint *)&this_ptr->boxes[0].field_0x38;
    pCVar2 = this_ptr;
    do {
      core_xform_cpp_FUN_00594380(*(int *)&pCVar2->boxes[0].field_0x44 + 0x30);
      puVar4 = (uint *)((int)pCVar2 + (uint)bVar6 * -8 + 0x10b94);
      *(uint *)&pCVar2->boxes[0].field_0x18 = local_24;
      puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
      *puVar4 = *(uint *)(&stack0xffffffe0 + (uint)bVar6 * -8);
      *puVar5 = *(uint *)(&stack0xffffffe4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      puVar5[(uint)bVar6 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffe4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
            ((uint)bVar6 * -2 + 1) * 4);
      *(uint *)(*(int *)&pCVar2->boxes[0].field_0x44 + 0x1334) = 0;
      iVar1 = *(int *)&pCVar2->boxes[0].field_0x44;
      if (puVar3 != (uint *)(iVar1 + 0x20)) {
        *puVar3 = *(uint *)(iVar1 + 0x20);
        puVar3[1] = *(uint *)(iVar1 + 0x24);
        puVar3[2] = *(uint *)(iVar1 + 0x28);
      }
      local_14 = local_14 + 1;
      puVar3 = puVar3 + 0x12;
      pCVar2 = (CBoneGuy *)((pCVar2->base).base.base.orient_matrix.m + 1);
    } while (local_14 < this_ptr->box_count);
  }
  this_ptr->blown_up = 2;
  this_ptr->recombine_interpolation = 0.0;
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"boneguy-comeback.wav");
  return;
}
