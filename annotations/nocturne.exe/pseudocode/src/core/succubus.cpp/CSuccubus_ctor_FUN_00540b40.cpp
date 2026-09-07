// Name: core_succubus.cpp_CSuccubus_ctor_FUN_00540b40
// Address: 00540b40
// Address Range: [[00540b40, 00540c14]]
// Convention: __cdecl
// Signature: CSuccubus * __cdecl core_succubus_cpp_CSuccubus_ctor_FUN_00540b40(CSuccubus *this_ptr)

#include "nocturne.h"

CSuccubus * __cdecl core_succubus_cpp_CSuccubus_ctor_FUN_00540b40(CSuccubus *this_ptr)

{
  CSuccubus *pCVar1;
  char cVar2;
  SMRGLTextureModel *pSVar3;
  float fVar4;
  float fVar5;
  CEnemy *pCVar6;
  CDeformableModelInstance *pCVar7;
  CClothList *pCVar8;
  CMorph *pCVar9;
  char *pcVar10;
  int *piVar11;
  
  pCVar6 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(&this_ptr->base);
  pCVar7 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0051b660
                     ((CDeformableModelInstance *)(pCVar6 + 1));
  pCVar8 = core_cloth_cpp_CClothList_ctor_FUN_00438210((CClothList *)(pCVar7 + 1));
  pCVar9 = core_morph_cpp_CMorph_ctor_FUN_004e0050((CMorph *)(pCVar8[1].filenames[0] + 0xc));
  pCVar1 = (CSuccubus *)(pCVar9[-0x13].models[0].textures[0x12].texture_name + 0x20);
  *(CEnemy_full_vtable **)(pCVar9[-0x13].models[1].textures[1].texture_name + 0x2c) =
       &g_CSuccubusVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            ((CDeformableModelInstance *)(pCVar9[-0x13].models[1].textures[1].texture_name + 0x30),
             "succubus.dfm");
  pcVar10 = "hdwing.cth";
  piVar11 = &pCVar9[-1].models[1].textures[0xe].base.count;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            ((CDeformableModelInstance *)pCVar9[-3].models[0].parts,"hotdemon.dfm");
  pSVar3 = pCVar9[-0xf].models[0].textures;
  pSVar3[8].texture_name[0x14] = -0x66;
  fVar4 = 50.0f;
  pSVar3[8].texture_name[0x15] = -0x67;
  pSVar3[8].texture_name[0x16] = '\x19';
  pSVar3[8].texture_name[0x17] = '?';
  pSVar3 = pCVar9[-0xf].models[0].textures;
  pSVar3[8].texture_name[0x18] = 'f';
  fVar5 = 100.0f;
  pSVar3[8].texture_name[0x19] = 'f';
  pSVar3[8].texture_name[0x1a] = 'f';
  pSVar3[8].texture_name[0x1b] = '?';
  pCVar9[-1].models[1].textures[0xe].base.type = 1;
  *(float *)(pCVar9[-0xf].models[0].textures[8].texture_name + 0x1c) = fVar4;
  *(float *)(pCVar9[-0xf].models[0].textures[8].texture_name + 0x20) = fVar5;
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
