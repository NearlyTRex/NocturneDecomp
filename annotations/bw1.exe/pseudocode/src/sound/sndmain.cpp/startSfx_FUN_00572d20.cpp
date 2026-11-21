// Name: sound_sndmain.cpp_startSfx_FUN_00572d20
// Address: 00572d20
// Address Range: [[00572d20, 0057348d]]
// Convention: __cdecl
// Signature: uint __cdecl sound_sndmain_cpp_startSfx_FUN_00572d20(char *filename)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_startSfx_FUN_00572d20(char *filename)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  CSfxSlot *pCVar5;
  uint uVar7;
  CMP3Decoder *this_ptr;
  CMP3Decoder *pCVar8;
  CSfxSlot *this_ptr_00;
  char *pcVar9;
  uint uVar10;
  CSfxOptions *pCVar11;
  CSfxSample *pCVar12;
  char *pcVar13;
  CSfxOptions *pCVar14;
  CSfxSample *pCVar15;
  byte bVar16;
  double dVar17;
  char local_388 [256];
  char local_288 [252];
  byte auStack_18c [4];
  char local_188 [256];
  CSfxOptions local_88;
  uint local_28;
  uint local_24;
  CInStreamFile *local_20;
  CSfxSample *local_1c;
  CSfxSample *local_18;
  CSfxSample *local_14;
  CVector3d *pCVar6;
  
  bVar16 = 0;
  if (((filename == (char *)0x0) || (*filename == '\0')) ||
     (iVar3 = sound_sndmain_cpp_isSoundBusy_FUN_00575550(), iVar3 == 0)) {
    return 0;
  }
  sound_sndmain_cpp_CSfxOptions_reset_FUN_005726e0(&local_88);
  pcVar13 = local_188;
  pcVar9 = filename;
  do {
    cVar2 = *pcVar9;
    *pcVar13 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar13[1] = cVar2;
    pcVar13 = pcVar13 + 2;
  } while (cVar2 != '\0');
  pCVar11 = g_CSfxOptions_ARRAY_02c78cf0 + g_SfxLastSlot;
  pCVar14 = &local_88;
  for (iVar3 = 0x18; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar14->channel_index = pCVar11->channel_index;
    pCVar11 = (CSfxOptions *)((int)pCVar11 + ((uint)bVar16 * -2 + 1) * 4);
    pCVar14 = (CSfxOptions *)((int)pCVar14 + ((uint)bVar16 * -2 + 1) * 4);
  }
  iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(local_88.channel_index);
  if (iVar3 == 0) {
    return 0;
  }
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 585;
    core_main_c_displayErrorAndQuit_FUN_005030e0("SfxSlot::kill - must be locked!");
  }
  uVar10 = 0;
  iVar4 = 0;
  iVar3 = g_CSfxSlot_ARRAY_02c745ec[0].playback_state;
  while (iVar3 != 0) {
    uVar10 = uVar10 + 1;
    if (0x46ff < iVar4 + 0x11c) {
      uVar10 = 0xffffffff;
      break;
    }
    iVar3 = *(int *)((int)g_CSfxSlot_ARRAY_02c745ec[1].distance_to_speakers + iVar4 + -0xc);
    iVar4 = iVar4 + 0x11c;
  }
  local_24 = uVar10;
  if ((int)uVar10 < 0) goto LAB_00572fa1;
  this_ptr_00 = g_CSfxSlot_ARRAY_02c745ec + uVar10;
  pCVar11 = &local_88;
  pCVar5 = this_ptr_00;
  for (iVar3 = 0x18; iVar3 != 0; iVar3 = iVar3 + -1) {
    (pCVar5->options).channel_index = pCVar11->channel_index;
    pCVar11 = (CSfxOptions *)((int)pCVar11 + ((uint)bVar16 * -2 + 1) * 4);
    pCVar5 = (CSfxSlot *)((int)pCVar5 + (uint)bVar16 * -8 + 4);
  }
  local_1c = (CSfxSample *)filename;
  pCVar12 = g_SfxSamples;
  iVar3 = 0;
  do {
    iVar4 = _stricmp((char *)pCVar12,(char *)local_1c);
    if (iVar4 == 0) {
      if (pCVar12 != (CSfxSample *)0x0) {
        g_CSfxSlot_ARRAY_02c745ec[uVar10].sample = pCVar12;
        goto LAB_00572e88;
      }
      break;
    }
    iVar3 = iVar3 + 1;
    pCVar12 = pCVar12 + 1;
  } while (iVar3 < 0x40);
  iVar3 = engine_dosio_cpp_getFileSize_FUN_00478fb0("sound",local_188);
  if (iVar3 < 0x200001) {
    engine_dosio_cpp_splitPath_FUN_00479580(local_188,(char *)0x0,(char *)0x0,(char *)0x0,local_288)
    ;
    iVar3 = _stricmp(local_288,"mp3");
    if ((iVar3 == 0) ||
       (iVar3 = _stricmp(local_288,".mp3"), iVar3 == 0))
    goto LAB_00573017;
    pCVar12 = sound_sndmain_cpp_getSfxSample_FUN_0056e830(local_188);
    g_CSfxSlot_ARRAY_02c745ec[uVar10].sample = pCVar12;
  }
  else {
LAB_00573017:
    local_28 = local_24;
    pcVar13 = local_188;
    iVar3 = 0;
    do {
      g_LastSampleAccessIndex = g_LastSampleAccessIndex + 1;
      if (0x3f < g_LastSampleAccessIndex) {
        g_LastSampleAccessIndex = 0;
      }
      if (((g_SfxSamples[g_LastSampleAccessIndex].taken == 0) &&
          (g_SfxSamples[g_LastSampleAccessIndex].ref_count == 0)) &&
         ((g_SfxSamples[g_LastSampleAccessIndex].is_user_sample == 0 &&
          (g_SfxSamples[g_LastSampleAccessIndex].locked_length == 0)))) {
        local_18 = g_SfxSamples + g_LastSampleAccessIndex;
        goto LAB_0057305f;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40);
    local_18 = (CSfxSample *)0x0;
LAB_0057305f:
    local_14 = local_18;
    if (local_18 == (CSfxSample *)0x0) {
      g_CSfxSlot_ARRAY_02c745ec[uVar10].sample = (CSfxSample *)0x0;
    }
    else {
      engine_dosio_cpp_splitPath_FUN_00479580(pcVar13,(char *)0x0,(char *)0x0,(char *)0x0,local_388)
      ;
      iVar3 = _stricmp(local_388,"mp3");
      if ((iVar3 == 0) ||
         (iVar3 = _stricmp(local_388,".mp3"), iVar3 == 0)) {
        iVar3 = engine_dosio_cpp_getFileSize_FUN_00478fb0("sound",pcVar13);
        if (0 < iVar3) {
          this_ptr = operator_new(0x8630);
          pCVar8 = (CMP3Decoder *)0x0;
          if (this_ptr != (CMP3Decoder *)0x0) {
            pCVar8 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_0052ae40(this_ptr);
          }
          local_14->mp3_data = pCVar8;
          if (pCVar8 == (CMP3Decoder *)0x0) {
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 1121;
            core_main_c_displayErrorAndQuit_FUN_005030e0("Out of memory.");
          }
          sound_mp3_cpp_CMP3Decoder_openFile_FUN_0052aea0(local_14->mp3_data,pcVar13);
          pCVar12 = local_14;
          pCVar15 = local_14;
          do {
            cVar2 = *pcVar13;
            (pCVar15->sample_info).name[0] = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar13[1];
            pcVar13 = pcVar13 + 2;
            (pCVar15->sample_info).name[1] = cVar2;
            pCVar15 = (CSfxSample *)((pCVar15->sample_info).name + 2);
          } while (cVar2 != '\0');
          (local_14->sample_info).streaming_flag = 1;
          pCVar8 = local_14->mp3_data;
          (local_14->sample_info).bit_depth = 0x10;
          (local_14->sample_info).num_channels = pCVar8->num_channels;
          iVar3 = local_14->mp3_data->sample_rate;
          (local_14->sample_info).sample_count = -1;
          (local_14->sample_info).sample_rate = iVar3;
          sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_0056e130(local_14);
          pCVar12->taken = 0;
          iVar3 = (pCVar12->sample_info).sample_rate;
          pCVar12->ref_count = 0;
          fVar1 = (float)iVar3 * 2.0f;
          pCVar12->buffer_id = 0;
          pCVar12->is_user_sample = 0;
          dVar17 = round((double)fVar1);
          pCVar12->streaming_buffer_size = (int)ROUND(dVar17);
          pCVar12->stream_read_position = 0;
          pCVar12->stream_write_position = 0;
          pCVar12->streaming_slot_index = local_88.dead;
          iVar3 = sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_00572400
                            (pCVar12,pCVar12->streaming_buffer_size);
          pCVar12->data_size_bytes = iVar3;
          iVar3 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0056feb0(pCVar12);
joined_r0x00573430:
          if (iVar3 != 0) {
            sound_sndmain_cpp_CSfxSample_seek_FUN_005702c0(local_18,0,0);
            g_CSfxSlot_ARRAY_02c745ec[uVar10].sample = local_18;
            goto LAB_00572e88;
          }
        }
      }
      else {
        local_20 = &local_18->file_stream;
        iVar3 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
                          (local_20,"sound",pcVar13,1);
        pCVar12 = local_18;
        pCVar15 = local_18;
        if (iVar3 != 0) {
          do {
            cVar2 = *pcVar13;
            (pCVar15->sample_info).name[0] = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar13[1];
            pcVar13 = pcVar13 + 2;
            (pCVar15->sample_info).name[1] = cVar2;
            pCVar15 = (CSfxSample *)((pCVar15->sample_info).name + 2);
          } while (cVar2 != '\0');
          iVar3 = support_trstream_cpp_CInStreamFile_tell_FUN_005a0d50(local_20);
          pCVar12->file_offset = iVar3;
          iVar3 = sound_sndmain_cpp_parseWavFile_FUN_0056db10
                            (&local_20->base,&pCVar12->file_offset,pCVar12);
          if (iVar3 != 0) {
            sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_0056e130(local_18);
            pCVar12 = local_18;
            local_18->taken = 0;
            iVar3 = (local_18->sample_info).sample_rate;
            local_18->ref_count = 0;
            fVar1 = (float)iVar3 * 2.0f;
            local_18->buffer_id = 0;
            local_18->is_user_sample = 0;
            dVar17 = round((double)fVar1);
            pCVar12->streaming_buffer_size = (int)ROUND(dVar17);
            pCVar12->stream_read_position = 0;
            pCVar12->stream_write_position = 0;
            pCVar12->streaming_slot_index = local_88.dead;
            iVar3 = sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_00572400
                              (pCVar12,pCVar12->streaming_buffer_size);
            local_1c->data_size_bytes = iVar3;
            iVar3 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0056feb0(local_1c);
            goto joined_r0x00573430;
          }
        }
      }
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00570020(local_18);
      g_CSfxSlot_ARRAY_02c745ec[uVar10].sample = (CSfxSample *)0x0;
    }
  }
LAB_00572e88:
  pCVar12 = g_CSfxSlot_ARRAY_02c745ec[uVar10].sample;
  if (pCVar12 == (CSfxSample *)0x0) {
    sound_sndmain_cpp_logSoundError_FUN_005773f0("startSfx - can't get sample %s\n",auStack_18c);
  }
  else {
    pCVar12->ref_count = pCVar12->ref_count + 1;
    sound_sndmain_cpp_CSfxSlot_seek_FUN_00572250(this_ptr_00);
    g_CSfxSlot_ARRAY_02c745ec[uVar10].is_active = 0;
    fVar1 = g_CSfxSlot_ARRAY_02c745ec[uVar10].options.current_volume;
    g_CSfxSlot_ARRAY_02c745ec[uVar10].fade_time_remaining = -1.0;
    g_CSfxSlot_ARRAY_02c745ec[uVar10].stop_after_fade = 0.0;
    g_CSfxSlot_ARRAY_02c745ec[uVar10].fade_target_volume = fVar1;
    pCVar5 = this_ptr_00;
    do {
      pCVar6 = &(pCVar5->options).position;
      pCVar5->channel_current_buffer_offsets[0] = -1;
      pCVar5 = (CSfxSlot *)pCVar6;
    } while (pCVar6 != (CVector3d *)&g_CSfxSlot_ARRAY_02c745ec[uVar10].options.position_format);
    pCVar12 = g_CSfxSlot_ARRAY_02c745ec[uVar10].sample;
    g_CSfxSlot_ARRAY_02c745ec[uVar10].reference_distance =
         ((g_CSfxSlot_ARRAY_02c745ec[uVar10].sample)->sample_info).reference_distance;
    pCVar15 = g_CSfxSlot_ARRAY_02c745ec[uVar10].sample;
    g_CSfxSlot_ARRAY_02c745ec[uVar10].min_distance =
         (pCVar12->sample_info).reference_volume_distance;
    g_CSfxSlot_ARRAY_02c745ec[uVar10].max_distance = (pCVar15->sample_info).max_distance;
    g_INT_006232d0 = g_INT_006232d0 + 1;
    g_CSfxSlot_ARRAY_02c745ec[uVar10].changed_flags = 0xffffffff;
    if (0xfffffe < g_INT_006232d0) {
      g_INT_006232d0 = 1;
    }
    iVar3 = g_INT_006232d0;
    pCVar12 = g_CSfxSlot_ARRAY_02c745ec[uVar10].sample;
    g_CSfxSlot_ARRAY_02c745ec[uVar10].playback_state = g_INT_006232d0;
    iVar4 = sound_sndmain_cpp_CSfxSample_pollStream_FUN_00570460(pCVar12,999.0,999.0);
    if (iVar4 != 0) {
      sound_sndmain_cpp_CSfxSlot_compute_FUN_00570f30(this_ptr_00,0.0);
      uVar7 = sound_sndmain_cpp_hasHardware3DSound_FUN_00575560();
      if ((int)uVar7 < 1) {
LAB_0057346a:
        sound_sndmain_cpp_unlockSound_FUN_00573e70();
        return iVar3 << 6 | local_28;
      }
      iVar4 = (*g_CSoundDevicePtr->vtable->allocateSfx)
                        (g_CSoundDevicePtr,(g_CSfxSlot_ARRAY_02c745ec[uVar10].sample)->buffer_id);
      g_CSfxSlot_ARRAY_02c745ec[uVar10].hardware_buffer_handle = iVar4;
      if (iVar4 != 0) goto LAB_0057346a;
    }
  }
  sound_sndmain_cpp_CSfxSlot_kill_FUN_00571d70(this_ptr_00);
LAB_00572fa1:
  sound_sndmain_cpp_unlockSound_FUN_00573e70();
  return 0;
}
