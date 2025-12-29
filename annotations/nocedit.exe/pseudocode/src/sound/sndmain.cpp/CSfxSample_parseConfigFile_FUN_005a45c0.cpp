// Name: sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0
// Address: 005a45c0
// Address Range: [[005a45c0, 005a4c7c]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0(CSfxSample * this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(CSfxSample *this_ptr)

{
  double dVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FILE *file_handle;
  float *pfVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  BADSPACEBASE *in_ESP;
  FILE *unaff_ESI;
  byte bVar14;
  float *pfVar15;
  char acStack_45c [4];
  char acStack_458 [4];
  ulonglong uStack_454;
  float fStack_44c;
  char acStack_448 [4];
  char acStack_444 [4];
  char acStack_440 [268];
  char acStack_334 [4];
  char acStack_330 [248];
  char local_238 [4];
  char acStack_234 [8];
  char acStack_22c [248];
  byte auStack_134 [4];
  byte auStack_130 [4];
  char acStack_12c [4];
  char acStack_128 [4];
  char acStack_124 [4];
  byte auStack_120 [4];
  byte auStack_11c [244];
  uint local_28 [2];
  int local_20;
  int local_1c;
  float *local_18;
  float *pfStack_14;
  
  bVar14 = 0;
  fVar4 = (float)1;
  fVar3 = 20f * fVar4;
  fVar5 = g_SoundReferenceVolumeDistance * fVar4;
  fVar4 = 10000f * fVar4;
  this_ptr->loop_marker_count = 1;
  (this_ptr->sample_info).reference_distance = fVar3;
  (this_ptr->sample_info).reference_volume_distance = fVar5;
  (this_ptr->sample_info).max_distance = fVar4;
  this_ptr->loop_length = (this_ptr->sample_info).sample_count;
  this_ptr->loop_markers[0] = -1;
  engine_dosio_c_splitPath_FUN_00481f20
            ((char *)this_ptr,(char *)0x0,(char *)0x0,local_238,(char *)0x0);
  engine_dosio_c_makePath_FUN_00481f50
            (acStack_334,(char *)0x0,(char *)0x0,acStack_234,"klp");
  iVar8 = engine_dosio_c_getFileSize_FUN_00481880("sound",acStack_330);
  if (0 < iVar8) {
    this_ptr->loop_marker_count = 1;
    iVar8 = (this_ptr->sample_info).sample_count;
    this_ptr->loop_markers[0] = 0;
    this_ptr->loop_length = iVar8;
  }
  engine_dosio_c_makePath_FUN_00481f50
            (acStack_12c,(char *)0x0,(char *)0x0,acStack_22c,"sfx");
  iVar8 = engine_dosio_c_getFileSize_FUN_00481880("sound",acStack_128);
  if ((iVar8 < 1) ||
     (file_handle = engine_dosio_c_getFile_FUN_00481a50("sound",acStack_124,"rb"),
     file_handle == (FILE *)0x0)) {
    return;
  }
  crt_stdio_c_ftell_FUN_00601560(file_handle);
  pfStack_14 = &(this_ptr->sample_info).max_distance;
  pfVar9 = &(this_ptr->sample_info).reference_volume_distance;
  local_18 = &(this_ptr->sample_info).reference_distance;
  do {
    lVar10 = crt_stdio_c_ftell_FUN_00601560(unaff_ESI);
    if (((int)unaff_ESI <= lVar10) ||
       (pcVar11 = crt_stdio_c_fgets_FUN_005fefd0(acStack_444,300,unaff_ESI), pcVar11 == (char *)0x0)
       ) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)0x0,"..\\sound\\sndmain.cpp",0x2bf);
      return;
    }
    pcVar12 = crt_string_c_strstr_FUN_005fedd0(acStack_440,"//");
    pcVar11 = acStack_440;
    if (pcVar12 != (char *)0x0) {
      *pcVar12 = '\0';
    }
    do {
      pcVar12 = pcVar11;
      if (*pcVar11 == '\0') goto joined_r0x005a47dc;
      if (*pcVar11 == '\0') break;
      pcVar12 = pcVar11 + 1;
      if (*pcVar12 == '\0') goto joined_r0x005a47dc;
      pcVar11 = pcVar11 + 2;
    } while (*pcVar12 != '\0');
    pcVar12 = (char *)0x0;
