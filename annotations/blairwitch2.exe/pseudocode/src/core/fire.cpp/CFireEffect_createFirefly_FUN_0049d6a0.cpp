// Name: core_fire.cpp_CFireEffect_createFirefly_FUN_0049d6a0
// Address: 0049d6a0
// Address Range: [[0049d6a0, 0049d766]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createFirefly_FUN_0049d6a0(CFireEffect *this_ptr,CVector3f *param_2,CVector3f *param_3,int param_4,int param_5,int param_6,int param_7,float param_8,float param_9)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createFirefly_FUN_0049d6a0(CFireEffect *this_ptr,CVector3f *param_2,CVector3f *param_3,int param_4,int param_5,int param_6,int param_7,float param_8,float param_9)

{
  int iVar1;
  int iVar2;
  CFirefly *this_ptr_00;
  
  iVar1 = _DAT_01c848f4;
  iVar2 = _DAT_01c848f4 + 1;
  this_ptr_00 = CFirefly_ARRAY_01c848f8 + _DAT_01c848f4;
  _DAT_01c848f4 = iVar2;
  if (0x3f < iVar2) {
    _DAT_01c848f4 = 0;
  }
  (*(CFirefly_ARRAY_01c848f8[iVar1].base.vtable)->setup)(&this_ptr_00->base,param_2,param_3);
  iVar2 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0xc000,0xffff);
  CFirefly_ARRAY_01c848f8[iVar1].intensity =
       (uint)((longlong)param_5 * (longlong)iVar2) >> 0x10 |
       (int)((ulonglong)((longlong)param_5 * (longlong)iVar2) >> 0x20) << 0x10;
  CFirefly_ARRAY_01c848f8[iVar1].fade_rate = param_4;
  CFirefly_ARRAY_01c848f8[iVar1].texture_index = param_6;
  CFirefly_ARRAY_01c848f8[iVar1].time_scale = param_7;
  CFirefly_ARRAY_01c848f8[iVar1].jitter = param_8;
  CFirefly_ARRAY_01c848f8[iVar1].size = param_9;
  CFirefly_ARRAY_01c848f8[iVar1].first_update_flag = 0;
  CFirefly_ARRAY_01c848f8[iVar1].base.velocity.z = 0.0;
  CFirefly_ARRAY_01c848f8[iVar1].base.velocity.y = CFirefly_ARRAY_01c848f8[iVar1].base.velocity.z;
  CFirefly_ARRAY_01c848f8[iVar1].base.velocity.x = CFirefly_ARRAY_01c848f8[iVar1].base.velocity.y;
  CFirefly_ARRAY_01c848f8[iVar1].base.acceleration.z = 0.0;
  CFirefly_ARRAY_01c848f8[iVar1].base.acceleration.y =
       CFirefly_ARRAY_01c848f8[iVar1].base.acceleration.z;
  CFirefly_ARRAY_01c848f8[iVar1].base.acceleration.x =
       CFirefly_ARRAY_01c848f8[iVar1].base.acceleration.y;
  return;
}
