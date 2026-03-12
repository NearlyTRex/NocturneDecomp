// Name: core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
// Address: 0044d370
// Address Range: [[0044d370, 0044d472]]
// Convention: __stack2_esi
// Signature: CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr)

#include "nocturne.h"

CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr)

{
  int iVar3;
  int iVar6;
  int iVar7;
  longlong lVar5;
  longlong lVar4;
  longlong lVar3;
  int iVar2;
  int iVar1;
  
  iVar1 = input_ptr->z;
  iVar6 = (int)(((longlong)(input_ptr->x - (this_ptr->saved_viewport_rect).right) * (longlong)iVar1)
               / (longlong)(this_ptr->saved_viewport_rect).left);
  iVar7 = (int)(((longlong)(input_ptr->y - (this_ptr->saved_viewport_rect).bottom) * (longlong)iVar1
                ) / (longlong)(this_ptr->saved_viewport_rect).top);
  lVar3 = (longlong)iVar7 * (longlong)(this_ptr->inverted_matrix).m[1].x +
          (longlong)iVar6 * (longlong)(this_ptr->inverted_matrix).m[0].x +
          (longlong)iVar1 * (longlong)(this_ptr->inverted_matrix).m[2].x;
  lVar4 = (longlong)iVar7 * (longlong)(this_ptr->inverted_matrix).m[1].y +
          (longlong)iVar6 * (longlong)(this_ptr->inverted_matrix).m[0].y +
          (longlong)iVar1 * (longlong)(this_ptr->inverted_matrix).m[2].y;
  iVar2 = (this_ptr->camera_origin).y;
  lVar5 = (longlong)iVar7 * (longlong)(this_ptr->inverted_matrix).m[1].z +
          (longlong)iVar6 * (longlong)(this_ptr->inverted_matrix).m[0].z +
          (longlong)iVar1 * (longlong)(this_ptr->inverted_matrix).m[2].z;
  iVar3 = (this_ptr->camera_origin).z;
  output_ptr->x =
       (this_ptr->camera_origin).x + ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10)
  ;
  output_ptr->y = iVar2 + ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
  output_ptr->z = iVar3 + ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
  return output_ptr;
}
