// Name: core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
// Address: 0044d2a0
// Address Range: [[0044d2a0, 0044d30b]]
// Convention: __stack3_esi
// Signature: void __stack3_esi core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0(CDemonCamera *this_ptr,int screen_x,int screen_y,CVector3i *output_ptr)

#include "nocturne.h"

void __stack3_esi core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0(CDemonCamera *this_ptr,int screen_x,int screen_y,CVector3i *output_ptr)

{
  uint uVar1;
  
  uVar1 = g_ZBufferScanlineArray[screen_y][screen_x];
  if (uVar1 == 0) {
    output_ptr->x = screen_x << 0x10;
    output_ptr->y = screen_y << 0x10;
    output_ptr->z = 0x7fffffff;
    return;
  }
  output_ptr->x = screen_x << 0x10;
  output_ptr->y = screen_y << 0x10;
  output_ptr->z = (int)(0x7fffffff / (longlong)(int)uVar1);
  return;
}
