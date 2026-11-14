// Name: core_vampboss.cpp_CVampireBoss_ctor_FUN_005a5170
// Address: 005a5170
// Address Range: [[005a5170, 005a529f]]
// Convention: __cdecl
// Signature: CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_ctor_FUN_005a5170(CVampireBoss *this_ptr)

#include "nocturne.h"

CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_ctor_FUN_005a5170(CVampireBoss *this_ptr)

{
  CMorphModel *pCVar1;
  SMRGLTextureModel *pSVar2;
  CEnemy *pCVar3;
  CDeformableModelInstance *pCVar4;
  CCloth *pCVar5;
  CMorph *pCVar6;
  
  pCVar3 = core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00567370
                     ((CDeformableModelInstance *)(pCVar3 + 1));
  pCVar5 = core_cloth_cpp_CCloth_ctor_FUN_0043e5c0((CCloth *)(pCVar4 + 1));
  pCVar5 = core_cloth_cpp_CCloth_ctor_FUN_0043e5c0(pCVar5 + 1);
  pCVar5 = core_cloth_cpp_CCloth_ctor_FUN_0043e5c0(pCVar5 + 1);
  pCVar6 = core_morph_cpp_CMorph_ctor_FUN_00522fa0((CMorph *)(pCVar5[1].model.model_filename + 4));
  *(CEnemy_full_vtable **)(pCVar6[-0xfb].models[1].textures[8].texture_name + 0x20) =
       &g_CVampireBossVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)(pCVar6[-0xfb].models[1].textures[8].texture_name + 0x24),
             (char *)0x5f8ced);
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)(pCVar6[-0xeb].models[1].textures[2].texture_name + 0x24),
             "batboss.dfm");
  pCVar1 = pCVar6[-0xf7].models + 1;
  pCVar1->textures[1].texture_name[0] = '\0';
  pCVar1->textures[1].texture_name[1] = '\0';
  pCVar1->textures[1].texture_name[2] = '\0';
  pCVar1->textures[1].texture_name[3] = '@';
  pSVar2 = pCVar6[-0xf7].models[1].textures;
  pSVar2[1].texture_name[4] = '\0';
  pSVar2[1].texture_name[5] = '\0';
  pSVar2[1].texture_name[6] = '@';
  pSVar2[1].texture_name[7] = '@';
  pSVar2 = pCVar6[-0xf7].models[1].textures;
  pSVar2[1].texture_name[8] = '\0';
  pSVar2[1].texture_name[9] = '\0';
  pSVar2[1].texture_name[10] = 'H';
  pSVar2[1].texture_name[0xb] = 'B';
  pSVar2 = pCVar6[-0xf7].models[1].textures;
  pSVar2[1].texture_name[0xc] = '\0';
  pSVar2[1].texture_name[0xd] = '\0';
  pSVar2[1].texture_name[0xe] = -0x38;
  pSVar2[1].texture_name[0xf] = 'B';
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
  pSVar2 = pCVar6[-0xf8].models[1].textures;
  pSVar2[0xf].texture_name[0x10] = '\0';
  pSVar2[0xf].texture_name[0x11] = '\0';
  pSVar2[0xf].texture_name[0x12] = '\0';
  pSVar2[0xf].texture_name[0x13] = '\0';
  return (CVampireBoss *)(pCVar6[-0xfb].models[1].textures[3].texture_name + 0x34);
}
