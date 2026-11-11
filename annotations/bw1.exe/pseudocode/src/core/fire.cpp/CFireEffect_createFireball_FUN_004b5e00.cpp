// Name: core_fire.cpp_CFireEffect_createFireball_FUN_004b5e00
// Address: 004b5e00
// Address Range: [[004b5e00, 004b5ea8]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createFireball_FUN_004b5e00(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,int lighting_active,uint sfx_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createFireball_FUN_004b5e00(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,int lighting_active,uint sfx_handle)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CFireball *this_ptr_00;
  
  iVar1 = _DAT_01ca9e5c;
  iVar3 = _DAT_01ca9e5c * 0xa4;
  iVar2 = _DAT_01ca9e5c + 1;
  this_ptr_00 = g_FireballPool + _DAT_01ca9e5c;
  _DAT_01ca9e5c = iVar2;
  if (0x3f < iVar2) {
    _DAT_01ca9e5c = 0;
  }
  (*(g_FireballPool[iVar1].base.vtable)->setup)(&this_ptr_00->base,position,velocity);
  iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0xc000,0xffff);
  g_FireballPool[iVar1].timer = iVar2;
  if (lighting_active == 0) {
    g_FireballPool[iVar1].fade_rate = 0x2000;
  }
  else {
    g_FireballPool[iVar1].fade_rate = 0x8000;
  }
  g_FireballPool[iVar1].lighting_active = lighting_active;
  g_FireballPool[iVar1].first_update_flag = 0;
  g_FireballPool[iVar1].sfx_handle = sfx_handle;
  sound_sndmain_cpp_FUN_005737d0(sfx_handle,this_ptr_00);
  sound_sndmain_cpp_FUN_005738d0(g_FireballPool[iVar1].sfx_handle,iVar3 + 0x1ca9e6c);
  return;
}
