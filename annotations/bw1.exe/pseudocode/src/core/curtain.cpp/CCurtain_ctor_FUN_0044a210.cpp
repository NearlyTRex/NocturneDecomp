// Name: core_curtain.cpp_CCurtain_ctor_FUN_0044a210
// Address: 0044a210
// Address Range: [[0044a210, 0044a371]]
// Convention: __cdecl
// Signature: CCurtain * __cdecl core_curtain_cpp_CCurtain_ctor_FUN_0044a210(CCurtain *this_ptr)

#include "nocturne.h"

CCurtain * __cdecl core_curtain_cpp_CCurtain_ctor_FUN_0044a210(CCurtain *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004085c0((CDemonActor *)this_ptr);
  iVar3 = __arrinit(&pCVar2[1].field_0xb0,1000,&g_SCurtainVertexTypeInfo);
  *(byte **)(iVar3 + -0xb4) = &g_CCurtainVTable;
  pcVar4 = "SGLASS.RAW";
  *(uint *)(iVar3 + -0xb0) = 0x40800000;
  *(uint *)(iVar3 + -0xac) = 0x40800000;
  pcVar5 = (char *)(iVar3 + -0x9c);
  *(uint *)(iVar3 + -0xa8) = 0x3dcccccd;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar3 + -0xa0) = 0;
  *(uint *)(iVar3 + -0xa4) = 0xd;
  *(uint *)(iVar3 + -0x8c) = 0x8000;
  *(uint *)(iVar3 + -0x88) = 1;
  *(uint *)(iVar3 + -0x7c) = 0;
  *(uint *)(iVar3 + -0x80) = 0;
  pcVar4 = (char *)0x5d73d6;
  *(uint *)(iVar3 + -0x84) = 0;
  pcVar5 = (char *)(iVar3 + -0x74);
  *(uint *)(iVar3 + -0x78) = 0;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar3 + 0x6590c) = 0x3f800000;
  *(uint *)(iVar3 + 0x65910) = 0x3f733333;
  *(uint *)(iVar3 + 0x65914) = 0;
  *(uint *)(iVar3 + 0x65918) = 0x3f000000;
  *(uint *)(iVar3 + 0x6591c) = 0x42000000;
  *(uint *)(iVar3 + 0x65924) = 0;
  *(uint *)(iVar3 + 0x65928) = 0;
  *(uint *)(iVar3 + -0x10) = 1;
  *(uint *)(iVar3 + -0xc) = 0x3f000000;
  *(uint *)(iVar3 + -8) = 1;
  *(uint *)(iVar3 + 0x6592c) = 0;
  return (CCurtain *)(iVar3 + -0x208);
}
