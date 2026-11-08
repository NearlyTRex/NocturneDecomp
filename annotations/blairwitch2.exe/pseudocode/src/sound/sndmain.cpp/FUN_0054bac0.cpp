// Name: FUN_0054bac0
// Address: 0054bac0
// Address Range: [[0054bac0, 0054c178]]
// Convention: unknown
// Signature: void FUN_0054bac0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054bac0(int param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  byte *puVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  float local_488;
  char local_484 [300];
  byte local_358 [256];
  byte local_258 [256];
  byte local_158 [256];
  byte local_58 [40];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar10 = 0;
  fVar2 = _DAT_005fbc28 * _DAT_0061bcb8;
  fVar3 = _DAT_0263cf10 * _DAT_0061bcb8;
  fVar4 = _DAT_005fbc2c * _DAT_0061bcb8;
  *(uint *)(param_1 + 0x124) = 1;
  *(float *)(param_1 + 0x114) = fVar2;
  *(float *)(param_1 + 0x118) = fVar3;
  *(float *)(param_1 + 0x11c) = fVar4;
  *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x110);
  *(uint *)(param_1 + 0x13c) = 0xffffffff;
  FUN_00461070(param_1,0,0,local_158,0);
  FUN_004610a0(local_258,0,0,local_158,&DAT_005e7a5b);
  iVar5 = FUN_00460aa0("sound",local_258);
  if (0 < iVar5) {
    *(uint *)(param_1 + 0x124) = 1;
    *(uint *)(param_1 + 0x13c) = 0;
    *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x110);
  }
  FUN_004610a0(local_358,0,0,local_158,&DAT_005e7a65);
  FUN_0057cd50(local_58);
  iVar5 = FUN_0057d390();
  if (iVar5 != 0) {
    local_24 = param_1 + 0x11c;
    local_2c = param_1 + 0x118;
    local_1c = 0;
    local_20 = 0;
    local_28 = param_1 + 0x114;
    local_18 = 0;
    while (iVar5 = FUN_0057cc20(), -1 < iVar5) {
      local_18 = local_18 + 1;
      puVar6 = (byte *)FUN_005ba9e0(local_484,&DAT_005e7a58);
      pcVar8 = local_484;
      if (puVar6 != (byte *)0x0) {
        *puVar6 = 0;
      }
      do {
        pcVar9 = pcVar8;
        if (*pcVar8 == '\0') goto joined_r0x0054bce7;
        if (*pcVar8 == '\0') break;
        pcVar9 = pcVar8 + 1;
        if (*pcVar9 == '\0') goto joined_r0x0054bce7;
        pcVar8 = pcVar8 + 2;
      } while (*pcVar9 != '\0');
      pcVar9 = (char *)0x0;
joined_r0x0054bce7:
      while ((local_484 < pcVar9 && (((&DAT_0061ed94)[(byte)(pcVar9[-1] + 1)] & 2) != 0))) {
        pcVar9 = pcVar9 + -1;
      }
      *pcVar9 = '\0';
      while (((&DAT_0061ed94)[(byte)(local_484[0] + 1)] & 2) != 0) {
        iVar5 = -1;
        pcVar8 = local_484;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + (uint)bVar10 * -2 + 1;
        } while (cVar1 != '\0');
        FUN_005ba1f0();
      }
      if (local_484[0] != '\0') {
        iVar5 = FUN_005ba8cc();
        if (iVar5 == 1) {
          if (local_20 != 0) {
            _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
            _DAT_01d046a4 = 0x2e5;
            FUN_004e4500("Reference distance specified in %s on line %d, then again on line %d",local_358,local_20,local_18);
          }
          local_20 = local_18;
          if (*(int *)(param_1 + 0x114) < 0x3dcccccd) {
            _DAT_01d046a4 = 0x2e7;
            _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
            FUN_004e4500("Reference volume distance %g is too small in %s line %d!",(double)*(float *)(param_1 + 0x114),
                         local_358,local_18);
          }
          if (local_1c == 0) {
            *(float *)(param_1 + 0x118) = *(float *)(param_1 + 0x114) / _DAT_005fbc24;
          }
        }
        else {
          iVar5 = FUN_005ba8cc();
          if (iVar5 == 1) {
            if (local_1c != 0) {
              _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
              _DAT_01d046a4 = 0x2ed;
              FUN_004e4500("Minimum distance specified in %s on line %d, then again on line %d",local_358,local_1c,local_18);
            }
            local_1c = local_18;
            if (*(int *)(param_1 + 0x118) < 0x3dcccccd) {
              _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
              _DAT_01d046a4 = 0x2ef;
              FUN_004e4500("Reference volume distance %g is too small in %s line %d!",(double)*(float *)(param_1 + 0x118),
                           local_358,local_18);
            }
          }
          else {
            iVar5 = FUN_005ba8cc();
            if (iVar5 != 1) {
              iVar5 = FUN_005ba8cc();
              if (iVar5 == 1) {
                if (local_20 == 0) {
                  _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
                  _DAT_01d046a4 = 0x2f9;
                  FUN_004e4500();
                }
                if (local_1c != 0) {
                  _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
                  _DAT_01d046a4 = 0x2fa;
                  FUN_004e4500("Minimum distance specified in %s on line %d, then again on line %d",local_358,local_1c,local_18);
                }
                local_1c = local_18;
                if ((int)local_488 < 0x3a83126f) {
                  _DAT_01d046a4 = 0x2fc;
                  _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
                  FUN_004e4500("maxVol %g is too small in %s line %d!",(double)local_488,local_358,
                               local_18);
                }
                *(float *)(param_1 + 0x118) = *(float *)(param_1 + 0x114) / local_488;
              }
              else {
                iVar5 = FUN_005ba8cc();
                if (iVar5 == 1) {
                  if (-1 < *(int *)(param_1 + 0x110)) {
                    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
                    _DAT_01d046a4 = 0x303;
                    FUN_004e4500("Length for %s already known, then specified again in %s line %d",param_1,local_358,local_18);
                  }
                  if (local_30 < 1) {
                    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
                    _DAT_01d046a4 = 0x304;
                    FUN_004e4500("Invalid length %d in %s line %d",local_30,local_358,local_18);
                  }
                  *(int *)(param_1 + 0x110) = local_30;
                }
                else {
                  iVar5 = FUN_005b8130(local_484,&DAT_005e7d74);
                  if (iVar5 == 0) {
                    *(uint *)(param_1 + 0x124) = 1;
                    *(uint *)(param_1 + 0x13c) = 0;
                    *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x110);
                  }
                  else {
                    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
                    _DAT_01d046a4 = 0x311;
                    FUN_004e4500("Error parsing %s line %d: %s",local_358,local_18,local_484);
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar7 = 0;
    iVar5 = param_1;
    if (0 < *(int *)(param_1 + 0x124)) {
      do {
        if (*(int *)(iVar5 + 0x128) < 0) {
          *(uint *)(iVar5 + 0x128) = *(uint *)(param_1 + 0x110);
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar7 < *(int *)(param_1 + 0x124));
    }
  }
  FUN_0057cec0(local_58,0);
  return;
}
