// Name: core_chain.cpp_CChain_ctor_FUN_005b4720
// Address: 005b4720
// Address Range: [[005b4720, 005b4853]]
// Convention: __cdecl
// Signature: CChain * __cdecl core_chain_cpp_CChain_ctor_FUN_005b4720(CChain *this_ptr)

#include "nocturne.h"

CChain * __cdecl core_chain_cpp_CChain_ctor_FUN_005b4720(CChain *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_00408790((CDemonActor *)this_ptr);
  iVar3 = __arrinit(&pCVar2->field_0x28c,0x14,&g_SChainVertexTypeInfo);
  *(byte **)(iVar3 + -0x138) = &g_CChainVTable;
  *(uint *)(iVar3 + -0x134) = 10;
  *(uint *)(iVar3 + -0x130) = 0x40a00000;
  *(uint *)(iVar3 + 0x2d0) = 0x3f800000;
  *(uint *)(iVar3 + 0x2d4) = 0x3f000000;
  *(uint *)(iVar3 + 0x2d8) = 0x42000000;
  pcVar4 = "CHAINLINK.RAW";
  *(uint *)(iVar3 + 0x2dc) = 0x3f666666;
  *(uint *)(iVar3 + -0x128) = 0;
  pcVar5 = (char *)(iVar3 + -0x118);
  *(uint *)(iVar3 + -0x124) = 0;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar3 + -0x120) = 0xd;
  *(uint *)(iVar3 + -0x11c) = 0;
  pcVar4 = "chain-pull.wav";
  *(uint *)(iVar3 + -400) = 1;
  pcVar5 = (char *)(iVar3 + -0xd8);
  *(uint *)(iVar3 + -0x194) = 0;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = "chain-move.wav";
  pcVar5 = (char *)(iVar3 + -0x70);
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar3 + 0x2e8) = 0;
  *(uint *)(iVar3 + -4) = 1;
  return (CChain *)(iVar3 + -0x28c);
}
