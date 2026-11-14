// Name: core_weather.cpp_CWeather_setOriginAndRotation_FUN_005af040
// Address: 005af040
// Address Range: [[005af040, 005af23f]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_setOriginAndRotation_FUN_005af040(CWeather *this_ptr,CVector3f *direction,CVector3f *rotation)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_weather_cpp_CWeather_setOriginAndRotation_FUN_005af040(CWeather *this_ptr,CVector3f *direction,CVector3f *rotation)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
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
    pfVar2 = (float *)&DAT_02c997f8;
    iVar3 = 0;
    do {
      local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(5.0,50.0);
      local_14 = local_18;
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00
                           (rotation->y + (float)_DAT_005f99ba,rotation->y + (float)_DAT_005f99b2);
      fVar4 = (float10)fsin((float10)local_14);
      fVar5 = (float10)fcos((float10)local_14);
      local_38 = (float)(fVar4 * (float10)local_18 + (float10)direction->x);
      local_34 = direction->y;
      local_30 = (float)(fVar5 * (float10)local_18 + (float10)direction->z);
      if (&local_50 != &local_38) {
        local_50 = local_38;
        local_4c = local_34;
        local_48 = local_30;
      }
      if (&local_44 != &local_38) {
        local_44 = local_38;
        local_40 = local_34;
        local_3c = local_30;
      }
      local_4c = local_4c + _DAT_005f99c2;
      local_40 = local_40 + _DAT_005f99c6;
      core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_disableIgnore_FUN_005592b0(g_CDemonSetPtr);
      local_14 = (float)core_setcolid_cpp_FUN_00557300(g_CDemonSetPtr,&local_50,&local_44);
      fVar1 = (local_40 - local_4c) * local_14 + local_4c;
      *(float *)(iVar3 + 0x2c9a158) = fVar1;
      local_24 = (double)fVar1;
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,1.0);
      local_34 = local_14 * (float)_DAT_005f99aa + (float)local_24;
      if (pfVar2 != &local_38) {
        *pfVar2 = local_38;
        pfVar2[1] = local_34;
        pfVar2[2] = local_30;
      }
      iVar3 = iVar3 + 4;
      pfVar2 = pfVar2 + 3;
    } while (iVar3 != 800);
    this_ptr->flash_timer = 0.0;
    this_ptr->lightning_active = 0;
  }
  return;
}
