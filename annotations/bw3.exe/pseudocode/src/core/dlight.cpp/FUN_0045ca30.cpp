// Name: FUN_0045ca30
// Address: 0045ca30
// Address Range: [[0045ca30, 0045cd1c]]
// Convention: unknown
// Signature: void FUN_0045ca30(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ca30(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (*(int *)(param_1 + 0x168) != 0) {
    if (0x100 < *(int *)(param_1 + 0x1d0)) {
      local_34 = 0;
      local_2c = 0;
      local_30 = *(int *)(param_1 + 0x1cc0) + -1;
      local_28 = *(int *)(param_1 + 0x1cc4) + -1;
      FUN_0045c720(param_1,&local_34);
      *(uint *)(param_1 + 0x1d0) = 0;
      return;
    }
    if (*(int *)(param_1 + 0x2f9c) == 0) {
      _DAT_01d71de0 = "..\\core\\dlight.cpp";
      _DAT_01d71de4 = 0x202;
      FUN_004e4330("CDemonLight::blitZBuffer - No master Z buffer");
    }
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x1d0)) {
      piVar5 = (int *)(param_1 + 0x1d4);
      do {
        if (*piVar5 < 0) {
          *piVar5 = 0;
        }
        iVar6 = *(int *)(param_1 + 0x1cc0) + -1;
        if (iVar6 < piVar5[1]) {
          piVar5[1] = iVar6;
        }
        if (piVar5[2] < 0) {
          piVar5[2] = 0;
        }
        iVar6 = *(int *)(param_1 + 0x1cc4) + -1;
        if (iVar6 < piVar5[3]) {
          piVar5[3] = iVar6;
        }
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (iVar4 < *(int *)(param_1 + 0x1d0));
    }
    local_18 = *(int *)(param_1 + 0x1cc4);
    iVar4 = 0;
    local_20 = 0;
    if (0 < *(int *)(param_1 + 0x1d0)) {
      iVar6 = param_1 + 0x1d4;
      do {
        if (*(int *)(iVar6 + 8) < local_18) {
          local_18 = *(int *)(iVar6 + 8);
        }
        if (local_20 < *(int *)(iVar6 + 0xc)) {
          local_20 = *(int *)(iVar6 + 0xc);
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 0x10;
      } while (iVar4 < *(int *)(param_1 + 0x1d0));
    }
    if (local_18 <= local_20) {
      local_24 = (int *)(param_1 + 0x1d4);
      do {
        local_1c = 0;
        _DAT_01b4aea4 = 0;
        if (0 < *(int *)(param_1 + 0x1d0)) {
          local_14 = 0;
          piVar5 = local_24;
          do {
            if ((piVar5[2] <= local_18) && (local_18 <= piVar5[3])) {
              bVar3 = false;
              if (0 < _DAT_01b4aea4) {
                iVar4 = _DAT_01b4aea4 * 4;
                iVar6 = 0;
                do {
                  if ((*(int *)(iVar6 + 0x1b4aea8) <= piVar5[1]) &&
                     (*piVar5 <= *(int *)(iVar6 + 0x1b4b2a8))) {
                    if ((*(int *)(iVar6 + 0x1b4aea8) <= *piVar5) &&
                       (piVar5[1] <= *(int *)(iVar6 + 0x1b4b2a8))) goto LAB_0045cba9;
                    if (*piVar5 < *(int *)(iVar6 + 0x1b4aea8)) {
                      bVar3 = true;
                      *(int *)(iVar6 + 0x1b4aea8) = *piVar5;
                    }
                    if (*(int *)(iVar6 + 0x1b4b2a8) < piVar5[1]) {
                      *(int *)(iVar6 + 0x1b4b2a8) = piVar5[1];
                      goto LAB_0045cba9;
                    }
                    if (bVar3) break;
                  }
                  iVar6 = iVar6 + 4;
                } while (iVar6 < iVar4);
              }
              if (!bVar3) {
                *(int *)(local_14 + 0x1b4aea8) = *piVar5;
                *(int *)(local_14 + 0x1b4b2a8) = piVar5[1];
                _DAT_01b4aea4 = _DAT_01b4aea4 + 1;
                local_14 = local_14 + 4;
              }
            }
LAB_0045cba9:
            piVar5 = piVar5 + 4;
            local_1c = local_1c + 1;
          } while (local_1c < *(int *)(param_1 + 0x1d0));
        }
        iVar4 = 0;
        if (0 < _DAT_01b4aea4) {
          iVar6 = 0;
          do {
            piVar5 = (int *)(iVar6 + 0x1b4aea8);
            iVar2 = (local_18 * *(int *)(param_1 + 0x1cc0) + *(int *)(iVar6 + 0x1b4aea8)) * 2;
            piVar1 = (int *)(iVar6 + 0x1b4b2a8);
            iVar6 = iVar6 + 4;
            iVar4 = iVar4 + 1;
            FUN_00471271(*(int *)(param_1 + 0x2f94) + iVar2,*(int *)(param_1 + 0x2f9c) + iVar2,
                         (*piVar1 - *piVar5) * 2 + 2);
          } while (iVar4 < _DAT_01b4aea4);
        }
        local_18 = local_18 + 1;
      } while (local_18 <= local_20);
    }
  }
  *(uint *)(param_1 + 0x1d0) = 0;
  return;
}
