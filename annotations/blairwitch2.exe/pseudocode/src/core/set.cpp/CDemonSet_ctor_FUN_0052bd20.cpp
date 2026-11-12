// Name: core_set.cpp_CDemonSet_ctor_FUN_0052bd20
// Address: 0052bd20
// Address Range: [[0052bd20, 0052c05e]]
// Convention: unknown
// Signature: CDemonSet * core_set_cpp_CDemonSet_ctor_FUN_0052bd20(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDemonSet * core_set_cpp_CDemonSet_ctor_FUN_0052bd20(CDemonSet *this_ptr)

{
  CDemonSet *this_ptr_00;
  float *pfVar1;
  char cVar2;
  float fVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  
  pvVar4 = __arrinit(this_ptr->cameras,0xfa,&g_C3DSCameraTypeInfo);
  pvVar4 = __arrinit
                     ((void *)((int)pvVar4 + 0x19a2c),200,&g_C3DSLightTypeInfo);
  pvVar4 = __arrinit
                     ((void *)((int)pvVar4 + 0x1414a4),0x14,&g_SRoomTypeInfo);
  pvVar4 = __arrinit((void *)((int)pvVar4 + 0x554),0xfa,&g_SVDBoxTypeInfo)
  ;
  this_ptr_00 = (CDemonSet *)((int)pvVar4 + -0x15b428);
  this_ptr_00->camera_count = 0;
  *(uint *)((int)pvVar4 + -0x1419fc) = 0;
  *(uint *)((int)pvVar4 + -0x57c) = 0xffffffff;
  *(uint *)((int)pvVar4 + -0x578) = 0xffffffff;
  *(byte *)((int)pvVar4 + -0xe338) = 0;
  *(uint *)((int)pvVar4 + -0xe2c4) = 0;
  *(uint *)((int)pvVar4 + -0xc380) = 0;
  *(uint *)((int)pvVar4 + -0xa43c) = 0;
  *(uint *)((int)pvVar4 + -0x84f8) = 0;
  *(uint *)((int)pvVar4 + -0x65b4) = 0;
  *(uint *)((int)pvVar4 + 0x42d0) = 0;
  *(uint *)((int)pvVar4 + -0x4670) = 0;
  *(uint *)((int)pvVar4 + -0x272c) = 0;
  *(uint *)((int)pvVar4 + -0x574) = 1;
  *(uint *)((int)pvVar4 + -0x570) = 0xffffffff;
  *(uint *)((int)pvVar4 + -0x56c) = 0xffffffff;
  *(uint *)((int)pvVar4 + -0x568) = 0;
  *(uint *)((int)pvVar4 + -0x55c) = 0;
  *(uint *)((int)pvVar4 + -0x558) = 0;
  *(uint *)((int)pvVar4 + -0x798) = 0;
  *(uint *)((int)pvVar4 + -0x794) = 0;
  *(uint *)((int)pvVar4 + -0x78c) = 0;
  pcVar5 = (char *)0x5e5456;
  *(uint *)((int)pvVar4 + -0x788) = 0;
  pcVar6 = (char *)((int)pvVar4 + -0x780);
  *(uint *)((int)pvVar4 + -0x784) = 0;
  do {
    cVar2 = *pcVar5;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(this_ptr_00);
  *(uint *)((int)pvVar4 + 0x42cc) = 0;
  *(uint *)((int)pvVar4 + -0x768) = 0;
  *(uint *)((int)pvVar4 + 17000) = 2;
  *(uint *)((int)pvVar4 + -0x560) = 0;
  *(uint *)((int)pvVar4 + -0x764) = 0;
  *(uint *)((int)pvVar4 + 0x6214) = 0;
  *(uint *)((int)pvVar4 + -0x760) = 0;
  *(uint *)((int)pvVar4 + 0x6240) = 0;
  *(uint *)((int)pvVar4 + -4) = 0;
  *(uint *)((int)pvVar4 + -0x58c) = 0x10000;
  *(uint *)((int)pvVar4 + -0x588) = 0x10000;
  pcVar5 = (char *)0x5e545b;
  *(uint *)((int)pvVar4 + -0x584) = 0x10000;
  *(uint *)((int)pvVar4 + 0x6244) = 0;
  pcVar6 = (char *)((int)pvVar4 + -0x5c4);
  *(uint *)((int)pvVar4 + -0x5c8) = 0;
  do {
    cVar2 = *pcVar5;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  *(uint *)((int)pvVar4 + -0x790) = 0;
  *(uint *)((int)pvVar4 + -0x79c) = 0;
  *(uint *)((int)pvVar4 + -0x5a4) = 0;
  *(uint *)((int)pvVar4 + -0x5a0) = 0xffff6f78;
  *(uint *)((int)pvVar4 + -0x59c) = 0xffff6f78;
  *(uint *)((int)pvVar4 + -0x598) = 37000;
  *(uint *)((int)pvVar4 + -0x594) = 0x280;
  *(uint *)((int)pvVar4 + -0x590) = 0;
  *(uint *)((int)pvVar4 + -0x7a0) = 0;
  *(uint *)((int)pvVar4 + -0x76c) = 0;
  *(uint *)((int)pvVar4 + -0xe2d4) = 0xbf800000;
  *(uint *)((int)pvVar4 + -0xe2d0) = 0xbf800000;
  pfVar1 = (float *)((int)pvVar4 + -0xe2d4);
  *(uint *)((int)pvVar4 + -0xe2cc) = 0xbf800000;
  fVar3 = SQRT(*(float *)((int)pvVar4 + -0xe2cc) * *(float *)((int)pvVar4 + -0xe2cc) +
               *pfVar1 * *pfVar1 +
               *(float *)((int)pvVar4 + -0xe2d0) * *(float *)((int)pvVar4 + -0xe2d0));
  if (0.0 < fVar3) {
    fVar3 = 1.0 / fVar3;
    *pfVar1 = *pfVar1 * fVar3;
    *(float *)((int)pvVar4 + -0xe2d0) = *(float *)((int)pvVar4 + -0xe2d0) * fVar3;
    *(float *)((int)pvVar4 + -0xe2cc) = *(float *)((int)pvVar4 + -0xe2cc) * fVar3;
    *(uint *)((int)pvVar4 + -0xe2c8) = 0;
    return this_ptr_00;
  }
  *(uint *)((int)pvVar4 + -0xe2cc) = 0;
  *(uint *)((int)pvVar4 + -0xe2d0) = *(uint *)((int)pvVar4 + -0xe2cc);
  *pfVar1 = *(float *)((int)pvVar4 + -0xe2d0);
  *(uint *)((int)pvVar4 + -0xe2c8) = 0;
  return this_ptr_00;
}
