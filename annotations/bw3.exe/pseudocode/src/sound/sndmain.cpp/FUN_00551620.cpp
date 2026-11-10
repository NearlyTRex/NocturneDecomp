// Name: sound_sndmain.cpp_FUN_00551620
// Address: 00551620
// Address Range: [[00551620, 00551cda]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00551620(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_00551620(char *param_1)

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
  int local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar10 = 0;
  fVar3 = _DAT_005e4854 * _DAT_00604244;
  fVar4 = _DAT_02ce7210 * _DAT_00604244;
  fVar5 = _DAT_005e4858 * _DAT_00604244;
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
  engine_dosio_cpp_splitPath_FUN_00465e50(param_1,(char *)0x0,(char *)0x0,local_158,(char *)0x0);
  engine_dosio_cpp_makePath_FUN_00465e80(local_258,(char *)0x0,(char *)0x0,local_158,&DAT_005d253f);
  iVar6 = engine_dosio_cpp_getFileSize_FUN_004657f0("sound",local_258);
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
  engine_dosio_cpp_makePath_FUN_00465e80(local_358,(char *)0x0,(char *)0x0,local_158,&DAT_005d2549);
  unkafter_turret_cpp_CInStreamFile_ctor_FUN_005738c0(&local_58);
  iVar6 = support_trstream_cpp_FUN_00573fc0(&local_58,"sound",local_358,1);
  if (iVar6 != 0) {
    local_20 = param_1 + 0x11c;
    local_28 = param_1 + 0x118;
    local_18 = 0;
    local_1c = 0;
    local_24 = param_1 + 0x114;
    local_14 = 0;
    while (iVar6 = unkafter_turret_cpp_FUN_00573790(), -1 < iVar6) {
      local_14 = local_14 + 1;
      pcVar8 = strstr(local_484,&DAT_005d253c);
      pcVar7 = local_484;
      if (pcVar8 != (char *)0x0) {
        *pcVar8 = '\0';
      }
      do {
        pcVar8 = pcVar7;
        if (*pcVar7 == '\0') goto joined_r0x00551849;
        if (*pcVar7 == '\0') break;
        pcVar8 = pcVar7 + 1;
        if (*pcVar8 == '\0') goto joined_r0x00551849;
        pcVar7 = pcVar7 + 2;
      } while (*pcVar8 != '\0');
      pcVar8 = (char *)0x0;
joined_r0x00551849:
      while ((local_484 < pcVar8 && (((&DAT_006074b8)[(byte)(pcVar8[-1] + 1)] & 2) != 0))) {
        pcVar8 = pcVar8 + -1;
      }
      *pcVar8 = '\0';
      while (((&DAT_006074b8)[(byte)(local_484[0] + 1)] & 2) != 0) {
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
          if (local_1c != 0) {
            _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
            _DAT_01d71de4 = 0x2e7;
            core_main_c_FUN_004e4330
                      ("Reference distance specified in %s on line %d, then again on line %d",local_358,local_1c,local_14);
          }
          local_1c = local_14;
          if (*(int *)(param_1 + 0x114) < 0x3dcccccd) {
            _DAT_01d71de4 = 0x2e9;
            _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
            core_main_c_FUN_004e4330
                      ("Reference volume distance %g is too small in %s line %d!",(double)*(float *)(param_1 + 0x114),
                       local_358,local_14);
          }
          if (local_18 == 0) {
            *(float *)(param_1 + 0x118) = *(float *)(param_1 + 0x114) / _DAT_005e4850;
          }
        }
        else {
          iVar6 = sscanf(local_484,"minDist =%f");
          if (iVar6 == 1) {
            if (local_18 != 0) {
              _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
              _DAT_01d71de4 = 0x2ef;
              core_main_c_FUN_004e4330
                        ("Minimum distance specified in %s on line %d, then again on line %d",local_358,local_18,local_14);
            }
            local_18 = local_14;
            if (*(int *)(param_1 + 0x118) < 0x3dcccccd) {
              _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
              _DAT_01d71de4 = 0x2f1;
              core_main_c_FUN_004e4330
                        ("Reference volume distance %g is too small in %s line %d!",(double)*(float *)(param_1 + 0x118),
                         local_358,local_14);
            }
          }
          else {
            iVar6 = sscanf(local_484,"maxDist =%f");
            if (iVar6 != 1) {
              iVar6 = sscanf(local_484,"maxVol =%f");
              if (iVar6 == 1) {
                if (local_1c == 0) {
                  _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
                  _DAT_01d71de4 = 0x2fb;
                  core_main_c_FUN_004e4330();
                }
                if (local_18 != 0) {
                  _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
                  _DAT_01d71de4 = 0x2fc;
                  core_main_c_FUN_004e4330
                            ("Minimum distance specified in %s on line %d, then again on line %d",local_358,local_18,local_14);
                }
                local_18 = local_14;
                if ((int)local_488 < 0x3a83126f) {
                  _DAT_01d71de4 = 0x2fe;
                  _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
                  core_main_c_FUN_004e4330
                            ("maxVol %g is too small in %s line %d!",(double)local_488,local_358,
                             local_14);
                }
                *(float *)(param_1 + 0x118) = *(float *)(param_1 + 0x114) / local_488;
              }
              else {
                iVar6 = sscanf(local_484,"length =%d");
                if (iVar6 == 1) {
                  if (-1 < *(int *)(param_1 + 0x110)) {
                    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
                    _DAT_01d71de4 = 0x305;
                    core_main_c_FUN_004e4330
                              ("Length for %s already known, then specified again in %s line %d",param_1,local_358,local_14);
                  }
                  if (local_2c < 1) {
                    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
                    _DAT_01d71de4 = 0x306;
                    core_main_c_FUN_004e4330
                              ("Invalid length %d in %s line %d",local_2c,local_358,local_14);
                  }
                  *(int *)(param_1 + 0x110) = local_2c;
                }
                else {
                  iVar6 = _stricmp(local_484,&DAT_005d2858);
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
                    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
                    _DAT_01d71de4 = 0x313;
                    core_main_c_FUN_004e4330
                              ("Error parsing %s line %d: %s",local_358,local_14,local_484);
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
  unkafter_turret_cpp_CInStreamFile_dtor_FUN_00573a40(&local_58,0);
  return;
}
