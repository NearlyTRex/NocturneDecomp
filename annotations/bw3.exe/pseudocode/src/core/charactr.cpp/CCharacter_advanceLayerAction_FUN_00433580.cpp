// Name: core_charactr.cpp_CCharacter_advanceLayerAction_FUN_00433580
// Address: 00433580
// Address Range: [[00433580, 0043377b]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_advanceLayerAction_FUN_00433580(CCharacter *this_ptr,float *remaining_time,int target_bone_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_charactr_cpp_CCharacter_advanceLayerAction_FUN_00433580(CCharacter *this_ptr,float *remaining_time,int target_bone_index)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  float local_18;
  
  if ((*(int *)&this_ptr->field_0x2f00 < 0) ||
     (*(int *)&this_ptr->field_0x27c4 <= *(int *)&this_ptr->field_0x2f00)) {
    _DAT_01d71de0 = "..\\core\\charactr.cpp";
    _DAT_01d71de4 = 0x1269;
    core_main_c_FUN_004e4330("CCharacter::advanceLayerAction - invalid layerActionIndex");
  }
  piVar4 = (int *)(&this_ptr->field_0x27c8 + *(int *)&this_ptr->field_0x2f00 * 0x38);
  if (*(float *)&this_ptr->field_0x2f04 < 0.0) {
    *(uint *)&this_ptr->field_0x2f04 = 0;
  }
  if (1.0 < *(float *)&this_ptr->field_0x2f04) {
    *(uint *)&this_ptr->field_0x2f04 = 0x3f800000;
  }
  fVar1 = *(float *)&this_ptr->field_0x2f04 * (float)piVar4[0xd];
  local_18 = (float)piVar4[0xd] * (1.0 - *(float *)&this_ptr->field_0x2f04);
  iVar5 = piVar4[10];
  if (iVar5 != 0) goto LAB_00433692;
  fVar2 = *(float *)(&this_ptr->field_0xbc74 + target_bone_index * 4 + piVar4[1] * 0x84) + local_18;
  fVar3 = *(float *)(&this_ptr->field_0xbc74 + target_bone_index * 4 + *piVar4 * 0x84) + fVar1;
  if (fVar2 <= fVar3) {
    if (fVar2 < fVar3) {
      iVar5 = 1;
      goto LAB_00433692;
    }
    if (*(float *)(&this_ptr->field_0xbc74 + target_bone_index * 4 + piVar4[1] * 0x84) <=
        *(float *)(&this_ptr->field_0xbc74 + target_bone_index * 4 + *piVar4 * 0x84)) {
      iVar5 = 1;
      goto LAB_00433692;
    }
  }
  iVar5 = -1;
LAB_00433692:
  if (iVar5 < 0) {
    local_18 = fVar1;
  }
  if (*remaining_time < local_18) {
    fVar1 = ((float)iVar5 * *remaining_time) / (float)piVar4[0xd] +
            *(float *)&this_ptr->field_0x2f04;
    *(float *)&this_ptr->field_0x2f04 = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)&this_ptr->field_0x2f04 = 0;
    }
    if (1.0 < *(float *)&this_ptr->field_0x2f04) {
      *(uint *)&this_ptr->field_0x2f04 = 0x3f800000;
    }
    *remaining_time = 0.0;
    return -1;
  }
  *remaining_time = *remaining_time - local_18;
  if (-1 < iVar5) {
    iVar5 = piVar4[1];
    *(uint *)&this_ptr->field_0x2f04 = 0x3f800000;
    return iVar5;
  }
  iVar5 = *piVar4;
  *(uint *)&this_ptr->field_0x2f04 = 0;
  return iVar5;
}
