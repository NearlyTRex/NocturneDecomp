// Name: core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90
// Address: 0048ae90
// Address Range: [[0048ae90, 0048af1d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,int intensity_target,int intensity_scale,int spark_type,int fade_rate)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,int intensity_target,int intensity_scale,int spark_type,int fade_rate)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01c49d50 + 1;
  iVar1 = _DAT_01c49d50 * 0x4c;
  _DAT_01c49d50 = iVar2;
  if (0xff < iVar2) {
    _DAT_01c49d50 = 0;
  }
  (*(code *)**(uint **)(&DAT_01c49d88 + iVar1))(&DAT_01c49d54 + iVar1,position,velocity);
  iVar2 = core_actor_cpp_getRandomInt_FUN_0040de00(0xc000,0xffff);
  *(uint *)(iVar1 + 0x1c49d94) = 0;
  *(uint *)(iVar1 + 0x1c49d8c) =
       (uint)((longlong)intensity_scale * (longlong)iVar2) >> 0x10 |
       (int)((ulonglong)((longlong)intensity_scale * (longlong)iVar2) >> 0x20) << 0x10;
  *(int *)(iVar1 + 0x1c49d90) = intensity_target;
  *(int *)(iVar1 + 0x1c49d98) = spark_type;
  *(int *)(iVar1 + 0x1c49d9c) = fade_rate;
  return;
}
