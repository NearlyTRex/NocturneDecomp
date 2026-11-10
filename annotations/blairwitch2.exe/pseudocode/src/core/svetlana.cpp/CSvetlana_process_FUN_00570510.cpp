// Name: core_svetlana.cpp_CSvetlana_process_FUN_00570510
// Address: 00570510
// Address Range: [[00570510, 00570c77]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_CSvetlana_process_FUN_00570510(CSvetlana *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_svetlana_cpp_CSvetlana_process_FUN_00570510(CSvetlana *this_ptr,float delta_time)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  float afStackY_18ac [1521];
  CDeformableModelInstance *this_ptr_00;
  CQuaternion4f *source_quaternions;
  float fVar6;
  float *pfVar7;
  code *blend_callback;
  CQuaternion4f CStack_d0;
  float fStack_c0;
  float afStack_bc [6];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  uint auStack_98 [3];
  CVector3f CStack_8c;
  uint uStack_80;
  float afStack_7c [4];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  uint uStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  uint uStack_38;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar5 = 0;
  if ((*(float *)&this_ptr->field_0x25a8 < (float)_DAT_005ec2fb) &&
     (fVar6 = *(float *)&this_ptr->field_0x25a8 + delta_time,
     *(float *)&this_ptr->field_0x25a8 = fVar6, (float)_DAT_005ec2fb < fVar6)) {
    *(uint *)&this_ptr->field_0x25a8 = 0x42c80000;
  }
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if ((iVar2 == 0) || (*(int *)&this_ptr->field_0x25638 == 4)) {
switchD_0057096f_caseD_9:
    return;
  }
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042a7a0((CCharacter *)this_ptr,delta_time);
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time);
  fVar6 = *(float *)&this_ptr->field_0x10a60 - delta_time;
  *(float *)&this_ptr->field_0x10a60 = fVar6;
  if (fVar6 < 0.0) {
    *(uint *)&this_ptr->field_0x10a60 = 0;
  }
  *(uint *)&this_ptr->field_0x2510 = 0;
  *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
  *(uint *)&this_ptr->field_0x2508 = *(uint *)&this_ptr->field_0x250c;
  core_svetlana_cpp_CSvetlana_advanceMotion_FUN_00571460(this_ptr,delta_time);
  *(uint *)&this_ptr->field_0x2594 = *(uint *)&this_ptr->field_0x2510;
  iVar2 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    if (*(int *)&this_ptr->field_0x10a64 == 2) {
      core_svetlana_cpp_CSvetlana_processAI_FUN_00570c80(this_ptr,delta_time);
    }
    iVar2 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
    switch(*(uint *)(iVar2 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if (*(int *)&this_ptr->field_0x2570 != 0) {
        iVar2 = 0;
        if (this_ptr->blades_drawn != 0) {
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
          uVar3 = (uint)(this_ptr->blades_drawn == 0);
          this_ptr->blades_drawn = uVar3;
          if (uVar3 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = 10;
          }
        }
        if (*(int *)&this_ptr->field_0x10a74 != 0) {
          bVar1 = true;
          if ((this_ptr->blades_drawn == 0) && (*(int *)&this_ptr->field_0x10a64 != 2)) {
            iVar4 = core_hero_cpp_FUN_004cec50(this_ptr);
            bVar1 = false;
            if (iVar4 != 0) goto LAB_00570a09;
            iVar4 = core_hero_cpp_FUN_004cf030(this_ptr,0);
            if ((iVar4 != 0) && (iVar4 != 1)) {
              core_hero_cpp_CHero_tryOpenDoor_FUN_004cf230((CHero *)this_ptr);
            }
            if ((iVar4 != 0) ||
               (iVar4 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90((CHero *)this_ptr)
               , iVar4 != 0)) goto LAB_00570a09;
            iVar4 = core_hero_cpp_FUN_004cf2b0((CHero *)this_ptr);
            if (iVar4 != 0) {
              core_hero_cpp_FUN_004cf440(this_ptr);
              goto LAB_00570a09;
            }
          }
          else {
LAB_00570a09:
            if (!bVar1) goto LAB_00570a2a;
          }
          *(uint *)&this_ptr->field_0x10a74 = 0;
          if (this_ptr->attack_hand == 0) {
            iVar2 = 0xf;
          }
          else {
            iVar2 = 0xe;
          }
        }
LAB_00570a2a:
        *(float *)&this_ptr->field_0x2578 =
             *(float *)&this_ptr->field_0x10a90 * *(float *)&this_ptr->field_0x2598;
        iVar4 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
        if (iVar2 != *(int *)(iVar4 + 0x24)) goto LAB_00570663;
      }
      break;
    case 9:
      goto switchD_0057096f_caseD_9;
    }
  }
  else {
    iVar2 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
    if ((*(int *)(iVar2 + 0x24) != 0x1a) && (*(int *)(iVar2 + 0x24) != 0x1b)) {
      *(uint *)&this_ptr->field_0x2510 = 0;
      *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
      *(uint *)&this_ptr->field_0x2508 = *(uint *)&this_ptr->field_0x250c;
    }
    uVar3 = *(uint *)&this_ptr->field_0x27ac;
    if (uVar3 < 2) {
      if (uVar3 == 1) {
        iVar2 = 1;
      }
      else {
LAB_0057092b:
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
          goto switchD_0057096f_caseD_4;
        }
        goto LAB_0057092b;
      }
      iVar2 = 2;
    }
