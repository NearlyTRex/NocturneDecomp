// Name: core_scat.cpp_CScat_process_FUN_0051ecc0
// Address: 0051ecc0
// Address Range: [[0051ecc0, 0051f482]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_process_FUN_0051ecc0(CScat *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_scat_cpp_CScat_process_FUN_0051ecc0(CScat *this_ptr,float delta_time)

{
  uint uVar1;
  CWeapon *this_ptr_00;
  CCharacter *this_ptr_01;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint *puVar9;
  byte bVar10;
  float in_stack_0000001c;
  float afStackY_1884 [1519];
  CDemonActor *in_stack_ffffff44;
  CDeformableModelInstance *this_ptr_02;
  int in_stack_ffffff48;
  CQuaternion4f *source_quaternions;
  CDemonActor *in_stack_ffffff50;
  CScat *pCVar11;
  float *pfVar12;
  code *blend_callback;
  CVector3f *velocity;
  float fStack_a8;
  CQuaternion4f CStack_98;
  uint uStack_88;
  float afStack_84 [5];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  uint uStack_64;
  uint uStack_60;
  float afStack_58 [3];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float afStack_34 [3];
  uint uStack_28;
  CVector3f CStack_1c;
  
  bVar10 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
switchD_0051f1f0_caseD_5:
    return;
  }
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time);
  fVar3 = *(float *)&this_ptr->field_0x10a60 - delta_time;
  *(float *)&this_ptr->field_0x10a60 = fVar3;
  if (fVar3 < 0.0) {
    *(uint *)&this_ptr->field_0x10a60 = 0;
  }
  *(uint *)&this_ptr->field_0x2510 = 0;
  *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
  *(uint *)&this_ptr->field_0x2508 = *(uint *)&this_ptr->field_0x250c;
  core_scat_cpp_CScat_advanceMotionWithGrabDamage_FUN_0051f9c0(this_ptr,delta_time);
  *(uint *)&this_ptr->field_0x2594 = *(uint *)&this_ptr->field_0x2510;
  iVar2 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    if (*(int *)&this_ptr->field_0x10a64 == 2) {
      core_scat_cpp_CScat_updateAI_FUN_0051f490(this_ptr,delta_time);
    }
    iVar2 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
    switch(*(uint *)(iVar2 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 7:
    case 9:
    case 10:
      if (*(int *)&this_ptr->field_0x2570 != 0) {
        iVar2 = core_scat_cpp_CScat_isWeaponReady_FUN_0051fcb0(this_ptr);
        iVar8 = 0;
        if (iVar2 != 0) {
          iVar8 = 7;
        }
        if (*(int *)&this_ptr->field_0x10a68 != 0) {
          iVar2 = core_scat_cpp_CScat_isWeaponReady_FUN_0051fcb0(this_ptr);
          if (iVar2 == 0) {
            if (*(int *)&this_ptr->field_0x10a70 == 0) {
              iVar8 = 1;
            }
            else {
              iVar8 = 2;
            }
          }
          else {
            iVar8 = 9;
          }
        }
        if (*(int *)&this_ptr->field_0x10a6c != 0) {
          iVar2 = core_scat_cpp_CScat_isWeaponReady_FUN_0051fcb0(this_ptr);
          if (iVar2 == 0) {
            iVar8 = 3;
          }
          else {
            iVar8 = 10;
          }
        }
        if ((((*(int *)&this_ptr->field_0x10a74 != 0) && (this_ptr->guns_drawn != 0)) &&
            (this_ptr_01 = (CCharacter *)this_ptr->weapon_actor, this_ptr_01 != (CCharacter *)0x0))
           && (iVar2 = (*(((this_ptr_01->base).vtable._uc)->_uc).canBeGrabbed)
                                 (this_ptr_01,in_stack_ffffff44,in_stack_ffffff48), iVar2 != 0)) {
          (*(((((CCharacter *)this_ptr->weapon_actor)->base).vtable._uc)->_uc).isGrabbable)
                    ((CCharacter *)this_ptr->weapon_actor,in_stack_ffffff50);
          *(uint *)&this_ptr->field_0x10a74 = 0;
          if (this_ptr->weapon_actor->weapon_type == (WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN)) {
            iVar8 = 0xb;
          }
        }
        *(float *)&this_ptr->field_0x2578 =
             *(float *)&this_ptr->field_0x10a90 * *(float *)&this_ptr->field_0x2598 +
             *(float *)&this_ptr->field_0x2578;
        iVar2 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
        if (iVar8 != *(int *)(iVar2 + 0x24)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&this_ptr->field_0x2b4,iVar8,1);
        }
        if (*(int *)&this_ptr->field_0x10a80 != 0) {
          *(uint *)&this_ptr->field_0x10a80 = 0;
          (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x150))(this_ptr,this_ptr->guns_drawn == 0);
        }
      }
      break;
    case 5:
      goto switchD_0051f1f0_caseD_5;
    }
  }
  else {
    *(uint *)&this_ptr->field_0x2510 = 0;
    *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
    *(uint *)&this_ptr->field_0x2508 = *(uint *)&this_ptr->field_0x250c;
    uVar1 = *(uint *)&this_ptr->field_0x27ac;
    if (uVar1 < 2) {
      if (uVar1 == 1) {
        iVar2 = core_scat_cpp_CScat_isWeaponReady_FUN_0051fcb0(this_ptr);
        if (iVar2 == 0) {
          iVar2 = 1;
        }
        else {
LAB_0051edb3:
          iVar2 = 9;
        }
      }
      else {
LAB_0051f19d:
        iVar2 = core_scat_cpp_CScat_isWeaponReady_FUN_0051fcb0(this_ptr);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = 7;
        }
      }
    }
    else if (uVar1 < 3) {
      iVar2 = core_scat_cpp_CScat_isWeaponReady_FUN_0051fcb0(this_ptr);
      if (iVar2 != 0) goto LAB_0051edb3;
      iVar2 = 2;
    }
    else {
      if (uVar1 != 3) goto LAB_0051f19d;
      engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
      iVar2 = core_scat_cpp_CScat_isWeaponReady_FUN_0051fcb0(this_ptr);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = 7;
      }
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&this_ptr->field_0x2b4,iVar2,1);
  }
  if (*(int *)&this_ptr->field_0x276c == 0) {
    fStack_40 = *(float *)&this_ptr->field_0x2508 + *(float *)&this_ptr->field_0x257c;
    fStack_3c = *(float *)&this_ptr->field_0x250c + *(float *)&this_ptr->field_0x2580;
    fStack_38 = *(float *)&this_ptr->field_0x2510 + *(float *)&this_ptr->field_0x2584;
    CStack_1c.x = fStack_40;
    *(float *)((int)&CStack_1c + (uint)bVar10 * -8 + 4) = afStack_84[(uint)bVar10 * -2 + 0x12];
    *(float *)((int)&CStack_1c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
    *(uint *)&this_ptr->field_0x2510 = 0;
    *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
    *(uint *)&this_ptr->field_0x2508 = *(uint *)&this_ptr->field_0x250c;
    *(uint *)&this_ptr->field_0x2584 = 0;
    *(uint *)&this_ptr->field_0x2580 = *(uint *)&this_ptr->field_0x2584;
    *(uint *)&this_ptr->field_0x257c = *(uint *)&this_ptr->field_0x2580;
    core_charactr_cpp_FUN_00423a10(this_ptr,in_stack_0000001c);
    fStack_4c = *(float *)&this_ptr->field_0x2588 * in_stack_0000001c;
    velocity = &CStack_1c;
    fStack_48 = *(float *)&this_ptr->field_0x258c * in_stack_0000001c;
    fStack_44 = *(float *)&this_ptr->field_0x2590 * in_stack_0000001c;
    fStack_70 = fStack_4c;
    afStack_84[(uint)bVar10 * -2 + 6] = afStack_84[(uint)bVar10 * -2 + 0xf];
    afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
         afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
    CStack_1c.x = CStack_1c.x + fStack_70;
    CStack_1c.y = CStack_1c.y + fStack_6c;
    CStack_1c.z = CStack_1c.z + fStack_68;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,velocity);
    goto LAB_0051ef62;
  }
  core_actor_cpp_FUN_00408de0(this_ptr,*(int *)&this_ptr->field_0x276c + 0x20);
  afStack_58[0] = afStack_84[2];
  afStack_84[(uint)bVar10 * -2 + 0xc] = afStack_84[(uint)bVar10 * -2 + 3];
  afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
       afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_84 + 0xb);
  uStack_64 = uStack_28;
  afStack_84[(uint)bVar10 * -2 + 9] = afStack_84[(uint)bVar10 * -2 + 0x18];
  afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
       afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19];
  fVar3 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(uStack_60);
  if (fVar3 < _DAT_005e2b3f) {
    fVar3 = fVar3 + _DAT_005e2b43;
  }
  if (_DAT_005e2b47 < fVar3) {
    fVar3 = fVar3 + _DAT_005e2b4b;
  }
  fVar4 = in_stack_0000001c * _DAT_005e2b43;
  if (fVar3 < -fVar4) {
    fVar3 = -fVar4;
  }
  if (fVar4 < fVar3) {
    fVar3 = fVar4;
  }
  *(float *)&this_ptr->field_0x34 = *(float *)&this_ptr->field_0x34 + fVar3;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
  iVar2 = *(int *)&this_ptr->field_0x276c;
  iVar8 = *(int *)(iVar2 + 0x2b0);
  core_skeleton_cpp_FUN_00546a90(&this_ptr->field_0x2b4,0);
  pfVar12 = afStack_84 + 0x14;
  afStack_34[0] = (float)uStack_88;
  afStack_84[(uint)bVar10 * -2 + 0x15] = afStack_84[(uint)bVar10 * -2];
  pCVar11 = this_ptr;
  afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16] =
       afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  iVar2 = (**(code **)(iVar8 + 0x118))(iVar2,pCVar11,pfVar12);
  if (iVar2 == 0) {
    *(uint *)&this_ptr->field_0x276c = 0;
LAB_0051ef4f:
    iVar2 = 0;
  }
  else {
    if (*(int *)&this_ptr->field_0x276c == 0) goto LAB_0051ef4f;
    if (*(int *)&this_ptr->field_0x10a74 == 0) goto LAB_0051ef62;
    iVar2 = 0xf;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,iVar2,1);
