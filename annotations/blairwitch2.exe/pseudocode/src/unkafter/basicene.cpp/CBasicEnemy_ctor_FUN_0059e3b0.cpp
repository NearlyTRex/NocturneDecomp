// Name: unkafter_basicene.cpp_CBasicEnemy_ctor_FUN_0059e3b0
// Address: 0059e3b0
// Address Range: [[0059e3b0, 0059e691]]
// Convention: __cdecl
// Signature: int __cdecl unkafter_basicene_cpp_CBasicEnemy_ctor_FUN_0059e3b0(CBasicEnemy *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl unkafter_basicene_cpp_CBasicEnemy_ctor_FUN_0059e3b0(CBasicEnemy *this_ptr)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  CEnemy *pCVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  uint auStack_18 [3];
  
  pCVar7 = core_enemy_cpp_CEnemy_ctor_FUN_00487db0(&this_ptr->base);
  iVar8 = unkaddr_0059d350_cpp_FUN_0059d610(pCVar7 + 1);
  iVar1 = iVar8 + -0x10af8;
  *(byte **)(iVar8 + -0x10848) = &g_CBasicEnemyVTable;
  *(uint *)(iVar8 + 0x924) = 0;
  *(uint *)(iVar8 + 0x854) = 0x3f800000;
  *(uint *)(iVar8 + 0x8ac) = 0;
  *(uint *)(iVar8 + 0x8b0) = 0;
  *(uint *)(iVar8 + 0x8b4) = 2;
  *(uint *)(iVar8 + 0x888) = 0;
  *(uint *)(iVar8 + 0x88c) = 0;
  *(uint *)(iVar8 + 0x890) = 0;
  *(uint *)(iVar8 + 0x894) = 0;
  *(uint *)(iVar8 + 0x898) = 0xffffffff;
  *(uint *)(iVar8 + 0x89c) = 0x41200000;
  *(uint *)(iVar8 + 0x8a0) = 0x41f00000;
  *(uint *)(iVar8 + 0x8a8) = 0x41f00000;
  *(uint *)(iVar8 + 0x84c) = 0;
  *(uint *)(iVar8 + 0x8c4) = 0;
  *(uint *)(iVar8 + 0x8c8) = 0x3f800000;
  *(uint *)(iVar8 + 0x8d4) = 0;
  uVar4 = _DAT_005febe4;
  *(uint *)(iVar8 + 0x8d0) = 0x40a00000;
  uVar5 = _DAT_005febe8;
  *(uint *)(iVar8 + 0x8cc) = 0x3f800000;
  uVar6 = _DAT_005febec;
  *(uint *)(iVar8 + 0x8c0) = 0;
  uVar3 = _DAT_005febe0;
  *(uint *)(iVar8 + 0x8bc) = 0;
  uVar9 = _DAT_005febdc;
  *(uint *)(iVar8 + 0x920) = 0;
  *(uint *)(iVar8 + 0x878) = uVar4;
  *(uint *)(iVar8 + 0x87c) = uVar5;
  *(uint *)(iVar8 + 0x880) = uVar6;
  *(uint *)(iVar8 + -0xd6c0) = uVar3;
  *(uint *)(iVar8 + -0xd6bc) = uVar9;
  *(uint *)(iVar8 + 0x8d8) = 0;
  if (*(int *)(iVar8 + 0x920) != 0) {
    pcVar10 = (char *)0x5ef863;
    pcVar11 = (char *)(iVar8 + 0x8dc);
    do {
      cVar2 = *pcVar10;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
  }
  *(uint *)(iVar8 + 0x914) = 0x3e800000;
  *(uint *)(iVar8 + 0x918) = 0x3f000000;
  *(uint *)(iVar8 + 0x91c) = 0x3e800000;
  unkafter_basicene_cpp_FUN_0059e8c0(iVar1,0,0);
  unkaddr_0059d350_cpp_FUN_0059d6f0(iVar8,"ChaseComplete","Chasing");
  unkaddr_0059d350_cpp_FUN_0059d8e0(iVar8,"Nothing");
  unkaddr_0059d350_cpp_FUN_0059da70(iVar8);
  unkaddr_0059d350_cpp_FUN_0059d990(iVar8,"Nothing");
  unkaddr_0059d350_cpp_FUN_0059dc80(iVar8);
  uVar9 = unkaddr_0059d350_cpp_FUN_0059db90(iVar8);
  unkaddr_0059d350_cpp_FUN_0059d6f0(iVar8,"BurnComplete",uVar9);
  *(uint *)(iVar8 + 0x928) = 0;
  *(uint *)(iVar8 + 0x884) = 0xfffffc19;
  *(uint *)(iVar8 + 0x904) = 0xfffffc19;
  if ((uint *)(iVar8 + 0x92c) != auStack_18) {
    *(uint *)(iVar8 + 0x930) = 0;
    *(uint *)(iVar8 + 0x92c) = 0;
    *(uint *)(iVar8 + 0x934) = 0x3e4ccccd;
  }
  *(uint *)(iVar8 + 0x938) = 0;
  *(uint *)(iVar8 + 0x850) = 0;
  *(byte *)(iVar8 + 0x94c) = 0;
  *(byte *)(iVar8 + 0xa4b) = 0;
  *(byte *)(iVar8 + 0xb4a) = 0;
  *(byte *)(iVar8 + 0xc49) = 0;
  *(uint *)(iVar8 + 0xd4c) = 0x41200000;
  uVar9 = _DAT_005febf0;
  *(uint *)(iVar8 + 0xd48) = 0;
  pcVar10 = "bodyfall0?.wav";
  *(uint *)(iVar8 + 0xd54) = 0;
  pcVar11 = (char *)(iVar8 + 0xb4a);
  *(uint *)(iVar8 + 0x948) = uVar9;
  do {
    cVar2 = *pcVar10;
    *pcVar11 = cVar2;
    if (cVar2 == '\0') {
      return iVar1;
    }
    cVar2 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar11[1] = cVar2;
    pcVar11 = pcVar11 + 2;
  } while (cVar2 != '\0');
  return iVar1;
}
