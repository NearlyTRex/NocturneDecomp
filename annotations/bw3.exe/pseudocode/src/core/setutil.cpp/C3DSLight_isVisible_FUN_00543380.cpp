// Name: core_setutil.cpp_C3DSLight_isVisible_FUN_00543380
// Address: 00543380
// Address Range: [[00543380, 005433fc]]
// Convention: __cdecl
// Signature: int __cdecl core_setutil_cpp_C3DSLight_isVisible_FUN_00543380(C3DSLight *this_ptr)

#include "nocturne.h"

int __cdecl core_setutil_cpp_C3DSLight_isVisible_FUN_00543380(C3DSLight *this_ptr)

{
  int iVar1;
  CBoundingBox3D CStack_18;
  
  if (ABS(this_ptr->atten_end) == 0.0) {
    return 1;
  }
  CStack_18.min.x = -this_ptr->atten_end;
  CStack_18.min.y = -this_ptr->atten_end;
  CStack_18.min.z = -this_ptr->atten_end;
  CStack_18.max.x = this_ptr->atten_end;
  CStack_18.max.y = CStack_18.max.x;
  CStack_18.max.z = CStack_18.max.x;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,&this_ptr->pos);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041daf0(&CStack_18,0);
  return iVar1;
}
