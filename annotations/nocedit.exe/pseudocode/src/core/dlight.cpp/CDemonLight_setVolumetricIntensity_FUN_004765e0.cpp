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
  int unaff_EBX;
  float10 fVar1;
  double dVar2;
  int iVar3;
  int in_stack_fffffffc;
  
  this_ptr->volumetric_intensity = intensity;
  if (0x100 < this_ptr->shadow_map_width) {
    iVar3 = 0;
    fVar1 = (float10)this_ptr->volumetric_intensity * (float10)3;
    dVar2 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(intensity,this_ptr));
    core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
              (SUB84 /* extract 2-byte value */(dVar2,0),(&g_PlayerFilters)[(int)ROUND(fVar1)],0,iVar3,unaff_EBX);
    return;
  }
  iVar3 = 0;
  fVar1 = (float10)this_ptr->volumetric_intensity * (float10)7;
  dVar2 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(intensity,this_ptr));
  core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
            (SUB84 /* extract 2-byte value */(dVar2,0),(&g_GlobalFilters)[(int)ROUND(fVar1)],0,iVar3,in_stack_fffffffc);
  return;
}
