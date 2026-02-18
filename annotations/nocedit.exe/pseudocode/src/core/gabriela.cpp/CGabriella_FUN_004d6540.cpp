// Name: core_gabriela.cpp_CGabriella_FUN_004d6540
// Address: 004d6540
// Address Range: [[004d6540, 004d6b2e]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_FUN_004d6540(CGabriella *this_ptr)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_FUN_004d6540(CGabriella *this_ptr)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  SMotion *pSVar4;
  int iVar5;
  CVector3f *pCVar6;
  float *pfVar7;
  float in_stack_00000008;
  int in_stack_0000000c;
  CVector3f local_134 [10];
  byte auStack_bc [24];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  CVector3f CStack_98;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  uint local_3c;
  float local_30;
  uint local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  
  if ((in_stack_0000000c == 0) &&
     (pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(this_ptr->base).base.model.motion_controller), pSVar4->state_index == 2)
     ) {
    in_stack_0000000c = 1;
  }
  if (((this_ptr->base).aim_mode == 0) || ((this_ptr->base).control_type == 2)) {
    if ((this_ptr->weapon_state_flags == 0) || (in_stack_0000000c != 0)) {
      this_ptr->unk1[8] = '\0';
      this_ptr->unk1[9] = '\0';
      this_ptr->unk1[10] = '\0';
      this_ptr->unk1[0xb] = '\0';
    }
    else if (this_ptr->fire_state == 0) {
      iVar5 = 0;
      local_24 = 1e+30;
      local_28 = 0;
      for (local_20 = 0; local_20 < g_CDemonSetPtr->actor_count; local_20 = local_20 + 1) {
        uVar1 = *(uint *)((int)g_CDemonSetPtr->actors + iVar5);
        local_18 = (float)core_gabriela_cpp_CGabriella_FUN_004d6260(this_ptr);
        if ((0.0 <= local_18) && (local_18 < local_24)) {
          local_28 = uVar1;
          local_24 = local_18;
        }
        iVar5 = iVar5 + 4;
      }
      *(uint *)(this_ptr->unk1 + 8) = local_28;
    }
    if (this_ptr->fire_state == 2) {
      if (*(int *)(this_ptr->unk1 + 8) == 0) {
        this_ptr->unk2 = 0;
        this_ptr->dynamite_throw_angle = (float)this_ptr->unk2;
        *(float *)(this_ptr->unk1 + 0x10) = this_ptr->dynamite_throw_angle;
        *(uint *)(this_ptr->unk1 + 0xc) = *(uint *)(this_ptr->unk1 + 0x10);
      }
      fVar2 = in_stack_00000008 / (0.3f * (float)0.5) + (float)this_ptr->unk3;
    }
    else if (*(int *)(this_ptr->unk1 + 8) == 0) {
      if (0.0 < this_ptr->fire_cooldown_timer) goto LAB_004d65dd;
      fVar2 = (float)this_ptr->unk3 - in_stack_00000008 / 0.3f;
    }
    else {
      __arrinit(local_134,10,&g_CVectorTypeInfo);
      iVar5 = (**(code **)(*(int *)(*(int *)(this_ptr->unk1 + 8) + 0x154) + 0x4c))
                        (*(int *)(this_ptr->unk1 + 8),local_134);
      if (iVar5 < 1) {
        pfVar7 = (float *)(**(code **)(*(int *)(*(int *)(this_ptr->unk1 + 8) + 0x154) + 0x14))
                                    (*(int *)(this_ptr->unk1 + 8),auStack_bc);
        fStack_a4 = *pfVar7 + pfVar7[3];
        fStack_a0 = pfVar7[1] + pfVar7[4];
        CStack_8c.x = fStack_a4 * 0.5f;
        fStack_9c = pfVar7[2] + pfVar7[5];
        CStack_8c.y = fStack_a0 * 0.5f;
        local_134[0].z = fStack_9c * 0.5f;
        CStack_8c.z = local_134[0].z;
        fVar2 = CStack_8c.x;
        fVar3 = CStack_8c.y;
        if (&CStack_50 != &CStack_8c) goto LAB_004d6841;
      }
      else if (&CStack_50 != local_134) {
        CStack_50.x = local_134[0].x;
        CStack_50.y = local_134[0].y;
        fVar2 = CStack_50.x;
        fVar3 = CStack_50.y;
LAB_004d6841:
        CStack_50.y = fVar3;
        CStack_50.x = fVar2;
        CStack_50.z = local_134[0].z;
      }
      pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (*(CDemonActor **)(this_ptr->unk1 + 8),&CStack_68,&CStack_50);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                ((CDemonActor *)this_ptr,&CStack_74,pCVar6);
      pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                         (&(this_ptr->base).base.model,&CStack_80,INT_02d7b860);
      CStack_98.x = CStack_74.x - pCVar6->x;
      CStack_98.y = CStack_74.y - pCVar6->y;
      CStack_98.z = CStack_74.z - pCVar6->z;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_5c,&CStack_98);
      fVar2 = in_stack_00000008 / 0.3f;
      *(float *)(this_ptr->unk1 + 0xc) = CStack_5c.x;
      fVar2 = fVar2 + (float)this_ptr->unk3;
      *(float *)(this_ptr->unk1 + 0x10) = CStack_5c.y;
    }
  }
  else {
    fVar2 = (this_ptr->base).player_control.look_up_down_speed * (float)3.1415926535000001 *
            (float)2 * in_stack_00000008 + *(float *)(this_ptr->unk1 + 0xc);
    local_3c = 0x3fc90fdb;
    *(float *)(this_ptr->unk1 + 0xc) = fVar2;
    if (fVar2 < -1.570796f) {
      this_ptr->unk1[0xc] = -0x25;
      this_ptr->unk1[0xd] = '\x0f';
      this_ptr->unk1[0xe] = -0x37;
      this_ptr->unk1[0xf] = -0x41;
    }
    if (1.5707964 < *(float *)(this_ptr->unk1 + 0xc)) {
      this_ptr->unk1[0xc] = -0x25;
      this_ptr->unk1[0xd] = '\x0f';
      this_ptr->unk1[0xe] = -0x37;
      this_ptr->unk1[0xf] = '?';
    }
    fVar2 = in_stack_00000008 / 0.3f + (float)this_ptr->unk3;
    this_ptr->unk1[0x10] = '\0';
    this_ptr->unk1[0x11] = '\0';
    this_ptr->unk1[0x12] = '\0';
    this_ptr->unk1[0x13] = '\0';
  }
  this_ptr->unk3 = (int)fVar2;
