// Name: core_weather.cpp_CWeather_setOriginAndRotation_FUN_005557d0
// Address: 005557d0
// Address Range: [[005557d0, 005559cf]]
// Convention: unknown
// Signature: void core_weather_cpp_CWeather_setOriginAndRotation_FUN_005557d0(int *param_1,float *param_2,int *param_3)

#include "nocturne.h"

void core_weather_cpp_CWeather_setOriginAndRotation_FUN_005557d0(int *param_1,float *param_2,int *param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  double local_24;
  float local_18;
  float local_14;
  
  if ((float *)(param_1 + 2) != param_2) {
    param_1[2] = (int)*param_2;
    param_1[3] = (int)param_2[1];
    param_1[4] = (int)param_2[2];
  }
  if (param_1 + 5 != param_3) {
    param_1[5] = *param_3;
    param_1[6] = param_3[1];
    param_1[7] = param_3[2];
  }
  if (*param_1 != 0) {
    pfVar2 = (float *)&DAT_02ddfa28;
    iVar3 = 0;
    do {
      local_18 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40a00000,0x42480000);
      local_14 = local_18;
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                  ((float)param_3[1] + (float)-0.78539816337500001,
                                   (float)param_3[1] + (float)0.78539816337500001);
      fVar4 = (float10)fsin((float10)local_14);
      fVar5 = (float10)fcos((float10)local_14);
      local_38 = (float)(fVar4 * (float10)local_18 + (float10)*param_2);
      local_34 = param_2[1];
      local_30 = (float)(fVar5 * (float10)local_18 + (float10)param_2[2]);
      if (&local_50 != &local_38) {
        local_50 = local_38;
        local_4c = local_34;
        local_48 = local_30;
      }
      if (&local_44 != &local_38) {
        local_44 = local_38;
        local_40 = local_34;
        local_3c = local_30;
      }
      local_4c = local_4c + 50.0f;
      local_40 = local_40 + -50.0f;
      core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
      core_setcolid_cpp_CDemonSet_disableIgnore_FUN_005117e0(0x01E57284);
      local_14 = (float)core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                                  (0x01E57284,&local_50,&local_44);
      fVar1 = (local_40 - local_4c) * local_14 + local_4c;
      *(float *)(iVar3 + 0x2de0388) = fVar1;
      local_24 = (double)fVar1;
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x3f800000);
      local_34 = local_14 * (float)100 + (float)local_24;
      if (pfVar2 != &local_38) {
        *pfVar2 = local_38;
        pfVar2[1] = local_34;
        pfVar2[2] = local_30;
      }
      iVar3 = iVar3 + 4;
      pfVar2 = pfVar2 + 3;
    } while (iVar3 != 800);
    param_1[10] = 0;
    param_1[9] = 0;
  }
  return;
}
