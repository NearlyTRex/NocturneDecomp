// Name: core_charactr.cpp_CCharacter_ctor_FUN_00423f40
// Address: 00423f40
// Address Range: [[00423f40, 0042425c]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_ctor_FUN_00423f40(undefined4 param_1)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_ctor_FUN_00423f40(uint param_1)

{
  int iVar1;
  int iVar2;
  uint local_c [3];
  int iVar3;
  
  iVar1 = FUN_00409d30(param_1);
  iVar1 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0051b660(iVar1 + 0x150);
  iVar1 = core_cloth_cpp_CClothList_ctor_FUN_00438210(iVar1 + 0x293c);
  iVar1 = __arrinit(iVar1 + 0x1c8,0xf,&DAT_005993b0);
  iVar1 = __arrinit(iVar1 + 0xb4,0xf,&DAT_005993b0);
  iVar1 = __arrinit(iVar1 + 0x20c,0x32,&DAT_00599960);
  iVar1 = __arrinit(iVar1 + 0x4b0,0x32,&DAT_00599940);
  *(byte ***)(iVar1 + -0x3278) = &PTR_core_charactr_cpp_CCharacter_setup_FUN_00424260_0059b0a4;
  *(uint *)(iVar1 + -0xfc0) = 0;
  *(uint *)(iVar1 + -0xf9c) = 0;
  *(uint *)(iVar1 + -4000) = *(uint *)(iVar1 + -0xf9c);
  *(uint *)(iVar1 + -0xfa4) = *(uint *)(iVar1 + -4000);
  *(uint *)(iVar1 + -0xf8c) = 0x42c80000;
  *(uint *)(iVar1 + -0x5f0) = 0x3f800000;
  *(uint *)(iVar1 + -0x5ec) = 0x40000000;
  *(uint *)(iVar1 + -0x5e8) = 0x41a00000;
  *(uint *)(iVar1 + -0x5e4) = 0x42480000;
  *(uint *)(iVar1 + -0x5e0) = 0x40000000;
  *(uint *)(iVar1 + -0x5dc) = 0xc479c000;
  *(uint *)(iVar1 + -0x5d8) = 0;
  *(uint *)(iVar1 + -0x4bc) = 0;
  *(uint *)(iVar1 + -0x4b4) = 0x40000000;
  *(uint *)(iVar1 + -0xe04) = 0xffffffff;
  *(uint *)(iVar1 + -0xe08) = 0xffffffff;
  *(uint *)(iVar1 + -0x5f4) = 0;
  *(uint *)(iVar1 + -0xe1c) = 0;
  *(uint *)(iVar1 + -0xe2c) = 0;
  *(uint *)(iVar1 + -0xe28) = 0x40400000;
  *(uint *)(iVar1 + -0xe24) = 0x7149f2ca;
  *(uint *)(iVar1 + -0xe20) = 0xbf800000;
  *(uint *)(iVar1 + -0xe18) = 0;
  *(uint *)(iVar1 + -0xf90) = 0x42c80000;
  if ((uint *)(iVar1 + -0xe14) != local_c) {
    *(uint *)(iVar1 + -0xe14) = 0;
    *(uint *)(iVar1 + -0xe10) = 0;
    *(uint *)(iVar1 + -0xe0c) = 0x40000000;
  }
  *(uint *)(iVar1 + -0xde4) = 0;
  *(uint *)(iVar1 + -0xde0) = 0;
  *(uint *)(iVar1 + -0xddc) = 0;
  *(uint *)(iVar1 + -0xdd8) = 0;
  *(uint *)(iVar1 + -0xde8) = 0xffffffff;
  iVar3 = iVar1 + -0x33c4;
  do {
    iVar2 = iVar3 + 0x44;
    *(uint *)(iVar3 + 0x24a4) = 0xffffffff;
    *(uint *)(iVar3 + 0x24a8) = 0xffffffff;
    *(uint *)(iVar3 + 0x24ac) = 0;
    iVar3 = iVar2;
  } while (iVar2 != iVar1 + -0x333c);
  *(uint *)(iVar1 + -0xdf4) = 0;
  *(uint *)(iVar1 + -0xdf0) = 0;
  *(uint *)(iVar1 + -0xdec) = 0;
  *(uint *)(iVar1 + -0xdfc) = 0;
  *(uint *)(iVar1 + -0xdf8) = 0;
  *(uint *)(iVar1 + -0xdbc) = 0;
  *(uint *)(iVar1 + 0x827c) = 0;
  *(uint *)(iVar1 + -0xdb8) = 0;
  *(uint *)(iVar1 + -0xe34) = 0;
  *(uint *)(iVar1 + -0xe30) = 0;
  *(uint *)(iVar1 + -0xdb4) = 0;
  *(uint *)(iVar1 + 0x8284) = 0;
  *(uint *)(iVar1 + -0xdb0) = 0x3f800000;
  *(uint *)(iVar1 + -0xdac) = 0;
  *(uint *)(iVar1 + -0xda4) = 0;
  *(uint *)(iVar1 + -0x940) = 0;
  *(uint *)(iVar1 + -0x93c) = 0;
  *(uint *)(iVar1 + -0xda8) = 1;
  *(uint *)(iVar1 + -0xf88) = 0;
  *(byte *)(iVar1 + -0xf84) = 0;
  *(uint *)(iVar1 + -0x77c) = 0;
  *(uint *)(iVar1 + -0x778) = 0;
  *(uint *)(iVar1 + -0x774) = 0;
  *(uint *)(iVar1 + -0x608) = 0;
  *(uint *)(iVar1 + -0x5f8) = 0;
  *(byte *)(iVar1 + -0xe98) = 0;
  return iVar1 + -0x33c4;
}
