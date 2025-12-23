// Name: core_actor.cpp_CDemonActor_testLineIntersection_FUN_00409150
// Address: 00409150
// Address Range: [[00409150, 00409266]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_testLineIntersection_FUN_00409150(CDemonActor * this_ptr, CVector3f * line_start, CVector3f * line_end, CVector3f * out_intersection_point)

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150
          (CDemonActor *this_ptr,CVector3f *line_start,CVector3f *line_end,
          CVector3f *out_intersection_point)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  BADSPACEBASE *in_ESP;
  byte local_6c [56];
  byte auStack_34 [20];
  CVector3f CStack_20;
  float fStack_14;
  
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)local_6c);
  local_6c._4_4_ = 0.0;
  iVar3 = (*this_ptr->vtable->hasCollision)(this_ptr,(SCollisionInfo *)(local_6c + 4));
  if (iVar3 == 2) {
    CStack_20.x = line_end->x - line_start->x;
    CStack_20.y = line_end->y - line_start->y;
    CStack_20.z = line_end->z - line_start->z;
    fVar4 = core_actor_cpp_rayCylinderIntersect_FUN_00408340
                      ((SCollisionInfo *)local_6c,line_start,&CStack_20,
                       (CVector3f *)(auStack_34 + 8));
    if ((0.0 <= fVar4) && (fVar4 <= 1.0)) {
      if (out_intersection_point != (CVector3f *)0x0) {
        fVar1 = line_start->y;
        fVar2 = line_start->z;
        if (out_intersection_point != (CVector3f *)auStack_34) {
          out_intersection_point->x = line_start->x + CStack_20.y * fVar4;
          out_intersection_point->y = fVar1 + CStack_20.z * fVar4;
          out_intersection_point->z = fVar2 + fStack_14 * fVar4;
        }
      }
      return 1;
    }
  }
  return 0;
}
