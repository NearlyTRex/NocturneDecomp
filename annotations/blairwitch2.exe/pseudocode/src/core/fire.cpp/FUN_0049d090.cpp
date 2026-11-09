// Name: core_fire.cpp_FUN_0049d090
// Address: 0049d090
// Address Range: [[0049d090, 0049d11d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_0049d090(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,int intensity_target,int intensity_scale,int spark_type,int fade_rate)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_FUN_0049d090(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,int intensity_target,int intensity_scale,int spark_type,int fade_rate)

{
  int iVar1;
  int iVar2;
  CSpark *pCVar3;
  
  iVar1 = _DAT_01c7f4f0;
  iVar2 = _DAT_01c7f4f0 + 1;
  pCVar3 = g_SparkPool + _DAT_01c7f4f0;
  _DAT_01c7f4f0 = iVar2;
  if (0xff < iVar2) {
    _DAT_01c7f4f0 = 0;
  }
  (*(code *)**(uint **)&g_SparkPool[iVar1].field_0x3c)(pCVar3,position,velocity);
  iVar2 = core_actor_cpp_FUN_0040cfc0(0xc000,0xffff);
  *(uint *)&g_SparkPool[iVar1].field_0x48 = 0;
  *(uint *)&g_SparkPool[iVar1].field_0x40 =
       (uint)((longlong)intensity_scale * (longlong)iVar2) >> 0x10 |
       (int)((ulonglong)((longlong)intensity_scale * (longlong)iVar2) >> 0x20) << 0x10;
  *(int *)&g_SparkPool[iVar1].field_0x44 = intensity_target;
  *(int *)&g_SparkPool[iVar1].field_0x4c = spark_type;
  *(int *)&g_SparkPool[iVar1].field_0x50 = fade_rate;
  return;
}
