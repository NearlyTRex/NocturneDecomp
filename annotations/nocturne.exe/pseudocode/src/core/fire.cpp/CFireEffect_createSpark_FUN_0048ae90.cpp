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
  CSpark *this_ptr_00;
  
  iVar1 = _DAT_01c49d50;
  iVar2 = _DAT_01c49d50 + 1;
  this_ptr_00 = g_CSpark_ARRAY_01c49d54 + _DAT_01c49d50;
  _DAT_01c49d50 = iVar2;
  if (0xff < iVar2) {
    _DAT_01c49d50 = 0;
  }
  (*(g_CSpark_ARRAY_01c49d54[iVar1].base.vtable)->setup)(&this_ptr_00->base,position,velocity);
  iVar2 = core_actor_cpp_getRandomInt_FUN_0040de00(0xc000,0xffff);
  g_CSpark_ARRAY_01c49d54[iVar1].first_update_flag = 0;
  g_CSpark_ARRAY_01c49d54[iVar1].intensity_current =
       (uint)((longlong)intensity_scale * (longlong)iVar2) >> 0x10 |
       (int)((ulonglong)((longlong)intensity_scale * (longlong)iVar2) >> 0x20) << 0x10;
  g_CSpark_ARRAY_01c49d54[iVar1].intensity_target = intensity_target;
  g_CSpark_ARRAY_01c49d54[iVar1].spark_type = spark_type;
  g_CSpark_ARRAY_01c49d54[iVar1].fade_rate = fade_rate;
  return;
}
