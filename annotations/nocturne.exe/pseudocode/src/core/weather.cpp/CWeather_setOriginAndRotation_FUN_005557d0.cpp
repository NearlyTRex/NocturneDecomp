// Name: core_weather.cpp_CWeather_setOriginAndRotation_FUN_005557d0
// Address: 005557d0
// Address Range: [[005557d0, 005559cf]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_setOriginAndRotation_FUN_005557d0(CWeather *this_ptr,CVector3f *direction,CVector3f *rotation)

#include "nocturne.h"

void __cdecl core_weather_cpp_CWeather_setOriginAndRotation_FUN_005557d0(CWeather *this_ptr,CVector3f *direction,CVector3f *rotation)

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
  if (this_ptr->weather_type != WEATHER_TYPE_NONE) {
    pCVar2 = g_CVector3f_ARRAY_02ddfa28;
    iVar3 = 0;
    do {
      local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(5.0,50.0);
      local_14 = local_18;
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
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
      core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
      core_setcolid_cpp_CDemonSet_disableIgnore_FUN_005117e0(g_CDemonSet_PTR_005be368);
      local_14 = core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                           (g_CDemonSet_PTR_005be368,&local_50,&local_44);
      fVar1 = (local_44.y - local_50.y) * local_14 + local_50.y;
      *(float *)(iVar3 + 0x2de0388) = fVar1;
      local_24 = (double)fVar1;
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,1.0);
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
