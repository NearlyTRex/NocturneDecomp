// Name: core_hecaitmx.cpp_CHecaitomix_process_FUN_00597f40
// Address: 00597f40
// Address Range: [[00597f40, 00598477]]
// Convention: __cdecl
// Signature: void __cdecl core_hecaitmx_cpp_CHecaitomix_process_FUN_00597f40(CHecaitomix *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hecaitmx_cpp_CHecaitomix_process_FUN_00597f40(CHecaitomix *this_ptr,float delta_time)

{
  byte *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  SMotion *pSVar5;
  CPathMap *path_map;
  byte bVar6;
  float afStackY_1080 [1012];
  CVector3f *direction;
  float min_distance;
  uint *puVar7;
  float max_distance;
  CVector3f CStack_98;
  float fStack_8c;
  float afStack_88 [2];
  CVector3f CStack_80;
  uint uStack_74;
  float afStack_70 [4];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  uint uStack_38;
  double dStack_20;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar4 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x148))(this_ptr,delta_time);
  if (iVar4 == 0) {
    return;
  }
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&this_ptr->field_0x158);
  uVar2 = *(uint *)(pSVar5 + 0x24);
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
            ((CMotionController *)&this_ptr->field_0x158);
  core_charactr_cpp_FUN_00433c60(this_ptr,delta_time);
  core_charactr_cpp_FUN_00432330(this_ptr,delta_time,*(int *)&this_ptr->field_0xcdd0 == 1);
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  fStack_18 = delta_time * *(float *)&this_ptr->field_0xcdcc * *(float *)&this_ptr->field_0xd068;
  while (0.0 < fStack_18) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)&this_ptr->field_0x158,&fStack_18);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar4);
  }
  *(uint *)&this_ptr->field_0x2524 = *(uint *)&this_ptr->field_0x24a4;
  core_charactr_cpp_FUN_00434850(this_ptr,delta_time * *(float *)&this_ptr->field_0xcdcc);
  iVar4 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar4 != 0) {
    uVar3 = *(uint *)&this_ptr->field_0x273c;
    puVar1 = &this_ptr->field_0x158;
    if (uVar3 < 2) {
      if (uVar3 == 1) {
        fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)puVar1);
        if ((float)_DAT_005d97af < fStack_14) {
          iVar4 = 2;
LAB_0059809b:
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&this_ptr->field_0x158,iVar4,1);
        }
      }
      else {
LAB_00598246:
        fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)&this_ptr->field_0x158);
        if ((float)_DAT_005d97af < fStack_14) {
          iVar4 = 1;
          goto LAB_0059809b;
        }
      }
    }
    else if (uVar3 < 3) {
      fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)puVar1);
      if ((float)_DAT_005d97af < fStack_14) {
        iVar4 = 2;
        goto LAB_0059809b;
      }
    }
    else {
      if (uVar3 != 3) goto LAB_00598246;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)puVar1,1,1);
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
    }
    *(uint *)&this_ptr->field_0x24a4 = 0;
    *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
    *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
    goto switchD_00598471_caseD_1;
  }
  switch(uVar2) {
  default:
    goto switchD_00598471_caseD_1;
  case 2:
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
    puVar1 = &this_ptr->field_0x158;
    if (*(int *)&this_ptr->field_0xcde4 != 0) {
      max_distance = 0.17453292;
      min_distance = 0.2;
      *(uint *)&this_ptr->field_0x24a4 = 0;
      *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
      *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
      CStack_80.x = 0.0;
      CStack_80.z = 0x41400000;
      direction = &CStack_80;
      CStack_80.y = 0.0;
      path_map = (CPathMap *)
                 (**(code **)(*(int *)(*(int *)&this_ptr->field_0xcde4 + 0x154) + 0xc4))
                           (*(int *)&this_ptr->field_0xcde4);
      iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        ((CCharacter *)this_ptr,
                         (CVector3f *)(*(int *)&this_ptr->field_0xcde4 + 0x20),path_map,direction,
                         min_distance,max_distance);
      if (iVar4 < 0) {
        engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)puVar1,1,1);
      }
      else if ((0 < iVar4) && (*(float *)&this_ptr->field_0xcde0 <= 0.0)) {
        iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
        if (iVar4 < 0x4b) {
          iVar4 = 3;
        }
        else {
          iVar4 = 5;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)puVar1,iVar4,1);
        *(uint *)&this_ptr->field_0xcde0 = 0x40200000;
      }
      goto switchD_00598471_caseD_1;
    }
    iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0((CEnemy *)this_ptr,delta_time);
    if (iVar4 != 0) {
      fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)puVar1);
      if ((float)_DAT_005d97af < fStack_14) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)puVar1,2,1);
      }
      goto switchD_00598471_caseD_1;
    }
    break;
  case 3:
  case 4:
  case 5:
    fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)&this_ptr->field_0x158);
    dStack_20 = (double)fStack_14;
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"Zone: %f\n",dStack_20);
    if (dStack_20 <= _DAT_005d97a7) goto switchD_00598471_caseD_1;
    break;
  case 7:
    if ((*(int *)&this_ptr->field_0xcdd0 == 0) && (*(int *)&this_ptr->field_0xdc == 0)) {
      core_skeleton_cpp_FUN_0054dbd0(&this_ptr->field_0x158,0);
      puVar7 = &uStack_74;
      uStack_74 = uStack_38;
      afStack_70[(uint)bVar6 * -2] = afStack_70[(uint)bVar6 * -2 + 0xf];
      afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
      core_actor_cpp_FUN_00408b80(this_ptr,puVar7);
      *(uint *)&this_ptr->field_0xcdd0 = 1;
    }
    goto switchD_00598471_caseD_1;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            ((CMotionController *)&this_ptr->field_0x158,1,1);
