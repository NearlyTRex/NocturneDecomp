// Name: core_wateract.cpp_CWaterActor_customRayIntersect_FUN_005520d0
// Address: 005520d0
// Address Range: [[005520d0, 00552297]]
// Convention: unknown
// Signature: float core_wateract_cpp_CWaterActor_customRayIntersect_FUN_005520d0(int param_1,CVector3f *param_2,CVector3f *param_3,float *param_4)

#include "nocturne.h"

float core_wateract_cpp_CWaterActor_customRayIntersect_FUN_005520d0(int param_1,CVector3f *param_2,CVector3f *param_3,float *param_4)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  int iVar2;
  CVector3f *ray_origin;
  CVector3f *ray_direction;
  CVector3f *out_normal;
  float fStack_8c;
  CDemonTriangle CStack_88;
  byte local_50 [24];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  int iStack_1c;
  float fStack_18;
  
  out_normal = (CVector3f *)0x0;
  ray_origin = param_2;
  ray_direction = param_3;
  this_ptr = (CBoundingBox3D *)(**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_50);
  fStack_18 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550
                        (this_ptr,ray_origin,ray_direction,out_normal);
  if ((fStack_18 < 0.0) || (1.0 < fStack_18)) {
    fStack_20 = 2.0;
  }
  else {
    iStack_1c = *(int *)(param_1 + 0x2b22c);
    iVar2 = 0;
    fStack_8c = 2.0;
    iVar1 = param_1 + 0x7fa0;
    if (0 < iStack_1c) {
      param_1 = param_1 + 0x294;
      do {
        core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                  (&CStack_88,(CVector3f *)(*(int *)(iVar1 + 0x18) * 0x20 + param_1),
                   (CVector3f *)(*(int *)(iVar1 + 0x24) * 0x20 + param_1),
                   (CVector3f *)(*(int *)(iVar1 + 0x30) * 0x20 + param_1));
        fStack_18 = core_dtri_cpp_rayTriangleIntersection_FUN_0046c620(&CStack_88,param_2,param_3);
        if (((fStack_18 < fStack_8c) && (0.0 <= fStack_18)) && (fStack_18 <= 1.0)) {
          fStack_38 = -CStack_88.normal.x;
          fStack_34 = -CStack_88.normal.y;
          fStack_30 = -CStack_88.normal.z;
          fStack_8c = fStack_18;
          if (&fStack_2c != &fStack_38) {
            fStack_2c = fStack_38;
            fStack_28 = fStack_34;
            fStack_24 = fStack_30;
          }
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x48;
      } while (iVar2 < iStack_1c);
    }
    if ((fStack_8c < 1.0) && (&fStack_2c != param_4)) {
      *param_4 = fStack_2c;
      param_4[1] = fStack_28;
      param_4[2] = fStack_24;
    }
    fStack_20 = fStack_8c;
  }
  return fStack_20;
}
