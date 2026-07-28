// Name: core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00452080
// Address: 00452080
// Address Range: [[00452080, 00452106]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00452080(CDemonLight *this_ptr,float intensity)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00452080(CDemonLight *this_ptr,float intensity)

{
  double dVar1;
  int iVar2;
  int iVar3;
  
  this_ptr->volumetric_intensity = intensity;
  if (0x100 < this_ptr->shadow_map_width) {
    iVar3 = 0;
    iVar2 = 0x4520b3;
    dVar1 = round
                      ((double)(this_ptr->volumetric_intensity * (float)3));
    core_dlight_cpp_CDemonLight_applyFilter_FUN_004501c0
              (this_ptr,(CDemonFilter *)(&DAT_005ad53c)[(int)ROUND(dVar1)],0,iVar2,iVar3);
    return;
  }
  iVar3 = 0;
  iVar2 = 0x4520e8;
  dVar1 = round
                    ((double)(this_ptr->volumetric_intensity * (float)7));
  core_dlight_cpp_CDemonLight_applyFilter_FUN_004501c0
            (this_ptr,(CDemonFilter *)(&DAT_005ad51c)[(int)ROUND(dVar1)],0,iVar2,iVar3);
  return;
}
