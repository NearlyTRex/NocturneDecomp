// Name: sound_sndmain.cpp_startSfx_FUN_005a8e90
// Address: 005a8e90
// MANUAL RECONSTRUCTION
// Address Range: [[005a8e90, 005a9543]]
// Convention: __cdecl
// Signature: uint __cdecl sound_sndmain_cpp_startSfx_FUN_005a8e90(char *filename)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_startSfx_FUN_005a8e90(char *filename)

{
  CSfxSample *pCVar2;
  CMP3Decoder *pCVar3;
  float fVar4;
  int iVar3;
  int iVar6;
  uint uVar7;
  int iVar5;
  CMP3Decoder *this_ptr;
  CMP3Decoder *pCVar8;
  _FILE *p_Var9;
  long lVar10;
  CSfxSample *pCVar11;
  int iVar7;
  uint uVar12;
  CSfxSlot *this_ptr_00;
  CSfxSample *pCVar12;
  char local_390 [256];
  char local_290 [256];
  char local_190 [256];
  CSfxOptions local_90;
  CSfxSample *local_18;
  float fVar1;


  if (((filename == (char *)0x0) || (*filename == '\0')) ||
     (iVar3 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540(), iVar3 == 0)) {
    return 0;
  }
  sound_sndmain_cpp_CSfxOptions_reset_FUN_005a8830(&local_90);
  strcpy(local_390,filename);
  memcpy(&local_90, &g_SfxOptions[g_SfxLastSlot], sizeof(CSfxOptions));
  iVar7 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(local_90.channel_index);
  if (iVar7 == 0) {
    return 0;
  }
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x1f6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - must be locked!");
  }
  uVar12 = 0;
  while (uVar12 < 64 && g_SfxSlots[uVar12].playback_state != 0) {
    uVar12 = uVar12 + 1;
  }
  if (uVar12 >= 64) {
    uVar12 = 0xffffffff;
  }
  if ((int)uVar12 < 0) {
    sound_sndmain_cpp_unlockSound_FUN_005abdc0();
    return 0;
  }
  this_ptr_00 = g_SfxSlots + uVar12;
  memcpy(&this_ptr_00->options, &local_90, sizeof(CSfxOptions));
  iVar7 = engine_dosio_cpp_getFileSize_FUN_00481880("sound",local_390);
  if (iVar7 < 0x200001) {
    engine_dosio_cpp_splitPath_FUN_00481f20(local_390,(char *)0x0,(char *)0x0,(char *)0x0,local_190);
    iVar7 = _stricmp(local_190,"mp3");
    if ((iVar7 == 0) ||
       (iVar7 = _stricmp(local_190,".mp3"), iVar7 == 0))
    goto LAB_005a8fc7;
    local_18 = sound_sndmain_cpp_getSfxSample_FUN_005a4c80(local_390);
  }
  else {
LAB_005a8fc7:
    iVar7 = 0;
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
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x40);
    local_18 = (CSfxSample *)0x0;
