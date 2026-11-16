// Name: core_fire.cpp_CFireEffect_createFirefly_FUN_004b5fa0
// Address: 004b5fa0
// Address Range: [[004b5fa0, 004b6066]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createFirefly_FUN_004b5fa0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,int fade_rate,int intensity,int texture_index,int time_scale,float jitter,float size)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createFirefly_FUN_004b5fa0(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,int fade_rate,int intensity,int texture_index,int time_scale,float jitter,float size)

{
  int iVar1;
  int iVar2;
  CFirefly *this_ptr_00;
  
  iVar1 = _DAT_01c9dab4;
  iVar2 = _DAT_01c9dab4 + 1;
  this_ptr_00 = CFirefly_ARRAY_01c9dab8 + _DAT_01c9dab4;
  _DAT_01c9dab4 = iVar2;
  if (0x3f < iVar2) {
    _DAT_01c9dab4 = 0;
  }
  (*(CFirefly_ARRAY_01c9dab8[iVar1].base.vtable)->setup)(&this_ptr_00->base,position,velocity);
  iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0xc000,0xffff);
  CFirefly_ARRAY_01c9dab8[iVar1].intensity =
       (uint)((longlong)intensity * (longlong)iVar2) >> 0x10 |
       (int)((ulonglong)((longlong)intensity * (longlong)iVar2) >> 0x20) << 0x10;
  CFirefly_ARRAY_01c9dab8[iVar1].fade_rate = fade_rate;
  CFirefly_ARRAY_01c9dab8[iVar1].texture_index = texture_index;
  CFirefly_ARRAY_01c9dab8[iVar1].time_scale = time_scale;
  CFirefly_ARRAY_01c9dab8[iVar1].jitter = jitter;
  CFirefly_ARRAY_01c9dab8[iVar1].size = size;
  CFirefly_ARRAY_01c9dab8[iVar1].first_update_flag = 0;
  CFirefly_ARRAY_01c9dab8[iVar1].base.velocity.z = 0.0;
  CFirefly_ARRAY_01c9dab8[iVar1].base.velocity.y = CFirefly_ARRAY_01c9dab8[iVar1].base.velocity.z;
  CFirefly_ARRAY_01c9dab8[iVar1].base.velocity.x = CFirefly_ARRAY_01c9dab8[iVar1].base.velocity.y;
  CFirefly_ARRAY_01c9dab8[iVar1].base.acceleration.z = 0.0;
  CFirefly_ARRAY_01c9dab8[iVar1].base.acceleration.y =
       CFirefly_ARRAY_01c9dab8[iVar1].base.acceleration.z;
  CFirefly_ARRAY_01c9dab8[iVar1].base.acceleration.x =
       CFirefly_ARRAY_01c9dab8[iVar1].base.acceleration.y;
  return;
}
