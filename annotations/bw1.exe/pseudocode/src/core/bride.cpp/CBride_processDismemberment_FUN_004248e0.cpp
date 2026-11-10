// Name: core_bride.cpp_CBride_processDismemberment_FUN_004248e0
// Address: 004248e0
// Address Range: [[004248e0, 00424b0a]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_CBride_processDismemberment_FUN_004248e0(CBride *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bride_cpp_CBride_processDismemberment_FUN_004248e0(CBride *this_ptr,SDamageInfo *damage_info)

{
  int iVar1;
  CBodyPart *body_part;
  float local_20;
  
  if ((0.0 < *(float *)(damage_info + 0x2c)) && (*(int *)damage_info == -1)) {
    iVar1 = rand();
    switch(iVar1 % 5) {
    case 0:
      iVar1 = this_ptr->part_indices[0];
      break;
    case 1:
      iVar1 = this_ptr->part_indices[1];
      break;
    case 2:
      iVar1 = this_ptr->part_indices[2];
      break;
    case 3:
      iVar1 = this_ptr->part_indices[3];
      break;
    case 4:
      iVar1 = this_ptr->part_indices[8];
      break;
    default:
      goto switchD_00424919_default;
    }
    *(int *)damage_info = iVar1;
  }
switchD_00424919_default:
  iVar1 = *(int *)damage_info;
  if ((((iVar1 == this_ptr->part_indices[0]) || (iVar1 == this_ptr->part_indices[1])) ||
      (iVar1 == this_ptr->part_indices[2])) ||
     ((iVar1 == this_ptr->part_indices[3] || (iVar1 == this_ptr->part_indices[8])))) {
    local_20 = *(float *)(damage_info + 0x2c);
    if (this_ptr->part_indices[8] == *(int *)damage_info) {
      local_20 = local_20 * (float)_DAT_005d4fa8;
    }
    if (*(int *)&g_CGamePtr->field_0x1fc != 0) {
      local_20 = 1.0;
    }
    if (*(int *)&g_CGamePtr->field_0x14 == 0) {
      local_20 = 0.0;
    }
    iVar1 = core_actor_cpp_randomChance_FUN_0040cd00(local_20);
    if (iVar1 != 0) {
      body_part = core_bodypart_cpp_createBodyPart_FUN_00418940
                            (&(this_ptr->base).base.base.location.position,
                             &(this_ptr->base).base.base.orient,(CVector3f *)(damage_info + 0xc),
                             (CDemonActor *)this_ptr,0,0,BLOOD_TYPE_RED);
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210
                ((CCharacter *)this_ptr,body_part,*(int *)damage_info,0);
      if (*(int *)damage_info == this_ptr->part_indices[0]) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210
                  ((CCharacter *)this_ptr,body_part,this_ptr->part_indices[1],0);
      }
      if (this_ptr->part_indices[2] == *(int *)damage_info) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210
                  ((CCharacter *)this_ptr,body_part,this_ptr->part_indices[3],0);
      }
      core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_004352e0
                ((CCharacter *)this_ptr,"limb?.wav");
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00419b90(body_part);
      if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[8] * 4) == 0)
      {
        *(uint *)(damage_info + 4) = 0x461c3c00;
      }
      *(float *)(damage_info + 8) = *(float *)(damage_info + 8) * (float)_DAT_005d4fb0;
    }
  }
  iVar1 = *(int *)damage_info;
  if (iVar1 == this_ptr->part_indices[8]) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005d4fc0;
    return;
  }
  if ((iVar1 != this_ptr->part_indices[7]) && (iVar1 != this_ptr->part_indices[6])) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005d4fb8;
    return;
  }
  *(uint *)(damage_info + 4) = *(uint *)(damage_info + 4);
  return;
}
