// Name: core_pendulum.cpp_CPendulum_updateSwing_FUN_0050e700
// Address: 0050e700
// Address Range: [[0050e700, 0050ecf7]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_CPendulum_updateSwing_FUN_0050e700(CPendulum *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_pendulum_cpp_CPendulum_updateSwing_FUN_0050e700(CPendulum *this_ptr,float delta_time)

{
  byte bVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float afStackY_1028 [1002];
  float fStack_70;
  float fStack_6c;
  float fStack_64;
  float fStack_60;
  float fStack_54;
  float fStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  double dStack_28;
  double dStack_20;
  
  bVar1 = 0;
  dStack_28 = (double)this_ptr->param;
  dStack_20 = floor(dStack_28);
  fStack_50 = (float)((float10)dStack_28 - (float10)dStack_20);
  this_ptr->param = delta_time / this_ptr->period + this_ptr->param;
  if ((this_ptr->half_movement != 0) && (1.0 < this_ptr->param)) {
    this_ptr->param = this_ptr->param + _DAT_005cbb01;
  }
  dStack_20 = floor((double)this_ptr->param);
  fVar2 = (float10)this_ptr->param - (float10)dStack_20;
  this_ptr->param = (float)fVar2;
  fVar3 = (float10)fsin(fVar2 * (float10)_DAT_005cbb05 * (float10)_DAT_005cbb0d);
  fVar4 = (float10)this_ptr->decay_timer + (float10)delta_time;
  fVar5 = (float10)_DAT_005cbb15;
  this_ptr->decay_timer = (float)fVar4;
  fVar2 = (float10)1;
  fVar5 = (float10)1.4426950408889634 * fVar4 * (float10)this_ptr->decay * fVar5;
  fVar4 = (float10)f2xm1(fVar5 - (fVar5 / fVar2) * fVar2);
  fVar2 = (float10)fscale(fVar4 + fVar2,fVar5);
  (this_ptr->base).orient.vec.z = (float)(fVar2 * fVar3 * (float10)this_ptr->max_angle);
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(&this_ptr->base);
  core_actor_cpp_FUN_00408b80(this_ptr);
  fStack_40 = fStack_34;
  (&stack0xffffffc4)[(uint)bVar1 * 0xfffffffe] = (&stack0xffffffc4)[(uint)bVar1 * -2 + 3];
  (&stack0xffffffc4)[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       (&stack0xffffffc4)[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4];
  if (&this_ptr->swing_tip_world != (CVector3f *)&stack0xffffffc0) {
    (this_ptr->swing_tip_world).x = fStack_40;
    (this_ptr->swing_tip_world).y = fStack_3c;
    (this_ptr->swing_tip_world).z = fStack_38;
  }
  fVar2 = (float10)1;
  fVar5 = (float10)1.4426950408889634 *
          (float10)this_ptr->decay * (float10)_DAT_005cbb15 * (float10)this_ptr->decay_timer;
  fVar3 = (float10)f2xm1(fVar5 - (fVar5 / fVar2) * fVar2);
  fVar2 = (float10)fscale(fVar3 + fVar2,fVar5);
  fStack_64 = (float)fVar2;
  if ((0.0 < delta_time) && ((float)_DAT_005cbb1d < fStack_64)) {
    fStack_60 = fStack_50;
    fStack_70 = this_ptr->param;
    fStack_54 = 0.0;
    if (fStack_50 < (float)_DAT_005cbb25) {
      fStack_60 = fStack_50 + 1.0;
    }
    if ((float)_DAT_005cbb2d + 0.0 < fStack_60) {
      fStack_60 = fStack_60 + _DAT_005cbb35;
    }
    if (fStack_60 <= 0.0) {
      if (fStack_70 < fStack_60) {
        fStack_70 = fStack_70 + 1.0;
      }
      if (fStack_70 < fStack_60) {
        fStack_70 = fStack_70 + 1.0;
      }
      if (fStack_60 + 1.0 < fStack_70) {
        fStack_70 = fStack_70 + _DAT_005cbb35;
      }
      if (fStack_60 + 1.0 < fStack_70) {
        fStack_70 = fStack_70 + _DAT_005cbb35;
      }
      if (0.0 < fStack_70) {
        (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->creak_1_sound);
      }
    }
    fStack_44 = this_ptr->swoosh_phase_bias + (float)_DAT_005cbb3d;
    fStack_54 = fStack_48;
    fStack_6c = this_ptr->param;
    if (fStack_48 < fStack_44 + (float)_DAT_005cbb25) {
      fStack_54 = fStack_48 + 1.0;
    }
    if (fStack_44 + (float)_DAT_005cbb2d < fStack_54) {
      fStack_54 = fStack_54 + _DAT_005cbb35;
    }
    if (fStack_54 <= fStack_44) {
      if (fStack_6c < fStack_54) {
        fStack_6c = fStack_6c + 1.0;
      }
      if (fStack_6c < fStack_54) {
        fStack_6c = fStack_6c + 1.0;
      }
      if (fStack_54 + 1.0 < fStack_6c) {
        fStack_6c = fStack_6c + _DAT_005cbb35;
      }
      if (fStack_54 + 1.0 < fStack_6c) {
        fStack_6c = fStack_6c + _DAT_005cbb35;
      }
      if (fStack_44 < fStack_6c) {
        core_sound_cpp_CSound_playTrackedActorSound_FUN_00560a00
                  (0x02CF5680,&this_ptr->base,this_ptr->swoosh_sound,&this_ptr->swing_tip_world);
      }
    }
    fStack_50 = fStack_48;
    fStack_70 = this_ptr->param;
    fStack_40 = 0.5;
    if (fStack_48 < 0.0) {
      fStack_50 = fStack_48 + 1.0;
    }
    if ((float)_DAT_005cbb2d + 0.5 < fStack_50) {
      fStack_50 = fStack_50 + _DAT_005cbb35;
    }
    if (fStack_50 <= 0.5) {
      if (fStack_70 < fStack_50) {
        fStack_70 = fStack_70 + 1.0;
      }
      if (fStack_70 < fStack_50) {
        fStack_70 = fStack_70 + 1.0;
      }
      if (fStack_50 + 1.0 < fStack_70) {
        fStack_70 = fStack_70 + _DAT_005cbb35;
      }
      if (fStack_50 + 1.0 < fStack_70) {
        fStack_70 = fStack_70 + _DAT_005cbb35;
      }
      if (0.5 < fStack_70) {
        (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->creak_2_sound);
      }
    }
    fStack_60 = this_ptr->swoosh_phase_bias + (float)_DAT_005cbb45;
    fStack_3c = fStack_48;
    fStack_64 = this_ptr->param;
    if (fStack_48 < fStack_60 + (float)_DAT_005cbb25) {
      fStack_3c = fStack_48 + 1.0;
    }
    if (fStack_60 + (float)_DAT_005cbb2d < fStack_3c) {
      fStack_3c = fStack_3c + _DAT_005cbb35;
    }
    if (fStack_3c <= fStack_60) {
      if (fStack_64 < fStack_3c) {
        fStack_64 = fStack_64 + 1.0;
      }
      if (fStack_64 < fStack_3c) {
        fStack_64 = fStack_64 + 1.0;
      }
      if (fStack_3c + 1.0 < fStack_64) {
        fStack_64 = fStack_64 + _DAT_005cbb35;
      }
      if (fStack_3c + 1.0 < fStack_64) {
        fStack_64 = fStack_64 + _DAT_005cbb35;
      }
      if (fStack_60 < fStack_64) {
        core_sound_cpp_CSound_playTrackedActorSound_FUN_00560a00
                  (0x02CF5680,&this_ptr->base,this_ptr->swoosh_sound,&this_ptr->swing_tip_world);
        return;
      }
    }
  }
  return;
}
