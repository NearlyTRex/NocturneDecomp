// Name: core_platfrm.cpp_FUN_00512be0
// Address: 00512be0
// Address Range: [[00512be0, 00512ced]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_FUN_00512be0(CPlatform *this_ptr)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_FUN_00512be0(CPlatform *this_ptr)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_1034 [979];
  byte local_dc [48];
  uint local_ac [12];
  uint local_7c [12];
  uint local_4c;
  uint auStack_48 [5];
  uint local_34 [3];
  uint local_28 [3];
  int local_1c;
  int local_18;
  byte *local_14;
  
  bVar5 = 0;
  core_xform_cpp_FUN_00583940(local_dc,&this_ptr->field_0x20,&this_ptr->field_0x30);
  local_14 = &this_ptr->field_0x51c;
  iVar2 = 0;
  do {
    if (*(int *)&this_ptr->field_0x51c != 0) {
      core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_14 + iVar2 * 0x34 + 4,local_dc);
      puVar3 = local_ac;
      puVar4 = local_7c;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      local_1c = *(int *)&this_ptr->field_0x51c;
      local_18 = *(int *)(local_1c + 0x154);
      core_xform_cpp_FUN_00583b10(local_7c);
      local_34[0] = auStack_48[2];
      auStack_48[(uint)bVar5 * -2 + 6] = auStack_48[(uint)bVar5 * -2 + 3];
      auStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
           auStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      core_xform_cpp_FUN_00584450(local_7c,auStack_48 + 5);
      local_28[0] = local_4c;
      auStack_48[(uint)bVar5 * -2 + 9] = auStack_48[(uint)bVar5 * -2];
      auStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
           auStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      (**(code **)(local_18 + 0x68))(local_1c,auStack_48 + 8);
    }
    iVar2 = iVar2 + 1;
    this_ptr = (CPlatform *)&this_ptr->field_0x34;
  } while (iVar2 < 10);
  return;
}
