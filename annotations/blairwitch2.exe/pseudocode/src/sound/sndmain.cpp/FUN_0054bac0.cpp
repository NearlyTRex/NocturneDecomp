// Name: sound_sndmain.cpp_FUN_0054bac0
// Address: 0054bac0
// Address Range: [[0054bac0, 0054c178]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_0054bac0(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_0054bac0(char *param_1)

{
  char cVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  byte bVar10;
  float local_488;
  char local_484 [300];
  char local_358 [256];
  char local_258 [256];
  char local_158 [256];
  CInStreamFile local_58;
  int local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar10 = 0;
  fVar3 = _DAT_005fbc28 * _DAT_0061bcb8;
  fVar4 = _DAT_0263cf10 * _DAT_0061bcb8;
  fVar5 = _DAT_005fbc2c * _DAT_0061bcb8;
  param_1[0x124] = '\x01';
  param_1[0x125] = '\0';
  param_1[0x126] = '\0';
  param_1[0x127] = '\0';
  *(float *)(param_1 + 0x114) = fVar3;
  *(float *)(param_1 + 0x118) = fVar4;
  *(float *)(param_1 + 0x11c) = fVar5;
  *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x110);
  param_1[0x13c] = -1;
  param_1[0x13d] = -1;
  param_1[0x13e] = -1;
  param_1[0x13f] = -1;
  engine_dosio_cpp_splitPath_FUN_00461070(param_1,(char *)0x0,(char *)0x0,local_158,(char *)0x0);
  engine_dosio_cpp_makePath_FUN_004610a0(local_258,(char *)0x0,(char *)0x0,local_158,&DAT_005e7a5b);
  iVar6 = engine_dosio_cpp_getFileSize_FUN_00460aa0("sound",local_258);
  if (0 < iVar6) {
    param_1[0x124] = '\x01';
    param_1[0x125] = '\0';
    param_1[0x126] = '\0';
    param_1[0x127] = '\0';
    uVar2 = *(uint *)(param_1 + 0x110);
    param_1[0x13c] = '\0';
    param_1[0x13d] = '\0';
    param_1[0x13e] = '\0';
    param_1[0x13f] = '\0';
    *(uint *)(param_1 + 0x128) = uVar2;
  }
  engine_dosio_cpp_makePath_FUN_004610a0(local_358,(char *)0x0,(char *)0x0,local_158,&DAT_005e7a65);
  unkclass_instream_cpp_CInStreamFile_ctor_FUN_0057cd50(&local_58);
  iVar6 = support_trstream_cpp_FUN_0057d390();
  if (iVar6 != 0) {
    local_24 = param_1 + 0x11c;
    local_2c = param_1 + 0x118;
    local_1c = 0;
    local_20 = 0;
    local_28 = param_1 + 0x114;
    local_18 = 0;
    while (iVar6 = unkaddr_0057b9a0_cpp_FUN_0057cc20(), -1 < iVar6) {
      local_18 = local_18 + 1;
      pcVar8 = strstr(local_484,&DAT_005e7a58);
      pcVar7 = local_484;
      if (pcVar8 != (char *)0x0) {
        *pcVar8 = '\0';
      }
      do {
        pcVar8 = pcVar7;
        if (*pcVar7 == '\0') goto joined_r0x0054bce7;
        if (*pcVar7 == '\0') break;
        pcVar8 = pcVar7 + 1;
        if (*pcVar8 == '\0') goto joined_r0x0054bce7;
        pcVar7 = pcVar7 + 2;
      } while (*pcVar8 != '\0');
      pcVar8 = (char *)0x0;
joined_r0x0054bce7:
      while ((local_484 < pcVar8 && (((&DAT_0061ed94)[(byte)(pcVar8[-1] + 1)] & 2) != 0))) {
        pcVar8 = pcVar8 + -1;
      }
      *pcVar8 = '\0';
      while (((&DAT_0061ed94)[(byte)(local_484[0] + 1)] & 2) != 0) {
        uVar9 = 0xffffffff;
        pcVar7 = local_484;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + (uint)bVar10 * -2 + 1;
        } while (cVar1 != '\0');
        memmove(local_484,local_484 + 1,~uVar9 - 1);
      }
      if (local_484[0] != '\0') {
        iVar6 = sscanf(local_484,"refDist =%f");
        if (iVar6 == 1) {
          if (local_20 != 0) {
            _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
            _DAT_01d046a4 = 0x2e5;
            core_main_c_FUN_004e4500
                      ("Reference distance specified in %s on line %d, then again on line %d",local_358,local_20,local_18);
          }
          local_20 = local_18;
          if (*(int *)(param_1 + 0x114) < 0x3dcccccd) {
            _DAT_01d046a4 = 0x2e7;
            _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
            core_main_c_FUN_004e4500
                      ("Reference volume distance %g is too small in %s line %d!",(double)*(float *)(param_1 + 0x114),
                       local_358,local_18);
          }
          if (local_1c == 0) {
            *(float *)(param_1 + 0x118) = *(float *)(param_1 + 0x114) / _DAT_005fbc24;
          }
        }
        else {
          iVar6 = sscanf(local_484,"minDist =%f");
          if (iVar6 == 1) {
            if (local_1c != 0) {
              _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
              _DAT_01d046a4 = 0x2ed;
              core_main_c_FUN_004e4500
                        ("Minimum distance specified in %s on line %d, then again on line %d",local_358,local_1c,local_18);
            }
            local_1c = local_18;
            if (*(int *)(param_1 + 0x118) < 0x3dcccccd) {
              _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
              _DAT_01d046a4 = 0x2ef;
              core_main_c_FUN_004e4500
                        ("Reference volume distance %g is too small in %s line %d!",(double)*(float *)(param_1 + 0x118),
                         local_358,local_18);
            }
          }
          else {
            iVar6 = sscanf(local_484,"maxDist =%f");
            if (iVar6 != 1) {
              iVar6 = sscanf(local_484,"maxVol =%f");
              if (iVar6 == 1) {
                if (local_20 == 0) {
                  _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
                  _DAT_01d046a4 = 0x2f9;
                  core_main_c_FUN_004e4500();
                }
                if (local_1c != 0) {
                  _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
                  _DAT_01d046a4 = 0x2fa;
                  core_main_c_FUN_004e4500
                            ("Minimum distance specified in %s on line %d, then again on line %d",local_358,local_1c,local_18);
                }
                local_1c = local_18;
                if ((int)local_488 < 0x3a83126f) {
                  _DAT_01d046a4 = 0x2fc;
                  _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
                  core_main_c_FUN_004e4500
                            ("maxVol %g is too small in %s line %d!",(double)local_488,local_358,
                             local_18);
                }
                *(float *)(param_1 + 0x118) = *(float *)(param_1 + 0x114) / local_488;
              }
              else {
                iVar6 = sscanf(local_484,"length =%d");
                if (iVar6 == 1) {
                  if (-1 < *(int *)(param_1 + 0x110)) {
                    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
                    _DAT_01d046a4 = 0x303;
                    core_main_c_FUN_004e4500
                              ("Length for %s already known, then specified again in %s line %d",param_1,local_358,local_18);
                  }
                  if (local_30 < 1) {
                    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
                    _DAT_01d046a4 = 0x304;
                    core_main_c_FUN_004e4500
                              ("Invalid length %d in %s line %d",local_30,local_358,local_18);
                  }
                  *(int *)(param_1 + 0x110) = local_30;
                }
                else {
                  iVar6 = _stricmp(local_484,&DAT_005e7d74);
                  if (iVar6 == 0) {
                    param_1[0x124] = '\x01';
                    param_1[0x125] = '\0';
                    param_1[0x126] = '\0';
                    param_1[0x127] = '\0';
                    uVar2 = *(uint *)(param_1 + 0x110);
                    param_1[0x13c] = '\0';
                    param_1[0x13d] = '\0';
                    param_1[0x13e] = '\0';
                    param_1[0x13f] = '\0';
                    *(uint *)(param_1 + 0x128) = uVar2;
                  }
                  else {
                    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
                    _DAT_01d046a4 = 0x311;
                    core_main_c_FUN_004e4500
                              ("Error parsing %s line %d: %s",local_358,local_18,local_484);
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar6 = 0;
    pcVar7 = param_1;
    if (0 < *(int *)(param_1 + 0x124)) {
      do {
        if (*(int *)(pcVar7 + 0x128) < 0) {
          *(uint *)(pcVar7 + 0x128) = *(uint *)(param_1 + 0x110);
        }
        iVar6 = iVar6 + 1;
        pcVar7 = pcVar7 + 4;
      } while (iVar6 < *(int *)(param_1 + 0x124));
    }
  }
  unkclass_instream_cpp_CInStreamFile_dtor_FUN_0057cec0(&local_58,0);
  return;
}
