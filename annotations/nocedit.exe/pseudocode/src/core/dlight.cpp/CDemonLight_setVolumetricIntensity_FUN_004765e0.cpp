// Name: core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
// Address: 004765e0
// Address Range: [[004765e0, 00476666]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(CDemonLight * this_ptr, float intensity)

#include "nocturne.h"

void __cdecl
core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
          (CDemonLight *this_ptr,float intensity)

{
  CDemonLight *this_ptr_00;
  CDemonLight *this_ptr_01;
  double dVar1;
  int iVar2;
  int iVar3;
  
  this_ptr->volumetric_intensity = intensity;
  if (0x100 < this_ptr->shadow_map_width) {
    iVar3 = 0;
    iVar2 = 0x476613;
    dVar1 = crt_math_c_round_FUN_005fe6b0
                      ((double)(this_ptr->volumetric_intensity *
                               (float)3));
    core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
              (this_ptr_00,(&g_PlayerFilters)[(int)ROUND(dVar1)],0,iVar2,iVar3);
    return;
  }
  iVar3 = 0;
  iVar2 = 0x476648;
  dVar1 = crt_math_c_round_FUN_005fe6b0
                    ((double)(this_ptr->volumetric_intensity * (float)7)
                    );
  core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
            (this_ptr_01,(&g_GlobalFilters)[(int)ROUND(dVar1)],0,iVar2,iVar3);
  return;
}
