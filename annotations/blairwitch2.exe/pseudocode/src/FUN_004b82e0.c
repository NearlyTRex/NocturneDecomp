// Name: FUN_004b82e0
// Address: 004b82e0
// Address Range: [[004b82e0, 004b8d8d]]
// Convention: unknown
// Signature: void FUN_004b82e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b82e0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  longlong lVar14;
  byte auStack_224 [256];
  byte auStack_124 [268];
  uint uStack_18;
  uint uStack_14;
  
  if (_DAT_01cb7788 == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      iVar9 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,*(uint *)(param_1 + 0x5c));
      if (iVar9 != 0) {
        FUN_004894f0(0x01C38BC0,"GoToMap");
      }
      iVar9 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,*(uint *)(param_1 + 0x60));
      if (iVar9 != 0) {
        FUN_004894f0(0x01C38BC0,"GoToCompass");
      }
      iVar9 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,*(uint *)(param_1 + 100));
      if (iVar9 != 0) {
        FUN_004894f0(0x01C38BC0,"UseSPS");
      }
      if (*(int *)(0x01CAF56C + 0x40) != 0) {
        iVar9 = 0;
        for (iVar11 = 0; iVar11 < 0x01E661B8[0x543fb]; iVar11 = iVar11 + 1) {
          iVar2 = *(int *)(iVar9 + 0x150ff0 + (int)0x01E661B8);
          iVar3 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
          if ((*(int *)(iVar2 + 0x10a78) == iVar3) &&
             (fVar4 = *(float *)(iVar2 + 0x20) - *(float *)(iVar3 + 0x20),
             fVar6 = *(float *)(iVar2 + 0x24) - *(float *)(iVar3 + 0x24),
             fVar5 = *(float *)(iVar2 + 0x28) - *(float *)(iVar3 + 0x28),
             SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) < (float)_DAT_005d79eb)) {
            *(uint *)(0x01CAF56C + 0x40) = 0;
          }
          iVar9 = iVar9 + 4;
        }
      }
      if ((((*(int *)(param_1 + 0x22c) != 0) &&
           (iVar9 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d), iVar9 != 0)) &&
          (iVar9 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x12), iVar9 != 0)) &&
         (iVar9 = 1 - *(int *)(param_1 + 0x294), *(int *)(param_1 + 0x294) = iVar9, iVar9 != 0)) {
        FUN_00538d10(0x01E661B8,*(uint *)(0x01E65CD0 + 0xc),1);
        *(uint *)(0x01E65CD0 + 0x10) = 0;
      }
      if ((*(int *)(param_1 + 0x294) == 0) &&
         (iVar9 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x2e), iVar9 != 0)) {
        iVar9 = (**(code **)*0x01D02F84)(0x01D02F84,0x2a);
        piVar8 = 0x01E661B8;
        if (iVar9 == 0) {
          iVar9 = *(int *)(param_1 + 0x290) + 1;
          *(int *)(param_1 + 0x290) = iVar9;
          if (*piVar8 <= iVar9) {
            *(uint *)(param_1 + 0x290) = 0;
          }
        }
        else {
          iVar9 = *(int *)(param_1 + 0x290) + -1;
          *(int *)(param_1 + 0x290) = iVar9;
          if (iVar9 < 0) {
            *(int *)(param_1 + 0x290) = *0x01E661B8 + -1;
          }
        }
        FUN_0052ddf0(0x01E661B8,*(uint *)(param_1 + 0x290));
      }
    }
    if (((*(int *)(param_1 + 0x22c) != 0) &&
        (iVar9 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d), iVar9 != 0)) &&
       (iVar9 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x15), iVar9 != 0)) {
      iVar9 = 1 - *(int *)(param_1 + 0x218);
      *(int *)(param_1 + 0x218) = iVar9;
      if (iVar9 == 0) {
        FUN_0055a1d0();
      }
      else {
        _DAT_01c2a384 = 0;
        FUN_0055a360();
      }
    }
    if ((((*(int *)(param_1 + 0x22c) != 0) || (iVar9 = FUN_005bac90(), iVar9 != 0)) &&
        (iVar9 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d), iVar9 != 0)) &&
       (iVar9 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x2c), iVar9 != 0)) {
      *(int *)(param_1 + 0x200) = 1 - *(int *)(param_1 + 0x200);
    }
    iVar9 = (**(code **)*0x01D02F84)(0x01D02F84,0x38);
    if ((iVar9 != 0) && (iVar9 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x32), iVar9 != 0)) {
      _DAT_01d1cdc8 = (uint)(_DAT_01d1cdc8 == 0);
    }
    if (((*(int *)(param_1 + 0x1f8) == 0) &&
        (iVar9 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x3f), iVar9 != 0)) ||
       ((iVar9 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d), iVar9 != 0 &&
        (iVar9 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x32), iVar9 != 0)))) {
      iVar9 = FUN_00550bc0();
      if (iVar9 == 0) {
        FUN_0055a360();
        FUN_00550bd0();
      }
      else {
        FUN_00550bd0();
        FUN_0055a1d0();
      }
    }
    if ((((*(int *)(param_1 + 0x22c) != 0) &&
         (iVar9 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d), iVar9 != 0)) &&
        (iVar9 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x11), uVar7 = DAT_006141bc,
        iVar9 != 0)) && (0x1df < (int)DAT_006141bc)) {
      iVar9 = 1 - *(int *)(param_1 + 0x298);
      *(int *)(param_1 + 0x298) = iVar9;
      if (iVar9 != 0) {
        lVar14 = 0xf000000001;
      }
      else {
        lVar14 = (ulonglong)uVar7 << 0x20;
      }
      FUN_0052e910(0x01E661B8,iVar9 != 0,lVar14);
    }
    if (((*(int *)(param_1 + 0x22c) != 0) && (_DAT_01cb80d0 == 0)) &&
       ((iVar9 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d), iVar9 != 0 &&
        ((iVar9 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x2f), iVar9 != 0 &&
         (0x1df < (int)DAT_006141bc)))))) {
      *(uint *)(param_1 + 0x204) = (uint)(*(int *)(param_1 + 0x204) == 0);
    }
    iVar9 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d);
    if (((iVar9 != 0) && (iVar9 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x1f), iVar9 != 0))
       && (*(int *)(param_1 + 0x244) == 0)) {
      FUN_004bb9b0(param_1,0);
    }
    iVar9 = (**(code **)*0x01D02F84)(0x01D02F84,0x3c);
    if ((iVar9 != 0) && (*(int *)(param_1 + 0x244) == 0)) {
      FUN_004bb9b0(param_1,0);
    }
    iVar9 = (**(code **)*0x01D02F84)(0x01D02F84,0x3d);
    if (iVar9 != 0) {
      FUN_004bdb10();
    }
    iVar9 = (**(code **)*0x01D02F84)(0x01D02F84,0x40);
    if ((iVar9 != 0) && (*(int *)(param_1 + 0x244) == 0)) {
      FUN_004bb9b0(param_1,"quicksavedgame.noc");
      uVar10 = FUN_0050fe80("Quick Save",0x40000000);
      FUN_004b31a0(param_1,uVar10);
    }
    if ((*(int *)(param_1 + 0x1f8) == 0) &&
       (iVar9 = (**(code **)*0x01D02F84)(0x01D02F84,0x43), iVar9 != 0)) {
      iVar9 = FUN_00460c70(&DAT_005d7965,"quicksavedgame.noc",&DAT_005d794f);
      if (iVar9 == 0) {
        uVar10 = FUN_0050fe80("No quicked saved game to load",0x40000000);
        FUN_004b31a0(param_1,uVar10);
      }
      else {
        FUN_005b89c0();
        uVar10 = FUN_0050fe80();
        iVar9 = FUN_0047c760(0x01C25594,uVar10);
        if (iVar9 != 0) {
          pcVar12 = "quicksavedgame.noc";
          pcVar13 = (char *)(param_1 + 0x9ec);
          *(uint *)(param_1 + 0x9e8) = 1;
          do {
            cVar1 = *pcVar12;
            *pcVar13 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar12[1];
            pcVar12 = pcVar12 + 2;
            pcVar13[1] = cVar1;
            pcVar13 = pcVar13 + 2;
          } while (cVar1 != '\0');
        }
      }
    }
    iVar9 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x3b);
    if (iVar9 != 0) {
      *(uint *)(param_1 + 0xaec) = (uint)(*(int *)(param_1 + 0xaec) == 0);
    }
    if (((*(int *)(param_1 + 0x22c) != 0) || (iVar9 = FUN_005bac90(), iVar9 != 0)) &&
       (iVar9 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0xe), iVar9 != 0)) {
      *(uint *)(param_1 + 0x2a0) = (uint)(*(int *)(param_1 + 0x2a0) == 0);
    }
    if (*(int *)(param_1 + 0x218) == 0) {
      if ((*(int *)(0x01E65CD0 + 0x1c) != 2) &&
         (iVar9 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x3f), piVar8 = 0x01E661B8,
         iVar9 != 0)) {
        *(uint *)(param_1 + 0x298) = 1;
        FUN_0052e910(piVar8,0,0,0xf0);
        *(uint *)(param_1 + 0x1f8) = 1;
        if (*(int *)(0x01E65CD0 + 0x1c) == 1) {
          *(uint *)(0x01E65CD0 + 0x1c) = 0;
        }
        else {
          *(uint *)(0x01E65CD0 + 0x1c) = 1;
        }
      }
      if (*(int *)(param_1 + 0x1f8) != 0) {
        if ((*(int *)(0x01E65CD0 + 0x1c) == 2) &&
           (iVar9 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x44), iVar9 != 0)) {
          *(uint *)(0x01E65CD0 + 0x1c) = 1;
        }
        iVar9 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x3f);
        if (iVar9 != 0) {
          *(uint *)(0x01E65CD0 + 0x1c) = 0;
        }
        iVar9 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x43);
        if (iVar9 != 0) {
          FUN_00529b00();
        }
      }
    }
    iVar9 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x57);
    if (iVar9 != 0) {
      iVar9 = *(int *)(param_1 + 0x240) + -0x400;
      *(int *)(param_1 + 0x240) = iVar9;
      if (iVar9 < 0x8000) {
        *(uint *)(param_1 + 0x240) = 0x8000;
      }
      FUN_005b7790(auStack_124,"Gamma : %f",(double)*(int *)(param_1 + 0x240) * _DAT_005d79db)
      ;
      FUN_004b31a0(param_1,auStack_124,0x3f800000);
      FUN_00534580(0x01E661B8,*(uint *)(param_1 + 0x240));
    }
    iVar9 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x58);
    if (iVar9 != 0) {
      iVar9 = *(int *)(param_1 + 0x240) + 0x400;
      *(int *)(param_1 + 0x240) = iVar9;
      if (0x10000 < iVar9) {
        *(uint *)(param_1 + 0x240) = 0x10000;
      }
      FUN_005b7790(auStack_224,"Gamma : %f",(double)*(int *)(param_1 + 0x240) * _DAT_005d79db)
      ;
      FUN_004b31a0(param_1,auStack_224,0x3f800000);
      FUN_00534580(0x01E661B8,*(uint *)(param_1 + 0x240));
    }
    if (((*(int *)(param_1 + 0x22c) != 0) &&
        (iVar9 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d), iVar9 != 0)) &&
       (iVar9 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x23), iVar9 != 0)) {
      0x01E661B8[0x56bad] = (uint)(0x01E661B8[0x56bad] == 0);
    }
    if (((*(int *)(param_1 + 0x22c) != 0) &&
        (iVar9 = (**(code **)*0x01D02F84)(0x01D02F84,0x38), iVar9 != 0)) &&
       (iVar9 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x1e), iVar9 != 0)) {
      uStack_18 = 0x3ca3d70a;
      iVar9 = (**(code **)*0x01D02F84)(0x01D02F84,0x2a);
      if (iVar9 != 0) {
        uStack_18 = 0xbca3d70a;
      }
      uStack_14 = _DAT_01fc8a20;
      for (iVar9 = 0; iVar9 < *0x01E661B8; iVar9 = iVar9 + 1) {
        FUN_00534640(0x01E661B8);
      }
    }
    FUN_0059c3d0(0x02668118,*(uint *)(param_1 + 0x22c));
  }
  return;
}
