// Name: core_set.cpp_CDemonSet_ctor_FUN_005690c0
// Address: 005690c0
// Address Range: [[005690c0, 0056934f]]
// Convention: __cdecl
// Signature: CDemonSet * __cdecl core_set_cpp_CDemonSet_ctor_FUN_005690c0(CDemonSet *this_ptr)

#include "nocturne.h"

CDemonSet * __cdecl core_set_cpp_CDemonSet_ctor_FUN_005690c0(CDemonSet *this_ptr)

{
  CDemonSet *this_ptr_00;
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  
  pvVar2 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (this_ptr->cameras,0xfa,&g_C3DSCameraTypeInfo);
  pvVar2 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)((int)pvVar2 + 0x19a2c),200,&g_C3DSLightTypeInfo);
  pvVar2 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)((int)pvVar2 + 0x141490),0x14,&g_SRoomTypeInfo);
  pvVar2 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)((int)pvVar2 + 0x554),0xfa,&g_SVDBoxTypeInfo);
  this_ptr_00 = (CDemonSet *)((int)pvVar2 + -0x15b414);
  this_ptr_00->camera_count = 0;
  *(uint *)((int)pvVar2 + -0x1419e8) = 0;
  *(uint *)((int)pvVar2 + -0x57c) = 0xffffffff;
  *(uint *)((int)pvVar2 + -0x578) = 0xffffffff;
  *(byte *)((int)pvVar2 + -0xe324) = 0;
  *(uint *)((int)pvVar2 + -0xe2c0) = 0;
  *(uint *)((int)pvVar2 + -0xc37c) = 0;
  *(uint *)((int)pvVar2 + -0xa438) = 0;
  *(uint *)((int)pvVar2 + -0x84f4) = 0;
  *(uint *)((int)pvVar2 + -0x65b0) = 0;
  *(uint *)((int)pvVar2 + 0x42d0) = 0;
  *(uint *)((int)pvVar2 + -0x466c) = 0;
  *(uint *)((int)pvVar2 + -0x2728) = 0;
  *(uint *)((int)pvVar2 + -0x574) = 1;
  *(uint *)((int)pvVar2 + -0x570) = 0xffffffff;
  *(uint *)((int)pvVar2 + -0x56c) = 0xffffffff;
  *(uint *)((int)pvVar2 + -0x568) = 0;
  *(uint *)((int)pvVar2 + -0x55c) = 0;
  *(uint *)((int)pvVar2 + -0x558) = 0;
  *(uint *)((int)pvVar2 + -0x794) = 0;
  *(uint *)((int)pvVar2 + -0x790) = 0;
  *(uint *)((int)pvVar2 + -0x788) = 0;
  pcVar3 = "none";
  *(uint *)((int)pvVar2 + -0x784) = 0;
  pcVar4 = (char *)((int)pvVar2 + -0x77c);
  *(uint *)((int)pvVar2 + -0x780) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(this_ptr_00);
  *(uint *)((int)pvVar2 + 0x42cc) = 0;
  *(uint *)((int)pvVar2 + -0x768) = 0;
  *(uint *)((int)pvVar2 + 17000) = 2;
  *(uint *)((int)pvVar2 + -0x560) = 0;
  *(uint *)((int)pvVar2 + -0x764) = 0;
  *(uint *)((int)pvVar2 + 0x6214) = 0;
  *(uint *)((int)pvVar2 + -0x760) = 0;
  *(uint *)((int)pvVar2 + 0x6240) = 0;
  *(uint *)((int)pvVar2 + -4) = 0;
  *(uint *)((int)pvVar2 + -0x58c) = 0x10000;
  *(uint *)((int)pvVar2 + -0x588) = 0x10000;
  pcVar3 = "none";
  *(uint *)((int)pvVar2 + -0x584) = 0x10000;
  *(uint *)((int)pvVar2 + 0x6244) = 0;
  pcVar4 = (char *)((int)pvVar2 + -0x5c4);
  *(uint *)((int)pvVar2 + -0x5c8) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)pvVar2 + -0x78c) = 0;
  *(uint *)((int)pvVar2 + -0x798) = 0;
  *(uint *)((int)pvVar2 + -0x5a4) = 0;
  *(uint *)((int)pvVar2 + -0x5a0) = 0xffff6f78;
  *(uint *)((int)pvVar2 + -0x59c) = 0xffff6f78;
  *(uint *)((int)pvVar2 + -0x598) = 37000;
  *(uint *)((int)pvVar2 + -0x594) = 0x280;
  *(uint *)((int)pvVar2 + -0x590) = 0;
  *(uint *)((int)pvVar2 + -0x79c) = 0;
  return this_ptr_00;
}
