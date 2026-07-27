// Name: core_gabriela.cpp_FUN_00497810
// Address: 00497810
// Address Range: [[00497810, 0049785f]]
// Convention: unknown
// Signature: undefined4 core_gabriela_cpp_FUN_00497810(int param_1)

#include "nocturne.h"

uint core_gabriela_cpp_FUN_00497810(int param_1)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                    (*(uint *)(param_1 + 0x24ac),g_CLightActorActorType_00764a9c.name_hash);
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x664) == 2 || (*(int *)(iVar1 + 0x664) == 3)))) {
    return 0xbf860a92;
  }
  return 0xbfc80fc6;
}
