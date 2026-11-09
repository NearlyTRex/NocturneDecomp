// Name: core_zombie.cpp_CZombieSpirit_ctor_FUN_0058cde0
// Address: 0058cde0
// Address Range: [[0058cde0, 0058ce35]]
// Convention: unknown
// Signature: CZombieSpirit * core_zombie_cpp_CZombieSpirit_ctor_FUN_0058cde0(CZombieSpirit *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CZombieSpirit * core_zombie_cpp_CZombieSpirit_ctor_FUN_0058cde0(CZombieSpirit *this_ptr)

{
  CZombie *pCVar1;
  
  pCVar1 = core_zombie_cpp_CZombie_ctor_FUN_005888d0((CZombie *)this_ptr);
  *(byte ***)&pCVar1->field_0x154 = &g_CZombie_SpiritVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar1->field_0x158,0x5d89a4);
  *(uint *)&pCVar1->field_0xd140 = 3;
  *(uint *)&pCVar1->field_0x2538 = 0x41f00000;
  *(uint *)&pCVar1->field_0xce5c = 0x41700000;
  *(uint *)&pCVar1->field_0xce60 = 0x41200000;
  return (CZombieSpirit *)pCVar1;
}
