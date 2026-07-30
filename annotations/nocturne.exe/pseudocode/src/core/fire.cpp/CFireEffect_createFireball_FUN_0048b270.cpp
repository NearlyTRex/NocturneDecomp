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
  
  iVar2 = _DAT_01c58df8 * 0x9c;
  _DAT_01c58df8 = _DAT_01c58df8 + 1;
  if (0x3f < _DAT_01c58df8) {
    _DAT_01c58df8 = 0;
  }
  (*(code *)**(uint **)(&DAT_01c58e30 + iVar2))
            ((CVector3f *)(&DAT_01c58dfc + iVar2),position,velocity);
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040de00(0xc000,0xffff);
  *(int *)(iVar2 + 0x1c58e34) = iVar1;
  if (lighting_active == 0) {
    *(uint *)(iVar2 + 0x1c58e38) = 0x2000;
  }
  else {
    *(uint *)(iVar2 + 0x1c58e38) = 0x8000;
  }
  *(int *)(iVar2 + 0x1c58e40) = lighting_active;
  *(uint *)(iVar2 + 0x1c58e3c) = 0;
  *(uint *)(iVar2 + 0x1c58e54) = sfx_handle;
  sound_sndmain_cpp_setSfxTrackedFloatPosition_FUN_00526ea0
            (sfx_handle,(CVector3f *)(&DAT_01c58dfc + iVar2));
  sound_sndmain_cpp_setSfxTrackedFloatVelocity_FUN_00526ff0
            (*(uint *)(iVar2 + 0x1c58e54),(CVector3f *)(iVar2 + 0x1c58e08));
  return;
}
