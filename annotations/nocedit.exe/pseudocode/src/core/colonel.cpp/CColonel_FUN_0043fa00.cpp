// Name: core_colonel.cpp_CColonel_FUN_0043fa00
// Address: 0043fa00
// Address Range: [[0043fa00, 0043ff16]]
// Convention: __cdecl
// Signature: void __cdecl core_colonel_cpp_CColonel_FUN_0043fa00(CColonel *this_ptr)

#include "nocturne.h"

void __cdecl core_colonel_cpp_CColonel_FUN_0043fa00(CColonel *this_ptr)

{
  char *pcVar1;
  uint uVar2;
  CDemonActor *pCVar3;
  bool bVar4;
  CHero *pCVar5;
  int iVar6;
  CVector3f *pCVar7;
  int iVar8;
  SMotion *pSVar9;
  byte bVar10;
  float in_stack_00000008;
  float afStackY_186c [1521];
  CDeformableModelInstance *pCVar11;
  CQuaternion4f *source_quaternions;
  float fVar12;
  code *blend_callback;
  CQuaternion4f CStack_90;
  byte auStack_80 [24];
  float local_68;
  float local_64;
  float local_60;
  CVector3f local_5c;
  float local_50;
  float local_4c;
  float local_48;
  CVector3f local_44;
  float local_38;
  float local_34;
  float local_30;
  int local_24;
  float local_20;
  float local_1c;
  CDeformableModelInstance *pCStack_18;
  CDeformableModelInstance *local_14;
  
  bVar10 = 0;
  iVar6 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar6 == 0) {
    return;
  }
  fVar12 = (float)(this_ptr->base).unk1 - in_stack_00000008;
  (this_ptr->base).unk1 = (int)fVar12;
  if (fVar12 < 0.0) {
    (this_ptr->base).unk1 = 0;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_colonel_cpp_FUN_00440430();
  if ((this_ptr->base).control_type == 2) {
    core_colonel_cpp_FUN_0043ff20();
  }
  fVar12 = (float)12.566370614;
  *(float *)((this_ptr->base).base.unk1 + 0x28) =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  *(float *)((this_ptr->base).base.unk1 + 0x2c) = in_stack_00000008 * fVar12;
  iVar6 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  pCVar11 = &(this_ptr->base).base.model;
  if (iVar6 == 0) {
    pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar11->motion_controller);
    switch(pSVar9->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
      if (*(int *)((this_ptr->base).base.unk1 + 4) != 0) {
        iVar6 = 0;
        if (*(int *)(this_ptr->base).unk2 != 0) {
          if (*(int *)((this_ptr->base).unk2 + 8) == 0) {
            iVar6 = 1;
          }
          else {
            iVar6 = 2;
          }
        }
        if (*(int *)((this_ptr->base).unk2 + 4) != 0) {
          iVar6 = 3;
        }
        if (*(int *)((this_ptr->base).unk2 + 0x18) != 0) {
          iVar8 = *(int *)this_ptr->unk;
          (this_ptr->base).unk2[0x18] = '\0';
          (this_ptr->base).unk2[0x19] = '\0';
          (this_ptr->base).unk2[0x1a] = '\0';
          (this_ptr->base).unk2[0x1b] = '\0';
          iVar6 = 0;
          *(uint *)this_ptr->unk = (uint)(iVar8 == 0);
        }
        if (*(int *)((this_ptr->base).unk2 + 0xc) != 0) {
          bVar4 = true;
          if ((*(int *)this_ptr->unk == 0) && ((this_ptr->base).control_type != 2)) {
            iVar8 = core_hero_cpp_CHero_FUN_004f2af0(&this_ptr->base);
            bVar4 = false;
            if (iVar8 != 0) goto LAB_0043fd60;
            local_24 = core_hero_cpp_CHero_FUN_004f2d70(&this_ptr->base);
            if ((local_24 != 0) && (local_24 != 1)) {
              core_hero_cpp_CHero_FUN_004f2ed0(&this_ptr->base);
            }
            if ((local_24 != 0) ||
               (iVar8 = core_hero_cpp_CHero_FUN_004f2c40(&this_ptr->base), iVar8 != 0))
            goto LAB_0043fd60;
            iVar8 = core_hero_cpp_CHero_FUN_004f2f50(&this_ptr->base);
            if (iVar8 != 0) {
              core_hero_cpp_CHero_FUN_004f30f0(&this_ptr->base);
              goto LAB_0043fd60;
            }
          }
          else {
LAB_0043fd60:
            if (!bVar4) goto LAB_0043fd6e;
          }
          (this_ptr->base).unk2[0xc] = '\0';
          (this_ptr->base).unk2[0xd] = '\0';
          (this_ptr->base).unk2[0xe] = '\0';
          (this_ptr->base).unk2[0xf] = '\0';
        }
LAB_0043fd6e:
        *(float *)((this_ptr->base).base.unk1 + 0xc) =
             *(float *)((this_ptr->base).unk2 + 0x24) *
             *(float *)((this_ptr->base).base.unk1 + 0x2c);
        pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&(this_ptr->base).base.model.motion_controller);
        if (iVar6 != pSVar9->state_index) goto LAB_0043fad3;
      }
      break;
    case 6:
      goto switchD_0043fe37_caseD_6;
    }
  }
  else {
    uVar2 = *(uint *)((this_ptr->base).base.unk2 + 0x10);
    if (uVar2 < 2) {
      if (uVar2 == 1) {
        iVar6 = 1;
      }
      else {
LAB_0043fcd4:
        iVar6 = 0;
      }
    }
    else {
      if (2 < uVar2) {
        if (uVar2 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar11->motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto switchD_0043fe37_caseD_5;
        }
        goto LAB_0043fcd4;
      }
      iVar6 = 2;
    }
LAB_0043fad3:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar6,1);
  }
