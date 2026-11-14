// Name: sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00551620
// Address: 00551620
// Address Range: [[00551620, 00551cda]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00551620(CSfxSample *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00551620(CSfxSample *this_ptr)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  CSfxSample *pCVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  byte bVar10;
  float local_488;
  char local_484 [300];
  char local_358 [256];
  char local_258 [256];
  char local_158 [256];
  CInStreamFile local_58;
  int local_2c;
  float *local_28;
  float *local_24;
  float *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar10 = 0;
  fVar2 = _DAT_005e4854 * _DAT_00604244;
  fVar3 = _DAT_02ce7210 * _DAT_00604244;
  fVar4 = _DAT_005e4858 * _DAT_00604244;
  this_ptr->loop_marker_count = 1;
  (this_ptr->sample_info).reference_distance = fVar2;
  (this_ptr->sample_info).reference_volume_distance = fVar3;
  (this_ptr->sample_info).max_distance = fVar4;
  this_ptr->loop_endpoints[0] = (this_ptr->sample_info).sample_count;
  this_ptr->loop_destinations[0] = -1;
  engine_dosio_cpp_splitPath_FUN_00465e50
            ((char *)this_ptr,(char *)0x0,(char *)0x0,local_158,(char *)0x0);
  engine_dosio_cpp_makePath_FUN_00465e80(local_258,(char *)0x0,(char *)0x0,local_158,&DAT_005d253f);
  iVar5 = engine_dosio_cpp_getFileSize_FUN_004657f0("sound",local_258);
  if (0 < iVar5) {
    this_ptr->loop_marker_count = 1;
    iVar5 = (this_ptr->sample_info).sample_count;
    this_ptr->loop_destinations[0] = 0;
    this_ptr->loop_endpoints[0] = iVar5;
  }
  engine_dosio_cpp_makePath_FUN_00465e80(local_358,(char *)0x0,(char *)0x0,local_158,&DAT_005d2549);
  support_trstream_cpp_CInStreamFile_ctor_FUN_005738c0(&local_58);
  iVar5 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_00573fc0
                    (&local_58,"sound",local_358,1);
  if (iVar5 != 0) {
    local_20 = &(this_ptr->sample_info).max_distance;
    local_28 = &(this_ptr->sample_info).reference_volume_distance;
    local_18 = 0;
    local_1c = 0;
    local_24 = &(this_ptr->sample_info).reference_distance;
    local_14 = 0;
    while (iVar5 = support_trstream_cpp_CInStream_readLine_FUN_00573790
                             (&local_58.base,local_484,300), -1 < iVar5) {
      local_14 = local_14 + 1;
      pcVar7 = strstr(local_484,&DAT_005d253c);
      pcVar9 = local_484;
      if (pcVar7 != (char *)0x0) {
        *pcVar7 = '\0';
      }
      do {
        pcVar7 = pcVar9;
        if (*pcVar9 == '\0') goto joined_r0x00551849;
        if (*pcVar9 == '\0') break;
        pcVar7 = pcVar9 + 1;
        if (*pcVar7 == '\0') goto joined_r0x00551849;
        pcVar9 = pcVar9 + 2;
      } while (*pcVar7 != '\0');
      pcVar7 = (char *)0x0;
joined_r0x00551849:
      while ((local_484 < pcVar7 && (((&DAT_006074b8)[(byte)(pcVar7[-1] + 1)] & 2) != 0))) {
        pcVar7 = pcVar7 + -1;
      }
      *pcVar7 = '\0';
      while (((&DAT_006074b8)[(byte)(local_484[0] + 1)] & 2) != 0) {
        uVar8 = 0xffffffff;
        pcVar9 = local_484;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + (uint)bVar10 * -2 + 1;
        } while (cVar1 != '\0');
        memmove(local_484,local_484 + 1,~uVar8 - 1);
      }
      if (local_484[0] != '\0') {
        iVar5 = sscanf(local_484,"refDist =%f");
        if (iVar5 == 1) {
          if (local_1c != 0) {
            _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
            _DAT_01d71de4 = 0x2e7;
            core_main_c_FUN_004e4330
                      ("Reference distance specified in %s on line %d, then again on line %d",local_358,local_1c,local_14);
          }
          local_1c = local_14;
          if ((int)(this_ptr->sample_info).reference_distance < 0x3dcccccd) {
            _DAT_01d71de4 = 0x2e9;
            _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
            core_main_c_FUN_004e4330
                      ("Reference volume distance %g is too small in %s line %d!",
                       (double)(this_ptr->sample_info).reference_distance,local_358,local_14);
          }
          if (local_18 == 0) {
            (this_ptr->sample_info).reference_volume_distance =
                 (this_ptr->sample_info).reference_distance / _DAT_005e4850;
          }
        }
        else {
          iVar5 = sscanf(local_484,"minDist =%f");
          if (iVar5 == 1) {
            if (local_18 != 0) {
              _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
              _DAT_01d71de4 = 0x2ef;
              core_main_c_FUN_004e4330
                        ("Minimum distance specified in %s on line %d, then again on line %d",local_358,local_18,local_14);
            }
            local_18 = local_14;
            if ((int)(this_ptr->sample_info).reference_volume_distance < 0x3dcccccd) {
              _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
              _DAT_01d71de4 = 0x2f1;
              core_main_c_FUN_004e4330
                        ("Reference volume distance %g is too small in %s line %d!",
                         (double)(this_ptr->sample_info).reference_volume_distance,local_358,
                         local_14);
            }
          }
          else {
            iVar5 = sscanf(local_484,"maxDist =%f");
            if (iVar5 != 1) {
              iVar5 = sscanf(local_484,"maxVol =%f");
              if (iVar5 == 1) {
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
                (this_ptr->sample_info).reference_volume_distance =
                     (this_ptr->sample_info).reference_distance / local_488;
              }
              else {
                iVar5 = sscanf(local_484,"length =%d");
                if (iVar5 == 1) {
                  if (-1 < (this_ptr->sample_info).sample_count) {
                    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
                    _DAT_01d71de4 = 0x305;
                    core_main_c_FUN_004e4330
                              ("Length for %s already known, then specified again in %s line %d",this_ptr,local_358,local_14);
                  }
                  if (local_2c < 1) {
                    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
                    _DAT_01d71de4 = 0x306;
                    core_main_c_FUN_004e4330
                              ("Invalid length %d in %s line %d",local_2c,local_358,local_14);
                  }
                  (this_ptr->sample_info).sample_count = local_2c;
                }
                else {
                  iVar5 = _stricmp(local_484,&DAT_005d2858);
                  if (iVar5 == 0) {
                    this_ptr->loop_marker_count = 1;
                    iVar5 = (this_ptr->sample_info).sample_count;
                    this_ptr->loop_destinations[0] = 0;
                    this_ptr->loop_endpoints[0] = iVar5;
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
    iVar5 = 0;
    pCVar6 = this_ptr;
    if (0 < this_ptr->loop_marker_count) {
      do {
        if (pCVar6->loop_endpoints[0] < 0) {
          pCVar6->loop_endpoints[0] = (this_ptr->sample_info).sample_count;
        }
        iVar5 = iVar5 + 1;
        pCVar6 = (CSfxSample *)((pCVar6->sample_info).name + 4);
      } while (iVar5 < this_ptr->loop_marker_count);
    }
  }
  support_trstream_cpp_CInStreamFile_dtor_FUN_00573a40(&local_58,0);
  return;
}