LAB_0051ef62:
  core_inv_cpp_CInventory_updateInventory_FUN_004dccd0((CInventory *)&this_ptr->field_0x2437c);
  this_ptr_00 = this_ptr->weapon_actor;
  if (this_ptr_00 != (CWeapon *)0x0) {
    (*((this_ptr_00->base).vtable._ub)->process)(&this_ptr_00->base,in_stack_0000001c);
  }
  core_scat_cpp_CScat_updateWeaponState_FUN_0051fd00(this_ptr,in_stack_0000001c);
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  fVar3 = *(float *)&this_ptr->field_0x25a8;
  iVar2 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0xfc))(this_ptr);
  fVar4 = (float)core_motion_cpp_FUN_005038a0(&this_ptr->field_0x2b4,0xc);
  fVar5 = (float)core_motion_cpp_FUN_005038a0(&this_ptr->field_0x2b4,0xd);
  fVar6 = (float)core_motion_cpp_FUN_005038a0(&this_ptr->field_0x2b4,4);
  fVar7 = (float)core_motion_cpp_FUN_005038a0(&this_ptr->field_0x2b4,5);
  core_scat_cpp_FUN_005203c0
            (this_ptr,in_stack_0000001c,
             0.0 < fVar7 ||
             (0.0 < fVar6 || (0.0 < fVar5 || (0.0 < fVar4 || (iVar2 != 0 || fVar3 <= 0.0)))));
  this_ptr_02 = (CDeformableModelInstance *)&this_ptr->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(this_ptr_02);
  core_scat_cpp_CScat_blendLayerAction_FUN_0051ff60(this_ptr);
  iVar2 = core_scat_cpp_CScat_isWeaponReady_FUN_0051fcb0(this_ptr);
  if ((iVar2 == 0) &&
     (iVar2 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x114))(this_ptr), iVar2 == 0)) {
    blend_callback = core_skeleton_cpp_FUN_00544cc0;
    fVar3 = this_ptr->head_blend_weight;
    iVar2 = _DAT_01e62068;
    core_xform_cpp_FUN_00594380(&this_ptr->head_euler_angles);
    source_quaternions = &CStack_98;
    CStack_98.w = fStack_a8;
    puVar9 = (uint *)((int)&CStack_98 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(uint *)((int)&CStack_98 + (uint)bVar10 * -8 + 4) =
         *(uint *)(&stack0xffffff5c + (uint)bVar10 * -8);
    *puVar9 = *(uint *)(&stack0xffffff60 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    puVar9[(uint)bVar10 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff60 + (uint)bVar10 * -8 + (uint)bVar10 * -8) +
          ((uint)bVar10 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0
              (this_ptr_02,source_quaternions,fVar3,iVar2,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90
            ((CCharacter *)this_ptr,in_stack_0000001c);
  core_scat_cpp_FUN_00520df0(this_ptr);
  return;
}
