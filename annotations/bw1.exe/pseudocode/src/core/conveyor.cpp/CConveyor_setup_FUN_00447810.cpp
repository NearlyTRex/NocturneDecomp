// Name: core_conveyor.cpp_CConveyor_setup_FUN_00447810
// Address: 00447810
// Address Range: [[00447810, 0044789c]]
// Convention: __cdecl
// Signature: void __cdecl core_conveyor_cpp_CConveyor_setup_FUN_00447810(CConveyor *this_ptr)

#include "nocturne.h"

void __cdecl core_conveyor_cpp_CConveyor_setup_FUN_00447810(CConveyor *this_ptr)

{
  byte *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStackY_17f8 [1526];
  uint uStack_1c;
  
  bVar6 = 0;
  puVar1 = &this_ptr->field_0x328;
  if (puVar1 != &this_ptr->field_0x20) {
    *(uint *)puVar1 = *(uint *)&this_ptr->field_0x20;
    *(uint *)&this_ptr->field_0x32c = *(uint *)&this_ptr->field_0x24;
    *(uint *)&this_ptr->field_0x330 = *(uint *)&this_ptr->field_0x28;
  }
  if (&this_ptr->field_0x31c != puVar1) {
    *(uint *)&this_ptr->field_0x31c = *(uint *)puVar1;
    *(uint *)&this_ptr->field_0x320 = *(uint *)&this_ptr->field_0x32c;
    *(uint *)&this_ptr->field_0x324 = *(uint *)&this_ptr->field_0x330;
  }
  core_xform_cpp_FUN_005b7ed0(&this_ptr->field_0x30);
  puVar2 = (uint *)((int)this_ptr + (uint)bVar6 * -8 + 0x348);
  *(uint *)&this_ptr->field_0x344 = uStack_1c;
  puVar3 = puVar2 + (uint)bVar6 * -2 + 1;
  *puVar2 = *(uint *)(&stack0xffffffe8 + (uint)bVar6 * -8);
  *puVar3 = *(uint *)(&stack0xffffffec + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  puVar3[(uint)bVar6 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffffec + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4)
  ;
  puVar4 = (uint *)((int)this_ptr + (uint)bVar6 * -8 + 0x338);
  puVar2 = (uint *)((int)this_ptr + (uint)bVar6 * -8 + 0x348);
  *(uint *)&this_ptr->field_0x334 = *(uint *)&this_ptr->field_0x344;
  puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
  puVar3 = puVar2 + (uint)bVar6 * -2 + 1;
  *puVar4 = *puVar2;
  *puVar5 = *puVar3;
  puVar5[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
  core_platfrm_cpp_CPlatform_setup_FUN_005395d0((CPlatform *)this_ptr);
  *(uint *)&this_ptr->field_0xfc = 1;
  return;
}
