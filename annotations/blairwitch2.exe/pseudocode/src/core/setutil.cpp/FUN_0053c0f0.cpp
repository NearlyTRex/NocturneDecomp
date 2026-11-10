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
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,(CVector3f *)&this_ptr->field_0x104);
  iVar1 = core_box_cpp_FUN_0041a840(&fStack_18,0);
  return iVar1;
}
