// Name: FUN_00551620
// Address: 00551620
// Address Range: [[00551620, 00551cda]]
// Convention: unknown
// Signature: void FUN_00551620(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00551620(int param_1)

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
  fVar2 = _DAT_005e4854 * _DAT_00604244;
  fVar3 = _DAT_02ce7210 * _DAT_00604244;
  fVar4 = _DAT_005e4858 * _DAT_00604244;
  *(uint *)(param_1 + 0x124) = 1;
  *(float *)(param_1 + 0x114) = fVar2;
  *(float *)(param_1 + 0x118) = fVar3;
  *(float *)(param_1 + 0x11c) = fVar4;
  *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x110);
  *(uint *)(param_1 + 0x13c) = 0xffffffff;
  FUN_00465e50(param_1,0,0,local_158,0);
  FUN_00465e80(local_258,0,0,local_158,&DAT_005d253f);
  iVar5 = FUN_004657f0("sound",local_258);
  if (0 < iVar5) {
    *(uint *)(param_1 + 0x124) = 1;
    *(uint *)(param_1 + 0x13c) = 0;
    *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x110);
  }
  FUN_00465e80(local_358,0,0,local_158,&DAT_005d2549);
  FUN_005738c0(local_58);
  iVar5 = FUN_00573fc0(local_58,"sound",local_358,1);
  if (iVar5 != 0) {
    local_20 = param_1 + 0x11c;
    local_28 = param_1 + 0x118;
    local_18 = 0;
    local_1c = 0;
    local_24 = param_1 + 0x114;
    local_14 = 0;
    while (iVar5 = FUN_00573790(), -1 < iVar5) {
      local_14 = local_14 + 1;
      puVar6 = (byte *)FUN_005a4010(local_484,&DAT_005d253c);
      pcVar8 = local_484;
      if (puVar6 != (byte *)0x0) {
        *puVar6 = 0;
      }
      do {
        pcVar9 = pcVar8;
        if (*pcVar8 == '\0') goto joined_r0x00551849;
        if (*pcVar8 == '\0') break;
        pcVar9 = pcVar8 + 1;
        if (*pcVar9 == '\0') goto joined_r0x00551849;
        pcVar8 = pcVar8 + 2;
      } while (*pcVar9 != '\0');
      pcVar9 = (char *)0x0;
joined_r0x00551849:
      while ((local_484 < pcVar9 && (((&DAT_006074b8)[(byte)(pcVar9[-1] + 1)] & 2) != 0))) {
        pcVar9 = pcVar9 + -1;
      }
      *pcVar9 = '\0';
      while (((&DAT_006074b8)[(byte)(local_484[0] + 1)] & 2) != 0) {
        iVar5 = -1;
        pcVar8 = local_484;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + (uint)bVar10 * -2 + 1;
        } while (cVar1 != '\0');
        FUN_005a54c0();
      }
      if (local_484[0] != '\0') {
        iVar5 = FUN_005a5b9c();
        if (iVar5 == 1) {
          if (local_1c != 0) {
            _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
            _DAT_01d71de4 = 0x2e7;
            FUN_004e4330("Reference distance specified in %s on line %d, then again on line %d",local_358,local_1c,local_14);
          }
          local_1c = local_14;
          if (*(int *)(param_1 + 0x114) < 0x3dcccccd) {
            _DAT_01d71de4 = 0x2e9;
            _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
            FUN_004e4330("Reference volume distance %g is too small in %s line %d!",(double)*(float *)(param_1 + 0x114),
                         local_358,local_14);
          }
          if (local_18 == 0) {
            *(float *)(param_1 + 0x118) = *(float *)(param_1 + 0x114) / _DAT_005e4850;
          }
        }
        else {
          iVar5 = FUN_005a5b9c();
          if (iVar5 == 1) {
            if (local_18 != 0) {
              _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
              _DAT_01d71de4 = 0x2ef;
              FUN_004e4330("Minimum distance specified in %s on line %d, then again on line %d",local_358,local_18,local_14);
            }
            local_18 = local_14;
            if (*(int *)(param_1 + 0x118) < 0x3dcccccd) {
              _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
              _DAT_01d71de4 = 0x2f1;
              FUN_004e4330("Reference volume distance %g is too small in %s line %d!",(double)*(float *)(param_1 + 0x118),
                           local_358,local_14);
            }
          }
          else {
            iVar5 = FUN_005a5b9c();
            if (iVar5 != 1) {
              iVar5 = FUN_005a5b9c();
              if (iVar5 == 1) {
                if (local_1c == 0) {
                  _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
                  _DAT_01d71de4 = 0x2fb;
                  FUN_004e4330();
                }
                if (local_18 != 0) {
                  _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
                  _DAT_01d71de4 = 0x2fc;
                  FUN_004e4330("Minimum distance specified in %s on line %d, then again on line %d",local_358,local_18,local_14);
                }
                local_18 = local_14;
                if ((int)local_488 < 0x3a83126f) {
                  _DAT_01d71de4 = 0x2fe;
                  _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
                  FUN_004e4330("maxVol %g is too small in %s line %d!",(double)local_488,local_358,
                               local_14);
                }
                *(float *)(param_1 + 0x118) = *(float *)(param_1 + 0x114) / local_488;
              }
              else {
                iVar5 = FUN_005a5b9c();
                if (iVar5 == 1) {
                  if (-1 < *(int *)(param_1 + 0x110)) {
                    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
                    _DAT_01d71de4 = 0x305;
                    FUN_004e4330("Length for %s already known, then specified again in %s line %d",param_1,local_358,local_14);
                  }
                  if (local_2c < 1) {
                    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
                    _DAT_01d71de4 = 0x306;
                    FUN_004e4330("Invalid length %d in %s line %d",local_2c,local_358,local_14);
                  }
                  *(int *)(param_1 + 0x110) = local_2c;
                }
                else {
                  iVar5 = FUN_005a3260(local_484,&DAT_005d2858);
                  if (iVar5 == 0) {
                    *(uint *)(param_1 + 0x124) = 1;
                    *(uint *)(param_1 + 0x13c) = 0;
                    *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x110);
                  }
                  else {
                    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
                    _DAT_01d71de4 = 0x313;
                    FUN_004e4330("Error parsing %s line %d: %s",local_358,local_14,local_484);
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
  FUN_00573a40(local_58,0);
  return;
}
