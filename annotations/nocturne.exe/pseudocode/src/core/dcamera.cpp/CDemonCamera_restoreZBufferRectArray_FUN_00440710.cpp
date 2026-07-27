// Name: core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_00440710
// Address: 00440710
// Address Range: [[00440710, 00440a1c]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_00440710(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_00440710(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (_DAT_01c02594 != 0) {
    engine_special_cpp_restoreZBuffer_FUN_00532c90(0,0,0,DAT_005b761c + -1,DAT_005b7620 + -1);
    return;
  }
  if (0x100 < *(int *)(param_1 + 0x1d0)) {
    local_3c = _DAT_01c02594;
    local_34 = _DAT_01c02594;
    local_38 = *(int *)(param_1 + 0x13c) + -1;
    local_30 = *(int *)(param_1 + 0x140) + -1;
    core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_00440610(param_1,&local_3c);
    return;
  }
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x1d0)) {
    piVar6 = (int *)(param_1 + 0x1d4);
    do {
      if (*piVar6 < *(int *)(param_1 + 0x144)) {
        *piVar6 = *(int *)(param_1 + 0x144);
      }
      iVar5 = *(int *)(param_1 + 0x144) + *(int *)(param_1 + 0x13c);
      if (iVar5 <= piVar6[1]) {
        piVar6[1] = iVar5 + -1;
      }
      if (piVar6[2] < *(int *)(param_1 + 0x148)) {
        piVar6[2] = *(int *)(param_1 + 0x148);
      }
      iVar5 = *(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x140);
      if (iVar5 <= piVar6[3]) {
        piVar6[3] = iVar5 + -1;
      }
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 4;
    } while (iVar7 < *(int *)(param_1 + 0x1d0));
  }
  local_18 = *(int *)(param_1 + 0x140);
  iVar7 = 0;
  local_24 = 0;
  if (0 < *(int *)(param_1 + 0x1d0)) {
    iVar5 = param_1 + 0x1d4;
    do {
      if (*(int *)(iVar5 + 8) < local_18) {
        local_18 = *(int *)(iVar5 + 8);
      }
      if (local_24 < *(int *)(iVar5 + 0xc)) {
        local_24 = *(int *)(iVar5 + 0xc);
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar7 < *(int *)(param_1 + 0x1d0));
  }
  if (local_18 <= local_24) {
    local_28 = local_18 << 2;
    local_2c = (int *)(param_1 + 0x1d4);
    do {
      local_1c = 0;
      _DAT_0140e7a4 = 0;
      if (0 < *(int *)(param_1 + 0x1d0)) {
        local_14 = 0;
        piVar6 = local_2c;
        do {
          if ((piVar6[2] <= local_18) && (local_18 <= piVar6[3])) {
            bVar4 = false;
            if (0 < _DAT_0140e7a4) {
              iVar7 = _DAT_0140e7a4 * 4;
              iVar5 = 0;
              do {
                if ((*(int *)(iVar5 + 0x140e7a8) <= piVar6[1]) &&
                   (*piVar6 <= *(int *)(iVar5 + 0x140eba8))) {
                  if ((*(int *)(iVar5 + 0x140e7a8) <= *piVar6) &&
                     (piVar6[1] <= *(int *)(iVar5 + 0x140eba8))) goto LAB_0044089a;
                  if (*piVar6 < *(int *)(iVar5 + 0x140e7a8)) {
                    bVar4 = true;
                    *(int *)(iVar5 + 0x140e7a8) = *piVar6;
                  }
                  if (*(int *)(iVar5 + 0x140eba8) < piVar6[1]) {
                    *(int *)(iVar5 + 0x140eba8) = piVar6[1];
                    goto LAB_0044089a;
                  }
                  if (bVar4) break;
                }
                iVar5 = iVar5 + 4;
              } while (iVar5 < iVar7);
            }
            if (!bVar4) {
              *(int *)(local_14 + 0x140e7a8) = *piVar6;
              *(int *)(local_14 + 0x140eba8) = piVar6[1];
              _DAT_0140e7a4 = _DAT_0140e7a4 + 1;
              local_14 = local_14 + 4;
            }
          }
LAB_0044089a:
          piVar6 = piVar6 + 4;
          local_1c = local_1c + 1;
        } while (local_1c < *(int *)(param_1 + 0x1d0));
      }
      iVar7 = 0;
      if (0 < _DAT_0140e7a4) {
        iVar5 = 0;
        local_20 = local_28;
        do {
          piVar6 = (int *)(iVar5 + 0x140e7a8);
          piVar1 = (int *)(iVar5 + 0x140e7a8);
          piVar2 = (int *)(iVar5 + 0x140e7a8);
          piVar3 = (int *)(iVar5 + 0x140eba8);
          iVar5 = iVar5 + 4;
          iVar7 = iVar7 + 1;
          core_dstrender_cpp_memcpyMMX_FUN_00465341
                    (*(int *)(&DAT_01bd4260 + local_20) + *piVar6 * 4,
                     *(int *)(param_1 + 0x15c) +
                     (((local_18 - *(int *)(param_1 + 0x148)) * *(int *)(param_1 + 0x13c) + *piVar1)
                     - *(int *)(param_1 + 0x144)) * 4,(*piVar3 - *piVar2) * 4 + 4);
        } while (iVar7 < _DAT_0140e7a4);
      }
      local_28 = local_28 + 4;
      local_18 = local_18 + 1;
    } while (local_18 <= local_24);
  }
  return;
}
