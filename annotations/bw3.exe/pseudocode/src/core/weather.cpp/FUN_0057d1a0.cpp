// Name: core_weather.cpp_FUN_0057d1a0
// Address: 0057d1a0
// Address Range: [[0057d1a0, 0057d417]]
// Convention: unknown
// Signature: void core_weather_cpp_FUN_0057d1a0(int *param_1,float *param_2,int *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_weather_cpp_FUN_0057d1a0(int *param_1,float *param_2,int *param_3)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  uint *puVar4;
  float10 fVar5;
  float10 fVar6;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  double local_2c;
  int local_20;
  int local_1c;
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
    local_20 = 0;
    if (0 < param_1[0xe]) {
      pfVar2 = (float *)&DAT_02d0c208;
      puVar4 = (uint *)&DAT_02d17d88;
      local_1c = 0;
      pfVar3 = (float *)&DAT_02d11fc8;
      do {
        local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(5.0,50.0);
        local_14 = local_18;
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40
                             ((float)param_3[1] + (float)_DAT_005d799b,
                              (float)param_3[1] + (float)_DAT_005d7993);
        fVar5 = (float10)fsin((float10)local_14);
        fVar6 = (float10)fcos((float10)local_14);
        local_58 = (float)(fVar5 * (float10)local_18 + (float10)*param_2);
        local_54 = param_2[1];
        local_50 = (float)(fVar6 * (float10)local_18 + (float10)param_2[2]);
        if (&local_4c != &local_58) {
          local_4c = local_58;
          local_48 = local_54;
          local_44 = local_50;
        }
        if (&local_40 != &local_58) {
          local_40 = local_58;
          local_3c = local_54;
          local_38 = local_50;
        }
        local_48 = local_48 + _DAT_005d79a3;
        local_3c = local_3c + _DAT_005d79a7;
        core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_disableIgnore_FUN_0053ec70(g_CDemonSetPtr);
        local_14 = (float)core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr,&local_4c,&local_40);
        fVar1 = (local_3c - local_48) * local_14 + local_48;
        *(float *)(local_1c + 0x2d1db48) = fVar1;
        local_2c = (double)fVar1;
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,1.0);
        local_54 = local_14 * (float)_DAT_005d798b + (float)local_2c;
        if (pfVar2 != &local_58) {
          *pfVar2 = local_58;
          pfVar2[1] = local_54;
          pfVar2[2] = local_50;
        }
        if (pfVar3 != &local_58) {
          *pfVar3 = local_58;
          pfVar3[1] = local_54;
          pfVar3[2] = local_50;
        }
        if (puVar4 != (uint *)&DAT_02cfd900) {
          *puVar4 = _DAT_02cfd900;
          puVar4[1] = _DAT_02cfd904;
          puVar4[2] = _DAT_02cfd908;
        }
        local_1c = local_1c + 4;
        local_20 = local_20 + 1;
        pfVar2 = pfVar2 + 3;
        pfVar3 = pfVar3 + 3;
        puVar4 = puVar4 + 3;
      } while (local_20 < param_1[0xe]);
    }
    param_1[10] = 0;
    param_1[9] = 0;
  }
  return;
}
