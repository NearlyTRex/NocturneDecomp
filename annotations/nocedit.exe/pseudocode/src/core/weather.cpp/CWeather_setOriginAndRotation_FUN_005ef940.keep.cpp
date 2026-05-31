// Name: core_weather.cpp_CWeather_setOriginAndRotation_FUN_005ef940
// Address: 005ef940
// MANUAL RECONSTRUCTION
// Address Range: [[005ef940, 005efb3f]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_setOriginAndRotation_FUN_005ef940(CWeather *this_ptr,CVector3f *direction,CVector3f *rotation)

#include "nocturne.h"

void __cdecl core_weather_cpp_CWeather_setOriginAndRotation_FUN_005ef940(CWeather *this_ptr,CVector3f *direction,CVector3f *rotation)

{
  float fVar2;
  float fVar3;
  CVector3f *pCVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  CVector3f local_50;
  CVector3f local_44;
  CVector3f local_38;
  float fVar1;
  
  if (&this_ptr->direction != direction) {
    this_ptr->direction = *direction;
  }
  if (&this_ptr->rotation != rotation) {
    this_ptr->rotation = *rotation;
  }
  if (this_ptr->weather_type != WEATHER_TYPE_NONE) {
    pCVar2 = g_WeatherParticlePositions;
    iVar3 = 0;
    do {
      fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(5.0,50.0);
      fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10
                        (rotation->y + (float)-0.78539816337500001,rotation->y + (float)0.78539816337500001);
      fVar4 = (float10)fsin((float10)fVar3);
      fVar5 = (float10)fcos((float10)fVar3);
      local_38.x = (float)(fVar4 * (float10)fVar2 + (float10)direction->x);
      local_38.y = direction->y;
      local_38.z = (float)(fVar5 * (float10)fVar2 + (float10)direction->z);
      local_50 = local_38;
      local_44 = local_38;
      local_50.y = local_50.y + 50.0f;
      local_44.y = local_44.y + -50.0f;
      core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00574210(g_CDemonSetPtr);
      fVar2 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(g_CDemonSetPtr,&local_50,&local_44);
      fVar1 = (local_44.y - local_50.y) * fVar2 + local_50.y;
      g_WeatherParticleGroundHeights[iVar3] = fVar1;
      fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,1.0);
      local_38.y = fVar2 * (float)100 + fVar1;
      if (pCVar2 != &local_38) {
        *pCVar2 = local_38;
      }
      iVar3 = iVar3 + 1;
      pCVar2 = pCVar2 + 1;
    } while (iVar3 != 200);
    this_ptr->flash_timer = 0.0;
    this_ptr->lightning_active = 0;
  }
  return;
}
