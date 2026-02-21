// Name: core_chain.cpp_CChain_ctor_FUN_0042fb80
// Address: 0042fb80
// Address Range: [[0042fb80, 0042fcb3]]
// Convention: __cdecl
// Signature: CChain * __cdecl core_chain_cpp_CChain_ctor_FUN_0042fb80(CChain *this_ptr)

#include "nocturne.h"

CChain * __cdecl core_chain_cpp_CChain_ctor_FUN_0042fb80(CChain *this_ptr)

{
  char cVar1;
  CChain *pCVar2;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CChain *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pvVar2 = __arrinit(pCVar2->vertices,0x14,&g_SChainVertexTypeInfo);
  *(CDemonActor_vtable **)((int)pvVar2 + -0x138) = &g_CChainVTable;
  *(uint *)((int)pvVar2 + -0x134) = 10;
  *(uint *)((int)pvVar2 + -0x130) = 0x40a00000;
  *(uint *)((int)pvVar2 + 0x2d0) = 0x3f800000;
  *(uint *)((int)pvVar2 + 0x2d4) = 0x3f000000;
  *(uint *)((int)pvVar2 + 0x2d8) = 0x42000000;
  pcVar3 = "CHAINLINK.RAW";
  *(uint *)((int)pvVar2 + 0x2dc) = 0x3f666666;
  *(uint *)((int)pvVar2 + -0x128) = 0;
  pcVar4 = (char *)((int)pvVar2 + -0x118);
  *(uint *)((int)pvVar2 + -0x124) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)pvVar2 + -0x120) = 0xd;
  *(uint *)((int)pvVar2 + -0x11c) = 0;
  pcVar3 = "chain-pull.wav";
  *(uint *)((int)pvVar2 + -400) = 1;
  pcVar4 = (char *)((int)pvVar2 + -0xd8);
  *(uint *)((int)pvVar2 + -0x194) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "chain-move.wav";
  pcVar4 = (char *)((int)pvVar2 + -0x70);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)pvVar2 + 0x2e8) = 0;
  *(uint *)((int)pvVar2 + -4) = 1;
  return (CChain *)((int)pvVar2 + -0x28c);
}
