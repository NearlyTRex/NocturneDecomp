// Name: core_setutil.cpp_FUN_0055d9c0
// Address: 0055d9c0
// Address Range: [[0055d9c0, 0055da3c]]
// Convention: __cdecl
// Signature: int __cdecl core_setutil_cpp_FUN_0055d9c0(C3DSLight *this_ptr)

#include "nocturne.h"

int __cdecl core_setutil_cpp_FUN_0055d9c0(C3DSLight *this_ptr)

{
  int iVar1;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  uint uStack_4;
  
  if ((*(uint *)&this_ptr->field_0x11d4 & 0x7fffffff) == 0) {
    return 1;
  }
  fStack_18 = -*(float *)&this_ptr->field_0x11d4;
  fStack_14 = -*(float *)&this_ptr->field_0x11d4;
  fStack_10 = -*(float *)&this_ptr->field_0x11d4;
  uStack_c = *(uint *)&this_ptr->field_0x11d4;
  uStack_8 = uStack_c;
  uStack_4 = uStack_c;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,(CVector3f *)&this_ptr->field_0x104);
  iVar1 = core_box_cpp_FUN_004207b0(&fStack_18,0);
  return iVar1;
}
