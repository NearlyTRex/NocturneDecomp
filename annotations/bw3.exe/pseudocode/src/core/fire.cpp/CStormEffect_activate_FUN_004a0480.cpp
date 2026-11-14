// Name: core_fire.cpp_CStormEffect_activate_FUN_004a0480
// Address: 004a0480
// Address Range: [[004a0480, 004a056e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CStormEffect_activate_FUN_004a0480(CStormEffect *this_ptr,CVector3f position)

#include "nocturne.h"

void __cdecl core_fire_cpp_CStormEffect_activate_FUN_004a0480(CStormEffect *this_ptr,CVector3f position)

{
  EWeatherType EVar1;
  int iVar2;
  CSound *this_ptr_00;
  CWeather *this_ptr_01;
  uint uVar3;
  CVector3f *pCVar4;
  CVector3f local_20;
  CVector3f local_14;
  
  this_ptr_01 = 0x02D0C1A0;
  EVar1 = 0x02D0C1A0->weather_type;
  this_ptr->saved_weather_type = EVar1;
  if (EVar1 == WEATHER_TYPE_NONE) {
    iVar2 = g_CDemonSetPtr->selected_camera_index;
    pCVar4 = &g_CDemonSetPtr->cameras[iVar2].position;
    if (&local_14 != pCVar4) {
      local_14.x = pCVar4->x;
      local_14.y = g_CDemonSetPtr->cameras[iVar2].position.y;
      local_14.z = g_CDemonSetPtr->cameras[iVar2].position.z;
    }
    pCVar4 = &g_CDemonSetPtr->cameras[iVar2].orientation;
    if (&local_20 != pCVar4) {
      local_20.x = pCVar4->x;
      local_20.y = g_CDemonSetPtr->cameras[iVar2].orientation.y;
      local_20.z = g_CDemonSetPtr->cameras[iVar2].orientation.z;
    }
    core_weather_cpp_CWeather_setWeatherType_FUN_0057d050(0x02D0C1A0,5);
    core_weather_cpp_CWeather_setOriginAndRotation_FUN_0057d1a0(0x02D0C1A0,&local_14,&local_20);
  }
  else {
    core_weather_cpp_CWeather_setWeatherType_FUN_0057d050(this_ptr_01,5);
  }
  this_ptr_00 = 0x02CF5680;
  this_ptr->time_remaining = 5.0;
  uVar3 = core_sound_cpp_CSound_playActorSound_FUN_005609d0
                    (this_ptr_00,(CDemonActor *)this_ptr,"@wp_storm.wav" + 1,&position);
  this_ptr->sfx_handle = uVar3;
  return;
}
