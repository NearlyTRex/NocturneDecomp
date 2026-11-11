// Name: core_bodypart.cpp_CBodyPart_ctor_FUN_004156e0
// Address: 004156e0
// Address Range: [[004156e0, 004157f6]]
// Convention: __cdecl
// Signature: CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_ctor_FUN_004156e0(CBodyPart *this_ptr)

#include "nocturne.h"

CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_ctor_FUN_004156e0(CBodyPart *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  CBox *pCVar3;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408790(&this_ptr->base);
  iVar2 = __arrinit
                    (&pCVar1[1].previous_transform_state.orientation,3,&g_SBodyPartModelTypeInfo);
  iVar2 = __arrinit(iVar2 + 0x4c0,2,&g_SBodyPartFireTypeInfo);
  pCVar3 = core_box_cpp_CBox_ctor_FUN_005b1bc0((CBox *)(iVar2 + 0x834));
  pCVar3[-7].scrape_points[7].previous_position.x = (float)&g_CBodyPartVTable;
  pCVar3[1].position.y = 0.0;
  pCVar3[-6].position.x = 0.0;
  pCVar3[-6].position.y = 0.0;
  pCVar3[-6].position.z = 0.0;
  pCVar3[-6].orientation.x = 0.0;
  pCVar3[-6].orientation.y = 0.0;
  pCVar3[-6].orientation.z = 0.0;
  pCVar3[-6].rotation_matrix.m[0].x = 0.0;
  pCVar3[-7].scrape_points[7].previous_position.y = 0.0;
  pCVar3[-6].scrape_points[1].raytrace_normal.y = 0.0;
  pCVar3[-6].scrape_points[1].raytrace_normal.x = pCVar3[-6].scrape_points[1].raytrace_normal.y;
  pCVar3[-6].scrape_points[1].raytrace_intersection = pCVar3[-6].scrape_points[1].raytrace_normal.x;
  pCVar3[-4].scrape_points[2].transformed_position.x = 0.0;
  pCVar3[-6].scrape_points[1].raytrace_normal.z = 0.0;
  pCVar3[-1].scrape_points[7].raytrace_normal.x = 5.0;
  pCVar3[-1].scrape_points[7].raytrace_intersection = 0.0;
  pCVar3[-1].scrape_points[7].raytrace_normal.y = 9.18341e-41;
  pCVar3[1].position.z = 0.0;
  pCVar3[-1].scrape_points[7].raytrace_normal.z = 0.0;
  pCVar3[-1].is_valid = 0;
  return (CBodyPart *)&pCVar3[-8].scrape_points[5].raytrace_normal;
}
