// Name: core_wateract.cpp_CWaterActor_customRayIntersect_FUN_005eb740
// Address: 005eb740
// MANUAL RECONSTRUCTION
// Address Range: [[005eb740, 005eb907]]
// Convention: __cdecl
// Signature: float __cdecl core_wateract_cpp_CWaterActor_customRayIntersect_FUN_005eb740(CWaterActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

#include "nocturne.h"

float __cdecl core_wateract_cpp_CWaterActor_customRayIntersect_FUN_005eb740(CWaterActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

{
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  float fVar2;
  SMRGLPrimitiveQuad *pSVar1;
  int iVar2;
  float fStack_8c;
  CDemonTriangle CStack_88;
  CBoundingBox3D local_50;
  CVector3f CStack_38;
  CVector3f CStack_2c;
  float fStack_20;
  CVector3f *out_normal_00;
  CVector3f *ray_origin_00;
  CVector3f *ray_direction_00;
  
  out_normal_00 = (CVector3f *)0x0;
  ray_origin_00 = ray_origin;
  ray_direction_00 = ray_direction;
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_50);
  fVar2 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                    (this_ptr_00,ray_origin_00,ray_direction_00,out_normal_00);
  if ((fVar2 < 0.0) || (1.0 < fVar2)) {
    fStack_20 = 2.0;
  }
  else {
    iVar1 = this_ptr->primitive_count;
    iVar2 = 0;
    fStack_8c = 2.0;
    pSVar1 = this_ptr->primitives;
    if (0 < iVar1) {
      do {
        core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                  (&CStack_88,&this_ptr->vertices[pSVar1->vertices[0].vertex_index].local_position,
                   &this_ptr->vertices[pSVar1->vertices[1].vertex_index].local_position,
                   &this_ptr->vertices[pSVar1->vertices[2].vertex_index].local_position);
        fVar2 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                          (&CStack_88,ray_origin,ray_direction);
        if (((fVar2 < fStack_8c) && (0.0 <= fVar2)) && (fVar2 <= 1.0)) {
          CStack_38.x = -CStack_88.normal.x;
          CStack_38.y = -CStack_88.normal.y;
          CStack_38.z = -CStack_88.normal.z;
          fStack_8c = fVar2;
          CStack_2c = CStack_38;
        }
        iVar2 = iVar2 + 1;
        pSVar1 = pSVar1 + 1;
      } while (iVar2 < iVar1);
    }
    if ((fStack_8c < 1.0) && (&CStack_2c != out_normal)) {
      *out_normal = CStack_2c;
    }
    fStack_20 = fStack_8c;
  }
  return fStack_20;
}
