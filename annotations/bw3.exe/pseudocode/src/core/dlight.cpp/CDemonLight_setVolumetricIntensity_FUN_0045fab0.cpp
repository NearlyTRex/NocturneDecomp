// Name: core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0045fab0
// Address: 0045fab0
// Address Range: [[0045fab0, 0045fb36]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0045fab0(CDemonLight *this_ptr,float intensity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0045fab0(CDemonLight *this_ptr,float intensity)

{
  CDemonLight *pCVar1;
  float10 fVar2;
  int iVar3;
  int iVar4;
  
  *(float *)&this_ptr->field_0x2fa8 = intensity;
  if (0x100 < *(int *)&this_ptr->field_0x1cc0) {
    iVar4 = 0;
    fVar2 = (float10)*(float *)&this_ptr->field_0x2fa8 * (float10)_DAT_005bb5bc;
    iVar3 = 0;
    pCVar1 = (CDemonLight *)round();
    core_dlight_cpp_CDemonLight_applyFilter_FUN_0045db40
              (pCVar1,(&g_PlayerFilters)[(int)ROUND(fVar2)],0,iVar3,iVar4);
    return;
  }
  iVar4 = 0;
  fVar2 = (float10)*(float *)&this_ptr->field_0x2fa8 * (float10)_DAT_005bb5b4;
  iVar3 = 0;
  pCVar1 = (CDemonLight *)round();
  core_dlight_cpp_CDemonLight_applyFilter_FUN_0045db40
            (pCVar1,(&g_GlobalFilters)[(int)ROUND(fVar2)],0,iVar3,iVar4);
  return;
}
