// Name: core_pendulum.cpp_FUN_0050e700
// Address: 0050e700
// Address Range: [[0050e700, 0050ecf7]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_FUN_0050e700(CPendulum *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_pendulum_cpp_FUN_0050e700(CPendulum *this_ptr,float delta_time)

{
  byte bVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float afStackY_1028 [1000];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  uint uStack_54;
  float fStack_50;
  float fStack_4c;
  uint uStack_48;
  float fStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  double dStack_28;
  double dStack_20;
  float fStack_18;
  
  bVar1 = 0;
  dStack_28 = (double)*(float *)&this_ptr->field_0x3a0;
  dStack_20 = floor(dStack_28);
  fStack_50 = (float)((float10)dStack_28 - (float10)dStack_20);
  *(float *)&this_ptr->field_0x3a0 =
       delta_time / *(float *)&this_ptr->field_0x3a4 + *(float *)&this_ptr->field_0x3a0;
  if ((*(int *)&this_ptr->field_0x43c != 0) && (1.0 < *(float *)&this_ptr->field_0x3a0)) {
    *(float *)&this_ptr->field_0x3a0 = *(float *)&this_ptr->field_0x3a0 + _DAT_005cbb01;
  }
  dStack_20 = floor((double)*(float *)&this_ptr->field_0x3a0);
  fVar2 = (float10)*(float *)&this_ptr->field_0x3a0 - (float10)dStack_20;
  *(float *)&this_ptr->field_0x3a0 = (float)fVar2;
  fVar3 = (float10)fsin(fVar2 * (float10)_DAT_005cbb05 * (float10)_DAT_005cbb0d);
  fVar4 = (float10)*(float *)&this_ptr->field_0x434 + (float10)delta_time;
  fVar5 = (float10)_DAT_005cbb15;
  *(float *)&this_ptr->field_0x434 = (float)fVar4;
  fVar2 = (float10)1;
  fVar5 = (float10)1.4426950408889634 * fVar4 * (float10)*(float *)&this_ptr->field_0x430 * fVar5;
  fVar4 = (float10)f2xm1(fVar5 - (fVar5 / fVar2) * fVar2);
  fVar2 = (float10)fscale(fVar4 + fVar2,fVar5);
  *(float *)&this_ptr->field_0x38 =
       (float)(fVar2 * fVar3 * (float10)*(float *)&this_ptr->field_0x3a8);
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr);
  core_actor_cpp_FUN_00408b80(this_ptr);
  uStack_40 = uStack_34;
  (&stack0xffffffc4)[(uint)bVar1 * 0xfffffffe] =
       *(uint *)(&stack0xffffffd0 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if ((uint *)&this_ptr->field_0x41c != &stack0xffffffc0) {
    *(uint *)&this_ptr->field_0x41c = uStack_40;
    *(uint *)&this_ptr->field_0x420 = uStack_3c;
    *(uint *)&this_ptr->field_0x424 = uStack_38;
  }
  fVar2 = (float10)1;
  fVar5 = (float10)1.4426950408889634 *
          (float10)*(float *)&this_ptr->field_0x430 * (float10)_DAT_005cbb15 *
          (float10)*(float *)&this_ptr->field_0x434;
  fVar3 = (float10)f2xm1(fVar5 - (fVar5 / fVar2) * fVar2);
  fVar2 = (float10)fscale(fVar3 + fVar2,fVar5);
  fStack_64 = (float)fVar2;
  if ((0.0 < delta_time) && ((float)_DAT_005cbb1d < fStack_64)) {
    fStack_60 = fStack_50;
    fStack_70 = *(float *)&this_ptr->field_0x3a0;
    uStack_54 = 0;
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
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr);
      }
    }
    fStack_4c = *(float *)&this_ptr->field_0x3cc + (float)_DAT_005cbb3d;
    fStack_5c = fStack_50;
    fStack_74 = *(float *)&this_ptr->field_0x3a0;
    if (fStack_50 < fStack_4c + (float)_DAT_005cbb25) {
      fStack_5c = fStack_50 + 1.0;
    }
    if (fStack_4c + (float)_DAT_005cbb2d < fStack_5c) {
      fStack_5c = fStack_5c + _DAT_005cbb35;
    }
    fStack_18 = fStack_4c;
    if (fStack_5c <= fStack_4c) {
      if (fStack_74 < fStack_5c) {
        fStack_74 = fStack_74 + 1.0;
      }
      if (fStack_74 < fStack_5c) {
        fStack_74 = fStack_74 + 1.0;
      }
      if (fStack_5c + 1.0 < fStack_74) {
        fStack_74 = fStack_74 + _DAT_005cbb35;
      }
      if (fStack_5c + 1.0 < fStack_74) {
        fStack_74 = fStack_74 + _DAT_005cbb35;
      }
      if (fStack_4c < fStack_74) {
        core_sound_cpp_CSound_playTrackedActorSound_FUN_00560a00
                  (0x02CF5680,(CDemonActor *)this_ptr,&this_ptr->field_0x3ac,
                   (CVector3f *)&this_ptr->field_0x41c);
      }
    }
    fStack_58 = fStack_50;
    fStack_78 = *(float *)&this_ptr->field_0x3a0;
    uStack_48 = 0x3f000000;
    if (fStack_50 < 0.0) {
      fStack_58 = fStack_50 + 1.0;
    }
    if ((float)_DAT_005cbb2d + 0.5 < fStack_58) {
      fStack_58 = fStack_58 + _DAT_005cbb35;
    }
    if (fStack_58 <= 0.5) {
      if (fStack_78 < fStack_58) {
        fStack_78 = fStack_78 + 1.0;
      }
      if (fStack_78 < fStack_58) {
        fStack_78 = fStack_78 + 1.0;
      }
      if (fStack_58 + 1.0 < fStack_78) {
        fStack_78 = fStack_78 + _DAT_005cbb35;
      }
      if (fStack_58 + 1.0 < fStack_78) {
        fStack_78 = fStack_78 + _DAT_005cbb35;
      }
      if (0.5 < fStack_78) {
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr);
      }
    }
    fStack_68 = *(float *)&this_ptr->field_0x3cc + (float)_DAT_005cbb45;
    fStack_44 = fStack_50;
    fStack_6c = *(float *)&this_ptr->field_0x3a0;
    if (fStack_50 < fStack_68 + (float)_DAT_005cbb25) {
      fStack_44 = fStack_50 + 1.0;
    }
    if (fStack_68 + (float)_DAT_005cbb2d < fStack_44) {
      fStack_44 = fStack_44 + _DAT_005cbb35;
    }
    if (fStack_44 <= fStack_68) {
      if (fStack_6c < fStack_44) {
        fStack_6c = fStack_6c + 1.0;
      }
      if (fStack_6c < fStack_44) {
        fStack_6c = fStack_6c + 1.0;
      }
      if (fStack_44 + 1.0 < fStack_6c) {
        fStack_6c = fStack_6c + _DAT_005cbb35;
      }
      if (fStack_44 + 1.0 < fStack_6c) {
        fStack_6c = fStack_6c + _DAT_005cbb35;
      }
      if (fStack_68 < fStack_6c) {
        fStack_18 = fStack_68;
        core_sound_cpp_CSound_playTrackedActorSound_FUN_00560a00
                  (0x02CF5680,(CDemonActor *)this_ptr,&this_ptr->field_0x3ac,
                   (CVector3f *)&this_ptr->field_0x41c);
        return;
      }
    }
  }
  return;
}
