// Name: core_curtain.cpp_CCurtain_ctor_FUN_004496a0
// Address: 004496a0
// Address Range: [[004496a0, 00449801]]
// Convention: __cdecl
// Signature: CCurtain * __cdecl core_curtain_cpp_CCurtain_ctor_FUN_004496a0(CCurtain *this_ptr)

#include "nocturne.h"

CCurtain * __cdecl core_curtain_cpp_CCurtain_ctor_FUN_004496a0(CCurtain *this_ptr)

{
  char cVar1;
  CCurtain *pCVar2;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CCurtain *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pvVar2 = __arrinit(pCVar2->unk3,1000,&g_SCurtainVertexTypeInfo);
  *(CDemonActor_vtable **)((int)pvVar2 + -0xb4) = &g_CCurtainVTable;
  pcVar3 = "SGLASS.RAW";
  *(uint *)((int)pvVar2 + -0xb0) = 0x40800000;
  *(uint *)((int)pvVar2 + -0xac) = 0x40800000;
  pcVar4 = (char *)((int)pvVar2 + -0x9c);
  *(uint *)((int)pvVar2 + -0xa8) = 0x3dcccccd;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)pvVar2 + -0xa0) = 0;
  *(uint *)((int)pvVar2 + -0xa4) = 0xd;
  *(uint *)((int)pvVar2 + -0x8c) = 0x8000;
  *(uint *)((int)pvVar2 + -0x88) = 1;
  *(uint *)((int)pvVar2 + -0x7c) = 0;
  *(uint *)((int)pvVar2 + -0x80) = 0;
  pcVar3 = "none";
  *(uint *)((int)pvVar2 + -0x84) = 0;
  pcVar4 = (char *)((int)pvVar2 + -0x74);
  *(uint *)((int)pvVar2 + -0x78) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)pvVar2 + 0x6590c) = 0x3f800000;
  *(uint *)((int)pvVar2 + 0x65910) = 0x3f733333;
  *(uint *)((int)pvVar2 + 0x65914) = 0;
  *(uint *)((int)pvVar2 + 0x65918) = 0x3f000000;
  *(uint *)((int)pvVar2 + 0x6591c) = 0x42000000;
  *(uint *)((int)pvVar2 + 0x65924) = 0;
  *(uint *)((int)pvVar2 + 0x65928) = 0;
  *(uint *)((int)pvVar2 + -0x10) = 1;
  *(uint *)((int)pvVar2 + -0xc) = 0x3f000000;
  *(uint *)((int)pvVar2 + -8) = 1;
  *(uint *)((int)pvVar2 + 0x6592c) = 0;
  return (CCurtain *)((int)pvVar2 + -0x208);
}
