// Name: core_dcamera.cpp_CDemonCamera_worldToScreenCoord_FUN_0044d310
// Address: 0044d310
// Address Range: [[0044d310, 0044d36b]]
// Convention: __stack2_esi
// Signature: CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToScreenCoord_FUN_0044d310(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr)

#include "nocturne.h"

CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToScreenCoord_FUN_0044d310(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr)

{
  int iVar5;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = input_ptr->z;
  iVar2 = (this_ptr->cached_projection).neg_half_height_fixed;
  iVar3 = input_ptr->z;
  iVar4 = input_ptr->y;
  iVar5 = (this_ptr->cached_projection).center_y_fixed;
  output_ptr->x =
       (int)(((longlong)(input_ptr->x - (this_ptr->cached_projection).center_x_fixed) *
             (longlong)iVar1) / (longlong)(this_ptr->cached_projection).half_width_fixed);
  output_ptr->y = (int)(((longlong)(iVar4 - iVar5) * (longlong)iVar3) / (longlong)iVar2);
  output_ptr->z = iVar1;
  return output_ptr;
}