LAB_004d65dd:
  if (1.0 < (float)this_ptr->unk3) {
    this_ptr->unk3 = 0x3f800000;
  }
  if ((float)this_ptr->unk3 < 0.0) {
    this_ptr->dynamite_throw_angle = 0.0;
    this_ptr->unk2 = 0;
    this_ptr->unk3 = 0;
  }
  if (0.0 < (float)this_ptr->unk3) {
    local_1c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (*(float *)(this_ptr->unk1 + 0x10) - (float)this_ptr->unk2);
    local_18 = local_1c;
    local_30 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (*(float *)(this_ptr->unk1 + 0xc) - this_ptr->dynamite_throw_angle);
    fVar2 = in_stack_00000008 * (float)3.1415926535000001 * (float)1.5;
    if (local_1c < -fVar2) {
      local_1c = -fVar2;
    }
    if (fVar2 < local_1c) {
      local_1c = fVar2;
    }
    if (local_30 < -fVar2) {
      local_30 = -fVar2;
    }
    if (fVar2 < local_30) {
      local_30 = fVar2;
    }
    this_ptr->dynamite_throw_angle = this_ptr->dynamite_throw_angle + local_30;
    this_ptr->unk2 = (int)((float)this_ptr->unk2 + local_1c);
    return;
  }
  iVar5 = *(int *)(this_ptr->unk1 + 0x10);
  this_ptr->dynamite_throw_angle = *(float *)(this_ptr->unk1 + 0xc);
  this_ptr->unk2 = iVar5;
  return;
}
