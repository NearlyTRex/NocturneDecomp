// Name: core_actor.cpp_CDemonActor_ctor_FUN_004085c0
// Address: 004085c0
// Address Range: [[004085c0, 00408729]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_actor_cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor *this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl core_actor_cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor *this_ptr)

{
  CDemonActor *this_ptr_00;
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = core_actor_cpp_initTransformCache_FUN_00408580
                    (&(this_ptr->previous_transform_state).position.y);
  this_ptr_00 = (CDemonActor *)(iVar2 + -300);
  *(CDemonActor_vtable **)(iVar2 + 0x28) = &g_CDemonActorVTable;
  this_ptr_00->actor_name[0] = '\0';
  *(uint *)(iVar2 + 0x20) = 0;
  *(uint *)(iVar2 + 0x24) = 0;
  *(uint *)(iVar2 + -0x104) = 0;
  *(uint *)(iVar2 + -0x108) = *(uint *)(iVar2 + -0x104);
  *(uint *)(iVar2 + -0x10c) = *(uint *)(iVar2 + -0x108);
  *(uint *)(iVar2 + -0x100) = 0;
  pcVar3 = "none";
  *(uint *)(iVar2 + -0xf4) = 0;
  *(uint *)(iVar2 + -0xf8) = *(uint *)(iVar2 + -0xf4);
  *(uint *)(iVar2 + -0xfc) = *(uint *)(iVar2 + -0xf8);
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(this_ptr_00);
  pcVar4 = (char *)(iVar2 + -0xb4);
  *(uint *)(iVar2 + -0xb8) = 0x3f800000;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0xbc) = 0;
  *(uint *)(iVar2 + -0x50) = 0;
  *(uint *)(iVar2 + -0x44) = 0;
  *(uint *)(iVar2 + -0x48) = *(uint *)(iVar2 + -0x44);
  *(uint *)(iVar2 + -0x4c) = *(uint *)(iVar2 + -0x48);
  *(uint *)(iVar2 + -0x38) = 0;
  *(uint *)(iVar2 + -0x3c) = *(uint *)(iVar2 + -0x38);
  *(uint *)(iVar2 + -0x40) = *(uint *)(iVar2 + -0x3c);
  *(uint *)(iVar2 + -0x24) = 0x10000;
  *(uint *)(iVar2 + -0x20) = 0x10000;
  *(uint *)(iVar2 + -0x1c) = 0x10000;
  *(uint *)(iVar2 + -0x34) = 1;
  *(uint *)(iVar2 + -0x30) = 0;
  *(uint *)(iVar2 + -0x18) = 0;
  *(uint *)(iVar2 + -0x2c) = 0;
  *(uint *)(iVar2 + -0x28) = 0;
  pcVar3 = "str";
  *(uint *)(iVar2 + -200) = 100;
  pcVar4 = (char *)(iVar2 + -0xc);
  *(byte **)(iVar2 + -0xc4) = &DAT_0078a123;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return this_ptr_00;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return this_ptr_00;
}
