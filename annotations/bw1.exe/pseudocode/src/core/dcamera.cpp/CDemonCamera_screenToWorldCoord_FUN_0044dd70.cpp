// Name: core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044dd70
// Address: 0044dd70
// Address Range: [[0044dd70, 0044dddb]]
// Convention: __stack3_esi
// Signature: int __stack3_esi core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044dd70(CDemonCamera *this_ptr,int screen_x,int screen_y,CVector3i *output_ptr)

#include "nocturne.h"

int __stack3_esi core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044dd70(CDemonCamera *this_ptr,int screen_x,int screen_y,CVector3i *output_ptr)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(&DAT_01c4480c + screen_y * 4) + screen_x * 4);
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
