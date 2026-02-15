// Name: core_setdir.cpp_CZThumb_testCameraVisibility_FUN_005750a0
// Address: 005750a0
// Address Range: [[005750a0, 005751c8]]
// Convention: __cdecl
// Signature: float __cdecl core_setdir_cpp_CZThumb_testCameraVisibility_FUN_005750a0(CZThumb *this_ptr)

#include "nocturne.h"

float __cdecl core_setdir_cpp_CZThumb_testCameraVisibility_FUN_005750a0(CZThumb *this_ptr)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  CZThumb *this_ptr_00;
  CVector3i *in_stack_00000008;
  SMRGLHeaderPrimitive *in_stack_0000000c;
  int in_stack_00000010;
  C3DSCamera *in_stack_00000014;
  float in_stack_00000018;
  float local_20;
  
  if ((in_stack_00000014->enabled != 0) &&
     (fVar4 = (in_stack_00000014->position).x - (float)this_ptr->projection_scale,
     fVar2 = (in_stack_00000014->position).y - (float)this_ptr->zbuffer_data,
     fVar1 = (in_stack_00000014->position).z - (float)this_ptr[1].width,
     fVar1 * fVar1 + fVar2 * fVar2 + fVar4 * fVar4 <=
     200.0f * 200.0f)) {
    iVar3 = core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_00585970
                      (in_stack_00000014,(CVector3f *)&this_ptr->projection_scale,in_stack_00000018)
    ;
    local_20 = 0.0;
    if (iVar3 != 0) {
      this_ptr_00 = g_CZThumbPool + in_stack_00000010 * 6;
      if (in_stack_00000014->is_panning == 0) {
        fVar4 = core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
                          (this_ptr_00,(CDemonActor *)this_ptr,in_stack_00000008,in_stack_0000000c,1
                          );
        return fVar4;
      }
      local_20 = 0.0;
      do {
        fVar4 = core_setdir_cpp_CZThumb_calculateActorVisibility_FUN_00574ba0
                          (this_ptr_00,(CDemonActor *)this_ptr,in_stack_00000008,in_stack_0000000c,0
                          );
        local_20 = fVar4 + local_20;
        this_ptr_00 = this_ptr_00 + 1;
      } while (this_ptr_00 != g_CZThumbPool + in_stack_00000010 * 6 + 6);
    }
    return local_20;
  }
  return 0.0;
}
