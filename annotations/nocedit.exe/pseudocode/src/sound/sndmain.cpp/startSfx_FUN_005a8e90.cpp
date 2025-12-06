// Name: sound_sndmain.cpp_startSfx_FUN_005a8e90
// Address: 005a8e90
// Address Range: [[005a8e90, 005a9543]]
// Convention: __cdecl
// Signature: uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

uint __cdecl sound_sndmain_cpp_startSfx_FUN_005a8e90(char *filename)

{
  float fVar1;
  char cVar2;
  int iVar3;
  CSfxSlot *pCVar4;
  int iVar5;
  uint uVar6;
  CMP3Decoder *pCVar7;
  FILE *pFVar8;
  long lVar9;
  CSfxSample *sfx_sample;
  uint extraout_EDX;
  BADSPACEBASE *in_ESP;
  CSfxSlot *this_ptr;
  char *pcVar10;
  CSfxOptions *pCVar11;
  int *piVar12;
  char *pcVar13;
  CVector3d *pCVar14;
  CSfxSample *pCVar15;
  byte bVar16;
  float10 fVar17;
  double dVar18;
  CSfxSample *unaff_retaddr;
  CSfxSample *in_stack_0000000c;
  CSfxSample *pCStack00000010;
  CSfxSample *in_stack_00000014;
  CSfxSample *pCVar19;
  char acStack_28c [4];
  char acStack_288 [32];
  char acStack_268 [240];
  char acStack_178 [4];
  char acStack_174 [4];
  char acStack_170 [228];
  CSfxOptions CStack_8c;
  
  bVar16 = 0;
  if ((filename == (char *)0x0) || (*filename == '\0')) {
    return 0;
  }
  iVar3 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
  if (iVar3 == 0) {
    return 0;
  }
  sound_sndmain_cpp_CSfxOptions_reset_FUN_005a8830(&CStack_8c);
  pcVar13 = &stack0xfffffc78;
  pcVar10 = filename;
  do {
    cVar2 = *pcVar10;
    *pcVar13 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar13[1] = cVar2;
    pcVar13 = pcVar13 + 2;
  } while (cVar2 != '\0');
  pCVar11 = g_SfxOptions + g_SfxLastSlot;
  pCVar14 = &CStack_8c.position;
  for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(int *)&pCVar14->x = pCVar11->channel_index;
    pCVar11 = (CSfxOptions *)((int)pCVar11 + ((uint)bVar16 * -2 + 1) * 4);
    pCVar14 = (CVector3d *)((int)pCVar14 + ((uint)bVar16 * -2 + 1) * 4);
  }
  iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(CStack_8c.position.x._0_4_);
  if (iVar3 == 0) {
    return 0;
  }
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x1f6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - must be locked!");
  }
  sfx_sample = (CSfxSample *)0x0;
  iVar5 = 0;
  iVar3 = g_SfxSlots[0].playback_state;
  while (iVar3 != 0) {
    sfx_sample = (CSfxSample *)((sfx_sample->sample_info).name + 1);
    if (0x49ff < iVar5 + 0x128) {
      sfx_sample = (CSfxSample *)0xffffffff;
      break;
    }
    iVar3 = *(int *)((int)g_SfxSlots[1].distance_to_speakers + iVar5 + -0xc);
    iVar5 = iVar5 + 0x128;
  }
  if ((int)sfx_sample < 0) {
    sound_sndmain_cpp_unlockSound_FUN_005abdc0();
    return 0;
  }
  this_ptr = g_SfxSlots + (int)sfx_sample;
  piVar12 = (int *)((int)&CStack_8c.position.y + 4);
  pCVar4 = this_ptr;
  for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
    (pCVar4->options).channel_index = *piVar12;
    piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
    pCVar4 = (CSfxSlot *)((int)pCVar4 + (uint)bVar16 * -8 + 4);
  }
  iVar3 = engine_dosio_c_getFileSize_FUN_00481880("sound",&stack0xfffffc84);
  if (iVar3 < 0x200001) {
    engine_dosio_c_splitPath_FUN_00481f20
              (&stack0xfffffc88,(char *)0x0,(char *)0x0,(char *)0x0,acStack_178);
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(acStack_174,"mp3");
    if (iVar3 == 0) goto LAB_005a8fc7;
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(acStack_170,".mp3");
    if (iVar3 == 0) goto LAB_005a8fc7;
    pCStack00000010 = sound_sndmain_cpp_getSfxSample_FUN_005a4c80(&stack0xfffffc94);
  }
  else {
LAB_005a8fc7:
    pcVar10 = &stack0xfffffc98;
    pcVar13 = &stack0xfffffc98;
    iVar3 = 0;
    do {
      g_LastSampleAccessIndex = g_LastSampleAccessIndex + 1;
      if (0x3f < g_LastSampleAccessIndex) {
        g_LastSampleAccessIndex = 0;
      }
      if ((g_SfxSamples[g_LastSampleAccessIndex].taken == 0) &&
         (g_SfxSamples[g_LastSampleAccessIndex].ref_count == 0)) {
        pCStack00000010 = g_SfxSamples + g_LastSampleAccessIndex;
        goto LAB_005a900a;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40);
    pCStack00000010 = (CSfxSample *)0x0;
LAB_005a900a:
    in_stack_00000014 = pCStack00000010;
    if (pCStack00000010 != (CSfxSample *)0x0) {
      pCVar19 = (CSfxSample *)0x0;
      engine_dosio_c_splitPath_FUN_00481f20
                (&stack0xfffffc98,(char *)0x0,(char *)0x0,(char *)0x0,acStack_268);
      iVar3 = crt_string_c_stricmp_FUN_005fe7f0(acStack_28c,"mp3");
      if ((iVar3 == 0) ||
         (iVar3 = crt_string_c_stricmp_FUN_005fe7f0(acStack_288,".mp3"), iVar3 == 0)) {
        iVar3 = engine_dosio_c_getFileSize_FUN_00481880("sound",&stack0xfffffc98);
        if (0 < iVar3) {
          pCVar7 = (CMP3Decoder *)
                   shape_memdbg_cpp_debugAlloc_FUN_0050f1b0
                             (0x8630,"..\\sound\\sndmain.cpp",0x3c5);
          if (pCVar7 != (CMP3Decoder *)0x0) {
            pCVar7 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(pCVar7);
          }
          *(CMP3Decoder **)(filename + 0x16c) = pCVar7;
          if (pCVar7 == (CMP3Decoder *)0x0) {
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 0x3c6;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory.");
          }
          sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550
                    (*(CMP3Decoder **)(filename + 0x16c),&stack0xfffffc98);
          pCVar15 = in_stack_0000000c;
          do {
            cVar2 = *pcVar10;
            (pCVar15->sample_info).name[0] = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar10[1];
            pcVar10 = pcVar10 + 2;
            (pCVar15->sample_info).name[1] = cVar2;
            pCVar15 = (CSfxSample *)((pCVar15->sample_info).name + 2);
          } while (cVar2 != '\0');
          (in_stack_0000000c->sample_info).streaming_flag = 1;
          pCVar7 = in_stack_0000000c->mp3_data;
          (in_stack_0000000c->sample_info).bit_depth = 0x10;
          (in_stack_0000000c->sample_info).num_channels = pCVar7->num_channels;
          iVar3 = in_stack_0000000c->mp3_data->sample_rate;
          (in_stack_0000000c->sample_info).sample_count = -1;
          (in_stack_0000000c->sample_info).sample_rate = iVar3;
          sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(in_stack_0000000c);
          in_stack_0000000c->taken = 0;
          in_stack_0000000c->ref_count = 0;
          iVar3 = (in_stack_0000000c->sample_info).sample_rate;
          in_stack_0000000c->buffer_id = 0;
          fVar17 = (float10)iVar3 * (float10)2f;
          in_stack_0000000c->stream_read_position = 0;
          in_stack_0000000c->stream_write_position = 0;
          dVar18 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,unaff_retaddr));
          in_stack_0000000c->streaming_buffer_size = (int)ROUND(fVar17);
          in_stack_0000000c->streaming_slot_index = SUB84 /* extract 2-byte value */(dVar18,0);
          iVar3 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005a6170(pCVar19);
joined_r0x005a94f6:
          if (iVar3 != 0) {
            sound_sndmain_cpp_CSfxSample_seek_FUN_005a65a0(pCStack00000010,0,0);
            goto LAB_005a9026;
          }
        }
      }
      else {
        pFVar8 = engine_dosio_c_getFile_FUN_00481a50
                           ("sound",&stack0xfffffc98,"rb");
        sfx_sample->file_handle = pFVar8;
        pCVar19 = sfx_sample;
        if (pFVar8 != (FILE *)0x0) {
          do {
            cVar2 = *pcVar13;
            (pCVar19->sample_info).name[0] = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar13[1];
            pcVar13 = pcVar13 + 2;
            (pCVar19->sample_info).name[1] = cVar2;
            pCVar19 = (CSfxSample *)((pCVar19->sample_info).name + 2);
          } while (cVar2 != '\0');
          lVar9 = crt_stdio_c_ftell_FUN_00601560(sfx_sample->file_handle);
          sfx_sample->file_offset = lVar9;
          iVar3 = sound_sndmain_cpp_parseWavFile_FUN_005a3fe0
                            (sfx_sample->file_handle,&sfx_sample->file_offset,sfx_sample);
          if (iVar3 != 0) {
            sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(unaff_retaddr);
            iVar3 = *(int *)(filename + 0x10c);
            filename[0x150] = '\0';
            filename[0x151] = '\0';
            filename[0x152] = '\0';
            filename[0x153] = '\0';
            fVar17 = (float10)iVar3 * (float10)2f;
            filename[0x154] = '\0';
            filename[0x155] = '\0';
            filename[0x156] = '\0';
            filename[0x157] = '\0';
            filename[0x158] = '\0';
            filename[0x159] = '\0';
            filename[0x15a] = '\0';
            filename[0x15b] = '\0';
            dVar18 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(filename,filename));
            pCVar19 = (CSfxSample *)((ulonglong)dVar18 >> 0x20);
            *(int *)(SUB84 /* extract 2-byte value */(dVar18,0) + 0x160) = (int)ROUND(fVar17);
            pCVar19->stream_read_position = 0;
            pCVar19->stream_write_position = 0;
            pCVar19->streaming_slot_index = (int)unaff_retaddr;
            iVar3 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005a6170(pCVar19);
            goto joined_r0x005a94f6;
          }
        }
      }
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(pCStack00000010);
      pCStack00000010 = (CSfxSample *)0x0;
    }
  }
