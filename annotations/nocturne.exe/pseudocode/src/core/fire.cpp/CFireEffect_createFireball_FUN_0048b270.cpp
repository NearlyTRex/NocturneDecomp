// Name: core_fire.cpp_CFireEffect_createFireball_FUN_0048b270
// Address: 0048b270
// Address Range: [[0048b270, 0048b318]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createFireball_FUN_0048b270(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,int lighting_active,uint sfx_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createFireball_FUN_0048b270(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,int lighting_active,uint sfx_handle)

{
  int iVar1;
  int iVar2;
  CFireball *this_ptr_00;
  
  iVar1 = _DAT_01c58df8;
  iVar2 = _DAT_01c58df8 + 1;
  this_ptr_00 = g_CFireball_ARRAY_01c58dfc + _DAT_01c58df8;
  _DAT_01c58df8 = iVar2;
  if (0x3f < iVar2) {
    _DAT_01c58df8 = 0;
  }
  (*(g_CFireball_ARRAY_01c58dfc[iVar1].base.vtable)->setup)(&this_ptr_00->base,position,velocity);
  iVar2 = core_actor_cpp_getRandomInt_FUN_0040de00(0xc000,0xffff);
  g_CFireball_ARRAY_01c58dfc[iVar1].timer = iVar2;
  if (lighting_active == 0) {
    g_CFireball_ARRAY_01c58dfc[iVar1].fade_rate = 0x2000;
  }
  else {
    g_CFireball_ARRAY_01c58dfc[iVar1].fade_rate = 0x8000;
  }
  g_CFireball_ARRAY_01c58dfc[iVar1].lighting_active = lighting_active;
  g_CFireball_ARRAY_01c58dfc[iVar1].first_update_flag = 0;
  g_CFireball_ARRAY_01c58dfc[iVar1].sfx_handle = sfx_handle;
  sound_sndmain_cpp_setSfxTrackedFloatPosition_FUN_00526ea0(sfx_handle,(CVector3f *)this_ptr_00);
  sound_sndmain_cpp_setSfxTrackedFloatVelocity_FUN_00526ff0
            (g_CFireball_ARRAY_01c58dfc[iVar1].sfx_handle,
             &g_CFireball_ARRAY_01c58dfc[iVar1].base.velocity);
  return;
}
