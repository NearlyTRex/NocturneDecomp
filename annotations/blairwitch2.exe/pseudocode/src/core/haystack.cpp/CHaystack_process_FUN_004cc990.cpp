// Name: core_haystack.cpp_CHaystack_process_FUN_004cc990
// Address: 004cc990
// Address Range: [[004cc990, 004ccfe3]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_process_FUN_004cc990(CHaystack *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_haystack_cpp_CHaystack_process_FUN_004cc990(CHaystack *this_ptr,float delta_time)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1898 [1522];
  CDeformableModelInstance *this_ptr_00;
  CQuaternion4f *source_quaternions;
  float fVar6;
  uint *puVar7;
  code *blend_callback;
  CVector3f *velocity;
  float fStack_bc;
  CQuaternion4f CStack_ac;
  uint uStack_9c;
  float afStack_98 [4];
  float fStack_88;
  CVector3f CStack_84;
  uint uStack_78;
  float afStack_74 [4];
  float fStack_64;
  float afStack_60 [3];
  uint uStack_54;
  uint uStack_48;
  uint uStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar5 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    return;
  }
  if (*(int *)&this_ptr->field_0x10a64 == 2) {
    core_haystack_cpp_CHaystack_updateAI_FUN_004ccff0(this_ptr,delta_time);
  }
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time);
  fVar6 = *(float *)&this_ptr->field_0x10a60 - delta_time;
  *(float *)&this_ptr->field_0x10a60 = fVar6;
  if (fVar6 < 0.0) {
    *(uint *)&this_ptr->field_0x10a60 = 0;
  }
  *(uint *)&this_ptr->field_0x2510 = 0;
  *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
  *(uint *)&this_ptr->field_0x2508 = *(uint *)&this_ptr->field_0x250c;
  core_haystack_cpp_CHaystack_advanceMotion_FUN_004cd660(this_ptr,delta_time);
  iVar2 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    iVar2 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
    switch(*(uint *)(iVar2 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if (*(int *)&this_ptr->field_0x2570 != 0) {
        iVar2 = 0;
        if (this_ptr->guns_drawn != 0) {
          iVar2 = 10;
        }
        if (*(int *)&this_ptr->field_0x10a68 != 0) {
          if (*(int *)&this_ptr->field_0x10a70 == 0) {
            iVar2 = 1;
          }
          else {
            iVar2 = 2;
          }
        }
        if (*(int *)&this_ptr->field_0x10a6c != 0) {
          iVar2 = 3;
        }
        if (*(int *)&this_ptr->field_0x10a80 != 0) {
          *(uint *)&this_ptr->field_0x10a80 = 0;
          uVar3 = (uint)(this_ptr->guns_drawn == 0);
          this_ptr->guns_drawn = uVar3;
          if (uVar3 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = 10;
          }
        }
        if (*(int *)&this_ptr->field_0x10a74 != 0) {
          bVar1 = true;
          if ((this_ptr->guns_drawn == 0) && (*(int *)&this_ptr->field_0x10a64 != 2)) {
            iVar4 = core_hero_cpp_FUN_004cec50(this_ptr);
            bVar1 = false;
            if (iVar4 != 0) goto LAB_004ccd9f;
            iVar4 = core_hero_cpp_FUN_004cf030(this_ptr,0);
            if ((iVar4 != 0) && (iVar4 != 1)) {
              core_hero_cpp_CHero_tryOpenDoor_FUN_004cf230((CHero *)this_ptr);
            }
            if ((iVar4 != 0) ||
               (iVar4 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90((CHero *)this_ptr)
               , iVar4 != 0)) goto LAB_004ccd9f;
            iVar4 = core_hero_cpp_FUN_004cf2b0((CHero *)this_ptr);
            if (iVar4 != 0) {
              core_hero_cpp_FUN_004cf440(this_ptr);
              goto LAB_004ccd9f;
            }
          }
          else {
LAB_004ccd9f:
            if (!bVar1) goto LAB_004ccdc0;
          }
          *(uint *)&this_ptr->field_0x10a74 = 0;
          if (this_ptr->attack_side == 0) {
            iVar2 = 0xf;
          }
          else {
            iVar2 = 0xe;
          }
        }
LAB_004ccdc0:
        *(float *)&this_ptr->field_0x2578 =
             *(float *)&this_ptr->field_0x10a90 * *(float *)&this_ptr->field_0x2598;
        iVar4 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
        if (iVar2 != *(int *)(iVar4 + 0x24)) goto LAB_004cca5f;
      }
      break;
    case 9:
      goto switchD_004cce93_caseD_9;
    }
  }
  else {
    uVar3 = *(uint *)&this_ptr->field_0x27ac;
    if (uVar3 < 2) {
      if (uVar3 == 1) {
        iVar2 = 1;
      }
      else {
LAB_004cccfd:
        iVar2 = 0;
      }
    }
    else {
      if (2 < uVar3) {
        if (uVar3 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&this_ptr->field_0x2b4,0,1);
          engine_console_cpp_FUN_00436710
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto switchD_004cce93_caseD_4;
        }
        goto LAB_004cccfd;
      }
      iVar2 = 2;
    }
LAB_004cca5f:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&this_ptr->field_0x2b4,iVar2,1);
  }
