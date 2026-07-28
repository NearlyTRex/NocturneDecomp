// Name: core_dcamera.cpp_CDemonCamera_pushRect_FUN_004405d0
// Address: 004405d0
// Address Range: [[004405d0, 00440605]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_pushRect_FUN_004405d0(CDemonCamera *this_ptr,int left,int top,int right,int bottom)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_pushRect_FUN_004405d0(CDemonCamera *this_ptr,int left,int top,int right,int bottom)

{
  CRect *pCVar1;
  
  if (0xff < this_ptr->rect_array_count) {
    this_ptr->rect_array_count = this_ptr->rect_array_count + 1;
    return;
  }
  pCVar1 = this_ptr->rect_array + this_ptr->rect_array_count;
  pCVar1->x_min = left;
  pCVar1->x_max = top;
  pCVar1->y_min = right;
  pCVar1->y_max = bottom;
  this_ptr->rect_array_count = this_ptr->rect_array_count + 1;
  return;
}
