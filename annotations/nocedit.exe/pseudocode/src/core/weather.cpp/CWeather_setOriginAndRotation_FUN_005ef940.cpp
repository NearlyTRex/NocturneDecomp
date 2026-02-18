// Name: core_weather.cpp_CWeather_setOriginAndRotation_FUN_005ef940
// Address: 005ef940
// Address Range: [[005ef940, 005ef99b] [005efb24, 005efb3f]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_setOriginAndRotation_FUN_005ef940(CWeather *this_ptr,CVector3f *direction,CVector3f *rotation)

#include "nocturne.h"

void __cdecl core_weather_cpp_CWeather_setOriginAndRotation_FUN_005ef940(CWeather *this_ptr,CVector3f *direction,CVector3f *rotation)

{
  float fVar1;
  CVector3f *pCVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  CVector3f local_50;
  CVector3f local_44;
  CVector3f local_38;
  double local_24;
  float local_18;
  float local_14;
  
  if (&this_ptr->direction != direction) {
    (this_ptr->direction).x = direction->x;
    (this_ptr->direction).y = direction->y;
    (this_ptr->direction).z = direction->z;
  }
  if (&this_ptr->rotation != rotation) {
    (this_ptr->rotation).x = rotation->x;
    (this_ptr->rotation).y = rotation->y;
    (this_ptr->rotation).z = rotation->z;
  }
  if (this_ptr->weather_type != 0) {
    pCVar2 = g_WeatherParticlePositions;
    iVar3 = 0;
    do {
      local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,50.0);
      local_14 = local_18;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                           (rotation->y + (float)-0.78539816337500001,
                            rotation->y + (float)0.78539816337500001);
      fVar4 = (float10)fsin((float10)local_14);
      fVar5 = (float10)fcos((float10)local_14);
      local_38.x = (float)(fVar4 * (float10)local_18 + (float10)direction->x);
      local_38.y = direction->y;
      local_38.z = (float)(fVar5 * (float10)local_18 + (float10)direction->z);
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
      local_50.y = local_50.y + 50.0f;
      local_44.y = local_44.y + -50.0f;
      core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00574210(g_CDemonSetPtr);
      local_14 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                           (g_CDemonSetPtr,&local_50,&local_44);
      fVar1 = (local_44.y - local_50.y) * local_14 + local_50.y;
      *(float *)((int)g_WeatherParticleGroundHeights + iVar3) = fVar1;
      local_24 = (double)fVar1;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
      local_38.y = local_14 * (float)100 + (float)local_24;
      if (pCVar2 != &local_38) {
        pCVar2->x = local_38.x;
        pCVar2->y = local_38.y;
        pCVar2->z = local_38.z;
      }
      iVar3 = iVar3 + 4;
      pCVar2 = pCVar2 + 1;
    } while (iVar3 != 800);
    this_ptr->flash_timer = 0.0;
    this_ptr->lightning_active = 0;
  }
  return;
}
