// Name: core_hino.cpp_CHino_ctor_FUN_0059b670
// Address: 0059b670
// Address Range: [[0059b670, 0059b735]]
// Convention: unknown
// Signature: CHino * core_hino_cpp_CHino_ctor_FUN_0059b670(CHino *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CHino * core_hino_cpp_CHino_ctor_FUN_0059b670(CHino *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CHino *pCVar3;
  CHino *pCVar4;
  byte *puVar5;
  
  pCVar3 = (CHino *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  ((UActorVTable *)&pCVar3->field_0x154)->_ub = &g_CHinoVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)&pCVar3->field_0x158,(char *)0x5d9bca);
  *(uint *)&pCVar3->field_0x326c = 0x3f19999a;
  *(uint *)&pCVar3->field_0x3270 = 0x3f666666;
  *(float *)&pCVar3->field_0x2538 = 90.0;
  *(uint *)&pCVar3->field_0xd060 = 0x40000000;
  *(uint *)&pCVar3->field_0xd064 = 0;
  *(uint *)&pCVar3->field_0xd068 = 0;
  *(uint *)&pCVar3->field_0xd05c = 0x10000;
  uVar1 = _DAT_005e81b0;
  *(uint *)&pCVar3->field_0xd06c = 0;
  uVar2 = _DAT_005e81b4;
  *(uint *)&pCVar3->field_0xd070 = 0;
  *(uint *)&pCVar3->field_0xd074 = 0;
  *(uint *)&pCVar3->field_0x3274 = uVar1;
  *(uint *)&pCVar3->field_0x3278 = uVar2;
  pCVar4 = pCVar3;
  do {
    puVar5 = &pCVar4->field_0x4;
    *(uint *)&pCVar4->field_0xd07c = 0;
    pCVar4 = (CHino *)puVar5;
  } while (puVar5 != &pCVar3->field_0x34);
  return pCVar3;
}
