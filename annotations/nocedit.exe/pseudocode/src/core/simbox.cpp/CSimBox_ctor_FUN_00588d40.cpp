// Name: core_simbox.cpp_CSimBox_ctor_FUN_00588d40
// Address: 00588d40
// Address Range: [[00588d40, 00588dfe]]
// Convention: __cdecl
// Signature: CSimBox * core_simbox.cpp_CSimBox_ctor_FUN_00588d40(CSimBox * this_ptr)

#include "nocturne.h"

CSimBox * __cdecl core_simbox_cpp_CSimBox_ctor_FUN_00588d40(CSimBox *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *pCVar3;
  CBox *pCVar4;
  char *pcVar5;
  float *pfVar6;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pCVar4 = core_box_cpp_CBox_ctor_FUN_0041dc50((CBox *)(pCVar3[1].model_name + 0xc));
  pCVar4[-1].linear_velocity_local.z = (float)&g_CSimBoxVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)&pCVar4[-1].linear_velocity_temp,"question.kfm");
  pcVar5 = "none";
  pfVar6 = &pCVar4[-1].scrape_points[5].raytrace_intersection;
  do {
    cVar1 = *pcVar5;
    *(char *)pfVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    *(char *)((int)pfVar6 + 1) = cVar1;
    pfVar6 = (float *)((int)pfVar6 + 2);
  } while (cVar1 != '\0');
  pCVar4[-1].scrape_points[7].raytrace_normal.x = 0.0;
  pCVar4[-1].scrape_points[7].raytrace_intersection = pCVar4[-1].scrape_points[7].raytrace_normal.x;
  pCVar4[-1].scrape_points[7].previous_position.z =
       pCVar4[-1].scrape_points[7].raytrace_intersection;
  pCVar4[-1].is_valid = 0;
  pCVar4[-1].scrape_points[7].raytrace_normal.z = (float)pCVar4[-1].is_valid;
  pCVar4[-1].scrape_points[7].raytrace_normal.y = pCVar4[-1].scrape_points[7].raytrace_normal.z;
  pCVar4[-1].scrape_points[5].previous_position.y = 0.0;
  pCVar4[-1].scrape_points[5].previous_position.z = 100.0;
  return (CSimBox *)&pCVar4[-2].scrape_points[3].local_position.z;
}
