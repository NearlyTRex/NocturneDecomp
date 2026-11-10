// Name: core_kedward.cpp_CKedward_ctor_FUN_0058fd70
// Address: 0058fd70
// Address Range: [[0058fd70, 0058fe6b]]
// Convention: unknown
// Signature: CKedward * core_kedward_cpp_CKedward_ctor_FUN_0058fd70(CKedward *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CKedward * core_kedward_cpp_CKedward_ctor_FUN_0058fd70(CKedward *this_ptr)

{
  CKedward *pCVar1;
  CKedward *pCVar2;
  byte *puVar3;
  
  pCVar1 = (CKedward *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  ((UActorVTable *)&pCVar1->field_0x154)->_ub = &g_CKedwardVTable._ub;
  *(uint *)&pCVar1->field_0x326c = 0x3f000000;
  *(uint *)&pCVar1->field_0x3270 = 0x3f800000;
  *(uint *)&pCVar1->field_0xd054 = 0;
  *(uint *)&pCVar1->field_0xd050 = 0;
  *(uint *)&pCVar1->field_0x252c = 0x3fc90fdb;
  *(int *)&pCVar1->field_0xfc = 1;
  *(int *)&pCVar1->field_0xf8 = 0;
  *(uint *)&pCVar1->field_0xd068 = 1;
  *(uint *)&pCVar1->field_0xd06c = 0x40000000;
  *(uint *)&pCVar1->field_0xd070 = 0x4b;
  *(uint *)&pCVar1->field_0xd08c = 1;
  *(uint *)&pCVar1->field_0xd078 = 0;
  *(uint *)&pCVar1->field_0xd07c = 0;
  *(uint *)&pCVar1->field_0xd084 = 0;
  *(uint *)&pCVar1->field_0xd088 = 0;
  *(uint *)&pCVar1->field_0xd090 = 0;
  *(uint *)&pCVar1->field_0xd080 = 0;
  *(uint *)&pCVar1->field_0xd064 = *(uint *)&pCVar1->field_0xd06c;
  *(uint *)&pCVar1->field_0xd060 = 0x10000;
  *(uint *)&pCVar1->field_0xd094 = 0;
  pCVar2 = pCVar1;
  do {
    puVar3 = &pCVar2->field_0x4;
    *(uint *)&pCVar2->field_0xd0a4 = 0;
    pCVar2 = (CKedward *)puVar3;
  } while (puVar3 != &pCVar1->field_0x34);
  return pCVar1;
}
