// Name: core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0
// Address: 004501c0
// Address Range: [[004501c0, 004504d9]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_applyFilter_FUN_004501c0(int param_1,undefined4 *param_2,int param_3,uint param_4,uint param_5)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_applyFilter_FUN_004501c0(int param_1,uint *param_2,int param_3,uint param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  byte local_40;
  uint local_38;
  byte *local_34;
  int local_30;
  
  *(uint *)(param_1 + 0x1c54) = param_2[0x12];
  *(uint *)(param_1 + 0x1c58) = *param_2;
  *(uint *)(param_1 + 0x1c5c) = param_2[1];
  iVar2 = *(int *)(param_1 + 0x1c58);
  *(uint *)(param_1 + 0x1c60) = 0;
  for (; 1 < iVar2; iVar2 = iVar2 >> 1) {
    *(int *)(param_1 + 0x1c60) = *(int *)(param_1 + 0x1c60) + 1;
  }
  *(uint *)(param_1 + 0x1cc8) = 8;
  *(uint *)(param_1 + 0x1c64) = *(uint *)(param_1 + 0x1c60);
  iVar2 = *(int *)(param_1 + 0x1cc0);
  *(uint *)(param_1 + 0x1ccc) = 8;
  for (; 1 < iVar2; iVar2 = iVar2 >> 1) {
    *(int *)(param_1 + 0x1cc8) = *(int *)(param_1 + 0x1cc8) + 1;
    *(int *)(param_1 + 0x1ccc) = *(int *)(param_1 + 0x1ccc) + 1;
  }
  for (iVar2 = *(int *)(param_1 + 0x1c58); iVar2 < 0x100; iVar2 = iVar2 * 2) {
    *(int *)(param_1 + 0x1cc8) = *(int *)(param_1 + 0x1cc8) + 1;
    *(int *)(param_1 + 0x1ccc) = *(int *)(param_1 + 0x1ccc) + 1;
  }
  *(int *)(param_1 + 0x1ccc) = *(int *)(param_1 + 0x1ccc) - param_3;
  *(int *)(param_1 + 0x1cc8) = *(int *)(param_1 + 0x1cc8) - param_3;
  local_34 = *(byte **)(param_1 + 0x1c6c);
  *(int *)(param_1 + 0x1c68) = *(int *)(param_1 + 0x1c58) + -1;
  if (local_34 != (byte *)0x0) {
    uVar6 = param_4 & 0xff;
    local_30 = 0;
    if (0 < *(int *)(param_1 + 0x1c5c)) {
      local_38 = (int)param_5 >> 8;
      do {
        local_38 = local_38 + 1;
        uVar3 = *(int *)(param_1 + 0x1c5c) - 1;
        iVar2 = *(int *)(param_1 + 0x1c54) +
                (local_30 + ((int)param_5 >> 8) & uVar3) * *(int *)(param_1 + 0x1c58);
        iVar7 = *(int *)(param_1 + 0x1c54) + (uVar3 & local_38) * *(int *)(param_1 + 0x1c58);
        iVar4 = 0;
        puVar5 = local_34;
        uVar3 = (int)param_4 >> 8;
        if (0 < *(int *)(param_1 + 0x1c58)) {
          do {
            uVar8 = *(int *)(param_1 + 0x1c58) - 1;
            uVar10 = ((int)param_4 >> 8) + iVar4 & uVar8;
            uVar8 = uVar3 + 1 & uVar8;
            local_40 = (byte)
                       ((param_5 & 0xff) *
                        (*(byte *)(uVar8 + iVar7) * uVar6 +
                        (uint)*(byte *)(uVar10 + iVar7) * (0xff - uVar6)) +
                        (0xff - (param_5 & 0xff)) *
                        (*(byte *)(iVar2 + uVar8) * uVar6 +
                        (0xff - uVar6) * (uint)*(byte *)(uVar10 + iVar2)) >> 0x10);
            *puVar5 = local_40;
            iVar4 = iVar4 + 1;
            puVar5 = puVar5 + 1;
            uVar3 = uVar3 + 1;
          } while (iVar4 < *(int *)(param_1 + 0x1c58));
        }
        local_30 = local_30 + 1;
        local_34 = local_34 + *(int *)(param_1 + 0x1c58);
      } while (local_30 < *(int *)(param_1 + 0x1c5c));
    }
    *(uint *)(param_1 + 0x1c54) = *(uint *)(param_1 + 0x1c6c);
  }
  pcVar9 = (char *)(param_2 + 2);
  pcVar11 = (char *)(param_1 + 0x1c74);
  do {
    cVar1 = *pcVar9;
    *pcVar11 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar11[1] = cVar1;
    pcVar11 = pcVar11 + 2;
  } while (cVar1 != '\0');
  return;
}
