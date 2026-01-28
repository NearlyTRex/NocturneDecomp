// Name: core_dcamera.cpp_CDemonCamera_pushRect_FUN_0044c740
// Address: 0044c740
// Address Range: [[0044c740, 0044c775]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_pushRect_FUN_0044c740 (CDemonCamera *this_ptr,int left,int top,int right,int bottom)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_pushRect_FUN_0044c740
          (CDemonCamera *this_ptr,int left,int top,int right,int bottom)

{
  CRect *pCVar1;
  
  if (0xff < this_ptr->rect_array_count) {
    this_ptr->rect_array_count = this_ptr->rect_array_count + 1;
    return;
  }
  pCVar1 = this_ptr->rect_array + this_ptr->rect_array_count;
  pCVar1->left = left;
  pCVar1->top = top;
  pCVar1->right = right;
  pCVar1->bottom = bottom;
  this_ptr->rect_array_count = this_ptr->rect_array_count + 1;
  return;
}
