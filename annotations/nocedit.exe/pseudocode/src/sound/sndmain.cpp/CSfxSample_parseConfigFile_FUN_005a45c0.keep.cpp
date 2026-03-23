// Name: sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0
// Address: 005a45c0
// MANUAL RECONSTRUCTION
// Address Range: [[005a45c0, 005a4c7c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(CSfxSample *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(CSfxSample *this_ptr)

{
  float fVar2;
  double dVar3;
  float fVar6;
  int iVar6;
  int iVar7;
  long lVar7;
  long lVar8;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar10;
  char *pcVar11;
  byte bVar11;
  float local_468;
  char local_464 [300];
  char local_338 [256];
  char local_238 [256];
  char local_138 [256];
  int local_38;
  float *local_34;
  float *local_30;
  float *local_2c;
  int local_28;
  _FILE *local_24;
  int local_20;
  int local_1c;
  int local_18;
  _FILE *stream;
  char cVar3;
  float fVar5;
  double dVar2;
  float fVar1;
  float fVar4;

  bVar11 = 0;
  fVar4 = (float)g_Cached3DDistanceFactorInverse;
  fVar2 = 20.0f * fVar4;
  fVar5 = g_SoundReferenceVolumeDistance * fVar4;
  fVar6 = 10000.0f * fVar4;
  this_ptr->loop_marker_count = 1;
  (this_ptr->sample_info).reference_distance = fVar2;
  (this_ptr->sample_info).reference_volume_distance = fVar5;
  (this_ptr->sample_info).max_distance = fVar6;
  this_ptr->loop_endpoints[0] = (this_ptr->sample_info).sample_count;
  this_ptr->loop_destinations[0] = -1;
  engine_dosio_c_splitPath_FUN_00481f20
            ((char *)this_ptr,(char *)0x0,(char *)0x0,local_238,(char *)0x0);
  engine_dosio_c_makePath_FUN_00481f50(local_338,(char *)0x0,(char *)0x0,local_238,"klp");
  iVar6 = engine_dosio_c_getFileSize_FUN_00481880("sound",local_338);
  if (0 < iVar6) {
    this_ptr->loop_marker_count = 1;
    iVar7 = (this_ptr->sample_info).sample_count;
    this_ptr->loop_destinations[0] = 0;
    this_ptr->loop_endpoints[0] = iVar7;
  }
  engine_dosio_c_makePath_FUN_00481f50(local_138,(char *)0x0,(char *)0x0,local_238,"sfx");
  iVar7 = engine_dosio_c_getFileSize_FUN_00481880("sound",local_138);
  if ((iVar7 < 1) ||
     (local_24 = engine_dosio_c_getFile_FUN_00481a50("sound",local_138,"rb"),
     local_24 == (_FILE *)0x0)) {
    return;
  }
  lVar7 = _ftell(local_24);
  local_28 = iVar7 + lVar7;
  local_30 = &(this_ptr->sample_info).max_distance;
  local_2c = &(this_ptr->sample_info).reference_volume_distance;
  local_1c = 0;
  local_20 = 0;
  local_34 = &(this_ptr->sample_info).reference_distance;
  local_18 = 0;
  while (stream = local_24, lVar8 = _ftell(local_24), lVar8 < local_28) {
    local_18 = local_18 + 1;
    pcVar8 = _fgets(local_464,300,stream);
    if (pcVar8 == (char *)0x0) break;
    pcVar9 = strstr(local_464,"//");
    pcVar10 = local_464;
    if (pcVar9 != (char *)0x0) {
      *pcVar9 = '\0';
    }
    do {
      pcVar11 = pcVar10;
      if (*pcVar10 == '\0') goto joined_r0x005a47dc;
      if (*pcVar10 == '\0') break;
      pcVar11 = pcVar10 + 1;
      if (*pcVar11 == '\0') goto joined_r0x005a47dc;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar11 != '\0');
    pcVar11 = (char *)0x0;
joined_r0x005a47dc:
    while ((local_464 < pcVar11 &&
           ((g_CharacterClassificationTable[(byte)(pcVar11[-1] + 1)] & 2) != 0))) {
      pcVar11 = pcVar11 + -1;
    }
    *pcVar11 = '\0';
    while ((g_CharacterClassificationTable[(byte)(local_464[0] + 1)] & 2) != 0) {
      uVar10 = 0xffffffff;
      pcVar10 = local_464;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar3 = *pcVar10;
        pcVar10 = pcVar10 + (uint)bVar11 * -2 + 1;
      } while (cVar3 != '\0');
      memmove(local_464,local_464 + 1,~uVar10 - 1);
    }
    if (local_464[0] != '\0') {
      iVar7 = sscanf(local_464,"refDist =%f",local_34);
      if (iVar7 == 1) {
        if (local_20 != 0) {
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 0x290;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Reference distance specified in %s on line %d, then again on line %d",local_138,local_20,local_18);
        }
        local_20 = local_18;
        fVar1 = (this_ptr->sample_info).reference_distance;
        if (fVar1 < (float)0.10000000000000001) {
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 0x292;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Reference volume distance %g is too small in %s line %d!",(double)fVar1,local_138,local_18);
        }
        if (local_1c == 0) {
          (this_ptr->sample_info).reference_volume_distance =
               (this_ptr->sample_info).reference_distance / 4.0f;
        }
      }
      else {
        iVar7 = sscanf(local_464,"minDist =%f",local_2c);
        if (iVar7 == 1) {
          if (local_1c != 0) {
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 0x298;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Minimum distance specified in %s on line %d, then again on line %d",local_138,local_1c,local_18);
          }
          local_1c = local_18;
          fVar2 = (this_ptr->sample_info).reference_volume_distance;
          dVar3 = (double)fVar2;
          if (fVar2 < (float)0.10000000000000001) {
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 0x29a;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Reference volume distance %g is too small in %s line %d!",(double)fVar2,local_138,local_18);
          }
        }
        else {
          iVar7 = sscanf(local_464,"maxDist =%f",local_30);
          if (iVar7 != 1) {
            iVar7 = sscanf(local_464,"maxVol =%f",&local_468);
            if (iVar7 == 1) {
              if (local_20 == 0) {
                g_CurrentFilename = "..\\sound\\sndmain.cpp";
                g_CurrentLineNumber = 0x2a4;
                core_main_c_displayErrorAndQuit_FUN_00506f10
                          ("%s specified maxVol on line %d without first specifying reference distance",local_138,local_18);
              }
              if (local_1c != 0) {
                g_CurrentFilename = "..\\sound\\sndmain.cpp";
                g_CurrentLineNumber = 0x2a5;
                core_main_c_displayErrorAndQuit_FUN_00506f10
                          ("Minimum distance specified in %s on line %d, then again on line %d",local_138,local_1c,local_18);
              }
              local_1c = local_18;
              if (local_468 < (float)0.001) {
                g_CurrentFilename = "..\\sound\\sndmain.cpp";
                g_CurrentLineNumber = 0x2a7;
                core_main_c_displayErrorAndQuit_FUN_00506f10
                          ("maxVol %g is too small in %s line %d!",(double)local_468,local_138,
                           local_18);
              }
              (this_ptr->sample_info).reference_volume_distance =
                   (this_ptr->sample_info).reference_distance / local_468;
            }
            else {
              iVar7 = sscanf(local_464,"length =%d",&local_38);
              if (iVar7 == 1) {
                if (-1 < (this_ptr->sample_info).sample_count) {
                  g_CurrentFilename = "..\\sound\\sndmain.cpp";
                  g_CurrentLineNumber = 0x2ae;
                  core_main_c_displayErrorAndQuit_FUN_00506f10
                            ("Length for %s already known, then specified again in %s line %d",this_ptr,local_138,local_18);
                }
                if (local_38 < 1) {
                  g_CurrentLineNumber = 0x2af;
                  g_CurrentFilename = "..\\sound\\sndmain.cpp";
                  core_main_c_displayErrorAndQuit_FUN_00506f10
                            ("Invalid length %d in %s line %d",local_38,local_138,local_18);
                }
                (this_ptr->sample_info).sample_count = local_38;
              }
              else {
                iVar7 = _stricmp(local_464,"loop");
                if (iVar7 == 0) {
                  this_ptr->loop_marker_count = 1;
                  iVar7 = (this_ptr->sample_info).sample_count;
                  this_ptr->loop_destinations[0] = 0;
                  this_ptr->loop_endpoints[0] = iVar7;
                }
                else {
                  g_CurrentFilename = "..\\sound\\sndmain.cpp";
                  g_CurrentLineNumber = 700;
                  core_main_c_displayErrorAndQuit_FUN_00506f10
                            ("Error parsing %s line %d: %s",local_138,local_18,local_464);
                }
              }
            }
          }
        }
      }
    }
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_24,"..\\sound\\sndmain.cpp",0x2bf);
  return;
}
