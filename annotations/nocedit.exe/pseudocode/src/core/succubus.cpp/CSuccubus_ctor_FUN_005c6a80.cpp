// Name: core_succubus.cpp_CSuccubus_ctor_FUN_005c6a80
// Address: 005c6a80
// Address Range: [[005c6a80, 005c6b54]]
// Convention: __cdecl
// Signature: CSuccubus * core_succubus.cpp_CSuccubus_ctor_FUN_005c6a80(CSuccubus * this_ptr)

#include "nocturne.h"

CSuccubus * __cdecl core_succubus_cpp_CSuccubus_ctor_FUN_005c6a80(CSuccubus *this_ptr)

{
  char cVar1;
  float fVar2;
  float fVar3;
  CEnemy *pCVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar4 = core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
            ((CDeformableModelInstance *)(pCVar4[1].base.base.actor_name + 8));
  core_cloth_cpp_FUN_0043bf40();
  iVar5 = core_morph_cpp_FUN_0052b310();
  *(CDemonActor_vtable **)(iVar5 + -0xe1e8) = &g_CSuccubusVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(iVar5 + -0xe1e4),"succubus.dfm");
  pcVar6 = "hdwing.cth";
  pcVar7 = (char *)(iVar5 + -0x1c8);
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(iVar5 + -0x2480),"hotdemon.dfm");
  *(uint *)(iVar5 + -0xb560) = 0x3f19999a;
  fVar2 = 50.0f;
  *(uint *)(iVar5 + -0xb55c) = 0x3f666666;
  fVar3 = 100.0f;
  *(uint *)(iVar5 + -0x1cc) = 1;
  *(float *)(iVar5 + -0xb558) = fVar2;
  *(float *)(iVar5 + -0xb554) = fVar3;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') {
      return (CSuccubus *)(iVar5 + -0xe33c);
    }
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  return (CSuccubus *)(iVar5 + -0xe33c);
}
