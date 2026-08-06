// Name: core_svetlana.cpp_CSvetlana_ctor_FUN_005419b0
// Address: 005419b0
// Address Range: [[005419b0, 00541a37]]
// Convention: __cdecl
// Signature: CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_ctor_FUN_005419b0(CSvetlana *this_ptr)

#include "nocturne.h"

CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_ctor_FUN_005419b0(CSvetlana *this_ptr)

{
  CHero *pCVar1;
  CCloth *pCVar2;
  CCloth *pCVar3;
  
  pCVar1 = core_hero_cpp_CHero_FUN_004b46d0(&this_ptr->base);
  pCVar2 = core_cloth_cpp_CCloth_ctor_FUN_00435100((CCloth *)(pCVar1[1].base.base.actor_name + 8));
  pCVar3 = core_cloth_cpp_CCloth_ctor_FUN_00435100(pCVar2 + 1);
  pCVar3[-2].vertices[0x184].connected_count = (int)&g_CSvetlanaVTable;
  pCVar3[-2].wind_velocity.y = 0.0;
  pCVar3[-2].wind_velocity.z = 0.0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            ((CDeformableModelInstance *)pCVar3[-2].vertices[0x184].connected_indices,
             "svetlana.dfm");
  pCVar2 = pCVar3 + 1;
  (pCVar2->model).model_filename[0x10] = '\0';
  (pCVar2->model).model_filename[0x11] = '\0';
  (pCVar2->model).model_filename[0x12] = -0x80;
  (pCVar2->model).model_filename[0x13] = '?';
  pCVar2 = pCVar3 + 1;
  (pCVar2->model).model_filename[0xc] = '\0';
  (pCVar2->model).model_filename[0xd] = '\0';
  (pCVar2->model).model_filename[0xe] = '\0';
  (pCVar2->model).model_filename[0xf] = '\0';
  *(uint *)(pCVar3[1].model.model_filename + 8) =
       *(uint *)(pCVar3[1].model.model_filename + 0xc);
  *(uint *)(pCVar3[1].model.model_filename + 4) =
       *(uint *)(pCVar3[1].model.model_filename + 8);
  return (CSvetlana *)(pCVar3[-2].vertices + 0x183);
}
