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
  CChain_ptr_652 pvVar2;
  char *pcVar2;
  char *pcVar3;
  
  pCVar2 = (CChain *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pvVar2 = __arrinit(pCVar2->vertices,0x14,&g_SChainVertexTypeInfo);
  ADJ(pvVar2)->base.vtable._ub = &g_CChainVTable;
  ADJ(pvVar2)->vertex_count = 10;
  ADJ(pvVar2)->chain_length = 5.0;
  ADJ(pvVar2)->weight = 1.0;
  ADJ(pvVar2)->friction = 0.5;
  ADJ(pvVar2)->gravity = 32.0;
  pcVar2 = "CHAINLINK.RAW";
  ADJ(pvVar2)->dampen = 0.9;
  ADJ(pvVar2)->target = (CDemonActor *)0x0;
  pcVar3 = ADJ(pvVar2)->texture_name;
  ADJ(pvVar2)->target_bone = 0;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  ADJ(pvVar2)->texture_size = 0xd;
  ADJ(pvVar2)->texture_handle = 0;
  pcVar2 = "chain-pull.wav";
  ADJ(pvVar2)->base.is_transparent = 1;
  pcVar3 = ADJ(pvVar2)->pull_wav_name;
  ADJ(pvVar2)->base.is_renderable = 0;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar2 = "chain-move.wav";
  pcVar3 = ADJ(pvVar2)->move_wav_name;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  ADJ(pvVar2)->is_visible = 0;
  ADJ(pvVar2)->ground_collide_flag = 1;
  return ADJ(pvVar2);
}
