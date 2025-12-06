// Name: shape_quantize.cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0
// Address: 00554ff0
// Address Range: [[00554ff0, 0055508c]]
// Convention: __cdecl
// Signature: float shape_quantize.cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0(CColorQuantizer * this_ptr, SColorBox * box_ptr, uchar * pixel_ptr)

#include "nocturne.h"

float __cdecl
shape_quantize_cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0
          (CColorQuantizer *this_ptr,SColorBox *box_ptr,uchar *pixel_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar1._0_2_ = box_ptr->avg_red;
  iVar1._2_2_ = box_ptr->avg_green;
  iVar2._0_2_ = box_ptr->avg_green;
  iVar2._2_2_ = box_ptr->avg_blue;
  fVar4 = (float)(int)((uint)*pixel_ptr - (int)box_ptr->avg_red);
  fVar5 = (float)(int)((uint)pixel_ptr[1] - (iVar1 >> 0x10));
  fVar6 = (float)(int)((uint)pixel_ptr[2] - (iVar2 >> 0x10));
  iVar3._0_2_ = box_ptr->avg_blue;
  iVar3._2_2_ = box_ptr->avg_intensity;
  fVar7 = (float)(int)((uint)pixel_ptr[3] - (iVar3 >> 0x10));
  return fVar7 * fVar7 * (float)0.69999999999999996 +
         fVar6 * fVar6 * (float)0.11 +
         fVar5 * fVar5 * (float)0.58999999999999997 + fVar4 * fVar4 * (float)0.29999999999999999;
}
