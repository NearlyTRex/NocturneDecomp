// Name: core_bride.cpp_CBride_processDismemberment_FUN_0041e8a0
// Address: 0041e8a0
// Address Range: [[0041e8a0, 0041eaca]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_CBride_processDismemberment_FUN_0041e8a0(CBride *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bride_cpp_CBride_processDismemberment_FUN_0041e8a0(CBride *this_ptr,SDamageInfo *damage_info)

{
  int iVar1;
  uint uVar2;
  CBodyPart *body_part;
  float local_20;
  
  if ((0.0 < *(float *)(damage_info + 0x2c)) && (*(int *)damage_info == -1)) {
    iVar1 = rand();
    switch(iVar1 % 5) {
    case 0:
      uVar2 = *(uint *)&this_ptr->field_0x10af8;
      break;
    case 1:
      uVar2 = *(uint *)&this_ptr->field_0x10afc;
      break;
    case 2:
      uVar2 = *(uint *)&this_ptr->field_0x10b00;
      break;
    case 3:
      uVar2 = *(uint *)&this_ptr->field_0x10b04;
      break;
    case 4:
      uVar2 = *(uint *)&this_ptr->field_0x10b18;
      break;
    default:
      goto switchD_0041e8d9_default;
    }
    *(uint *)damage_info = uVar2;
  }
switchD_0041e8d9_default:
  iVar1 = *(int *)damage_info;
  if ((((iVar1 == *(int *)&this_ptr->field_0x10af8) || (iVar1 == *(int *)&this_ptr->field_0x10afc))
      || (iVar1 == *(int *)&this_ptr->field_0x10b00)) ||
     ((iVar1 == *(int *)&this_ptr->field_0x10b04 || (iVar1 == *(int *)&this_ptr->field_0x10b18)))) {
    local_20 = *(float *)(damage_info + 0x2c);
    if (*(int *)&this_ptr->field_0x10b18 == *(int *)damage_info) {
      local_20 = local_20 * (float)_DAT_005cc8b9;
    }
    if (*(int *)&g_CGamePtr->field_0x1fc != 0) {
      local_20 = 1.0;
    }
    if (*(int *)&g_CGamePtr->field_0x14 == 0) {
      local_20 = 0.0;
    }
    iVar1 = core_actor_cpp_FUN_0040d060(local_20);
    if (iVar1 != 0) {
      body_part = core_bodypart_cpp_FUN_004154f0
                            ((CVector3f *)&this_ptr->field_0x20,
                             (UOrientationVector *)&this_ptr->field_0x30,
                             (CVector3f *)(damage_info + 0xc),(CDemonActor *)this_ptr,0,0,
                             BLOOD_TYPE_RED);
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
                ((CCharacter *)this_ptr,body_part,*(int *)damage_info,0);
      if (*(int *)damage_info == *(int *)&this_ptr->field_0x10af8) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
                  ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0x10afc,0);
      }
      if (*(int *)&this_ptr->field_0x10b00 == *(int *)damage_info) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
                  ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0x10b04,0);
      }
      core_charactr_cpp_FUN_0042b260((CCharacter *)this_ptr,"limb?.wav");
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416700(body_part);
      if (*(int *)(&this_ptr->field_0x23f4 + *(int *)&this_ptr->field_0x10b18 * 4) == 0) {
        *(uint *)(damage_info + 4) = 0x461c3c00;
      }
      *(float *)(damage_info + 8) = *(float *)(damage_info + 8) * (float)_DAT_005cc8c1;
    }
  }
  iVar1 = *(int *)damage_info;
  if (iVar1 == *(int *)&this_ptr->field_0x10b18) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005cc8d1;
    return;
  }
  if ((iVar1 != *(int *)&this_ptr->field_0x10b14) && (iVar1 != *(int *)&this_ptr->field_0x10b10)) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005cc8c9;
    return;
  }
  *(uint *)(damage_info + 4) = *(uint *)(damage_info + 4);
  return;
}
