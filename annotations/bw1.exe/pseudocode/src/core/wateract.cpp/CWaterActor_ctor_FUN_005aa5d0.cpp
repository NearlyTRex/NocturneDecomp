// Name: core_wateract.cpp_CWaterActor_ctor_FUN_005aa5d0
// Address: 005aa5d0
// Address Range: [[005aa5d0, 005aa715]]
// Convention: __cdecl
// Signature: CWaterActor * __cdecl core_wateract_cpp_CWaterActor_ctor_FUN_005aa5d0(CWaterActor *this_ptr)

#include "nocturne.h"

CWaterActor * __cdecl core_wateract_cpp_CWaterActor_ctor_FUN_005aa5d0(CWaterActor *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004085c0(&this_ptr->base);
  iVar3 = __arrinit
                    (&pCVar2[1].previous_transform_state.dirty_flags,1000,&g_SWaterVertexTypeInfo);
  *(CDemonActor_vtable **)(iVar3 + -0x148) = &g_CWaterActorVTable;
  *(uint *)(iVar3 + -0x144) = 0x40800000;
  *(uint *)(iVar3 + -0x140) = 0x3dcccccd;
  *(uint *)(iVar3 + -0x13c) = 0x40800000;
  *(uint *)(iVar3 + -0x138) = 0x8000;
  *(uint *)(iVar3 + 0x2af8c) = 0;
  *(uint *)(iVar3 + 0x2af90) = 0;
  *(uint *)(iVar3 + -0x1a0) = 1;
  *(uint *)(iVar3 + -0x1a4) = 0;
  *(uint *)(iVar3 + -0x130) = 0x3f800000;
  *(uint *)(iVar3 + -300) = 0x3f800000;
  *(uint *)(iVar3 + -0x134) = 0;
  pcVar4 = (char *)0x5f927e;
  *(uint *)(iVar3 + -0x20) = 0;
  *(byte *)(iVar3 + -0x128) = 0;
  pcVar5 = (char *)(iVar3 + -0xe8);
  *(byte *)(iVar3 + -0x108) = 0;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = (char *)0x5f9283;
  pcVar5 = (char *)(iVar3 + -0x84);
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar3 + -0x1c) = 0;
  *(uint *)(iVar3 + -0x18) = 0x3f800000;
  *(uint *)(iVar3 + -0x14) = 0;
  *(uint *)(iVar3 + -8) = 0xff;
  *(uint *)(iVar3 + -0xc) = *(uint *)(iVar3 + -8);
  *(uint *)(iVar3 + -0x10) = *(uint *)(iVar3 + -8);
  return (CWaterActor *)(iVar3 + -0x29c);
}
