// Name: core_svetlana.cpp_CSvetlana_ctor_FUN_005d8850
// Address: 005d8850
// Address Range: [[005d8850, 005d88d7]]
// Convention: __cdecl
// Signature: CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_ctor_FUN_005d8850(CSvetlana *this_ptr)

#include "nocturne.h"

CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_ctor_FUN_005d8850(CSvetlana *this_ptr)

{
  CHero *pCVar1;
  CCloth *pCVar2;
  CCloth *pCVar3;
  
  pCVar1 = core_hero_cpp_CHero_ctor_FUN_004f2340(&this_ptr->base);
  pCVar2 = core_cloth_cpp_CCloth_ctor_FUN_00438ba0((CCloth *)(pCVar1[1].base.base.actor_name + 8));
  pCVar3 = core_cloth_cpp_CCloth_ctor_FUN_00438ba0((CCloth *)(pCVar2[1].model.model_filename + 0xc))
  ;
  pCVar3[-2].vertices[0x182].offset_pos.x = (float)&g_CSvetlanaVTable;
  pCVar3[-2].last_position.z = 0.0;
  pCVar3[-2].last_euler.x = 0.0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)&pCVar3[-2].vertices[0x182].offset_pos.y,
             "svetlana.dfm");
  pCVar2 = pCVar3 + 1;
  (pCVar2->model).model_filename[0x1c] = '\0';
  (pCVar2->model).model_filename[0x1d] = '\0';
  (pCVar2->model).model_filename[0x1e] = -0x80;
  (pCVar2->model).model_filename[0x1f] = '?';
  pCVar2 = pCVar3 + 1;
  (pCVar2->model).model_filename[0x18] = '\0';
  (pCVar2->model).model_filename[0x19] = '\0';
  (pCVar2->model).model_filename[0x1a] = '\0';
  (pCVar2->model).model_filename[0x1b] = '\0';
  *(uint *)(pCVar3[1].model.model_filename + 0x14) =
       *(uint *)(pCVar3[1].model.model_filename + 0x18);
  *(uint *)(pCVar3[1].model.model_filename + 0x10) =
       *(uint *)(pCVar3[1].model.model_filename + 0x14);
  return (CSvetlana *)(pCVar3[-2].vertices[0x181].rest_lengths + 4);
}
