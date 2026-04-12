// Name: shape_quantize.cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0
// Address: 00554ff0
// MANUAL RECONSTRUCTION
// Address Range: [[00554ff0, 0055508c]]
// Convention: __cdecl
// Signature: float __cdecl shape_quantize_cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0(CColorQuantizer *this_ptr,SColorBox *box_ptr,uchar *pixel_ptr)

#include "nocturne.h"

float __cdecl shape_quantize_cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0(CColorQuantizer *this_ptr,SColorBox *box_ptr,uchar *pixel_ptr)

{
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  fVar4 = (float)(int)((uint)pixel_ptr[0] - (int)box_ptr->avg_red);
  fVar5 = (float)(int)((uint)pixel_ptr[1] - (int)box_ptr->avg_green);
  fVar6 = (float)(int)((uint)pixel_ptr[2] - (int)box_ptr->avg_blue);
  fVar7 = (float)(int)((uint)pixel_ptr[3] - (int)box_ptr->avg_intensity);
  return fVar7 * fVar7 * (float)0.69999999999999996 +
         fVar6 * fVar6 * (float)0.11 +
         fVar5 * fVar5 * (float)0.58999999999999997 +
         fVar4 * fVar4 * (float)0.29999999999999999;
}
