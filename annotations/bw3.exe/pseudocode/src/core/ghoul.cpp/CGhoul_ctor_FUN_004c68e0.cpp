// Name: core_ghoul.cpp_CGhoul_ctor_FUN_004c68e0
// Address: 004c68e0
// Address Range: [[004c68e0, 004c6a0d]]
// Convention: unknown
// Signature: CGhoul * core_ghoul_cpp_CGhoul_ctor_FUN_004c68e0(CGhoul *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CGhoul * core_ghoul_cpp_CGhoul_ctor_FUN_004c68e0(CGhoul *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CGhoul *pCVar3;
  float fVar4;
  float10 fVar5;
  int iVar6;
  
  pCVar3 = (CGhoul *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  *(byte ***)&pCVar3->field_0x154 = &g_CGhoulVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar3->field_0x158,0x5c4054);
  fVar4 = (float)core_actor_cpp_FUN_0040ce40(0x41a00000,0x420c0000);
  fVar5 = (float10)fVar4 * (float10)_DAT_005c405d;
  round(0x40800000,0x41200000);
  *(int *)&pCVar3->field_0xd058 = (int)ROUND(fVar5);
  fVar4 = (float)core_actor_cpp_FUN_0040ce40();
  *(uint *)&pCVar3->field_0xd060 = 0xa0000;
  *(uint *)&pCVar3->field_0xd064 = 0xffffffff;
  fVar5 = (float10)fVar4 * (float10)_DAT_005c405d;
  *(uint *)&pCVar3->field_0xd068 = 0;
  *(uint *)&pCVar3->field_0xd074 = 2;
  iVar6 = 3;
  round();
  *(int *)&pCVar3->field_0xd05c = (int)ROUND(fVar5);
  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(1,iVar6);
  *(uint *)&pCVar3->field_0x326c = 0x3f400000;
  *(uint *)&pCVar3->field_0x3270 = 0x3fc00000;
  *(uint *)&pCVar3->field_0xd0b0 = 0;
  *(uint *)&pCVar3->field_0xd0b4 = 0;
  *(uint *)&pCVar3->field_0xd0b8 = 0;
  *(uint *)&pCVar3->field_0xd0bc = 0;
  *(uint *)&pCVar3->field_0xd0c0 = 0;
  uVar1 = _DAT_005e0a40;
  *(uint *)&pCVar3->field_0x252c = 0x3fc90fdb;
  uVar2 = _DAT_005e0a44;
  *(int *)&pCVar3->field_0xd070 = iVar6;
  *(uint *)&pCVar3->field_0x3274 = uVar1;
  *(uint *)&pCVar3->field_0x3278 = uVar2;
  return pCVar3;
}
