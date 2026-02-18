// Name: core_flamecan.cpp_CFlameCan_FUN_004cb340
// Address: 004cb340
// Address Range: [[004cb340, 004cb38f]]
// Convention: __cdecl
// Signature: void __cdecl core_flamecan_cpp_CFlameCan_FUN_004cb340(CFlameCan *this_ptr)

#include "nocturne.h"

void __cdecl core_flamecan_cpp_CFlameCan_FUN_004cb340(CFlameCan *this_ptr)

{
  int iVar1;
  
  this_ptr->on_fire = 1;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    core_fire_cpp_CFireEffect_createSpark_FUN_004c79d0
              (g_CFireEffectPtr,(CVector3f *)(this_ptr->unk + 0x20),(CVector3f *)0x0,0x4000,0x4000,0
               ,0xffff);
  } while (iVar1 < 5);
  this_ptr->unk[0x1b4] = '\x01';
  this_ptr->unk[0x1b5] = '\0';
  this_ptr->unk[0x1b6] = '\0';
  this_ptr->unk[0x1b7] = '\0';
  return;
}
