// Name: core_vampboss.cpp_CVampireBoss_ctor_FUN_005e5590
// Address: 005e5590
// Address Range: [[005e5590, 005e56bf]]
// Convention: __cdecl
// Signature: CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_ctor_FUN_005e5590(CVampireBoss *this_ptr)

#include "nocturne.h"

CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_ctor_FUN_005e5590(CVampireBoss *this_ptr)

{
  CMorphModel *pCVar2;
  SMRGLTextureExtended *pSVar3;
  CVampireBoss *pCVar1;
  CDeformableModelInstance *pCVar4;
  CCloth *pCVar5;
  CMorph *pCVar6;
  
  pCVar1 = (CVampireBoss *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(&pCVar1->model);
  pCVar5 = core_cloth_cpp_CCloth_ctor_FUN_00438ba0((CCloth *)(pCVar4 + 1));
  pCVar5 = core_cloth_cpp_CCloth_ctor_FUN_00438ba0((CCloth *)(pCVar5[1].model.model_filename + 0xc))
  ;
  pCVar5 = core_cloth_cpp_CCloth_ctor_FUN_00438ba0((CCloth *)(pCVar5[1].model.model_filename + 0xc))
  ;
  pCVar6 = core_morph_cpp_CMorph_ctor_FUN_0052b310
                     ((CMorph *)(pCVar5[1].model.model_filename + 0x10));
  *(CDemonActor_vtable **)(pCVar6[-0x10f].models[1].textures[2].unknown + 0xc) =
       &g_CVampireBossVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(pCVar6[-0x10f].models[1].textures[2].unknown + 0x10),
             "nosfer.dfm");
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(pCVar6[-0xff].models[0].textures[4].unknown + 0x2c),
             "batboss.dfm");
  pSVar3 = pCVar6[-0x10b].models[0].textures + 9;
  (pSVar3->base).texture_name[4] = '\0';
  (pSVar3->base).texture_name[5] = '\0';
  (pSVar3->base).texture_name[6] = '\0';
  (pSVar3->base).texture_name[7] = '@';
  pSVar3 = pCVar6[-0x10b].models[0].textures + 9;
  (pSVar3->base).texture_name[8] = '\0';
  (pSVar3->base).texture_name[9] = '\0';
  (pSVar3->base).texture_name[10] = '@';
  (pSVar3->base).texture_name[0xb] = '@';
  pSVar3 = pCVar6[-0x10b].models[0].textures + 9;
  (pSVar3->base).texture_name[0xc] = '\0';
  (pSVar3->base).texture_name[0xd] = '\0';
  (pSVar3->base).texture_name[0xe] = 'H';
  (pSVar3->base).texture_name[0xf] = 'B';
  pCVar2 = pCVar6[-0x10b].models;
  pCVar2->textures[9].unknown[0] = '\0';
  pCVar2->textures[9].unknown[1] = '\0';
  pCVar2->textures[9].unknown[2] = -0x38;
  pCVar2->textures[9].unknown[3] = 'B';
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
  pSVar3 = pCVar6[-0x10c].models[1].textures;
  pSVar3[3].unknown[0x10] = '\0';
  pSVar3[3].unknown[0x11] = '\0';
  pSVar3[3].unknown[0x12] = '\0';
  pSVar3[3].unknown[0x13] = '\0';
  return (CVampireBoss *)(pCVar6[-0x10f].models[0].textures[0x13].base.texture_name + 8);
}
