// Name: core_smiley.cpp_CSmiley_ctor_FUN_005a2430
// Address: 005a2430
// Address Range: [[005a2430, 005a24c7]]
// Convention: __cdecl
// Signature: CSmiley * __cdecl core_smiley_cpp_CSmiley_ctor_FUN_005a2430(CSmiley *this_ptr)

#include "nocturne.h"

CSmiley * __cdecl core_smiley_cpp_CSmiley_ctor_FUN_005a2430(CSmiley *this_ptr)

{
  float fVar1;
  float fVar2;
  CSmiley *pCVar3;
  
  pCVar3 = (CSmiley *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CSmileyVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar3->base).base.model,"smiley.dfm");
  pCVar3->unk1 = 0;
  pCVar3->guard_distance = 100.0;
  (pCVar3->base).base.collision_cylinder_height = 0.6;
  (pCVar3->base).base.collision_cylinder_radius = 0.9;
  pCVar3->unk2[0x2c] = '\0';
  fVar1 = 50.0f;
  pCVar3->unk2[0x2d] = '\0';
  pCVar3->unk2[0x2e] = '\0';
  pCVar3->unk2[0x2f] = '\0';
  pCVar3->unk2[0x30] = '\0';
  fVar2 = 100.0f;
  pCVar3->unk2[0x31] = '\0';
  pCVar3->unk2[0x32] = '\0';
  pCVar3->unk2[0x33] = '\0';
  pCVar3->unk2[0x34] = '\0';
  pCVar3->unk2[0x35] = '\0';
  pCVar3->unk2[0x36] = '\0';
  pCVar3->unk2[0x37] = '\0';
  pCVar3->unk2[0x38] = '\x01';
  pCVar3->unk2[0x39] = '\0';
  pCVar3->unk2[0x3a] = '\0';
  pCVar3->unk2[0x3b] = '\0';
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  return pCVar3;
}
