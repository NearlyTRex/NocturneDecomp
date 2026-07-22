// Name: core_enemy.cpp_CEnemy_ctor_FUN_00479560
// Address: 00479560
// Address Range: [[00479560, 004796a2]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_ctor_FUN_00479560(undefined4 param_1)

#include "nocturne.h"

int __cdecl core_enemy_cpp_CEnemy_ctor_FUN_00479560(uint param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar2 = core_charactr_cpp_CCharacter_ctor_FUN_00423f40(param_1);
  *(byte ***)(iVar2 + 0x14c) = &PTR_core_enemy_cpp_CEnemy_setup_FUN_004796b0_0059cdb4;
  uVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f666666,0x3f8ccccd);
  *(uint *)(iVar2 + 0xbc90) = 0;
  *(uint *)(iVar2 + 0xbd14) = 0;
  *(uint *)(iVar2 + 0xbca4) = 0;
  *(uint *)(iVar2 + 0xbca8) = 0;
  *(uint *)(iVar2 + 0xbcac) = 0x42480000;
  *(uint *)(iVar2 + 0xbc94) = 1;
  *(uint *)(iVar2 + 0xbd1c) = 0;
  *(uint *)(iVar2 + 0xbc98) = 0;
  *(byte *)(iVar2 + 0xbcb0) = 0;
  *(uint *)(iVar2 + 0xbc9c) = 0x42c80000;
  *(uint *)(iVar2 + 0xbca0) = 0;
  *(uint *)(iVar2 + 0xbd18) = 0x40c00000;
  *(uint *)(iVar2 + 0xbd20) = 1;
  *(uint *)(iVar2 + 0xbc8c) = uVar3;
  iVar4 = core_actor_cpp_getRandomInt_FUN_0040de00(0xffffe001,0x1fff);
  *(int *)(iVar2 + 0x108) = iVar4 + 0x10000;
  iVar4 = core_actor_cpp_getRandomInt_FUN_0040de00(0xffffe001,0x1fff);
  pcVar5 = "ene";
  *(int *)(iVar2 + 0x10c) = iVar4 + 0x10000;
  iVar4 = core_actor_cpp_getRandomInt_FUN_0040de00(0xffffe001,0x1fff);
  pcVar6 = (char *)(iVar2 + 0x11c);
  *(int *)(iVar2 + 0x110) = iVar4 + 0x10000;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') {
      return iVar2;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  return iVar2;
}
