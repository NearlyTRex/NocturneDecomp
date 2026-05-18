// Name: core_bugs.cpp_CBugs_ctor_FUN_00424cb0
// Address: 00424cb0
// MANUAL RECONSTRUCTION
// Address Range: [[00424cb0, 00424e4f]]
// Convention: __cdecl
// Signature: CBugs * __cdecl core_bugs_cpp_CBugs_ctor_FUN_00424cb0(CBugs *this_ptr)

#include "nocturne.h"

CBugs * __cdecl core_bugs_cpp_CBugs_ctor_FUN_00424cb0(CBugs *this_ptr)

{
  CBugs *pCVar2;
  CBugs_ptr_48828 pvVar2;
  CBugs_ptr_74440 this_ptr_00;

  pCVar2 = (CBugs *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  pvVar2 = __arrinit(pCVar2->bugs,400,&g_SBugTypeInfo);
  this_ptr_00 = __arrinit
                          (&ADJ(pvVar2)->bugs[399].downward_bias,4,
                           &g_CKeyFramedModelInstanceTypeInfo);
  ADJ(this_ptr_00)->base.base.base.vtable._ub = &g_CBugsVTable._ub;
  ADJ(this_ptr_00)->state = BUGS_STATE_IDLE;
  ADJ(this_ptr_00)->count = 0x32;
  memset(ADJ(this_ptr_00)->bugs,0,0x6400);
  ADJ(this_ptr_00)->model_count = 3;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (ADJ(this_ptr_00)->models,"roach.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (ADJ(this_ptr_00)->models + 1,"hroach.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (ADJ(this_ptr_00)->models + 2,"mroach.kfm");
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&ADJ(this_ptr_00)->base.base.model,"guul.dfm");
  ADJ(this_ptr_00)->swarm_target = (CDemonActor *)0x0;
  ADJ(this_ptr_00)->deformable_model_ptr = (CDeformableModelInstance *)0x0;
  ADJ(this_ptr_00)->swarm_vertex_count = 0;
  ADJ(this_ptr_00)->allow_chase = 0;
  strcpy(ADJ(this_ptr_00)->allow_chase_event,"true");
  ADJ(this_ptr_00)->allow_swarm = 0;
  strcpy(ADJ(this_ptr_00)->allow_swarm_event,"true");
  strcpy(ADJ(this_ptr_00)->animate_event,"false");
  ADJ(this_ptr_00)->base.base.collision_cylinder_height = 2.49;
  ADJ(this_ptr_00)->base.base.collision_cylinder_radius = 2.5;
  ADJ(this_ptr_00)->base.base.collision_cylinder_bottom = 1.3;
  ADJ(this_ptr_00)->base.base.collision_cylinder_top = 1.5;
  return ADJ(this_ptr_00);
}
