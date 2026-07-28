// Name: core_setutil.cpp_C3DSLight_setFilterFrame_FUN_00515670
// Address: 00515670
// Address Range: [[00515670, 00515703]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_setFilterFrame_FUN_00515670(C3DSLight *this_ptr,int frame_index,CDemonLight *light)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_setFilterFrame_FUN_00515670(C3DSLight *this_ptr,int frame_index,CDemonLight *light)

{
  if (light == (CDemonLight *)0x0) {
    PTR_01cc4800 = "..\\core\\setutil.cpp";
    INT_01cc4804 = 0x36c;
    core_main_c_FUN_004c8440("C3DSLight::advanceFilter - NULL CDemonLight pointer!");
  }
  if ((frame_index < 0) || (this_ptr->filter_count <= frame_index)) {
    PTR_01cc4800 = "..\\core\\setutil.cpp";
    INT_01cc4804 = 0x370;
    core_main_c_FUN_004c8440("C3DSLight::setFilterFrame - invalid filter frame number");
  }
  this_ptr->current_filter_frame = frame_index;
  core_dlight_cpp_CDemonLight_applyFilter_FUN_004501c0
            (light,this_ptr->filters[frame_index],this_ptr->filter_indices[frame_index],0,0);
  return;
}
