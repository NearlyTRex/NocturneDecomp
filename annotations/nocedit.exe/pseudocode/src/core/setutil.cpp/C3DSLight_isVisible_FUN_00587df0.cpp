// Name: core_setutil.cpp_C3DSLight_isVisible_FUN_00587df0
// Address: 00587df0
// Address Range: [[00587df0, 00587e6a]]
// Convention: __cdecl
// Signature: int core_setutil.cpp_C3DSLight_isVisible_FUN_00587df0(C3DSLight * this_ptr)

#include "nocturne.h"

int __cdecl core_setutil_cpp_C3DSLight_isVisible_FUN_00587df0(C3DSLight *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (ABS(this_ptr->atten_end) == 0.0) {
    return 1;
  }
  local_14 = -this_ptr->atten_end;
  local_10 = -this_ptr->atten_end;
  local_c = this_ptr->atten_end;
  local_8 = local_c;
  local_4 = local_c;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,&this_ptr->pos);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0((CBoundingBox3D *)&local_14);
  return iVar1;
}
