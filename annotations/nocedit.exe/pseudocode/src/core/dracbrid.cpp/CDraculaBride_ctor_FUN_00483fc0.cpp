// Name: core_dracbrid.cpp_CDraculaBride_ctor_FUN_00483fc0
// Address: 00483fc0
// Address Range: [[00483fc0, 004840ae]]
// Convention: __cdecl
// Signature: CDraculaBride * __cdecl core_dracbrid_cpp_CDraculaBride_ctor_FUN_00483fc0(CDraculaBride *this_ptr)

#include "nocturne.h"

CDraculaBride * __cdecl core_dracbrid_cpp_CDraculaBride_ctor_FUN_00483fc0(CDraculaBride *this_ptr)

{
  float fVar1;
  float fVar2;
  CDraculaBride *pCVar3;
  CDraculaBride *pCVar4;
  CDraculaBride *pCVar5;
  
  pCVar3 = (CDraculaBride *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CDraculaBrideVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar3->base).base.model,"nbride2.dfm");
  (pCVar3->base).base.collision_cylinder_height = 0.5;
  (pCVar3->base).base.collision_cylinder_radius = 1.0;
  pCVar3->rise_event[0] = '\0';
  (pCVar3->base).base.hit_points = 135.0;
  fVar1 = 50.0f;
  pCVar3->mist_state = 0;
  fVar2 = 100.0f;
  pCVar3->vanish_timer = 0.0;
  (pCVar3->base).base.ai_detection_range_min = fVar1;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  (pCVar3->new_pos).z = 0.0;
  (pCVar3->new_pos).y = (pCVar3->new_pos).z;
  (pCVar3->new_pos).x = (pCVar3->new_pos).y;
  pCVar3->attack_landed = 0;
  pCVar3->freaky_voice_number = 1;
  pCVar4 = pCVar3;
  do {
    pCVar5 = (CDraculaBride *)((pCVar4->base).base.base.actor_name + 4);
    pCVar4->part_list[0] = (CDemonActor *)0x0;
    pCVar4 = pCVar5;
  } while (pCVar5 != (CDraculaBride *)(pCVar3->base).base.base.create_event);
  pCVar3->part_count = 0;
  pCVar3->fade_timer = 0.0;
  pCVar3->action_delay = 0.0;
  pCVar3->exploded = 0;
  return pCVar3;
}
