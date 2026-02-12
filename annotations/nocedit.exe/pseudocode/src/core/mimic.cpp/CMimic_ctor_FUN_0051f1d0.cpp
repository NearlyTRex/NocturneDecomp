// Name: core_mimic.cpp_CMimic_ctor_FUN_0051f1d0
// Address: 0051f1d0
// Address Range: [[0051f1d0, 0051f2b6]]
// Convention: __cdecl
// Signature: CMimic * __cdecl core_mimic_cpp_CMimic_ctor_FUN_0051f1d0(CMimic *this_ptr)

#include "nocturne.h"

CMimic * __cdecl core_mimic_cpp_CMimic_ctor_FUN_0051f1d0(CMimic *this_ptr)

{
  char cVar1;
  SMRGLTextureExtended *pSVar2;
  float fVar3;
  float fVar4;
  CEnemy *pCVar5;
  CCloth *pCVar6;
  CMorph *pCVar7;
  char *pcVar8;
  char *pcVar9;
  
  pCVar5 = core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  pCVar6 = core_cloth_cpp_CCloth_ctor_FUN_00438ba0
                     ((CCloth *)(pCVar5[1].base.base.create_event + 0x50));
  pCVar7 = core_morph_cpp_CMorph_ctor_FUN_0052b310
                     ((CMorph *)(pCVar6[1].model.model_filename + 0x3c));
  *(CDemonActor_vtable **)pCVar7[-100].models[0].textures[0xe].base.texture_name = &g_CMimicVTable;
  pCVar7[-0x60].models[0].parts[3].face_count = 0x3f000000;
  pcVar8 = "CGhoul";
  pCVar7[-0x60].models[0].parts[3].start_vertex = 0x3f800000;
  fVar3 = 50.0f;
  pCVar7[-0x55].models[1].textures[0x10].unknown[0x2c] = '\0';
  fVar4 = 100.0f;
  pCVar7[-0x55].models[1].textures[0x12].unknown[0] = '\0';
  pCVar7[-0x60].models[0].parts[3].start_face = (int)fVar3;
  pCVar7[-0x60].models[0].parts[4].vertex_count = (int)fVar4;
  pSVar2 = pCVar7[-1].models[1].textures;
  pSVar2[0x13].unknown[0x1c] = '\0';
  pSVar2[0x13].unknown[0x1d] = '\0';
  pSVar2[0x13].unknown[0x1e] = '\0';
  pSVar2[0x13].unknown[0x1f] = '\0';
  pcVar9 = pCVar7[-1].models[1].textures[0x13].unknown + 0x24;
  pSVar2 = pCVar7[-1].models[1].textures;
  pSVar2[0x13].unknown[0x20] = '\0';
  pSVar2[0x13].unknown[0x21] = '\0';
  pSVar2[0x13].unknown[0x22] = '\0';
  pSVar2[0x13].unknown[0x23] = '\0';
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
  pCVar7[-100].models[0].textures[0xd].base.base.count = 0x10000;
  pSVar2 = pCVar7[-100].models[0].textures;
  pSVar2[0xd].base.texture_name[0] = '\0';
  pSVar2[0xd].base.texture_name[1] = '\0';
  pSVar2[0xd].base.texture_name[2] = '\x01';
  pSVar2[0xd].base.texture_name[3] = '\0';
  pSVar2 = pCVar7[-100].models[0].textures + 0xd;
  (pSVar2->base).texture_name[4] = '\0';
  (pSVar2->base).texture_name[5] = '\0';
  (pSVar2->base).texture_name[6] = '\x01';
  (pSVar2->base).texture_name[7] = '\0';
  return (CMimic *)(pCVar7[-100].models[0].textures[9].unknown + 4);
}
