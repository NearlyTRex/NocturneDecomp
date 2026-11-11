// Name: core_hero.cpp_CHero_testLineIntersection_FUN_004ce540
// Address: 004ce540
// Address Range: [[004ce540, 004ce580]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_testLineIntersection_FUN_004ce540(CHero *this_ptr,CVector3f *line_start,CVector3f *line_end,CVector3f *out_intersection_point)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_testLineIntersection_FUN_004ce540(CHero *this_ptr,CVector3f *line_start,CVector3f *line_end,CVector3f *out_intersection_point)

{
  int iVar1;
  
  if ((g_CGamePtr->god_mode_enabled == 0) && (ABS(this_ptr->invincibility_timer) == 0.0)) {
    iVar1 = core_actor_cpp_CDemonActor_testLineIntersection_FUN_00408f90
                      ((CDemonActor *)this_ptr,line_start,line_end,out_intersection_point);
    return iVar1;
  }
  return 0;
}
