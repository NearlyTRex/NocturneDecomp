// Name: core_demnfolk.cpp_CDemnfolk_ctor_FUN_00454b60
// Address: 00454b60
// Address Range: [[00454b60, 00454d17]]
// Convention: unknown
// Signature: CDemnfolk * core_demnfolk_cpp_CDemnfolk_ctor_FUN_00454b60(CDemnfolk *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDemnfolk * core_demnfolk_cpp_CDemnfolk_ctor_FUN_00454b60(CDemnfolk *this_ptr)

{
  char cVar1;
  uint uVar2;
  CEventList *this_ptr_00;
  CDemnfolk *pCVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar3 = (CDemnfolk *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  pcVar6 = (char *)0x5ba3c7;
  *(byte ***)&pCVar3->field_0x154 = &g_CDemnfolkVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar3->field_0x158,"@d_deputy.dfm" + 1);
  *(uint *)&pCVar3->field_0x326c = 0x3f000000;
  pcVar7 = &pCVar3->field_0xd074;
  *(uint *)&pCVar3->field_0x3270 = 0x3f800000;
  uVar4 = _DAT_005de05c;
  *(uint *)&pCVar3->field_0xd064 = 0;
  uVar2 = _DAT_005de060;
  *(uint *)&pCVar3->field_0xd060 = 0;
  *(uint *)&pCVar3->field_0x3274 = uVar4;
  *(uint *)&pCVar3->field_0x3278 = uVar2;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  uVar4 = core_actor_cpp_FUN_0040ce40(0x3e99999a,0x3f800000);
  *(uint *)&pCVar3->field_0xd06c = 0;
  *(uint *)&pCVar3->field_0xd054 = uVar4;
  iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0xff);
  *(uint *)&pCVar3->field_0xd05c = 0;
  *(uint *)&pCVar3->field_0xd070 = 0;
  *(uint *)&pCVar3->field_0xd0d8 = 0;
  *(uint *)&pCVar3->field_0xd0dc = 0;
  *(uint *)&pCVar3->field_0xd130 = 0;
  *(uint *)&pCVar3->field_0xd0e0 = 0;
  *(uint *)&pCVar3->field_0xd140 = 0;
  *(uint *)&pCVar3->field_0xd144 = 0;
  *(uint *)&pCVar3->field_0xd050 = 0;
  *(uint *)&pCVar3->field_0x252c = 0x3fc90fdb;
  *(uint *)&pCVar3->field_0xd068 = 2;
  *(uint *)&pCVar3->field_0xd0e4 = 0;
  *(uint *)&pCVar3->field_0xd134 = 0;
  *(uint *)&pCVar3->field_0xd138 = 0;
  *(uint *)&pCVar3->field_0xd13c = 0;
  this_ptr_00 = 0x01C6E360;
  *(int *)&pCVar3->field_0xd058 = iVar5;
  *(uint *)&pCVar3->field_0xd0d8 = 0;
  iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (this_ptr_00,"COMBATMODEHARD");
  if (iVar5 != 0) {
    *(uint *)&pCVar3->field_0xd148 = 0x3f800000;
    return pCVar3;
  }
  *(uint *)&pCVar3->field_0xd148 = 0x3f400000;
  return pCVar3;
}
