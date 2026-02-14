// Name: core_wateract.cpp_CWaterActor_customRayIntersect_FUN_005eb740
// Address: 005eb740
// Address Range: [[005eb740, 005eb907]]
// Convention: __cdecl
// Signature: float __cdecl core_wateract_cpp_CWaterActor_customRayIntersect_FUN_005eb740(CWaterActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

#include "nocturne.h"

float __cdecl core_wateract_cpp_CWaterActor_customRayIntersect_FUN_005eb740(CWaterActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

{
  CBoundingBox3D *this_ptr_00;
  char *pcVar1;
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
  fStack_18 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                        (this_ptr_00,ray_origin_00,ray_direction_00,out_normal_00);
  if ((fStack_18 < 0.0) || (1.0 < fStack_18)) {
    fStack_20 = 2.0;
  }
  else {
    iStack_1c = *(int *)(this_ptr->unk5 + 0x2af9c);
    iVar2 = 0;
    fStack_8c = 2.0;
    pcVar1 = this_ptr->unk5 + 0x7d10;
    if (0 < iStack_1c) {
      do {
        core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                  (&CStack_88,(CVector3f *)(this_ptr->unk5 + *(int *)(pcVar1 + 0x18) * 0x20 + 4),
                   (CVector3f *)(this_ptr->unk5 + *(int *)(pcVar1 + 0x24) * 0x20 + 4),
                   (CVector3f *)(this_ptr->unk5 + *(int *)(pcVar1 + 0x30) * 0x20 + 4));
        fStack_18 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
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
        pcVar1 = pcVar1 + 0x48;
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
