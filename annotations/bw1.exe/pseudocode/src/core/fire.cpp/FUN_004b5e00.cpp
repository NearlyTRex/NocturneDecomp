// Name: core_fire.cpp_FUN_004b5e00
// Address: 004b5e00
// Address Range: [[004b5e00, 004b5ea8]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_004b5e00(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,int lighting_active,uint sfx_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_FUN_004b5e00(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,int lighting_active,uint sfx_handle)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CFireball *pCVar4;
  
  iVar1 = _DAT_01ca9e5c;
  iVar3 = _DAT_01ca9e5c * 0xa4;
  iVar2 = _DAT_01ca9e5c + 1;
  pCVar4 = g_FireballPool + _DAT_01ca9e5c;
  _DAT_01ca9e5c = iVar2;
  if (0x3f < iVar2) {
    _DAT_01ca9e5c = 0;
  }
  (*(code *)**(uint **)&g_FireballPool[iVar1].field_0x3c)(pCVar4,position,velocity);
  iVar2 = core_actor_cpp_FUN_0040cc60(0xc000,0xffff);
  *(int *)&g_FireballPool[iVar1].field_0x40 = iVar2;
  if (lighting_active == 0) {
    *(uint *)&g_FireballPool[iVar1].field_0x44 = 0x2000;
  }
  else {
    *(uint *)&g_FireballPool[iVar1].field_0x44 = 0x8000;
  }
  *(int *)&g_FireballPool[iVar1].field_0x4c = lighting_active;
  *(uint *)&g_FireballPool[iVar1].field_0x48 = 0;
  *(uint *)&g_FireballPool[iVar1].field_0x60 = sfx_handle;
  sound_sndmain_cpp_FUN_005737d0(sfx_handle,pCVar4);
  sound_sndmain_cpp_FUN_005738d0(*(uint *)&g_FireballPool[iVar1].field_0x60,iVar3 + 0x1ca9e6c)
  ;
  return;
}
