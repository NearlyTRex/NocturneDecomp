// Name: core_styler.cpp_CStyler_ctor_FUN_0059d750
// Address: 0059d750
// Address Range: [[0059d750, 0059d7ed]]
// Convention: unknown
// Signature: CStyler * core_styler_cpp_CStyler_ctor_FUN_0059d750(CStyler *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CStyler * core_styler_cpp_CStyler_ctor_FUN_0059d750(CStyler *this_ptr)

{
  SMRGLTextureModel *pSVar1;
  uint uVar2;
  uint uVar3;
  CEnemy *pCVar4;
  CCloth *pCVar5;
  CMorph *pCVar6;
  
  pCVar4 = core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  pCVar5 = core_cloth_cpp_CCloth_ctor_FUN_0043c220((CCloth *)(pCVar4 + 1));
  pCVar6 = core_morph_cpp_CMorph_ctor_FUN_004fa8a0
                     ((CMorph *)(pCVar5[1].model.model_filename + 0x14));
  *(CEnemy_full_vtable **)(pCVar6[-0x5f].models[1].textures[0xc].texture_name + 0x38) =
       &g_CStylerVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)(pCVar6[-0x5f].models[1].textures[0xc].texture_name + 0x3c)
             ,"bwp_stylersub.dfm");
  pSVar1 = pCVar6[-0x5b].models[1].textures;
  pSVar1[0xe].texture_name[0x10] = '\0';
  pSVar1[0xe].texture_name[0x11] = '\0';
  pSVar1[0xe].texture_name[0x12] = '@';
  pSVar1[0xe].texture_name[0x13] = '?';
  pSVar1 = pCVar6[-0x5b].models[1].textures;
  pSVar1[0xe].texture_name[0x14] = '\0';
  uVar2 = _DAT_005e8348;
  pSVar1[0xe].texture_name[0x15] = '\0';
  pSVar1[0xe].texture_name[0x16] = -0x40;
  pSVar1[0xe].texture_name[0x17] = '?';
  pCVar6[-0xffffffff00000001].dead[0x10] = '\0';
  uVar3 = _DAT_005e834c;
  pCVar6[-0xffffffff00000001].dead[0x11] = '\0';
  pCVar6[-0xffffffff00000001].dead[0x12] = '\0';
  pCVar6[-0xffffffff00000001].dead[0x13] = '\0';
  pCVar6[-1].rescale_enabled = 0;
  pCVar6[-0xffffffff00000001].dead[0x14] = '\0';
  pCVar6[-0xffffffff00000001].dead[0x15] = '\0';
  pCVar6[-0xffffffff00000001].dead[0x16] = '\0';
  pCVar6[-0xffffffff00000001].dead[0x17] = '\0';
  *(uint *)(pCVar6[-0x5b].models[1].textures[0xe].texture_name + 0x18) = uVar2;
  *(uint *)(pCVar6[-0x5b].models[1].textures[0xe].texture_name + 0x1c) = uVar3;
  return (CStyler *)(pCVar6[-0x5f].models[1].textures[8].texture_name + 4);
}
