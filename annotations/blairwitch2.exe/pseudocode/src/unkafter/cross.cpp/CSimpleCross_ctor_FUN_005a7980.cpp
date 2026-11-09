// Name: unkafter_cross.cpp_CSimpleCross_ctor_FUN_005a7980
// Address: 005a7980
// Address Range: [[005a7980, 005a7a56]]
// Convention: unknown
// Signature: CSimpleCross * unkafter_cross_cpp_CSimpleCross_ctor_FUN_005a7980(CSimpleCross *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSimpleCross * unkafter_cross_cpp_CSimpleCross_ctor_FUN_005a7980(CSimpleCross *this_ptr)

{
  char cVar1;
  CMelee *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = core_melee_cpp_CMelee_ctor_FUN_004ea8b0((CMelee *)this_ptr);
  *(byte **)&pCVar2->field_0x2b0 = &g_CSimpleCrossVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)&pCVar2->field_0x2b4,(char *)0x5f07ad);
  *(uint *)&pCVar2->field_0x43c = 0xd;
  *(uint *)&pCVar2->field_0x6d8 = 0x40a00000;
  pcVar3 = "shovel?.wav";
  *(uint *)&pCVar2->field_0x6dc = 0x41200000;
  *(uint *)&pCVar2->field_0x6e0 = 0;
  pcVar4 = &pCVar2->field_0x6fc;
  *(uint *)&pCVar2->field_0x6e4 = 1;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5f07c4;
  pcVar4 = &pCVar2->field_0x760;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5f07d0;
  pcVar4 = &pCVar2->field_0x7c4;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return (CSimpleCross *)pCVar2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return (CSimpleCross *)pCVar2;
}
