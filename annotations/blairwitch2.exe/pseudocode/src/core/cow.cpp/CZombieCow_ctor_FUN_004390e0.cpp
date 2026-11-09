// Name: core_cow.cpp_CZombieCow_ctor_FUN_004390e0
// Address: 004390e0
// Address Range: [[004390e0, 0043914f]]
// Convention: unknown
// Signature: CZombieCow * core_cow_cpp_CZombieCow_ctor_FUN_004390e0(CZombieCow *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CZombieCow * core_cow_cpp_CZombieCow_ctor_FUN_004390e0(CZombieCow *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CZombieCow *pCVar3;
  
  pCVar3 = (CZombieCow *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0((CEnemy *)this_ptr);
  *(byte **)&pCVar3->field_0x2b0 = &g_CZombieCowVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar3->field_0x2b4,(char *)0x5ce08d);
  *(uint *)&pCVar3->field_0x3430 = 0x3fe00000;
  uVar1 = _DAT_005f49ac;
  *(uint *)&pCVar3->field_0x3434 = 0x40600000;
  uVar2 = _DAT_005f49b0;
  *(uint *)&pCVar3->field_0x10b00 = 0;
  *(uint *)&pCVar3->field_0x259c = 0x3f490fdb;
  *(uint *)&pCVar3->field_0x3438 = uVar1;
  *(uint *)&pCVar3->field_0x343c = uVar2;
  return pCVar3;
}
