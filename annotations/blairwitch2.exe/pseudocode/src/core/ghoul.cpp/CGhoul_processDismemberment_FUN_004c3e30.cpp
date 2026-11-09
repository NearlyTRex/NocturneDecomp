// Name: core_ghoul.cpp_CGhoul_processDismemberment_FUN_004c3e30
// Address: 004c3e30
// Address Range: [[004c3e30, 004c40e1]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_processDismemberment_FUN_004c3e30(CGhoul *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ghoul_cpp_CGhoul_processDismemberment_FUN_004c3e30(CGhoul *this_ptr,SDamageInfo *damage_info)

{
  CVector3f *initial_velocity;
  int iVar1;
  uint uVar2;
  CBodyPart *body_part;
  float local_14;
  
  if ((0.0 < *(float *)(damage_info + 0x2c)) && (*(int *)damage_info == -1)) {
    iVar1 = rand();
    switch(iVar1 % 6) {
    case 0:
      uVar2 = *(uint *)&this_ptr->field_0x10b1c;
      break;
    case 1:
      uVar2 = *(uint *)&this_ptr->field_0x10b20;
      break;
    case 2:
      uVar2 = *(uint *)&this_ptr->field_0x10b24;
      break;
    case 3:
      uVar2 = *(uint *)&this_ptr->field_0x10b28;
      break;
    case 4:
      uVar2 = *(uint *)&this_ptr->field_0x10b44;
      break;
    case 5:
      uVar2 = *(uint *)&this_ptr->field_0x10b40;
      break;
    default:
      goto switchD_004c3e66_default;
    }
    *(uint *)damage_info = uVar2;
  }
switchD_004c3e66_default:
  iVar1 = *(int *)damage_info;
  if (((((iVar1 == *(int *)&this_ptr->field_0x10b1c) || (iVar1 == *(int *)&this_ptr->field_0x10b20))
       || (iVar1 == *(int *)&this_ptr->field_0x10b24)) ||
      ((iVar1 == *(int *)&this_ptr->field_0x10b28 || (iVar1 == *(int *)&this_ptr->field_0x10b40))))
     || (iVar1 == *(int *)&this_ptr->field_0x10b44)) {
    local_14 = *(float *)(damage_info + 0x2c);
    if (*(int *)&this_ptr->field_0x10b44 == *(int *)damage_info) {
      local_14 = 0.05;
    }
    if (*(int *)&this_ptr->field_0x10b40 == *(int *)damage_info) {
      local_14 = 0.02;
    }
    if (*(int *)&g_CGamePtr->field_0x1fc != 0) {
      local_14 = 1.0;
    }
    if (*(int *)&g_CGamePtr->field_0x14 == 0) {
      local_14 = 0.0;
    }
    iVar1 = core_actor_cpp_FUN_0040d060(local_14);
    if (iVar1 != 0) {
      body_part = core_bodypart_cpp_FUN_004154f0
                            ((CVector3f *)&this_ptr->field_0x20,
                             (UOrientationVector *)&this_ptr->field_0x30,
                             (CVector3f *)(damage_info + 0xc),(CDemonActor *)this_ptr,0,0,
                             BLOOD_TYPE_RED);
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
                ((CCharacter *)this_ptr,body_part,*(int *)damage_info,0);
      if (*(int *)damage_info == *(int *)&this_ptr->field_0x10b1c) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
                  ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0x10b20,0);
      }
      if (*(int *)&this_ptr->field_0x10b24 == *(int *)damage_info) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
                  ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0x10b28,0);
      }
      if (*(int *)&this_ptr->field_0x10b40 == *(int *)damage_info) {
        initial_velocity = (CVector3f *)(damage_info + 0xc);
        core_charactr_cpp_FUN_00427770
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0x10b24,initial_velocity,0);
        core_charactr_cpp_FUN_00427770
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0x10b28,initial_velocity,0);
        core_charactr_cpp_FUN_00427770
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0x10b1c,initial_velocity,0);
        core_charactr_cpp_FUN_00427770
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0x10b20,initial_velocity,0);
        core_charactr_cpp_FUN_00427770
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0x10b44,initial_velocity,0);
      }
      core_charactr_cpp_FUN_0042b260((CCharacter *)this_ptr,"limb?.wav");
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416700(body_part);
      if (*(int *)(&this_ptr->field_0x23f4 + *(int *)&this_ptr->field_0x10b44 * 4) == 0) {
        *(uint *)(damage_info + 4) = 0x461c3c00;
      }
      *(float *)(damage_info + 8) = *(float *)(damage_info + 8) * (float)_DAT_005d91e7;
    }
  }
  iVar1 = *(int *)damage_info;
  if (iVar1 == *(int *)&this_ptr->field_0x10b44) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005d91f7;
    return;
  }
  if ((iVar1 != *(int *)&this_ptr->field_0x10b3c) && (iVar1 != *(int *)&this_ptr->field_0x10b40)) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005d91ef;
    return;
  }
  *(uint *)(damage_info + 4) = *(uint *)(damage_info + 4);
  return;
}
