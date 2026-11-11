// Name: core_spirbear.cpp_CSpiritBear_ctor_FUN_0059aaa0
// Address: 0059aaa0
// Address Range: [[0059aaa0, 0059ab9e]]
// Convention: unknown
// Signature: CSpiritBear * core_spirbear_cpp_CSpiritBear_ctor_FUN_0059aaa0(CSpiritBear *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSpiritBear * core_spirbear_cpp_CSpiritBear_ctor_FUN_0059aaa0(CSpiritBear *this_ptr)

{
  char cVar1;
  SMRGLTextureModel *pSVar2;
  CNPC *pCVar3;
  CPathMap *pCVar4;
  CClothList *pCVar5;
  CMorph *pCVar6;
  float fVar7;
  char *pcVar8;
  SMRGLTextureModel *pSVar9;
  
  pCVar3 = core_npc_cpp_CNPC_ctor_FUN_00508f40(&this_ptr->base);
  pCVar4 = core_path_cpp_CPathMap_ctor_FUN_0050acc0((CPathMap *)(pCVar3 + 1));
  pCVar5 = core_cloth_cpp_CClothList_ctor_FUN_0043f8c0((CClothList *)(pCVar4 + 1));
  pCVar6 = core_morph_cpp_CMorph_ctor_FUN_004fa8a0((CMorph *)(pCVar5[1].filenames[0] + 0x10));
  *(CCharacter_full_vtable **)(pCVar6[-0x45].models[1].textures[4].texture_name + 0x24) =
       &g_CSpiritBearVTable;
  pCVar6[-0x41].models[1].textures[6].base.count = 0x3f19999a;
  builtin_strncpy(pCVar6[-0x41].models[1].textures[6].texture_name,"fff?",4);
  pSVar9 = pCVar6[-0x41].models[1].textures;
  pSVar9[6].texture_name[0xc] = -0x33;
  pSVar9[6].texture_name[0xd] = -0x34;
  pSVar9[6].texture_name[0xe] = -0x34;
  pSVar9[6].texture_name[0xf] = '?';
  pSVar9 = pCVar6[-0x41].models[1].textures;
  pSVar9[6].texture_name[0x10] = '\0';
  pSVar9[6].texture_name[0x11] = -0x40;
  pSVar9[6].texture_name[0x12] = 'y';
  pSVar9[6].texture_name[0x13] = -0x3c;
  fVar7 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.9,1.1);
  pcVar8 = (char *)0x5d9b12;
  *(float *)(pCVar6[-1].dead + 0x10) = fVar7;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)(pCVar6[-0x45].models[1].textures[4].texture_name + 0x28),
             (char *)0x5d9b04);
  pSVar9 = pCVar6[-1].models[1].textures + 0xe;
  pSVar2 = pCVar6[-1].models[1].textures;
  pSVar2[0xd].texture_name[0x3c] = '\x01';
  pSVar2[0xd].texture_name[0x3d] = '\0';
  pSVar2[0xd].texture_name[0x3e] = '\0';
  pSVar2[0xd].texture_name[0x3f] = '\0';
  do {
    cVar1 = *pcVar8;
    *(char *)&(pSVar9->base).type = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    *(char *)((int)&(pSVar9->base).type + 1) = cVar1;
    pSVar9 = (SMRGLTextureModel *)((int)&(pSVar9->base).type + 2);
  } while (cVar1 != '\0');
  pSVar9 = pCVar6[-0x42].models[1].textures;
  pSVar9[0xb].texture_name[0x14] = '\0';
  pSVar9[0xb].texture_name[0x15] = '\0';
  pSVar9[0xb].texture_name[0x16] = '\0';
  pSVar9[0xb].texture_name[0x17] = '\0';
  pCVar6[-0xffffffff00000001].dead[8] = '\0';
  pCVar6[-0xffffffff00000001].dead[9] = '\0';
  pCVar6[-0xffffffff00000001].dead[10] = '\0';
  pCVar6[-0xffffffff00000001].dead[0xb] = '\0';
  pCVar6[-0xffffffff00000001].dead[0xc] = '\0';
  pCVar6[-0xffffffff00000001].dead[0xd] = '\0';
  pCVar6[-0xffffffff00000001].dead[0xe] = '\0';
  pCVar6[-0xffffffff00000001].dead[0xf] = '\0';
  return (CSpiritBear *)&pCVar6[-0x45].models[1].faces;
}
