// Name: core_wateract.cpp_CWaterActor_customRayIntersect_FUN_005ab530
// Address: 005ab530
// Address Range: [[005ab530, 005ab7b3]]
// Convention: __cdecl
// Signature: float __cdecl core_wateract_cpp_CWaterActor_customRayIntersect_FUN_005ab530(CWaterActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

#include "nocturne.h"

float __cdecl core_wateract_cpp_CWaterActor_customRayIntersect_FUN_005ab530(CWaterActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

{
  float fVar1;
  int iVar2;
  SMRGLPrimitiveQuad *pSVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1048 [982];
  float fStack_d0;
  CDemonTriangle CStack_c8;
  uint auStack_90 [6];
  uint auStack_78 [6];
  float fStack_60;
  float afStack_5c [2];
  CVector3f CStack_54;
  float afStack_48 [4];
  float afStack_38 [4];
  float fStack_28;
  int iStack_24;
  SWaterVertex *pSStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar6 = 0;
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)ray_origin);
  puVar4 = auStack_90;
  puVar5 = auStack_78;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  fStack_14 = (float)core_box_cpp_FUN_00420ee0(auStack_78);
  if ((0.0 <= fStack_14) && (fStack_14 <= 1.0)) {
    iStack_24 = this_ptr->primitive_count;
    pSVar3 = this_ptr->primitives;
    iStack_18 = 0;
    fStack_d0 = 2.0;
    if (0 < iStack_24) {
      pSStack_1c = this_ptr->vertices;
      do {
        core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
                  (&CStack_c8,&pSStack_1c[pSVar3->vertices[0].vertex_index].local_position,
                   &pSStack_1c[pSVar3->vertices[1].vertex_index].local_position,
                   &pSStack_1c[pSVar3->vertices[2].vertex_index].local_position);
        fVar1 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_0048ff40
                                 (&CStack_c8,ray_origin,ray_direction);
        fStack_14 = fVar1;
        if (((fVar1 < fStack_d0) && (0.0 <= fVar1)) && (fVar1 <= 1.0)) {
          afStack_38[2] = -CStack_c8.normal.x;
          afStack_38[3] = -CStack_c8.normal.y;
          fStack_28 = -CStack_c8.normal.z;
          fStack_60 = -CStack_c8.normal.x;
          afStack_5c[(uint)bVar6 * -2] = afStack_38[(uint)bVar6 * -2 + 3];
          afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               afStack_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
          fStack_d0 = fVar1;
          if (afStack_48 != &fStack_60) {
            afStack_48[0] = fStack_60;
          }
        }
        iStack_18 = iStack_18 + 1;
        pSVar3 = pSVar3 + 1;
      } while (iStack_18 < iStack_24);
    }
    if (fStack_d0 < 1.0) {
      core_actor_cpp_FUN_00408ac0(this_ptr,afStack_48);
      CStack_54.x = afStack_48[3];
      afStack_48[(uint)bVar6 * -2 + -2] = afStack_38[(uint)bVar6 * -2];
      afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -1] =
           afStack_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      if (&CStack_54 != out_normal) {
        out_normal->x = CStack_54.x;
        out_normal->y = CStack_54.y;
        out_normal->z = CStack_54.z;
      }
    }
    return fStack_d0;
  }
  return 2.0;
}
