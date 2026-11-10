// Name: core_bodypart.cpp_CBodyPart_ctor_FUN_00418b40
// Address: 00418b40
// Address Range: [[00418b40, 00418c60]]
// Convention: __cdecl
// Signature: CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_ctor_FUN_00418b40(CBodyPart *this_ptr)

#include "nocturne.h"

CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_ctor_FUN_00418b40(CBodyPart *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  CBox *pCVar3;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004085c0(&this_ptr->base);
  iVar2 = __arrinit
                    ((byte *)((int)&pCVar1[1].previous_transform_state.orientation + 4),3,
                     &g_SBodyPartModelTypeInfo);
  iVar2 = __arrinit(iVar2 + 0x4c0,2,&g_SBodyPartFireTypeInfo);
  pCVar3 = core_box_cpp_CBox_ctor_FUN_0041da00((CBox *)(iVar2 + 0x580));
  pCVar3[-5].dead = (int)&g_CBodyPartVTable;
  pCVar3[1].position.y = 0.0;
  pCVar3[-5].linear_velocity_temp.y = 0.0;
  pCVar3[-5].linear_velocity_temp.z = 0.0;
  pCVar3[-5].linear_momentum.x = 0.0;
  pCVar3[-5].linear_momentum.y = 0.0;
  pCVar3[-5].linear_momentum.z = 0.0;
  pCVar3[-5].angular_velocity.x = 0.0;
  pCVar3[-5].angular_velocity.y = 0.0;
  pCVar3[-5].linear_velocity.x = 0.0;
  pCVar3[-5].scrape_points[3].previous_position.z = 0.0;
  pCVar3[-5].scrape_points[3].previous_position.y = pCVar3[-5].scrape_points[3].previous_position.z;
  pCVar3[-5].scrape_points[3].previous_position.x = pCVar3[-5].scrape_points[3].previous_position.y;
  pCVar3[-3].scrape_points[4].local_position.x = 0.0;
  pCVar3[-5].scrape_points[3].raytrace_intersection = 0.0;
  pCVar3[-1].scrape_points[7].raytrace_intersection = 5.0;
  pCVar3[-1].scrape_points[7].previous_position.z = 0.0;
  pCVar3[-1].scrape_points[7].raytrace_normal.x = 9.18341e-41;
  pCVar3[1].position.z = 0.0;
  pCVar3[-1].scrape_points[7].raytrace_normal.y = 0.0;
  pCVar3[-1].scrape_points[7].raytrace_normal.z = 0.0;
  pCVar3[-1].is_valid = 0;
  return (CBodyPart *)&pCVar3[-6].scrape_points[2].raytrace_intersection;
}
