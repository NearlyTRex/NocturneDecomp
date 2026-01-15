// Name: core_weather.cpp_CWeather_FUN_005ef940
// Address: 005ef940
// Address Range: [[005ef940, 005ef99b] [005efb24, 005efb3f]]
// Convention: unknown
// Signature: undefined core_weather.cpp_CWeather_FUN_005ef940()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_weather.cpp_CWeather_FUN_005ef940(CWeather* param_1, uint
   param_2, uint param_3) */

void core_weather_cpp_CWeather_FUN_005ef940(void)

{
  float fVar1;
  CVector3f *pCVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  int *in_stack_00000004;
  float *in_stack_00000008;
  int *in_stack_0000000c;
  CVector3f local_50;
  CVector3f local_44;
  CVector3f local_38;
  double local_24;
  float local_18;
  float local_14;
  
  if ((float *)(in_stack_00000004 + 2) != in_stack_00000008) {
    in_stack_00000004[2] = (int)*in_stack_00000008;
    in_stack_00000004[3] = (int)in_stack_00000008[1];
    in_stack_00000004[4] = (int)in_stack_00000008[2];
  }
  if (in_stack_00000004 + 5 != in_stack_0000000c) {
    in_stack_00000004[5] = *in_stack_0000000c;
    in_stack_00000004[6] = in_stack_0000000c[1];
    in_stack_00000004[7] = in_stack_0000000c[2];
  }
  if (*in_stack_00000004 != 0) {
    pCVar2 = DAT_03f95df8;
    iVar3 = 0;
    do {
      local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,50.0);
      local_14 = local_18;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                           ((float)in_stack_0000000c[1] + (float)_DAT_00657c24,
                            (float)in_stack_0000000c[1] + (float)_DAT_00657c1c);
      fVar4 = (float10)fsin((float10)local_14);
      fVar5 = (float10)fcos((float10)local_14);
      local_38.x = (float)(fVar4 * (float10)local_18 + (float10)*in_stack_00000008);
      local_38.y = in_stack_00000008[1];
      local_38.z = (float)(fVar5 * (float10)local_18 + (float10)in_stack_00000008[2]);
      if (&local_50 != &local_38) {
        local_50.x = local_38.x;
        local_50.y = local_38.y;
        local_50.z = local_38.z;
      }
      if (&local_44 != &local_38) {
        local_44.x = local_38.x;
        local_44.y = local_38.y;
        local_44.z = local_38.z;
      }
      local_50.y = local_50.y + _DAT_00657c2c;
      local_44.y = local_44.y + _DAT_00657c30;
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00574210(g_CDemonSetPtr);
      local_14 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                           (g_CDemonSetPtr,&local_50,&local_44);
      fVar1 = (local_44.y - local_50.y) * local_14 + local_50.y;
      *(float *)((int)&DAT_03f96758 + iVar3) = fVar1;
      local_24 = (double)fVar1;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
      local_38.y = local_14 * (float)_DAT_00657c14 + (float)local_24;
      if (pCVar2 != &local_38) {
        pCVar2->x = local_38.x;
        pCVar2->y = local_38.y;
        pCVar2->z = local_38.z;
      }
      iVar3 = iVar3 + 4;
      pCVar2 = pCVar2 + 1;
    } while (iVar3 != 800);
    in_stack_00000004[10] = 0;
    in_stack_00000004[9] = 0;
  }
  return;
}
