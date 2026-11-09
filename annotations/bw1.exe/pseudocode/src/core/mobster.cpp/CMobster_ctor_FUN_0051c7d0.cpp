// Name: core_mobster.cpp_CMobster_ctor_FUN_0051c7d0
// Address: 0051c7d0
// Address Range: [[0051c7d0, 0051c907]]
// Convention: __cdecl
// Signature: CMobster * __cdecl core_mobster_cpp_CMobster_ctor_FUN_0051c7d0(CMobster *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CMobster * __cdecl core_mobster_cpp_CMobster_ctor_FUN_0051c7d0(CMobster *this_ptr)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  CMobster *pCVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar4 = (CMobster *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410((CEnemy *)this_ptr);
  *(byte ***)&pCVar4->field_0x154 = &g_CMobsterVTable;
  core_skeleton_cpp_FUN_00569f50(&pCVar4->field_0x158,"mobster1.dfm");
  uVar2 = _DAT_00603d60;
  *(uint *)&pCVar4->field_0x2fec = 0x3f19999a;
  uVar3 = _DAT_00603d64;
  *(uint *)&pCVar4->field_0x2ff0 = 0x3f666666;
  *(uint *)&pCVar4->field_0x2ff4 = uVar2;
  *(uint *)&pCVar4->field_0x2ff8 = uVar3;
  iVar5 = core_actor_cpp_FUN_0040cc60(0,0xff);
  *(uint *)&pCVar4->field_0xc26c = 0;
  *(uint *)&pCVar4->field_0xc270 = 0;
  *(uint *)&pCVar4->field_0xc274 = 0;
  *(uint *)&pCVar4->field_0xc338 = 0;
  *(uint *)&pCVar4->field_0xc33c = 0;
  *(uint *)&pCVar4->field_0xc25c = 0x42200000;
  *(int *)&pCVar4->field_0xc268 = iVar5;
  iVar5 = core_actor_cpp_FUN_0040cc60(0x62,0x65);
  *(uint *)&pCVar4->field_0xc280 = 0;
  *(uint *)&pCVar4->field_0xc278 = 0;
  *(uint *)&pCVar4->field_0xc284 = 0;
  *(uint *)&pCVar4->field_0xc288 = 0;
  *(uint *)&pCVar4->field_0xc28c = 0;
  pcVar6 = "none";
  *(uint *)&pCVar4->field_0xc290 = 0;
  *(uint *)&pCVar4->field_0xc294 = 0;
  pcVar7 = &pCVar4->field_0xc298;
  pCVar4->field_0xc27c = (char)iVar5;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  *(uint *)&pCVar4->field_0xc264 = 0;
  return pCVar4;
}
