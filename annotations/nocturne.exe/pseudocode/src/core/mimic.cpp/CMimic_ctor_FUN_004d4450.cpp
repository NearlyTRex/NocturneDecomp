// Name: core_mimic.cpp_CMimic_ctor_FUN_004d4450
// Address: 004d4450
// Address Range: [[004d4450, 004d4536]]
// Convention: __cdecl
// Signature: CMimic * __cdecl core_mimic_cpp_CMimic_ctor_FUN_004d4450(CMimic *this_ptr)

#include "nocturne.h"

CMimic * __cdecl core_mimic_cpp_CMimic_ctor_FUN_004d4450(CMimic *this_ptr)

{
  char cVar1;
  SMRGLTextureLod *pSVar2;
  SMRGLTextureBasic *pSVar3;
  float fVar4;
  float fVar5;
  CEnemy *pCVar6;
  CCloth *pCVar7;
  CMorph *pCVar8;
  char *pcVar9;
  char *pcVar10;
  
  pCVar6 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(&this_ptr->base);
  pCVar7 = core_cloth_cpp_CCloth_ctor_FUN_00435100
                     ((CCloth *)(pCVar6[1].base.base.create_event + 0x50));
  pCVar8 = core_morph_cpp_CMorph_ctor_FUN_004e0050
                     ((CMorph *)(pCVar7->vertices[0x300].rest_lengths + 4));
  pCVar8[-0x5d].models[0].textures[0xc].textures[2].base.count = (int)&g_CMimicVTable;
  pSVar2 = pCVar8[-0x5a].models[1].textures + 0x13;
  pSVar2->textures[2].texture_name[0] = '\0';
  pSVar2->textures[2].texture_name[1] = '\0';
  pSVar2->textures[2].texture_name[2] = '\0';
  pSVar2->textures[2].texture_name[3] = '?';
  pcVar9 = "CGhoul";
  pSVar3 = pCVar8[-0x5a].models[1].textures[0x13].textures;
  pSVar3[2].texture_name[4] = '\0';
  fVar4 = 50.0f;
  pSVar3[2].texture_name[5] = '\0';
  pSVar3[2].texture_name[6] = -0x80;
  pSVar3[2].texture_name[7] = '?';
  *(byte *)&pCVar8[-0x4e].models[1].textures[10].textures[0].base.type = 0;
  fVar5 = 100.0f;
  *(byte *)&pCVar8[-0x4e].models[1].textures[0xb].textures[1].base.count = 0;
  *(float *)(pCVar8[-0x5a].models[1].textures[0x13].textures[2].texture_name + 8) = fVar4;
  *(float *)(pCVar8[-0x5a].models[1].textures[0x13].textures[2].texture_name + 0xc) = fVar5;
  pCVar8[-1].models[1].textures[0x13].textures[2].base.count = 0;
  pcVar10 = pCVar8[-1].models[1].textures[0x13].textures[2].texture_name + 4;
  pSVar2 = pCVar8[-1].models[1].textures + 0x13;
  pSVar2->textures[2].texture_name[0] = '\0';
  pSVar2->textures[2].texture_name[1] = '\0';
  pSVar2->textures[2].texture_name[2] = '\0';
  pSVar2->textures[2].texture_name[3] = '\0';
  do {
    cVar1 = *pcVar9;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  pCVar8[1].models[0].parts[0].vertex_count = 0;
  pCVar8[1].models[0].part_count = -0x40800000;
  pSVar2 = pCVar8[-0x5d].models[0].textures + 0xb;
  pSVar2->textures[2].texture_name[0] = '\0';
  pSVar2->textures[2].texture_name[1] = '\0';
  pSVar2->textures[2].texture_name[2] = '\x01';
  pSVar2->textures[2].texture_name[3] = '\0';
  pSVar3 = pCVar8[-0x5d].models[0].textures[0xb].textures;
  pSVar3[2].texture_name[4] = '\0';
  pSVar3[2].texture_name[5] = '\0';
  pSVar3[2].texture_name[6] = '\x01';
  pSVar3[2].texture_name[7] = '\0';
  pSVar3 = pCVar8[-0x5d].models[0].textures[0xb].textures;
  pSVar3[2].texture_name[8] = '\0';
  pSVar3[2].texture_name[9] = '\0';
  pSVar3[2].texture_name[10] = '\x01';
  pSVar3[2].texture_name[0xb] = '\0';
  return (CMimic *)pCVar8[-0x5d].models[0].textures[8].textures[0].texture_name;
}
