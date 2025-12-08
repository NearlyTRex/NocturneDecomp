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
  CSfxSample *pCVar3;
  int iVar4;
  CSfxSlot *pCVar5;
  int iVar6;
  uint uVar7;
  CMP3Decoder *pCVar8;
  int extraout_EAX;
  FILE *pFVar9;
  long lVar10;
  int extraout_EAX_00;
  int iVar11;
  CSfxSample *this_ptr;
  BADSPACEBASE *in_ESP;
  CSfxSlot *this_ptr_00;
  CSfxOptions *pCVar12;
  int *piVar13;
  char *pcVar14;
  char *pcVar15;
  CVector3d *pCVar16;
  byte bVar17;
  double dVar18;
  CSfxSample *unaff_retaddr;
  CSfxSample *in_stack_0000000c;
  CSfxSample *pCStack00000010;
  CSfxSample *in_stack_00000014;
  CSfxSample *pCVar19;
  char acStack_284 [4];
  char acStack_280 [24];
  char acStack_268 [240];
  char acStack_178 [4];
  char acStack_174 [4];
  char acStack_170 [228];
  CSfxOptions CStack_8c;
  
  bVar17 = 0;
  if ((filename == (char *)0x0) || (*filename == '\0')) {
    return 0;
  }
  iVar4 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
  if (iVar4 == 0) {
    return 0;
  }
  sound_sndmain_cpp_CSfxOptions_reset_FUN_005a8830(&CStack_8c);
  pcVar15 = &stack0xfffffc78;
  do {
    cVar2 = *filename;
    *pcVar15 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = filename[1];
    filename = filename + 2;
    pcVar15[1] = cVar2;
    pcVar15 = pcVar15 + 2;
  } while (cVar2 != '\0');
  pCVar12 = g_SfxOptions + g_SfxLastSlot;
  pCVar16 = &CStack_8c.position;
  for (iVar4 = 0x1c; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(int *)&pCVar16->x = pCVar12->channel_index;
    pCVar12 = (CSfxOptions *)((int)pCVar12 + ((uint)bVar17 * -2 + 1) * 4);
    pCVar16 = (CVector3d *)((int)pCVar16 + ((uint)bVar17 * -2 + 1) * 4);
  }
  iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(CStack_8c.position.x._0_4_);
  if (iVar4 == 0) {
    return 0;
  }
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x1f6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - must be locked!");
  }
  iVar11 = 0;
  iVar6 = 0;
  iVar4 = g_SfxSlots[0].playback_state;
  while (iVar4 != 0) {
    iVar11 = iVar11 + 1;
    if (0x49ff < iVar6 + 0x128) {
      iVar11 = -1;
      break;
    }
    iVar4 = *(int *)((int)g_SfxSlots[1].distance_to_speakers + iVar6 + -0xc);
    iVar6 = iVar6 + 0x128;
  }
  if (iVar11 < 0) {
    sound_sndmain_cpp_unlockSound_FUN_005abdc0();
    return 0;
  }
  this_ptr_00 = g_SfxSlots + iVar11;
  piVar13 = (int *)((int)&CStack_8c.position.y + 4);
  pCVar5 = this_ptr_00;
  for (iVar4 = 0x1c; iVar4 != 0; iVar4 = iVar4 + -1) {
    (pCVar5->options).channel_index = *piVar13;
    piVar13 = piVar13 + (uint)bVar17 * -2 + 1;
    pCVar5 = (CSfxSlot *)((int)pCVar5 + (uint)bVar17 * -8 + 4);
  }
  iVar4 = engine_dosio_c_getFileSize_FUN_00481880("sound",&stack0xfffffc84);
  if (iVar4 < 0x200001) {
    engine_dosio_c_splitPath_FUN_00481f20
              (&stack0xfffffc88,(char *)0x0,(char *)0x0,(char *)0x0,acStack_178);
    iVar4 = crt_string_c_stricmp_FUN_005fe7f0(acStack_174,"mp3");
    if (iVar4 == 0) goto LAB_005a8fc7;
    iVar4 = crt_string_c_stricmp_FUN_005fe7f0(acStack_170,".mp3");
    if (iVar4 == 0) goto LAB_005a8fc7;
    pCStack00000010 = sound_sndmain_cpp_getSfxSample_FUN_005a4c80(&stack0xfffffc94);
  }
  else {
LAB_005a8fc7:
    pcVar15 = &stack0xfffffc98;
    pcVar14 = &stack0xfffffc98;
    iVar4 = 0;
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
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x40);
    pCStack00000010 = (CSfxSample *)0x0;
