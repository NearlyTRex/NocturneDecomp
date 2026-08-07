// Name: core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0
// Address: 004410c0
// Address Range: [[004410c0, 0044114b]]
// Convention: __stack3_esi
// Signature: int __stack3_esi core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0(CDemonCamera *this_ptr,int screen_x,int screen_y,CVector3i *output_ptr)

#include "nocturne.h"

int __stack3_esi core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0(CDemonCamera *this_ptr,int screen_x,int screen_y,CVector3i *output_ptr)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (this_ptr->framebuffer_width + screen_x) * 0x10000;
  iVar3 = screen_y + this_ptr->framebuffer_height;
  iVar4 = iVar3 * 0x10000;
  uVar1 = g_ZBufferScanlineArray[iVar3][screen_x + this_ptr->framebuffer_width];
  if (uVar1 == 0) {
    output_ptr->x = iVar2;
    output_ptr->y = iVar4;
    output_ptr->z = 0x7fffffff;
    return (int)output_ptr;
  }
  output_ptr->x = iVar2;
  output_ptr->y = iVar4;
  output_ptr->z = (int)(0x7fffffff / (longlong)(int)uVar1);
  return (int)output_ptr;
}
