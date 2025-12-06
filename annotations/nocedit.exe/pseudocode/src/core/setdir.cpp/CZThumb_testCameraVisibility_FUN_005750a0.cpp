// Name: core_setdir.cpp_CZThumb_testCameraVisibility_FUN_005750a0
// Address: 005750a0
// Address Range: [[005750a0, 005751c8]]
// Convention: __cdecl
// Signature: float core_setdir.cpp_CZThumb_testCameraVisibility_FUN_005750a0(CZThumb * this_ptr)

#include "nocturne.h"

float __cdecl core_setdir_cpp_CZThumb_testCameraVisibility_FUN_005750a0(CZThumb *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CZThumb *this_ptr_00;
  CVector3i *in_stack_0000000c;
  C3DSCamera *in_stack_00000014;
  float in_stack_00000018;
  float fStack_1c;
  
  if ((in_stack_00000014->field17_0x1a0 != 0) &&
     (fVar3 = (in_stack_00000014->position).x - (float)this_ptr->projection_scale,
     fVar2 = (in_stack_00000014->position).y - (float)this_ptr->zbuffer_data,
     fVar1 = (in_stack_00000014->position).z - (float)this_ptr[1].width,
     fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3 <=
     200f * 200f)) {
    fStack_1c = (float)core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_00585970
                                 (in_stack_00000014,(CVector3f *)&this_ptr->projection_scale,
                                  in_stack_00000018);
    if (fStack_1c != 0.0) {
      this_ptr_00 = g_CZThumbPool + (int)in_stack_00000014 * 6;
      if (*(int *)((int)in_stack_00000018 + 0x140) == 0) {
        fVar3 = core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
                          (this_ptr_00,(CDemonActor *)this_ptr,in_stack_0000000c,
                           (SMRGLHeaderPrimitive *)in_stack_0000000c,1);
        return fVar3;
      }
      fStack_1c = 0.0;
      do {
        fVar3 = core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
                          (this_ptr_00,(CDemonActor *)this_ptr,in_stack_0000000c,
                           (SMRGLHeaderPrimitive *)in_stack_0000000c,0);
        fStack_1c = fVar3 + fStack_1c;
        this_ptr_00 = this_ptr_00 + 1;
      } while (this_ptr_00 != g_CZThumbPool + (int)in_stack_00000014 * 6 + 6);
    }
    return fStack_1c;
  }
  return 0.0;
}
