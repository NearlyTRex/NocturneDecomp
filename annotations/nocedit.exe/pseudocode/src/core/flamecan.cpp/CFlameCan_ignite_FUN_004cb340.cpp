// Name: core_flamecan.cpp_CFlameCan_ignite_FUN_004cb340
// Address: 004cb340
// Address Range: [[004cb340, 004cb38f]]
// Convention: __cdecl
// Signature: void __cdecl core_flamecan_cpp_CFlameCan_ignite_FUN_004cb340(CFlameCan *this_ptr)

#include "nocturne.h"

void __cdecl core_flamecan_cpp_CFlameCan_ignite_FUN_004cb340(CFlameCan *this_ptr)

{
  int iVar1;
  
  this_ptr->on_fire = 1;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    core_fire_cpp_CFireEffect_createSpark_FUN_004c79d0
              (g_CFireEffectPtr,&(this_ptr->flame).base.location.position,(CVector3f *)0x0,0x4000,
               0x4000,0,0xffff);
  } while (iVar1 < 5);
  (this_ptr->flame).flame_state = 1;
  return;
}
