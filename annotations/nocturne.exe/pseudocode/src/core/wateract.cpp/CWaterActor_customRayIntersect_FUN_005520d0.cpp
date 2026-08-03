// Name: core_wateract.cpp_CWaterActor_customRayIntersect_FUN_005520d0
// Address: 005520d0
// Address Range: [[005520d0, 00552297]]
// Convention: __cdecl
// Signature: float __cdecl core_wateract_cpp_CWaterActor_customRayIntersect_FUN_005520d0(CWaterActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

#include "nocturne.h"

float __cdecl core_wateract_cpp_CWaterActor_customRayIntersect_FUN_005520d0(CWaterActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

{
  CBoundingBox3D *this_ptr_00;
  SMRGLPrimitiveQuad *pSVar1;
  int iVar2;
  CVector3f *ray_origin_00;
  CVector3f *ray_direction_00;
  CVector3f *out_normal_00;
  float fStack_8c;
  CDemonTriangle CStack_88;
  CBoundingBox3D local_50;
  CVector3f CStack_38;
  CVector3f CStack_2c;
  float fStack_20;
  int iStack_1c;
  float fStack_18;
  
  out_normal_00 = (CVector3f *)0x0;
  ray_origin_00 = ray_origin;
  ray_direction_00 = ray_direction;
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_50);
  fStack_18 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550
                        (this_ptr_00,ray_origin_00,ray_direction_00,out_normal_00);
  if ((fStack_18 < 0.0) || (1.0 < fStack_18)) {
    fStack_20 = 2.0;
  }
  else {
    iStack_1c = this_ptr->primitive_count;
    iVar2 = 0;
    fStack_8c = 2.0;
    pSVar1 = this_ptr->primitives;
    if (0 < iStack_1c) {
      do {
        core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                  (&CStack_88,&this_ptr->vertices[pSVar1->vertices[0].vertex_index].local_position,
                   &this_ptr->vertices[pSVar1->vertices[1].vertex_index].local_position,
                   &this_ptr->vertices[pSVar1->vertices[2].vertex_index].local_position);
        fStack_18 = core_dtri_cpp_rayTriangleIntersection_FUN_0046c620
                              (&CStack_88,ray_origin,ray_direction);
        if (((fStack_18 < fStack_8c) && (0.0 <= fStack_18)) && (fStack_18 <= 1.0)) {
          CStack_38.x = -CStack_88.normal.x;
          CStack_38.y = -CStack_88.normal.y;
          CStack_38.z = -CStack_88.normal.z;
          fStack_8c = fStack_18;
          if (&CStack_2c != &CStack_38) {
            CStack_2c.x = CStack_38.x;
            CStack_2c.y = CStack_38.y;
            CStack_2c.z = CStack_38.z;
          }
        }
        iVar2 = iVar2 + 1;
        pSVar1 = pSVar1 + 1;
      } while (iVar2 < iStack_1c);
    }
    if ((fStack_8c < 1.0) && (&CStack_2c != out_normal)) {
      out_normal->x = CStack_2c.x;
      out_normal->y = CStack_2c.y;
      out_normal->z = CStack_2c.z;
    }
    fStack_20 = fStack_8c;
  }
  return fStack_20;
}
