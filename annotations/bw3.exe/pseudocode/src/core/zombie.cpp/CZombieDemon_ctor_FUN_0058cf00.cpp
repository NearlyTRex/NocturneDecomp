// Name: core_zombie.cpp_CZombieDemon_ctor_FUN_0058cf00
// Address: 0058cf00
// Address Range: [[0058cf00, 0058cf5f]]
// Convention: unknown
// Signature: CZombieDemon * core_zombie_cpp_CZombieDemon_ctor_FUN_0058cf00(CZombieDemon *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CZombieDemon * core_zombie_cpp_CZombieDemon_ctor_FUN_0058cf00(CZombieDemon *this_ptr)

{
  CZombie *pCVar1;
  
  pCVar1 = core_zombie_cpp_CZombie_ctor_FUN_005888d0((CZombie *)this_ptr);
  *(byte ***)&pCVar1->field_0x154 = &g_CZombie_DemonVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar1->field_0x158,0x5d89cb);
  *(uint *)&pCVar1->field_0xd140 = 5;
  *(uint *)&pCVar1->field_0x2538 = 0x42480000;
  *(uint *)&pCVar1->field_0xce5c = 0x41700000;
  *(uint *)&pCVar1->field_0xce60 = 0x41700000;
  *(uint *)&pCVar1->field_0xd0dc = 1;
  return (CZombieDemon *)pCVar1;
}
