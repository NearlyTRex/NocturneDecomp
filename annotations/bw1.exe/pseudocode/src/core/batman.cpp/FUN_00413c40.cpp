// Name: core_batman.cpp_FUN_00413c40
// Address: 00413c40
// Address Range: [[00413c40, 00413f81]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_FUN_00413c40(CBatman *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_batman_cpp_FUN_00413c40(CBatman *this_ptr,SDamageInfo *damage_info)

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
      uVar3 = *(uint *)&this_ptr->field_0xc2d8;
      break;
    case 1:
      uVar3 = *(uint *)&this_ptr->field_0xc2dc;
      break;
    case 2:
      uVar3 = *(uint *)&this_ptr->field_0xc2e0;
      break;
    case 3:
      uVar3 = *(uint *)&this_ptr->field_0xc2e4;
      break;
    case 4:
      uVar3 = *(uint *)&this_ptr->field_0xc2d0;
      break;
    case 5:
      uVar3 = *(uint *)&this_ptr->field_0xc2d4;
      break;
    default:
      goto switchD_00413c76_default;
    }
    *(uint *)damage_info = uVar3;
  }
switchD_00413c76_default:
  iVar2 = *(int *)damage_info;
  if (((((iVar2 == *(int *)&this_ptr->field_0xc2d8) || (iVar2 == *(int *)&this_ptr->field_0xc2dc))
       || (iVar2 == *(int *)&this_ptr->field_0xc2e0)) ||
      ((iVar2 == *(int *)&this_ptr->field_0xc2e4 || (iVar2 == *(int *)&this_ptr->field_0xc2d4)))) ||
     (iVar2 == *(int *)&this_ptr->field_0xc2d0)) {
    local_14 = *(float *)(damage_info + 0x2c);
    if (*(int *)&this_ptr->field_0xc2d0 == *(int *)damage_info) {
      local_14 = 0.05;
    }
    if (*(int *)&this_ptr->field_0xc2d4 == *(int *)damage_info) {
      local_14 = 0.02;
    }
    if (*(int *)&g_CGamePtr->field_0x1fc != 0) {
      local_14 = 1.0;
    }
    if (*(int *)&g_CGamePtr->field_0x14 == 0) {
      local_14 = 0.0;
    }
    iVar2 = core_actor_cpp_FUN_0040cd00(local_14);
    if (iVar2 != 0) {
      body_part = core_bodypart_cpp_FUN_00418940
                            ((CVector3f *)&this_ptr->field_0x20,
                             (UOrientationVector *)&this_ptr->field_0x30,
                             (CVector3f *)(damage_info + 0xc),(CDemonActor *)this_ptr,0,0,
                             *(EBloodType *)&this_ptr->field_0x27a0);
      core_charactr_cpp_FUN_00431210((CCharacter *)this_ptr,body_part,*(int *)damage_info,0);
      if (*(int *)damage_info == *(int *)&this_ptr->field_0xc2d8) {
        core_charactr_cpp_FUN_00431210
                  ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0xc2dc,0);
      }
      if (*(int *)&this_ptr->field_0xc2e0 == *(int *)damage_info) {
        core_charactr_cpp_FUN_00431210
                  ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0xc2e4,0);
      }
      if (*(int *)&this_ptr->field_0xc2d4 == *(int *)damage_info) {
        initial_velocity = (CVector3f *)(damage_info + 0xc);
        core_charactr_cpp_FUN_004311a0
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc2e0,initial_velocity,0);
        core_charactr_cpp_FUN_004311a0
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc2e4,initial_velocity,0);
        core_charactr_cpp_FUN_004311a0
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc2d8,initial_velocity,0);
        core_charactr_cpp_FUN_004311a0
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc2dc,initial_velocity,0);
        core_charactr_cpp_FUN_004311a0
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc2d0,initial_velocity,0);
      }
      core_charactr_cpp_FUN_004352e0((CCharacter *)this_ptr,"limb?.wav");
      core_bodypart_cpp_FUN_00419b90(body_part);
      if (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xc2d0 * 4) == 0) {
        *(uint *)(damage_info + 4) = 0x461c3c00;
      }
      *(float *)(damage_info + 8) = *(float *)(damage_info + 8) * (float)_DAT_005d3b49;
    }
  }
  iVar2 = *(int *)damage_info;
  if (iVar2 == *(int *)&this_ptr->field_0xc2d0) {
    fVar5 = *(float *)(damage_info + 4) * (float)_DAT_005d3b59;
  }
  else {
    if ((iVar2 == *(int *)&this_ptr->field_0xc2e8) || (iVar2 == *(int *)&this_ptr->field_0xc2d4)) {
      *(uint *)(damage_info + 4) = *(uint *)(damage_info + 4);
      goto LAB_00413e31;
    }
    fVar5 = *(float *)(damage_info + 4) * (float)_DAT_005d3b51;
  }
  *(float *)(damage_info + 4) = fVar5;
LAB_00413e31:
  pCVar1 = g_CConsolePtr;
  if ((*(int *)&this_ptr->field_0xc2d4 == *(int *)damage_info) &&
     (*(int *)(damage_info + 0x30) == 0x68)) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005d3b61;
    engine_console_cpp_FUN_00445430(pCVar1,"Shot thru the heart\n");
    iVar2 = core_actor_cpp_FUN_0040cd00(0.5);
    if (iVar2 != 0) {
      local_30 = 0x41a00000;
      local_2c = 0x41a00000;
      local_34 = 0;
      core_actor_cpp_FUN_00408ac0(this_ptr,&local_34);
      iVar2 = 1;
      fVar5 = -1.0;
      local_40._0_4_ = local_28._0_4_;
      *(uint *)((int)&local_40 + (uint)bVar4 * -8 + 4) =
           *(uint *)((int)&local_28 + (uint)bVar4 * -8 + 4);
      *(uint *)((int)&local_40 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           *(uint *)((int)&local_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      core_charactr_cpp_CCharacter_dismember_FUN_00430d90
                ((CCharacter *)this_ptr,impact_point,fVar5,iVar2);
      return;
    }
  }
  return;
}
