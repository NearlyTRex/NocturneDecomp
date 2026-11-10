// Name: core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0
// Address: 00465da0
// Address Range: [[00465da0, 00465e26]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0(CDemonLight *this_ptr,float intensity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0(CDemonLight *this_ptr,float intensity)

{
  CDemonLight *pCVar1;
  float10 fVar2;
  int iVar3;
  int iVar4;
  
  this_ptr->volumetric_intensity = intensity;
  if (0x100 < this_ptr->shadow_map_width) {
    iVar4 = 0;
    fVar2 = (float10)this_ptr->volumetric_intensity * (float10)_DAT_005d92a4;
    iVar3 = 0;
    pCVar1 = (CDemonLight *)round();
    core_dlight_cpp_CDemonLight_applyFilter_FUN_00463e30
              (pCVar1,(&g_PlayerFilters)[(int)ROUND(fVar2)],0,iVar3,iVar4);
    return;
  }
  iVar4 = 0;
  fVar2 = (float10)this_ptr->volumetric_intensity * (float10)_DAT_005d929c;
  iVar3 = 0;
  pCVar1 = (CDemonLight *)round();
  core_dlight_cpp_CDemonLight_applyFilter_FUN_00463e30
            (pCVar1,(&g_GlobalFilters)[(int)ROUND(fVar2)],0,iVar3,iVar4);
  return;
}
