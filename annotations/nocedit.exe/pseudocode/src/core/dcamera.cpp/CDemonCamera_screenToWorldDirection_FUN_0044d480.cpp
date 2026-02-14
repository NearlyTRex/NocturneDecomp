// Name: core_dcamera.cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480
// Address: 0044d480
// Address Range: [[0044d480, 0044d5f0]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480(CDemonCamera *this_ptr,CVector3f *output_ptr,int screen_x,int screen_y)

#include "nocturne.h"

CVector3f * __cdecl core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480(CDemonCamera *this_ptr,CVector3f *output_ptr,int screen_x,int screen_y)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)(((longlong)(screen_x * 0x10000 - (this_ptr->saved_viewport_rect).right) * 0x10000) /
               (longlong)(this_ptr->saved_viewport_rect).left);
  iVar4 = (int)(((longlong)(screen_y * 0x10000 - (this_ptr->saved_viewport_rect).bottom) * 0x10000)
               / (longlong)(this_ptr->saved_viewport_rect).top);
  lVar1 = (longlong)iVar4 * (longlong)(this_ptr->inverted_matrix).m[1].x +
          (longlong)iVar3 * (longlong)(this_ptr->inverted_matrix).m[0].x +
          (longlong)(this_ptr->inverted_matrix).m[2].x * 0x10000;
  output_ptr->x = (float)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  lVar1 = (longlong)iVar4 * (longlong)(this_ptr->inverted_matrix).m[1].y +
          (longlong)iVar3 * (longlong)(this_ptr->inverted_matrix).m[0].y +
          (longlong)(this_ptr->inverted_matrix).m[2].y * 0x10000;
  output_ptr->y = (float)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  lVar1 = (longlong)iVar4 * (longlong)(this_ptr->inverted_matrix).m[1].z +
          (longlong)iVar3 * (longlong)(this_ptr->inverted_matrix).m[0].z +
          (longlong)(this_ptr->inverted_matrix).m[2].z * 0x10000;
  fVar2 = (float)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  output_ptr->z = fVar2;
  fVar2 = SQRT(fVar2 * output_ptr->z + output_ptr->x * output_ptr->x + output_ptr->y * output_ptr->y
              );
  if (0.0 < fVar2) {
    fVar2 = 1.0 / fVar2;
    output_ptr->x = output_ptr->x * fVar2;
    output_ptr->y = output_ptr->y * fVar2;
    output_ptr->z = output_ptr->z * fVar2;
    return output_ptr;
  }
  output_ptr->z = 0.0;
  output_ptr->y = output_ptr->z;
  output_ptr->x = output_ptr->y;
  return output_ptr;
}
