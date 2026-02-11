// Name: core_succubus.cpp_CSuccubus_ctor_FUN_005c6a80
// Address: 005c6a80
// Address Range: [[005c6a80, 005c6b54]]
// Convention: __cdecl
// Signature: CSuccubus * __cdecl core_succubus_cpp_CSuccubus_ctor_FUN_005c6a80(CSuccubus *this_ptr)

#include "nocturne.h"

CSuccubus * __cdecl core_succubus_cpp_CSuccubus_ctor_FUN_005c6a80(CSuccubus *this_ptr)

{
  char cVar1;
  float fVar2;
  float fVar3;
  CEnemy *pCVar4;
  CDeformableModelInstance *pCVar5;
  CClothList *pCVar6;
  int extraout_EAX;
  char *pcVar7;
  char *pcVar8;
  
  pCVar4 = core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
                     ((CDeformableModelInstance *)(pCVar4 + 1));
  pCVar6 = core_cloth_cpp_CClothList_ctor_FUN_0043bf40((CClothList *)(pCVar5 + 1));
  core_morph_cpp_FUN_0052b310((CMorphModel *)(pCVar6[1].filenames[0] + 0xc));
  *(CDemonActor_vtable **)(extraout_EAX + -0xe1e8) = &g_CSuccubusVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(extraout_EAX + -0xe1e4),"succubus.dfm");
  pcVar7 = "hdwing.cth";
  pcVar8 = (char *)(extraout_EAX + -0x1c8);
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(extraout_EAX + -0x2480),"hotdemon.dfm");
  *(uint *)(extraout_EAX + -0xb560) = 0x3f19999a;
  fVar2 = 50.0f;
  *(uint *)(extraout_EAX + -0xb55c) = 0x3f666666;
  fVar3 = 100.0f;
  *(uint *)(extraout_EAX + -0x1cc) = 1;
  *(float *)(extraout_EAX + -0xb558) = fVar2;
  *(float *)(extraout_EAX + -0xb554) = fVar3;
  do {
    cVar1 = *pcVar7;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') {
      return (CSuccubus *)(extraout_EAX + -0xe33c);
    }
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  return (CSuccubus *)(extraout_EAX + -0xe33c);
}
