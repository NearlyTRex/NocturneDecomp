// Name: core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550
// Address: 0048e550
// Address Range: [[0048e550, 0048e59f]]
// Convention: __cdecl
// Signature: void __cdecl core_flamecan_cpp_CFlameCan_ignite_FUN_0048e550(CFlameCan *this_ptr)

#include "nocturne.h"

void __cdecl core_flamecan_cpp_CFlameCan_ignite_FUN_0048e550(CFlameCan *this_ptr)

{
  int iVar1;
  
  this_ptr->on_fire = 1;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
              (0x01C08D04,&(this_ptr->flame).base.location.position,(CVector3f *)0x0,0x4000,0x4000
               ,0,0xffff);
  } while (iVar1 < 5);
  (this_ptr->flame).flame_state = 1;
  return;
}
