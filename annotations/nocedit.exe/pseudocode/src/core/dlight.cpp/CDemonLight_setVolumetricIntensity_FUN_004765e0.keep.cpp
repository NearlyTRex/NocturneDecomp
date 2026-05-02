// Name: core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
// Address: 004765e0
// MANUAL RECONSTRUCTION
// Address Range: [[004765e0, 00476666]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(CDemonLight *this_ptr,float intensity)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(CDemonLight *this_ptr,float intensity)

{
  this_ptr->volumetric_intensity = intensity;
  if (0x100 < this_ptr->shadow_map_width) {
    core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
              (this_ptr,g_PlayerFilters
                        [(int)ROUND(ROUND(this_ptr->volumetric_intensity *
                                          (float)3))],0,0,0);
    return;
  }
  core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
            (this_ptr,g_GlobalFilters
                      [(int)ROUND(ROUND(this_ptr->volumetric_intensity *
                                        (float)7))],0,0,0);
  return;
}
