// Name: core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0043c5d0
// Address: 0043c5d0
// Address Range: [[0043c5d0, 0043c6a5]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0043c5d0(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0043c5d0(CDemonCamera *this_ptr)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  uint auStackY_1000 [1017];
  uint local_18;
  
  bVar3 = 0;
  *(uint *)&this_ptr->field_0x178 = _DAT_01c38b9c;
  *(uint *)&this_ptr->field_0x17c = _DAT_01c38ba0;
  *(uint *)&this_ptr->field_0x180 = _DAT_01c38ba4;
  *(uint *)&this_ptr->field_0x184 = _DAT_01c38ba8;
  *(uint *)&this_ptr->field_0x188 = _DAT_01c38bac;
  *(uint *)&this_ptr->field_0x18c = _DAT_01c38bb0;
  *(uint *)&this_ptr->field_0x190 = _DAT_01c38bb4;
  uVar1 = DAT_0060b280;
  *(uint *)&this_ptr->field_0x194 = _DAT_01c38bb8;
  *(uint *)&this_ptr->field_0x198 = _DAT_01c38bbc;
  engine_matrix_c_FUN_0046b5c0(uVar1);
  puVar2 = (uint *)((int)this_ptr + (uint)bVar3 * -8 + 0x170);
  *(uint *)&this_ptr->field_0x16c = local_18;
  *puVar2 = *(uint *)(&stack0xffffffec + (uint)bVar3 * -8);
  puVar2[(uint)bVar3 * -2 + 1] =
       *(uint *)(&stack0xfffffff0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  *(uint *)&this_ptr->field_0x1c0 = _DAT_01c35e38;
  *(uint *)&this_ptr->field_0x1c4 = _DAT_01c35e3c;
  *(uint *)&this_ptr->field_0x1c8 = _DAT_01c35e40;
  *(uint *)&this_ptr->field_0x1cc = _DAT_01c35e44;
  core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_0043c330(this_ptr);
  return;
}
