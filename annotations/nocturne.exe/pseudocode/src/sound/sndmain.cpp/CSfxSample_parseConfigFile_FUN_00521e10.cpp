// Name: sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00521e10
// Address: 00521e10
// Address Range: [[00521e10, 0052247a]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00521e10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00521e10(int param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  byte *puVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  float local_470;
  char local_46c [300];
  byte local_340 [260];
  byte local_23c [260];
  byte local_138 [256];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar11 = 0;
  fVar3 = (float)_DAT_005bea88;
  fVar2 = 20.0f * fVar3;
  fVar4 = _DAT_02dbd370 * fVar3;
  fVar3 = 10000.0f * fVar3;
  *(uint *)(param_1 + 0x124) = 0;
  *(float *)(param_1 + 0x114) = fVar2;
  *(float *)(param_1 + 0x118) = fVar4;
  *(float *)(param_1 + 0x11c) = fVar3;
  splitpath(param_1,0,0,local_138,0);
  makepath(local_23c,0,0,local_138,"klp");
  iVar5 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound",local_23c);
  if (0 < iVar5) {
    *(uint *)(param_1 + 0x124) = 1;
  }
  makepath(local_340,0,0,local_138,"sfx");
  iVar5 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound",local_340);
  if ((iVar5 < 1) ||
     (local_20 = engine_dosio_cpp_getFile_FUN_00456a60("sound",local_340,"rb"),
     local_20 == 0)) {
    return;
  }
  local_24 = _ftell(local_20);
  local_24 = iVar5 + local_24;
  local_2c = param_1 + 0x11c;
  local_28 = param_1 + 0x118;
  local_18 = 0;
  local_1c = 0;
  local_30 = param_1 + 0x114;
  local_38 = 0;
  while (iVar5 = local_20, iVar6 = _ftell(local_20), iVar6 < local_24) {
    local_38 = local_38 + 1;
    iVar5 = _fgets(local_46c,300,iVar5);
    if (iVar5 == 0) break;
    puVar7 = (byte *)strstr(local_46c,"//");
    pcVar9 = local_46c;
    if (puVar7 != (byte *)0x0) {
      *puVar7 = 0;
    }
    do {
      pcVar10 = pcVar9;
      if (*pcVar9 == '\0') goto joined_r0x00521ffd;
      if (*pcVar9 == '\0') break;
      pcVar10 = pcVar9 + 1;
      if (*pcVar10 == '\0') goto joined_r0x00521ffd;
      pcVar9 = pcVar9 + 2;
    } while (*pcVar10 != '\0');
    pcVar10 = (char *)0x0;
joined_r0x00521ffd:
    while ((local_46c < pcVar10 && (((&DAT_005c168c)[(byte)(pcVar10[-1] + 1)] & 2) != 0))) {
      pcVar10 = pcVar10 + -1;
    }
    *pcVar10 = '\0';
    while (((&DAT_005c168c)[(byte)(local_46c[0] + 1)] & 2) != 0) {
      uVar8 = 0xffffffff;
      pcVar9 = local_46c;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
      } while (cVar1 != '\0');
      memmove(local_46c,local_46c + 1,~uVar8 - 1);
    }
    if (local_46c[0] != '\0') {
      iVar5 = sscanf(local_46c,"refDist =%f",local_30);
      if (iVar5 == 1) {
        if (local_1c != 0) {
          PTR_01cc4800 = "..\\sound\\sndmain.cpp";
          INT_01cc4804 = 0x292;
          core_main_c_FUN_004c8440("Reference distance specified in %s on line %d, then again on line %d",local_340,local_1c,local_38);
        }
        local_1c = local_38;
        if (*(float *)(param_1 + 0x114) < (float)0.10000000000000001) {
          PTR_01cc4800 = "..\\sound\\sndmain.cpp";
          INT_01cc4804 = 0x294;
          core_main_c_FUN_004c8440
                    ("Reference volume distance %g is too small in %s line %d!",(double)*(float *)(param_1 + 0x114),
                     local_340,local_38);
        }
        if (local_18 == 0) {
          *(float *)(param_1 + 0x118) = *(float *)(param_1 + 0x114) / 4.0f;
        }
      }
      else {
        iVar5 = sscanf(local_46c,"minDist =%f",local_28);
        if (iVar5 == 1) {
          if (local_18 != 0) {
            PTR_01cc4800 = "..\\sound\\sndmain.cpp";
            INT_01cc4804 = 0x29a;
            core_main_c_FUN_004c8440
                      ("Minimum distance specified in %s on line %d, then again on line %d",local_340,local_18,local_38);
          }
          local_18 = local_38;
          if (*(float *)(param_1 + 0x118) < (float)0.10000000000000001) {
            PTR_01cc4800 = "..\\sound\\sndmain.cpp";
            INT_01cc4804 = 0x29c;
            core_main_c_FUN_004c8440
                      ("Reference volume distance %g is too small in %s line %d!",(double)*(float *)(param_1 + 0x118),
                       local_340,local_38);
          }
        }
        else {
          iVar5 = sscanf(local_46c,"maxDist =%f",local_2c);
          if (iVar5 != 1) {
            iVar5 = sscanf(local_46c,"maxVol =%f",&local_470);
            if (iVar5 == 1) {
              if (local_1c == 0) {
                PTR_01cc4800 = "..\\sound\\sndmain.cpp";
                INT_01cc4804 = 0x2a6;
                core_main_c_FUN_004c8440("%s specified maxVol on line %d without first specifying reference distance",local_340,local_38);
              }
              if (local_18 != 0) {
                PTR_01cc4800 = "..\\sound\\sndmain.cpp";
                INT_01cc4804 = 0x2a7;
                core_main_c_FUN_004c8440
                          ("Minimum distance specified in %s on line %d, then again on line %d",local_340,local_18,local_38);
              }
              local_18 = local_38;
              if (local_470 < (float)0.001) {
                PTR_01cc4800 = "..\\sound\\sndmain.cpp";
                INT_01cc4804 = 0x2a9;
                core_main_c_FUN_004c8440
                          ("maxVol %g is too small in %s line %d!",(double)local_470,local_340,local_38)
                ;
              }
              *(float *)(param_1 + 0x118) = *(float *)(param_1 + 0x114) / local_470;
            }
            else {
              iVar5 = sscanf(local_46c,"length =%d",&local_34);
              if (iVar5 == 1) {
                if (-1 < *(int *)(param_1 + 0x110)) {
                  PTR_01cc4800 = "..\\sound\\sndmain.cpp";
                  INT_01cc4804 = 0x2b0;
                  core_main_c_FUN_004c8440
                            ("Length for %s already known, then specified again in %s line %d",param_1,local_340,local_38);
                }
                if (local_34 < 1) {
                  INT_01cc4804 = 0x2b1;
                  PTR_01cc4800 = "..\\sound\\sndmain.cpp";
                  core_main_c_FUN_004c8440
                            ("Invalid length %d in %s line %d",local_34,local_340,local_38);
                }
                *(int *)(param_1 + 0x110) = local_34;
              }
              else {
                iVar5 = _stricmp(local_46c,"loop");
                if (iVar5 == 0) {
                  *(uint *)(param_1 + 0x124) = 1;
                }
                else {
                  PTR_01cc4800 = "..\\sound\\sndmain.cpp";
                  INT_01cc4804 = 0x2be;
                  core_main_c_FUN_004c8440
                            ("Error parsing %s line %d: %s",local_340,local_38,local_46c);
                }
              }
            }
          }
        }
      }
    }
  }
  _fclose(local_20);
  return;
}
