// Name: core_litecone.cpp_CLightCone_ctor_FUN_00502d70
// Address: 00502d70
// Address Range: [[00502d70, 00502e01]]
// Convention: __cdecl
// Signature: CLightCone * __cdecl core_litecone_cpp_CLightCone_ctor_FUN_00502d70(CLightCone *this_ptr)

#include "nocturne.h"

CLightCone * __cdecl core_litecone_cpp_CLightCone_ctor_FUN_00502d70(CLightCone *this_ptr)

{
  char cVar1;
  CLightCone *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CLightCone *)core_actor_cpp_CDemonActor_ctor_FUN_004085c0((CDemonActor *)this_ptr);
  *(byte **)&pCVar2->field_0x154 = &g_CLightConeVTable;
  pcVar3 = "none";
  *(uint *)&pCVar2->field_0x158 = 0x42600000;
  *(uint *)&pCVar2->field_0x15c = 0x40c00000;
  *(uint *)&pCVar2->field_0xfc = 1;
  pcVar4 = &pCVar2->field_0x164;
  *(uint *)&pCVar2->field_0x160 = 1;
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
  pcVar4 = &pCVar2->field_0x1c8;
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
