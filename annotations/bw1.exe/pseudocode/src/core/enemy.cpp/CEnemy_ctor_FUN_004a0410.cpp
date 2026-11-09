// Name: core_enemy.cpp_CEnemy_ctor_FUN_004a0410
// Address: 004a0410
// Address Range: [[004a0410, 004a0505]]
// Convention: __cdecl
// Signature: CEnemy * __cdecl core_enemy_cpp_CEnemy_ctor_FUN_004a0410(CEnemy *this_ptr)

#include "nocturne.h"

CEnemy * __cdecl core_enemy_cpp_CEnemy_ctor_FUN_004a0410(CEnemy *this_ptr)

{
  char cVar1;
  CEnemy *pCVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  pCVar2 = (CEnemy *)core_charactr_cpp_CCharacter_ctor_FUN_0042c080((CCharacter *)this_ptr);
  *(byte ***)&pCVar2->field_0x154 = &g_CEnemyVTable;
  uVar3 = core_actor_cpp_FUN_0040cc00(0x3f666666,0x3f8ccccd);
  *(uint *)&pCVar2->field_0xc1d4 = 0;
  *(uint *)&pCVar2->field_0xc258 = 0;
  *(uint *)&pCVar2->field_0xc1e8 = 0;
  *(uint *)&pCVar2->field_0xc1ec = 0;
  *(uint *)&pCVar2->field_0xc1f0 = 0x42480000;
  *(uint *)&pCVar2->field_0xc1d8 = 1;
  *(uint *)&pCVar2->field_0xc260 = 0;
  *(uint *)&pCVar2->field_0xc1dc = 0;
  pCVar2->field_0xc1f4 = 0;
  *(uint *)&pCVar2->field_0xc1e0 = 0x42c80000;
  pcVar4 = &DAT_005dcac1;
  *(uint *)&pCVar2->field_0xc1e4 = 0;
  pcVar5 = &pCVar2->field_0x120;
  *(uint *)&pCVar2->field_0xc25c = 0x40c00000;
  *(uint *)&pCVar2->field_0xc264 = 1;
  *(uint *)&pCVar2->field_0xc1d0 = uVar3;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)&pCVar2->field_0x252c = 0x3fc90fdb;
  return pCVar2;
}
