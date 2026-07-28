// Name: core_biggs.cpp_CBiggs_ctor_FUN_00415370
// Address: 00415370
// Address Range: [[00415370, 0041542c]]
// Convention: __cdecl
// Signature: CBiggs * __cdecl core_biggs_cpp_CBiggs_ctor_FUN_00415370(CBiggs *this_ptr)

#include "nocturne.h"

CBiggs * __cdecl core_biggs_cpp_CBiggs_ctor_FUN_00415370(CBiggs *this_ptr)

{
  char *pcVar1;
  char cVar2;
  SMRGLTextureBasic *pSVar3;
  float fVar4;
  float fVar5;
  CEnemy *pCVar6;
  CKeyFramedModelInstance *pCVar7;
  CMorph *pCVar8;
  char *pcVar9;
  CMorph *pCVar10;
  
  pCVar6 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(&this_ptr->base);
  pCVar7 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                     ((CKeyFramedModelInstance *)(pCVar6 + 1));
  pCVar8 = core_morph_cpp_CMorph_ctor_FUN_004e0050((CMorph *)(pCVar7[1].part_visibility_flags + 2));
  pcVar1 = pCVar8[-0x10].models[0].textures[0xd].textures[0].texture_name;
  pCVar8[-0x10].models[0].textures[0x11].textures[2].base.count =
       (int)&PTR_core_biggs_cpp_FUN_00415430_0059a5b4;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (pCVar8[-0x10].models[0].textures[0x11].textures[2].texture_name,"biggs.dfm");
  pcVar9 = "bigAlien";
  pCVar10 = pCVar8 + 1;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            ((CKeyFramedModelInstance *)(pCVar8[-1].models[1].textures + 0xf),
             "question.kfm");
  fVar4 = 50.0f;
  pSVar3 = pCVar8[-0xc].models[0].textures[2].textures;
  pSVar3[2].texture_name[0xc] = -0x66;
  fVar5 = 100.0f;
  pSVar3[2].texture_name[0xd] = -0x67;
  pSVar3[2].texture_name[0xe] = '\x19';
  pSVar3[2].texture_name[0xf] = '?';
  pCVar8[-0xc].models[0].textures[3].textures[0].base.type = 0x3f666666;
  pCVar8[-0xc].models[0].textures[3].textures[0].base.count = (int)fVar4;
  *(float *)pCVar8[-0xc].models[0].textures[3].textures[0].texture_name = fVar5;
  do {
    cVar2 = *pcVar9;
    *(char *)&pCVar10->models[0].part_count = cVar2;
    if (cVar2 == '\0') {
      return (CBiggs *)pcVar1;
    }
    cVar2 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    *(char *)((int)&pCVar10->models[0].part_count + 1) = cVar2;
    pCVar10 = (CMorph *)((int)&pCVar10->models[0].part_count + 2);
  } while (cVar2 != '\0');
  return (CBiggs *)pcVar1;
}
