// Name: core_wateract.cpp_CWaterActor_customRayIntersect_FUN_005eb740
// Address: 005eb740
// Address Range: [[005eb740, 005eb907]]
// Convention: __cdecl
// Signature: float __cdecl core_wateract_cpp_CWaterActor_customRayIntersect_FUN_005eb740(CWaterActor *this_ptr)

#include "nocturne.h"

float __cdecl core_wateract_cpp_CWaterActor_customRayIntersect_FUN_005eb740(CWaterActor *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  float fVar1;
  char *pcVar2;
  int iVar3;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  float *in_stack_00000010;
  CVector3f *ray_origin;
  CVector3f *in_stack_ffffff60;
  CVector3f *in_stack_ffffff64;
  float fStack_84;
  byte auStack_80 [80];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  int iStack_14;
  
  ray_origin = (CVector3f *)0x0;
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                          (&this_ptr->base,(CBoundingBox3D *)(auStack_80 + 0x30));
  fVar1 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                    (this_ptr_00,ray_origin,in_stack_ffffff60,in_stack_ffffff64);
  if ((fVar1 < 0.0) || (1.0 < fVar1)) {
    fStack_18 = 2.0;
  }
  else {
    iStack_14 = *(int *)(this_ptr->unk5 + 0x2af9c);
    iVar3 = 0;
    fStack_84 = 2.0;
    pcVar2 = this_ptr->unk5 + 0x7d10;
    if (0 < iStack_14) {
      do {
        core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                  ((CDemonTriangle *)auStack_80,
                   (CVector3f *)(this_ptr->unk5 + *(int *)(pcVar2 + 0x18) * 0x20 + 4),
                   (CVector3f *)(this_ptr->unk5 + *(int *)(pcVar2 + 0x24) * 0x20 + 4),
                   (CVector3f *)(this_ptr->unk5 + *(int *)(pcVar2 + 0x30) * 0x20 + 4));
        fVar1 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                          ((CDemonTriangle *)auStack_80,in_stack_00000008,in_stack_0000000c);
        if (((fVar1 < fStack_84) && (0.0 <= fVar1)) && (fVar1 <= 1.0)) {
          fStack_30 = -(float)auStack_80._36_4_;
          fStack_2c = -(float)auStack_80._40_4_;
          fStack_28 = -(float)auStack_80._44_4_;
          fStack_84 = fVar1;
          if (&fStack_24 != &fStack_30) {
            fStack_24 = fStack_30;
            fStack_20 = fStack_2c;
            fStack_1c = fStack_28;
          }
        }
        iVar3 = iVar3 + 1;
        pcVar2 = pcVar2 + 0x48;
      } while (iVar3 < iStack_14);
    }
    if ((fStack_84 < 1.0) && (&fStack_24 != in_stack_00000010)) {
      *in_stack_00000010 = fStack_24;
      in_stack_00000010[1] = fStack_20;
      in_stack_00000010[2] = fStack_1c;
    }
    fStack_18 = fStack_84;
  }
  return fStack_18;
}
