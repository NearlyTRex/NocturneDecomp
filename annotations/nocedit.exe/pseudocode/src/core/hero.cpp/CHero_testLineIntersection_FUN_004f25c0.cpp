// Name: core_hero.cpp_CHero_testLineIntersection_FUN_004f25c0
// Address: 004f25c0
// Address Range: [[004f25c0, 004f2600]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_testLineIntersection_FUN_004f25c0 (CHero *this_ptr,CVector3f *line_start,CVector3f *line_end, CVector3f *out_intersection_point)

#include "nocturne.h"

int __cdecl
core_hero_cpp_CHero_testLineIntersection_FUN_004f25c0
          (CHero *this_ptr,CVector3f *line_start,CVector3f *line_end,
          CVector3f *out_intersection_point)

{
  int iVar1;
  
  if ((g_CGamePtr->debug_flag_1 == 0) && ((this_ptr->unk1 & 0x7fffffff) == 0)) {
    iVar1 = core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150
                      ((CDemonActor *)this_ptr,line_start,line_end,out_intersection_point);
    return iVar1;
  }
  return 0;
}
