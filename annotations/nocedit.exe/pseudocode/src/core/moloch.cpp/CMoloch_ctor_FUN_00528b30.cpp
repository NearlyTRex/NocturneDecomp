// Name: core_moloch.cpp_CMoloch_ctor_FUN_00528b30
// Address: 00528b30
// Address Range: [[00528b30, 00528bed]]
// Convention: __cdecl
// Signature: CMoloch * __cdecl core_moloch_cpp_CMoloch_ctor_FUN_00528b30(CMoloch *this_ptr)

#include "nocturne.h"

CMoloch * __cdecl core_moloch_cpp_CMoloch_ctor_FUN_00528b30(CMoloch *this_ptr)

{
  char cVar1;
  CHero *pCVar2;
  CDeformableModelInstance *pCVar3;
  CMorph *pCVar4;
  char *pcVar5;
  char *pcVar6;
  SMRGLTextureExtended *pSVar7;
  
  pCVar2 = core_hero_cpp_CHero_ctor_FUN_004f2340(&this_ptr->base);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
                     ((CDeformableModelInstance *)(pCVar2 + 1));
  pCVar4 = core_morph_cpp_CMorph_ctor_FUN_0052b310((CMorph *)&pCVar3[1].transformed_vertices[10].y);
  *(CDemonActor_vtable **)(pCVar4[-0x2d].models[0].textures[0x12].unknown + 0x24) = &g_CMolochVTable
  ;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(pCVar4[-0x2d].models[0].textures[0x12].unknown + 0x28),
             "moloch_h.dfm");
  pcVar5 = "molochToDemon";
  pcVar6 = pCVar4[-1].models[1].textures[0x11].unknown + 0x14;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pcVar6 = "molochToHuman";
  pSVar7 = pCVar4[-1].models[1].textures + 0x13;
  do {
    cVar1 = *pcVar6;
    *(char *)&(pSVar7->base).base.type = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    *(char *)((int)&(pSVar7->base).base.type + 1) = cVar1;
    pSVar7 = (SMRGLTextureExtended *)((int)&(pSVar7->base).base.type + 2);
  } while (cVar1 != '\0');
  pSVar7 = pCVar4[-1].models[1].textures;
  pSVar7[0x11].unknown[8] = '\x01';
  pSVar7[0x11].unknown[9] = '\0';
  pSVar7[0x11].unknown[10] = '\0';
  pSVar7[0x11].unknown[0xb] = '\0';
  pSVar7 = pCVar4[-1].models[1].textures;
  pSVar7[0x11].unknown[0xc] = '\0';
  pSVar7[0x11].unknown[0xd] = '\0';
  pSVar7[0x11].unknown[0xe] = '\0';
  pSVar7[0x11].unknown[0xf] = '\0';
  pSVar7 = pCVar4[-1].models[1].textures;
  pSVar7[0x11].unknown[0x10] = '\0';
  pSVar7[0x11].unknown[0x11] = '\0';
  pSVar7[0x11].unknown[0x12] = '\0';
  pSVar7[0x11].unknown[0x13] = '\0';
  return (CMoloch *)pCVar4[-0x2d].models[0].textures[0xe].base.texture_name;
}
