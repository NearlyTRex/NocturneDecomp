// Name: core_dcamera.cpp_CDemonCamera_screenToWorldDirection_FUN_0044df50
// Address: 0044df50
// Address Range: [[0044df50, 0044e0c2]]
// Convention: __stack3_esi
// Signature: CVector3f * __stack3_esi core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_0044df50(CDemonCamera *this_ptr,int screen_x,int screen_y,CVector3f *output_ptr)

#include "nocturne.h"

CVector3f * __stack3_esi core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_0044df50(CDemonCamera *this_ptr,int screen_x,int screen_y,CVector3f *output_ptr)

{
  ulonglong uVar1;
  longlong lVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  uVar1 = (ulonglong)(screen_x * 0x10000 - (this_ptr->cached_projection).center_x_fixed);
  iVar4 = (int)((longlong)
                (((uVar1 & 0xffffffffffff) >> 0x10) << 0x20 | uVar1 * 0x10000 & 0xffffffff) /
               (longlong)(this_ptr->cached_projection).half_width_fixed);
  iVar5 = (int)(((longlong)(screen_y * 0x10000 - (this_ptr->cached_projection).center_y_fixed) *
                0x10000) / (longlong)(this_ptr->cached_projection).neg_half_height_fixed);
  lVar2 = (longlong)iVar5 * (longlong)(this_ptr->inverted_matrix).m[1].x +
          (longlong)iVar4 * (longlong)(this_ptr->inverted_matrix).m[0].x +
          (longlong)(this_ptr->inverted_matrix).m[2].x * 0x10000;
  fStack_2c = (float)(int)((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  lVar2 = (longlong)iVar5 * (longlong)(this_ptr->inverted_matrix).m[1].y +
          (longlong)iVar4 * (longlong)(this_ptr->inverted_matrix).m[0].y +
          (longlong)(this_ptr->inverted_matrix).m[2].y * 0x10000;
  fStack_28 = (float)(int)((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  lVar2 = (longlong)iVar5 * (longlong)(this_ptr->inverted_matrix).m[1].z +
          (longlong)iVar4 * (longlong)(this_ptr->inverted_matrix).m[0].z +
          (longlong)(this_ptr->inverted_matrix).m[2].z * 0x10000;
  fStack_24 = (float)(int)((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  fVar3 = SQRT(fStack_24 * fStack_24 + fStack_2c * fStack_2c + fStack_28 * fStack_28);
  if (fVar3 <= 0.0) {
    fStack_28 = 0.0;
    fStack_2c = 0.0;
    fStack_24 = 0.0;
  }
  else {
    fVar3 = 1.0 / fVar3;
    fStack_2c = fStack_2c * fVar3;
    fStack_28 = fStack_28 * fVar3;
    fStack_24 = fStack_24 * fVar3;
  }
  output_ptr->x = fStack_2c;
  output_ptr->y = fStack_28;
  output_ptr->z = fStack_24;
  return output_ptr;
}
