// Name: core_vampboss.cpp_CVampireBoss_ctor_FUN_0054c2b0
// Address: 0054c2b0
// Address Range: [[0054c2b0, 0054c3df]]
// Convention: __cdecl
// Signature: CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_ctor_FUN_0054c2b0(CVampireBoss *this_ptr)

#include "nocturne.h"

CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_ctor_FUN_0054c2b0(CVampireBoss *this_ptr)

{
  SMRGLTextureModel *pSVar1;
  CEnemy *pCVar2;
  CDeformableModelInstance *pCVar3;
  CCloth *pCVar4;
  CMorph *pCVar5;
  
  pCVar2 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(&this_ptr->base);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0051b660
                     ((CDeformableModelInstance *)(pCVar2 + 1));
  pCVar4 = core_cloth_cpp_CCloth_ctor_FUN_00435100((CCloth *)(pCVar3 + 1));
  pCVar4 = core_cloth_cpp_CCloth_ctor_FUN_00435100(pCVar4 + 1);
  pCVar4 = core_cloth_cpp_CCloth_ctor_FUN_00435100(pCVar4 + 1);
  pCVar5 = core_morph_cpp_CMorph_ctor_FUN_004e0050((CMorph *)(pCVar4[1].model.model_filename + 4));
  *(CEnemy_full_vtable **)(pCVar5[-0xfa].models[0].textures[8].texture_name + 0x28) =
       &g_CVampireBossVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            ((CDeformableModelInstance *)(pCVar5[-0xfa].models[0].textures[8].texture_name + 0x2c),
             "nosfer.dfm");
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            ((CDeformableModelInstance *)(pCVar5[-0xeb].models[1].textures[5].texture_name + 0x3c),
             "batboss.dfm");
  pSVar1 = pCVar5[-0xf7].models[1].textures;
  pSVar1[0xf].texture_name[0x2c] = '\0';
  pSVar1[0xf].texture_name[0x2d] = '\0';
  pSVar1[0xf].texture_name[0x2e] = '\0';
  pSVar1[0xf].texture_name[0x2f] = '@';
  pSVar1 = pCVar5[-0xf7].models[1].textures;
  pSVar1[0xf].texture_name[0x30] = '\0';
  pSVar1[0xf].texture_name[0x31] = '\0';
  pSVar1[0xf].texture_name[0x32] = '@';
  pSVar1[0xf].texture_name[0x33] = '@';
  pSVar1 = pCVar5[-0xf7].models[1].textures;
  pSVar1[0xf].texture_name[0x34] = '\0';
  pSVar1[0xf].texture_name[0x35] = '\0';
  pSVar1[0xf].texture_name[0x36] = 'H';
  pSVar1[0xf].texture_name[0x37] = 'B';
  pSVar1 = pCVar5[-0xf7].models[1].textures;
  pSVar1[0xf].texture_name[0x38] = '\0';
  pSVar1[0xf].texture_name[0x39] = '\0';
  pSVar1[0xf].texture_name[0x3a] = -0x38;
  pSVar1[0xf].texture_name[0x3b] = 'B';
  pCVar5[1].models[0].parts[0].vertex_count = 0;
  pCVar5[-1].rescale_enabled = 0;
  pCVar5[1].models[0].part_count = 0;
  pCVar5[1].models[0].parts[1].start_vertex = 0;
  pCVar5[1].models[0].parts[1].start_face = 0;
  pCVar5[1].models[0].parts[2].vertex_count = 0;
  pCVar5[1].models[0].parts[2].face_count = 0;
  pCVar5[1].models[0].parts[1].face_count = 0;
  pCVar5[1].models[0].parts[2].start_vertex = 0;
  pCVar5[1].models[0].parts[0].face_count = 0x41200000;
  pCVar5[1].models[0].parts[1].vertex_count = 1;
  pSVar1 = pCVar5[-0xf7].models[0].textures;
  pSVar1[9].texture_name[0x2c] = '\0';
  pSVar1[9].texture_name[0x2d] = '\0';
  pSVar1[9].texture_name[0x2e] = '\0';
  pSVar1[9].texture_name[0x2f] = '\0';
  return (CVampireBoss *)&pCVar5[-0xfa].models[0].textures[4].base.count;
}
