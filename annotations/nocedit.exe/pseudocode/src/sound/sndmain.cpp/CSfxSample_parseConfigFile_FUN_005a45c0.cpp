// Name: sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0
// Address: 005a45c0
// Address Range: [[005a45c0, 005a4c7c]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0(CSfxSample * this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(CSfxSample *this_ptr)

{
  float fVar1;
  double dVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  FILE *stream;
  int iVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  byte bVar11;
  uint local_480;
  uint uStack_47c;
  uint local_478;
  uint uStack_474;
  uint local_470;
  uint uStack_46c;
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
  FILE *local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar11 = 0;
  fVar4 = (float)1;
  fVar1 = 20.0f * fVar4;
  fVar5 = g_SoundReferenceVolumeDistance * fVar4;
  fVar4 = 10000.0f * fVar4;
  this_ptr->loop_marker_count = 1;
  (this_ptr->sample_info).reference_distance = fVar1;
  (this_ptr->sample_info).reference_volume_distance = fVar5;
  (this_ptr->sample_info).max_distance = fVar4;
  this_ptr->loop_length = (this_ptr->sample_info).sample_count;
  this_ptr->loop_markers[0] = -1;
  engine_dosio_c_splitPath_FUN_00481f20
            ((char *)this_ptr,(char *)0x0,(char *)0x0,local_238,(char *)0x0);
  engine_dosio_c_makePath_FUN_00481f50(local_338,(char *)0x0,(char *)0x0,local_238,"klp");
  iVar6 = engine_dosio_c_getFileSize_FUN_00481880("sound",local_338);
  if (0 < iVar6) {
    this_ptr->loop_marker_count = 1;
    iVar6 = (this_ptr->sample_info).sample_count;
    this_ptr->loop_markers[0] = 0;
    this_ptr->loop_length = iVar6;
  }
  engine_dosio_c_makePath_FUN_00481f50(local_138,(char *)0x0,(char *)0x0,local_238,"sfx");
  iVar6 = engine_dosio_c_getFileSize_FUN_00481880("sound",local_138);
  if ((iVar6 < 1) ||
     (local_24 = engine_dosio_c_getFile_FUN_00481a50("sound",local_138,"rb"),
     local_24 == (FILE *)0x0)) {
    return;
  }
  lVar7 = crt_stdio_c_ftell_FUN_00601560(local_24);
  local_28 = iVar6 + lVar7;
  local_30 = &(this_ptr->sample_info).max_distance;
  local_2c = &(this_ptr->sample_info).reference_volume_distance;
  local_1c = 0;
  local_20 = 0;
  local_34 = &(this_ptr->sample_info).reference_distance;
  local_18 = 0;
  while (stream = local_24, lVar7 = crt_stdio_c_ftell_FUN_00601560(local_24), lVar7 < local_28) {
    local_18 = local_18 + 1;
    pcVar8 = crt_stdio_c_fgets_FUN_005fefd0(local_464,300,stream);
    if (pcVar8 == (char *)0x0) break;
    pcVar9 = crt_string_c_strstr_FUN_005fedd0(local_464,"//");
    pcVar8 = local_464;
    if (pcVar9 != (char *)0x0) {
      *pcVar9 = '\0';
    }
    do {
      pcVar9 = pcVar8;
      if (*pcVar8 == '\0') goto joined_r0x005a47dc;
      if (*pcVar8 == '\0') break;
      pcVar9 = pcVar8 + 1;
      if (*pcVar9 == '\0') goto joined_r0x005a47dc;
      pcVar8 = pcVar8 + 2;
    } while (*pcVar9 != '\0');
    pcVar9 = (char *)0x0;
joined_r0x005a47dc:
    while ((local_464 < pcVar9 &&
           ((g_CharacterClassificationTable[(byte)(pcVar9[-1] + 1)] & 2U) != 0))) {
      pcVar9 = pcVar9 + -1;
    }
    *pcVar9 = '\0';
    while ((g_CharacterClassificationTable[(byte)(local_464[0] + 1)] & 2U) != 0) {
      uVar10 = 0xffffffff;
      pcVar8 = local_464;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + (uint)bVar11 * -2 + 1;
      } while (cVar3 != '\0');
      crt_string_c_memmove_FUN_005fe5e0(local_464,local_464 + 1,~uVar10 - 1);
    }
    if (local_464[0] != '\0') {
      iVar6 = crt_stdio_c_sscanf_FUN_0060013c(local_464,"refDist =%f",local_34);
      if (iVar6 == 1) {
        if (local_20 != 0) {
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 0x290;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Reference distance specified in %s on line %d, then again on line %d",local_138,local_20,local_18);
        }
        local_20 = local_18;
        fVar1 = (this_ptr->sample_info).reference_distance;
        dVar2 = (double)fVar1;
        if (fVar1 < (float)0.10000000000000001) {
          uStack_474 = (uint)((ulonglong)dVar2 >> 0x20);
          local_478 = SUB84 /* extract 2-byte value */(dVar2,0);
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 0x292;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Reference volume distance %g is too small in %s line %d!",local_478,uStack_474,local_138,local_18);
        }
        if (local_1c == 0) {
          (this_ptr->sample_info).reference_volume_distance =
               (this_ptr->sample_info).reference_distance / 4.0f;
        }
      }
      else {
        iVar6 = crt_stdio_c_sscanf_FUN_0060013c(local_464,"minDist =%f",local_2c);
        if (iVar6 == 1) {
          if (local_1c != 0) {
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 0x298;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Minimum distance specified in %s on line %d, then again on line %d",local_138,local_1c,local_18);
          }
          local_1c = local_18;
          fVar1 = (this_ptr->sample_info).reference_volume_distance;
          dVar2 = (double)fVar1;
          if (fVar1 < (float)0.10000000000000001) {
            uStack_46c = (uint)((ulonglong)dVar2 >> 0x20);
            local_470 = SUB84 /* extract 2-byte value */(dVar2,0);
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 0x29a;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Reference volume distance %g is too small in %s line %d!",local_470,uStack_46c,local_138,local_18);
          }
        }
        else {
          iVar6 = crt_stdio_c_sscanf_FUN_0060013c(local_464,"maxDist =%f",local_30);
          if (iVar6 != 1) {
            iVar6 = crt_stdio_c_sscanf_FUN_0060013c(local_464,"maxVol =%f",&local_468);
            if (iVar6 == 1) {
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
                uStack_47c = (uint)((ulonglong)(double)local_468 >> 0x20);
                local_480 = SUB84 /* extract 2-byte value */((double)local_468,0);
                g_CurrentLineNumber = 0x2a7;
                core_main_c_displayErrorAndQuit_FUN_00506f10
                          ("maxVol %g is too small in %s line %d!",local_480,uStack_47c,local_138,
                           local_18);
              }
              (this_ptr->sample_info).reference_volume_distance =
                   (this_ptr->sample_info).reference_distance / local_468;
            }
            else {
              iVar6 = crt_stdio_c_sscanf_FUN_0060013c(local_464,"length =%d",&local_38);
              if (iVar6 == 1) {
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
                iVar6 = crt_string_c_stricmp_FUN_005fe7f0(local_464,"loop");
                if (iVar6 == 0) {
                  this_ptr->loop_marker_count = 1;
                  iVar6 = (this_ptr->sample_info).sample_count;
                  this_ptr->loop_markers[0] = 0;
                  this_ptr->loop_length = iVar6;
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
