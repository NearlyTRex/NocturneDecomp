// Name: sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00521e10
// Address: 00521e10
// Address Range: [[00521e10, 0052247a]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00521e10(CSfxSample *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00521e10(CSfxSample *this_ptr)

{
  float fVar1;
  double dVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  _FILE *stream;
  int iVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  byte bVar11;
  uint local_488;
  uint uStack_484;
  uint local_480;
  uint uStack_47c;
  uint local_478;
  uint uStack_474;
  float local_470;
  char local_46c [300];
  char local_340 [260];
  char local_23c [260];
  char local_138 [256];
  int local_38;
  int local_34;
  float *local_30;
  float *local_2c;
  float *local_28;
  int local_24;
  _FILE *local_20;
  int local_1c;
  int local_18;
  
  bVar11 = 0;
  fVar4 = (float)_DAT_005bea88;
  fVar1 = 20.0f * fVar4;
  fVar5 = g_FLOAT_02dbd370 * fVar4;
  fVar4 = 10000.0f * fVar4;
  this_ptr->loop_marker_count = 0;
  (this_ptr->sample_info).reference_distance = fVar1;
  (this_ptr->sample_info).reference_volume_distance = fVar5;
  (this_ptr->sample_info).max_distance = fVar4;
  splitpath
            ((char *)this_ptr,(char *)0x0,(char *)0x0,local_138,(char *)0x0);
  makepath(local_23c,(char *)0x0,(char *)0x0,local_138,"klp");
  iVar6 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound",local_23c);
  if (0 < iVar6) {
    this_ptr->loop_marker_count = 1;
  }
  makepath(local_340,(char *)0x0,(char *)0x0,local_138,"sfx");
  iVar6 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound",local_340);
  if ((iVar6 < 1) ||
     (local_20 = engine_dosio_cpp_getFile_FUN_00456a60("sound",local_340,"rb"),
     local_20 == (_FILE *)0x0)) {
    return;
  }
  lVar7 = _ftell(local_20);
  local_24 = iVar6 + lVar7;
  local_2c = &(this_ptr->sample_info).max_distance;
  local_28 = &(this_ptr->sample_info).reference_volume_distance;
  local_18 = 0;
  local_1c = 0;
  local_30 = &(this_ptr->sample_info).reference_distance;
  local_38 = 0;
  while (stream = local_20, lVar7 = _ftell(local_20), lVar7 < local_24) {
    local_38 = local_38 + 1;
    pcVar8 = _fgets(local_46c,300,stream);
    if (pcVar8 == (char *)0x0) break;
    pcVar9 = strstr(local_46c,"//");
    pcVar8 = local_46c;
    if (pcVar9 != (char *)0x0) {
      *pcVar9 = '\0';
    }
    do {
      pcVar9 = pcVar8;
      if (*pcVar8 == '\0') goto joined_r0x00521ffd;
      if (*pcVar8 == '\0') break;
      pcVar9 = pcVar8 + 1;
      if (*pcVar9 == '\0') goto joined_r0x00521ffd;
      pcVar8 = pcVar8 + 2;
    } while (*pcVar9 != '\0');
    pcVar9 = (char *)0x0;
joined_r0x00521ffd:
    while ((local_46c < pcVar9 &&
           ((g_CharacterClassificationTable[(byte)(pcVar9[-1] + 1)] & 2) != 0))) {
      pcVar9 = pcVar9 + -1;
    }
    *pcVar9 = '\0';
    while ((g_CharacterClassificationTable[(byte)(local_46c[0] + 1)] & 2) != 0) {
      uVar10 = 0xffffffff;
      pcVar8 = local_46c;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + (uint)bVar11 * -2 + 1;
      } while (cVar3 != '\0');
      memmove(local_46c,local_46c + 1,~uVar10 - 1);
    }
    if (local_46c[0] != '\0') {
      iVar6 = sscanf(local_46c,"refDist =%f",local_30);
      if (iVar6 == 1) {
        if (local_1c != 0) {
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 658;
          core_main_c_displayErrorAndQuit_FUN_004c8440
                    ("Reference distance specified in %s on line %d, then again on line %d",local_340,local_1c,local_38);
        }
        local_1c = local_38;
        fVar1 = (this_ptr->sample_info).reference_distance;
        dVar2 = (double)fVar1;
        if (fVar1 < (float)0.10000000000000001) {
          uStack_484 = (uint)((ulonglong)dVar2 >> 0x20);
          local_488 = SUB84(__BITCAST_UINT64(dVar2),0);
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 660;
          core_main_c_displayErrorAndQuit_FUN_004c8440
                    ("Reference volume distance %g is too small in %s line %d!",local_488,uStack_484,local_340,local_38);
        }
        if (local_18 == 0) {
          (this_ptr->sample_info).reference_volume_distance =
               (this_ptr->sample_info).reference_distance / 4.0f;
        }
      }
      else {
        iVar6 = sscanf(local_46c,"minDist =%f",local_28);
        if (iVar6 == 1) {
          if (local_18 != 0) {
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 666;
            core_main_c_displayErrorAndQuit_FUN_004c8440
                      ("Minimum distance specified in %s on line %d, then again on line %d",local_340,local_18,local_38);
          }
          local_18 = local_38;
          fVar1 = (this_ptr->sample_info).reference_volume_distance;
          dVar2 = (double)fVar1;
          if (fVar1 < (float)0.10000000000000001) {
            uStack_47c = (uint)((ulonglong)dVar2 >> 0x20);
            local_480 = SUB84(__BITCAST_UINT64(dVar2),0);
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 668;
            core_main_c_displayErrorAndQuit_FUN_004c8440
                      ("Reference volume distance %g is too small in %s line %d!",local_480,uStack_47c,local_340,local_38);
          }
        }
        else {
          iVar6 = sscanf(local_46c,"maxDist =%f",local_2c);
          if (iVar6 != 1) {
            iVar6 = sscanf(local_46c,"maxVol =%f",&local_470);
            if (iVar6 == 1) {
              if (local_1c == 0) {
                g_CurrentFilename = "..\\sound\\sndmain.cpp";
                g_CurrentLineNumber = 678;
                core_main_c_displayErrorAndQuit_FUN_004c8440
                          ("%s specified maxVol on line %d without first specifying reference distance",local_340,local_38);
              }
              if (local_18 != 0) {
                g_CurrentFilename = "..\\sound\\sndmain.cpp";
                g_CurrentLineNumber = 679;
                core_main_c_displayErrorAndQuit_FUN_004c8440
                          ("Minimum distance specified in %s on line %d, then again on line %d",local_340,local_18,local_38);
              }
              local_18 = local_38;
              if (local_470 < (float)0.001) {
                g_CurrentFilename = "..\\sound\\sndmain.cpp";
                uStack_474 = (uint)((ulonglong)(double)local_470 >> 0x20);
                local_478 = SUB84(__BITCAST_UINT64((double)local_470),0);
                g_CurrentLineNumber = 681;
                core_main_c_displayErrorAndQuit_FUN_004c8440
                          ("maxVol %g is too small in %s line %d!",local_478,uStack_474,local_340,
                           local_38);
              }
              (this_ptr->sample_info).reference_volume_distance =
                   (this_ptr->sample_info).reference_distance / local_470;
            }
            else {
              iVar6 = sscanf(local_46c,"length =%d",&local_34);
              if (iVar6 == 1) {
                if (-1 < (this_ptr->sample_info).sample_count) {
                  g_CurrentFilename = "..\\sound\\sndmain.cpp";
                  g_CurrentLineNumber = 688;
                  core_main_c_displayErrorAndQuit_FUN_004c8440
                            ("Length for %s already known, then specified again in %s line %d",this_ptr,local_340,local_38);
                }
                if (local_34 < 1) {
                  g_CurrentLineNumber = 689;
                  g_CurrentFilename = "..\\sound\\sndmain.cpp";
                  core_main_c_displayErrorAndQuit_FUN_004c8440
                            ("Invalid length %d in %s line %d",local_34,local_340,local_38);
                }
                (this_ptr->sample_info).sample_count = local_34;
              }
              else {
                iVar6 = _stricmp(local_46c,"loop");
                if (iVar6 == 0) {
                  this_ptr->loop_marker_count = 1;
                }
                else {
                  g_CurrentFilename = "..\\sound\\sndmain.cpp";
                  g_CurrentLineNumber = 702;
                  core_main_c_displayErrorAndQuit_FUN_004c8440
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
