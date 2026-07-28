// Name: core_succubus.cpp_FUN_00540b40
// Address: 00540b40
// Address Range: [[00540b40, 00540c14]]
// Convention: unknown
// Signature: char * core_succubus_cpp_FUN_00540b40(CEnemy *param_1)

#include "nocturne.h"

char * core_succubus_cpp_FUN_00540b40(CEnemy *param_1)

{
  char *pcVar1;
  char cVar2;
  SMRGLTextureLod *pSVar3;
  float fVar4;
  float fVar5;
  CEnemy *pCVar6;
  CDeformableModelInstance *pCVar7;
  CClothList *pCVar8;
  CMorph *pCVar9;
  char *pcVar10;
  int *piVar11;
  
  pCVar6 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  pCVar7 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0051b660
                     ((CDeformableModelInstance *)(pCVar6 + 1));
  pCVar8 = core_cloth_cpp_CClothList_ctor_FUN_00438210((CClothList *)(pCVar7 + 1));
  pCVar9 = core_morph_cpp_CMorph_ctor_FUN_004e0050((CMorph *)(pCVar8[1].filenames[0] + 0xc));
  pcVar1 = pCVar9[-0x13].models[0].textures[0x12].textures[1].texture_name + 8;
  pCVar9[-0x13].models[1].textures[1].textures[2].base.count =
       (int)&PTR_core_succubus_cpp_FUN_00540c20_005a28e4;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (pCVar9[-0x13].models[1].textures[1].textures[2].texture_name,"succubus.dfm");
  pcVar10 = "hdwing.cth";
  piVar11 = &pCVar9[-1].models[1].textures[0xe].textures[0].base.count;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (pCVar9[-3].models[0].parts,"hotdemon.dfm");
  pCVar9[-0xf].models[0].textures[8].textures[1].base.count = 0x3f19999a;
  fVar4 = 50.0f;
  pSVar3 = pCVar9[-0xf].models[0].textures + 8;
  pSVar3->textures[1].texture_name[0] = 'f';
  fVar5 = 100.0f;
  pSVar3->textures[1].texture_name[1] = 'f';
  pSVar3->textures[1].texture_name[2] = 'f';
  pSVar3->textures[1].texture_name[3] = '?';
  pCVar9[-1].models[1].textures[0xe].textures[0].base.type = 1;
  *(float *)(pCVar9[-0xf].models[0].textures[8].textures[1].texture_name + 4) = fVar4;
  *(float *)(pCVar9[-0xf].models[0].textures[8].textures[1].texture_name + 8) = fVar5;
  do {
    cVar2 = *pcVar10;
    *(char *)piVar11 = cVar2;
    if (cVar2 == '\0') {
      return pcVar1;
    }
    cVar2 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    *(char *)((int)piVar11 + 1) = cVar2;
    piVar11 = (int *)((int)piVar11 + 2);
  } while (cVar2 != '\0');
  return pcVar1;
}
