// Name: core_setutil.cpp_C3DSLight_advanceFilter_FUN_005155e0
// Address: 005155e0
// Address Range: [[005155e0, 00515669]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_advanceFilter_FUN_005155e0(C3DSLight *this_ptr,CDemonLight *light)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_advanceFilter_FUN_005155e0(C3DSLight *this_ptr,CDemonLight *light)

{
  int iVar1;
  
  if (light == (CDemonLight *)0x0) {
    PTR_01cc4800 = "..\\core\\setutil.cpp";
    INT_01cc4804 = 0x354;
    core_main_c_FUN_004c8440("C3DSLight::advanceFilter - NULL CDemonLight pointer!");
  }
  if (0 < this_ptr->filter_count) {
    iVar1 = this_ptr->current_filter_frame + 1;
    this_ptr->current_filter_frame = iVar1;
    if (this_ptr->filter_count <= iVar1) {
      this_ptr->current_filter_frame = 0;
    }
    core_dlight_cpp_CDemonLight_applyFilter_FUN_004501c0
              (light,this_ptr->filters[this_ptr->current_filter_frame],
               this_ptr->filter_indices[this_ptr->current_filter_frame],0,0);
  }
  return;
}
