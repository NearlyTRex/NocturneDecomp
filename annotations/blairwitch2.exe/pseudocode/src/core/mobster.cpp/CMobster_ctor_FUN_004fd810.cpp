// Name: core_mobster.cpp_CMobster_ctor_FUN_004fd810
// Address: 004fd810
// Address Range: [[004fd810, 004fd947]]
// Convention: __cdecl
// Signature: CMobster * __cdecl core_mobster_cpp_CMobster_ctor_FUN_004fd810(CMobster *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CMobster * __cdecl core_mobster_cpp_CMobster_ctor_FUN_004fd810(CMobster *this_ptr)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  CMobster *pCVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar4 = (CMobster *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0((CEnemy *)this_ptr);
  *(byte **)&pCVar4->field_0x2b0 = &g_CMobsterVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar4->field_0x2b4,"?mobster1.dfm" + 1);
  uVar2 = _DAT_005fa230;
  *(uint *)&pCVar4->field_0x3430 = 0x3f19999a;
  uVar3 = _DAT_005fa234;
  *(uint *)&pCVar4->field_0x3434 = 0x3f666666;
  *(uint *)&pCVar4->field_0x3438 = uVar2;
  *(uint *)&pCVar4->field_0x343c = uVar3;
  iVar5 = core_actor_cpp_FUN_0040cfc0(0,0xff);
  *(uint *)&pCVar4->field_0x10afc = 0;
  *(uint *)&pCVar4->field_0x10b00 = 0;
  *(uint *)&pCVar4->field_0x10b04 = 0;
  *(uint *)&pCVar4->field_0x10bc8 = 0;
  *(uint *)&pCVar4->field_0x10bcc = 0;
  *(uint *)&pCVar4->field_0x10aec = 0x42200000;
  *(int *)&pCVar4->field_0x10af8 = iVar5;
  iVar5 = core_actor_cpp_FUN_0040cfc0(0x62,0x65);
  *(uint *)&pCVar4->field_0x10b10 = 0;
  *(uint *)&pCVar4->field_0x10b08 = 0;
  *(uint *)&pCVar4->field_0x10b14 = 0;
  *(uint *)&pCVar4->field_0x10b18 = 0;
  *(uint *)&pCVar4->field_0x10b1c = 0;
  pcVar6 = &DAT_005dec1a;
  *(uint *)&pCVar4->field_0x10b20 = 0;
  *(uint *)&pCVar4->field_0x10b24 = 0;
  pcVar7 = &pCVar4->field_0x10b28;
  pCVar4->field_0x10b0c = (char)iVar5;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  *(uint *)&pCVar4->field_0x10af4 = 0;
  return pCVar4;
}
