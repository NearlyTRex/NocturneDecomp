// Name: core_armour.cpp_CArmour_ctor_FUN_0040e9e0
// Address: 0040e9e0
// Address Range: [[0040e9e0, 0040ea7c]]
// Convention: __cdecl
// Signature: CArmour * __cdecl core_armour_cpp_CArmour_ctor_FUN_0040e9e0(CArmour *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CArmour * __cdecl core_armour_cpp_CArmour_ctor_FUN_0040e9e0(CArmour *this_ptr)

{
  char cVar1;
  float fVar2;
  float fVar3;
  CArmour *pCVar4;
  char *pcVar5;
  char *pcVar6;
  
  pCVar4 = (CArmour *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  pcVar5 = (char *)0x5d32d4;
  (pCVar4->base).base.base.vtable._ub = &g_CArmourVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar4->base).base.model,(char *)0x5d32c9);
  fVar3 = _DAT_005fb7cc;
  fVar2 = _DAT_005fb7c8;
  (pCVar4->base).base.collision_cylinder_height = 0.6;
  (pCVar4->base).base.collision_cylinder_radius = 2.0;
  pcVar6 = pCVar4->fall_apart_event;
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
  (pCVar4->base).base.blood_type = BLOOD_TYPE_NONE;
  (pCVar4->base).base.turn_rate = 3.1415927;
  return pCVar4;
}
