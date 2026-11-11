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
  CVector3f *pCVar4;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  piVar2 = 0x02D0C1A0;
  iVar1 = *0x02D0C1A0;
  *(int *)(param_1->actor_name + 4) = iVar1;
  if (iVar1 == 0) {
    iVar1 = g_CDemonSetPtr->selected_camera_index;
    pCVar4 = &g_CDemonSetPtr->cameras[iVar1].position;
    if ((CVector3f *)&local_14 != pCVar4) {
      local_14 = pCVar4->x;
      local_10 = g_CDemonSetPtr->cameras[iVar1].position.y;
      local_c = g_CDemonSetPtr->cameras[iVar1].position.z;
    }
    pCVar4 = &g_CDemonSetPtr->cameras[iVar1].orientation;
    if ((CVector3f *)&local_20 != pCVar4) {
      local_20 = pCVar4->x;
      local_1c = g_CDemonSetPtr->cameras[iVar1].orientation.y;
      local_18 = g_CDemonSetPtr->cameras[iVar1].orientation.z;
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
