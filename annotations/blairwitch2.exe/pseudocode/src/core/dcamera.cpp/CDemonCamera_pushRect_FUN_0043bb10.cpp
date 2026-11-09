// Name: core_dcamera.cpp_CDemonCamera_pushRect_FUN_0043bb10
// Address: 0043bb10
// Address Range: [[0043bb10, 0043bb45]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_pushRect_FUN_0043bb10(CDemonCamera *this_ptr,int left,int top,int right,int bottom)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_pushRect_FUN_0043bb10(CDemonCamera *this_ptr,int left,int top,int right,int bottom)

{
  int *piVar1;
  
  if (0xff < *(int *)&this_ptr->field_0x1d0) {
    *(int *)&this_ptr->field_0x1d0 = *(int *)&this_ptr->field_0x1d0 + 1;
    return;
  }
  piVar1 = (int *)(&this_ptr->field_0x1d4 + *(int *)&this_ptr->field_0x1d0 * 0x10);
  *piVar1 = left;
  piVar1[1] = top;
  piVar1[2] = right;
  piVar1[3] = bottom;
  *(int *)&this_ptr->field_0x1d0 = *(int *)&this_ptr->field_0x1d0 + 1;
  return;
}
