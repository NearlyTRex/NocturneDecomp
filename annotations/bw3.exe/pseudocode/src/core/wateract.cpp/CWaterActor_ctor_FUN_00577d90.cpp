// Name: core_wateract.cpp_CWaterActor_ctor_FUN_00577d90
// Address: 00577d90
// Address Range: [[00577d90, 00577edf]]
// Convention: __cdecl
// Signature: CWaterActor * __cdecl core_wateract_cpp_CWaterActor_ctor_FUN_00577d90(CWaterActor *this_ptr)

#include "nocturne.h"

CWaterActor * __cdecl core_wateract_cpp_CWaterActor_ctor_FUN_00577d90(CWaterActor *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  void *pvVar3;
  char *pcVar4;
  char *pcVar5;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_00408600(&this_ptr->base);
  pvVar3 = __arrinit
                     (&pCVar2[1].render_needs_update,1000,&g_SWaterVertexTypeInfo);
  *(CDemonActor_vtable **)((int)pvVar3 + -0x14c) = &g_CWaterActorVTable;
  *(uint *)((int)pvVar3 + -0x148) = 0x40800000;
  *(uint *)((int)pvVar3 + -0x144) = 0x3dcccccd;
  *(uint *)((int)pvVar3 + -0x140) = 0x40800000;
  *(uint *)((int)pvVar3 + -0x13c) = 0x8000;
  *(uint *)((int)pvVar3 + 0x2af8c) = 0;
  *(uint *)((int)pvVar3 + 0x2af90) = 0;
  *(uint *)((int)pvVar3 + -0x1a4) = 1;
  *(uint *)((int)pvVar3 + -0x1a8) = 0;
  *(uint *)((int)pvVar3 + -0x134) = 0x3f800000;
  *(uint *)((int)pvVar3 + -0x130) = 0x3f800000;
  *(uint *)((int)pvVar3 + -0x138) = 0;
  pcVar4 = (char *)0x5d71ed;
  *(uint *)((int)pvVar3 + -0x24) = 0;
  *(byte *)((int)pvVar3 + -300) = 0;
  pcVar5 = (char *)((int)pvVar3 + -0xec);
  *(byte *)((int)pvVar3 + -0x10c) = 0;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = (char *)0x5d71f2;
  pcVar5 = (char *)((int)pvVar3 + -0x88);
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)pvVar3 + -0x20) = 0;
  *(uint *)((int)pvVar3 + -0x1c) = 0x3f800000;
  *(uint *)((int)pvVar3 + -0x18) = 0;
  *(uint *)((int)pvVar3 + -0xc) = 0xff;
  *(uint *)((int)pvVar3 + -8) = 0;
  *(uint *)((int)pvVar3 + -0x10) = *(uint *)((int)pvVar3 + -0xc);
  *(uint *)((int)pvVar3 + -0x14) = *(uint *)((int)pvVar3 + -0xc);
  return (CWaterActor *)((int)pvVar3 + -0x2a0);
}
