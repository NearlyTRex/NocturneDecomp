// Name: core_boneguy.cpp_FUN_0041d760
// Address: 0041d760
// Address Range: [[0041d760, 0041d82d]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_FUN_0041d760(CBoneGuy *this_ptr)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_FUN_0041d760(CBoneGuy *this_ptr)

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
  if (0 < *(int *)&this_ptr->field_0xc2e4) {
    puVar3 = (uint *)&this_ptr->field_0xc320;
    pCVar2 = this_ptr;
    do {
      core_xform_cpp_FUN_005b7ed0(*(int *)&pCVar2->field_0xc32c + 0x30);
      puVar4 = (uint *)((int)pCVar2 + (uint)bVar6 * -8 + 0xc304);
      *(uint *)&pCVar2->field_0xc300 = local_24;
      puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
      *puVar4 = *(uint *)(&stack0xffffffe0 + (uint)bVar6 * -8);
      *puVar5 = *(uint *)(&stack0xffffffe4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      puVar5[(uint)bVar6 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffe4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
            ((uint)bVar6 * -2 + 1) * 4);
      *(uint *)(*(int *)&pCVar2->field_0xc32c + 0xf24) = 0;
      iVar1 = *(int *)&pCVar2->field_0xc32c;
      if (puVar3 != (uint *)(iVar1 + 0x20)) {
        *puVar3 = *(uint *)(iVar1 + 0x20);
        puVar3[1] = *(uint *)(iVar1 + 0x24);
        puVar3[2] = *(uint *)(iVar1 + 0x28);
      }
      local_14 = local_14 + 1;
      puVar3 = puVar3 + 0x12;
      pCVar2 = (CBoneGuy *)&pCVar2->field_0x48;
    } while (local_14 < *(int *)&this_ptr->field_0xc2e4);
  }
  *(uint *)&this_ptr->field_0xc888 = 2;
  *(uint *)&this_ptr->field_0xc88c = 0;
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"boneguy-comeback.wav");
  return;
}
