// Name: core_biggs.cpp_CBiggs_ctor_FUN_004149f0
// Address: 004149f0
// Address Range: [[004149f0, 00414aac]]
// Convention: __cdecl
// Signature: CBiggs * __cdecl core_biggs_cpp_CBiggs_ctor_FUN_004149f0(CBiggs *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBiggs * __cdecl core_biggs_cpp_CBiggs_ctor_FUN_004149f0(CBiggs *this_ptr)

{
  CBiggs *pCVar1;
  char cVar2;
  SMRGLTextureModel *pSVar3;
  uint uVar4;
  uint uVar5;
  CEnemy *pCVar6;
  CKeyFramedModelInstance *pCVar7;
  CMorph *pCVar8;
  char *pcVar9;
  CMorph *pCVar10;
  
  pCVar6 = core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  pCVar7 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860
                     ((CKeyFramedModelInstance *)(pCVar6 + 1));
  pCVar8 = core_morph_cpp_CMorph_ctor_FUN_00522fa0((CMorph *)(pCVar7[1].part_visibility_flags + 2));
  pCVar1 = (CBiggs *)(pCVar8[-0x11].models[1].textures[0x10].texture_name + 8);
  pCVar8[-0x10].models[0].parts[2].face_count = (int)&g_CBiggsVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)&pCVar8[-0x10].models[0].parts[2].start_vertex,
             (char *)0x5d3c07);
  pcVar9 = "bigAlien";
  pCVar10 = pCVar8 + 1;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)(pCVar8[-1].models[1].textures + 0xf),
             "question.kfm");
  uVar4 = _DAT_005fc5b8;
  pSVar3 = pCVar8[-0xd].models[1].textures;
  pSVar3[0xd].texture_name[0x1c] = -0x66;
  uVar5 = _DAT_005fc5bc;
  pSVar3[0xd].texture_name[0x1d] = -0x67;
  pSVar3[0xd].texture_name[0x1e] = '\x19';
  pSVar3[0xd].texture_name[0x1f] = '?';
  pSVar3 = pCVar8[-0xd].models[1].textures;
  pSVar3[0xd].texture_name[0x20] = 'f';
  pSVar3[0xd].texture_name[0x21] = 'f';
  pSVar3[0xd].texture_name[0x22] = 'f';
  pSVar3[0xd].texture_name[0x23] = '?';
  *(uint *)(pCVar8[-0xd].models[1].textures[0xd].texture_name + 0x24) = uVar4;
  *(uint *)(pCVar8[-0xd].models[1].textures[0xd].texture_name + 0x28) = uVar5;
  do {
    cVar2 = *pcVar9;
    *(char *)&pCVar10->models[0].part_count = cVar2;
    if (cVar2 == '\0') {
      return pCVar1;
    }
    cVar2 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    *(char *)((int)&pCVar10->models[0].part_count + 1) = cVar2;
    pCVar10 = (CMorph *)((int)&pCVar10->models[0].part_count + 2);
  } while (cVar2 != '\0');
  return pCVar1;
}
