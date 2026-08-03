// Name: core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0
// Address: 004410c0
// Address Range: [[004410c0, 0044114b]]
// Convention: __stack3_esi
// Signature: int __stack3_esi core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0(CDemonCamera *this_ptr,int screen_x,int screen_y,CVector3i *output_ptr)

#include "nocturne.h"

int __stack3_esi core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0(CDemonCamera *this_ptr,int screen_x,int screen_y,CVector3i *output_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (this_ptr->framebuffer_width + screen_x) * 0x10000;
  iVar2 = screen_y + this_ptr->framebuffer_height;
  iVar3 = iVar2 * 0x10000;
  iVar2 = *(int *)(screen_x * 4 + *(int *)(&DAT_01bd4260 + iVar2 * 4) +
                  this_ptr->framebuffer_width * 4);
  if (iVar2 == 0) {
    output_ptr->x = iVar1;
    output_ptr->y = iVar3;
    output_ptr->z = 0x7fffffff;
    return (int)output_ptr;
  }
  output_ptr->x = iVar1;
  output_ptr->y = iVar3;
  output_ptr->z = (int)(0x7fffffff / (longlong)iVar2);
  return (int)output_ptr;
}
