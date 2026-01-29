// Name: core_wateract.cpp_CWaterActor_ctor_FUN_005ea8a0
// Address: 005ea8a0
// Address Range: [[005ea8a0, 005ea9e5]]
// Convention: __cdecl
// Signature: CWaterActor * __cdecl core_wateract_cpp_CWaterActor_ctor_FUN_005ea8a0(CWaterActor *this_ptr)

#include "nocturne.h"

CWaterActor * __cdecl core_wateract_cpp_CWaterActor_ctor_FUN_005ea8a0(CWaterActor *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  void *pvVar3;
  char *pcVar4;
  char *pcVar5;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pvVar3 = __arrinit(&pCVar2[1].unk13,1000,&g_SWaterVertexTypeInfo);
  *(CDemonActor_vtable **)((int)pvVar3 + -0x148) = &g_CWaterActorVTable;
  *(uint *)((int)pvVar3 + -0x144) = 0x40800000;
  *(uint *)((int)pvVar3 + -0x140) = 0x3dcccccd;
  *(uint *)((int)pvVar3 + -0x13c) = 0x40800000;
  *(uint *)((int)pvVar3 + -0x138) = 0x8000;
  *(uint *)((int)pvVar3 + 0x2af8c) = 0;
  *(uint *)((int)pvVar3 + 0x2af90) = 0;
  *(uint *)((int)pvVar3 + -0x1a0) = 1;
  *(uint *)((int)pvVar3 + -0x1a4) = 0;
  *(uint *)((int)pvVar3 + -0x130) = 0x3f800000;
  *(uint *)((int)pvVar3 + -300) = 0x3f800000;
  *(uint *)((int)pvVar3 + -0x134) = 0;
  pcVar4 = "none";
  *(uint *)((int)pvVar3 + -0x20) = 0;
  *(byte *)((int)pvVar3 + -0x128) = 0;
  pcVar5 = (char *)((int)pvVar3 + -0xe8);
  *(byte *)((int)pvVar3 + -0x108) = 0;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = "none";
  pcVar5 = (char *)((int)pvVar3 + -0x84);
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)pvVar3 + -0x1c) = 0;
  *(uint *)((int)pvVar3 + -0x18) = 0x3f800000;
  *(uint *)((int)pvVar3 + -0x14) = 0;
  *(uint *)((int)pvVar3 + -8) = 0xff;
  *(uint *)((int)pvVar3 + -0xc) = *(uint *)((int)pvVar3 + -8);
  *(uint *)((int)pvVar3 + -0x10) = *(uint *)((int)pvVar3 + -8);
  return (CWaterActor *)((int)pvVar3 + -0x29c);
}
