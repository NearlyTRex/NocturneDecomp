// Name: core_armour.cpp_CArmour_ctor_FUN_004121a0
// Address: 004121a0
// Address Range: [[004121a0, 00412232]]
// Convention: __cdecl
// Signature: CArmour * __cdecl core_armour_cpp_CArmour_ctor_FUN_004121a0(CArmour *this_ptr)

#include "nocturne.h"

CArmour * __cdecl core_armour_cpp_CArmour_ctor_FUN_004121a0(CArmour *this_ptr)

{
  char cVar1;
  float fVar2;
  float fVar3;
  CArmour *pCVar4;
  char *pcVar5;
  char *pcVar6;
  
  pCVar4 = (CArmour *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  pcVar5 = "none";
  (pCVar4->base).base.base.vtable._ub = &g_CArmourVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base).base.model,"armour.dfm");
  fVar3 = 100.0f;
  fVar2 = 50.0f;
  (pCVar4->base).base.collision_cylinder_height = 0.6;
  (pCVar4->base).base.collision_cylinder_radius = 2.0;
  pcVar6 = pCVar4->unk;
  (pCVar4->base).base.ai_detection_range_min = fVar2;
  (pCVar4->base).base.ai_detection_range_max = fVar3;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  (pCVar4->base).base.collision_layer = 2;
  return pCVar4;
}
