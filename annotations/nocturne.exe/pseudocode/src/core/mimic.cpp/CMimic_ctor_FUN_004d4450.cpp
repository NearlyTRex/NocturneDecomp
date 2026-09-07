// Name: core_mimic.cpp_CMimic_ctor_FUN_004d4450
// Address: 004d4450
// Address Range: [[004d4450, 004d4536]]
// Convention: __cdecl
// Signature: CMimic * __cdecl core_mimic_cpp_CMimic_ctor_FUN_004d4450(CMimic *this_ptr)

#include "nocturne.h"

CMimic * __cdecl core_mimic_cpp_CMimic_ctor_FUN_004d4450(CMimic *this_ptr)

{
  char cVar1;
  SMRGLTextureModel *pSVar2;
  float fVar3;
  float fVar4;
  CEnemy *pCVar5;
  CCloth *pCVar6;
  CMorph *pCVar7;
  char *pcVar8;
  char *pcVar9;
  
  pCVar5 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(&this_ptr->base);
  pCVar6 = core_cloth_cpp_CCloth_ctor_FUN_00435100
                     ((CCloth *)(pCVar5[1].base.base.create_event + 0x50));
  pCVar7 = core_morph_cpp_CMorph_ctor_FUN_004e0050
                     ((CMorph *)(pCVar6[1].model.model_filename + 0x30));
  *(CEnemy_full_vtable **)(pCVar7[-0x5d].models[0].textures[0xc].texture_name + 0x2c) =
       &g_CMimicVTable;
  pSVar2 = pCVar7[-0x5a].models[1].textures;
  pSVar2[0x13].texture_name[0x30] = '\0';
  pSVar2[0x13].texture_name[0x31] = '\0';
  pSVar2[0x13].texture_name[0x32] = '\0';
  pSVar2[0x13].texture_name[0x33] = '?';
  pcVar8 = "CGhoul";
  pSVar2 = pCVar7[-0x5a].models[1].textures;
  pSVar2[0x13].texture_name[0x34] = '\0';
  fVar3 = 50.0f;
  pSVar2[0x13].texture_name[0x35] = '\0';
  pSVar2[0x13].texture_name[0x36] = -0x80;
  pSVar2[0x13].texture_name[0x37] = '?';
  *(byte *)&pCVar7[-0x4e].models[1].textures[10].base.type = 0;
  fVar4 = 100.0f;
  pCVar7[-0x4e].models[1].textures[0xb].texture_name[0x14] = '\0';
  *(float *)(pCVar7[-0x5a].models[1].textures[0x13].texture_name + 0x38) = fVar3;
  *(float *)(pCVar7[-0x5a].models[1].textures[0x13].texture_name + 0x3c) = fVar4;
  pSVar2 = pCVar7[-1].models[1].textures;
  pSVar2[0x13].texture_name[0x2c] = '\0';
  pSVar2[0x13].texture_name[0x2d] = '\0';
  pSVar2[0x13].texture_name[0x2e] = '\0';
  pSVar2[0x13].texture_name[0x2f] = '\0';
  pcVar9 = pCVar7[-1].models[1].textures[0x13].texture_name + 0x34;
  pSVar2 = pCVar7[-1].models[1].textures;
  pSVar2[0x13].texture_name[0x30] = '\0';
  pSVar2[0x13].texture_name[0x31] = '\0';
  pSVar2[0x13].texture_name[0x32] = '\0';
  pSVar2[0x13].texture_name[0x33] = '\0';
  do {
    cVar1 = *pcVar8;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  pCVar7[1].models[0].parts[0].vertex_count = 0;
  pCVar7[1].models[0].part_count = -0x40800000;
  pSVar2 = pCVar7[-0x5d].models[0].textures;
  pSVar2[0xb].texture_name[0x30] = '\0';
  pSVar2[0xb].texture_name[0x31] = '\0';
  pSVar2[0xb].texture_name[0x32] = '\x01';
  pSVar2[0xb].texture_name[0x33] = '\0';
  pSVar2 = pCVar7[-0x5d].models[0].textures;
  pSVar2[0xb].texture_name[0x34] = '\0';
  pSVar2[0xb].texture_name[0x35] = '\0';
  pSVar2[0xb].texture_name[0x36] = '\x01';
  pSVar2[0xb].texture_name[0x37] = '\0';
  pSVar2 = pCVar7[-0x5d].models[0].textures;
  pSVar2[0xb].texture_name[0x38] = '\0';
  pSVar2[0xb].texture_name[0x39] = '\0';
  pSVar2[0xb].texture_name[0x3a] = '\x01';
  pSVar2[0xb].texture_name[0x3b] = '\0';
  return (CMimic *)pCVar7[-0x5d].models[0].textures[8].texture_name;
}
