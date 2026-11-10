// Name: core_demnfolk.cpp_CDemnfolk_ctor_FUN_00458a10
// Address: 00458a10
// Address Range: [[00458a10, 00458bb5]]
// Convention: unknown
// Signature: CDemnfolk * core_demnfolk_cpp_CDemnfolk_ctor_FUN_00458a10(CDemnfolk *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDemnfolk * core_demnfolk_cpp_CDemnfolk_ctor_FUN_00458a10(CDemnfolk *this_ptr)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  CDemnfolk *pCVar4;
  float fVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  pCVar4 = (CDemnfolk *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410((CEnemy *)this_ptr);
  pcVar7 = (char *)0x5d7d60;
  ((UActorVTable *)&pCVar4->field_0x154)->_ub = &g_CDemnfolkVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)&pCVar4->field_0x158,"@d_deputy.dfm" + 1);
  *(uint *)&pCVar4->field_0x2fec = 0x3f000000;
  pcVar8 = &pCVar4->field_0xc288;
  *(uint *)&pCVar4->field_0x2ff0 = 0x3f800000;
  uVar2 = _DAT_005fe69c;
  *(uint *)&pCVar4->field_0xc278 = 0;
  uVar3 = _DAT_005fe6a0;
  *(uint *)&pCVar4->field_0xc274 = 0;
  *(uint *)&pCVar4->field_0x2ff4 = uVar2;
  *(uint *)&pCVar4->field_0x2ff8 = uVar3;
  do {
    cVar1 = *pcVar7;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  fVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.3,1.0);
  *(uint *)&pCVar4->field_0xc280 = 0;
  *(float *)&pCVar4->field_0xc268 = fVar5;
  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,0xff);
  *(uint *)&pCVar4->field_0xc270 = 0;
  *(uint *)&pCVar4->field_0xc284 = 0;
  *(uint *)&pCVar4->field_0xc2ec = 0;
  *(uint *)&pCVar4->field_0xc2f0 = 0;
  *(uint *)&pCVar4->field_0xc344 = 0;
  *(uint *)&pCVar4->field_0xc2f4 = 0;
  *(uint *)&pCVar4->field_0xc35c = 0;
  *(uint *)&pCVar4->field_0xc360 = 0;
  *(int *)&pCVar4->field_0xc264 = 0;
  *(uint *)&pCVar4->field_0x252c = 0x40490fdb;
  *(uint *)&pCVar4->field_0x2530 = 0x40490fdb;
  *(uint *)&pCVar4->field_0xc27c = 2;
  *(uint *)&pCVar4->field_0xc2f8 = 0;
  *(uint *)&pCVar4->field_0xc348 = 0;
  *(uint *)&pCVar4->field_0xc34c = 0;
  *(uint *)&pCVar4->field_0xc350 = 0;
  *(uint *)&pCVar4->field_0xc354 = 0;
  *(uint *)&pCVar4->field_0xc358 = 0;
  *(uint *)&pCVar4->field_0xc364 = 0;
  *(int *)&pCVar4->field_0xc26c = iVar6;
  *(uint *)&pCVar4->field_0xc2ec = 0;
  return pCVar4;
}
