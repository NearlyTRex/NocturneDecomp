// Name: core_moloch.cpp_CMoloch_ctor_FUN_005202f0
// Address: 005202f0
// Address Range: [[005202f0, 005203ad]]
// Convention: __cdecl
// Signature: CMoloch * __cdecl core_moloch_cpp_CMoloch_ctor_FUN_005202f0(CMoloch *this_ptr)

#include "nocturne.h"

CMoloch * __cdecl core_moloch_cpp_CMoloch_ctor_FUN_005202f0(CMoloch *this_ptr)

{
  char cVar1;
  CHero *pCVar2;
  CDeformableModelInstance *pCVar3;
  CMorph *pCVar4;
  char *pcVar5;
  char *pcVar6;
  SMRGLTextureModel *pSVar7;
  
  pCVar2 = core_hero_cpp_CHero_ctor_FUN_004ea830(&this_ptr->base);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00567370
                     ((CDeformableModelInstance *)(pCVar2 + 1));
  pCVar4 = core_morph_cpp_CMorph_ctor_FUN_00522fa0((CMorph *)&pCVar3[1].bone_origins[10].y);
  *(CHero_full_vtable **)(pCVar4[-0x2d].models[0].textures[1].texture_name + 0x34) =
       &g_CMolochVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)(pCVar4[-0x2d].models[0].textures[1].texture_name + 0x38),
             "moloch_h.dfm");
  pcVar5 = "molochToDemon";
  pcVar6 = pCVar4[-1].models[1].textures[0x11].texture_name + 0x24;
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
    *(char *)&(pSVar7->base).type = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    *(char *)((int)&(pSVar7->base).type + 1) = cVar1;
    pSVar7 = (SMRGLTextureModel *)((int)&(pSVar7->base).type + 2);
  } while (cVar1 != '\0');
  pSVar7 = pCVar4[-1].models[1].textures;
  pSVar7[0x11].texture_name[0x18] = '\x01';
  pSVar7[0x11].texture_name[0x19] = '\0';
  pSVar7[0x11].texture_name[0x1a] = '\0';
  pSVar7[0x11].texture_name[0x1b] = '\0';
  pSVar7 = pCVar4[-1].models[1].textures;
  pSVar7[0x11].texture_name[0x1c] = '\0';
  pSVar7[0x11].texture_name[0x1d] = '\0';
  pSVar7[0x11].texture_name[0x1e] = '\0';
  pSVar7[0x11].texture_name[0x1f] = '\0';
  pSVar7 = pCVar4[-1].models[1].textures;
  pSVar7[0x11].texture_name[0x20] = '\0';
  pSVar7[0x11].texture_name[0x21] = '\0';
  pSVar7[0x11].texture_name[0x22] = '\0';
  pSVar7[0x11].texture_name[0x23] = '\0';
  return (CMoloch *)(pCVar4[-0x2e].models[1].textures[0x12].texture_name + 0x3c);
}
