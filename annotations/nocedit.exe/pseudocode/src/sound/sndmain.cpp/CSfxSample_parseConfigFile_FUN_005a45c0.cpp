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
  BADSPACEBASE *in_ESP;
  byte bVar11;
  uint uStack_474;
  uint local_470;
  uint uStack_46c;
  uint local_468;
  float local_464;
  char acStack_460 [4];
  char acStack_45c [4];
  char acStack_458 [268];
  char acStack_34c [4];
  char acStack_348 [252];
  char acStack_24c [8];
  char acStack_244 [12];
  char local_238 [244];
  char acStack_144 [4];
  char acStack_140 [4];
  char acStack_13c [8];
  byte auStack_134 [256];
  int local_34;
  float *local_30;
  float *local_2c;
  float *local_28;
  FILE *local_24;
  FILE *local_20;
  FILE *local_1c;
  FILE *local_18;
  FILE *pFStack_14;
  
  bVar11 = 0;
  fVar4 = (float)1;
  fVar1 = 20f * fVar4;
  fVar5 = g_SoundReferenceVolumeDistance * fVar4;
  fVar4 = 10000f * fVar4;
  this_ptr->loop_marker_count = 1;
  (this_ptr->sample_info).reference_distance = fVar1;
  (this_ptr->sample_info).reference_volume_distance = fVar5;
  (this_ptr->sample_info).max_distance = fVar4;
  this_ptr->loop_length = (this_ptr->sample_info).sample_count;
  this_ptr->loop_markers[0] = -1;
  engine_dosio_c_splitPath_FUN_00481f20
            ((char *)this_ptr,(char *)0x0,(char *)0x0,local_238,(char *)0x0);
  engine_dosio_c_makePath_FUN_00481f50
            (acStack_34c,(char *)0x0,(char *)0x0,acStack_24c,"klp");
  iVar6 = engine_dosio_c_getFileSize_FUN_00481880("sound",acStack_348);
  if (0 < iVar6) {
    this_ptr->loop_marker_count = 1;
    iVar6 = (this_ptr->sample_info).sample_count;
    this_ptr->loop_markers[0] = 0;
    this_ptr->loop_length = iVar6;
  }
  engine_dosio_c_makePath_FUN_00481f50
            (acStack_144,(char *)0x0,(char *)0x0,acStack_244,"sfx");
  iVar6 = engine_dosio_c_getFileSize_FUN_00481880("sound",acStack_140);
  if ((iVar6 < 1) ||
     (local_24 = engine_dosio_c_getFile_FUN_00481a50("sound",acStack_13c,"rb"),
     local_24 == (FILE *)0x0)) {
    return;
  }
  lVar7 = crt_stdio_c_ftell_FUN_00601560(local_24);
  local_24 = (FILE *)(iVar6 + lVar7);
  local_2c = &(this_ptr->sample_info).max_distance;
  local_28 = &(this_ptr->sample_info).reference_volume_distance;
  local_18 = (FILE *)0x0;
  local_1c = (FILE *)0x0;
  local_30 = &(this_ptr->sample_info).reference_distance;
  pFStack_14 = (FILE *)0x0;
  do {
    stream = local_20;
    lVar7 = crt_stdio_c_ftell_FUN_00601560(local_20);
    if (((int)local_20 <= lVar7) ||
       (pcVar8 = crt_stdio_c_fgets_FUN_005fefd0(acStack_45c,300,stream), pcVar8 == (char *)0x0)) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_18,"..\\sound\\sndmain.cpp",0x2bf);
      return;
    }
    pcVar9 = crt_string_c_strstr_FUN_005fedd0(acStack_458,"//");
    pcVar8 = acStack_458;
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
    while ((acStack_458 < pcVar9 &&
           ((g_CharacterClassificationTable[(byte)(pcVar9[-1] + 1)] & 2U) != 0))) {
      pcVar9 = pcVar9 + -1;
    }
    *pcVar9 = '\0';
    while ((g_CharacterClassificationTable[(byte)(acStack_458[0] + 1)] & 2U) != 0) {
      uVar10 = 0xffffffff;
      pcVar8 = acStack_458;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + (uint)bVar11 * -2 + 1;
      } while (cVar3 != '\0');
      crt_string_c_memmove_FUN_005fe5e0(acStack_458,acStack_458 + 1,~uVar10 - 1);
    }
    if (acStack_460[0] != '\0') {
      iVar6 = crt_stdio_c_sscanf_FUN_0060013c(acStack_460,"refDist =%f",local_30);
      if (iVar6 == 1) {
        if (local_1c != (FILE *)0x0) {
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 0x290;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Reference distance specified in %s on line %d, then again on line %d",auStack_134,local_1c,pFStack_14);
        }
        local_1c = pFStack_14;
        fVar1 = (this_ptr->sample_info).reference_distance;
        dVar2 = (double)fVar1;
        if (fVar1 < (float)0.10000000000000001) {
          local_470 = (uint)((ulonglong)dVar2 >> 0x20);
          uStack_474 = SUB84 /* extract 2-byte value */(dVar2,0);
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 0x292;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Reference volume distance %g is too small in %s line %d!",uStack_474,local_470,auStack_134,pFStack_14
                    );
        }
        if (local_18 == (FILE *)0x0) {
          (this_ptr->sample_info).reference_volume_distance =
               (this_ptr->sample_info).reference_distance / 4f;
        }
      }
      else {
        iVar6 = crt_stdio_c_sscanf_FUN_0060013c(acStack_460,"minDist =%f",local_28);
        if (iVar6 == 1) {
          if (local_18 != (FILE *)0x0) {
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 0x298;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Minimum distance specified in %s on line %d, then again on line %d",auStack_134,local_18,pFStack_14);
          }
          local_18 = pFStack_14;
          fVar1 = (this_ptr->sample_info).reference_volume_distance;
          dVar2 = (double)fVar1;
          if (fVar1 < (float)0.10000000000000001) {
            local_468 = (uint)((ulonglong)dVar2 >> 0x20);
            uStack_46c = SUB84 /* extract 2-byte value */(dVar2,0);
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 0x29a;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Reference volume distance %g is too small in %s line %d!",uStack_46c,local_468,auStack_134,
                       pFStack_14);
          }
        }
        else {
          iVar6 = crt_stdio_c_sscanf_FUN_0060013c(acStack_460,"maxDist =%f",local_2c);
          if (iVar6 != 1) {
            iVar6 = crt_stdio_c_sscanf_FUN_0060013c(acStack_460,"maxVol =%f",&local_464);
            if (iVar6 == 1) {
              if (local_1c == (FILE *)0x0) {
                g_CurrentFilename = "..\\sound\\sndmain.cpp";
                g_CurrentLineNumber = 0x2a4;
                core_main_c_displayErrorAndQuit_FUN_00506f10
                          ("%s specified maxVol on line %d without first specifying reference distance",auStack_134,pFStack_14);
              }
              if (local_18 != (FILE *)0x0) {
                g_CurrentFilename = "..\\sound\\sndmain.cpp";
                g_CurrentLineNumber = 0x2a5;
                core_main_c_displayErrorAndQuit_FUN_00506f10
                          ("Minimum distance specified in %s on line %d, then again on line %d",auStack_134,local_18,pFStack_14);
              }
              local_18 = pFStack_14;
              if (local_464 < (float)0.001) {
                g_CurrentFilename = "..\\sound\\sndmain.cpp";
                g_CurrentLineNumber = 0x2a7;
                core_main_c_displayErrorAndQuit_FUN_00506f10
                          ("maxVol %g is too small in %s line %d!",SUB84 /* extract 2-byte value */((double)local_464,0),
                           (int)((ulonglong)(double)local_464 >> 0x20),auStack_134,pFStack_14);
              }
              (this_ptr->sample_info).reference_volume_distance =
                   (this_ptr->sample_info).reference_distance / local_464;
            }
            else {
              iVar6 = crt_stdio_c_sscanf_FUN_0060013c(acStack_460,"length =%d",&local_34);
              if (iVar6 == 1) {
                if (-1 < (this_ptr->sample_info).sample_count) {
                  g_CurrentFilename = "..\\sound\\sndmain.cpp";
                  g_CurrentLineNumber = 0x2ae;
                  core_main_c_displayErrorAndQuit_FUN_00506f10
                            ("Length for %s already known, then specified again in %s line %d",this_ptr,auStack_134,pFStack_14);
                }
                if (local_34 < 1) {
                  g_CurrentLineNumber = 0x2af;
                  g_CurrentFilename = "..\\sound\\sndmain.cpp";
                  core_main_c_displayErrorAndQuit_FUN_00506f10
                            ("Invalid length %d in %s line %d",local_34,auStack_134,pFStack_14);
                }
                (this_ptr->sample_info).sample_count = local_34;
              }
              else {
                iVar6 = crt_string_c_stricmp_FUN_005fe7f0(acStack_460,"loop");
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
                            ("Error parsing %s line %d: %s",auStack_134,pFStack_14,acStack_460)
                  ;
                }
              }
            }
          }
        }
      }
    }
  } while( true );
}
