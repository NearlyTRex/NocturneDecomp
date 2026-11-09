// Name: core_weather.cpp_CWeather_setOriginAndRotation_FUN_0058b4f0
// Address: 0058b4f0
// Address Range: [[0058b4f0, 0058b6ef]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_setOriginAndRotation_FUN_0058b4f0(CWeather *this_ptr,CVector3f *direction,CVector3f *rotation)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_weather_cpp_CWeather_setOriginAndRotation_FUN_0058b4f0(CWeather *this_ptr,CVector3f *direction,CVector3f *rotation)

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
  
  if ((CVector3f *)(this_ptr + 8) != direction) {
    *(uint *)(this_ptr + 8) = *(uint *)direction;
    *(uint *)(this_ptr + 0xc) = *(uint *)&direction->field_0x4;
    *(uint *)(this_ptr + 0x10) = *(uint *)&direction->field_0x8;
  }
  if ((CVector3f *)(this_ptr + 0x14) != rotation) {
    *(uint *)(this_ptr + 0x14) = *(uint *)rotation;
    *(uint *)(this_ptr + 0x18) = *(uint *)&rotation->field_0x4;
    *(uint *)(this_ptr + 0x1c) = *(uint *)&rotation->field_0x8;
  }
  if (*(int *)this_ptr != 0) {
    pfVar2 = (float *)&DAT_02661fb8;
    iVar3 = 0;
    do {
      local_18 = (float)core_actor_cpp_FUN_0040cf60(0x40a00000,0x42480000);
      local_14 = local_18;
      local_14 = (float)core_actor_cpp_FUN_0040cf60
                                  (*(float *)&rotation->field_0x4 + (float)_DAT_005ee5e2,
                                   *(float *)&rotation->field_0x4 + (float)_DAT_005ee5da);
      fVar4 = (float10)fsin((float10)local_14);
      fVar5 = (float10)fcos((float10)local_14);
      local_38 = (float)(fVar4 * (float10)local_18 + (float10)*(float *)direction);
      local_34 = *(float *)&direction->field_0x4;
      local_30 = (float)(fVar5 * (float10)local_18 + (float10)*(float *)&direction->field_0x8);
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
      local_4c = local_4c + _DAT_005ee5ea;
      local_40 = local_40 + _DAT_005ee5ee;
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00537e90(g_CDemonSetPtr);
      local_14 = (float)core_setcolid_cpp_FUN_00535ee0(g_CDemonSetPtr,&local_50,&local_44);
      fVar1 = (local_40 - local_4c) * local_14 + local_4c;
      *(float *)(iVar3 + 0x2662918) = fVar1;
      local_24 = (double)fVar1;
      local_14 = (float)core_actor_cpp_FUN_0040cf60(0,0x3f800000);
      local_34 = local_14 * (float)_DAT_005ee5d2 + (float)local_24;
      if (pfVar2 != &local_38) {
        *pfVar2 = local_38;
        pfVar2[1] = local_34;
        pfVar2[2] = local_30;
      }
      iVar3 = iVar3 + 4;
      pfVar2 = pfVar2 + 3;
    } while (iVar3 != 800);
    *(uint *)(this_ptr + 0x28) = 0;
    *(uint *)(this_ptr + 0x24) = 0;
  }
  return;
}
