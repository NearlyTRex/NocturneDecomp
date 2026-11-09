// Name: core_enemy.cpp_CEnemy_ctor_FUN_00488fd0
// Address: 00488fd0
// Address Range: [[00488fd0, 00489106]]
// Convention: __cdecl
// Signature: CEnemy * __cdecl core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(CEnemy *this_ptr)

#include "nocturne.h"

CEnemy * __cdecl core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(CEnemy *this_ptr)

{
  char cVar1;
  CCharacter *pCVar2;
  CKeyFramedModelInstance *pCVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  pCVar2 = core_charactr_cpp_CCharacter_ctor_FUN_0042ac20((CCharacter *)this_ptr);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500
                     ((CKeyFramedModelInstance *)&pCVar2[1].field_0x104);
  *(byte **)&pCVar3[-0x8b].field_0xd8 = &g_CEnemyVTable;
  uVar4 = core_actor_cpp_FUN_0040ce40(0x3f666666,0x3f8ccccd);
  *(uint *)&pCVar3[-1].field_0x7c = 0;
  *(uint *)&pCVar3[-1].field_0x100 = 0;
  *(uint *)&pCVar3[-1].field_0x90 = 0;
  *(uint *)&pCVar3[-1].field_0x94 = 0;
  *(uint *)&pCVar3[-1].field_0x98 = 0x42480000;
  *(uint *)&pCVar3[-1].field_0x80 = 1;
  *(uint *)(pCVar3 + 1) = 0;
  *(uint *)&pCVar3[-1].field_0x84 = 0;
  pCVar3[-1].field_0x9c = 0;
  *(uint *)&pCVar3[-1].field_0x88 = 0x42c80000;
  pcVar5 = (char *)0x5bdb7e;
  *(uint *)&pCVar3[-1].field_0x8c = 0;
  pcVar6 = &pCVar3[-0x8b].field_0xa4;
  *(uint *)&pCVar3[-1].field_0x104 = 0x40c00000;
  *(uint *)&pCVar3[1].field_0x4 = 1;
  *(uint *)&pCVar3[-1].field_0x78 = uVar4;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)&pCVar3[-0x73].field_0x110 = 0x3fc90fdb;
  *(uint *)&pCVar3[-1].field_0x108 = 0x41200000;
  *(uint *)&pCVar3[-1].field_0x10c = 0x3f800000;
  *(uint *)&pCVar3[-1].field_0x110 = 1;
  pCVar3[-1].field_0x114 = 0;
  *(uint *)&pCVar3[-1].field_0x178 = 0;
  return (CEnemy *)&pCVar3[-0x8c].field_0x100;
}
