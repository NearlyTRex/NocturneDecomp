// Name: core_cow.cpp_CZombieCow_ctor_FUN_004483a0
// Address: 004483a0
// Address Range: [[004483a0, 0044840f]]
// Convention: unknown
// Signature: CZombieCow * core_cow_cpp_CZombieCow_ctor_FUN_004483a0(CZombieCow *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CZombieCow * core_cow_cpp_CZombieCow_ctor_FUN_004483a0(CZombieCow *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CZombieCow *pCVar3;
  
  pCVar3 = (CZombieCow *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410((CEnemy *)this_ptr);
  *(byte ***)&pCVar3->field_0x154 = &g_CZombieCowVTable;
  core_skeleton_cpp_FUN_00569f50(&pCVar3->field_0x158,0x5d71f9);
  *(uint *)&pCVar3->field_0x2fec = 0x3fe00000;
  uVar1 = _DAT_005fe0ac;
  *(uint *)&pCVar3->field_0x2ff0 = 0x40600000;
  uVar2 = _DAT_005fe0b0;
  *(uint *)&pCVar3->field_0xc270 = 0;
  *(uint *)&pCVar3->field_0x252c = 0x3f490fdb;
  *(uint *)&pCVar3->field_0x2ff4 = uVar1;
  *(uint *)&pCVar3->field_0x2ff8 = uVar2;
  return pCVar3;
}
