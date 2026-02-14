// Name: core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_00476000
// Address: 00476000
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
  
  iVar4 = rect->left >> 0x1f;
  iVar1 = (int)((rect->left + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3;
  iVar4 = rect->top >> 0x1f;
  iVar2 = (int)((rect->top + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3;
  iVar4 = rect->right * this_ptr->shadow_map_width;
  iVar5 = iVar4 >> 0x1f;
  puVar6 = this_ptr->lightmap_visibility_bits +
           ((int)((iVar4 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3);
  iVar4 = rect->right;
  if (iVar4 <= rect->bottom) {
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
      iVar5 = this_ptr->shadow_map_width >> 0x1f;
      puVar6 = puVar6 + ((int)((this_ptr->shadow_map_width + iVar5 * -8) - (uint)(iVar5 << 2 < 0))
                        >> 3);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= rect->bottom);
  }
  return 0;
}
