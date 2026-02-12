// Name: core_succubus.cpp_CSuccubus_ctor_FUN_005c6a80
// Address: 005c6a80
// Address Range: [[005c6a80, 005c6b54]]
// Convention: __cdecl
// Signature: CSuccubus * __cdecl core_succubus_cpp_CSuccubus_ctor_FUN_005c6a80(CSuccubus *this_ptr)

#include "nocturne.h"

CSuccubus * __cdecl core_succubus_cpp_CSuccubus_ctor_FUN_005c6a80(CSuccubus *this_ptr)

{
  CSuccubus *pCVar1;
  char cVar2;
  SMRGLTextureExtended *pSVar3;
  float fVar4;
  float fVar5;
  CEnemy *pCVar6;
  CDeformableModelInstance *pCVar7;
  CClothList *pCVar8;
  CMorph *pCVar9;
  char *pcVar10;
  int *piVar11;
  
  pCVar6 = core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  pCVar7 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
                     ((CDeformableModelInstance *)(pCVar6 + 1));
  pCVar8 = core_cloth_cpp_CClothList_ctor_FUN_0043bf40((CClothList *)(pCVar7 + 1));
  pCVar9 = core_morph_cpp_CMorph_ctor_FUN_0052b310((CMorph *)(pCVar8[1].filenames[0] + 0xc));
  pCVar1 = (CSuccubus *)(pCVar9[-0x13].models[0].textures[0xc].unknown + 0x28);
  *(CDemonActor_vtable **)(pCVar9[-0x13].models[0].textures[0x11].unknown + 0x14) =
       &g_CSuccubusVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(pCVar9[-0x13].models[0].textures[0x11].unknown + 0x18),
             "succubus.dfm");
  pcVar10 = "hdwing.cth";
  piVar11 = &pCVar9[-1].models[1].textures[0xe].base.base.count;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)pCVar9[-3].models[0].parts,"hotdemon.dfm");
  pSVar3 = pCVar9[-0xf].models[0].textures;
  pSVar3[2].unknown[0x24] = -0x66;
  fVar4 = 50.0f;
  pSVar3[2].unknown[0x25] = -0x67;
  pSVar3[2].unknown[0x26] = '\x19';
  pSVar3[2].unknown[0x27] = '?';
  pSVar3 = pCVar9[-0xf].models[0].textures;
  pSVar3[2].unknown[0x28] = 'f';
  fVar5 = 100.0f;
  pSVar3[2].unknown[0x29] = 'f';
  pSVar3[2].unknown[0x2a] = 'f';
  pSVar3[2].unknown[0x2b] = '?';
  pCVar9[-1].models[1].textures[0xe].base.base.type = 1;
  *(float *)(pCVar9[-0xf].models[0].textures[2].unknown + 0x2c) = fVar4;
  pCVar9[-0xf].models[0].textures[3].base.base.type = (int)fVar5;
  do {
    cVar2 = *pcVar10;
    *(char *)piVar11 = cVar2;
    if (cVar2 == '\0') {
      return pCVar1;
    }
    cVar2 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    *(char *)((int)piVar11 + 1) = cVar2;
    piVar11 = (int *)((int)piVar11 + 2);
  } while (cVar2 != '\0');
  return pCVar1;
}
