// Name: core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042a0c0
// Address: 0042a0c0
// Address Range: [[0042a0c0, 0042a2c9]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042a0c0(CCharacter *this_ptr,float *remaining_time,int target_bone_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042a0c0(CCharacter *this_ptr,float *remaining_time,int target_bone_index)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  float local_18;
  
  if ((*(int *)&this_ptr->field_0x2d04 < 0) ||
     (*(int *)&this_ptr->field_0x2830 <= *(int *)&this_ptr->field_0x2d04)) {
    _DAT_01d046a0 = "..\\core\\charactr.cpp";
    _DAT_01d046a4 = 0x114a;
    core_main_c_FUN_004e4500("CCharacter::advanceLayerAction - invalid layerActionIndex");
  }
  piVar4 = (int *)(&this_ptr->field_0x2834 + *(int *)&this_ptr->field_0x2d04 * 0x38);
  if (*(float *)&this_ptr->field_0x2d08 < 0.0) {
    *(uint *)&this_ptr->field_0x2d08 = 0;
  }
  if (1.0 < *(float *)&this_ptr->field_0x2d08) {
    *(uint *)&this_ptr->field_0x2d08 = 0x3f800000;
  }
  fVar1 = *(float *)&this_ptr->field_0x2d08 * (float)piVar4[0xd];
  local_18 = (float)piVar4[0xd] * (1.0 - *(float *)&this_ptr->field_0x2d08);
  iVar5 = piVar4[10];
  if (iVar5 != 0) goto LAB_0042a1e0;
  fVar2 = *(float *)(&this_ptr->field_0x10230 + target_bone_index * 4 + piVar4[1] * 0x58) + local_18
  ;
  fVar3 = *(float *)(&this_ptr->field_0x10230 + target_bone_index * 4 + *piVar4 * 0x58) + fVar1;
  if (fVar2 <= fVar3) {
    if (fVar2 < fVar3) {
      iVar5 = 1;
      goto LAB_0042a1e0;
    }
    if (*(float *)(&this_ptr->field_0x10230 + target_bone_index * 4 + piVar4[1] * 0x58) <=
        *(float *)(&this_ptr->field_0x10230 + target_bone_index * 4 + *piVar4 * 0x58)) {
      iVar5 = 1;
      goto LAB_0042a1e0;
    }
  }
  iVar5 = -1;
LAB_0042a1e0:
  if (iVar5 < 0) {
    local_18 = fVar1;
  }
  if (*remaining_time < local_18) {
    fVar1 = ((float)iVar5 * *remaining_time) / (float)piVar4[0xd] +
            *(float *)&this_ptr->field_0x2d08;
    *(float *)&this_ptr->field_0x2d08 = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)&this_ptr->field_0x2d08 = 0;
    }
    if (1.0 < *(float *)&this_ptr->field_0x2d08) {
      *(uint *)&this_ptr->field_0x2d08 = 0x3f800000;
    }
    *remaining_time = 0.0;
    return -1;
  }
  *remaining_time = *remaining_time - local_18;
  if (-1 < iVar5) {
    iVar5 = piVar4[1];
    *(uint *)&this_ptr->field_0x2d08 = 0x3f800000;
    return iVar5;
  }
  iVar5 = *piVar4;
  *(uint *)&this_ptr->field_0x2d08 = 0;
  return iVar5;
}