LAB_005a900a:
    if (local_18 != (CSfxSample *)0x0) {
      engine_dosio_cpp_splitPath_FUN_00481f20(local_390,(char *)0x0,(char *)0x0,(char *)0x0,local_290)
      ;
      iVar7 = _stricmp(local_290,"mp3");
      if ((iVar7 == 0) ||
         (iVar7 = _stricmp(local_290,".mp3"), iVar7 == 0)) {
        iVar7 = engine_dosio_cpp_getFileSize_FUN_00481880("sound",local_390);
        if (0 < iVar7) {
          this_ptr = (CMP3Decoder *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                               (0x8630,"..\\sound\\sndmain.cpp",0x3c5);
          pCVar8 = (CMP3Decoder *)0x0;
          if (this_ptr != (CMP3Decoder *)0x0) {
            pCVar8 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(this_ptr);
          }
          local_18->mp3_data = pCVar8;
          if (pCVar8 == (CMP3Decoder *)0x0) {
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 0x3c6;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory.");
          }
          sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550(local_18->mp3_data,local_390);
          strcpy(local_18->sample_info.name,local_390);
          (local_18->sample_info).streaming_flag = 1;
          pCVar3 = local_18->mp3_data;
          (local_18->sample_info).bit_depth = 0x10;
          (local_18->sample_info).num_channels = pCVar3->num_channels;
          iVar7 = local_18->mp3_data->sample_rate;
          (local_18->sample_info).sample_count = -1;
          (local_18->sample_info).sample_rate = iVar7;
          sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(local_18);
          local_18->taken = 0;
          local_18->ref_count = 0;
          iVar7 = (local_18->sample_info).sample_rate;
          local_18->buffer_id = 0;
          fVar4 = (float)iVar7 * 2.0f;
          local_18->stream_read_position = 0;
          local_18->stream_write_position = 0;
          local_18->streaming_buffer_size = (int)ROUND(ROUND(fVar4));
          local_18->streaming_slot_index = uVar12;
          iVar7 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005a6170(local_18);
joined_r0x005a94f6:
          if (iVar7 != 0) {
            sound_sndmain_cpp_CSfxSample_seek_FUN_005a65a0(local_18,0,0);
            goto LAB_005a9026;
          }
        }
      }
      else {
        p_Var9 = engine_dosio_cpp_getFile_FUN_00481a50("sound",local_390,"rb");
        local_18->file_handle = p_Var9;
        if (p_Var9 != (_FILE *)0x0) {
          strcpy(local_18->sample_info.name,local_390);
          lVar10 = _ftell(local_18->file_handle);
          local_18->file_offset = lVar10;
          iVar7 = sound_sndmain_cpp_parseWavFile_FUN_005a3fe0
                            (local_18->file_handle,&local_18->file_offset,local_18);
          if (iVar7 != 0) {
            sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(local_18);
            iVar7 = (local_18->sample_info).sample_rate;
            local_18->taken = 0;
            fVar4 = (float)iVar7 * 2.0f;
            local_18->ref_count = 0;
            local_18->buffer_id = 0;
            local_18->streaming_buffer_size = (int)ROUND(ROUND(fVar4));
            local_18->stream_read_position = 0;
            local_18->stream_write_position = 0;
            local_18->streaming_slot_index = uVar12;
            iVar7 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005a6170(local_18);
            goto joined_r0x005a94f6;
          }
        }
      }
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(local_18);
      pCVar11 = (CSfxSample *)0x0;
      local_18 = pCVar11;
    }
  }
LAB_005a9026:
  g_SfxSlots[uVar12].sample = local_18;
  pCVar12 = g_SfxSlots[uVar12].sample;
  if (pCVar12 == (CSfxSample *)0x0) {
    sound_sndmain_cpp_logSoundError_FUN_005adba0("startSfx - can't get sample %s\n",local_390);
  }
  else {
    pCVar12->ref_count = pCVar12->ref_count + 1;
    sound_sndmain_cpp_CSfxSlot_seek_FUN_005a8390(this_ptr_00);
    g_SfxSlots[uVar12].is_active = 0;
    fVar1 = g_SfxSlots[uVar12].options.current_volume;
    g_SfxSlots[uVar12].fade_time_remaining = -1.0;
    g_SfxSlots[uVar12].stop_after_fade = 0.0;
    g_SfxSlots[uVar12].fade_target_volume = fVar1;
    for (iVar7 = 0; iVar7 < 8; iVar7 = iVar7 + 1) {
      this_ptr_00->channel_current_buffer_offsets[iVar7] = -1;
    }
    iVar7 = g_SfxPlaybackStateCounter + 1;
    pCVar12 = g_SfxSlots[uVar12].sample;
    g_SfxSlots[uVar12].reference_distance =
         ((g_SfxSlots[uVar12].sample)->sample_info).reference_distance;
    pCVar2 = g_SfxSlots[uVar12].sample;
    g_SfxPlaybackStateCounter = iVar7;
    g_SfxSlots[uVar12].min_distance = (pCVar12->sample_info).reference_volume_distance;
    g_SfxSlots[uVar12].max_distance = (pCVar2->sample_info).max_distance;
    if (0xfffffe < iVar7) {
      g_SfxPlaybackStateCounter = 1;
    }
    iVar7 = g_SfxPlaybackStateCounter;
    pCVar12 = g_SfxSlots[uVar12].sample;
    g_SfxSlots[uVar12].playback_state = g_SfxPlaybackStateCounter;
    iVar6 = sound_sndmain_cpp_CSfxSample_pollStream_FUN_005a6730(pCVar12,999.0,999.0);
    if (iVar6 != 0) {
      sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr_00,0.0);
      uVar7 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar7 != 0) {
        iVar5 = (*g_CSoundDevicePtr->vtable->allocateSfx)
                          (g_CSoundDevicePtr,(g_SfxSlots[uVar12].sample)->buffer_id);
        g_SfxSlots[uVar12].hardware_buffer_handle = iVar5;
        if ((iVar5 == 0) ||
           (iVar5 = (*g_CSoundDevicePtr->vtable->startSfx)(g_CSoundDevicePtr,this_ptr_00),
           iVar5 == 0)) goto LAB_005a9523;
      }
      sound_sndmain_cpp_unlockSound_FUN_005abdc0();
      return iVar7 << 6 | uVar12;
    }
  }
LAB_005a9523:
  sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(this_ptr_00);
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 0;
}
