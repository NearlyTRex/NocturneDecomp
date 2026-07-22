// Name: core_bat.cpp_CBat_process_FUN_00411c40
// Address: 00411c40
// Address Range: [[00411c40, 00411e25]]
// Convention: unknown
// Signature: void core_bat_cpp_CBat_process_FUN_00411c40(int param_1,float param_2)

#include "nocturne.h"

void core_bat_cpp_CBat_process_FUN_00411c40(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  
  fVar1 = *(float *)(param_1 + 0x20);
  fVar2 = *(float *)(param_1 + 0x24);
  fVar3 = *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x2fc) = *(float *)(param_1 + 0x300) * param_2 + *(float *)(param_1 + 0x2fc);
  core_bat_cpp_CBat_updateCoursePosition_FUN_00411f20(param_1);
  fVar2 = *(float *)(param_1 + 0x24) - fVar2;
  fVar6 = (fVar2 * (float)4) / param_2 + (float)35;
  if (fVar6 < (float)10) {
    fVar6 = 10.0;
  }
  if ((float)60 < fVar6) {
    fVar6 = 60.0;
  }
  *(float *)(param_1 + 0x308) =
       (fVar6 - *(float *)(param_1 + 0x308)) * (float)0.69999999999999996 + *(float *)(param_1 + 0x308);
  *(float *)(param_1 + 0x17c) =
       param_2 * *(float *)(param_1 + 0x308) * *(float *)(param_1 + 0x304) +
       *(float *)(param_1 + 0x17c);
  iVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                    (param_1 + 0x180,fVar6,*(float *)(param_1 + 0x20) - fVar1,fVar2,
                     *(float *)(param_1 + 0x28) - fVar3);
  if (*(float *)(param_1 + 0x17c) < (float)*(int *)(iVar4 + 0x100)) {
    if (*(float *)(param_1 + 0x17c) < 0.0) {
      *(float *)(param_1 + 0x17c) = (float)(*(int *)(iVar4 + 0x100) + -1);
    }
  }
  else {
    *(uint *)(param_1 + 0x17c) = 0;
  }
  if ((*(char *)(param_1 + 0x30c) != '\0') &&
     (param_2 = *(float *)(param_1 + 0x37c) - param_2, *(float *)(param_1 + 0x37c) = param_2,
     param_2 <= 0.0)) {
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0x378));
    if (iVar4 == 0) {
      iVar4 = sound_sndmain_cpp_isWithinListenerRadius_FUN_00527880
                        ((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                         (double)*(float *)(param_1 + 0x28),0,0x40490000);
      if (iVar4 != 0) {
        uVar5 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x28))(param_1,param_1 + 0x30c);
        *(uint *)(param_1 + 0x378) = uVar5;
      }
    }
    uVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                      (*(uint *)(param_1 + 0x370),*(uint *)(param_1 + 0x374));
    *(uint *)(param_1 + 0x37c) = uVar5;
    return;
  }
  return;
}