LAB_00570663:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&this_ptr->field_0x2b4,iVar2,1);
  }
switchD_0057096f_caseD_4:
  if (*(int *)&this_ptr->field_0x276c == 0) {
    CStack_8c.x = *(float *)&this_ptr->field_0x2508;
    CStack_8c.y = *(float *)&this_ptr->field_0x250c;
    CStack_8c.z = *(float *)&this_ptr->field_0x2510;
    iVar2 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
    if (*(int *)(iVar2 + 0x24) != 0x1a) {
      core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
    }
    afStack_7c[2] = *(float *)&this_ptr->field_0x2588 * delta_time;
    afStack_7c[3] = *(float *)&this_ptr->field_0x258c * delta_time;
    fStack_6c = *(float *)&this_ptr->field_0x2590 * delta_time;
    fStack_44 = afStack_7c[2];
    afStack_7c[(uint)bVar5 * -2 + 0xf] = afStack_7c[(uint)bVar5 * -2 + 3];
    afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
         afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    fStack_68 = fStack_44 + *(float *)&this_ptr->field_0x257c;
    fStack_64 = fStack_40 + *(float *)&this_ptr->field_0x2580;
    fStack_60 = fStack_3c + *(float *)&this_ptr->field_0x2584;
    fStack_a4 = fStack_68;
    afStack_bc[(uint)bVar5 * -2 + 7] = afStack_7c[(uint)bVar5 * -2 + 6];
    afStack_bc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 8] =
         afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
    CStack_8c.x = CStack_8c.x + fStack_a4;
    CStack_8c.y = CStack_8c.y + fStack_a0;
    CStack_8c.z = CStack_8c.z + fStack_9c;
    iVar2 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
    iVar2 = *(int *)(iVar2 + 0x24);
    if ((((iVar2 != 0x17) && (iVar2 != 0x18)) && (iVar2 != 0x19)) &&
       (((iVar2 != 0x25 && (iVar2 != 0x26)) && ((iVar2 != 0x27 && (iVar2 != 0x28)))))) {
      core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_8c);
    }
    iVar2 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
    if (*(int *)(iVar2 + 0x24) == 0x1a) {
      *(float *)&this_ptr->field_0x24 =
           delta_time * (float)_DAT_005ec303 + *(float *)&this_ptr->field_0x24;
    }
    goto LAB_00570827;
  }
  if (*(int *)&this_ptr->field_0x2770 == 0) {
    core_actor_cpp_FUN_00408de0(this_ptr,*(int *)&this_ptr->field_0x276c + 0x20);
    auStack_98[0] = uStack_5c;
    afStack_bc[(uint)bVar5 * -2 + 10] = afStack_7c[(uint)bVar5 * -2 + 9];
    afStack_bc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xb] =
         afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_bc + 9);
    uStack_80 = uStack_50;
    afStack_7c[(uint)bVar5 * -2] = afStack_7c[(uint)bVar5 * -2 + 0xc];
    afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
    fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(afStack_7c[0]);
    fStack_18 = fStack_14;
    if (fStack_14 < _DAT_005ec30b) {
      fStack_18 = fStack_14 + _DAT_005ec30f;
    }
    if (_DAT_005ec313 < fStack_18) {
      fStack_18 = fStack_18 + _DAT_005ec317;
    }
    fStack_1c = delta_time * _DAT_005ec30f;
    fStack_20 = -fStack_1c;
    if (fStack_18 < fStack_20) {
      fStack_18 = fStack_20;
    }
    if (fStack_1c < fStack_18) {
      fStack_18 = fStack_1c;
    }
    *(float *)&this_ptr->field_0x34 = *(float *)&this_ptr->field_0x34 + fStack_18;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
  }
  iStack_24 = *(int *)&this_ptr->field_0x276c;
  fStack_14 = *(float *)(iStack_24 + 0x2b0);
  core_skeleton_cpp_FUN_00546a90(&this_ptr->field_0x2b4,0);
  pfVar7 = afStack_bc + 3;
  afStack_bc[3] = (float)uStack_38;
  afStack_bc[(uint)bVar5 * -2 + 4] = afStack_7c[(uint)bVar5 * -2 + 0x12];
  afStack_bc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5] =
       afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
  iVar2 = (**(code **)((int)fStack_14 + 0x118))(iStack_24,this_ptr,pfVar7);
  if (iVar2 == 0) {
    *(uint *)&this_ptr->field_0x276c = 0;
LAB_00570814:
    iVar2 = 0;
  }
  else {
    if (*(int *)&this_ptr->field_0x276c == 0) goto LAB_00570814;
    if (*(int *)&this_ptr->field_0x10a74 == 0) goto LAB_00570827;
    iVar2 = 0x10;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,iVar2,1);
