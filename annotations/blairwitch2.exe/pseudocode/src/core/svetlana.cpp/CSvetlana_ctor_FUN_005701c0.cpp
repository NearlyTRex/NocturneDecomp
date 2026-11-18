// Name: core_svetlana.cpp_CSvetlana_ctor_FUN_005701c0
// Address: 005701c0
// Address Range: [[005701c0, 00570247]]
// Convention: __cdecl
// Signature: CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_ctor_FUN_005701c0(CSvetlana *this_ptr)

#include "nocturne.h"

CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_ctor_FUN_005701c0(CSvetlana *this_ptr)

{
  CHero *pCVar1;
  CCloth *pCVar2;
  CCloth *pCVar3;
  
  pCVar1 = core_hero_cpp_CHero_ctor_FUN_004ce240(&this_ptr->base);
  pCVar2 = core_cloth_cpp_CCloth_ctor_FUN_005adda0((CCloth *)(pCVar1[1].base.base.actor_name + 8));
  pCVar3 = core_cloth_cpp_CCloth_ctor_FUN_005adda0(pCVar2 + 1);
  pCVar3[-2].vertices[0x132].rest_lengths[4] = (float)&g_CSvetlanaVTable;
  pCVar3[-2].wind_velocity.y = 0.0;
  pCVar3[-2].wind_velocity.z = 0.0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)(pCVar3[-2].vertices[0x132].rest_lengths + 5),
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
  return (CSvetlana *)&pCVar3[-2].vertices[0x130].force.y;
}