switchD_004cce93_caseD_4:
  if (*(int *)&this_ptr->field_0x276c == 0) {
    core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
    afStack_98[2] = *(float *)&this_ptr->field_0x2508 + *(float *)&this_ptr->field_0x257c;
    afStack_98[3] = *(float *)&this_ptr->field_0x250c + *(float *)&this_ptr->field_0x2580;
    fStack_88 = *(float *)&this_ptr->field_0x2510 + *(float *)&this_ptr->field_0x2584;
    CStack_84.x = afStack_98[2];
    *(float *)((int)&CStack_84 + (uint)bVar5 * -8 + 4) = afStack_98[(uint)bVar5 * -2 + 3];
    *(float *)((int)&CStack_84 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    *(uint *)&this_ptr->field_0x2510 = 0;
    *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
    *(uint *)&this_ptr->field_0x2508 = *(uint *)&this_ptr->field_0x250c;
    *(uint *)&this_ptr->field_0x2584 = 0;
    *(uint *)&this_ptr->field_0x2580 = *(uint *)&this_ptr->field_0x2584;
    *(uint *)&this_ptr->field_0x257c = *(uint *)&this_ptr->field_0x2584;
    iVar2 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
    if ((*(int *)(iVar2 + 0x24) == 0xe) || (*(int *)(iVar2 + 0x24) == 0xf)) {
      CStack_84.y = 0.0;
      CStack_84.x = 0.0;
      CStack_84.z = 0.0;
    }
    afStack_74[2] = *(float *)&this_ptr->field_0x2588 * delta_time;
    velocity = &CStack_84;
    afStack_74[3] = *(float *)&this_ptr->field_0x258c * delta_time;
    fStack_64 = *(float *)&this_ptr->field_0x2590 * delta_time;
    fStack_30 = afStack_74[2];
    afStack_74[(uint)bVar5 * -2 + 0x12] = afStack_74[(uint)bVar5 * -2 + 3];
    afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13] =
         afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    CStack_84.x = CStack_84.x + fStack_30;
    CStack_84.y = CStack_84.y + fStack_2c;
    CStack_84.z = CStack_84.z + fStack_28;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,velocity);
  }
  else {
    if (*(int *)&this_ptr->field_0x2770 == 0) {
      core_actor_cpp_FUN_00408de0(this_ptr,*(int *)&this_ptr->field_0x276c + 0x20);
      afStack_60[0] = (float)uStack_54;
      afStack_74[(uint)bVar5 * -2 + 6] = afStack_74[(uint)bVar5 * -2 + 9];
      afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
           afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_74 + 5);
      uStack_78 = uStack_48;
      afStack_74[(uint)bVar5 * -2] = afStack_74[(uint)bVar5 * -2 + 0xc];
      afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
      fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(afStack_74[0]);
      fStack_1c = fStack_14;
      if (fStack_14 < _DAT_005d9932) {
        fStack_1c = fStack_14 + _DAT_005d9936;
      }
      if (_DAT_005d993a < fStack_1c) {
        fStack_1c = fStack_1c + _DAT_005d993e;
      }
      fStack_24 = delta_time * _DAT_005d9936;
      fStack_18 = -fStack_24;
      if (fStack_1c < fStack_18) {
        fStack_1c = fStack_18;
      }
      if (fStack_24 < fStack_1c) {
        fStack_1c = fStack_24;
      }
      *(float *)&this_ptr->field_0x34 = *(float *)&this_ptr->field_0x34 + fStack_1c;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
    }
    iStack_20 = *(int *)&this_ptr->field_0x276c;
    fStack_14 = *(float *)(iStack_20 + 0x2b0);
    core_skeleton_cpp_FUN_00546a90(&this_ptr->field_0x2b4,0);
    puVar7 = &uStack_9c;
    uStack_9c = uStack_3c;
    afStack_98[(uint)bVar5 * -2] = afStack_74[(uint)bVar5 * -2 + 0xf];
    afStack_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
    iVar2 = (**(code **)((int)fStack_14 + 0x118))(iStack_20,this_ptr,puVar7);
    if (iVar2 == 0) {
      *(uint *)&this_ptr->field_0x276c = 0;
LAB_004ccc0a:
      iVar2 = 0;
    }
    else {
      if (*(int *)&this_ptr->field_0x276c == 0) goto LAB_004ccc0a;
      if (*(int *)&this_ptr->field_0x10a74 == 0) goto LAB_004ccc1d;
      iVar2 = 0x11;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&this_ptr->field_0x2b4,iVar2,1);
  }
LAB_004ccc1d:
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  this_ptr_00 = (CDeformableModelInstance *)&this_ptr->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(this_ptr_00);
  iVar2 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x114))(this_ptr);
  if ((iVar2 == 0) &&
     (iVar2 = core_motion_cpp_FUN_005035c0(this_ptr_00), *(int *)(iVar2 + 0x24) != 0x13)) {
    blend_callback = core_skeleton_cpp_FUN_00544cc0;
    fVar6 = this_ptr->head_look_blend_weight;
    iVar2 = _DAT_01cede20;
    core_xform_cpp_FUN_00594380(&this_ptr->head_look_euler);
    source_quaternions = &CStack_ac;
    CStack_ac.w = fStack_bc;
    puVar7 = (uint *)((int)&CStack_ac + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(uint *)((int)&CStack_ac + (uint)bVar5 * -8 + 4) =
         *(uint *)(&stack0xffffff48 + (uint)bVar5 * -8);
    *puVar7 = *(uint *)(&stack0xffffff4c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    puVar7[(uint)bVar5 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff4c + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
          ((uint)bVar5 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
              (this_ptr_00,source_quaternions,fVar6,iVar2,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
switchD_004cce93_caseD_9:
  return;
}
