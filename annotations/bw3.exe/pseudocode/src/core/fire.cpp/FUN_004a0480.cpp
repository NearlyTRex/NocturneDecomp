// Name: core_fire.cpp_FUN_004a0480
// Address: 004a0480
// Address Range: [[004a0480, 004a056e]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004a0480(CDemonActor *param_1)

#include "nocturne.h"

void core_fire_cpp_FUN_004a0480(CDemonActor *param_1)

{
  int iVar1;
  CSound *this_ptr;
  int *piVar2;
  uint uVar3;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  piVar2 = 0x02D0C1A0;
  iVar1 = *0x02D0C1A0;
  *(int *)&param_1->field_0x4 = iVar1;
  if (iVar1 == 0) {
    iVar1 = *(int *)&g_CDemonSetPtr->field_0x15aeb8;
    if (&local_14 != (uint *)(&g_CDemonSetPtr->field_0x104 + iVar1 * 0x1a4)) {
      local_14 = *(uint *)(&g_CDemonSetPtr->field_0x104 + iVar1 * 0x1a4);
      local_10 = *(uint *)(&g_CDemonSetPtr->field_0x108 + iVar1 * 0x1a4);
      local_c = *(uint *)(&g_CDemonSetPtr->field_0x10c + iVar1 * 0x1a4);
    }
    if (&local_20 != (uint *)(&g_CDemonSetPtr->field_0x110 + iVar1 * 0x1a4)) {
      local_20 = *(uint *)(&g_CDemonSetPtr->field_0x110 + iVar1 * 0x1a4);
      local_1c = *(uint *)(&g_CDemonSetPtr->field_0x114 + iVar1 * 0x1a4);
      local_18 = *(uint *)(&g_CDemonSetPtr->field_0x118 + iVar1 * 0x1a4);
    }
    core_weather_cpp_FUN_0057d050(0x02D0C1A0,5);
    core_weather_cpp_FUN_0057d1a0(0x02D0C1A0,&local_14,&local_20);
  }
  else {
    core_weather_cpp_FUN_0057d050(piVar2,5);
  }
  this_ptr = 0x02CF5680;
  *(uint *)param_1 = 0x40a00000;
  uVar3 = core_sound_cpp_CSound_playActorSound_FUN_005609d0
                    (this_ptr,param_1,"@wp_storm.wav" + 1,(CVector3f *)&stack0x00000008);
  *(uint *)&param_1->field_0x8 = uVar3;
  return;
}
