// Name: core_litecone.cpp_CLightCone_ctor_FUN_00506b10
// Address: 00506b10
// Address Range: [[00506b10, 00506ba1]]
// Convention: __cdecl
// Signature: CLightCone * core_litecone.cpp_CLightCone_ctor_FUN_00506b10(CLightCone * this_ptr)

#include "nocturne.h"

CLightCone * __cdecl core_litecone_cpp_CLightCone_ctor_FUN_00506b10(CLightCone *this_ptr)

{
  char cVar1;
  CLightCone *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CLightCone *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  (pCVar2->base).vtable._ub = &g_CLightConeVTable;
  pcVar3 = "none";
  pCVar2->unk[0] = '\0';
  pCVar2->unk[1] = '\0';
  pCVar2->unk[2] = '`';
  pCVar2->unk[3] = 'B';
  pCVar2->unk[4] = '\0';
  pCVar2->unk[5] = '\0';
  pCVar2->unk[6] = -0x40;
  pCVar2->unk[7] = '@';
  (pCVar2->base).is_transparent = 1;
  pcVar4 = pCVar2->unk + 0xc;
  pCVar2->unk[8] = '\x01';
  pCVar2->unk[9] = '\0';
  pCVar2->unk[10] = '\0';
  pCVar2->unk[0xb] = '\0';
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "none";
  pcVar4 = pCVar2->unk + 0x70;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return pCVar2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return pCVar2;
}
