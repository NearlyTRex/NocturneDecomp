// Name: core_meleeaxe.cpp_CMeleeAxe_ctor_FUN_0059d220
// Address: 0059d220
// Address Range: [[0059d220, 0059d2f6]]
// Convention: unknown
// Signature: CMeleeAxe * core_meleeaxe_cpp_CMeleeAxe_ctor_FUN_0059d220(CMeleeAxe *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CMeleeAxe * core_meleeaxe_cpp_CMeleeAxe_ctor_FUN_0059d220(CMeleeAxe *this_ptr)

{
  char cVar1;
  CMelee *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = core_melee_cpp_CMelee_ctor_FUN_004ea8b0((CMelee *)this_ptr);
  *(byte **)&pCVar2->field_0x2b0 = &g_CMeleeAxeVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)&pCVar2->field_0x2b4,(char *)0x5ef7fb);
  *(uint *)&pCVar2->field_0x43c = 8;
  *(uint *)&pCVar2->field_0x6d8 = 0x41c80000;
  pcVar3 = "axeimpactflesh0?.wav";
  *(uint *)&pCVar2->field_0x6dc = 0x42480000;
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
  pcVar3 = "axeimpactflesh0?.wav";
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
  pcVar3 = "axeimpactwood0?.wav";
  pcVar4 = &pCVar2->field_0x7c4;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return (CMeleeAxe *)pCVar2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return (CMeleeAxe *)pCVar2;
}
