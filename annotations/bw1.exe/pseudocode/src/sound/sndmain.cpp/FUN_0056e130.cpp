// Name: FUN_0056e130
// Address: 0056e130
// Address Range: [[0056e130, 0056e7ea]]
// Convention: unknown
// Signature: void FUN_0056e130(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056e130(int param_1)

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
  byte local_58 [44];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar10 = 0;
  fVar2 = _DAT_00605b08 * _DAT_00623308;
  fVar3 = _DAT_02c745e0 * _DAT_00623308;
  fVar4 = _DAT_00605b0c * _DAT_00623308;
  *(uint *)(param_1 + 0x124) = 1;
  *(float *)(param_1 + 0x114) = fVar2;
  *(float *)(param_1 + 0x118) = fVar3;
  *(float *)(param_1 + 0x11c) = fVar4;
  *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x110);
  *(uint *)(param_1 + 0x13c) = 0xffffffff;
  FUN_00479580(param_1,0,0,local_158,0);
  FUN_004795b0(local_258,0,0,local_158,&DAT_005f2c55);
  iVar5 = FUN_00478fb0("sound",local_258);
  if (0 < iVar5) {
    *(uint *)(param_1 + 0x124) = 1;
    *(uint *)(param_1 + 0x13c) = 0;
    *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x110);
  }
  FUN_004795b0(local_358,0,0,local_158,&DAT_005f2c5f);
  FUN_005a08d0(local_58);
  iVar5 = FUN_005a0fd0(local_58,"sound",local_358,1);
  if (iVar5 != 0) {
    local_20 = param_1 + 0x11c;
    local_28 = param_1 + 0x118;
    local_18 = 0;
    local_1c = 0;
    local_24 = param_1 + 0x114;
    local_14 = 0;
    while (iVar5 = FUN_005a07a0(), -1 < iVar5) {
      local_14 = local_14 + 1;
      puVar6 = (byte *)FUN_005c2dc0(local_484,&DAT_005f2c52);
      pcVar8 = local_484;
      if (puVar6 != (byte *)0x0) {
        *puVar6 = 0;
      }
      do {
        pcVar9 = pcVar8;
        if (*pcVar8 == '\0') goto joined_r0x0056e359;
        if (*pcVar8 == '\0') break;
        pcVar9 = pcVar8 + 1;
        if (*pcVar9 == '\0') goto joined_r0x0056e359;
        pcVar8 = pcVar8 + 2;
      } while (*pcVar9 != '\0');
      pcVar9 = (char *)0x0;
joined_r0x0056e359:
      while ((local_484 < pcVar9 && (((&DAT_00626114)[(byte)(pcVar9[-1] + 1)] & 2) != 0))) {
        pcVar9 = pcVar9 + -1;
      }
      *pcVar9 = '\0';
      while (((&DAT_00626114)[(byte)(local_484[0] + 1)] & 2) != 0) {
        iVar5 = -1;
        pcVar8 = local_484;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + (uint)bVar10 * -2 + 1;
        } while (cVar1 != '\0');
        FUN_005c25d0();
      }
      if (local_484[0] != '\0') {
        iVar5 = FUN_005c2cac();
        if (iVar5 == 1) {
          if (local_1c != 0) {
            _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
            _DAT_01d1d404 = 0x2e5;
            FUN_005030e0("Reference distance specified in %s on line %d, then again on line %d",local_358,local_1c,local_14);
          }
          local_1c = local_14;
          if (*(int *)(param_1 + 0x114) < 0x3dcccccd) {
            _DAT_01d1d404 = 0x2e7;
            _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
            FUN_005030e0("Reference volume distance %g is too small in %s line %d!",(double)*(float *)(param_1 + 0x114),
                         local_358,local_14);
          }
          if (local_18 == 0) {
            *(float *)(param_1 + 0x118) = *(float *)(param_1 + 0x114) / _DAT_00605b04;
          }
        }
        else {
          iVar5 = FUN_005c2cac();
          if (iVar5 == 1) {
            if (local_18 != 0) {
              _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
              _DAT_01d1d404 = 0x2ed;
              FUN_005030e0("Minimum distance specified in %s on line %d, then again on line %d",local_358,local_18,local_14);
            }
            local_18 = local_14;
            if (*(int *)(param_1 + 0x118) < 0x3dcccccd) {
              _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
              _DAT_01d1d404 = 0x2ef;
              FUN_005030e0("Reference volume distance %g is too small in %s line %d!",(double)*(float *)(param_1 + 0x118),
                           local_358,local_14);
            }
          }
          else {
            iVar5 = FUN_005c2cac();
            if (iVar5 != 1) {
              iVar5 = FUN_005c2cac();
              if (iVar5 == 1) {
                if (local_1c == 0) {
                  _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
                  _DAT_01d1d404 = 0x2f9;
                  FUN_005030e0();
                }
                if (local_18 != 0) {
                  _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
                  _DAT_01d1d404 = 0x2fa;
                  FUN_005030e0("Minimum distance specified in %s on line %d, then again on line %d",local_358,local_18,local_14);
                }
                local_18 = local_14;
                if ((int)local_488 < 0x3a83126f) {
                  _DAT_01d1d404 = 0x2fc;
                  _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
                  FUN_005030e0("maxVol %g is too small in %s line %d!",(double)local_488,local_358,
                               local_14);
                }
                *(float *)(param_1 + 0x118) = *(float *)(param_1 + 0x114) / local_488;
              }
              else {
                iVar5 = FUN_005c2cac();
                if (iVar5 == 1) {
                  if (-1 < *(int *)(param_1 + 0x110)) {
                    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
                    _DAT_01d1d404 = 0x303;
                    FUN_005030e0("Length for %s already known, then specified again in %s line %d",param_1,local_358,local_14);
                  }
                  if (local_2c < 1) {
                    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
                    _DAT_01d1d404 = 0x304;
                    FUN_005030e0("Invalid length %d in %s line %d",local_2c,local_358,local_14);
                  }
                  *(int *)(param_1 + 0x110) = local_2c;
                }
                else {
                  iVar5 = FUN_005c04e0(local_484,&DAT_005f2f6e);
                  if (iVar5 == 0) {
                    *(uint *)(param_1 + 0x124) = 1;
                    *(uint *)(param_1 + 0x13c) = 0;
                    *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x110);
                  }
                  else {
                    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
                    _DAT_01d1d404 = 0x311;
                    FUN_005030e0("Error parsing %s line %d: %s",local_358,local_14,local_484);
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
  FUN_005a0a50(local_58,0);
  return;
}