switchD_0043fe37_caseD_5:
  pCVar3 = (this_ptr->base).base.grabbed_by;
  if (pCVar3 == (CDemonActor *)0x0) {
    *(float *)((this_ptr->base).base.unk1 + 0x20) =
         *(float *)((this_ptr->base).base.unk1 + 0x20) - in_stack_00000008 * (float)32;
    local_38 = *(float *)((this_ptr->base).base.unk1 + 0x1c) * in_stack_00000008;
    local_34 = *(float *)((this_ptr->base).base.unk1 + 0x20) * in_stack_00000008;
    local_30 = in_stack_00000008 * *(float *)((this_ptr->base).base.unk1 + 0x24);
    pCVar7 = &(this_ptr->base).base.model.accumulated_root_motion;
    pcVar1 = (this_ptr->base).base.unk1 + 0x10;
    local_50 = pCVar7->x + *(float *)pcVar1;
    local_4c = (this_ptr->base).base.model.accumulated_root_motion.y +
               *(float *)((this_ptr->base).base.unk1 + 0x14);
    local_68 = local_50 + local_38;
    local_48 = (this_ptr->base).base.model.accumulated_root_motion.z +
               *(float *)((this_ptr->base).base.unk1 + 0x18);
    local_64 = local_4c + local_34;
    local_60 = local_48 + local_30;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar7->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    pCVar5 = &this_ptr->base;
    (pCVar5->base).unk1[0x18] = '\0';
    (pCVar5->base).unk1[0x19] = '\0';
    (pCVar5->base).unk1[0x1a] = '\0';
    (pCVar5->base).unk1[0x1b] = '\0';
    fVar12 = *(float *)((this_ptr->base).base.unk1 + 0x18);
    *(float *)((this_ptr->base).base.unk1 + 0x14) = fVar12;
    *(float *)pcVar1 = fVar12;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  else {
    if ((this_ptr->base).base.grabbed_type == 0) {
      pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         ((CDemonActor *)this_ptr,&local_5c,&(pCVar3->location).position);
      pCVar7 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_44,pCVar7);
      local_14 = (CDeformableModelInstance *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar7->y);
      fVar12 = (float)local_14;
      if ((float)local_14 < (float)-1.57079632675) {
        fVar12 = (float)local_14 + 5.3286462644388174e-315._0_4_;
      }
      if ((float)1.57079632675 < fVar12) {
        fVar12 = fVar12 + -3.141593f;
      }
      local_1c = in_stack_00000008 * (float)3.1415926535000001;
      local_20 = -local_1c;
      if (fVar12 < local_20) {
        fVar12 = local_20;
      }
      if (local_1c < fVar12) {
        fVar12 = local_1c;
      }
      (this_ptr->base).base.base.orient.bank = (this_ptr->base).base.base.orient.bank + fVar12;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    }
    local_14 = (CDeformableModelInstance *)(((this_ptr->base).base.grabbed_by)->vtable)._uc;
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
              (&(this_ptr->base).base.model,(CVector3f *)(auStack_80 + 0xc),0);
    iVar6 = (*(code *)local_14->transformed_vertices[0x11].x)();
    if (iVar6 == 0) {
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_0043fc01:
      iVar6 = 0;
    }
    else {
      if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_0043fc01;
      if (*(int *)((this_ptr->base).unk2 + 0xc) == 0) goto LAB_0043fc14;
      iVar6 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar6,1);
  }
LAB_0043fc14:
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  pCStack_18 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCStack_18);
  iVar6 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).isDamageable)((CCharacter *)this_ptr);
  if (iVar6 == 0) {
    blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar12 = *(float *)(this_ptr->unk + 0x14);
    iVar6 = INT_0083b124;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20((CVector3f *)(this_ptr->unk + 8),&CStack_90);
    pCVar11 = local_14;
    source_quaternions = (CQuaternion4f *)auStack_80;
    auStack_80._0_4_ = CStack_90.w;
    *(uint *)(auStack_80 + (uint)bVar10 * -8 + 4) =
         *(uint *)(auStack_80 + (uint)bVar10 * -8 + -0xc);
    *(uint *)(auStack_80 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         *(uint *)(auStack_80 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -8);
    *(uint *)
     ((int)(auStack_80 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) + ((uint)bVar10 * -2 + 1) * 4) =
         *(uint *)
          ((int)(auStack_80 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -8) +
          ((uint)bVar10 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (pCVar11,source_quaternions,fVar12,iVar6,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
switchD_0043fe37_caseD_6:
  return;
}
