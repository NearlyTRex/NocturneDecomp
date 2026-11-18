// Name: core_actor.cpp_CDemonActor_testLineIntersection_FUN_00408d60
// Address: 00408d60
// Address Range: [[00408d60, 00408ebc]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CDemonActor_testLineIntersection_FUN_00408d60(CDemonActor *this_ptr,CVector3f *line_start,CVector3f *line_end,CVector3f *out_intersection_point)

#include "nocturne.h"

int __cdecl core_actor_cpp_CDemonActor_testLineIntersection_FUN_00408d60(CDemonActor *this_ptr,CVector3f *line_start,CVector3f *line_end,CVector3f *out_intersection_point)

{
  ECollisionType EVar1;
  byte bVar2;
  float afStackY_1054 [1001];
  SCollisionInfo *collision_info;
  CVector3f *ray_origin;
  CVector3f *ray_direction;
  CVector3f *out_normal;
  SCollisionInfo local_94;
  float fStack_6c;
  float afStack_68 [4];
  float fStack_58;
  CVector3f CStack_54;
  CVector3f CStack_48;
  float fStack_3c;
  float afStack_38 [4];
  float fStack_28;
  CVector3f CStack_24;
  float fStack_18;
  
  bVar2 = 0;
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_005593c0(&local_94);
  local_94.ray_query.ray_type = 0;
  EVar1 = (*((this_ptr->vtable)._ub)->getCollisionType)(this_ptr,&local_94);
  if (EVar1 == COLLISION_TYPE_CYLINDER) {
    out_normal = &CStack_54;
    fStack_3c = line_end->x - line_start->x;
    ray_direction = &CStack_48;
    afStack_38[0] = line_end->y - line_start->y;
    collision_info = &local_94;
    afStack_38[1] = line_end->z - line_start->z;
    CStack_48.x = fStack_3c;
    *(float *)((int)&CStack_48 + (uint)bVar2 * -8 + 4) = afStack_38[(uint)bVar2 * -2];
    ray_origin = line_start;
    *(float *)((int)&CStack_48 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         afStack_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    fStack_18 = core_actor_cpp_rayCylinderIntersect_FUN_004080c0
                          (collision_info,ray_origin,ray_direction,out_normal);
    if ((0.0 <= fStack_18) && (fStack_18 <= 1.0)) {
      if (out_intersection_point != (CVector3f *)0x0) {
        afStack_68[2] = CStack_48.x * fStack_18;
        afStack_68[3] = CStack_48.y * fStack_18;
        fStack_58 = CStack_48.z * fStack_18;
        afStack_38[2] = CStack_48.x * fStack_18;
        afStack_38[(uint)bVar2 * -2 + 3] = afStack_68[(uint)bVar2 * -2 + 3];
        afStack_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
             afStack_68[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
        fStack_6c = line_start->x + afStack_38[2];
        afStack_68[0] = line_start->y + afStack_38[3];
        afStack_68[1] = line_start->z + fStack_28;
        CStack_24.x = fStack_6c;
        *(float *)((int)&CStack_24 + (uint)bVar2 * -8 + 4) = afStack_68[(uint)bVar2 * -2];
        *(float *)((int)&CStack_24 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
             afStack_68[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
        if (&CStack_24 != out_intersection_point) {
          out_intersection_point->x = CStack_24.x;
          out_intersection_point->y = CStack_24.y;
          out_intersection_point->z = CStack_24.z;
        }
      }
      return 1;
    }
  }
  return 0;
}