LAB_005a900a:
    in_stack_00000014 = pCStack00000010;
    if (pCStack00000010 != (CSfxSample *)0x0) {
      engine_dosio_c_splitPath_FUN_00481f20
                (&stack0xfffffc98,(char *)0x0,(char *)0x0,(char *)0x0,acStack_268);
      iVar4 = crt_string_c_stricmp_FUN_005fe7f0(acStack_284,"mp3");
      if ((iVar4 == 0) ||
         (iVar4 = crt_string_c_stricmp_FUN_005fe7f0(acStack_280,".mp3"), iVar4 == 0)) {
        iVar4 = engine_dosio_c_getFileSize_FUN_00481880("sound",&stack0xfffffc98);
        if (0 < iVar4) {
          pCVar8 = (CMP3Decoder *)
                   shape_memdbg_cpp_debugAlloc_FUN_0050f1b0
                             (0x8630,"..\\sound\\sndmain.cpp",0x3c5);
          if (pCVar8 != (CMP3Decoder *)0x0) {
            pCVar8 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(pCVar8);
          }
          in_stack_0000000c->mp3_data = pCVar8;
          if (pCVar8 == (CMP3Decoder *)0x0) {
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 0x3c6;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory.");
          }
          sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550
                    (in_stack_0000000c->mp3_data,&stack0xfffffc98);
          pCVar19 = pCStack00000010;
          do {
            cVar2 = *pcVar15;
            (pCVar19->sample_info).name[0] = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar15[1];
            pcVar15 = pcVar15 + 2;
            (pCVar19->sample_info).name[1] = cVar2;
            pCVar19 = (CSfxSample *)((pCVar19->sample_info).name + 2);
          } while (cVar2 != '\0');
          (pCStack00000010->sample_info).streaming_flag = 1;
          pCVar8 = pCStack00000010->mp3_data;
          (pCStack00000010->sample_info).bit_depth = 0x10;
          (pCStack00000010->sample_info).num_channels = pCVar8->num_channels;
          iVar4 = pCStack00000010->mp3_data->sample_rate;
          (pCStack00000010->sample_info).sample_count = -1;
          (pCStack00000010->sample_info).sample_rate = iVar4;
          sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(pCStack00000010);
          pCStack00000010->taken = 0;
          pCStack00000010->ref_count = 0;
          iVar4 = (pCStack00000010->sample_info).sample_rate;
          pCStack00000010->buffer_id = 0;
          fVar1 = (float)iVar4 * 2f;
          pCStack00000010->stream_read_position = 0;
          pCStack00000010->stream_write_position = 0;
          pCVar19 = (CSfxSample *)0x5a93a9;
          dVar18 = crt_math_c_round_FUN_005fe6b0((double)fVar1);
          pCStack00000010->streaming_buffer_size = (int)ROUND(dVar18);
          pCStack00000010->streaming_slot_index = extraout_EAX;
          iVar4 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005a6170(pCVar19);
joined_r0x005a94f6:
          if (iVar4 != 0) {
            sound_sndmain_cpp_CSfxSample_seek_FUN_005a65a0(pCStack00000010,0,0);
            goto LAB_005a9026;
          }
        }
      }
      else {
        pFVar9 = engine_dosio_c_getFile_FUN_00481a50
                           ("sound",&stack0xfffffc98,"rb");
        unaff_retaddr->file_handle = pFVar9;
        pCVar19 = unaff_retaddr;
        if (pFVar9 != (FILE *)0x0) {
          do {
            cVar2 = *pcVar14;
            (pCVar19->sample_info).name[0] = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar14[1];
            pcVar14 = pcVar14 + 2;
            (pCVar19->sample_info).name[1] = cVar2;
            pCVar19 = (CSfxSample *)((pCVar19->sample_info).name + 2);
          } while (cVar2 != '\0');
          lVar10 = crt_stdio_c_ftell_FUN_00601560(unaff_retaddr->file_handle);
          unaff_retaddr->file_offset = lVar10;
          iVar4 = sound_sndmain_cpp_parseWavFile_FUN_005a3fe0
                            (unaff_retaddr->file_handle,&unaff_retaddr->file_offset,unaff_retaddr);
          if (iVar4 != 0) {
            sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(in_stack_0000000c);
            iVar4 = (in_stack_0000000c->sample_info).sample_rate;
            in_stack_0000000c->taken = 0;
            fVar1 = (float)iVar4 * 2f;
            in_stack_0000000c->ref_count = 0;
            in_stack_0000000c->buffer_id = 0;
            dVar18 = crt_math_c_round_FUN_005fe6b0((double)fVar1);
            *(int *)(extraout_EAX_00 + 0x160) = (int)ROUND(dVar18);
            this_ptr->stream_read_position = 0;
            this_ptr->stream_write_position = 0;
            this_ptr->streaming_slot_index = (int)unaff_retaddr;
            iVar4 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005a6170(this_ptr);
            goto joined_r0x005a94f6;
          }
        }
      }
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(pCStack00000010);
      pCStack00000010 = (CSfxSample *)0x0;
    }
  }
