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
  float fVar2;
  CVector3f *pCVar3;
  BADSPACEBASE *in_ESP;
  uint unaff_ESI;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  int *in_stack_00000004;
  float *in_stack_00000008;
  int *in_stack_0000000c;
  float local_3c;
  float local_38;
  CVector3f local_34;
  float fStack_28;
  CVector3f CStack_20;
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
    pCVar3 = DAT_03f95df8;
    iVar4 = 0;
    do {
      fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,50.0);
      local_14 = fVar1;
      fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                        ((float)in_stack_0000000c[1] + (float)_DAT_00657c24,
                         (float)in_stack_0000000c[1] + (float)_DAT_00657c1c);
      fVar5 = (float10)fsin((float10)fVar2);
      fVar6 = (float10)fcos((float10)fVar2);
      local_34.y = (float)(fVar5 * (float10)fVar1 + (float10)*in_stack_00000008);
      local_34.z = in_stack_00000008[1];
      fStack_28 = (float)(fVar6 * (float10)fVar1 + (float10)in_stack_00000008[2]);
      if (&local_3c != &local_34.y) {
        local_3c = local_34.y;
        local_38 = local_34.z;
        local_34.x = fStack_28;
      }
      local_38 = local_38 + _DAT_00657c30;
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00574210(g_CDemonSetPtr);
      fVar1 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                        (g_CDemonSetPtr,(CVector3f *)&stack0xffffffc0,&local_34);
      fVar1 = (local_34.z - local_38) * fVar1 + local_38;
      *(float *)((int)&DAT_03f96758 + iVar4) = fVar1;
      fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
      CStack_20.y = fVar2 * (float)_DAT_00657c14 +
                    (float)(double)CONCAT44 /* combine 2-byte values */(unaff_ESI,(int)((ulonglong)(double)fVar1 >> 0x20));
      if (pCVar3 != &CStack_20) {
        pCVar3->x = CStack_20.x;
        pCVar3->y = CStack_20.y;
        pCVar3->z = CStack_20.z;
      }
      iVar4 = iVar4 + 4;
      pCVar3 = pCVar3 + 1;
    } while (iVar4 != 800);
    *(uint *)((int)fVar2 + 0x28) = 0;
    *(uint *)((int)fVar2 + 0x24) = 0;
  }
  return;
}
