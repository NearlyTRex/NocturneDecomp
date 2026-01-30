// Name: core_bodypart.cpp_CBodyPart_ctor_FUN_00419010
// Address: 00419010
// Address Range: [[00419010, 00419126]]
// Convention: __cdecl
// Signature: CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_ctor_FUN_00419010(CBodyPart *this_ptr)

#include "nocturne.h"

CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_ctor_FUN_00419010(CBodyPart *this_ptr)

{
  CBodyPart *pCVar1;
  void *pvVar1;
  CBox *pCVar2;
  
  pCVar1 = (CBodyPart *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pvVar1 = __arrinit(pCVar1->unk + 0x138,3,&g_SBodyPartModelTypeInfo);
  pvVar1 = __arrinit
                     ((void *)((int)pvVar1 + 0x4c0),2,&g_SBodyPartFireTypeInfo);
  pCVar2 = core_box_cpp_CBox_ctor_FUN_0041dc50((CBox *)((int)pvVar1 + 0x57c));
  pCVar2[-5].linear_velocity.x = (float)&g_CBodyPartVTable;
  pCVar2[1].position.y = 0.0;
  pCVar2[-5].linear_velocity_temp.z = 0.0;
  pCVar2[-5].linear_momentum.x = 0.0;
  pCVar2[-5].linear_momentum.y = 0.0;
  pCVar2[-5].linear_momentum.z = 0.0;
  pCVar2[-5].angular_velocity.x = 0.0;
  pCVar2[-5].angular_velocity.y = 0.0;
  pCVar2[-5].angular_velocity.z = 0.0;
  pCVar2[-5].linear_velocity.y = 0.0;
  pCVar2[-5].scrape_points[3].raytrace_intersection = 0.0;
  pCVar2[-5].scrape_points[3].previous_position.z =
       pCVar2[-5].scrape_points[3].raytrace_intersection;
  pCVar2[-5].scrape_points[3].previous_position.y = pCVar2[-5].scrape_points[3].previous_position.z;
  pCVar2[-3].scrape_points[4].local_position.y = 0.0;
  pCVar2[-5].scrape_points[3].raytrace_normal.x = 0.0;
  pCVar2[-1].scrape_points[7].raytrace_normal.x = 5.0;
  pCVar2[-1].scrape_points[7].raytrace_intersection = 0.0;
  pCVar2[-1].scrape_points[7].raytrace_normal.y = 9.18341e-41;
  pCVar2[1].position.z = 0.0;
  pCVar2[-1].scrape_points[7].raytrace_normal.z = 0.0;
  pCVar2[-1].is_valid = 0;
  return (CBodyPart *)&pCVar2[-6].scrape_points[2].raytrace_normal;
}
