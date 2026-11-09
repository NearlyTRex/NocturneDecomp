// Name: core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_0045f4d0
// Address: 0045f4d0
// Address Range: [[0045f4d0, 0045f594]]
// Convention: __cdecl
// Signature: int __cdecl core_dlight_cpp_CDemonLight_testShadowMapRegion_FUN_0045f4d0(CDemonLight *this_ptr,CRect *rect)

#include "nocturne.h"

int __cdecl core_dlight_cpp_CDemonLight_testShadowMapRegion_FUN_0045f4d0(CDemonLight *this_ptr,CRect *rect)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = (int)((*(int *)rect + (*(int *)rect >> 0x1f) * -8) -
               (uint)((*(int *)rect >> 0x1f) << 2 < 0)) >> 3;
  iVar2 = (int)((*(int *)(rect + 4) + (*(int *)(rect + 4) >> 0x1f) * -8) -
               (uint)((*(int *)(rect + 4) >> 0x1f) << 2 < 0)) >> 3;
  iVar4 = *(int *)(rect + 8) * *(int *)&this_ptr->field_0x1cc0;
  iVar5 = iVar4 >> 0x1f;
  iVar5 = *(int *)&this_ptr->field_0x2fa0 +
          ((int)((iVar4 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3);
  iVar4 = *(int *)(rect + 8);
  if (iVar4 <= *(int *)(rect + 0xc)) {
    do {
      if (iVar1 <= iVar2) {
        pcVar3 = (char *)(iVar1 + iVar5);
        iVar6 = iVar1;
        do {
          if (*pcVar3 != '\0') {
            return 1;
          }
          iVar6 = iVar6 + 1;
          pcVar3 = pcVar3 + 1;
        } while (iVar6 <= iVar2);
      }
      iVar6 = *(int *)&this_ptr->field_0x1cc0 >> 0x1f;
      iVar5 = iVar5 + ((int)((*(int *)&this_ptr->field_0x1cc0 + iVar6 * -8) - (uint)(iVar6 << 2 < 0)
                            ) >> 3);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= *(int *)(rect + 0xc));
  }
  return 0;
}
