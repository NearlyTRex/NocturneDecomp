// Name: core_pendulum.cpp_CPendulum_updateSwing_FUN_00549b90
// Address: 00549b90
// Address Range: [[00549b90, 0054a175]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_CPendulum_updateSwing_FUN_00549b90(CPendulum *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_pendulum_cpp_CPendulum_updateSwing_FUN_00549b90(CPendulum *this_ptr,float delta_time)

{
  float fVar2;
  CVector3f *pCVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  double dVar10;
  float local_60;
  float local_5c;
  float local_58;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  CVector3f local_30;
  double local_24;
  double local_1c;
  float fVar1;
  
  fVar2 = this_ptr->param;
  dVar10 = floor((double)fVar2);
  local_48 = fVar2 - (float)dVar10;
  this_ptr->param = delta_time / this_ptr->period + this_ptr->param;
  if ((this_ptr->one_shot != 0) && (1.0 < this_ptr->param)) {
    this_ptr->param = this_ptr->param + 0.5f;
  }
  dVar10 = floor((double)this_ptr->param);
  fVar3 = (float10)this_ptr->param - (float10)dVar10;
  this_ptr->param = (float)fVar3;
  fVar4 = (float10)fsin(fVar3 * (float10)2 * (float10)3.1415926535000001);
  fVar5 = (float10)this_ptr->decay_timer + (float10)delta_time;
  fVar7 = (float10)-1;
  this_ptr->decay_timer = (float)fVar5;
  fVar8 = (float10)1;
  fVar6 = (float10)1.4426950408889634 * fVar5 * (float10)this_ptr->decay * fVar7;
  fVar7 = (float10)f2xm1(fVar6 - (fVar6 / fVar8) * fVar8);
  fVar8 = (float10)fscale(fVar7 + fVar8,fVar6);
  (this_ptr->base).orient.vec.z = (float)(fVar8 * fVar4 * (float10)this_ptr->max_angle);
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (&this_ptr->base,&local_30,&this_ptr->swing_tip_local);
  if (&this_ptr->swing_tip_world != pCVar2) {
    (this_ptr->swing_tip_world).x = pCVar2->x;
    (this_ptr->swing_tip_world).y = pCVar2->y;
    (this_ptr->swing_tip_world).z = pCVar2->z;
  }
  fVar8 = (float10)1;
  fVar7 = (float10)1.4426950408889634 *
          (float10)this_ptr->decay * (float10)-1 * (float10)this_ptr->decay_timer;
  fVar9 = (float10)f2xm1(fVar7 - (fVar7 / fVar8) * fVar8);
  fVar8 = (float10)fscale(fVar9 + fVar8,fVar7);
  if ((0.0 < delta_time) && ((float)0.10000000000000001 < (float)fVar8)) {
    local_40 = this_ptr->param;
    if (local_48 < (float)-0.5) {
      local_48 = local_48 + 1.0;
    }
    if ((float)0.5 + 0.0 < local_48) {
      local_48 = local_48 + -1.0f;
    }
    if (local_48 <= 0.0) {
      if (local_40 < local_48) {
        local_40 = local_40 + 1.0;
      }
      if (local_40 < local_48) {
        local_40 = local_40 + 1.0;
      }
      if (local_48 + 1.0 < local_40) {
        local_40 = local_40 + -1.0f;
      }
      if (local_48 + 1.0 < local_40) {
        local_40 = local_40 + -1.0f;
      }
      if (0.0 < local_40) {
        (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->creak_1_sound);
      }
    }
    fVar1 = this_ptr->swoosh_phase_bias + (float)0.25;
    local_4c = local_3c;
    local_5c = this_ptr->param;
    if (local_3c < fVar1 + (float)-0.5) {
      local_4c = local_3c + 1.0;
    }
    if (fVar1 + (float)0.5 < local_4c) {
      local_4c = local_4c + -1.0f;
    }
    if (local_4c <= fVar1) {
      if (local_5c < local_4c) {
        local_5c = local_5c + 1.0;
      }
      if (local_5c < local_4c) {
        local_5c = local_5c + 1.0;
      }
      if (local_4c + 1.0 < local_5c) {
        local_5c = local_5c + -1.0f;
      }
      if (local_4c + 1.0 < local_5c) {
        local_5c = local_5c + -1.0f;
      }
      if (fVar1 < local_5c) {
        core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                  (g_CSoundPtr,&this_ptr->base,this_ptr->swoosh_sound,&this_ptr->swing_tip_world);
      }
    }
    local_44 = local_3c;
    local_58 = this_ptr->param;
    if (local_3c < 0.0) {
      local_44 = local_3c + 1.0;
    }
    if ((float)0.5 + 0.5 < local_44) {
      local_44 = local_44 + -1.0f;
    }
    if (local_44 <= 0.5) {
      if (local_58 < local_44) {
        local_58 = local_58 + 1.0;
      }
      if (local_58 < local_44) {
        local_58 = local_58 + 1.0;
      }
      if (local_44 + 1.0 < local_58) {
        local_58 = local_58 + -1.0f;
      }
      if (local_44 + 1.0 < local_58) {
        local_58 = local_58 + -1.0f;
      }
      if (0.5 < local_58) {
        (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->creak_2_sound);
      }
    }
    local_30.x = this_ptr->swoosh_phase_bias + (float)0.75;
    local_48 = local_3c;
    local_60 = this_ptr->param;
    if (local_3c < local_30.x + (float)-0.5) {
      local_48 = local_3c + 1.0;
    }
    if (local_30.x + (float)0.5 < local_48) {
      local_48 = local_48 + -1.0f;
    }
    if (local_48 <= local_30.x) {
      if (local_60 < local_48) {
        local_60 = local_60 + 1.0;
      }
      if (local_60 < local_48) {
        local_60 = local_60 + 1.0;
      }
      if (local_48 + 1.0 < local_60) {
        local_60 = local_60 + -1.0f;
      }
      if (local_48 + 1.0 < local_60) {
        local_60 = local_60 + -1.0f;
      }
      if (local_30.x < local_60) {
        core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                  (g_CSoundPtr,&this_ptr->base,this_ptr->swoosh_sound,&this_ptr->swing_tip_world);
        return;
      }
    }
  }
  return;
}
