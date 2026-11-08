// Name: FUN_0053cfa0
// Address: 0053cfa0
// Address Range: [[0053cfa0, 0053d3e9]]
// Convention: unknown
// Signature: void FUN_0053cfa0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053cfa0(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  int aiStack_ab0 [400];
  uint auStack_470 [66];
  uint auStack_368 [65];
  int iStack_264;
  uint auStack_260 [66];
  uint auStack_158 [64];
  int iStack_58;
  int *piStack_50;
  int *piStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int *piStack_3c;
  int *piStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int *piStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar8 = 0;
  do {
    iStack_28 = 0;
    iStack_44 = 0;
    if (0 < *param_1) {
      piStack_3c = param_1;
      do {
        iStack_18 = piStack_3c[1];
        iStack_40 = 0;
        for (iVar5 = 0; iVar5 < *(int *)(iStack_18 + 0x424); iVar5 = iVar5 + 1) {
          FUN_0053c3b0(iStack_18,iVar5);
          puVar6 = auStack_260;
          puVar7 = auStack_368;
          for (iVar4 = 0x42; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
            puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
          }
          if ((iStack_264 != 0) && (iVar4 = FUN_0053d3f0(param_1,auStack_368), iVar4 < 0))
          goto LAB_0053d00e;
        }
        if (iStack_40 == 0) {
          iStack_28 = iStack_28 + 1;
          piStack_3c = piStack_3c + 1;
        }
        else {
LAB_0053d00e:
          FUN_0053d490(param_1,iStack_28);
          iStack_44 = 1;
        }
      } while (iStack_28 < *param_1);
    }
  } while (iStack_44 != 0);
  iVar5 = *param_1;
  while (iVar5 = iVar5 + -1, 0 < iVar5) {
    iVar4 = 0;
    piVar2 = param_1;
    if (0 < iVar5) {
      do {
        iVar1 = piVar2[2];
        if (*(int *)(iVar1 + 0x408) < *(int *)(piVar2[1] + 0x408)) {
          piVar2[2] = piVar2[1];
          piVar2[1] = iVar1;
        }
        iVar4 = iVar4 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar4 < iVar5);
    }
  }
  iStack_48 = 0;
  iStack_24 = 0;
  if (0 < *param_1) {
    piStack_4c = param_1;
    do {
      iStack_30 = 0;
      iStack_2c = piStack_4c[1];
      iVar5 = iStack_24 << 3;
      while (iStack_30 < *(int *)(iStack_2c + 0x424)) {
        FUN_0053c3b0(iStack_2c,iStack_30);
        puVar6 = auStack_470;
        puVar7 = auStack_158;
        for (iVar4 = 0x42; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        }
        if ((iStack_58 == 0) || (iVar4 = FUN_0053d3f0(param_1,auStack_158), iVar4 < 0)) {
          iStack_30 = iStack_30 + 1;
        }
        else {
          if (199 < iStack_24) {
            _DAT_01d1d400 = "..\\engine\\pod.cpp";
            _DAT_01d1d404 = 0x633;
            FUN_005030e0("Too many POD dependency ordering rules");
          }
          if (iStack_58 < 0) {
            *(int *)((int)aiStack_ab0 + iVar5) = iStack_2c;
            iVar4 = param_1[iVar4 + 1];
          }
          else {
            *(int *)((int)aiStack_ab0 + iVar5) = param_1[iVar4 + 1];
            iVar4 = iStack_2c;
          }
          *(int *)((int)aiStack_ab0 + iVar5 + 4) = iVar4;
          iVar5 = iVar5 + 8;
          iStack_24 = iStack_24 + 1;
          iStack_30 = iStack_30 + 1;
        }
      }
      iStack_48 = iStack_48 + 1;
      piStack_4c = piStack_4c + 1;
    } while (iStack_48 < *param_1);
  }
  iVar5 = 0;
  if (0 < *param_1) {
    piStack_50 = param_1;
    do {
      iStack_34 = iVar5;
      if (iVar5 < *param_1) {
        piStack_38 = param_1 + iVar5;
        do {
          iStack_14 = 0;
          if (0 < iStack_24) {
            piStack_20 = piStack_38;
            iVar4 = 0;
            iStack_1c = iStack_24 * 8;
            do {
              uVar3 = *(uint *)((int)aiStack_ab0 + iVar4 + 4);
              if (uVar3 == piStack_38[1]) {
                uVar3 = uVar3 ^ piStack_38[1];
                piVar2 = param_1;
                if (0 < iVar5) {
                  do {
                    if (piVar2[1] == *(int *)((int)aiStack_ab0 + iVar4)) break;
                    uVar3 = uVar3 + 1;
                    piVar2 = piVar2 + 1;
                  } while ((int)uVar3 < iVar5);
                }
                if (iVar5 <= (int)uVar3) break;
              }
              iVar4 = iVar4 + 8;
              iStack_14 = iStack_14 + 1;
            } while (iVar4 < iStack_24 * 8);
          }
          if (iStack_24 <= iStack_14) break;
          iStack_34 = iStack_34 + 1;
          piStack_38 = piStack_38 + 1;
        } while (iStack_34 < *param_1);
      }
      if (*param_1 <= iStack_34) {
        _DAT_01d1d400 = "..\\engine\\pod.cpp";
        _DAT_01d1d404 = 0x685;
        FUN_005030e0("Circular POD mount order dependency detected.");
      }
      iVar4 = (param_1 + iStack_34)[1];
      piVar2 = param_1 + iStack_34;
      for (; iVar5 < iStack_34; iStack_34 = iStack_34 + -1) {
        piVar2[1] = *piVar2;
        piVar2 = piVar2 + -1;
      }
      piStack_50[1] = iVar4;
      iVar5 = iVar5 + 1;
      piStack_50 = piStack_50 + 1;
    } while (iVar5 < *param_1);
  }
  return;
}
