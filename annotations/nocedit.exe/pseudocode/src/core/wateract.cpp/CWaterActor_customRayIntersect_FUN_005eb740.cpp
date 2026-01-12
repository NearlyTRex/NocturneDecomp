// Name: core_wateract.cpp_CWaterActor_customRayIntersect_FUN_005eb740
// Address: 005eb740
// Address Range: [[005eb740, 005eb907]]
// Convention: __cdecl
// Signature: float core_wateract.cpp_CWaterActor_customRayIntersect_FUN_005eb740(CWaterActor * this_ptr)

#include "nocturne.h"

float __cdecl core_wateract_cpp_CWaterActor_customRayIntersect_FUN_005eb740(CWaterActor *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  float fVar1;
  char *pcVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  float *in_stack_00000010;
  ulonglong in_stack_ffffff64;
  CVector3f *in_stack_ffffff6c;
  float fStack_88;
  CDemonTriangle CStack_84;
  CBoundingBox3D CStack_4c;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_18;
  
  this_ptr_00 = (*((this_ptr->base_actor).vtable)->getBoundingBox)(&this_ptr->base_actor,&CStack_4c)
  ;
  fVar1 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                    (this_ptr_00,(CVector3f *)in_stack_ffffff64,
                     (CVector3f *)((ulonglong)in_stack_ffffff64 >> 0x20),in_stack_ffffff6c);
  if ((fVar1 < 0.0) || (1.0 < fVar1)) {
    fStack_1c = 2.0;
  }
  else {
    iStack_18 = *(int *)(this_ptr->field21_0x298 + 0x2af9c);
    iVar3 = 0;
    fStack_88 = 2.0;
    pcVar2 = this_ptr->field21_0x298 + 0x7d10;
    if (0 < iStack_18) {
      do {
        core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                  (&CStack_84,
                   (CVector3f *)(this_ptr->field21_0x298 + *(int *)(pcVar2 + 0x18) * 0x20 + 4),
                   (CVector3f *)(this_ptr->field21_0x298 + *(int *)(pcVar2 + 0x24) * 0x20 + 4),
                   (CVector3f *)(this_ptr->field21_0x298 + *(int *)(pcVar2 + 0x30) * 0x20 + 4));
        fVar1 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                          (&CStack_84,in_stack_00000008,in_stack_0000000c);
        if (((fVar1 < fStack_88) && (0.0 <= fVar1)) && (fVar1 <= 1.0)) {
          fStack_34 = -CStack_84.normal.x;
          fStack_30 = -CStack_84.normal.y;
          fStack_2c = -CStack_84.normal.z;
          fStack_88 = fVar1;
          if (&fStack_28 != &fStack_34) {
            fStack_28 = fStack_34;
            fStack_24 = fStack_30;
            fStack_20 = fStack_2c;
          }
        }
        iVar3 = iVar3 + 1;
        pcVar2 = pcVar2 + 0x48;
      } while (iVar3 < iStack_18);
    }
    if ((fStack_88 < 1.0) && (&fStack_28 != in_stack_00000010)) {
      *in_stack_00000010 = fStack_28;
      in_stack_00000010[1] = fStack_24;
      in_stack_00000010[2] = fStack_20;
    }
    fStack_1c = fStack_88;
  }
  return fStack_1c;
}
