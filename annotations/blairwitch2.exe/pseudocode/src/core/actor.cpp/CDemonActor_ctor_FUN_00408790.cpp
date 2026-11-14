// Name: core_actor.cpp_CDemonActor_ctor_FUN_00408790
// Address: 00408790
// Address Range: [[00408790, 00408920]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_actor_cpp_CDemonActor_ctor_FUN_00408790(CDemonActor *this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl core_actor_cpp_CDemonActor_ctor_FUN_00408790(CDemonActor *this_ptr)

{
  CDemonActor *this_ptr_00;
  char cVar1;
  CDemonActorTransformState *pCVar2;
  void *pvVar3;
  char *pcVar4;
  char *pcVar5;
  
  pCVar2 = core_actor_cpp_initTransformCache_FUN_00408750(&this_ptr->previous_transform_state);
  pvVar3 = __arrinit
                     (&pCVar2[1].orientation,5,&g_CSimpleParticleSystemTypeInfo);
  this_ptr_00 = (CDemonActor *)((int)pvVar3 + -0x154);
  *(CDemonActor_vtable **)((int)pvVar3 + 0x15c) = &g_CDemonActorVTable;
  this_ptr_00->actor_name[0] = '\0';
  *(uint *)((int)pvVar3 + -8) = 0;
  *(uint *)((int)pvVar3 + -4) = 0;
  *(uint *)((int)pvVar3 + -300) = 0;
  *(uint *)((int)pvVar3 + -0x130) = *(uint *)((int)pvVar3 + -300);
  *(uint *)((int)pvVar3 + -0x134) = *(uint *)((int)pvVar3 + -0x130);
  *(uint *)((int)pvVar3 + -0x128) = 0;
  pcVar4 = &DAT_005ca42a;
  *(uint *)((int)pvVar3 + -0x11c) = 0;
  *(uint *)((int)pvVar3 + -0x120) = *(uint *)((int)pvVar3 + -0x11c);
  *(uint *)((int)pvVar3 + -0x124) = *(uint *)((int)pvVar3 + -0x120);
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(this_ptr_00);
  pcVar5 = (char *)((int)pvVar3 + -0xdc);
  *(uint *)((int)pvVar3 + -0xe0) = 0x3f800000;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)pvVar3 + -0xe4) = 0;
  *(uint *)((int)pvVar3 + -0x78) = 0;
  *(uint *)((int)pvVar3 + -0x6c) = 0;
  *(uint *)((int)pvVar3 + -0x70) = *(uint *)((int)pvVar3 + -0x6c);
  *(uint *)((int)pvVar3 + -0x74) = *(uint *)((int)pvVar3 + -0x70);
  *(uint *)((int)pvVar3 + -0x60) = 0;
  *(uint *)((int)pvVar3 + -100) = *(uint *)((int)pvVar3 + -0x60);
  *(uint *)((int)pvVar3 + -0x68) = *(uint *)((int)pvVar3 + -100);
  *(uint *)((int)pvVar3 + -0x4c) = 0x10000;
  *(uint *)((int)pvVar3 + -0x48) = 0x10000;
  *(uint *)((int)pvVar3 + -0x44) = 0x10000;
  *(uint *)((int)pvVar3 + -0x5c) = 1;
  *(uint *)((int)pvVar3 + -0x58) = 0;
  *(uint *)((int)pvVar3 + -0x40) = 0;
  *(uint *)((int)pvVar3 + -0x54) = 0;
  *(uint *)((int)pvVar3 + -0x50) = 0;
  pcVar4 = &DAT_005ca42f;
  *(uint *)((int)pvVar3 + -0xf0) = 100;
  pcVar5 = (char *)((int)pvVar3 + -0x34);
  *(byte **)((int)pvVar3 + -0xec) = &DAT_0078a123;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)pvVar3 + 0x154) = 0x3dcccccd;
  *(uint *)((int)pvVar3 + 0x158) = 1;
  return this_ptr_00;
}
