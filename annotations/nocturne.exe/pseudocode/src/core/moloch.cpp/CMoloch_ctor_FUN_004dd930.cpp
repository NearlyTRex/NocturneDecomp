// Name: core_moloch.cpp_CMoloch_ctor_FUN_004dd930
// Address: 004dd930
// Address Range: [[004dd930, 004dd9ed]]
// Convention: __cdecl
// Signature: CMoloch * __cdecl core_moloch_cpp_CMoloch_ctor_FUN_004dd930(CMoloch *this_ptr)

#include "nocturne.h"

CMoloch * __cdecl core_moloch_cpp_CMoloch_ctor_FUN_004dd930(CMoloch *this_ptr)

{
  char cVar1;
  SMRGLTextureBasic *pSVar2;
  CHero *pCVar3;
  CDeformableModelInstance *pCVar4;
  CMorph *pCVar5;
  char *pcVar6;
  char *pcVar7;
  SMRGLTextureLod *pSVar8;
  
  pCVar3 = core_hero_cpp_FUN_004b46d0(&this_ptr->base);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0051b660
                     ((CDeformableModelInstance *)(pCVar3 + 1));
  pCVar5 = core_morph_cpp_CMorph_ctor_FUN_004e0050((CMorph *)&pCVar4[1].transformed_vertices[10].y);
  *(CHero_full_vtable **)(pCVar5[-0x2d].models[1].textures[2].textures[2].texture_name + 0xc) =
       &g_CMolochVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            ((CDeformableModelInstance *)(pCVar5[-0x2d].models[1].textures + 3),
             "moloch_h.dfm");
  pcVar6 = "molochToDemon";
  pcVar7 = pCVar5[-1].models[1].textures[0x11].textures[1].texture_name + 0xc;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  pcVar7 = "molochToHuman";
  pSVar8 = pCVar5[-1].models[1].textures + 0x13;
  do {
    cVar1 = *pcVar7;
    *(char *)&pSVar8->textures[0].base.type = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    *(char *)((int)&pSVar8->textures[0].base.type + 1) = cVar1;
    pSVar8 = (SMRGLTextureLod *)((int)&pSVar8->textures[0].base.type + 2);
  } while (cVar1 != '\0');
  pSVar8 = pCVar5[-1].models[1].textures + 0x11;
  pSVar8->textures[1].texture_name[0] = '\x01';
  pSVar8->textures[1].texture_name[1] = '\0';
  pSVar8->textures[1].texture_name[2] = '\0';
  pSVar8->textures[1].texture_name[3] = '\0';
  pSVar2 = pCVar5[-1].models[1].textures[0x11].textures;
  pSVar2[1].texture_name[4] = '\0';
  pSVar2[1].texture_name[5] = '\0';
  pSVar2[1].texture_name[6] = '\0';
  pSVar2[1].texture_name[7] = '\0';
  pSVar2 = pCVar5[-1].models[1].textures[0x11].textures;
  pSVar2[1].texture_name[8] = '\0';
  pSVar2[1].texture_name[9] = '\0';
  pSVar2[1].texture_name[10] = '\0';
  pSVar2[1].texture_name[0xb] = '\0';
  return (CMoloch *)pCVar5[-0x2d].models[0].textures[0x13].textures[2].texture_name;
}
