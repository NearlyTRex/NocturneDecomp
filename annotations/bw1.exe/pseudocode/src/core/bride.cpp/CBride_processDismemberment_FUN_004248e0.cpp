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
  uint uVar2;
  CBodyPart *body_part;
  float local_20;
  
  if ((0.0 < *(float *)(damage_info + 0x2c)) && (*(int *)damage_info == -1)) {
    iVar1 = rand();
    switch(iVar1 % 5) {
    case 0:
      uVar2 = *(uint *)&this_ptr->field_0xc268;
      break;
    case 1:
      uVar2 = *(uint *)&this_ptr->field_0xc26c;
      break;
    case 2:
      uVar2 = *(uint *)&this_ptr->field_0xc270;
      break;
    case 3:
      uVar2 = *(uint *)&this_ptr->field_0xc274;
      break;
    case 4:
      uVar2 = *(uint *)&this_ptr->field_0xc288;
      break;
    default:
      goto switchD_00424919_default;
    }
    *(uint *)damage_info = uVar2;
  }
switchD_00424919_default:
  iVar1 = *(int *)damage_info;
  if ((((iVar1 == *(int *)&this_ptr->field_0xc268) || (iVar1 == *(int *)&this_ptr->field_0xc26c)) ||
      (iVar1 == *(int *)&this_ptr->field_0xc270)) ||
     ((iVar1 == *(int *)&this_ptr->field_0xc274 || (iVar1 == *(int *)&this_ptr->field_0xc288)))) {
    local_20 = *(float *)(damage_info + 0x2c);
    if (*(int *)&this_ptr->field_0xc288 == *(int *)damage_info) {
      local_20 = local_20 * (float)_DAT_005d4fa8;
    }
    if (*(int *)&g_CGamePtr->field_0x1fc != 0) {
      local_20 = 1.0;
    }
    if (*(int *)&g_CGamePtr->field_0x14 == 0) {
      local_20 = 0.0;
    }
    iVar1 = core_actor_cpp_FUN_0040cd00(local_20);
    if (iVar1 != 0) {
      body_part = core_bodypart_cpp_FUN_00418940
                            ((CVector3f *)&this_ptr->field_0x20,
                             (UOrientationVector *)&this_ptr->field_0x30,
                             (CVector3f *)(damage_info + 0xc),(CDemonActor *)this_ptr,0,0,
                             BLOOD_TYPE_RED);
      core_charactr_cpp_FUN_00431210((CCharacter *)this_ptr,body_part,*(int *)damage_info,0);
      if (*(int *)damage_info == *(int *)&this_ptr->field_0xc268) {
        core_charactr_cpp_FUN_00431210
                  ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0xc26c,0);
      }
      if (*(int *)&this_ptr->field_0xc270 == *(int *)damage_info) {
        core_charactr_cpp_FUN_00431210
                  ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0xc274,0);
      }
      core_charactr_cpp_FUN_004352e0((CCharacter *)this_ptr,"limb?.wav");
      core_bodypart_cpp_FUN_00419b90(body_part);
      if (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xc288 * 4) == 0) {
        *(uint *)(damage_info + 4) = 0x461c3c00;
      }
      *(float *)(damage_info + 8) = *(float *)(damage_info + 8) * (float)_DAT_005d4fb0;
    }
  }
  iVar1 = *(int *)damage_info;
  if (iVar1 == *(int *)&this_ptr->field_0xc288) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005d4fc0;
    return;
  }
  if ((iVar1 != *(int *)&this_ptr->field_0xc284) && (iVar1 != *(int *)&this_ptr->field_0xc280)) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005d4fb8;
    return;
  }
  *(uint *)(damage_info + 4) = *(uint *)(damage_info + 4);
  return;
}
