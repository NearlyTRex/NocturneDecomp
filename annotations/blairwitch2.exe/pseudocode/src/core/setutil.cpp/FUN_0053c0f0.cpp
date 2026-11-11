// Name: core_setutil.cpp_FUN_0053c0f0
// Address: 0053c0f0
// Address Range: [[0053c0f0, 0053c16c]]
// Convention: __cdecl
// Signature: int __cdecl core_setutil_cpp_FUN_0053c0f0(C3DSLight *this_ptr)

#include "nocturne.h"

int __cdecl core_setutil_cpp_FUN_0053c0f0(C3DSLight *this_ptr)

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
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,&this_ptr->pos);
  iVar1 = core_box_cpp_FUN_0041a840(&fStack_18,0);
  return iVar1;
}
