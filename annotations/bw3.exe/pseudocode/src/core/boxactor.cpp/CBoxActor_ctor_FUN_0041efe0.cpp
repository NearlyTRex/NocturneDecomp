// Name: core_boxactor.cpp_CBoxActor_ctor_FUN_0041efe0
// Address: 0041efe0
// Address Range: [[0041efe0, 0041f12e]]
// Convention: __cdecl
// Signature: CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_ctor_FUN_0041efe0(CBoxActor *this_ptr)

#include "nocturne.h"

CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_ctor_FUN_0041efe0(CBoxActor *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *pCVar2;
  CBox *pCVar3;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408600(&this_ptr->base);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500
                     ((CKeyFramedModelInstance *)(pCVar1 + 1));
  pCVar3 = core_box_cpp_CBox_ctor_FUN_0041ad40((CBox *)(pCVar2[1].model_name + 0x48));
  pCVar3[-1].rotation_matrix.m[0].x = (float)&g_CBoxActorVTable;
  pCVar3[-1].is_valid = 0;
  pCVar3[-1].scrape_points[5].previous_position.x = 20.0;
  pCVar3[-1].scrape_points[5].previous_position.y = 0.0;
  pCVar3[-1].scrape_points[5].transformed_position.z = 0.0;
  pCVar3[-1].scrape_points[5].transformed_position.y =
       pCVar3[-1].scrape_points[5].transformed_position.z;
  pCVar3[-1].scrape_points[5].transformed_position.x =
       pCVar3[-1].scrape_points[5].transformed_position.y;
  *(byte *)&pCVar3[-1].scrape_points[4].transformed_position.z = 0;
  *(byte *)&pCVar3[-1].scrape_points[4].raytrace_normal.x = 0;
  pCVar3[-1].scrape_points[5].local_position.z = 0.0;
  pCVar3[-1].scrape_points[5].previous_position.z = 0.0;
  pCVar3[-1].scrape_points[5].raytrace_normal.x = 0.0;
  pCVar3[-1].scrape_points[5].raytrace_intersection = 0.0;
  pCVar3[-1].scrape_points[5].raytrace_normal.y = 0.0;
  *(byte *)&pCVar3[-1].scrape_points[6].local_position.y = 0;
  pCVar3[-1].scrape_points[5].raytrace_normal.z = 0.0;
  pCVar3[1].position.y = 0.0;
  pCVar3[1].scrape_points[1].local_position.y = 0.0;
  pCVar3[1].scrape_points[1].local_position.x = pCVar3[1].scrape_points[1].local_position.y;
  pCVar3[1].scrape_points[0].raytrace_normal.z = pCVar3[1].scrape_points[1].local_position.x;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&pCVar3[-1].rotation_matrix.m[0].y,
             "?question.kfm" + 1);
  pCVar3->is_valid = -1;
  pCVar3[1].position.z = 1.4013e-45;
  pCVar3[1].orientation.x = 1.4013e-45;
  pCVar3[1].orientation.y = 0.0;
  *(byte *)&pCVar3[1].orientation.z = 0;
  *(byte *)&pCVar3[1].angular_velocity.z = 0;
  pCVar3[1].scrape_points[0].raytrace_normal.x = 0.0;
  pCVar3[1].scrape_points[0].raytrace_normal.y = 0.0;
  pCVar3[1].scrape_points[1].transformed_position.x = 2.0;
  return (CBoxActor *)(pCVar3[-2].scrape_points + 2);
}
