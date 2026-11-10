// Name: core_stairs.cpp_CStairs_customRayIntersect_FUN_00584b00
// Address: 00584b00
// Address Range: [[00584b00, 00584c16]]
// Convention: __cdecl
// Signature: float __cdecl core_stairs_cpp_CStairs_customRayIntersect_FUN_00584b00(CStairs *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

#include "nocturne.h"

float __cdecl core_stairs_cpp_CStairs_customRayIntersect_FUN_00584b00(CStairs *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

{
  CDemonTriangle *pCVar1;
  byte bVar2;
  float afStackY_1034 [1012];
  float *pfVar3;
  float fStack_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  CVector3f CStack_34;
  float fStack_28;
  float afStack_24 [3];
  int iStack_18;
  float fStack_14;
  
  bVar2 = 0;
  afStack_24[2] = 1.01;
  pCVar1 = this_ptr->collision_triangles;
  for (iStack_18 = 0; iStack_18 < this_ptr->stair_count * 2; iStack_18 = iStack_18 + 1) {
    fStack_14 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_0048ff40
                                 (pCVar1,ray_origin,ray_direction);
    if (((0.0 <= fStack_14) && (fStack_14 < afStack_24[2])) && (fStack_14 <= 1.0)) {
      afStack_24[2] = fStack_14;
      fStack_40 = -(pCVar1->normal).x;
      pfVar3 = &fStack_28;
      fStack_3c = -(pCVar1->normal).y;
      fStack_38 = -(pCVar1->normal).z;
      fStack_28 = fStack_40;
      afStack_24[(uint)bVar2 * -2] = *(float *)((int)&stack0xffffffc4 + (uint)bVar2 * -8);
      afStack_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
           *(float *)((int)&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      core_actor_cpp_FUN_00408ac0(this_ptr,pfVar3);
      CStack_34.x = fStack_4c;
      *(uint *)((int)&CStack_34 + (uint)bVar2 * -8 + 4) =
           *(uint *)(&stack0xffffffb8 + (uint)bVar2 * -8);
      *(uint *)((int)&CStack_34 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           *(uint *)(&stack0xffffffbc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      if (&CStack_34 != out_normal) {
        out_normal->x = CStack_34.x;
        out_normal->y = CStack_34.y;
        out_normal->z = CStack_34.z;
      }
    }
    pCVar1 = pCVar1 + 1;
  }
  return afStack_24[2];
}
