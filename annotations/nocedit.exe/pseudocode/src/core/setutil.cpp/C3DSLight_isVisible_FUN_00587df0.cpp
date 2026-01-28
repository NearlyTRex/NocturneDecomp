// Name: core_setutil.cpp_C3DSLight_isVisible_FUN_00587df0
// Address: 00587df0
// Address Range: [[00587df0, 00587e6a]]
// Convention: __cdecl
// Signature: int __cdecl core_setutil_cpp_C3DSLight_isVisible_FUN_00587df0(C3DSLight *this_ptr)

#include "nocturne.h"

int __cdecl core_setutil_cpp_C3DSLight_isVisible_FUN_00587df0(C3DSLight *this_ptr)

{
  int iVar1;
  CBoundingBox3D local_18;
  
  if (ABS(this_ptr->atten_end) == 0.0) {
    return 1;
  }
  local_18.min.x = -this_ptr->atten_end;
  local_18.min.y = -this_ptr->atten_end;
  local_18.min.z = -this_ptr->atten_end;
  local_18.max.x = this_ptr->atten_end;
  local_18.max.y = local_18.max.x;
  local_18.max.z = local_18.max.x;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&this_ptr->pos);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(&local_18);
  return iVar1;
}
