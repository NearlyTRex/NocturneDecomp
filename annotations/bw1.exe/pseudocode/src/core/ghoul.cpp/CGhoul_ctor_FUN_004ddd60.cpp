// Name: core_ghoul.cpp_CGhoul_ctor_FUN_004ddd60
// Address: 004ddd60
// Address Range: [[004ddd60, 004dde8d]]
// Convention: unknown
// Signature: CGhoul * core_ghoul_cpp_CGhoul_ctor_FUN_004ddd60(CGhoul *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CGhoul * core_ghoul_cpp_CGhoul_ctor_FUN_004ddd60(CGhoul *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CGhoul *pCVar3;
  float fVar4;
  float10 fVar5;
  int iVar6;
  
  pCVar3 = (CGhoul *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410((CEnemy *)this_ptr);
  *(byte ***)&pCVar3->field_0x154 = &g_CGhoulVTable;
  core_skeleton_cpp_FUN_00569f50(&pCVar3->field_0x158,0x5e3a48);
  fVar4 = (float)core_actor_cpp_FUN_0040cc00(0x41a00000,0x420c0000);
  fVar5 = (float10)fVar4 * (float10)_DAT_005e3a51;
  round(0x40800000,0x41200000);
  *(int *)&pCVar3->field_0xc26c = (int)ROUND(fVar5);
  fVar4 = (float)core_actor_cpp_FUN_0040cc00();
  *(uint *)&pCVar3->field_0xc274 = 0xa0000;
  *(uint *)&pCVar3->field_0xc278 = 0xffffffff;
  fVar5 = (float10)fVar4 * (float10)_DAT_005e3a51;
  *(uint *)&pCVar3->field_0xc27c = 0;
  *(uint *)&pCVar3->field_0xc288 = 2;
  iVar6 = 3;
  round();
  *(int *)&pCVar3->field_0xc270 = (int)ROUND(fVar5);
  iVar6 = core_actor_cpp_FUN_0040cc60(1,iVar6);
  *(uint *)&pCVar3->field_0x2fec = 0x3f400000;
  *(uint *)&pCVar3->field_0x2ff0 = 0x3fc00000;
  *(uint *)&pCVar3->field_0xc2c4 = 0;
  *(uint *)&pCVar3->field_0xc2c8 = 0;
  *(uint *)&pCVar3->field_0xc2cc = 0;
  *(uint *)&pCVar3->field_0xc2d0 = 0;
  *(uint *)&pCVar3->field_0xc2d4 = 0;
  uVar1 = _DAT_006012d0;
  *(uint *)&pCVar3->field_0x252c = 0x3fc90fdb;
  uVar2 = _DAT_006012d4;
  *(int *)&pCVar3->field_0xc284 = iVar6;
  *(uint *)&pCVar3->field_0x2ff4 = uVar1;
  *(uint *)&pCVar3->field_0x2ff8 = uVar2;
  return pCVar3;
}
