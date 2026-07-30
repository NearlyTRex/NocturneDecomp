// Name: sound_sndmain.cpp_FUN_005229f0
// Address: 005229f0
// Address Range: [[005229f0, 00522d06]]
// Convention: unknown
// Signature: CSfxSample * sound_sndmain_cpp_FUN_005229f0(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSfxSample * sound_sndmain_cpp_FUN_005229f0(int param_1,char *param_2)

{
  char cVar1;
  float fVar2;
  CSfxSample *sfx_sample;
  int iVar3;
  CMP3Decoder *this_ptr;
  CMP3Decoder *pCVar4;
  _FILE *p_Var5;
  long lVar6;
  int iVar7;
  double dVar8;
  CSfxSample *pCVar9;
  char local_114 [256];
  CSfxSample *local_14;
  
  iVar7 = 0;
  do {
    _DAT_02dc1ed8 = _DAT_02dc1ed8 + 1;
    if (0x3f < _DAT_02dc1ed8) {
      _DAT_02dc1ed8 = 0;
    }
    iVar3 = _DAT_02dc1ed8 * 0x168;
    if ((*(int *)(iVar3 + 0x2dc2004) == 0) && (*(int *)(iVar3 + 0x2dc2008) == 0)) {
      local_14 = (CSfxSample *)(&DAT_02dc1edc + iVar3);
      goto LAB_00522a32;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x40);
  local_14 = (CSfxSample *)0x0;
LAB_00522a32:
  sfx_sample = local_14;
  if (local_14 == (CSfxSample *)0x0) {
    return (CSfxSample *)0x0;
  }
  splitpath(param_2,(char *)0x0,(char *)0x0,(char *)0x0,local_114);
  iVar7 = _stricmp(local_114,"mp3");
  if ((iVar7 == 0) ||
     (iVar7 = _stricmp(local_114,".mp3"), iVar7 == 0)) {
    iVar7 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound",param_2);
    if (iVar7 < 1) goto LAB_00522ceb;
    this_ptr = (CMP3Decoder *)FUN_0056497c(0x8630);
    pCVar4 = (CMP3Decoder *)0x0;
    if (this_ptr != (CMP3Decoder *)0x0) {
      pCVar4 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_004e7d90(this_ptr);
    }
    sfx_sample->loop_destinations[2] = (int)pCVar4;
    if (pCVar4 == (CMP3Decoder *)0x0) {
      PTR_01cc4800 = "..\\sound\\sndmain.cpp";
      INT_01cc4804 = 0x3c8;
      core_main_c_FUN_004c8440("Out of memory.");
    }
    sound_mp3_cpp_CMP3Decoder_openFile_FUN_004e7df0(sfx_sample->loop_destinations[2],param_2);
    pCVar9 = sfx_sample;
    do {
      cVar1 = *param_2;
      (pCVar9->sample_info).name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_2[1];
      param_2 = param_2 + 2;
      (pCVar9->sample_info).name[1] = cVar1;
      pCVar9 = (CSfxSample *)((pCVar9->sample_info).name + 2);
    } while (cVar1 != '\0');
    (sfx_sample->sample_info).streaming_flag = 1;
    iVar7 = sfx_sample->loop_destinations[2];
    (sfx_sample->sample_info).bit_depth = 0x10;
    (sfx_sample->sample_info).num_channels = *(int *)(iVar7 + 0x104);
    iVar7 = *(int *)(sfx_sample->loop_destinations[2] + 0x100);
    (sfx_sample->sample_info).sample_count = -1;
    (sfx_sample->sample_info).sample_rate = iVar7;
    sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00521e10(sfx_sample);
    sfx_sample->loop_endpoints[0] = 0;
    sfx_sample->loop_endpoints[1] = 0;
    iVar7 = (sfx_sample->sample_info).sample_rate;
    sfx_sample->loop_endpoints[2] = 0;
    fVar2 = (float)iVar7 * 2.0f;
    sfx_sample->loop_destinations[0] = 0;
    sfx_sample->loop_destinations[1] = 0;
    pCVar9 = (CSfxSample *)0x522bb8;
    dVar8 = round((double)fVar2);
    sfx_sample->loop_endpoints[4] = (int)ROUND(dVar8);
    sfx_sample->loop_endpoints[3] = param_1;
    iVar7 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_00523910(pCVar9);
  }
  else {
    p_Var5 = engine_dosio_cpp_getFile_FUN_00456a60("sound",param_2,"rb");
    sfx_sample->loop_destinations[4] = (int)p_Var5;
    pCVar9 = sfx_sample;
    if (p_Var5 == (_FILE *)0x0) goto LAB_00522ceb;
    do {
      cVar1 = *param_2;
      (pCVar9->sample_info).name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_2[1];
      param_2 = param_2 + 2;
      (pCVar9->sample_info).name[1] = cVar1;
      pCVar9 = (CSfxSample *)((pCVar9->sample_info).name + 2);
    } while (cVar1 != '\0');
    lVar6 = _ftell((_FILE *)sfx_sample->loop_destinations[4]);
    sfx_sample->loop_destinations[3] = lVar6;
    iVar7 = sound_sndmain_cpp_parseWavFile_FUN_00521830
                      ((_FILE *)sfx_sample->loop_destinations[4],sfx_sample->loop_destinations + 3,
                       sfx_sample);
    if (iVar7 == 0) goto LAB_00522ceb;
    sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00521e10(sfx_sample);
    sfx_sample->loop_endpoints[0] = 0;
    sfx_sample->loop_endpoints[1] = 0;
    iVar7 = (sfx_sample->sample_info).sample_rate;
    sfx_sample->loop_endpoints[2] = 0;
    fVar2 = (float)iVar7 * 2.0f;
    sfx_sample->loop_destinations[0] = 0;
    sfx_sample->loop_destinations[1] = 0;
    pCVar9 = (CSfxSample *)0x522ccf;
    dVar8 = round((double)fVar2);
    sfx_sample->loop_endpoints[4] = (int)ROUND(dVar8);
    sfx_sample->loop_endpoints[3] = param_1;
    iVar7 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_00523910(pCVar9);
  }
  if (iVar7 != 0) {
    sound_sndmain_cpp_CSfxSample_seek_FUN_00523d10(sfx_sample,0,0);
    return sfx_sample;
  }
LAB_00522ceb:
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(sfx_sample);
  return (CSfxSample *)0x0;
}