LAB_005a9026:
  g_SfxSlots[(int)sfx_sample].sample = pCStack00000010;
  pCVar19 = g_SfxSlots[(int)sfx_sample].sample;
  if (pCVar19 == (CSfxSample *)0x0) {
    sound_sndmain_cpp_logSoundError_FUN_005adba0("startSfx - can't get sample %s\n");
  }
  else {
    pCVar19->ref_count = pCVar19->ref_count + 1;
    sound_sndmain_cpp_CSfxSlot_seek_FUN_005a8390(this_ptr);
    g_SfxSlots[(int)sfx_sample].is_active = 0;
    fVar1 = g_SfxSlots[(int)sfx_sample].options.current_volume;
    g_SfxSlots[(int)sfx_sample].fade_time_remaining = -1.0;
    g_SfxSlots[(int)sfx_sample].stop_after_fade = 0;
    g_SfxSlots[(int)sfx_sample].fade_target_volume = fVar1;
    pCVar4 = this_ptr;
    do {
      pCVar14 = &(pCVar4->options).position;
      pCVar4->channel_current_buffer_offsets[0] = -1;
      pCVar4 = (CSfxSlot *)pCVar14;
    } while (pCVar14 != (CVector3d *)&g_SfxSlots[(int)sfx_sample].options.position_format);
    iVar3 = g_SfxPlaybackStateCounter + 1;
    pCVar19 = g_SfxSlots[(int)sfx_sample].sample;
    g_SfxSlots[(int)sfx_sample].reference_distance =
         ((g_SfxSlots[(int)sfx_sample].sample)->sample_info).reference_distance;
    pCVar15 = g_SfxSlots[(int)sfx_sample].sample;
    g_SfxPlaybackStateCounter = iVar3;
    g_SfxSlots[(int)sfx_sample].min_distance = (pCVar19->sample_info).reference_volume_distance;
    g_SfxSlots[(int)sfx_sample].max_distance = (pCVar15->sample_info).max_distance;
    if (0xfffffe < iVar3) {
      g_SfxPlaybackStateCounter = 1;
    }
    iVar3 = g_SfxPlaybackStateCounter;
    pCVar19 = g_SfxSlots[(int)sfx_sample].sample;
    g_SfxSlots[(int)sfx_sample].playback_state = g_SfxPlaybackStateCounter;
    iVar5 = sound_sndmain_cpp_CSfxSample_pollStream_FUN_005a6730(pCVar19,999.0,999.0);
    if (iVar5 != 0) {
      sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr,0.0);
      uVar6 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar6 != 0) {
        iVar5 = (*g_CSoundDevicePtr->vtable->allocateSfx)
                          (g_CSoundDevicePtr,(g_SfxSlots[(int)sfx_sample].sample)->buffer_id);
        g_SfxSlots[(int)sfx_sample].hardware_buffer_handle = iVar5;
        if ((iVar5 == 0) ||
           (iVar5 = (*g_CSoundDevicePtr->vtable->startSfx)(g_CSoundDevicePtr,this_ptr), iVar5 == 0))
        goto LAB_005a9523;
      }
      sound_sndmain_cpp_unlockSound_FUN_005abdc0();
      return iVar3 << 6 | (uint)in_stack_00000014;
    }
  }
LAB_005a9523:
  sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(this_ptr);
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 0;
}
