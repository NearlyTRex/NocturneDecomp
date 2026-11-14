// Name: core_setutil.cpp_C3DSLight_isVisible_FUN_00543380
// Address: 00543380
// Address Range: [[00543380, 005433fc]]
// Convention: __cdecl
// Signature: int __cdecl core_setutil_cpp_C3DSLight_isVisible_FUN_00543380(C3DSLight *this_ptr)

#include "nocturne.h"

int __cdecl core_setutil_cpp_C3DSLight_isVisible_FUN_00543380(C3DSLight *this_ptr)

{
  int iVar1;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (ABS(this_ptr->atten_end) == 0.0) {
    return 1;
  }
  fStack_18 = -this_ptr->atten_end;
  fStack_14 = -this_ptr->atten_end;
  fStack_10 = -this_ptr->atten_end;
  fStack_c = this_ptr->atten_end;
  fStack_8 = fStack_c;
  fStack_4 = fStack_c;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,&this_ptr->pos);
  iVar1 = core_box_cpp_FUN_0041daf0(&fStack_18,0);
  return iVar1;
}
