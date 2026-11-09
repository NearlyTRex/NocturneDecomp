// Name: core_cow.cpp_CZombieCow_ctor_FUN_00444f60
// Address: 00444f60
// Address Range: [[00444f60, 00444fcf]]
// Convention: unknown
// Signature: CZombieCow * core_cow_cpp_CZombieCow_ctor_FUN_00444f60(CZombieCow *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CZombieCow * core_cow_cpp_CZombieCow_ctor_FUN_00444f60(CZombieCow *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CZombieCow *pCVar3;
  
  pCVar3 = (CZombieCow *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  *(byte ***)&pCVar3->field_0x154 = &g_CZombieCowVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar3->field_0x158,0x5b98b0);
  *(uint *)&pCVar3->field_0x326c = 0x3fe00000;
  uVar1 = _DAT_005ddbac;
  *(uint *)&pCVar3->field_0x3270 = 0x40600000;
  uVar2 = _DAT_005ddbb0;
  *(uint *)&pCVar3->field_0xd05c = 0;
  *(uint *)&pCVar3->field_0x252c = 0x3f490fdb;
  *(uint *)&pCVar3->field_0x3274 = uVar1;
  *(uint *)&pCVar3->field_0x3278 = uVar2;
  return pCVar3;
}