switchD_00598471_caseD_1:
  if (0.0 < *(float *)&this_ptr->field_0xcde0) {
    *(float *)&this_ptr->field_0xcde0 = *(float *)&this_ptr->field_0xcde0 - delta_time;
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar4 != 0) {
    core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
    fStack_50 = *(float *)&this_ptr->field_0x2518 * delta_time;
    fStack_4c = *(float *)&this_ptr->field_0x251c * delta_time;
    fStack_48 = *(float *)&this_ptr->field_0x2520 * delta_time;
    fStack_44 = fStack_50;
    afStack_70[(uint)bVar6 * -2 + 0xc] = afStack_70[(uint)bVar6 * -2 + 9];
    afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
         afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    fStack_8c = fStack_44 + *(float *)&this_ptr->field_0x250c;
    afStack_88[0] = fStack_40 + *(float *)&this_ptr->field_0x2510;
    afStack_88[1] = fStack_3c + *(float *)&this_ptr->field_0x2514;
    fStack_5c = fStack_8c;
    afStack_70[(uint)bVar6 * -2 + 6] = afStack_88[(uint)bVar6 * -2];
    afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_88[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    afStack_70[2] = fStack_5c + *(float *)&this_ptr->field_0x249c;
    afStack_70[3] = fStack_58 + *(float *)&this_ptr->field_0x24a0;
    fStack_60 = fStack_54 + *(float *)&this_ptr->field_0x24a4;
    CStack_98.x = afStack_70[2];
    *(float *)((int)&CStack_98 + (uint)bVar6 * -8 + 4) = afStack_70[(uint)bVar6 * -2 + 3];
    *(float *)((int)&CStack_98 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    *(uint *)&this_ptr->field_0x2514 = 0;
    *(uint *)&this_ptr->field_0x2510 = *(uint *)&this_ptr->field_0x2514;
    *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
    *(uint *)&this_ptr->field_0x24a4 = 0;
    *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
    *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a4;
    core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_98);
  }
  core_charactr_cpp_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  return;
}
