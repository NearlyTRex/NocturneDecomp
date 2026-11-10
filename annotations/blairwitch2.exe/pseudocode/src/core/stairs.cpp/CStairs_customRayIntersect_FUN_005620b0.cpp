// Name: core_stairs.cpp_CStairs_customRayIntersect_FUN_005620b0
// Address: 005620b0
// Address Range: [[005620b0, 0056219e]]
// Convention: __cdecl
// Signature: float __cdecl core_stairs_cpp_CStairs_customRayIntersect_FUN_005620b0(CStairs *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

#include "nocturne.h"

float __cdecl core_stairs_cpp_CStairs_customRayIntersect_FUN_005620b0(CStairs *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

{
  CDemonTriangle *pCVar1;
  byte bVar2;
  float afStackY_101c [1012];
  float fStack_30;
  float fStack_2c;
  CVector3f CStack_28;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar2 = 0;
  fStack_1c = 1.01;
  pCVar1 = this_ptr->collision_triangles;
  for (iStack_18 = 0; iStack_18 < this_ptr->stair_count * 2; iStack_18 = iStack_18 + 1) {
    fStack_14 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_00477a50
                                 (pCVar1,ray_origin,ray_direction);
    if (((0.0 <= fStack_14) && (fStack_14 < fStack_1c)) && (fStack_14 <= 1.0)) {
      fStack_1c = fStack_14;
      fStack_30 = -(pCVar1->normal).y;
      fStack_2c = -(pCVar1->normal).z;
      CStack_28.x = -(pCVar1->normal).x;
      *(uint *)((int)&CStack_28 + (uint)bVar2 * -8 + 4) =
           *(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8);
      *(uint *)((int)&CStack_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           *(uint *)((int)&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      if (&CStack_28 != out_normal) {
        out_normal->x = CStack_28.x;
        out_normal->y = CStack_28.y;
        out_normal->z = CStack_28.z;
      }
    }
    pCVar1 = pCVar1 + 1;
  }
  return fStack_1c;
}
