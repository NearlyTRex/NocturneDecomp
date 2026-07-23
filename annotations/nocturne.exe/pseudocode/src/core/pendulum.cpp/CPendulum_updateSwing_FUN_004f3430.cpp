// Name: core_pendulum.cpp_CPendulum_updateSwing_FUN_004f3430
// Address: 004f3430
// Address Range: [[004f3430, 004f3a15]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_CPendulum_updateSwing_FUN_004f3430(int param_1,float param_2)

#include "nocturne.h"

void __cdecl core_pendulum_cpp_CPendulum_updateSwing_FUN_004f3430(int param_1,float param_2)

{
  uint *puVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  double dVar6;
  float local_68;
  float local_64;
  float local_60;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  byte local_30 [12];
  double local_24;
  double local_1c;
  float local_14;
  
  local_24 = (double)*(float *)(param_1 + 0x398);
  local_1c = (double)floor(local_24);
  local_50 = (float)((float10)local_24 - (float10)local_1c);
  *(float *)(param_1 + 0x398) = param_2 / *(float *)(param_1 + 0x39c) + *(float *)(param_1 + 0x398);
  if ((*(int *)(param_1 + 0x434) != 0) && (1.0 < *(float *)(param_1 + 0x398))) {
    *(float *)(param_1 + 0x398) = *(float *)(param_1 + 0x398) + 0.5f;
  }
  dVar6 = (double)floor((double)*(float *)(param_1 + 0x398));
  fVar2 = (float10)*(float *)(param_1 + 0x398) - (float10)dVar6;
  *(float *)(param_1 + 0x398) = (float)fVar2;
  fVar3 = (float10)fsin(fVar2 * (float10)2 * (float10)3.1415926535000001);
  fVar4 = (float10)*(float *)(param_1 + 0x42c) + (float10)param_2;
  fVar5 = (float10)-1;
  *(float *)(param_1 + 0x42c) = (float)fVar4;
  fVar2 = (float10)1;
  fVar5 = (float10)1.4426950408889634 * fVar4 * (float10)*(float *)(param_1 + 0x428) * fVar5;
  fVar4 = (float10)f2xm1(fVar5 - (fVar5 / fVar2) * fVar2);
  fVar2 = (float10)fscale(fVar4 + fVar2,fVar5);
  *(float *)(param_1 + 0x38) = (float)(fVar2 * fVar3 * (float10)*(float *)(param_1 + 0x3a0));
  local_1c = dVar6;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000();
  puVar1 = (uint *)
           core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                     (param_1,local_30,param_1 + 0x408);
  if ((uint *)(param_1 + 0x414) != puVar1) {
    *(uint *)(param_1 + 0x414) = *puVar1;
    *(uint *)(param_1 + 0x418) = puVar1[1];
    *(uint *)(param_1 + 0x41c) = puVar1[2];
  }
  fVar2 = (float10)1;
  fVar5 = (float10)1.4426950408889634 *
          (float10)*(float *)(param_1 + 0x428) * (float10)-1 *
          (float10)*(float *)(param_1 + 0x42c);
  fVar3 = (float10)f2xm1(fVar5 - (fVar5 / fVar2) * fVar2);
  fVar2 = (float10)fscale(fVar3 + fVar2,fVar5);
  if ((0.0 < param_2) && ((float)0.10000000000000001 < (float)fVar2)) {
    local_40 = *(float *)(param_1 + 0x398);
    local_48 = local_50;
    if (local_50 < (float)-0.5) {
      local_48 = local_50 + 1.0;
    }
    if ((float)0.5 + 0.0 < local_48) {
      local_48 = local_48 + 1.5873523201947252e-314._0_4_;
    }
    if (local_48 <= 0.0) {
      if (local_40 < local_48) {
        local_40 = local_40 + 1.0;
      }
      if (local_40 < local_48) {
        local_40 = local_40 + 1.0;
      }
      if (local_48 + 1.0 < local_40) {
        local_40 = local_40 + 1.5873523201947252e-314._0_4_;
      }
      if (local_48 + 1.0 < local_40) {
        local_40 = local_40 + 1.5873523201947252e-314._0_4_;
      }
      if (0.0 < local_40) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,param_1 + 0x3c8);
      }
    }
    local_14 = *(float *)(param_1 + 0x3c4) + (float)0.25;
    local_64 = *(float *)(param_1 + 0x398);
    local_54 = local_50;
    if (local_50 < local_14 + (float)-0.5) {
      local_54 = local_50 + 1.0;
    }
    if (local_14 + (float)0.5 < local_54) {
      local_54 = local_54 + 1.5873523201947252e-314._0_4_;
    }
    if (local_54 <= local_14) {
      if (local_64 < local_54) {
        local_64 = local_64 + 1.0;
      }
      if (local_64 < local_54) {
        local_64 = local_64 + 1.0;
      }
      if (local_54 + 1.0 < local_64) {
        local_64 = local_64 + 1.5873523201947252e-314._0_4_;
      }
      if (local_54 + 1.0 < local_64) {
        local_64 = local_64 + 1.5873523201947252e-314._0_4_;
      }
      if (local_14 < local_64) {
        core_sound_cpp_CSound_playTrackedActorSound_FUN_0052ea90
                  (0x02DC9450,param_1,param_1 + 0x3a4,param_1 + 0x414);
      }
    }
    local_60 = *(float *)(param_1 + 0x398);
    local_4c = local_50;
    if (local_50 < 0.0) {
      local_4c = local_50 + 1.0;
    }
    if ((float)0.5 + 0.5 < local_4c) {
      local_4c = local_4c + 1.5873523201947252e-314._0_4_;
    }
    if (local_4c <= 0.5) {
      if (local_60 < local_4c) {
        local_60 = local_60 + 1.0;
      }
      if (local_60 < local_4c) {
        local_60 = local_60 + 1.0;
      }
      if (local_4c + 1.0 < local_60) {
        local_60 = local_60 + 1.5873523201947252e-314._0_4_;
      }
      if (local_4c + 1.0 < local_60) {
        local_60 = local_60 + 1.5873523201947252e-314._0_4_;
      }
      if (0.5 < local_60) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,param_1 + 1000);
      }
    }
    local_14 = *(float *)(param_1 + 0x3c4) + (float)0.75;
    local_68 = *(float *)(param_1 + 0x398);
    if (local_50 < local_14 + (float)-0.5) {
      local_50 = local_50 + 1.0;
    }
    if (local_14 + (float)0.5 < local_50) {
      local_50 = local_50 + 1.5873523201947252e-314._0_4_;
    }
    if (local_50 <= local_14) {
      if (local_68 < local_50) {
        local_68 = local_68 + 1.0;
      }
      if (local_68 < local_50) {
        local_68 = local_68 + 1.0;
      }
      if (local_50 + 1.0 < local_68) {
        local_68 = local_68 + 1.5873523201947252e-314._0_4_;
      }
      if (local_50 + 1.0 < local_68) {
        local_68 = local_68 + 1.5873523201947252e-314._0_4_;
      }
      if (local_14 < local_68) {
        core_sound_cpp_CSound_playTrackedActorSound_FUN_0052ea90
                  (0x02DC9450,param_1,param_1 + 0x3a4,param_1 + 0x414);
        return;
      }
    }
  }
  return;
}
