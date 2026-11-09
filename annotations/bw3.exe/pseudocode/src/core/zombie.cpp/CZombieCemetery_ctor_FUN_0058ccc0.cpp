// Name: core_zombie.cpp_CZombieCemetery_ctor_FUN_0058ccc0
// Address: 0058ccc0
// Address Range: [[0058ccc0, 0058cd15]]
// Convention: unknown
// Signature: CZombieCemetery * core_zombie_cpp_CZombieCemetery_ctor_FUN_0058ccc0(CZombieCemetery *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CZombieCemetery * core_zombie_cpp_CZombieCemetery_ctor_FUN_0058ccc0(CZombieCemetery *this_ptr)

{
  CZombie *pCVar1;
  
  pCVar1 = core_zombie_cpp_CZombie_ctor_FUN_005888d0((CZombie *)this_ptr);
  *(byte ***)&pCVar1->field_0x154 = &g_CZombie_CemeteryVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar1->field_0x158,0x5d8984);
  *(uint *)&pCVar1->field_0xd140 = 1;
  *(uint *)&pCVar1->field_0x2538 = 0x41a00000;
  *(uint *)&pCVar1->field_0xce5c = 0x41200000;
  *(uint *)&pCVar1->field_0xce60 = 0x41200000;
  return (CZombieCemetery *)pCVar1;
}