joined_r0x005a47dc:
    while ((acStack_440 < pcVar12 &&
           ((g_CharacterClassificationTable[(byte)(pcVar12[-1] + 1)] & 2U) != 0))) {
      pcVar12 = pcVar12 + -1;
    }
    *pcVar12 = '\0';
    while ((g_CharacterClassificationTable[(byte)(acStack_440[0] + 1)] & 2U) != 0) {
      uVar13 = 0xffffffff;
      pcVar11 = acStack_440;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + (uint)bVar14 * -2 + 1;
      } while (cVar2 != '\0');
      crt_string_c_memmove_FUN_005fe5e0(acStack_440,acStack_440 + 1,~uVar13 - 1);
    }
    if (acStack_448[0] != '\0') {
      pcVar12 = "refDist =%f";
      pcVar11 = acStack_448;
      pfVar15 = local_18;
      iVar8 = crt_stdio_c_sscanf_FUN_0060013c(pcVar11,"refDist =%f");
      if (iVar8 == 1) {
        if (local_1c != 0) {
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 0x290;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Reference distance specified in %s on line %d, then again on line %d",auStack_134,local_1c,pfStack_14);
        }
        local_18 = pfVar9;
        if (fRam00000114 < (float)0.10000000000000001) {
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 0x292;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Reference volume distance %g is too small in %s line %d!",SUB84 /* extract 2-byte value */((double)fRam00000114,0),
                     (int)((ulonglong)(double)fRam00000114 >> 0x20),auStack_130,pfVar9);
        }
        fRam00000118 = fRam00000114 / 4f;
      }
      else {
        iVar8 = crt_stdio_c_sscanf_FUN_0060013c(&stack0xfffffba0,"minDist =%f",local_28[0]);
        if (iVar8 == 1) {
          if (pfStack_14 != (float *)0x0) {
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 0x298;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Minimum distance specified in %s on line %d, then again on line %d",auStack_130,pfStack_14,pfVar9);
          }
          dVar1 = (double)fRam00000118;
          uStack_454 = dVar1;
          if (fRam00000118 < (float)0.10000000000000001) {
            uStack_454._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
            uVar6 = uStack_454._4_4_;
            uStack_454._0_4_ = SUB84 /* extract 2-byte value */(dVar1,0);
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 0x29a;
            uVar7 = (float)uStack_454;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Reference volume distance %g is too small in %s line %d!","Reference volume distance %g is too small in %s line %d!",uVar7
                       ,uVar6,auStack_11c,0);
          }
        }
        else {
          iVar8 = crt_stdio_c_sscanf_FUN_0060013c(acStack_45c,"maxDist =%f",local_28[0]);
          if (iVar8 != 1) {
            iVar8 = crt_stdio_c_sscanf_FUN_0060013c(acStack_458,"maxVol =%f",acStack_45c);
            if (iVar8 == 1) {
              if (pfVar9 == (float *)0x0) {
                g_CurrentFilename = "..\\sound\\sndmain.cpp";
                g_CurrentLineNumber = 0x2a4;
                core_main_c_displayErrorAndQuit_FUN_00506f10
                          ("%s specified maxVol on line %d without first specifying reference distance",acStack_128,unaff_ESI);
              }
              if (unaff_ESI != (FILE *)0x0) {
                g_CurrentFilename = "..\\sound\\sndmain.cpp";
                g_CurrentLineNumber = 0x2a5;
                core_main_c_displayErrorAndQuit_FUN_00506f10
                          ("Minimum distance specified in %s on line %d, then again on line %d",acStack_124,unaff_ESI,0);
              }
              if ((float)uStack_454 < (float)0.001) {
                g_CurrentFilename = "..\\sound\\sndmain.cpp";
                g_CurrentLineNumber = 0x2a7;
                core_main_c_displayErrorAndQuit_FUN_00506f10
                          ("maxVol %g is too small in %s line %d!",SUB84 /* extract 2-byte value */((double)(float)uStack_454,0),
                           (int)((ulonglong)(double)(float)uStack_454 >> 0x20),acStack_124,0);
              }
              unaff_ESI = (FILE *)0x0;
              fRam00000118 = fRam00000114 / fStack_44c;
            }
            else {
              iVar8 = crt_stdio_c_sscanf_FUN_0060013c
                                ((char *)&uStack_454,"length =%d",local_28,pcVar11,pcVar12,
                                 pfVar15);
              if (iVar8 == 1) {
                if (-1 < iRam00000110) {
                  g_CurrentFilename = "..\\sound\\sndmain.cpp";
                  g_CurrentLineNumber = 0x2ae;
                  core_main_c_displayErrorAndQuit_FUN_00506f10
                            ("Length for %s already known, then specified again in %s line %d",0,acStack_124,0);
                }
                if (local_20 < 1) {
                  g_CurrentLineNumber = 0x2af;
                  g_CurrentFilename = "..\\sound\\sndmain.cpp";
                  core_main_c_displayErrorAndQuit_FUN_00506f10
                            ("Invalid length %d in %s line %d",local_20,auStack_120,0);
                }
                iRam00000110 = local_1c;
              }
              else {
                iVar8 = crt_string_c_stricmp_FUN_005fe7f0
                                  ((char *)((int)&uStack_454 + 4),"loop");
                if (iVar8 == 0) {
                  uRam00000124 = 1;
                  iRam00000128 = iRam00000110;
                  uRam0000013c = 0;
                }
                else {
                  g_CurrentFilename = "..\\sound\\sndmain.cpp";
                  g_CurrentLineNumber = 700;
                  core_main_c_displayErrorAndQuit_FUN_00506f10
                            ("Error parsing %s line %d: %s",auStack_120,0,&fStack_44c);
                }
              }
            }
          }
        }
      }
    }
  } while( true );
}
