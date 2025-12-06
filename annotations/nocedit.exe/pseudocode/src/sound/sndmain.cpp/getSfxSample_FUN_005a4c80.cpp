// Name: sound_sndmain.cpp_getSfxSample_FUN_005a4c80
// Address: 005a4c80
// Address Range: [[005a4c80, 005a5179]]
// Convention: __cdecl
// Signature: CSfxSample * sound_sndmain.cpp_getSfxSample_FUN_005a4c80(char * filename)

#include "nocturne.h"

CSfxSample * __cdecl sound_sndmain_cpp_getSfxSample_FUN_005a4c80(char *filename)

{
  char cVar1;
  int iVar2;
  FILE *pFVar3;
  long lVar4;
  void *buffer;
  SIZE_T SVar5;
  short *output_buffer;
  uint uVar6;
  BADSPACEBASE *in_ESP;
  CSfxSample *pCVar7;
  int iVar8;
  CSfxSample *pCVar9;
  bool bVar10;
  byte bVar11;
  char *in_stack_00000014;
  FILE *in_stack_00000018;
  FILE *in_stack_0000001c;
  char *in_stack_00000024;
  FILE *in_stack_00000028;
  FILE *in_stack_00000030;
  int in_stack_00000038;
  FILE *in_stack_0000003c;
  char cVar12;
  uint in_stack_ffffff04;
  char *pcVar13;
  FILE *in_stack_ffffff30;
  
  bVar11 = 0;
  pCVar7 = g_SfxSamples;
  iVar8 = 0;
  do {
    iVar2 = crt_string_c_stricmp_FUN_005fe7f0((char *)pCVar7,filename);
    cVar12 = (char)in_stack_ffffff04;
    if (iVar2 == 0) {
      return pCVar7;
    }
    iVar8 = iVar8 + 1;
    pCVar7 = pCVar7 + 1;
  } while (iVar8 < 0x40);
  iVar8 = 0;
  do {
    g_LastSampleAccessIndex = g_LastSampleAccessIndex + 1;
    if (0x3f < g_LastSampleAccessIndex) {
      g_LastSampleAccessIndex = 0;
    }
    if ((g_SfxSamples[g_LastSampleAccessIndex].taken == 0) &&
       (g_SfxSamples[g_LastSampleAccessIndex].ref_count == 0)) {
      pCVar7 = g_SfxSamples + g_LastSampleAccessIndex;
      bVar10 = pCVar7 == (CSfxSample *)0x0;
      goto LAB_005a4cea;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x40);
  pCVar7 = (CSfxSample *)0x0;
  bVar10 = true;
LAB_005a4cea:
  if (bVar10) {
    return pCVar7;
  }
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(pCVar7);
  if ((g_GlobalMP3DecoderInitialized & 1) == 0) {
    g_GlobalMP3DecoderInitialized = g_GlobalMP3DecoderInitialized | 1;
    sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(&g_CMP3DecoderInstance);
    crt_stdlib_c_atexit_FUN_005ff060(&g_CMP3DecoderDestructorNode);
  }
  iVar8 = engine_dosio_c_getFileSize_FUN_00481880("sound",in_stack_00000014);
  pFVar3 = in_stack_00000018;
  pCVar9 = pCVar7;
  if (iVar8 < 1) goto LAB_005a4ef8;
  do {
    cVar1 = *(char *)&pFVar3->_ptr;
    (pCVar9->sample_info).name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = *(char *)((int)&pFVar3->_ptr + 1);
    (pCVar9->sample_info).name[1] = cVar1;
    pFVar3 = (FILE *)((int)&pFVar3->_ptr + 2);
    pCVar9 = (CSfxSample *)((pCVar9->sample_info).name + 2);
  } while (cVar1 != '\0');
  engine_dosio_c_splitPath_FUN_00481f20
            ((char *)in_stack_00000018,(char *)0x0,(char *)0x0,(char *)0x0,&stack0xffffff00);
  if (cVar12 == '.') {
    uVar6 = 0xffffffff;
    pcVar13 = &stack0xffffff04;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar12 = *pcVar13;
      pcVar13 = pcVar13 + (uint)bVar11 * -2 + 1;
    } while (cVar12 != '\0');
    crt_string_c_memmove_FUN_005fe5e0(&stack0xffffff04,&stack0xffffff05,~uVar6 - 1);
  }
  iVar8 = crt_string_c_stricmp_FUN_005fe7f0(&stack0xffffff08,"wav");
  if (iVar8 == 0) {
    pFVar3 = engine_dosio_c_getFile_FUN_00481a50("sound",in_stack_00000024,"rb");
    if (pFVar3 == (FILE *)0x0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 0x2fe;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s");
    }
    lVar4 = crt_stdio_c_ftell_FUN_00601560(in_stack_00000018);
    pCVar7->file_offset = lVar4;
    iVar8 = sound_sndmain_cpp_parseWavFile_FUN_005a3fe0
                      (in_stack_0000001c,&pCVar7->file_offset,pCVar7);
    if (iVar8 == 0) goto LAB_005a4ef8;
    sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(pCVar7);
    pCVar7->taken = 0;
    pCVar7->ref_count = 0;
    pCVar7->buffer_id = 0;
    pCVar7->streaming_slot_index = -1;
    iVar8 = (pCVar7->sample_info).sample_count;
    pCVar7->streaming_buffer_size = iVar8;
    pCVar7->stream_read_position = iVar8;
    pCVar7->stream_write_position = iVar8;
    iVar8 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005a6170(pCVar7);
    if (iVar8 == 0) goto LAB_005a4ef8;
    crt_stdio_c_fseek_FUN_005ffacc(in_stack_00000028,pCVar7->file_offset,0);
    buffer = sound_sndmain_cpp_CSfxSample_lock_FUN_005a6430
                       (pCVar7,0,(pCVar7->sample_info).sample_count);
    if (buffer == (void *)0x0) {
      pcVar13 = "Failed to lock sample %s\n";
    }
    else {
      pFVar3 = in_stack_00000030;
      SVar5 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(pCVar7);
      SVar5 = crt_stdio_c_fread_FUN_005fd990(buffer,SVar5,(SIZE_T)pFVar3,in_stack_ffffff30);
      if ((SVar5 == (pCVar7->sample_info).sample_count) &&
         ((*(byte *)(in_stack_00000038 + 0xc) & 0x20) == 0)) {
        sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(pCVar7);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0
                  (in_stack_0000003c,"..\\sound\\sndmain.cpp",0x337);
        return pCVar7;
      }
      pcVar13 = "Error reading file data for %s\n";
    }
  }
  else {
    iVar8 = crt_string_c_stricmp_FUN_005fe7f0(&stack0xffffff0c,"mp3");
    if (iVar8 != 0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 0x37b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unknown sample file format extension: %s");
      return pCVar7;
    }
    sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550
              (&g_CMP3DecoderInstance,(char *)in_stack_00000028);
    (pCVar7->sample_info).bit_depth = 0x10;
    (pCVar7->sample_info).num_channels = g_CMP3DecoderInstance.num_channels;
    iVar8 = g_CMP3DecoderInstance.sample_rate;
    (pCVar7->sample_info).sample_count = -1;
    (pCVar7->sample_info).sample_rate = iVar8;
    sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(pCVar7);
    if ((pCVar7->sample_info).sample_count < 0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 0x34d;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Don't know length of sample %s");
    }
    pCVar7->taken = 0;
    pCVar7->ref_count = 0;
    pCVar7->buffer_id = 0;
    pCVar7->streaming_slot_index = -1;
    iVar8 = (pCVar7->sample_info).sample_count;
    pCVar7->streaming_buffer_size = iVar8;
    pCVar7->stream_read_position = iVar8;
    pCVar7->stream_write_position = iVar8;
    iVar8 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005a6170(pCVar7);
    if (iVar8 == 0) goto LAB_005a4ef8;
    output_buffer =
         (short *)sound_sndmain_cpp_CSfxSample_lock_FUN_005a6430
                            (pCVar7,0,(pCVar7->sample_info).sample_count);
    if (output_buffer == (short *)0x0) {
      pcVar13 = "Failed to lock sample %s\n";
    }
    else {
      iVar8 = sound_mp3_cpp_CMP3Decoder_read_FUN_00534a60
                        (&g_CMP3DecoderInstance,output_buffer,(pCVar7->sample_info).sample_count);
      if (iVar8 == (pCVar7->sample_info).sample_count) {
        sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(pCVar7);
        return pCVar7;
      }
      pcVar13 = "Error decoding file data from %s\n";
    }
  }
  sound_sndmain_cpp_logSoundError_FUN_005adba0(pcVar13);
LAB_005a4ef8:
  sound_mp3_cpp_CMP3Decoder_free_FUN_005349e0(&g_CMP3DecoderInstance);
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(pCVar7);
  if (in_stack_00000030 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000030,"..\\sound\\sndmain.cpp",0x2eb);
  }
  return (CSfxSample *)0x0;
}
