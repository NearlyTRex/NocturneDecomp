// Name: core_spireagl.cpp_CSpiritEagle_ctor_FUN_005991d0
// Address: 005991d0
// Address Range: [[005991d0, 005992e2]]
// Convention: unknown
// Signature: CSpiritEagle * core_spireagl_cpp_CSpiritEagle_ctor_FUN_005991d0(CSpiritEagle *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSpiritEagle * core_spireagl_cpp_CSpiritEagle_ctor_FUN_005991d0(CSpiritEagle *this_ptr)

{
  char cVar1;
  SMRGLTextureModel *pSVar2;
  CCharacter *pCVar3;
  CPathMap *pCVar4;
  CClothList *pCVar5;
  CMorph *pCVar6;
  float fVar7;
  char *pcVar8;
  int *piVar9;
  
  pCVar3 = core_charactr_cpp_CCharacter_ctor_FUN_0042ac20(&this_ptr->base);
  pCVar4 = core_path_cpp_CPathMap_ctor_FUN_0050acc0((CPathMap *)(pCVar3 + 1));
  pCVar5 = core_cloth_cpp_CClothList_ctor_FUN_0043f8c0((CClothList *)(pCVar4 + 1));
  pCVar6 = core_morph_cpp_CMorph_ctor_FUN_004fa8a0((CMorph *)(pCVar5[1].filenames[0] + 0xc));
  *(CCharacter_full_vtable **)(pCVar6[-0x2b].models[0].textures[0xd].texture_name + 0x2c) =
       &g_CSpiritEagleVTable;
  pSVar2 = pCVar6[-0x27].models[0].textures;
  pSVar2[0xf].texture_name[4] = -0x66;
  pSVar2[0xf].texture_name[5] = -0x67;
  pSVar2[0xf].texture_name[6] = '\x19';
  pSVar2[0xf].texture_name[7] = '?';
  pcVar8 = (char *)0x5d98da;
  pSVar2 = pCVar6[-0x27].models[0].textures;
  pSVar2[0xf].texture_name[8] = 'f';
  pSVar2[0xf].texture_name[9] = 'f';
  pSVar2[0xf].texture_name[10] = 'f';
  pSVar2[0xf].texture_name[0xb] = '?';
  pSVar2 = pCVar6[-0x27].models[0].textures;
  pSVar2[0xf].texture_name[0x14] = -0x33;
  pSVar2[0xf].texture_name[0x15] = -0x34;
  pSVar2[0xf].texture_name[0x16] = -0x34;
  pSVar2[0xf].texture_name[0x17] = '?';
  pSVar2 = pCVar6[-0x27].models[0].textures;
  pSVar2[0xf].texture_name[0x18] = '\0';
  pSVar2[0xf].texture_name[0x19] = -0x40;
  pSVar2[0xf].texture_name[0x1a] = 'y';
  pSVar2[0xf].texture_name[0x1b] = -0x3c;
  fVar7 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.9,1.1);
  pCVar6[1].models[0].parts[0].vertex_count = 0;
  piVar9 = &pCVar6[-1].models[1].textures[0xe].base.count;
  pCVar6[1].models[0].parts[0].face_count = 0;
  pCVar6[-1].models[1].textures[0xe].base.type = 1;
  *(float *)(pCVar6[-1].dead + 0x14) = fVar7;
  do {
    cVar1 = *pcVar8;
    *(char *)piVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    *(char *)((int)piVar9 + 1) = cVar1;
    piVar9 = (int *)((int)piVar9 + 2);
  } while (cVar1 != '\0');
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)(pCVar6[-0x2b].models[0].textures[0xd].texture_name + 0x30)
             ,(char *)0x5d98e9);
  pCVar6[-0x28].models[1].parts[2].vertex_count = 0;
  pCVar6[-0xffffffff00000001].dead[0xc] = '\0';
  pCVar6[-0xffffffff00000001].dead[0xd] = '\0';
  pCVar6[-0xffffffff00000001].dead[0xe] = '\0';
  pCVar6[-0xffffffff00000001].dead[0xf] = '\0';
  pCVar6[-0xffffffff00000001].dead[0x10] = '\0';
  pCVar6[-0xffffffff00000001].dead[0x11] = '\0';
  pCVar6[-0xffffffff00000001].dead[0x12] = '\0';
  pCVar6[-0xffffffff00000001].dead[0x13] = '\0';
  return (CSpiritEagle *)(pCVar6[-0x2b].models[0].textures + 9);
}
