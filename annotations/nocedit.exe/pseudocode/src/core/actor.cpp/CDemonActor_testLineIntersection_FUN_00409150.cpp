// Name: core_actor.cpp_CDemonActor_testLineIntersection_FUN_00409150
// Address: 00409150
// Address Range: [[00409150, 00409266]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150 (CDemonActor *this_ptr,CVector3f *line_start,CVector3f *line_end, CVector3f *out_intersection_point)

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150
          (CDemonActor *this_ptr,CVector3f *line_start,CVector3f *line_end,
          CVector3f *out_intersection_point)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  byte auStack_70 [12];
  SCollisionInfo SStack_64;
  CVector3f CStack_30;
  CVector3f CStack_24;
  float fStack_18;
  float fStack_14;
  
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)(auStack_70 + 4));
  auStack_70._4_4_ = 0;
  iVar5 = (*((this_ptr->vtable)._ub)->hasCollision)(this_ptr,(SCollisionInfo *)(auStack_70 + 4));
  if (iVar5 == 2) {
    fStack_18 = line_end->x - line_start->x;
    fStack_14 = line_end->y - line_start->y;
    fVar1 = line_end->z;
    fVar2 = line_start->z;
    fVar6 = core_actor_cpp_rayCylinderIntersect_FUN_00408340
                      (&SStack_64,line_start,(CVector3f *)&fStack_18,&CStack_24);
    if ((0.0 <= fVar6) && (fVar6 <= 1.0)) {
      if (out_intersection_point != (CVector3f *)0x0) {
        fVar3 = line_start->y;
        fVar4 = line_start->z;
        if (out_intersection_point != &CStack_30) {
          out_intersection_point->x = line_start->x + fStack_18 * fVar6;
          out_intersection_point->y = fVar3 + fStack_14 * fVar6;
          out_intersection_point->z = fVar4 + (fVar1 - fVar2) * fVar6;
        }
      }
      return 1;
    }
  }
  return 0;
}
