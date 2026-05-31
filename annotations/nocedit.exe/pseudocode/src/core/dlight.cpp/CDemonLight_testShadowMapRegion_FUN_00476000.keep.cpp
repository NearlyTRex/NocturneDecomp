// Name: core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_00476000
// Address: 00476000
// MANUAL RECONSTRUCTION
// Address Range: [[00476000, 004760c4]]
// Convention: __cdecl
// Signature: int __cdecl core_dlight_cpp_CDemonLight_testShadowMapRegion_FUN_00476000(CDemonLight *this_ptr,CRect *rect)

#include "nocturne.h"

int __cdecl core_dlight_cpp_CDemonLight_testShadowMapRegion_FUN_00476000(CDemonLight *this_ptr,CRect *rect)

{
  int iVar1;
  int iVar2;
  uchar *puVar3;
  int iVar4;
  int iVar5;
  uchar *puVar6;
  
  iVar1 = rect->x_min / 8;
  iVar2 = rect->x_max / 8;
  iVar4 = rect->y_min * this_ptr->shadow_map_width;
  puVar6 = this_ptr->lightmap_visibility_bits + iVar4 / 8;
  iVar4 = rect->y_min;
  if (iVar4 <= rect->y_max) {
    do {
      if (iVar1 <= iVar2) {
        puVar3 = puVar6 + iVar1;
        iVar5 = iVar1;
        do {
          if (*puVar3 != '\0') {
            return 1;
          }
          iVar5 = iVar5 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar5 <= iVar2);
      }
      puVar6 = puVar6 + this_ptr->shadow_map_width / 8;
      iVar4 = iVar4 + 1;
    } while (iVar4 <= rect->y_max);
  }
  return 0;
}
