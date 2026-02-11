// Name: core_mimic.cpp_CMimic_ctor_FUN_0051f1d0
// Address: 0051f1d0
// Address Range: [[0051f1d0, 0051f2b6]]
// Convention: __cdecl
// Signature: CMimic * __cdecl core_mimic_cpp_CMimic_ctor_FUN_0051f1d0(CMimic *this_ptr)

#include "nocturne.h"

CMimic * __cdecl core_mimic_cpp_CMimic_ctor_FUN_0051f1d0(CMimic *this_ptr)

{
  char cVar1;
  float fVar2;
  float fVar3;
  CEnemy *pCVar4;
  CCloth *pCVar5;
  int extraout_EAX;
  char *pcVar6;
  char *pcVar7;
  
  pCVar4 = core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  pCVar5 = core_cloth_cpp_CCloth_ctor_FUN_00438ba0
                     ((CCloth *)(pCVar4[1].base.base.create_event + 0x50));
  core_morph_cpp_FUN_0052b310((CMorphModel *)(pCVar5[1].model.model_filename + 0x3c));
  *(CDemonActor_vtable **)(extraout_EAX + -0x4bcd0) = &g_CMimicVTable;
  *(uint *)(extraout_EAX + -0x49048) = 0x3f000000;
  pcVar6 = "CGhoul";
  *(uint *)(extraout_EAX + -0x49044) = 0x3f800000;
  fVar2 = 50.0f;
  *(byte *)(extraout_EAX + -0x3ff68) = 0;
  fVar3 = 100.0f;
  *(byte *)(extraout_EAX + -0x3ff04) = 0;
  *(float *)(extraout_EAX + -0x49040) = fVar2;
  *(float *)(extraout_EAX + -0x4903c) = fVar3;
  *(uint *)(extraout_EAX + -0x30) = 0;
  pcVar7 = (char *)(extraout_EAX + -0x28);
  *(uint *)(extraout_EAX + -0x2c) = 0;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  *(uint *)(extraout_EAX + 0xc30) = 0;
  *(uint *)(extraout_EAX + 0xc2c) = 0xbf800000;
  *(uint *)(extraout_EAX + -0x4bd1c) = 0x10000;
  *(uint *)(extraout_EAX + -0x4bd18) = 0x10000;
  *(uint *)(extraout_EAX + -0x4bd14) = 0x10000;
  return (CMimic *)(extraout_EAX + -0x4be24);
}
