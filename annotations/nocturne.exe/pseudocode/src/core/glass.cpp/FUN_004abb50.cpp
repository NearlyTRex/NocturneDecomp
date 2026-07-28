// Name: core_glass.cpp_FUN_004abb50
// Address: 004abb50
// Address Range: [[004abb50, 004abc84]]
// Convention: unknown
// Signature: int core_glass_cpp_FUN_004abb50(undefined4 param_1)

#include "nocturne.h"

int core_glass_cpp_FUN_004abb50(uint param_1)

{
  char cVar1;
  int iVar2;
  CMirror *pCVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar2 = core_actor_cpp_FUN_00409d30(param_1);
  pCVar3 = core_mirror_cpp_CMirror_ctor_FUN_004d6550((CMirror *)(iVar2 + 0x1e4));
  pvVar4 = __arrinit
                     (&pCVar3[1].reflection.reflection_matrix.m[1].y,0x19,
                      &g_CVectorTypeInfo_005993b0);
  *(byte ***)((int)pvVar4 + -0x238) = &PTR_core_glass_cpp_CGlass_setup_FUN_004abc90_0059e3b4;
  pcVar5 = "HEADLITE.RAW";
  *(uint *)((int)pvVar4 + -0x234) = 0x40800000;
  *(uint *)((int)pvVar4 + -0x230) = 0x40800000;
  pcVar6 = (char *)((int)pvVar4 + -0x220);
  *(uint *)((int)pvVar4 + -0x22c) = 0x3dcccccd;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)pvVar4 + -0x224) = 0;
  *(uint *)((int)pvVar4 + -0x228) = 0xd;
  *(uint *)((int)pvVar4 + -0x210) = 0x8000;
  *(uint *)((int)pvVar4 + -0x20c) = 0;
  pcVar5 = "true";
  *(byte *)((int)pvVar4 + -0x208) = 0;
  pcVar6 = (char *)((int)pvVar4 + -0x80);
  *(uint *)((int)pvVar4 + -0x1a4) = 0;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pcVar5 = "7YEARS.RAW";
  pcVar6 = (char *)((int)pvVar4 + -0x10);
  *(uint *)((int)pvVar4 + -0x1c) = 0;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)pvVar4 + -0x14) = 0;
  *(uint *)((int)pvVar4 + -0x18) = 0xd;
  *(uint *)((int)pvVar4 + 0x7b0) = 0;
  return (int)pvVar4 + -900;
}
