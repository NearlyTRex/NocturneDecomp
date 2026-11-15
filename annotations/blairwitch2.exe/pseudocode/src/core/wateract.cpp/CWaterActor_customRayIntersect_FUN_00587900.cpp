// Name: core_wateract.cpp_CWaterActor_customRayIntersect_FUN_00587900
// Address: 00587900
// Address Range: [[00587900, 00587b57]]
// Convention: __cdecl
// Signature: float __cdecl core_wateract_cpp_CWaterActor_customRayIntersect_FUN_00587900(CWaterActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

#include "nocturne.h"

float __cdecl core_wateract_cpp_CWaterActor_customRayIntersect_FUN_00587900(CWaterActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

{
  float fVar1;
  int iVar2;
  SMRGLPrimitiveQuad *pSVar3;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  float afStackY_101c [977];
  CVector3f *ray_origin_00;
  CVector3f *in_stack_ffffff38;
  CVector3f *in_stack_ffffff3c;
  float fStack_ac;
  CDemonTriangle CStack_a8;
  CBoundingBox3D CStack_70;
  float afStack_58 [6];
  CVector3f CStack_40;
  float fStack_34;
  float afStack_30 [2];
  CVector3f CStack_28;
  int iStack_18;
  int iStack_14;
  
  bVar6 = 0;
  ray_origin_00 = (CVector3f *)0x0;
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)ray_origin);
  pfVar4 = afStack_58;
  pfVar5 = &CStack_a8.plane_distance;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
    pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
  }
  fVar1 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041af70
                    (&CStack_70,ray_origin_00,in_stack_ffffff38,in_stack_ffffff3c);
  if ((0.0 <= fVar1) && (fVar1 <= 1.0)) {
    iStack_18 = this_ptr->primitive_count;
    pSVar3 = this_ptr->primitives;
    iStack_14 = 0;
    fStack_ac = 2.0;
    if (0 < iStack_18) {
      do {
        core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
                  (&CStack_a8,&this_ptr->vertices[pSVar3->vertices[0].vertex_index].local_position,
                   &this_ptr->vertices[pSVar3->vertices[1].vertex_index].local_position,
                   &this_ptr->vertices[pSVar3->vertices[2].vertex_index].local_position);
        fVar1 = core_dtri_cpp_rayTriangleIntersection_FUN_00477a50
                          (&CStack_a8,ray_origin,ray_direction);
        if (((fVar1 < fStack_ac) && (0.0 <= fVar1)) && (fVar1 <= 1.0)) {
          fStack_34 = -CStack_a8.normal.x;
          afStack_30[0] = -CStack_a8.normal.y;
          afStack_30[1] = -CStack_a8.normal.z;
          CStack_28.x = -CStack_a8.normal.x;
          afStack_30[(uint)bVar6 * -2 + 3] = afStack_30[(uint)bVar6 * -2];
          afStack_30[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
               afStack_30[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          fStack_ac = fVar1;
          if (&CStack_40 != (CVector3f *)(afStack_30 + 2)) {
            CStack_40.x = CStack_28.x;
            CStack_40.y = CStack_28.y;
            CStack_40.z = CStack_28.z;
          }
        }
        iStack_14 = iStack_14 + 1;
        pSVar3 = pSVar3 + 1;
      } while (iStack_14 < iStack_18);
    }
    if ((fStack_ac < 1.0) && (&CStack_40 != out_normal)) {
      out_normal->x = CStack_40.x;
      out_normal->y = CStack_40.y;
      out_normal->z = CStack_40.z;
    }
    return fStack_ac;
  }
  return 2.0;
}
