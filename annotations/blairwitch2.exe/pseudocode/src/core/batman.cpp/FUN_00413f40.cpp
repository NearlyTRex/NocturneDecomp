// Name: core_batman.cpp_FUN_00413f40
// Address: 00413f40
// Address Range: [[00413f40, 00414281]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_FUN_00413f40(CBatman *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_batman_cpp_FUN_00413f40(CBatman *this_ptr,SDamageInfo *damage_info)

{
  CVector3f *initial_velocity;
  CConsole *pCVar1;
  int iVar2;
  uint uVar3;
  CBodyPart *body_part;
  byte bVar4;
  uint auStackY_1028 [1011];
  CVector3f *impact_point;
  float fVar5;
  CVector3f local_40;
  uint local_34;
  uint local_30;
  uint local_2c;
  CVector3f local_28;
  float local_14;
  
  bVar4 = 0;
  impact_point = &local_40;
  if ((0.0 < *(float *)(damage_info + 0x2c)) && (*(int *)damage_info == -1)) {
    iVar2 = rand();
    switch(iVar2 % 6) {
    case 0:
      uVar3 = *(uint *)&this_ptr->field_0x10b64;
      break;
    case 1:
      uVar3 = *(uint *)&this_ptr->field_0x10b68;
      break;
    case 2:
      uVar3 = *(uint *)&this_ptr->field_0x10b6c;
      break;
    case 3:
      uVar3 = *(uint *)&this_ptr->field_0x10b70;
      break;
    case 4:
      uVar3 = *(uint *)&this_ptr->field_0x10b5c;
      break;
    case 5:
      uVar3 = *(uint *)&this_ptr->field_0x10b60;
      break;
    default:
      goto switchD_00413f76_default;
    }
    *(uint *)damage_info = uVar3;
  }
switchD_00413f76_default:
  iVar2 = *(int *)damage_info;
  if (((((iVar2 == *(int *)&this_ptr->field_0x10b64) || (iVar2 == *(int *)&this_ptr->field_0x10b68))
       || (iVar2 == *(int *)&this_ptr->field_0x10b6c)) ||
      ((iVar2 == *(int *)&this_ptr->field_0x10b70 || (iVar2 == *(int *)&this_ptr->field_0x10b60))))
     || (iVar2 == *(int *)&this_ptr->field_0x10b5c)) {
    local_14 = *(float *)(damage_info + 0x2c);
    if (*(int *)&this_ptr->field_0x10b5c == *(int *)damage_info) {
      local_14 = 0.05;
    }
    if (*(int *)&this_ptr->field_0x10b60 == *(int *)damage_info) {
      local_14 = 0.02;
    }
    if (*(int *)&g_CGamePtr->field_0x1fc != 0) {
      local_14 = 1.0;
    }
    if (*(int *)&g_CGamePtr->field_0x14 == 0) {
      local_14 = 0.0;
    }
    iVar2 = core_actor_cpp_FUN_0040d060(local_14);
    if (iVar2 != 0) {
      body_part = core_bodypart_cpp_FUN_004154f0
                            ((CVector3f *)&this_ptr->field_0x20,
                             (UOrientationVector *)&this_ptr->field_0x30,
                             (CVector3f *)(damage_info + 0xc),(CDemonActor *)this_ptr,0,0,
                             *(EBloodType *)&this_ptr->field_0x280c);
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
                ((CCharacter *)this_ptr,body_part,*(int *)damage_info,0);
      if (*(int *)damage_info == *(int *)&this_ptr->field_0x10b64) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
                  ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0x10b68,0);
      }
      if (*(int *)&this_ptr->field_0x10b6c == *(int *)damage_info) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
                  ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0x10b70,0);
      }
      if (*(int *)&this_ptr->field_0x10b60 == *(int *)damage_info) {
        initial_velocity = (CVector3f *)(damage_info + 0xc);
        core_charactr_cpp_FUN_00427770
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0x10b6c,initial_velocity,0);
        core_charactr_cpp_FUN_00427770
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0x10b70,initial_velocity,0);
        core_charactr_cpp_FUN_00427770
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0x10b64,initial_velocity,0);
        core_charactr_cpp_FUN_00427770
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0x10b68,initial_velocity,0);
        core_charactr_cpp_FUN_00427770
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0x10b5c,initial_velocity,0);
      }
      core_charactr_cpp_FUN_0042b260((CCharacter *)this_ptr,"limb?.wav");
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416700(body_part);
      if (*(int *)(&this_ptr->field_0x23f4 + *(int *)&this_ptr->field_0x10b5c * 4) == 0) {
        *(uint *)(damage_info + 4) = 0x461c3c00;
      }
      *(float *)(damage_info + 8) = *(float *)(damage_info + 8) * (float)_DAT_005cbbce;
    }
  }
  iVar2 = *(int *)damage_info;
  if (iVar2 == *(int *)&this_ptr->field_0x10b5c) {
    fVar5 = *(float *)(damage_info + 4) * (float)_DAT_005cbbde;
  }
  else {
    if ((iVar2 == *(int *)&this_ptr->field_0x10b74) || (iVar2 == *(int *)&this_ptr->field_0x10b60))
    {
      *(uint *)(damage_info + 4) = *(uint *)(damage_info + 4);
      goto LAB_00414131;
    }
    fVar5 = *(float *)(damage_info + 4) * (float)_DAT_005cbbd6;
  }
  *(float *)(damage_info + 4) = fVar5;
LAB_00414131:
  pCVar1 = g_CConsolePtr;
  if ((*(int *)&this_ptr->field_0x10b60 == *(int *)damage_info) &&
     (*(int *)(damage_info + 0x30) == 0x68)) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005cbbe6;
    engine_console_cpp_FUN_00436710(pCVar1,"Shot thru the heart\n");
    iVar2 = core_actor_cpp_FUN_0040d060(0.5);
    if (iVar2 != 0) {
      local_30 = 0x41a00000;
      local_2c = 0x41a00000;
      local_34 = 0;
      core_actor_cpp_FUN_00408cf0(this_ptr,&local_34);
      iVar2 = 1;
      fVar5 = -1.0;
      local_40._0_4_ = local_28._0_4_;
      *(uint *)((int)&local_40 + (uint)bVar4 * -8 + 4) =
           *(uint *)((int)&local_28 + (uint)bVar4 * -8 + 4);
      *(uint *)((int)&local_40 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           *(uint *)((int)&local_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      core_charactr_cpp_CCharacter_dismember_FUN_00427360
                ((CCharacter *)this_ptr,impact_point,fVar5,iVar2);
      return;
    }
  }
  return;
}
