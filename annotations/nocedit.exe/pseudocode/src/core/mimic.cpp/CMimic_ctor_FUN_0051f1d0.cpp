// Name: core_mimic.cpp_CMimic_ctor_FUN_0051f1d0
// Address: 0051f1d0
// Address Range: [[0051f1d0, 0051f2b6]]
// Convention: __cdecl
// Signature: CMimic * core_mimic.cpp_CMimic_ctor_FUN_0051f1d0(CMimic * this_ptr)

#include "nocturne.h"

CMimic * __cdecl core_mimic_cpp_CMimic_ctor_FUN_0051f1d0(CMimic *this_ptr)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  core_cloth_cpp_FUN_00438ba0();
  iVar4 = core_morph_cpp_FUN_0052b310();
  *(CDemonActor_vtable **)(iVar4 + -0x4bcd0) = &g_CMimicVTable;
  *(uint *)(iVar4 + -0x49048) = 0x3f000000;
  pcVar5 = "CGhoul";
  *(uint *)(iVar4 + -0x49044) = 0x3f800000;
  fVar2 = 50.0f;
  *(byte *)(iVar4 + -0x3ff68) = 0;
  fVar3 = 100.0f;
  *(byte *)(iVar4 + -0x3ff04) = 0;
  *(float *)(iVar4 + -0x49040) = fVar2;
  *(float *)(iVar4 + -0x4903c) = fVar3;
  *(uint *)(iVar4 + -0x30) = 0;
  pcVar6 = (char *)(iVar4 + -0x28);
  *(uint *)(iVar4 + -0x2c) = 0;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar4 + 0xc30) = 0;
  *(uint *)(iVar4 + 0xc2c) = 0xbf800000;
  *(uint *)(iVar4 + -0x4bd1c) = 0x10000;
  *(uint *)(iVar4 + -0x4bd18) = 0x10000;
  *(uint *)(iVar4 + -0x4bd14) = 0x10000;
  return (CMimic *)(iVar4 + -0x4be24);
}
