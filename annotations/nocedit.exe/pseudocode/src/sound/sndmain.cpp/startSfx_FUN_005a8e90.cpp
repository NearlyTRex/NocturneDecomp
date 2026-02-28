// Name: sound_sndmain.cpp_startSfx_FUN_005a8e90
// Address: 005a8e90
// Address Range: [[005a8e90, 005a9543]]
// Convention: __cdecl
// Signature: uint __cdecl sound_sndmain_cpp_startSfx_FUN_005a8e90(char *filename)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

uint __cdecl sound_sndmain_cpp_startSfx_FUN_005a8e90(char *filename)

{
  float fVar1;
  char cVar2;
  int iVar3;
  CSfxSlot *pCVar4;
  int iVar6;
  uint uVar7;
  CMP3Decoder *this_ptr;
  CMP3Decoder *pCVar8;
  _FILE *p_Var9;
  long lVar10;
  CSfxSample *pCVar11;
  uint uVar12;
  CSfxSlot *this_ptr_00;
  CSfxOptions *pCVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  CSfxOptions *pCVar17;
  CSfxSample *pCVar18;
  byte bVar19;
  char local_390 [256];
  char local_290 [256];
  char local_190 [256];
  CSfxOptions local_90;
  uint local_20;
  uint local_1c;
  CSfxSample *local_18;
  CSfxSample *local_14;
  CVector3d *pCVar5;
  
  bVar19 = 0;
  pcVar16 = local_390;
  pcVar14 = local_390;
  pcVar15 = local_390;
  if (((filename == (char *)0x0) || (*filename == '\0')) ||
     (iVar3 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540(), iVar3 == 0)) {
    return 0;
  }
  sound_sndmain_cpp_CSfxOptions_reset_FUN_005a8830(&local_90);
  do {
    cVar2 = *filename;
    *pcVar16 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = filename[1];
    filename = filename + 2;
    pcVar16[1] = cVar2;
    pcVar16 = pcVar16 + 2;
  } while (cVar2 != '\0');
  pCVar13 = g_SfxOptions + g_SfxLastSlot;
  pCVar17 = &local_90;
  for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar17->channel_index = pCVar13->channel_index;
    pCVar13 = (CSfxOptions *)((int)pCVar13 + ((uint)bVar19 * -2 + 1) * 4);
    pCVar17 = (CSfxOptions *)((int)pCVar17 + ((uint)bVar19 * -2 + 1) * 4);
  }
  iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(local_90.channel_index);
  if (iVar3 == 0) {
    return 0;
  }
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x1f6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - must be locked!");
  }
  uVar12 = 0;
  iVar6 = 0;
  iVar3 = g_SfxSlots[0].playback_state;
  while (iVar3 != 0) {
    uVar12 = uVar12 + 1;
    if (0x49ff < iVar6 + 0x128) {
      uVar12 = 0xffffffff;
      break;
    }
    iVar3 = *(int *)((int)g_SfxSlots[1].distance_to_speakers + iVar6 + -0xc);
    iVar6 = iVar6 + 0x128;
  }
  local_1c = uVar12;
  if ((int)uVar12 < 0) {
    sound_sndmain_cpp_unlockSound_FUN_005abdc0();
    return 0;
  }
  this_ptr_00 = g_SfxSlots + uVar12;
  pCVar13 = &local_90;
  pCVar4 = this_ptr_00;
  for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
    (pCVar4->options).channel_index = pCVar13->channel_index;
    pCVar13 = (CSfxOptions *)((int)pCVar13 + ((uint)bVar19 * -2 + 1) * 4);
    pCVar4 = (CSfxSlot *)((int)pCVar4 + (uint)bVar19 * -8 + 4);
  }
  iVar3 = engine_dosio_c_getFileSize_FUN_00481880("sound",local_390);
  if (iVar3 < 0x200001) {
    engine_dosio_c_splitPath_FUN_00481f20(local_390,(char *)0x0,(char *)0x0,(char *)0x0,local_190);
    iVar3 = _stricmp(local_190,"mp3");
    if ((iVar3 == 0) ||
       (iVar3 = _stricmp(local_190,".mp3"), iVar3 == 0))
    goto LAB_005a8fc7;
    pCVar11 = sound_sndmain_cpp_getSfxSample_FUN_005a4c80(local_390);
  }
  else {
LAB_005a8fc7:
    iVar3 = 0;
    local_20 = local_1c;
    do {
      g_LastSampleAccessIndex = g_LastSampleAccessIndex + 1;
      if (0x3f < g_LastSampleAccessIndex) {
        g_LastSampleAccessIndex = 0;
      }
      if ((g_SfxSamples[g_LastSampleAccessIndex].taken == 0) &&
         (g_SfxSamples[g_LastSampleAccessIndex].ref_count == 0)) {
        local_18 = g_SfxSamples + g_LastSampleAccessIndex;
        goto LAB_005a900a;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40);
    local_18 = (CSfxSample *)0x0;
LAB_005a900a:
    local_14 = local_18;
    pCVar11 = local_18;
    if (local_18 != (CSfxSample *)0x0) {
      engine_dosio_c_splitPath_FUN_00481f20(local_390,(char *)0x0,(char *)0x0,(char *)0x0,local_290)
      ;
      iVar3 = _stricmp(local_290,"mp3");
      if ((iVar3 == 0) ||
         (iVar3 = _stricmp(local_290,".mp3"), iVar3 == 0)) {
        iVar3 = engine_dosio_c_getFileSize_FUN_00481880("sound",local_390);
        if (0 < iVar3) {
          this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0
                               (0x8630,"..\\sound\\sndmain.cpp",0x3c5);
          pCVar8 = (CMP3Decoder *)0x0;
          if (this_ptr != (CMP3Decoder *)0x0) {
            pCVar8 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(this_ptr);
          }
          local_14->mp3_data = pCVar8;
          if (pCVar8 == (CMP3Decoder *)0x0) {
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 0x3c6;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory.");
          }
          sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550(local_14->mp3_data,local_390);
          pCVar11 = local_14;
          pCVar18 = local_14;
          do {
            cVar2 = *pcVar14;
            (pCVar18->sample_info).name[0] = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar14[1];
            pcVar14 = pcVar14 + 2;
            (pCVar18->sample_info).name[1] = cVar2;
            pCVar18 = (CSfxSample *)((pCVar18->sample_info).name + 2);
          } while (cVar2 != '\0');
          (local_14->sample_info).streaming_flag = 1;
          pCVar8 = local_14->mp3_data;
          (local_14->sample_info).bit_depth = 0x10;
          (local_14->sample_info).num_channels = pCVar8->num_channels;
          iVar3 = local_14->mp3_data->sample_rate;
          (local_14->sample_info).sample_count = -1;
          (local_14->sample_info).sample_rate = iVar3;
          sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(local_14);
          pCVar11->taken = 0;
          pCVar11->ref_count = 0;
          iVar3 = (pCVar11->sample_info).sample_rate;
          pCVar11->buffer_id = 0;
          fVar1 = (float)iVar3 * 2.0f;
          pCVar11->stream_read_position = 0;
          pCVar11->stream_write_position = 0;
          pCVar11->streaming_buffer_size = (int)ROUND(ROUND(fVar1));
          pCVar11->streaming_slot_index = local_20;
          iVar3 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005a6170(pCVar11);
          pCVar11 = local_14;
joined_r0x005a94f6:
          local_14 = pCVar11;
          if (iVar3 != 0) {
            sound_sndmain_cpp_CSfxSample_seek_FUN_005a65a0(pCVar11,0,0);
            goto LAB_005a9026;
          }
        }
      }
      else {
        p_Var9 = engine_dosio_c_getFile_FUN_00481a50("sound",local_390,"rb");
        pCVar11 = local_18;
        local_18->file_handle = p_Var9;
        pCVar18 = local_18;
        if (p_Var9 != (_FILE *)0x0) {
          do {
            cVar2 = *pcVar15;
            (pCVar18->sample_info).name[0] = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar15[1];
            pcVar15 = pcVar15 + 2;
            (pCVar18->sample_info).name[1] = cVar2;
            pCVar18 = (CSfxSample *)((pCVar18->sample_info).name + 2);
          } while (cVar2 != '\0');
          lVar10 = _ftell(local_18->file_handle);
          pCVar11->file_offset = lVar10;
          iVar3 = sound_sndmain_cpp_parseWavFile_FUN_005a3fe0
                            (pCVar11->file_handle,&pCVar11->file_offset,pCVar11);
          if (iVar3 != 0) {
            sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(local_18);
            iVar3 = (local_18->sample_info).sample_rate;
            local_18->taken = 0;
            fVar1 = (float)iVar3 * 2.0f;
            local_18->ref_count = 0;
            local_18->buffer_id = 0;
            local_18->streaming_buffer_size = (int)ROUND(ROUND(fVar1));
            local_18->stream_read_position = 0;
            local_18->stream_write_position = 0;
            local_18->streaming_slot_index = local_20;
            iVar3 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005a6170(local_18);
            pCVar11 = local_14;
            goto joined_r0x005a94f6;
          }
        }
      }
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(local_14);
      pCVar11 = (CSfxSample *)0x0;
    }
  }
LAB_005a9026:
  g_SfxSlots[uVar12].sample = pCVar11;
  pCVar11 = g_SfxSlots[uVar12].sample;
  if (pCVar11 == (CSfxSample *)0x0) {
    sound_sndmain_cpp_logSoundError_FUN_005adba0("startSfx - can't get sample %s\n",local_390);
  }
  else {
    pCVar11->ref_count = pCVar11->ref_count + 1;
    sound_sndmain_cpp_CSfxSlot_seek_FUN_005a8390(this_ptr_00);
    g_SfxSlots[uVar12].is_active = 0;
    fVar1 = g_SfxSlots[uVar12].options.current_volume;
    g_SfxSlots[uVar12].fade_time_remaining = -1.0;
    g_SfxSlots[uVar12].stop_after_fade = 0.0;
    g_SfxSlots[uVar12].fade_target_volume = fVar1;
    pCVar4 = this_ptr_00;
    do {
      pCVar5 = &(pCVar4->options).position;
      pCVar4->channel_current_buffer_offsets[0] = -1;
      pCVar4 = (CSfxSlot *)pCVar5;
    } while (pCVar5 != (CVector3d *)&g_SfxSlots[uVar12].options.position_format);
    iVar3 = g_SfxPlaybackStateCounter + 1;
    pCVar11 = g_SfxSlots[uVar12].sample;
    g_SfxSlots[uVar12].reference_distance =
         ((g_SfxSlots[uVar12].sample)->sample_info).reference_distance;
    pCVar18 = g_SfxSlots[uVar12].sample;
    g_SfxPlaybackStateCounter = iVar3;
    g_SfxSlots[uVar12].min_distance = (pCVar11->sample_info).reference_volume_distance;
    g_SfxSlots[uVar12].max_distance = (pCVar18->sample_info).max_distance;
    if (0xfffffe < iVar3) {
      g_SfxPlaybackStateCounter = 1;
    }
    iVar3 = g_SfxPlaybackStateCounter;
    pCVar11 = g_SfxSlots[uVar12].sample;
    g_SfxSlots[uVar12].playback_state = g_SfxPlaybackStateCounter;
    iVar6 = sound_sndmain_cpp_CSfxSample_pollStream_FUN_005a6730(pCVar11,999.0,999.0);
    if (iVar6 != 0) {
      sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr_00,0.0);
      uVar7 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar7 != 0) {
        iVar6 = (*g_CSoundDevicePtr->vtable->allocateSfx)
                          (g_CSoundDevicePtr,(g_SfxSlots[uVar12].sample)->buffer_id);
        g_SfxSlots[uVar12].hardware_buffer_handle = iVar6;
        if ((iVar6 == 0) ||
           (iVar6 = (*g_CSoundDevicePtr->vtable->startSfx)(g_CSoundDevicePtr,this_ptr_00),
           iVar6 == 0)) goto LAB_005a9523;
      }
      sound_sndmain_cpp_unlockSound_FUN_005abdc0();
      return iVar3 << 6 | local_1c;
    }
  }
LAB_005a9523:
  sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(this_ptr_00);
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 0;
}
