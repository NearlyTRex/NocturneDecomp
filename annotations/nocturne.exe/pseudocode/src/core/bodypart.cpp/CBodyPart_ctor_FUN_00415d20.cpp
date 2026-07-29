// Name: core_bodypart.cpp_CBodyPart_ctor_FUN_00415d20
// Address: 00415d20
// Address Range: [[00415d20, 00415e36]]
// Convention: __cdecl
// Signature: CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_ctor_FUN_00415d20(CBodyPart *this_ptr)

#include "nocturne.h"

CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_ctor_FUN_00415d20(CBodyPart *this_ptr)

{
  CDemonActor *pCVar1;
  void *pvVar2;
  CBox *pCVar3;
  
  pCVar1 = core_actor_cpp_FUN_00409d30(&this_ptr->base);
  pvVar2 = __arrinit
                     ((void *)((int)&pCVar1[1].previous_transform_state.orientation + 4),3,
                      &g_SBodyPartModelTypeInfo_0059a820);
  pvVar2 = __arrinit
                     ((void *)((int)pvVar2 + 0x4c0),2,&g_SBodyPartFireTypeInfo_0059a840);
  pCVar3 = core_box_cpp_CBox_ctor_FUN_0041a610((CBox *)((int)pvVar2 + 0x56c));
  pCVar3[-5].linear_velocity_local.y = (float)&g_CBodyPartVTable;
  pCVar3[1].position.y = 0.0;
  pCVar3[-5].angular_velocity.x = 0.0;
  pCVar3[-5].angular_velocity.y = 0.0;
  pCVar3[-5].angular_velocity.z = 0.0;
  pCVar3[-5].angular_velocity_temp.x = 0.0;
  pCVar3[-5].angular_velocity_temp.y = 0.0;
  pCVar3[-5].angular_velocity_temp.z = 0.0;
  pCVar3[-5].angular_momentum.x = 0.0;
  pCVar3[-5].linear_velocity_local.z = 0.0;
  pCVar3[-5].scrape_points[4].local_position.x = 0.0;
  pCVar3[-5].scrape_points[3].raytrace_normal.z = pCVar3[-5].scrape_points[4].local_position.x;
  pCVar3[-5].scrape_points[3].raytrace_normal.y = pCVar3[-5].scrape_points[3].raytrace_normal.z;
  pCVar3[-3].scrape_points[4].transformed_position.z = 0.0;
  pCVar3[-5].scrape_points[4].local_position.y = 0.0;
  pCVar3[-1].scrape_points[7].raytrace_normal.x = 5.0;
  pCVar3[-1].scrape_points[7].raytrace_intersection = 0.0;
  pCVar3[-1].scrape_points[7].raytrace_normal.y = 9.18341e-41;
  pCVar3[1].position.z = 0.0;
  pCVar3[-1].scrape_points[7].raytrace_normal.z = 0.0;
  pCVar3[-1].is_valid = 0;
  return (CBodyPart *)&pCVar3[-6].scrape_points[3].transformed_position;
}
