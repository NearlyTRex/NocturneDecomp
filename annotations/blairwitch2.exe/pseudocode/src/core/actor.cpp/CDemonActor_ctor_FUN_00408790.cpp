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
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = core_actor_cpp_initTransformCache_FUN_00408750(&this_ptr->field_0x12c);
  iVar2 = __arrinit(iVar2 + 0x28,5,&g_CSimpleParticleSystemTypeInfo);
  this_ptr_00 = (CDemonActor *)(iVar2 + -0x154);
  *(CDemonActor_vtable **)(iVar2 + 0x15c) = &g_CDemonActorVTable;
  this_ptr_00->actor_name[0] = '\0';
  *(uint *)(iVar2 + -8) = 0;
  *(uint *)(iVar2 + -4) = 0;
  *(uint *)(iVar2 + -300) = 0;
  *(uint *)(iVar2 + -0x130) = *(uint *)(iVar2 + -300);
  *(uint *)(iVar2 + -0x134) = *(uint *)(iVar2 + -0x130);
  *(uint *)(iVar2 + -0x128) = 0;
  pcVar3 = &DAT_005ca42a;
  *(uint *)(iVar2 + -0x11c) = 0;
  *(uint *)(iVar2 + -0x120) = *(uint *)(iVar2 + -0x11c);
  *(uint *)(iVar2 + -0x124) = *(uint *)(iVar2 + -0x120);
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(this_ptr_00);
  pcVar4 = (char *)(iVar2 + -0xdc);
  *(uint *)(iVar2 + -0xe0) = 0x3f800000;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0xe4) = 0;
  *(uint *)(iVar2 + -0x78) = 0;
  *(uint *)(iVar2 + -0x6c) = 0;
  *(uint *)(iVar2 + -0x70) = *(uint *)(iVar2 + -0x6c);
  *(uint *)(iVar2 + -0x74) = *(uint *)(iVar2 + -0x70);
  *(uint *)(iVar2 + -0x60) = 0;
  *(uint *)(iVar2 + -100) = *(uint *)(iVar2 + -0x60);
  *(uint *)(iVar2 + -0x68) = *(uint *)(iVar2 + -100);
  *(uint *)(iVar2 + -0x4c) = 0x10000;
  *(uint *)(iVar2 + -0x48) = 0x10000;
  *(uint *)(iVar2 + -0x44) = 0x10000;
  *(uint *)(iVar2 + -0x5c) = 1;
  *(uint *)(iVar2 + -0x58) = 0;
  *(uint *)(iVar2 + -0x40) = 0;
  *(uint *)(iVar2 + -0x54) = 0;
  *(uint *)(iVar2 + -0x50) = 0;
  pcVar3 = &DAT_005ca42f;
  *(uint *)(iVar2 + -0xf0) = 100;
  pcVar4 = (char *)(iVar2 + -0x34);
  *(byte **)(iVar2 + -0xec) = &DAT_0078a123;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x154) = 0x3dcccccd;
  *(uint *)(iVar2 + 0x158) = 1;
  return this_ptr_00;
}
