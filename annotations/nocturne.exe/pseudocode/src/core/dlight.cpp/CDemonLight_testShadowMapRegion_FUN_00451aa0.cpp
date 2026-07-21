// Name: core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_00451aa0
// Address: 00451aa0
// Address Range: [[00451aa0, 00451b64]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_dlight_cpp_CDemonLight_testShadowMapRegion_FUN_00451aa0(int param_1,int *param_2)

#include "nocturne.h"

uint __cdecl core_dlight_cpp_CDemonLight_testShadowMapRegion_FUN_00451aa0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = (int)((*param_2 + (*param_2 >> 0x1f) * -8) - (uint)((*param_2 >> 0x1f) << 2 < 0)) >> 3;
  iVar2 = (int)((param_2[1] + (param_2[1] >> 0x1f) * -8) - (uint)((param_2[1] >> 0x1f) << 2 < 0)) >>
          3;
  iVar4 = param_2[2] * *(int *)(param_1 + 0x1cc0);
  iVar5 = iVar4 >> 0x1f;
  iVar5 = *(int *)(param_1 + 0x2fa0) + ((int)((iVar4 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3);
  iVar4 = param_2[2];
  if (iVar4 <= param_2[3]) {
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
      iVar6 = *(int *)(param_1 + 0x1cc0) >> 0x1f;
      iVar5 = iVar5 + ((int)((*(int *)(param_1 + 0x1cc0) + iVar6 * -8) - (uint)(iVar6 << 2 < 0)) >>
                      3);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= param_2[3]);
  }
  return 0;
}
