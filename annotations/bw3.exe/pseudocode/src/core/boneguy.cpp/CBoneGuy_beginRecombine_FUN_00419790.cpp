// Name: core_boneguy.cpp_CBoneGuy_beginRecombine_FUN_00419790
// Address: 00419790
// Address Range: [[00419790, 0041985d]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_beginRecombine_FUN_00419790(CBoneGuy *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_boneguy_cpp_CBoneGuy_beginRecombine_FUN_00419790(CBoneGuy *this_ptr)

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
  if (0 < *(int *)&this_ptr->field_0xd0e8) {
    puVar3 = (uint *)&this_ptr->field_0xd128;
    pCVar2 = this_ptr;
    do {
      core_xform_cpp_FUN_005860b0(*(int *)&pCVar2->field_0xd134 + 0x30);
      puVar4 = (uint *)((int)pCVar2 + (uint)bVar6 * -8 + 0xd10c);
      *(uint *)&pCVar2->field_0xd108 = local_24;
      puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
      *puVar4 = *(uint *)(&stack0xffffffe0 + (uint)bVar6 * -8);
      *puVar5 = *(uint *)(&stack0xffffffe4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      puVar5[(uint)bVar6 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffe4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
            ((uint)bVar6 * -2 + 1) * 4);
      *(uint *)(*(int *)&pCVar2->field_0xd134 + 0xf24) = 0;
      iVar1 = *(int *)&pCVar2->field_0xd134;
      if (puVar3 != (uint *)(iVar1 + 0x20)) {
        *puVar3 = *(uint *)(iVar1 + 0x20);
        puVar3[1] = *(uint *)(iVar1 + 0x24);
        puVar3[2] = *(uint *)(iVar1 + 0x28);
      }
      local_14 = local_14 + 1;
      puVar3 = puVar3 + 0x12;
      pCVar2 = (CBoneGuy *)((pCVar2->base).base.base.orient_matrix.m + 1);
    } while (local_14 < *(int *)&this_ptr->field_0xd0e8);
  }
  *(uint *)&this_ptr->field_0xd0e4 = 2;
  *(uint *)&this_ptr->field_0xd694 = 0;
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"boneguy-comeback.wav");
  return;
}
