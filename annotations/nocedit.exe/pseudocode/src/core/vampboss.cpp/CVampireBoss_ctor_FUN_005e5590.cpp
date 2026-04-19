// Name: core_vampboss.cpp_CVampireBoss_ctor_FUN_005e5590
// Address: 005e5590
// Address Range: [[005e5590, 005e56bf]]
// Convention: __cdecl
// Signature: CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_ctor_FUN_005e5590(CVampireBoss *this_ptr)

#include "nocturne.h"

CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_ctor_FUN_005e5590(CVampireBoss *this_ptr)

{
  CVampireBoss *pCVar1;
  CVampireBoss_ptr_48828 pCVar4;
  CVampireBoss_ptr_57712 pCVar5;
  CVampireBoss_ptr_319456 pCVar6;
  CVampireBoss_ptr_581200 pCVar7;
  CVampireBoss_ptr_842948 pCVar8;
  
  pCVar1 = (CVampireBoss *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(&pCVar1->model);
  pCVar5 = core_cloth_cpp_CCloth_ctor_FUN_00438ba0(&ADJ(pCVar4)->wing_cloth);
  pCVar6 = core_cloth_cpp_CCloth_ctor_FUN_00438ba0(&ADJ(pCVar5)->cape_cloth);
  pCVar7 = core_cloth_cpp_CCloth_ctor_FUN_00438ba0(&ADJ(pCVar6)->skirt_cloth);
  pCVar8 = core_morph_cpp_CMorph_ctor_FUN_0052b310(&ADJ(pCVar7)->morph);
  ADJ(pCVar8)->base.base.base.vtable._ub = &g_CVampireBossVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&ADJ(pCVar8)->base.base.model,"nosfer.dfm");
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&ADJ(pCVar8)->model,"batboss.dfm");
  ADJ(pCVar8)->base.base.collision_cylinder_height = 2.0;
  ADJ(pCVar8)->base.base.collision_cylinder_radius = 3.0;
  ADJ(pCVar8)->base.base.ai_detection_range_min = 50.0;
  ADJ(pCVar8)->base.base.ai_detection_range_max = 100.0;
  ADJ(pCVar8)->action_timer = 0.0;
  ADJ(pCVar8)->form = 0;
  ADJ(pCVar8)->morph_t = 0.0;
  ADJ(pCVar8)->way_point_0 = (CDemonActor *)0x0;
  ADJ(pCVar8)->way_point_1 = (CDemonActor *)0x0;
  ADJ(pCVar8)->way_point_2 = (CDemonActor *)0x0;
  ADJ(pCVar8)->way_point_3 = (CDemonActor *)0x0;
  ADJ(pCVar8)->waypoint_index = 0;
  ADJ(pCVar8)->follow_result = 0;
  ADJ(pCVar8)->flee_timer = 10.0;
  ADJ(pCVar8)->bat_ai_state = 1;
  ADJ(pCVar8)->base.base.show_in_editor = 0;
  return ADJ(pCVar8);
}
