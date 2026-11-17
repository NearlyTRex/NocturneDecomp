// Name: core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570
// Address: 0044d570
// Address Range: [[0044d570, 0044d5f6]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570(CDemonLight *this_ptr,float intensity)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570(CDemonLight *this_ptr,float intensity)

{
  double dVar1;
  int iVar2;
  int iVar3;
  
  this_ptr->volumetric_intensity = intensity;
  if (0x100 < this_ptr->shadow_map_width) {
    iVar3 = 0;
    iVar2 = 0x44d5a3;
    dVar1 = round
                      ((double)(this_ptr->volumetric_intensity * (float)3));
    core_dlight_cpp_CDemonLight_applyFilter_FUN_0044b600
              (this_ptr,(&g_PlayerFilters)[(int)ROUND(dVar1)],0,iVar2,iVar3);
    return;
  }
  iVar3 = 0;
  iVar2 = 0x44d5d8;
  dVar1 = round
                    ((double)(this_ptr->volumetric_intensity * (float)7));
  core_dlight_cpp_CDemonLight_applyFilter_FUN_0044b600
            (this_ptr,(&g_GlobalFilters)[(int)ROUND(dVar1)],0,iVar2,iVar3);
  return;
}