LAB_00570827:
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  this_ptr_00 = (CDeformableModelInstance *)&this_ptr->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(this_ptr_00);
  iVar2 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x114))(this_ptr);
  if (iVar2 == 0) {
    blend_callback = core_skeleton_cpp_FUN_00544cc0;
    fVar6 = this_ptr->head_blend_weight;
    iVar2 = _DAT_0264bf38;
    core_xform_cpp_FUN_00594380(&this_ptr->head_euler_angles);
    source_quaternions = &CStack_d0;
    CStack_d0.w = fStack_c0;
    pfVar7 = (float *)((int)&CStack_d0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(float *)((int)&CStack_d0 + (uint)bVar5 * -8 + 4) = afStack_bc[(uint)bVar5 * -2];
    *pfVar7 = afStack_bc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    pfVar7[(uint)bVar5 * -2 + 1] =
         (afStack_bc + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
              (this_ptr_00,source_quaternions,fVar6,iVar2,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  core_cloth_cpp_CCloth_process_FUN_005afdf0
            ((CCloth *)&this_ptr->field_0x25648,(CVector3f *)&this_ptr->field_0x20,
             (CVector3f *)&this_ptr->field_0x30,delta_time,*(float *)&this_ptr->field_0x2574,
             (CDeformableModelInstance *)&this_ptr->field_0x2b4);
  core_cloth_cpp_CCloth_process_FUN_005afdf0
            ((CCloth *)&this_ptr->field_0x60178,(CVector3f *)&this_ptr->field_0x20,
             (CVector3f *)&this_ptr->field_0x30,delta_time,*(float *)&this_ptr->field_0x2574,
             (CDeformableModelInstance *)&this_ptr->field_0x2b4);
  return;
}
