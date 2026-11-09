// Name: core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044dc90
// Address: 0044dc90
// Address Range: [[0044dc90, 0044dd65]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0044dc90(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_0044dc90(CDemonCamera *this_ptr)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  uint auStackY_1000 [1017];
  uint local_18;
  
  bVar3 = 0;
  *(uint *)&this_ptr->field_0x178 = _DAT_01c51d5c;
  *(uint *)&this_ptr->field_0x17c = _DAT_01c51d60;
  *(uint *)&this_ptr->field_0x180 = _DAT_01c51d64;
  *(uint *)&this_ptr->field_0x184 = _DAT_01c51d68;
  *(uint *)&this_ptr->field_0x188 = _DAT_01c51d6c;
  *(uint *)&this_ptr->field_0x18c = _DAT_01c51d70;
  *(uint *)&this_ptr->field_0x190 = _DAT_01c51d74;
  uVar1 = DAT_00612560;
  *(uint *)&this_ptr->field_0x194 = _DAT_01c51d78;
  *(uint *)&this_ptr->field_0x198 = _DAT_01c51d7c;
  engine_matrix_c_FUN_00483ac0(uVar1);
  puVar2 = (uint *)((int)this_ptr + (uint)bVar3 * -8 + 0x170);
  *(uint *)&this_ptr->field_0x16c = local_18;
  *puVar2 = *(uint *)(&stack0xffffffec + (uint)bVar3 * -8);
  puVar2[(uint)bVar3 * -2 + 1] =
       *(uint *)(&stack0xfffffff0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  *(uint *)&this_ptr->field_0x1c0 = _DAT_01c4eff8;
  *(uint *)&this_ptr->field_0x1c4 = _DAT_01c4effc;
  *(uint *)&this_ptr->field_0x1c8 = _DAT_01c4f000;
  *(uint *)&this_ptr->field_0x1cc = _DAT_01c4f004;
  core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_0044d9f0(this_ptr);
  return;
}
