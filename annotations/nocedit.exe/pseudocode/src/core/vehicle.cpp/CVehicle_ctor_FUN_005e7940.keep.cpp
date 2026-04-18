// Name: core_vehicle.cpp_CVehicle_ctor_FUN_005e7940
// Address: 005e7940
// MANUAL RECONSTRUCTION
// Address Range: [[005e7940, 005e7b8a]]
// Convention: __cdecl
// Signature: CVehicle * __cdecl core_vehicle_cpp_CVehicle_ctor_FUN_005e7940(CVehicle *this_ptr)

#include "nocturne.h"

CVehicle * __cdecl core_vehicle_cpp_CVehicle_ctor_FUN_005e7940(CVehicle *this_ptr)

{
  CVehicle *pCVar2;
  CVehicle_ptr_344 pCVar3;
  CVehicle_ptr_724 pvVar2;
  CVehicle_ptr_2364 pvVar3;
  CVehicle_ptr_4128 pCVar4;

  pCVar2 = (CVehicle *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar2->model);
  pvVar2 = __arrinit
                     (ADJ(pCVar3)->extra_models,4,&g_CKeyFramedModelInstanceTypeInfo);
  pvVar3 = __arrinit(ADJ(pvVar2)->tires,4,&g_CTireTypeInfo);
  pCVar4 = core_course_cpp_CCourse_ctor_FUN_004424c0(&ADJ(pvVar3)->course);
  ADJ(pCVar4)->base.vtable._ub = &g_CVehicleVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&ADJ(pCVar4)->model,"32ford.kfm");
  ADJ(pCVar4)->tire_count = 4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&ADJ(pCVar4)->tires[0].model,"32ltire.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&ADJ(pCVar4)->tires[2].model,"32ltire.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&ADJ(pCVar4)->tires[1].model,"32rtire.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&ADJ(pCVar4)->tires[3].model,"32rtire.kfm");
  ADJ(pCVar4)->tires[0].static_bpos.x = -2.5;
  ADJ(pCVar4)->tires[0].static_bpos.y = -2.5;
  ADJ(pCVar4)->tires[0].static_bpos.z = 5.0;
  ADJ(pCVar4)->tires[0].radius = 1.25;
  ADJ(pCVar4)->tires[0].width = 0.25;
  ADJ(pCVar4)->tires[1].static_bpos.x = 2.5;
  ADJ(pCVar4)->tires[1].static_bpos.y = -2.5;
  ADJ(pCVar4)->tires[1].static_bpos.z = 5.0;
  ADJ(pCVar4)->tires[1].radius = 1.25;
  ADJ(pCVar4)->tires[1].width = 0.25;
  ADJ(pCVar4)->tires[2].static_bpos.x = -2.5;
  ADJ(pCVar4)->tires[2].static_bpos.y = -2.5;
  ADJ(pCVar4)->tires[2].static_bpos.z = -4.5;
  ADJ(pCVar4)->tires[2].radius = 1.25;
  ADJ(pCVar4)->tires[2].width = 0.25;
  ADJ(pCVar4)->tires[3].static_bpos.x = 2.5;
  ADJ(pCVar4)->tires[3].static_bpos.y = -2.5;
  ADJ(pCVar4)->tires[3].static_bpos.z = -4.5;
  ADJ(pCVar4)->tires[3].radius = 1.25;
  ADJ(pCVar4)->tires[3].width = 0.25;
  ADJ(pCVar4)->mass = 2000.0;
  (ADJ(pCVar4)->local_velocity).z = 0.0;
  (ADJ(pCVar4)->local_velocity).y = (ADJ(pCVar4)->local_velocity).z;
  (ADJ(pCVar4)->local_velocity).x = (ADJ(pCVar4)->local_velocity).y;
  (ADJ(pCVar4)->world_velocity).z = 0.0;
  (ADJ(pCVar4)->world_velocity).y = (ADJ(pCVar4)->world_velocity).z;
  (ADJ(pCVar4)->world_velocity).x = (ADJ(pCVar4)->world_velocity).y;
  ADJ(pCVar4)->unused_physics_vectors[2].z = 0.0;
  ADJ(pCVar4)->unused_physics_vectors[2].y = ADJ(pCVar4)->unused_physics_vectors[2].z;
  ADJ(pCVar4)->unused_physics_vectors[2].x = ADJ(pCVar4)->unused_physics_vectors[2].y;
  ADJ(pCVar4)->cur_time = 0.0;
  ADJ(pCVar4)->total_time = 100.0;
  strcpy(ADJ(pCVar4)->course_name,"chicpath.pth");
  ADJ(pCVar4)->is_visible = 0;
  ADJ(pCVar4)->last_mobster_left = (CDemonActor *)0x0;
  ADJ(pCVar4)->last_mobster_right = (CDemonActor *)0x0;
  return ADJ(pCVar4);
}
