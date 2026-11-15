// Name: core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0043c6b0
// Address: 0043c6b0
// Address Range: [[0043c6b0, 0043c71b]]
// Convention: __stack3_esi
// Signature: int __stack3_esi core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0043c6b0(CDemonCamera *this_ptr,int screen_x,int screen_y,CVector3i *output_ptr)

#include "nocturne.h"

int __stack3_esi core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0043c6b0(CDemonCamera *this_ptr,int screen_x,int screen_y,CVector3i *output_ptr)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(&DAT_01c2b64c + screen_y * 4) + screen_x * 4);
  if (iVar1 == 0) {
    output_ptr->x = screen_x << 0x10;
    output_ptr->y = screen_y << 0x10;
    output_ptr->z = 0x7fffffff;
    return (int)output_ptr;
  }
  output_ptr->x = screen_x << 0x10;
  output_ptr->y = screen_y << 0x10;
  output_ptr->z = (int)(0x7fffffff / (longlong)iVar1);
  return (int)output_ptr;
}
