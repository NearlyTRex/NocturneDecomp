// Name: core_vampboss.cpp_CVampireBoss_ctor_FUN_0054c2b0
// Address: 0054c2b0
// Address Range: [[0054c2b0, 0054c3df]]
// Convention: __cdecl
// Signature: CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_ctor_FUN_0054c2b0(CVampireBoss *this_ptr)

#include "nocturne.h"

CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_ctor_FUN_0054c2b0(CVampireBoss *this_ptr)

{
  SMRGLTextureLod *pSVar1;
  SMRGLTextureBasic *pSVar2;
  CEnemy *pCVar3;
  CDeformableModelInstance *pCVar4;
  CCloth *pCVar5;
  CMorph *pCVar6;
  
  pCVar3 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(&this_ptr->base);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0051b660
                     ((CDeformableModelInstance *)(pCVar3 + 1));
  pCVar5 = core_cloth_cpp_CCloth_ctor_FUN_00435100((CCloth *)(pCVar4 + 1));
  pCVar5 = core_cloth_cpp_CCloth_ctor_FUN_00435100
                     ((CCloth *)(pCVar5->vertices[0x300].connected_indices + 9));
  pCVar5 = core_cloth_cpp_CCloth_ctor_FUN_00435100
                     ((CCloth *)(pCVar5->vertices[0x300].connected_indices + 9));
  pCVar6 = core_morph_cpp_CMorph_ctor_FUN_004e0050
                     ((CMorph *)(pCVar5->vertices[0x300].connected_indices + 10));
  pCVar6[-0xfa].models[0].textures[8].textures[2].base.type =
       (int)&PTR_core_vampboss_cpp_FUN_0054c3e0_005a3a94;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (&pCVar6[-0xfa].models[0].textures[8].textures[2].base.count,"nosfer.dfm");
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (pCVar6[-0xeb].models[1].textures[5].textures[2].texture_name + 0xc,
             "batboss.dfm");
  pCVar6[-0xf7].models[1].textures[0xf].textures[2].base.count = 0x40000000;
  pSVar1 = pCVar6[-0xf7].models[1].textures + 0xf;
  pSVar1->textures[2].texture_name[0] = '\0';
  pSVar1->textures[2].texture_name[1] = '\0';
  pSVar1->textures[2].texture_name[2] = '@';
  pSVar1->textures[2].texture_name[3] = '@';
  pSVar2 = pCVar6[-0xf7].models[1].textures[0xf].textures;
  pSVar2[2].texture_name[4] = '\0';
  pSVar2[2].texture_name[5] = '\0';
  pSVar2[2].texture_name[6] = 'H';
  pSVar2[2].texture_name[7] = 'B';
  pSVar2 = pCVar6[-0xf7].models[1].textures[0xf].textures;
  pSVar2[2].texture_name[8] = '\0';
  pSVar2[2].texture_name[9] = '\0';
  pSVar2[2].texture_name[10] = -0x38;
  pSVar2[2].texture_name[0xb] = 'B';
  pCVar6[1].models[0].parts[0].vertex_count = 0;
  pCVar6[-1].rescale_enabled = 0;
  pCVar6[1].models[0].part_count = 0;
  pCVar6[1].models[0].parts[1].start_vertex = 0;
  pCVar6[1].models[0].parts[1].start_face = 0;
  pCVar6[1].models[0].parts[2].vertex_count = 0;
  pCVar6[1].models[0].parts[2].face_count = 0;
  pCVar6[1].models[0].parts[1].face_count = 0;
  pCVar6[1].models[0].parts[2].start_vertex = 0;
  pCVar6[1].models[0].parts[0].face_count = 0x41200000;
  pCVar6[1].models[0].parts[1].vertex_count = 1;
  pCVar6[-0xf7].models[0].textures[9].textures[2].base.count = 0;
  return (CVampireBoss *)&pCVar6[-0xfa].models[0].textures[4].textures[0].base.count;
}
