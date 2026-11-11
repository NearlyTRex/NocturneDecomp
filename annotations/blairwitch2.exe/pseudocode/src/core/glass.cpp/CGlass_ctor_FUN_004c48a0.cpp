// Name: core_glass.cpp_CGlass_ctor_FUN_004c48a0
// Address: 004c48a0
// Address Range: [[004c48a0, 004c49d4]]
// Convention: __cdecl
// Signature: CGlass * __cdecl core_glass_cpp_CGlass_ctor_FUN_004c48a0(CGlass *this_ptr)

#include "nocturne.h"

CGlass * __cdecl core_glass_cpp_CGlass_ctor_FUN_004c48a0(CGlass *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CMirror *pCVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_00408790(&this_ptr->base);
  pCVar3 = core_mirror_cpp_CMirror_ctor_FUN_004f98a0((CMirror *)(pCVar2[1].create_event + 0x1c));
  iVar4 = __arrinit
                    (&pCVar3[1].reflection.reflection_matrix.m[1].y,0x19,&g_CVectorTypeInfo);
  *(CDemonActor_vtable **)(iVar4 + -0x238) = &g_CGlassVTable;
  pcVar5 = "HEADLITE.RAW";
  *(uint *)(iVar4 + -0x234) = 0x40800000;
  *(uint *)(iVar4 + -0x230) = 0x40800000;
  pcVar6 = (char *)(iVar4 + -0x220);
  *(uint *)(iVar4 + -0x22c) = 0x3dcccccd;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar4 + -0x224) = 0;
  *(uint *)(iVar4 + -0x228) = 0xd;
  *(uint *)(iVar4 + -0x210) = 0x8000;
  *(uint *)(iVar4 + -0x20c) = 0;
  pcVar5 = (char *)0x5d9286;
  *(byte *)(iVar4 + -0x208) = 0;
  pcVar6 = (char *)(iVar4 + -0x80);
  *(uint *)(iVar4 + -0x1a4) = 0;
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
  pcVar6 = (char *)(iVar4 + -0x10);
  *(uint *)(iVar4 + -0x1c) = 0;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar4 + -0x14) = 0;
  *(uint *)(iVar4 + -0x18) = 0xd;
  *(uint *)(iVar4 + 0x7b0) = 0;
  return (CGlass *)(iVar4 + -0x4e8);
}
