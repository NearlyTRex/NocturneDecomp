// Name: core_hellhag.cpp_CHag_processAI_FUN_005ab260
// Address: 005ab260
// Address Range: [[005ab260, 005ab752]]
// Convention: __cdecl
// Signature: void __cdecl core_hellhag_cpp_CHag_processAI_FUN_005ab260(CHag *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_hellhag_cpp_CHag_processAI_FUN_005ab260(CHag *this_ptr,float delta_time)

{
  int iVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  SStateMachine *pSVar5;
  CSimpleParticleSystem *this_ptr_00;
  uint *puVar6;
  float *pfVar7;
  uint *puVar8;
  CMatrix3x4f *pCVar9;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
  float afStackY_18cc [1491];
  float max_value;
  CVector3f *position_offset;
  CVector3f *velocity;
  CVector3f *acceleration;
  float fVar13;
  float texture_index;
  float fStack_148;
  CMatrix3x4f CStack_120;
  CQuaternion4f CStack_f0;
  CQuaternion4f CStack_e0;
  CVector3f CStack_d0;
  float fStack_c4;
  float afStack_c0 [2];
  CVector3f CStack_b8;
  CVector3f CStack_ac;
  CVector3f CStack_a0;
  float fStack_94;
  float afStack_90 [2];
  CVector3f CStack_88;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  float fStack_58;
  float afStack_54 [2];
  CVector3f CStack_4c;
  float fStack_40;
  float afStack_3c [2];
  double dStack_34;
  float fStack_2c;
  float fStack_28;
  CSimpleParticleSystem *pCStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar10 = 0;
  pSVar5 = &(this_ptr->base).state_machine;
  iVar1 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(pSVar5,"Death");
  if (iVar1 == 0) {
    iVar1 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(pSVar5,"Animation");
    if (iVar1 == 0) {
      iVar1 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(pSVar5,"Burn");
      if (iVar1 == 0) {
        (*(this_ptr->base).base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
      }
    }
  }
  core_bwspart_cpp_CSimpleParticleSystem_process_FUN_005a8180
            ((this_ptr->base).base.base.base.particle_systems,delta_time);
  core_bwspart_cpp_CSimpleParticleSystem_process_FUN_005a8180
            ((this_ptr->base).base.base.base.particle_systems + 4,delta_time);
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                     (&(this_ptr->base).base.base.model.base);
  if (pSVar2->state_index == 0) {
    if ((this_ptr->base).idle_sound[0] == '\0') {
      sound_sndmain_cpp_killSfx_FUN_00551050((this_ptr->base).idle_sfx_handle);
    }
    else {
      fVar13 = (this_ptr->base).idle_sound_timer - delta_time;
      (this_ptr->base).idle_sound_timer = fVar13;
      if (fVar13 <= 0.0) {
        (this_ptr->base).idle_sound_timer = (this_ptr->base).idle_sound_interval;
        uVar3 = (*((this_ptr->base).base.base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,(this_ptr->base).idle_sound);
        (this_ptr->base).idle_sfx_handle = uVar3;
      }
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00551050((this_ptr->base).idle_sfx_handle);
  }
  if ((this_ptr->base).base.base.hit_points < (this_ptr->base).base.base.max_hit_points) {
    pSVar5 = &(this_ptr->base).state_machine;
    iVar1 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(pSVar5,"Death");
    if (iVar1 == 0) {
      iVar1 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(pSVar5,"Burn");
      if (iVar1 == 0) {
        uVar3 = this_ptr->sfx_handle;
        (this_ptr->base).base.base.hit_points =
             delta_time * (float)15 + (this_ptr->base).base.base.hit_points;
        iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(uVar3);
        if (iVar1 == 0) {
          sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
          fVar13 = 2.8026e-45;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
          sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005503e0((double)fStack_14,(int)fVar13);
          uVar3 = (*((this_ptr->base).base.base.base.vtable._ub)->playAmbientSound)
                            ((CDemonActor *)this_ptr,"hagheal01L.wav");
          this_ptr->sfx_handle = uVar3;
          fStack_148 = 8.329993e-39;
          sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
        }
        this_ptr_00 = (this_ptr->base).base.base.base.particle_systems;
        iVar1 = core_bwspart_cpp_CSimpleParticleSystem_isActive_FUN_005a8130(this_ptr_00);
        if (iVar1 != 0) {
          iVar1 = 0;
          pCStack_24 = this_ptr_00;
          do {
            iVar4 = core_bwgrndma_cpp_shouldSpawnParticle_FUN_005a7ed0();
            if (iVar4 != 0) {
              fStack_20 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.1415927,6.2831855);
              fStack_14 = fStack_20;
              fStack_1c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.1415927,6.2831855);
              fStack_14 = fStack_1c;
              CStack_64.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.1415927,6.2831855)
              ;
              CStack_64.x = fStack_20;
              CStack_64.y = fStack_1c;
              fStack_18 = CStack_64.z;
              fStack_14 = CStack_64.z;
              core_xform_cpp_eulerToQuaternion_FUN_00594380(&CStack_64,&CStack_e0);
              CStack_f0.w = CStack_e0.w;
              puVar8 = (uint *)((int)&CStack_f0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
              puVar6 = (uint *)((int)&CStack_e0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
              *(uint *)((int)&CStack_f0 + (uint)bVar10 * -8 + 4) =
                   *(uint *)((int)&CStack_e0 + (uint)bVar10 * -8 + 4);
              *puVar8 = *puVar6;
              puVar8[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
              core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10
                        (&CStack_f0,(CMatrix3x4f *)&stack0xfffffeb0);
              pfVar7 = (float *)&stack0xfffffeb0;
              pCVar9 = &CStack_120;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                pCVar9->m[0].w = *pfVar7;
                pfVar7 = pfVar7 + (uint)bVar10 * -2 + 1;
                pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar10 * -2 + 1) * 4);
              }
              CStack_d0.x = 0.0;
              CStack_d0.y = 0.0;
              CStack_d0.z = 8.0;
              core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_d0,&CStack_120,&CStack_7c);
              CStack_4c.x = CStack_7c.x;
              *(uint *)((int)&CStack_4c + (uint)bVar10 * -8 + 4) =
                   *(uint *)((int)&CStack_7c + (uint)bVar10 * -8 + 4);
              *(uint *)((int)&CStack_4c + ((uint)bVar10 * -2 + (uint)bVar10 * -2) * 4 + 8) =
                   *(uint *)((int)&CStack_7c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
              fStack_58 = -CStack_4c.x;
              afStack_54[0] = -CStack_4c.y;
              afStack_54[1] = -CStack_4c.z;
              fStack_40 = -CStack_4c.x;
              afStack_3c[(uint)bVar10 * -2] = afStack_54[(uint)bVar10 * -2];
              afStack_3c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                   afStack_54[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
              acceleration = &CStack_70;
              texture_index = 0.0;
              fStack_94 = fStack_40 * 0.1f;
              afStack_90[0] = afStack_3c[0] * 0.1f;
              afStack_90[1] = afStack_3c[1] * 0.1f;
              CStack_88.x = fStack_40 * 0.1f;
              *(float *)((int)&CStack_88 + (uint)bVar10 * -8 + 4) = afStack_90[(uint)bVar10 * -2];
              *(float *)((int)&CStack_88 + ((uint)bVar10 * -2 + (uint)bVar10 * -2) * 4 + 8) =
                   afStack_90[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
              velocity = &CStack_88;
              position_offset = &CStack_4c;
              max_value = 1.0;
              fVar13 = 0.5;
              fStack_c4 = CStack_88.x * 2.0f;
              afStack_c0[0] = CStack_88.y * 2.0f;
              afStack_c0[1] = CStack_88.z * 2.0f;
              CStack_70.x = CStack_88.x * 2.0f;
              *(float *)((int)&CStack_70 + (uint)bVar10 * -8 + 4) = afStack_c0[(uint)bVar10 * -2];
              *(float *)((int)&CStack_70 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                   afStack_c0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
              fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar13,max_value);
              core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                        (pCStack_24,3.0,1.0,0.0,0.7,0.0,0.3,0.2,fStack_14,position_offset,velocity,
                         acceleration,(int)texture_index);
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < 5);
          iVar1 = core_bwgrndma_cpp_shouldSpawnParticle_FUN_005a7ed0();
          if (iVar1 != 0) {
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
            fVar11 = (float10)fcos((float10)fStack_14);
            fVar12 = (float10)fsin((float10)fStack_14);
            dStack_34 = (double)fVar12;
            fStack_2c = (float)(fVar11 * (float10)2);
            CStack_b8.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,6.0);
            CStack_b8.x = (float)((float10)dStack_34 * (float10)2);
            CStack_b8.z = fStack_2c;
            CStack_a0.y = 1.0;
            CStack_ac.x = 0.0;
            CStack_ac.y = 0.1;
            CStack_ac.z = 0.0;
            CStack_a0.x = 0.0;
            CStack_a0.z = 0.0;
            fStack_28 = CStack_b8.y;
            fStack_14 = CStack_b8.x;
            core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                      ((this_ptr->base).base.base.base.particle_systems,2.0,0.7,0.0,0.3,1.0,1.0,0.0,
                       0.0,&CStack_b8,&CStack_ac,&CStack_a0,0);
            return;
          }
        }
      }
    }
  }
  return;
}
