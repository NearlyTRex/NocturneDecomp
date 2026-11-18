// Name: core_stairs.cpp_CStairs_customRayIntersect_FUN_00568570
// Address: 00568570
// Address Range: [[00568570, 00568686]]
// Convention: __cdecl
// Signature: float __cdecl core_stairs_cpp_CStairs_customRayIntersect_FUN_00568570(CStairs *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

#include "nocturne.h"

float __cdecl core_stairs_cpp_CStairs_customRayIntersect_FUN_00568570(CStairs *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

{
  CDemonTriangle *triangle;
  byte bVar1;
  float afStackY_1034 [1012];
  CVector3f *input;
  CVector3f CStack_4c;
  float fStack_40;
  float afStack_3c [2];
  CVector3f CStack_34;
  CVector3f CStack_28;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar1 = 0;
  fStack_1c = 1.01;
  triangle = this_ptr->collision_triangles;
  for (iStack_18 = 0; iStack_18 < this_ptr->stair_count * 2; iStack_18 = iStack_18 + 1) {
    fStack_14 = core_dtri_cpp_rayTriangleIntersection_FUN_00478ac0
                          (triangle,ray_origin,ray_direction);
    if (((0.0 <= fStack_14) && (fStack_14 < fStack_1c)) && (fStack_14 <= 1.0)) {
      fStack_1c = fStack_14;
      fStack_40 = -(triangle->normal).x;
      input = &CStack_28;
      afStack_3c[0] = -(triangle->normal).y;
      afStack_3c[1] = -(triangle->normal).z;
      CStack_28.x = fStack_40;
      *(float *)((int)&CStack_28 + (uint)bVar1 * -8 + 4) = afStack_3c[(uint)bVar1 * -2];
      *(float *)((int)&CStack_28 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
           afStack_3c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
      core_actor_cpp_CDemonActor_transformVector_FUN_00408b00(&this_ptr->base,input,&CStack_4c);
      CStack_34.x = CStack_4c.x;
      *(uint *)((int)&CStack_34 + (uint)bVar1 * -8 + 4) =
           *(uint *)((int)&CStack_4c + (uint)bVar1 * -8 + 4);
      *(uint *)((int)&CStack_34 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
           *(uint *)((int)&CStack_4c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
      if (&CStack_34 != out_normal) {
        out_normal->x = CStack_34.x;
        out_normal->y = CStack_34.y;
        out_normal->z = CStack_34.z;
      }
    }
    triangle = triangle + 1;
  }
  return fStack_1c;
}
