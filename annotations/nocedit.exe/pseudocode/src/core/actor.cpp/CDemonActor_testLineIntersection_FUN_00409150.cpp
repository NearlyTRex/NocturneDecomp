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
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  BADSPACEBASE *in_ESP;
  SCollisionInfo SStack_54;
  CVector3f CStack_1c;
  
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)&stack0xffffff94);
  iVar7 = (*this_ptr->vtable->hasCollision)(this_ptr,(SCollisionInfo *)&stack0xffffff98);
  if (iVar7 == 2) {
    fVar1 = line_end->y;
    fVar2 = line_start->y;
    fVar3 = line_end->z;
    fVar4 = line_start->z;
    fVar8 = core_actor_cpp_rayCylinderIntersect_FUN_00408340
                      (&SStack_54,line_start,(CVector3f *)&stack0xfffffff8,(CVector3f *)&CStack_1c.z
                      );
    if ((0.0 <= fVar8) && (fVar8 <= 1.0)) {
      if (out_intersection_point != (CVector3f *)0x0) {
        fVar5 = line_start->y;
        fVar6 = line_start->z;
        if (out_intersection_point != &CStack_1c) {
          out_intersection_point->x = line_start->x + (fVar1 - fVar2) * fVar8;
          out_intersection_point->y = fVar5 + (fVar3 - fVar4) * fVar8;
          out_intersection_point->z = fVar6 + (float)this_ptr * fVar8;
        }
      }
      return 1;
    }
  }
  return 0;
}
