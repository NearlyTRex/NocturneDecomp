// Name: core_biggs.cpp_CBiggs_ctor_FUN_00414d10
// Address: 00414d10
// Address Range: [[00414d10, 00414dcc]]
// Convention: __cdecl
// Signature: CBiggs * __cdecl core_biggs_cpp_CBiggs_ctor_FUN_00414d10(CBiggs *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBiggs * __cdecl core_biggs_cpp_CBiggs_ctor_FUN_00414d10(CBiggs *this_ptr)

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
  
  pCVar6 = core_enemy_cpp_CEnemy_ctor_FUN_00487db0(&this_ptr->base);
  pCVar7 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                     ((CKeyFramedModelInstance *)(pCVar6 + 1));
  pCVar8 = core_morph_cpp_CMorph_ctor_FUN_005b6e60((CMorph *)(pCVar7[1].part_visibility_flags + 2));
  pCVar1 = (CBiggs *)(pCVar8[-0x17].models[1].textures[0x11].texture_name + 0x38);
  *(CEnemy_full_vtable **)(pCVar8[-0x16].models[0].textures[5].texture_name + 0x24) =
       &g_CBiggsVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)(pCVar8[-0x16].models[0].textures[5].texture_name + 0x28),
             (char *)0x5cbc8c);
  pcVar9 = "bigAlien";
  pCVar10 = pCVar8 + 1;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)(pCVar8[-1].models[1].textures + 0xf),
             "question.kfm");
  uVar4 = _DAT_005f3508;
  pSVar3 = pCVar8[-0x12].models[0].textures;
  pSVar3[8].texture_name[0x1c] = -0x66;
  uVar5 = _DAT_005f350c;
  pSVar3[8].texture_name[0x1d] = -0x67;
  pSVar3[8].texture_name[0x1e] = '\x19';
  pSVar3[8].texture_name[0x1f] = '?';
  pSVar3 = pCVar8[-0x12].models[0].textures;
  pSVar3[8].texture_name[0x20] = 'f';
  pSVar3[8].texture_name[0x21] = 'f';
  pSVar3[8].texture_name[0x22] = 'f';
  pSVar3[8].texture_name[0x23] = '?';
  *(uint *)(pCVar8[-0x12].models[0].textures[8].texture_name + 0x24) = uVar4;
  *(uint *)(pCVar8[-0x12].models[0].textures[8].texture_name + 0x28) = uVar5;
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
