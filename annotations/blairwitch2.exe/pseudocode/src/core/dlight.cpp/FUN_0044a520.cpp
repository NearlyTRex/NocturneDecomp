// Name: core_dlight.cpp_FUN_0044a520
// Address: 0044a520
// Address Range: [[0044a520, 0044a80c]]
// Convention: unknown
// Signature: void core_dlight_cpp_FUN_0044a520(CDemonLight *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dlight_cpp_FUN_0044a520(CDemonLight *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  byte *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (*(int *)&param_1->field_0x168 != 0) {
    if (0x100 < *(int *)&param_1->field_0x1d0) {
      local_34 = 0;
      local_2c = 0;
      local_30 = *(int *)&param_1->field_0x1cc0 + -1;
      local_28 = *(int *)&param_1->field_0x1cc4 + -1;
      core_dlight_cpp_FUN_0044a210(param_1,(CRect *)&local_34);
      *(uint *)&param_1->field_0x1d0 = 0;
      return;
    }
    if (*(int *)&param_1->field_0x2f9c == 0) {
      _DAT_01d046a0 = "..\\core\\dlight.cpp";
      _DAT_01d046a4 = 0x203;
      core_main_c_FUN_004e4500("CDemonLight::blitZBuffer - No master Z buffer");
    }
    iVar5 = 0;
    if (0 < *(int *)&param_1->field_0x1d0) {
      piVar6 = (int *)&param_1->field_0x1d4;
      do {
        if (*piVar6 < 0) {
          *piVar6 = 0;
        }
        iVar7 = *(int *)&param_1->field_0x1cc0 + -1;
        if (iVar7 < piVar6[1]) {
          piVar6[1] = iVar7;
        }
        if (piVar6[2] < 0) {
          piVar6[2] = 0;
        }
        iVar7 = *(int *)&param_1->field_0x1cc4 + -1;
        if (iVar7 < piVar6[3]) {
          piVar6[3] = iVar7;
        }
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (iVar5 < *(int *)&param_1->field_0x1d0);
    }
    local_18 = *(int *)&param_1->field_0x1cc4;
    iVar5 = 0;
    local_20 = 0;
    if (0 < *(int *)&param_1->field_0x1d0) {
      puVar4 = &param_1->field_0x1d4;
      do {
        if (*(int *)(puVar4 + 8) < local_18) {
          local_18 = *(int *)(puVar4 + 8);
        }
        if (local_20 < *(int *)(puVar4 + 0xc)) {
          local_20 = *(int *)(puVar4 + 0xc);
        }
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 0x10;
      } while (iVar5 < *(int *)&param_1->field_0x1d0);
    }
    if (local_18 <= local_20) {
      local_24 = (int *)&param_1->field_0x1d4;
      do {
        local_1c = 0;
        _DAT_01b13078 = 0;
        if (0 < *(int *)&param_1->field_0x1d0) {
          local_14 = 0;
          piVar6 = local_24;
          do {
            if ((piVar6[2] <= local_18) && (local_18 <= piVar6[3])) {
              bVar3 = false;
              if (0 < _DAT_01b13078) {
                iVar5 = _DAT_01b13078 * 4;
                iVar7 = 0;
                do {
                  if ((*(int *)(iVar7 + 0x1b1307c) <= piVar6[1]) &&
                     (*piVar6 <= *(int *)(iVar7 + 0x1b1347c))) {
                    if ((*(int *)(iVar7 + 0x1b1307c) <= *piVar6) &&
                       (piVar6[1] <= *(int *)(iVar7 + 0x1b1347c))) goto LAB_0044a699;
                    if (*piVar6 < *(int *)(iVar7 + 0x1b1307c)) {
                      bVar3 = true;
                      *(int *)(iVar7 + 0x1b1307c) = *piVar6;
                    }
                    if (*(int *)(iVar7 + 0x1b1347c) < piVar6[1]) {
                      *(int *)(iVar7 + 0x1b1347c) = piVar6[1];
                      goto LAB_0044a699;
                    }
                    if (bVar3) break;
                  }
                  iVar7 = iVar7 + 4;
                } while (iVar7 < iVar5);
              }
              if (!bVar3) {
                *(int *)(local_14 + 0x1b1307c) = *piVar6;
                *(int *)(local_14 + 0x1b1347c) = piVar6[1];
                _DAT_01b13078 = _DAT_01b13078 + 1;
                local_14 = local_14 + 4;
              }
            }
LAB_0044a699:
            piVar6 = piVar6 + 4;
            local_1c = local_1c + 1;
          } while (local_1c < *(int *)&param_1->field_0x1d0);
        }
        iVar5 = 0;
        if (0 < _DAT_01b13078) {
          iVar7 = 0;
          do {
            piVar6 = (int *)(iVar7 + 0x1b1307c);
            iVar2 = (local_18 * *(int *)&param_1->field_0x1cc0 + *(int *)(iVar7 + 0x1b1307c)) * 2;
            piVar1 = (int *)(iVar7 + 0x1b1347c);
            iVar7 = iVar7 + 4;
            iVar5 = iVar5 + 1;
            core_dstrendr_cpp_memcpyMMX_FUN_00470201
                      ((void *)(*(int *)&param_1->field_0x2f94 + iVar2),
                       (void *)(*(int *)&param_1->field_0x2f9c + iVar2),(*piVar1 - *piVar6) * 2 + 2)
            ;
          } while (iVar5 < _DAT_01b13078);
        }
        local_18 = local_18 + 1;
      } while (local_18 <= local_20);
    }
  }
  *(uint *)&param_1->field_0x1d0 = 0;
  return;
}
