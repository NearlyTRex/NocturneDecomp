// Name: core_robin.cpp_CRobin_ctor_FUN_005a5e70
// Address: 005a5e70
// Address Range: [[005a5e70, 005a5f4e]]
// Convention: unknown
// Signature: CRobin * core_robin_cpp_CRobin_ctor_FUN_005a5e70(CRobin *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CRobin * core_robin_cpp_CRobin_ctor_FUN_005a5e70(CRobin *this_ptr)

{
  byte *puVar1;
  CRobin *pCVar2;
  
  pCVar2 = (CRobin *)core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0((CBasicNPC *)this_ptr);
  *(byte **)&pCVar2->field_0x2b0 = &g_CRobinVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar2->field_0x2b4,(char *)0x5f062d);
  *(uint *)&pCVar2->field_0x3434 = 0x3f000000;
  *(uint *)&pCVar2->field_0x1134c = 0x3f99999a;
  *(uint *)&pCVar2->field_0xfc = 1;
  *(uint *)&pCVar2->field_0x113c4 = 0x3f800000;
  *(uint *)&pCVar2->field_0x2a8 = 0x3dcccccd;
  *(uint *)&pCVar2->field_0x11380 = 0;
  *(uint *)&pCVar2->field_0x11384 = 0;
  *(uint *)&pCVar2->field_0x11388 = 1;
  *(uint *)&pCVar2->field_0x1138c = 2;
  *(uint *)&pCVar2->field_0x11390 = 0;
  core_robin_cpp_FUN_005a60d0(pCVar2,0,0);
  puVar1 = &pCVar2->field_0x10af8;
  unkaddr_0059d350_cpp_FUN_0059d7f0(puVar1,"ChaseComplete","MeleeAttack");
  unkaddr_0059d350_cpp_FUN_0059d990(puVar1,"Animation");
  unkaddr_0059d350_cpp_FUN_0059dc80(puVar1);
  *(uint *)&pCVar2->field_0x2ac = 0;
  return pCVar2;
}
