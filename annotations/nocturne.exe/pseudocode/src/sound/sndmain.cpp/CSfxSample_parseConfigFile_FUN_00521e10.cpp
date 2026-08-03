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
  char cVar2;
  float fVar3;
  float fVar4;
  _FILE *stream;
  int iVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  byte bVar10;
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
  
  bVar10 = 0;
  fVar3 = (float)_DAT_005bea88;
  fVar1 = 20.0f * fVar3;
  fVar4 = g_FLOAT_02dbd370 * fVar3;
  fVar3 = 10000.0f * fVar3;
  this_ptr->loop_marker_count = 0;
  (this_ptr->sample_info).reference_distance = fVar1;
  (this_ptr->sample_info).reference_volume_distance = fVar4;
  (this_ptr->sample_info).max_distance = fVar3;
  splitpath
            ((char *)this_ptr,(char *)0x0,(char *)0x0,local_138,(char *)0x0);
  makepath(local_23c,(char *)0x0,(char *)0x0,local_138,"klp");
  iVar5 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound",local_23c);
  if (0 < iVar5) {
    this_ptr->loop_marker_count = 1;
  }
  makepath(local_340,(char *)0x0,(char *)0x0,local_138,"sfx");
  iVar5 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound",local_340);
  if ((iVar5 < 1) ||
     (local_20 = engine_dosio_cpp_getFile_FUN_00456a60("sound",local_340,"rb"),
     local_20 == (_FILE *)0x0)) {
    return;
  }
  lVar6 = _ftell(local_20);
  local_24 = iVar5 + lVar6;
  local_2c = &(this_ptr->sample_info).max_distance;
  local_28 = &(this_ptr->sample_info).reference_volume_distance;
  local_18 = 0;
  local_1c = 0;
  local_30 = &(this_ptr->sample_info).reference_distance;
  local_38 = 0;
  while (stream = local_20, lVar6 = _ftell(local_20), lVar6 < local_24) {
    local_38 = local_38 + 1;
    pcVar7 = _fgets(local_46c,300,stream);
    if (pcVar7 == (char *)0x0) break;
    pcVar8 = strstr(local_46c,"//");
    pcVar7 = local_46c;
    if (pcVar8 != (char *)0x0) {
      *pcVar8 = '\0';
    }
    do {
      pcVar8 = pcVar7;
      if (*pcVar7 == '\0') goto joined_r0x00521ffd;
      if (*pcVar7 == '\0') break;
      pcVar8 = pcVar7 + 1;
      if (*pcVar8 == '\0') goto joined_r0x00521ffd;
      pcVar7 = pcVar7 + 2;
    } while (*pcVar8 != '\0');
    pcVar8 = (char *)0x0;
joined_r0x00521ffd:
    while ((local_46c < pcVar8 && (((&DAT_005c168c)[(byte)(pcVar8[-1] + 1)] & 2) != 0))) {
      pcVar8 = pcVar8 + -1;
    }
    *pcVar8 = '\0';
    while (((&DAT_005c168c)[(byte)(local_46c[0] + 1)] & 2) != 0) {
      uVar9 = 0xffffffff;
      pcVar7 = local_46c;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + (uint)bVar10 * -2 + 1;
      } while (cVar2 != '\0');
      memmove(local_46c,local_46c + 1,~uVar9 - 1);
    }
    if (local_46c[0] != '\0') {
      iVar5 = sscanf(local_46c,"refDist =%f");
      if (iVar5 == 1) {
        if (local_1c != 0) {
          g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
          g_INT_01cc4804 = 0x292;
          core_main_c_FUN_004c8440("Reference distance specified in %s on line %d, then again on line %d",local_340,local_1c,local_38);
        }
        local_1c = local_38;
        fVar1 = (this_ptr->sample_info).reference_distance;
        if (fVar1 < (float)0.10000000000000001) {
          g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
          g_INT_01cc4804 = 0x294;
          core_main_c_FUN_004c8440
                    ("Reference volume distance %g is too small in %s line %d!",(double)fVar1,local_340,local_38);
        }
        if (local_18 == 0) {
          (this_ptr->sample_info).reference_volume_distance =
               (this_ptr->sample_info).reference_distance / 4.0f;
        }
      }
      else {
        iVar5 = sscanf(local_46c,"minDist =%f");
        if (iVar5 == 1) {
          if (local_18 != 0) {
            g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
            g_INT_01cc4804 = 0x29a;
            core_main_c_FUN_004c8440
                      ("Minimum distance specified in %s on line %d, then again on line %d",local_340,local_18,local_38);
          }
          local_18 = local_38;
          fVar1 = (this_ptr->sample_info).reference_volume_distance;
          if (fVar1 < (float)0.10000000000000001) {
            g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
            g_INT_01cc4804 = 0x29c;
            core_main_c_FUN_004c8440
                      ("Reference volume distance %g is too small in %s line %d!",(double)fVar1,local_340,local_38);
          }
        }
        else {
          iVar5 = sscanf(local_46c,"maxDist =%f");
          if (iVar5 != 1) {
            iVar5 = sscanf(local_46c,"maxVol =%f");
            if (iVar5 == 1) {
              if (local_1c == 0) {
                g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
                g_INT_01cc4804 = 0x2a6;
                core_main_c_FUN_004c8440("%s specified maxVol on line %d without first specifying reference distance",local_340,local_38);
              }
              if (local_18 != 0) {
                g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
                g_INT_01cc4804 = 0x2a7;
                core_main_c_FUN_004c8440
                          ("Minimum distance specified in %s on line %d, then again on line %d",local_340,local_18,local_38);
              }
              local_18 = local_38;
              if (local_470 < (float)0.001) {
                g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
                g_INT_01cc4804 = 0x2a9;
                core_main_c_FUN_004c8440
                          ("maxVol %g is too small in %s line %d!",(double)local_470,local_340,local_38)
                ;
              }
              (this_ptr->sample_info).reference_volume_distance =
                   (this_ptr->sample_info).reference_distance / local_470;
            }
            else {
              iVar5 = sscanf(local_46c,"length =%d");
              if (iVar5 == 1) {
                if (-1 < (this_ptr->sample_info).sample_count) {
                  g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
                  g_INT_01cc4804 = 0x2b0;
                  core_main_c_FUN_004c8440
                            ("Length for %s already known, then specified again in %s line %d",this_ptr,local_340,local_38);
                }
                if (local_34 < 1) {
                  g_INT_01cc4804 = 0x2b1;
                  g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
                  core_main_c_FUN_004c8440
                            ("Invalid length %d in %s line %d",local_34,local_340,local_38);
                }
                (this_ptr->sample_info).sample_count = local_34;
              }
              else {
                iVar5 = _stricmp(local_46c,"loop");
                if (iVar5 == 0) {
                  this_ptr->loop_marker_count = 1;
                }
                else {
                  g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
                  g_INT_01cc4804 = 0x2be;
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
