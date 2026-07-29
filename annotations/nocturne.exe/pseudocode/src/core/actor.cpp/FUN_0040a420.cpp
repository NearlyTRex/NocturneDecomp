// Name: core_actor.cpp_FUN_0040a420
// Address: 0040a420
// Address Range: [[0040a420, 0040a536]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_FUN_0040a420(CDemonActor *this_ptr,CVector3f *line_start,CVector3f *line_end,CVector3f *out_intersection_point)

#include "nocturne.h"

int __cdecl core_actor_cpp_FUN_0040a420(CDemonActor *this_ptr,CVector3f *line_start,CVector3f *line_end,CVector3f *out_intersection_point)

{
  float fVar1;
  float fVar2;
  ECollisionType EVar3;
  float fVar4;
  SCollisionInfo local_6c;
  CVector3f CStack_38;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(&local_6c);
  local_6c.ray_query.ray_type = 0;
  EVar3 = (*((this_ptr->vtable)._ub)->getCollisionType)(this_ptr,&local_6c);
  if (EVar3 == COLLISION_TYPE_CYLINDER) {
    CStack_20.x = line_end->x - line_start->x;
    CStack_20.y = line_end->y - line_start->y;
    CStack_20.z = line_end->z - line_start->z;
    fVar4 = core_actor_cpp_rayCylinderIntersect_FUN_00409860
                      (&local_6c,line_start,&CStack_20,&CStack_2c);
    if ((0.0 <= fVar4) && (fVar4 <= 1.0)) {
      if (out_intersection_point != (CVector3f *)0x0) {
        fVar1 = line_start->y;
        fVar2 = line_start->z;
        if (out_intersection_point != &CStack_38) {
          out_intersection_point->x = line_start->x + CStack_20.x * fVar4;
          out_intersection_point->y = fVar1 + CStack_20.y * fVar4;
          out_intersection_point->z = fVar2 + CStack_20.z * fVar4;
        }
      }
      return 1;
    }
  }
  return 0;
}
