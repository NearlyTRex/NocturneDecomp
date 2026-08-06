// Name: sound_sndmain.cpp_startSfx_FUN_005265a0
// Address: 005265a0
// Address Range: [[005265a0, 00526c4e]]
// Convention: __cdecl
// Signature: uint __cdecl sound_sndmain_cpp_startSfx_FUN_005265a0(char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl sound_sndmain_cpp_startSfx_FUN_005265a0(char *filename)

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
  byte bVar18;
  double dVar19;
  CSfxSample *pCVar20;
  char local_38c [256];
  char local_28c [256];
  char local_18c [256];
  CSfxOptions local_8c;
  uint local_20;
  uint local_1c;
  CSfxSample *local_18;
  CSfxSample *local_14;
  CVector3d *pCVar5;
  
  bVar18 = 0;
  pcVar16 = local_38c;
  pcVar14 = local_38c;
  pcVar15 = local_38c;
  if (((filename == (char *)0x0) || (*filename == '\0')) ||
     (iVar3 = sound_sndmain_cpp_isSoundBusy_FUN_00528490(), iVar3 == 0)) {
    return 0;
  }
  sound_sndmain_cpp_CSfxOptions_reset_FUN_00525eb0(&local_8c);
  do {
    cVar2 = *filename;
    *pcVar16 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = filename[1];
    filename = filename + 2;
    pcVar16[1] = cVar2;
    pcVar16 = pcVar16 + 2;
  } while (cVar2 != '\0');
  pCVar13 = g_CSfxOptions_ARRAY_02dc1b78 + _DAT_02dc1b74;
  pCVar17 = &local_8c;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar17->channel_index = pCVar13->channel_index;
    pCVar13 = (CSfxOptions *)((int)pCVar13 + ((uint)bVar18 * -2 + 1) * 4);
    pCVar17 = (CSfxOptions *)((int)pCVar17 + ((uint)bVar18 * -2 + 1) * 4);
  }
  iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(local_8c.channel_index);
  if (iVar3 == 0) {
    return 0;
  }
  sound_sndmain_cpp_lockSound_FUN_00528800();
  if (_DAT_02dc84bc < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 502;
    core_main_c_displayErrorAndQuit_FUN_004c8440("SfxSlot::kill - must be locked!");
  }
  uVar12 = 0;
  iVar6 = 0;
  iVar3 = g_CSfxSlot_ARRAY_02dbd374[0].playback_state;
  while (iVar3 != 0) {
    uVar12 = uVar12 + 1;
    if (0x47ff < iVar6 + 0x120) {
      uVar12 = 0xffffffff;
      break;
    }
    iVar3 = *(int *)((int)g_CSfxSlot_ARRAY_02dbd374[1].distance_to_speakers + iVar6 + -0xc);
    iVar6 = iVar6 + 0x120;
  }
  local_1c = uVar12;
  if ((int)uVar12 < 0) {
    sound_sndmain_cpp_unlockSound_FUN_00528890();
    return 0;
  }
  this_ptr_00 = g_CSfxSlot_ARRAY_02dbd374 + uVar12;
  pCVar13 = &local_8c;
  pCVar4 = this_ptr_00;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    (pCVar4->options).channel_index = pCVar13->channel_index;
    pCVar13 = (CSfxOptions *)((int)pCVar13 + ((uint)bVar18 * -2 + 1) * 4);
    pCVar4 = (CSfxSlot *)((int)pCVar4 + (uint)bVar18 * -8 + 4);
  }
  iVar3 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound",local_38c);
  if (iVar3 < 0x200001) {
    splitpath(local_38c,(char *)0x0,(char *)0x0,(char *)0x0,local_18c);
    iVar3 = _stricmp(local_18c,"mp3");
    if ((iVar3 == 0) ||
       (iVar3 = _stricmp(local_18c,".mp3"), iVar3 == 0))
    goto LAB_005266dc;
    pCVar11 = sound_sndmain_cpp_getSfxSample_FUN_00522480(local_38c);
  }
  else {
LAB_005266dc:
    iVar3 = 0;
    local_20 = local_1c;
    do {
      _DAT_02dc1ed8 = _DAT_02dc1ed8 + 1;
      if (0x3f < _DAT_02dc1ed8) {
        _DAT_02dc1ed8 = 0;
      }
      if ((g_CSfxSample_ARRAY_02dc1edc[_DAT_02dc1ed8].taken == 0) &&
         (g_CSfxSample_ARRAY_02dc1edc[_DAT_02dc1ed8].ref_count == 0)) {
        local_18 = g_CSfxSample_ARRAY_02dc1edc + _DAT_02dc1ed8;
        goto LAB_0052671f;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40);
    local_18 = (CSfxSample *)0x0;
LAB_0052671f:
    local_14 = local_18;
    pCVar11 = local_18;
    if (local_18 != (CSfxSample *)0x0) {
      splitpath(local_38c,(char *)0x0,(char *)0x0,(char *)0x0,local_28c);
      iVar3 = _stricmp(local_28c,"mp3");
      if ((iVar3 == 0) ||
         (iVar3 = _stricmp(local_28c,".mp3"), iVar3 == 0)) {
        iVar3 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound",local_38c);
        if (0 < iVar3) {
          this_ptr = operator_new(0x8630);
          pCVar8 = (CMP3Decoder *)0x0;
          if (this_ptr != (CMP3Decoder *)0x0) {
            pCVar8 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_004e7d90(this_ptr);
          }
          local_14->mp3_data = pCVar8;
          if (pCVar8 == (CMP3Decoder *)0x0) {
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 968;
            core_main_c_displayErrorAndQuit_FUN_004c8440("Out of memory.");
          }
          sound_mp3_cpp_CMP3Decoder_openFile_FUN_004e7df0(local_14->mp3_data,local_38c);
          pCVar11 = local_14;
          pCVar20 = local_14;
          do {
            cVar2 = *pcVar14;
            (pCVar20->sample_info).name[0] = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar14[1];
            pcVar14 = pcVar14 + 2;
            (pCVar20->sample_info).name[1] = cVar2;
            pCVar20 = (CSfxSample *)((pCVar20->sample_info).name + 2);
          } while (cVar2 != '\0');
          (local_14->sample_info).streaming_flag = 1;
          pCVar8 = local_14->mp3_data;
          (local_14->sample_info).bit_depth = 0x10;
          (local_14->sample_info).num_channels = pCVar8->num_channels;
          iVar3 = local_14->mp3_data->sample_rate;
          (local_14->sample_info).sample_count = -1;
          (local_14->sample_info).sample_rate = iVar3;
          sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00521e10(local_14);
          uVar7 = local_20;
          pCVar11->taken = 0;
          pCVar11->ref_count = 0;
          iVar3 = (pCVar11->sample_info).sample_rate;
          pCVar11->buffer_id = 0;
          fVar1 = (float)iVar3 * 2.0f;
          pCVar11->stream_read_position = 0;
          pCVar11->stream_write_position = 0;
          pCVar20 = (CSfxSample *)0x526ab4;
          dVar19 = round((double)fVar1);
          pCVar11->streaming_buffer_size = (int)ROUND(dVar19);
          pCVar11->streaming_slot_index = uVar7;
          iVar3 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_00523910(pCVar20);
          pCVar11 = local_18;
joined_r0x00526c01:
          local_18 = pCVar11;
          if (iVar3 != 0) {
            sound_sndmain_cpp_CSfxSample_seek_FUN_00523d10(pCVar11,0,0);
            goto LAB_0052673b;
          }
        }
      }
      else {
        p_Var9 = engine_dosio_cpp_getFile_FUN_00456a60("sound",local_38c,"rb");
        pCVar11 = local_18;
        local_18->file_handle = p_Var9;
        pCVar20 = local_18;
        if (p_Var9 != (_FILE *)0x0) {
          do {
            cVar2 = *pcVar15;
            (pCVar20->sample_info).name[0] = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar15[1];
            pcVar15 = pcVar15 + 2;
            (pCVar20->sample_info).name[1] = cVar2;
            pCVar20 = (CSfxSample *)((pCVar20->sample_info).name + 2);
          } while (cVar2 != '\0');
          lVar10 = _ftell(local_18->file_handle);
          pCVar11->file_offset = lVar10;
          iVar3 = sound_sndmain_cpp_parseWavFile_FUN_00521830
                            (pCVar11->file_handle,&pCVar11->file_offset,pCVar11);
          if (iVar3 != 0) {
            sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00521e10(local_18);
            pCVar11 = local_18;
            iVar3 = (local_18->sample_info).sample_rate;
            local_18->taken = 0;
            fVar1 = (float)iVar3 * 2.0f;
            local_18->ref_count = 0;
            local_18->buffer_id = 0;
            dVar19 = round((double)fVar1);
            pCVar11->streaming_buffer_size = (int)ROUND(dVar19);
            pCVar11->stream_read_position = 0;
            pCVar11->stream_write_position = 0;
            pCVar11->streaming_slot_index = local_8c.trigger_id;
            iVar3 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_00523910(pCVar11);
            pCVar11 = local_18;
            goto joined_r0x00526c01;
          }
        }
      }
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(local_18);
      pCVar11 = (CSfxSample *)0x0;
    }
  }
LAB_0052673b:
  g_CSfxSlot_ARRAY_02dbd374[uVar12].sample = pCVar11;
  pCVar11 = g_CSfxSlot_ARRAY_02dbd374[uVar12].sample;
  if (pCVar11 == (CSfxSample *)0x0) {
    sound_sndmain_cpp_FUN_00529980("startSfx - can't get sample %s\n",&stack0xfffffc70);
  }
  else {
    pCVar11->ref_count = pCVar11->ref_count + 1;
    sound_sndmain_cpp_CSfxSlot_seek_FUN_00525a80(this_ptr_00);
    g_CSfxSlot_ARRAY_02dbd374[uVar12].is_active = 0;
    fVar1 = g_CSfxSlot_ARRAY_02dbd374[uVar12].options.current_volume;
    g_CSfxSlot_ARRAY_02dbd374[uVar12].fade_time_remaining = -1.0;
    g_CSfxSlot_ARRAY_02dbd374[uVar12].stop_after_fade = 0.0;
    g_CSfxSlot_ARRAY_02dbd374[uVar12].fade_target_volume = fVar1;
    pCVar4 = this_ptr_00;
    do {
      pCVar5 = &(pCVar4->options).position;
      pCVar4->channel_current_buffer_offsets[0] = -1;
      pCVar4 = (CSfxSlot *)pCVar5;
    } while (pCVar5 != (CVector3d *)&g_CSfxSlot_ARRAY_02dbd374[uVar12].options.position_format);
    iVar3 = g_INT_005bea40 + 1;
    pCVar11 = g_CSfxSlot_ARRAY_02dbd374[uVar12].sample;
    g_CSfxSlot_ARRAY_02dbd374[uVar12].reference_distance =
         ((g_CSfxSlot_ARRAY_02dbd374[uVar12].sample)->sample_info).reference_distance;
    pCVar20 = g_CSfxSlot_ARRAY_02dbd374[uVar12].sample;
    g_INT_005bea40 = iVar3;
    g_CSfxSlot_ARRAY_02dbd374[uVar12].min_distance =
         (pCVar11->sample_info).reference_volume_distance;
    g_CSfxSlot_ARRAY_02dbd374[uVar12].max_distance = (pCVar20->sample_info).max_distance;
    if (0xfffffe < iVar3) {
      g_INT_005bea40 = 1;
    }
    iVar3 = g_INT_005bea40;
    pCVar11 = g_CSfxSlot_ARRAY_02dbd374[uVar12].sample;
    g_CSfxSlot_ARRAY_02dbd374[uVar12].playback_state = g_INT_005bea40;
    iVar6 = sound_sndmain_cpp_CSfxSample_pollStream_FUN_00523ea0(pCVar11,999.0,999.0);
    if (iVar6 != 0) {
      sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(this_ptr_00,0.0);
      uVar7 = sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0();
      if (uVar7 != 0) {
        iVar6 = (**(code **)(*_DAT_02dc8318 + 0x3c))
                          (_DAT_02dc8318,(g_CSfxSlot_ARRAY_02dbd374[uVar12].sample)->buffer_id);
        g_CSfxSlot_ARRAY_02dbd374[uVar12].hardware_buffer_handle = iVar6;
        if ((iVar6 == 0) ||
           (iVar6 = (**(code **)(*_DAT_02dc8318 + 0x48))(_DAT_02dc8318,this_ptr_00), iVar6 == 0))
        goto LAB_00526c2e;
      }
      sound_sndmain_cpp_unlockSound_FUN_00528890();
      return iVar3 << 6 | local_20;
    }
  }
LAB_00526c2e:
  sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(this_ptr_00);
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return 0;
}
