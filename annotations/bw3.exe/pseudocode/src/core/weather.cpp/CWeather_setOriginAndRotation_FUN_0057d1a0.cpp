// Name: core_weather.cpp_CWeather_setOriginAndRotation_FUN_0057d1a0
// Address: 0057d1a0
// Address Range: [[0057d1a0, 0057d417]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_setOriginAndRotation_FUN_0057d1a0(CWeather *this_ptr,CVector3f *direction,CVector3f *rotation)

#include "nocturne.h"

void __cdecl core_weather_cpp_CWeather_setOriginAndRotation_FUN_0057d1a0(CWeather *this_ptr,CVector3f *direction,CVector3f *rotation)

{
  float fVar1;
  CVector3f *pCVar2;
  float *pfVar3;
  CVector3f *pCVar4;
  float10 fVar5;
  float10 fVar6;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  double local_2c;
  int local_20;
  int local_1c;
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
    local_20 = 0;
    if (0 < (int)this_ptr[1].weather_type) {
      pCVar2 = &g_CVector3f_02d0c208;
      pCVar4 = (CVector3f *)&DAT_02d17d88;
      local_1c = 0;
      pfVar3 = (float *)&DAT_02d11fc8;
      do {
        local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(5.0,50.0);
        local_14 = local_18;
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40
                             (rotation->y + (float)-0.78539816337500001,
                              rotation->y + (float)0.78539816337500001);
        fVar5 = (float10)fsin((float10)local_14);
        fVar6 = (float10)fcos((float10)local_14);
        local_58.x = (float)(fVar5 * (float10)local_18 + (float10)direction->x);
        local_58.y = direction->y;
        local_58.z = (float)(fVar6 * (float10)local_18 + (float10)direction->z);
        if (&local_4c != &local_58) {
          local_4c.x = local_58.x;
          local_4c.y = local_58.y;
          local_4c.z = local_58.z;
        }
        if (&local_40 != &local_58) {
          local_40.x = local_58.x;
          local_40.y = local_58.y;
          local_40.z = local_58.z;
        }
        local_4c.y = local_4c.y + 50.0f;
        local_40.y = local_40.y + -50.0f;
        core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_disableIgnore_FUN_0053ec70(g_CDemonSetPtr);
        local_14 = core_setcolid_cpp_CDemonSet_raycast_FUN_0053ccc0
                             (g_CDemonSetPtr,&local_4c,&local_40);
        fVar1 = (local_40.y - local_4c.y) * local_14 + local_4c.y;
        *(float *)(local_1c + 0x2d1db48) = fVar1;
        local_2c = (double)fVar1;
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,1.0);
        local_58.y = local_14 * (float)100 + (float)local_2c;
        if (pCVar2 != &local_58) {
          pCVar2->x = local_58.x;
          pCVar2->y = local_58.y;
          pCVar2->z = local_58.z;
        }
        if ((CVector3f *)pfVar3 != &local_58) {
          *pfVar3 = local_58.x;
          pfVar3[1] = local_58.y;
          pfVar3[2] = local_58.z;
        }
        if (pCVar4 != &g_CVector3f_02cfd900) {
          pCVar4->x = g_CVector3f_02cfd900.x;
          pCVar4->y = g_CVector3f_02cfd900.y;
          pCVar4->z = g_CVector3f_02cfd900.z;
        }
        local_1c = local_1c + 4;
        local_20 = local_20 + 1;
        pCVar2 = pCVar2 + 1;
        pfVar3 = pfVar3 + 3;
        pCVar4 = pCVar4 + 1;
      } while (local_20 < (int)this_ptr[1].weather_type);
    }
    this_ptr->flash_timer = 0.0;
    this_ptr->lightning_active = 0;
  }
  return;
}
