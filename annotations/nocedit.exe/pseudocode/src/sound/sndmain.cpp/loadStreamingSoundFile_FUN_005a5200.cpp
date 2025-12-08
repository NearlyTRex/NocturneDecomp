// Name: sound_sndmain.cpp_loadStreamingSoundFile_FUN_005a5200
// Address: 005a5200
// Address Range: [[005a5200, 005a5520]]
// Convention: __cdecl
// Signature: CSfxSample * sound_sndmain.cpp_loadStreamingSoundFile_FUN_005a5200(char * filename)

#include "nocturne.h"

CSfxSample * __cdecl sound_sndmain_cpp_loadStreamingSoundFile_FUN_005a5200(char *filename)

{
  char cVar1;
  float fVar2;
  CMP3Decoder *pCVar3;
  int extraout_EAX;
  FILE *pFVar4;
  long lVar5;
  int extraout_EAX_00;
  int iVar6;
  BADSPACEBASE *in_ESP;
  double dVar7;
  char *in_stack_00000008;
  CSfxSample *pCVar8;
  CSfxSample *local_14;
  
  iVar6 = 0;
  do {
    g_LastSampleAccessIndex = g_LastSampleAccessIndex + 1;
    if (0x3f < g_LastSampleAccessIndex) {
      g_LastSampleAccessIndex = 0;
    }
    if ((g_SfxSamples[g_LastSampleAccessIndex].taken == 0) &&
       (g_SfxSamples[g_LastSampleAccessIndex].ref_count == 0)) {
      local_14 = g_SfxSamples + g_LastSampleAccessIndex;
      goto LAB_005a5242;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x40);
  local_14 = (CSfxSample *)0x0;
LAB_005a5242:
  if (local_14 == (CSfxSample *)0x0) {
    return (CSfxSample *)0x0;
  }
  engine_dosio_c_splitPath_FUN_00481f20
            (in_stack_00000008,(char *)0x0,(char *)0x0,(char *)0x0,&stack0xfffffeec);
  iVar6 = crt_string_c_stricmp_FUN_005fe7f0(&stack0xfffffef0,"mp3");
  if ((iVar6 == 0) ||
     (iVar6 = crt_string_c_stricmp_FUN_005fe7f0(&stack0xfffffef4,".mp3"), iVar6 == 0)) {
    iVar6 = engine_dosio_c_getFileSize_FUN_00481880("sound",in_stack_00000008);
    if (iVar6 < 1) goto LAB_005a5505;
    pCVar3 = (CMP3Decoder *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x8630,"..\\sound\\sndmain.cpp",0x3c5);
    if (pCVar3 != (CMP3Decoder *)0x0) {
      pCVar3 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(pCVar3);
    }
    local_14->mp3_data = pCVar3;
    if (pCVar3 == (CMP3Decoder *)0x0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 0x3c6;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory.");
    }
    sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550(local_14->mp3_data,in_stack_00000008);
    pCVar8 = local_14;
    do {
      cVar1 = *in_stack_00000008;
      (pCVar8->sample_info).name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = in_stack_00000008[1];
      in_stack_00000008 = in_stack_00000008 + 2;
      (pCVar8->sample_info).name[1] = cVar1;
      pCVar8 = (CSfxSample *)((pCVar8->sample_info).name + 2);
    } while (cVar1 != '\0');
    (local_14->sample_info).streaming_flag = 1;
    pCVar3 = local_14->mp3_data;
    (local_14->sample_info).bit_depth = 0x10;
    (local_14->sample_info).num_channels = pCVar3->num_channels;
    iVar6 = local_14->mp3_data->sample_rate;
    (local_14->sample_info).sample_count = -1;
    (local_14->sample_info).sample_rate = iVar6;
    sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(local_14);
    local_14->taken = 0;
    local_14->ref_count = 0;
    iVar6 = (local_14->sample_info).sample_rate;
    local_14->buffer_id = 0;
    fVar2 = (float)iVar6 * 2f;
    local_14->stream_read_position = 0;
    local_14->stream_write_position = 0;
    pCVar8 = (CSfxSample *)0x5a53d2;
    dVar7 = crt_math_c_round_FUN_005fe6b0((double)fVar2);
    local_14->streaming_buffer_size = (int)ROUND(dVar7);
    local_14->streaming_slot_index = extraout_EAX;
    iVar6 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005a6170(pCVar8);
  }
  else {
    pFVar4 = engine_dosio_c_getFile_FUN_00481a50("sound",in_stack_00000008,"rb");
    local_14->file_handle = pFVar4;
    pCVar8 = local_14;
    if (pFVar4 == (FILE *)0x0) goto LAB_005a5505;
    do {
      cVar1 = *in_stack_00000008;
      (pCVar8->sample_info).name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = in_stack_00000008[1];
      in_stack_00000008 = in_stack_00000008 + 2;
      (pCVar8->sample_info).name[1] = cVar1;
      pCVar8 = (CSfxSample *)((pCVar8->sample_info).name + 2);
    } while (cVar1 != '\0');
    lVar5 = crt_stdio_c_ftell_FUN_00601560(local_14->file_handle);
    local_14->file_offset = lVar5;
    iVar6 = sound_sndmain_cpp_parseWavFile_FUN_005a3fe0
                      (local_14->file_handle,&local_14->file_offset,local_14);
    if (iVar6 == 0) goto LAB_005a5505;
    sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(local_14);
    local_14->taken = 0;
    local_14->ref_count = 0;
    iVar6 = (local_14->sample_info).sample_rate;
    local_14->buffer_id = 0;
    fVar2 = (float)iVar6 * 2f;
    local_14->stream_read_position = 0;
    local_14->stream_write_position = 0;
    pCVar8 = (CSfxSample *)0x5a54e9;
    dVar7 = crt_math_c_round_FUN_005fe6b0((double)fVar2);
    local_14->streaming_buffer_size = (int)ROUND(dVar7);
    local_14->streaming_slot_index = extraout_EAX_00;
    iVar6 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005a6170(pCVar8);
  }
  if (iVar6 != 0) {
    sound_sndmain_cpp_CSfxSample_seek_FUN_005a65a0(local_14,0,0);
    return local_14;
  }
LAB_005a5505:
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(local_14);
  return (CSfxSample *)0x0;
}
