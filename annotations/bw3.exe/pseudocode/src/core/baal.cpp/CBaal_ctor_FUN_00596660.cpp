// Name: core_baal.cpp_CBaal_ctor_FUN_00596660
// Address: 00596660
// Address Range: [[00596660, 0059672b]]
// Convention: unknown
// Signature: CBaal * core_baal_cpp_CBaal_ctor_FUN_00596660(CBaal *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBaal * core_baal_cpp_CBaal_ctor_FUN_00596660(CBaal *this_ptr)

{
  CBaal *pCVar1;
  CBaal *pCVar2;
  byte *puVar3;
  
  pCVar1 = (CBaal *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  *(byte ***)&pCVar1->field_0x154 = &g_CBaalVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar1->field_0x158,0x5d948f);
  *(uint *)&pCVar1->field_0x326c = 0x3f000000;
  *(uint *)&pCVar1->field_0x3270 = 0x3f800000;
  *(uint *)&pCVar1->field_0xd054 = 0;
  *(uint *)&pCVar1->field_0xcde0 = 0xbf800000;
  *(uint *)&pCVar1->field_0xd050 = 0;
  *(uint *)&pCVar1->field_0x252c = 0x3fc90fdb;
  *(uint *)&pCVar1->field_0xd068 = 1;
  *(uint *)&pCVar1->field_0xd06c = 0x40000000;
  *(uint *)&pCVar1->field_0xd070 = 0x4b;
  *(uint *)&pCVar1->field_0xce60 = 0x41c80000;
  *(uint *)&pCVar1->field_0xd07c = 0;
  *(uint *)&pCVar1->field_0xd080 = 0;
  *(uint *)&pCVar1->field_0xd064 = *(uint *)&pCVar1->field_0xd06c;
  pCVar2 = pCVar1;
  do {
    puVar3 = &pCVar2->field_0x4;
    *(uint *)&pCVar2->field_0xd084 = 0;
    pCVar2 = (CBaal *)puVar3;
  } while (puVar3 != &pCVar1->field_0x34);
  return pCVar1;
}
