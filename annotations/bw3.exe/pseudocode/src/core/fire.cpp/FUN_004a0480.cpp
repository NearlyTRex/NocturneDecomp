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
  byte *puVar4;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  piVar2 = 0x02D0C1A0;
  iVar1 = *0x02D0C1A0;
  *(int *)(param_1->actor_name + 4) = iVar1;
  if (iVar1 == 0) {
    iVar1 = g_CDemonSetPtr->selected_camera_index;
    puVar4 = &g_CDemonSetPtr->cameras[iVar1].field_0x100;
    if (&local_14 != (uint *)puVar4) {
      local_14 = *(uint *)puVar4;
      local_10 = *(uint *)&g_CDemonSetPtr->cameras[iVar1].field_0x104;
      local_c = *(uint *)&g_CDemonSetPtr->cameras[iVar1].field_0x108;
    }
    puVar4 = &g_CDemonSetPtr->cameras[iVar1].field_0x10c;
    if (&local_20 != (uint *)puVar4) {
      local_20 = *(uint *)puVar4;
      local_1c = *(uint *)&g_CDemonSetPtr->cameras[iVar1].field_0x110;
      local_18 = *(uint *)&g_CDemonSetPtr->cameras[iVar1].field_0x114;
    }
    core_weather_cpp_FUN_0057d050(0x02D0C1A0,5);
    core_weather_cpp_FUN_0057d1a0(0x02D0C1A0,&local_14,&local_20);
  }
  else {
    core_weather_cpp_FUN_0057d050(piVar2,5);
  }
  this_ptr = 0x02CF5680;
  param_1->actor_name[0] = '\0';
  param_1->actor_name[1] = '\0';
  param_1->actor_name[2] = -0x60;
  param_1->actor_name[3] = '@';
  uVar3 = core_sound_cpp_CSound_playActorSound_FUN_005609d0
                    (this_ptr,param_1,"@wp_storm.wav" + 1,(CVector3f *)&stack0x00000008);
  *(uint *)(param_1->actor_name + 8) = uVar3;
  return;
}
