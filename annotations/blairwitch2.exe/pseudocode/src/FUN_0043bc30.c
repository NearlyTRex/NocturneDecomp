// Name: FUN_0043bc30
// Address: 0043bc30
// Address Range: [[0043bc30, 0043bf4b]]
// Convention: unknown
// Signature: void FUN_0043bc30(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043bc30(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (_DAT_01c37788 != 0) {
    FUN_00560050(0,0,0,DAT_006141b8 + -1,DAT_006141bc + -1);
    return;
  }
  if (0x100 < *(int *)(param_1 + 0x1d0)) {
    local_34 = _DAT_01c37788;
    local_2c = _DAT_01c37788;
    local_30 = *(int *)(param_1 + 0x144) + -1;
    local_28 = *(int *)(param_1 + 0x148) + -1;
    FUN_0043bb50(param_1,&local_34);
    return;
  }
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x1d0)) {
    piVar7 = (int *)(param_1 + 0x1d4);
    do {
      if (*piVar7 < 0) {
        *piVar7 = 0;
      }
      if (*(int *)(param_1 + 0x144) <= piVar7[1]) {
        piVar7[1] = *(int *)(param_1 + 0x144) + -1;
      }
      if (piVar7[2] < 0) {
        piVar7[2] = 0;
      }
      if (*(int *)(param_1 + 0x148) <= piVar7[3]) {
        piVar7[3] = *(int *)(param_1 + 0x148) + -1;
      }
      iVar8 = iVar8 + 1;
      piVar7 = piVar7 + 4;
    } while (iVar8 < *(int *)(param_1 + 0x1d0));
  }
  iVar8 = 0;
  local_1c = 0;
  local_14 = *(int *)(param_1 + 0x148);
  if (0 < *(int *)(param_1 + 0x1d0)) {
    iVar5 = param_1 + 0x1d4;
    do {
      if (*(int *)(iVar5 + 8) < local_14) {
        local_14 = *(int *)(iVar5 + 8);
      }
      if (local_1c < *(int *)(iVar5 + 0xc)) {
        local_1c = *(int *)(iVar5 + 0xc);
      }
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar8 < *(int *)(param_1 + 0x1d0));
  }
  if (local_14 <= local_1c) {
    local_20 = local_14 << 2;
    local_24 = (int *)(param_1 + 0x1d4);
    do {
      iVar8 = local_20;
      local_18 = 0;
      _DAT_01466954 = 0;
      if (0 < *(int *)(param_1 + 0x1d0)) {
        iVar5 = 0;
        piVar7 = local_24;
        do {
          if ((piVar7[2] <= local_14) && (local_14 <= piVar7[3])) {
            bVar4 = false;
            if (0 < _DAT_01466954) {
              iVar9 = _DAT_01466954 * 4;
              iVar6 = 0;
              do {
                if ((*(int *)(iVar6 + 0x1466958) <= piVar7[1]) &&
                   (*piVar7 <= *(int *)(iVar6 + 0x1466d58))) {
                  if ((*(int *)(iVar6 + 0x1466958) <= *piVar7) &&
                     (piVar7[1] <= *(int *)(iVar6 + 0x1466d58))) goto LAB_0043bdb6;
                  if (*piVar7 < *(int *)(iVar6 + 0x1466958)) {
                    bVar4 = true;
                    *(int *)(iVar6 + 0x1466958) = *piVar7;
                  }
                  if (*(int *)(iVar6 + 0x1466d58) < piVar7[1]) {
                    *(int *)(iVar6 + 0x1466d58) = piVar7[1];
                    goto LAB_0043bdb6;
                  }
                  if (bVar4) break;
                }
                iVar6 = iVar6 + 4;
              } while (iVar6 < iVar9);
            }
            if (!bVar4) {
              *(int *)(iVar5 + 0x1466958) = *piVar7;
              _DAT_01466954 = _DAT_01466954 + 1;
              *(int *)(iVar5 + 0x1466d58) = piVar7[1];
              iVar5 = iVar5 + 4;
            }
          }
LAB_0043bdb6:
          piVar7 = piVar7 + 4;
          local_18 = local_18 + 1;
        } while (local_18 < *(int *)(param_1 + 0x1d0));
      }
      iVar5 = 0;
      if (0 < _DAT_01466954) {
        iVar9 = 0;
        do {
          piVar7 = (int *)(iVar9 + 0x1466958);
          piVar1 = (int *)(iVar9 + 0x1466958);
          piVar2 = (int *)(iVar9 + 0x1466958);
          piVar3 = (int *)(iVar9 + 0x1466d58);
          iVar9 = iVar9 + 4;
          iVar5 = iVar5 + 1;
          FUN_00470201(*(int *)(&DAT_01c2b64c + iVar8) + *piVar7 * 4,
                       (local_14 * *(int *)(param_1 + 0x144) + *piVar1) * 4 +
                       *(int *)(param_1 + 0x15c),(*piVar3 - *piVar2) * 4 + 4);
        } while (iVar5 < _DAT_01466954);
      }
      local_20 = local_20 + 4;
      local_14 = local_14 + 1;
    } while (local_14 <= local_1c);
  }
  return;
}
