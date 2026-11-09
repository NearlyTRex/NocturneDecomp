// Name: core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_00449dd0
// Address: 00449dd0
// Address Range: [[00449dd0, 00449ea5]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_00449dd0(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_00449dd0(CDemonCamera *this_ptr)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  uint auStackY_1000 [1017];
  uint local_18;
  
  bVar3 = 0;
  *(uint *)&this_ptr->field_0x178 = _DAT_01c6e2fc;
  *(uint *)&this_ptr->field_0x17c = _DAT_01c6e300;
  *(uint *)&this_ptr->field_0x180 = _DAT_01c6e304;
  *(uint *)&this_ptr->field_0x184 = _DAT_01c6e308;
  *(uint *)&this_ptr->field_0x188 = _DAT_01c6e30c;
  *(uint *)&this_ptr->field_0x18c = _DAT_01c6e310;
  *(uint *)&this_ptr->field_0x190 = _DAT_01c6e314;
  uVar1 = DAT_005f2afc;
  *(uint *)&this_ptr->field_0x194 = _DAT_01c6e318;
  *(uint *)&this_ptr->field_0x198 = _DAT_01c6e31c;
  engine_matrix_c_FUN_0046d1a0(uVar1);
  puVar2 = (uint *)((int)this_ptr + (uint)bVar3 * -8 + 0x170);
  *(uint *)&this_ptr->field_0x16c = local_18;
  *puVar2 = *(uint *)(&stack0xffffffec + (uint)bVar3 * -8);
  puVar2[(uint)bVar3 * -2 + 1] =
       *(uint *)(&stack0xfffffff0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  *(uint *)&this_ptr->field_0x1c0 = _DAT_01c6b598;
  *(uint *)&this_ptr->field_0x1c4 = _DAT_01c6b59c;
  *(uint *)&this_ptr->field_0x1c8 = _DAT_01c6b5a0;
  *(uint *)&this_ptr->field_0x1cc = _DAT_01c6b5a4;
  core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_00449b30(this_ptr);
  return;
}
