// Name: core_curtain.cpp_CCurtain_ctor_FUN_0043d960
// Address: 0043d960
// Address Range: [[0043d960, 0043dac1]]
// Convention: __cdecl
// Signature: CCurtain * __cdecl core_curtain_cpp_CCurtain_ctor_FUN_0043d960(CCurtain *this_ptr)

#include "nocturne.h"

CCurtain * __cdecl core_curtain_cpp_CCurtain_ctor_FUN_0043d960(CCurtain *this_ptr)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar2 = core_actor_cpp_FUN_00409d30(this_ptr);
  pvVar3 = __arrinit
                     ((void *)(iVar2 + 0x200),1000,&g_SCurtainVertexTypeInfo_0059bd90);
  *(byte ***)((int)pvVar3 + -0xb4) = &PTR_core_curtain_cpp_FUN_0043dad0_0059bc94;
  pcVar4 = "SGLASS.RAW";
  *(uint *)((int)pvVar3 + -0xb0) = 0x40800000;
  *(uint *)((int)pvVar3 + -0xac) = 0x40800000;
  pcVar5 = (char *)((int)pvVar3 + -0x9c);
  *(uint *)((int)pvVar3 + -0xa8) = 0x3dcccccd;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)pvVar3 + -0xa0) = 0;
  *(uint *)((int)pvVar3 + -0xa4) = 0xd;
  *(uint *)((int)pvVar3 + -0x8c) = 0x8000;
  *(uint *)((int)pvVar3 + -0x88) = 1;
  *(uint *)((int)pvVar3 + -0x7c) = 0;
  *(uint *)((int)pvVar3 + -0x80) = 0;
  pcVar4 = "none";
  *(uint *)((int)pvVar3 + -0x84) = 0;
  pcVar5 = (char *)((int)pvVar3 + -0x74);
  *(uint *)((int)pvVar3 + -0x78) = 0;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)pvVar3 + 0x6590c) = 0x3f800000;
  *(uint *)((int)pvVar3 + 0x65910) = 0x3f733333;
  *(uint *)((int)pvVar3 + 0x65914) = 0;
  *(uint *)((int)pvVar3 + 0x65918) = 0x3f000000;
  *(uint *)((int)pvVar3 + 0x6591c) = 0x42000000;
  *(uint *)((int)pvVar3 + 0x65924) = 0;
  *(uint *)((int)pvVar3 + 0x65928) = 0;
  *(uint *)((int)pvVar3 + -0x10) = 1;
  *(uint *)((int)pvVar3 + -0xc) = 0x3f000000;
  *(uint *)((int)pvVar3 + -8) = 1;
  *(uint *)((int)pvVar3 + 0x6592c) = 0;
  return (CCurtain *)((int)pvVar3 + -0x200);
}
