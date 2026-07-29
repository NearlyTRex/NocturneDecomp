// Name: core_svetlana.cpp_CSvetlana_ctor_FUN_005419b0
// Address: 005419b0
// Address Range: [[005419b0, 00541a37]]
// Convention: __cdecl
// Signature: CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_ctor_FUN_005419b0(CSvetlana *this_ptr)

#include "nocturne.h"

CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_ctor_FUN_005419b0(CSvetlana *this_ptr)

{
  SMRGLTextureBasic *pSVar1;
  CHero *pCVar2;
  CCloth *pCVar3;
  
  pCVar2 = core_hero_cpp_FUN_004b46d0(&this_ptr->base);
  pCVar3 = core_cloth_cpp_CCloth_ctor_FUN_00435100((CCloth *)(pCVar2[1].base.base.actor_name + 8));
  pCVar3 = core_cloth_cpp_CCloth_ctor_FUN_00435100
                     ((CCloth *)(pCVar3->vertices[0x300].connected_indices + 9));
  pCVar3[-2].vertices[0x1cf].connected_indices[2] = (int)&g_CSvetlanaVTable;
  pSVar1 = pCVar3[-1].model.texture_list[0x123].textures;
  pSVar1[2].texture_name[4] = '\0';
  pSVar1[2].texture_name[5] = '\0';
  pSVar1[2].texture_name[6] = '\0';
  pSVar1[2].texture_name[7] = '\0';
  pSVar1 = pCVar3[-1].model.texture_list[0x123].textures;
  pSVar1[2].texture_name[8] = '\0';
  pSVar1[2].texture_name[9] = '\0';
  pSVar1[2].texture_name[10] = '\0';
  pSVar1[2].texture_name[0xb] = '\0';
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            ((CDeformableModelInstance *)(pCVar3[-2].vertices[0x1cf].connected_indices + 3),
             "svetlana.dfm");
  pCVar3->vertices[0x300].connected_indices[0xd] = 0x3f800000;
  pCVar3->vertices[0x300].connected_indices[0xc] = 0;
  pCVar3->vertices[0x300].connected_indices[0xb] = pCVar3->vertices[0x300].connected_indices[0xc];
  pCVar3->vertices[0x300].connected_indices[10] = pCVar3->vertices[0x300].connected_indices[0xb];
  return (CSvetlana *)&pCVar3[-2].vertices[0x1ce].force;
}
