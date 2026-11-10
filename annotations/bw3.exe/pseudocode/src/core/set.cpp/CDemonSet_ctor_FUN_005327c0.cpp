// Name: core_set.cpp_CDemonSet_ctor_FUN_005327c0
// Address: 005327c0
// Address Range: [[005327c0, 00532afe]]
// Convention: unknown
// Signature: CDemonSet * core_set_cpp_CDemonSet_ctor_FUN_005327c0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDemonSet * core_set_cpp_CDemonSet_ctor_FUN_005327c0(CDemonSet *this_ptr)

{
  CDemonSet *this_ptr_00;
  float *pfVar1;
  char cVar2;
  float fVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar4 = __arrinit(this_ptr->cameras,0xfa,&g_C3DSCameraTypeInfo);
  iVar4 = __arrinit(iVar4 + 0x19a2c,200,&g_C3DSLightTypeInfo);
  iVar4 = __arrinit(iVar4 + 0x1414a8,0x14,&g_SRoomTypeInfo);
  iVar4 = __arrinit(iVar4 + 0x554,0xfa,&g_SVDBoxTypeInfo);
  this_ptr_00 = (CDemonSet *)(iVar4 + -0x15b42c);
  this_ptr_00->camera_count = 0;
  *(uint *)(iVar4 + -0x141a00) = 0;
  *(uint *)(iVar4 + -0x580) = 0xffffffff;
  *(uint *)(iVar4 + -0x57c) = 0xffffffff;
  *(byte *)(iVar4 + -0xe33c) = 0;
  *(uint *)(iVar4 + -0xe2c8) = 0;
  *(uint *)(iVar4 + -0xc384) = 0;
  *(uint *)(iVar4 + -0xa440) = 0;
  *(uint *)(iVar4 + -0x84fc) = 0;
  *(uint *)(iVar4 + -0x65b8) = 0;
  *(uint *)(iVar4 + 0x42d0) = 0;
  *(uint *)(iVar4 + -0x4674) = 0;
  *(uint *)(iVar4 + -0x2730) = 0;
  *(uint *)(iVar4 + -0x578) = 1;
  *(uint *)(iVar4 + -0x574) = 0xffffffff;
  *(uint *)(iVar4 + -0x570) = 0xffffffff;
  *(uint *)(iVar4 + -0x56c) = 0;
  *(uint *)(iVar4 + -0x55c) = 0;
  *(uint *)(iVar4 + -0x558) = 0;
  *(uint *)(iVar4 + -0x79c) = 0;
  *(uint *)(iVar4 + -0x798) = 0;
  *(uint *)(iVar4 + -0x790) = 0;
  pcVar5 = "@none" + 1;
  *(uint *)(iVar4 + -0x78c) = 0;
  pcVar6 = (char *)(iVar4 + -0x784);
  *(uint *)(iVar4 + -0x788) = 0;
  do {
    cVar2 = *pcVar5;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(this_ptr_00);
  *(uint *)(iVar4 + 0x42cc) = 0;
  *(uint *)(iVar4 + -0x76c) = 0;
  *(uint *)(iVar4 + 17000) = 2;
  *(uint *)(iVar4 + -0x560) = 0;
  *(uint *)(iVar4 + -0x768) = 0;
  *(uint *)(iVar4 + 0x6214) = 0;
  *(uint *)(iVar4 + -0x764) = 0;
  *(uint *)(iVar4 + 0x6240) = 0;
  *(uint *)(iVar4 + -4) = 0;
  *(uint *)(iVar4 + -0x590) = 0x10000;
  *(uint *)(iVar4 + -0x58c) = 0x10000;
  pcVar5 = (char *)0x5d011c;
  *(uint *)(iVar4 + -0x588) = 0x10000;
  *(uint *)(iVar4 + 0x6244) = 0;
  pcVar6 = (char *)(iVar4 + -0x5c8);
  *(uint *)(iVar4 + -0x5cc) = 0;
  do {
    cVar2 = *pcVar5;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  *(uint *)(iVar4 + -0x794) = 0;
  *(uint *)(iVar4 + -0x7a0) = 0;
  *(uint *)(iVar4 + -0x5a8) = 0;
  *(uint *)(iVar4 + -0x5a4) = 0xffff6f78;
  *(uint *)(iVar4 + -0x5a0) = 0xffff6f78;
  *(uint *)(iVar4 + -0x59c) = 37000;
  *(uint *)(iVar4 + -0x598) = 0x280;
  *(uint *)(iVar4 + -0x594) = 0;
  *(uint *)(iVar4 + -0x7a4) = 0;
  *(uint *)(iVar4 + -0x770) = 0;
  *(uint *)(iVar4 + -0xe2d8) = 0xbf800000;
  *(uint *)(iVar4 + -0xe2d4) = 0xbf800000;
  pfVar1 = (float *)(iVar4 + -0xe2d8);
  *(uint *)(iVar4 + -0xe2d0) = 0xbf800000;
  fVar3 = SQRT(*(float *)(iVar4 + -0xe2d0) * *(float *)(iVar4 + -0xe2d0) +
               *pfVar1 * *pfVar1 + *(float *)(iVar4 + -0xe2d4) * *(float *)(iVar4 + -0xe2d4));
  if (0.0 < fVar3) {
    fVar3 = 1.0 / fVar3;
    *pfVar1 = *pfVar1 * fVar3;
    *(float *)(iVar4 + -0xe2d4) = *(float *)(iVar4 + -0xe2d4) * fVar3;
    *(float *)(iVar4 + -0xe2d0) = *(float *)(iVar4 + -0xe2d0) * fVar3;
    *(uint *)(iVar4 + -0xe2cc) = 0;
    return this_ptr_00;
  }
  *(uint *)(iVar4 + -0xe2d0) = 0;
  *(uint *)(iVar4 + -0xe2d4) = *(uint *)(iVar4 + -0xe2d0);
  *pfVar1 = *(float *)(iVar4 + -0xe2d4);
  *(uint *)(iVar4 + -0xe2cc) = 0;
  return this_ptr_00;
}
