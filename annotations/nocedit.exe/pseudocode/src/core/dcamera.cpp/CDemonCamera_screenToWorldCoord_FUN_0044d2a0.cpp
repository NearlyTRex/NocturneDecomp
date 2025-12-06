// Name: core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
// Address: 0044d2a0
// Address Range: [[0044d2a0, 0044d30b]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0(CDemonCamera * this_ptr, CVector3i * output_ptr, int screen_x, int screen_y)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
          (CDemonCamera *this_ptr,CVector3i *output_ptr,int screen_x,int screen_y)

{
  uint uVar1;
  int *unaff_ESI;
  
  uVar1 = g_ZBufferScanlineArray[screen_x][(int)output_ptr];
  if (uVar1 == 0) {
    *unaff_ESI = (int)output_ptr << 0x10;
    unaff_ESI[1] = screen_x << 0x10;
    unaff_ESI[2] = 0x7fffffff;
    return;
  }
  *unaff_ESI = (int)output_ptr << 0x10;
  unaff_ESI[1] = screen_x << 0x10;
  unaff_ESI[2] = (int)(0x7fffffff / (longlong)(int)uVar1);
  return;
}
