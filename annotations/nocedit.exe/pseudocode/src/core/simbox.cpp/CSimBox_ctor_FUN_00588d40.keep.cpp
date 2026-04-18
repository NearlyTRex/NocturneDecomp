// Name: core_simbox.cpp_CSimBox_ctor_FUN_00588d40
// Address: 00588d40
// MANUAL RECONSTRUCTION
// Address Range: [[00588d40, 00588dfe]]
// Convention: __cdecl
// Signature: CSimBox * __cdecl core_simbox_cpp_CSimBox_ctor_FUN_00588d40(CSimBox *this_ptr)

#include "nocturne.h"

CSimBox * __cdecl core_simbox_cpp_CSimBox_ctor_FUN_00588d40(CSimBox *this_ptr)

{
  CSimBox *pCVar2;
  CSimBox_ptr_344 pCVar3;
  CSimBox_ptr_856 pCVar4;

  pCVar2 = (CSimBox *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar2->model);
  pCVar4 = core_box_cpp_CBox_ctor_FUN_0041dc50(&ADJ(pCVar3)->physics_box);
  ADJ(pCVar4)->base.vtable._ub = &g_CSimBoxVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&ADJ(pCVar4)->model,"question.kfm");
  strcpy(ADJ(pCVar4)->trigger_event,"none");
  (ADJ(pCVar4)->initial_velocity).x = 0.0;
  (ADJ(pCVar4)->initial_velocity).y = 0.0;
  (ADJ(pCVar4)->initial_velocity).z = 0.0;
  (ADJ(pCVar4)->init_rot_vel).x = 0.0;
  (ADJ(pCVar4)->init_rot_vel).y = 0.0;
  (ADJ(pCVar4)->init_rot_vel).z = 0.0;
  ADJ(pCVar4)->type = 0;
  ADJ(pCVar4)->weight = 100.0;
  return ADJ(pCVar4);
}
