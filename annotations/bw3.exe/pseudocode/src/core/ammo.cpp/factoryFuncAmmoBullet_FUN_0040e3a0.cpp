// Name: core_ammo.cpp_factoryFuncAmmoBullet_FUN_0040e3a0
// Address: 0040e3a0
// Address Range: [[0040e3a0, 0040e3bb]]
// Convention: __cdecl
// Signature: CAmmoBullet * __cdecl core_ammo_cpp_factoryFuncAmmoBullet_FUN_0040e3a0(void)

#include "nocturne.h"

CAmmoBullet * __cdecl core_ammo_cpp_factoryFuncAmmoBullet_FUN_0040e3a0(void)

{
  CAmmoBullet *pCVar1;
  
  pCVar1 = operator_new(800);
  if (pCVar1 == (CAmmoBullet *)0x0) {
    return (CAmmoBullet *)0x0;
  }
  pCVar1 = core_ammo_cpp_CAmmoBullet_ctor_FUN_0040e3d0(pCVar1);
  return pCVar1;
}