LAB_005a9026:
  g_SfxSlots[iVar11].sample = pCStack00000010;
  pCVar19 = g_SfxSlots[iVar11].sample;
  if (pCVar19 == (CSfxSample *)0x0) {
    sound_sndmain_cpp_logSoundError_FUN_005adba0("startSfx - can't get sample %s\n");
  }
  else {
    pCVar19->ref_count = pCVar19->ref_count + 1;
    sound_sndmain_cpp_CSfxSlot_seek_FUN_005a8390(this_ptr_00);
    g_SfxSlots[iVar11].is_active = 0;
    fVar1 = g_SfxSlots[iVar11].options.current_volume;
    g_SfxSlots[iVar11].fade_time_remaining = -1.0;
    g_SfxSlots[iVar11].stop_after_fade = 0;
    g_SfxSlots[iVar11].fade_target_volume = fVar1;
    pCVar5 = this_ptr_00;
    do {
      pCVar16 = &(pCVar5->options).position;
      pCVar5->channel_current_buffer_offsets[0] = -1;
      pCVar5 = (CSfxSlot *)pCVar16;
    } while (pCVar16 != (CVector3d *)&g_SfxSlots[iVar11].options.position_format);
    iVar4 = g_SfxPlaybackStateCounter + 1;
    pCVar19 = g_SfxSlots[iVar11].sample;
    g_SfxSlots[iVar11].reference_distance =
         ((g_SfxSlots[iVar11].sample)->sample_info).reference_distance;
    pCVar3 = g_SfxSlots[iVar11].sample;
    g_SfxPlaybackStateCounter = iVar4;
    g_SfxSlots[iVar11].min_distance = (pCVar19->sample_info).reference_volume_distance;
    g_SfxSlots[iVar11].max_distance = (pCVar3->sample_info).max_distance;
    if (0xfffffe < iVar4) {
      g_SfxPlaybackStateCounter = 1;
    }
    iVar4 = g_SfxPlaybackStateCounter;
    pCVar19 = g_SfxSlots[iVar11].sample;
    g_SfxSlots[iVar11].playback_state = g_SfxPlaybackStateCounter;
    iVar6 = sound_sndmain_cpp_CSfxSample_pollStream_FUN_005a6730(pCVar19,999.0,999.0);
    if (iVar6 != 0) {
      sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr_00,0.0);
      uVar7 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar7 != 0) {
        iVar6 = (*g_CSoundDevicePtr->vtable->allocateSfx)
                          (g_CSoundDevicePtr,(g_SfxSlots[iVar11].sample)->buffer_id);
        g_SfxSlots[iVar11].hardware_buffer_handle = iVar6;
        if ((iVar6 == 0) ||
           (iVar6 = (*g_CSoundDevicePtr->vtable->startSfx)(g_CSoundDevicePtr,this_ptr_00),
           iVar6 == 0)) goto LAB_005a9523;
      }
      sound_sndmain_cpp_unlockSound_FUN_005abdc0();
      return iVar4 << 6 | (uint)in_stack_00000014;
    }
  }
LAB_005a9523:
  sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(this_ptr_00);
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 0;
}
