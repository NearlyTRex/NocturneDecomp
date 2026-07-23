// Name: core_set.cpp_CDemonSet_ctor_FUN_00506bc0
// Address: 00506bc0
// Address Range: [[00506bc0, 00506e4f]]
// Convention: unknown
// Signature: undefined4 * core_set_cpp_CDemonSet_ctor_FUN_00506bc0(int param_1)

#include "nocturne.h"

uint * core_set_cpp_CDemonSet_ctor_FUN_00506bc0(int param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar3 = __arrinit(param_1 + 4,0xfa,&DAT_005a1970);
  iVar3 = __arrinit(iVar3 + 0x19644,200,&DAT_005a1990);
  iVar3 = __arrinit(iVar3 + 0x141490,0x14,&DAT_005a19b0);
  iVar3 = __arrinit(iVar3 + 0x554,0xfa,&DAT_005a19d0);
  puVar1 = (uint *)(iVar3 + -0x15b02c);
  *puVar1 = 0;
  *(uint *)(iVar3 + -0x1419e8) = 0;
  *(uint *)(iVar3 + -0x57c) = 0xffffffff;
  *(uint *)(iVar3 + -0x578) = 0xffffffff;
  *(byte *)(iVar3 + -0xe324) = 0;
  *(uint *)(iVar3 + -0xe2c0) = 0;
  *(uint *)(iVar3 + -0xc37c) = 0;
  *(uint *)(iVar3 + -0xa438) = 0;
  *(uint *)(iVar3 + -0x84f4) = 0;
  *(uint *)(iVar3 + -0x65b0) = 0;
  *(uint *)(iVar3 + 0x42d0) = 0;
  *(uint *)(iVar3 + -0x466c) = 0;
  *(uint *)(iVar3 + -0x2728) = 0;
  *(uint *)(iVar3 + -0x574) = 1;
  *(uint *)(iVar3 + -0x570) = 0xffffffff;
  *(uint *)(iVar3 + -0x56c) = 0xffffffff;
  *(uint *)(iVar3 + -0x568) = 0;
  *(uint *)(iVar3 + -0x55c) = 0;
  *(uint *)(iVar3 + -0x558) = 0;
  *(uint *)(iVar3 + -0x794) = 0;
  *(uint *)(iVar3 + -0x790) = 0;
  *(uint *)(iVar3 + -0x788) = 0;
  pcVar4 = "none";
  *(uint *)(iVar3 + -0x784) = 0;
  pcVar5 = (char *)(iVar3 + -0x77c);
  *(uint *)(iVar3 + -0x780) = 0;
  do {
    cVar2 = *pcVar4;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(puVar1);
  *(uint *)(iVar3 + 0x42cc) = 0;
  *(uint *)(iVar3 + -0x768) = 0;
  *(uint *)(iVar3 + 17000) = 2;
  *(uint *)(iVar3 + -0x560) = 0;
  *(uint *)(iVar3 + -0x764) = 0;
  *(uint *)(iVar3 + 0x6214) = 0;
  *(uint *)(iVar3 + -0x760) = 0;
  *(uint *)(iVar3 + 0x6240) = 0;
  *(uint *)(iVar3 + -4) = 0;
  *(uint *)(iVar3 + -0x58c) = 0x10000;
  *(uint *)(iVar3 + -0x588) = 0x10000;
  pcVar4 = "none";
  *(uint *)(iVar3 + -0x584) = 0x10000;
  *(uint *)(iVar3 + 0x6244) = 0;
  pcVar5 = (char *)(iVar3 + -0x5c4);
  *(uint *)(iVar3 + -0x5c8) = 0;
  do {
    cVar2 = *pcVar4;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  *(uint *)(iVar3 + -0x78c) = 0;
  *(uint *)(iVar3 + -0x798) = 0;
  *(uint *)(iVar3 + -0x5a4) = 0;
  *(uint *)(iVar3 + -0x5a0) = 0xffff6f78;
  *(uint *)(iVar3 + -0x59c) = 0xffff6f78;
  *(uint *)(iVar3 + -0x598) = 37000;
  *(uint *)(iVar3 + -0x594) = 0x280;
  *(uint *)(iVar3 + -0x590) = 0;
  *(uint *)(iVar3 + -0x79c) = 0;
  return puVar1;
}
