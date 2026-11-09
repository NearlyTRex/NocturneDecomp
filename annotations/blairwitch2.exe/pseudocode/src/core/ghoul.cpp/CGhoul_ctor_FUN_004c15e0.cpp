// Name: core_ghoul.cpp_CGhoul_ctor_FUN_004c15e0
// Address: 004c15e0
// Address Range: [[004c15e0, 004c170d]]
// Convention: unknown
// Signature: CGhoul * core_ghoul_cpp_CGhoul_ctor_FUN_004c15e0(CGhoul *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CGhoul * core_ghoul_cpp_CGhoul_ctor_FUN_004c15e0(CGhoul *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CGhoul *pCVar3;
  float fVar4;
  float10 fVar5;
  int iVar6;
  
  pCVar3 = (CGhoul *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0((CEnemy *)this_ptr);
  *(byte **)&pCVar3->field_0x2b0 = &g_CGhoulVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar3->field_0x2b4,(char *)0x5d8e8e);
  fVar4 = (float)core_actor_cpp_FUN_0040cf60(0x41a00000,0x420c0000);
  fVar5 = (float10)fVar4 * (float10)_DAT_005d8e97;
  round(0x40800000,0x41200000);
  *(int *)&pCVar3->field_0x10afc = (int)ROUND(fVar5);
  fVar4 = (float)core_actor_cpp_FUN_0040cf60();
  *(uint *)&pCVar3->field_0x10b04 = 0xa0000;
  *(uint *)&pCVar3->field_0x10b08 = 0xffffffff;
  fVar5 = (float10)fVar4 * (float10)_DAT_005d8e97;
  *(uint *)&pCVar3->field_0x10b0c = 0;
  *(uint *)&pCVar3->field_0x10b18 = 2;
  iVar6 = 3;
  round();
  *(int *)&pCVar3->field_0x10b00 = (int)ROUND(fVar5);
  iVar6 = core_actor_cpp_FUN_0040cfc0(1,iVar6);
  *(uint *)&pCVar3->field_0x3430 = 0x3f400000;
  *(uint *)&pCVar3->field_0x3434 = 0x3fc00000;
  *(uint *)&pCVar3->field_0x10b54 = 0;
  *(uint *)&pCVar3->field_0x10b58 = 0;
  *(uint *)&pCVar3->field_0x10b5c = 0;
  *(uint *)&pCVar3->field_0x10b60 = 0;
  *(uint *)&pCVar3->field_0x10b64 = 0;
  uVar1 = _DAT_005f78d0;
  *(uint *)&pCVar3->field_0x259c = 0x3fc90fdb;
  uVar2 = _DAT_005f78d4;
  *(int *)&pCVar3->field_0x10b14 = iVar6;
  *(uint *)&pCVar3->field_0x3438 = uVar1;
  *(uint *)&pCVar3->field_0x343c = uVar2;
  return pCVar3;
}
