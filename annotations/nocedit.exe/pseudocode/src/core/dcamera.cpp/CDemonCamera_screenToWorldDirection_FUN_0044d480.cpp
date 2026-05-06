// Name: core_dcamera.cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480
// Address: 0044d480
// Address Range: [[0044d480, 0044d5f0]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480(CDemonCamera *this_ptr,CVector3f *output_ptr,int screen_x,int screen_y)

#include "nocturne.h"

CVector3f * __cdecl core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480(CDemonCamera *this_ptr,CVector3f *output_ptr,int screen_x,int screen_y)

{
  ulonglong uVar1;
  longlong lVar2;
  float fVar3;
  int iVar3;
  int iVar4;
  longlong lVar1;
  float fVar2;
  
  uVar1 = (ulonglong)(screen_x * 0x10000 - (this_ptr->cached_projection).center_x_fixed);
  iVar3 = (int)((longlong)
                (((uVar1 & 0xffffffffffff) >> 0x10) << 0x20 | uVar1 * 0x10000 & 0xffffffff) /
               (longlong)(this_ptr->cached_projection).half_width_fixed);
  iVar4 = (int)(((longlong)(screen_y * 0x10000 - (this_ptr->cached_projection).center_y_fixed) *
                0x10000) / (longlong)(this_ptr->cached_projection).neg_half_height_fixed);
  lVar1 = (longlong)iVar4 * (longlong)(this_ptr->inverted_matrix).m[1].x +
          (longlong)iVar3 * (longlong)(this_ptr->inverted_matrix).m[0].x +
          (longlong)(this_ptr->inverted_matrix).m[2].x * 0x10000;
  output_ptr->x = (float)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  lVar2 = (longlong)iVar4 * (longlong)(this_ptr->inverted_matrix).m[1].y +
          (longlong)iVar3 * (longlong)(this_ptr->inverted_matrix).m[0].y +
          (longlong)(this_ptr->inverted_matrix).m[2].y * 0x10000;
  output_ptr->y = (float)(int)((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  lVar2 = (longlong)iVar4 * (longlong)(this_ptr->inverted_matrix).m[1].z +
          (longlong)iVar3 * (longlong)(this_ptr->inverted_matrix).m[0].z +
          (longlong)(this_ptr->inverted_matrix).m[2].z * 0x10000;
  fVar3 = (float)(int)((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  output_ptr->z = fVar3;
  fVar2 = SQRT(fVar3 * output_ptr->z + output_ptr->x * output_ptr->x + output_ptr->y * output_ptr->y
              );
  if (0.0 < fVar2) {
    fVar3 = 1.0 / fVar2;
    output_ptr->x = output_ptr->x * fVar3;
    output_ptr->y = output_ptr->y * fVar3;
    output_ptr->z = output_ptr->z * fVar3;
    return output_ptr;
  }
  output_ptr->z = 0.0;
  output_ptr->y = output_ptr->z;
  output_ptr->x = output_ptr->y;
  return output_ptr;
}
