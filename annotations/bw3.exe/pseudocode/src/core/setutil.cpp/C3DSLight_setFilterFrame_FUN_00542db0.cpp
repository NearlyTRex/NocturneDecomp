// Name: core_setutil.cpp_C3DSLight_setFilterFrame_FUN_00542db0
// Address: 00542db0
// Address Range: [[00542db0, 00542e43]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_setFilterFrame_FUN_00542db0(C3DSLight *this_ptr,int frame_index,CDemonLight *light)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_setFilterFrame_FUN_00542db0(C3DSLight *this_ptr,int frame_index,CDemonLight *light)

{
  if (light == (CDemonLight *)0x0) {
    g_CurrentFilename = "..\\core\\setutil.cpp";
    g_CurrentLineNumber = 927;
    core_main_c_displayErrorAndQuit_FUN_004e4330("C3DSLight::advanceFilter - NULL CDemonLight pointer!");
  }
  if ((frame_index < 0) || (this_ptr->filter_count <= frame_index)) {
    g_CurrentFilename = "..\\core\\setutil.cpp";
    g_CurrentLineNumber = 931;
    core_main_c_displayErrorAndQuit_FUN_004e4330("C3DSLight::setFilterFrame - invalid filter frame number");
  }
  this_ptr->current_filter_frame = frame_index;
  core_dlight_cpp_CDemonLight_applyFilter_FUN_0045db40
            (light,this_ptr->filters[frame_index],this_ptr->filter_indices[frame_index],0,0);
  return;
}
