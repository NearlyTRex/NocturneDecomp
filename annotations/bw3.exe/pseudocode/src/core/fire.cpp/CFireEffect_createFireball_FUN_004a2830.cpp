// Name: core_fire.cpp_CFireEffect_createFireball_FUN_004a2830
// Address: 004a2830
// Address Range: [[004a2830, 004a28d8]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createFireball_FUN_004a2830(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,int lighting_active,uint sfx_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createFireball_FUN_004a2830(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,int lighting_active,uint sfx_handle)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CFireball *pCVar4;
  
  iVar1 = _DAT_01cefe7c;
  iVar3 = _DAT_01cefe7c * 0xa4;
  iVar2 = _DAT_01cefe7c + 1;
  pCVar4 = g_FireballPool + _DAT_01cefe7c;
  _DAT_01cefe7c = iVar2;
  if (0x3f < iVar2) {
    _DAT_01cefe7c = 0;
  }
  (*(code *)**(uint **)&g_FireballPool[iVar1].field_0x3c)(pCVar4,position,velocity);
  iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0xc000,0xffff);
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
  sound_sndmain_cpp_FUN_00556930(sfx_handle,pCVar4);
  sound_sndmain_cpp_FUN_00556a30(*(uint *)&g_FireballPool[iVar1].field_0x60,iVar3 + 0x1cefe8c)
  ;
  return;
}
