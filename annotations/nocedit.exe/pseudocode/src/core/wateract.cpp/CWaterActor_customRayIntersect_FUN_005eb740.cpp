// Name: core_wateract.cpp_CWaterActor_customRayIntersect_FUN_005eb740
// Address: 005eb740
// Address Range: [[005eb740, 005eb907]]
// Convention: __cdecl
// Signature: float core_wateract.cpp_CWaterActor_customRayIntersect_FUN_005eb740(CWaterActor * this_ptr)

#include "nocturne.h"

float __cdecl core_wateract_cpp_CWaterActor_customRayIntersect_FUN_005eb740(CWaterActor *this_ptr)

{
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  float fVar2;
  char *pcVar3;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  int iVar4;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  float *in_stack_00000010;
  CVector3f *in_stack_ffffff64;
  CVector3f *in_stack_ffffff68;
  CVector3f *in_stack_ffffff6c;
  byte auStack_78 [40];
  CBoundingBox3D local_50;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  this_ptr_00 = (*((this_ptr->base_actor).vtable)->getBoundingBox)(&this_ptr->base_actor,&local_50);
  fVar2 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                    (this_ptr_00,in_stack_ffffff64,in_stack_ffffff68,in_stack_ffffff6c);
  if ((fVar2 < 0.0) || (1.0 < fVar2)) {
    auStack_78._0_4_ = 2.0;
  }
  else {
    iVar1 = *(int *)(this_ptr->field21_0x298 + 0x2af9c);
    iVar4 = 0;
    auStack_78._0_4_ = 2.0;
    pcVar3 = this_ptr->field21_0x298 + 0x7d10;
    if (0 < iVar1) {
      do {
        core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                  ((CDemonTriangle *)(auStack_78 + 4),
                   (CVector3f *)(this_ptr->field21_0x298 + *(int *)(pcVar3 + 0x18) * 0x20 + 4),
                   (CVector3f *)(this_ptr->field21_0x298 + *(int *)(pcVar3 + 0x24) * 0x20 + 4),
                   (CVector3f *)(this_ptr->field21_0x298 + *(int *)(pcVar3 + 0x30) * 0x20 + 4));
        fVar2 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                          ((CDemonTriangle *)auStack_78,in_stack_00000008,in_stack_0000000c);
        if (((fVar2 < (float)auStack_78._0_4_) && (0.0 <= fVar2)) && (fVar2 <= 1.0)) {
          fStack_24 = -local_50.min.x;
          fStack_20 = -local_50.min.y;
          fStack_1c = -local_50.min.z;
          auStack_78._0_4_ = fVar2;
          if (&fStack_18 != &fStack_24) {
            fStack_18 = fStack_24;
            fStack_14 = fStack_20;
            unaff_EBP = fStack_1c;
          }
        }
        iVar4 = iVar4 + 1;
        pcVar3 = pcVar3 + 0x48;
      } while (iVar4 < iVar1);
    }
    if (((float)auStack_78._0_4_ < 1.0) && (&fStack_18 != in_stack_00000010)) {
      *in_stack_00000010 = fStack_18;
      in_stack_00000010[1] = fStack_14;
      in_stack_00000010[2] = unaff_EBP;
    }
  }
  return (float)auStack_78._0_4_;
}
