// Name: core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0
// Address: 004b59e0
// Address Range: [[004b59e0, 004b5a6d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,int intensity_target,int intensity_scale,int spark_type,int fade_rate)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,int intensity_target,int intensity_scale,int spark_type,int fade_rate)

{
  int iVar1;
  int iVar2;
  CSpark *pCVar3;
  
  iVar1 = _DAT_01c986b0;
  iVar2 = _DAT_01c986b0 + 1;
  pCVar3 = g_SparkPool + _DAT_01c986b0;
  _DAT_01c986b0 = iVar2;
  if (0xff < iVar2) {
    _DAT_01c986b0 = 0;
  }
  (*(code *)**(uint **)&g_SparkPool[iVar1].field_0x3c)(pCVar3,position,velocity);
  iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0xc000,0xffff);
  g_SparkPool[iVar1].first_update_flag = 0;
  g_SparkPool[iVar1].intensity_current =
       (uint)((longlong)intensity_scale * (longlong)iVar2) >> 0x10 |
       (int)((ulonglong)((longlong)intensity_scale * (longlong)iVar2) >> 0x20) << 0x10;
  g_SparkPool[iVar1].intensity_target = intensity_target;
  g_SparkPool[iVar1].spark_type = spark_type;
  g_SparkPool[iVar1].fade_rate = fade_rate;
  return;
}
