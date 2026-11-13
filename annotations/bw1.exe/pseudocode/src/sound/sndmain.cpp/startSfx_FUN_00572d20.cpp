// Name: sound_sndmain.cpp_startSfx_FUN_00572d20
// Address: 00572d20
// Address Range: [[00572d20, 0057348d]]
// Convention: __cdecl
// Signature: uint __cdecl sound_sndmain_cpp_startSfx_FUN_00572d20(char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl sound_sndmain_cpp_startSfx_FUN_00572d20(char *filename)

{
  char cVar1;
  int iVar2;
  int iVar3;
  CSfxSlot *pCVar4;
  uint uVar6;
  CMP3Decoder *this_ptr;
  CMP3Decoder *pCVar7;
  int iVar8;
  CSfxSlot *this_ptr_00;
  char *pcVar9;
  int *piVar10;
  CSfxOptions *pCVar11;
  CSfxSample *pCVar12;
  char *pcVar13;
  CSfxSample *pCVar14;
  byte bVar15;
  float10 fVar16;
  ulonglong uVar17;
  char local_388 [256];
  char local_288 [256];
  char local_188 [256];
  CSfxOptions local_88;
  uint local_28;
  uint local_24;
  CInStreamFile *local_20;
  char *local_1c;
  CSfxSample *local_18;
  CSfxSample *local_14;
  CVector3d *pCVar5;
  
  bVar15 = 0;
  if (((filename == (char *)0x0) || (*filename == '\0')) ||
     (iVar2 = sound_sndmain_cpp_isSoundBusy_FUN_00575550(), iVar2 == 0)) {
    return 0;
  }
  sound_sndmain_cpp_CSfxOptions_reset_FUN_005726e0(&local_88);
  pcVar13 = local_188;
  pcVar9 = filename;
  do {
    cVar1 = *pcVar9;
    *pcVar13 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar13[1] = cVar1;
    pcVar13 = pcVar13 + 2;
  } while (cVar1 != '\0');
  piVar10 = (int *)(_DAT_02c78cec * 0x60 + 0x2c78cf0);
  pCVar11 = &local_88;
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar11->channel_index = *piVar10;
    piVar10 = piVar10 + (uint)bVar15 * -2 + 1;
    pCVar11 = (CSfxOptions *)((int)pCVar11 + ((uint)bVar15 * -2 + 1) * 4);
  }
  iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(local_88.channel_index);
  if (iVar2 == 0) {
    return 0;
  }
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  if (_DAT_02c807ec < 1) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x249;
    core_main_c_FUN_005030e0("SfxSlot::kill - must be locked!");
  }
  local_24 = 0;
  iVar8 = 0;
  iVar2 = _DAT_02c74650;
  while (iVar2 != 0) {
    local_24 = local_24 + 1;
    if (0x46ff < iVar8 + 0x11c) {
      local_24 = 0xffffffff;
      break;
    }
    iVar2 = *(int *)(&DAT_02c7476c + iVar8);
    iVar8 = iVar8 + 0x11c;
  }
  if ((int)local_24 < 0) goto LAB_00572fa1;
  iVar2 = local_24 * 0x11c;
  this_ptr_00 = (CSfxSlot *)(iVar2 + 0x2c745ec);
  pCVar11 = &local_88;
  pCVar4 = this_ptr_00;
  for (iVar8 = 0x18; iVar8 != 0; iVar8 = iVar8 + -1) {
    (pCVar4->options).channel_index = pCVar11->channel_index;
    pCVar11 = (CSfxOptions *)((int)pCVar11 + ((uint)bVar15 * -2 + 1) * 4);
    pCVar4 = (CSfxSlot *)((int)pCVar4 + (uint)bVar15 * -8 + 4);
  }
  local_1c = filename;
  pCVar12 = g_SfxSamples;
  iVar8 = 0;
  do {
    iVar3 = _stricmp((char *)pCVar12,local_1c);
    if (iVar3 == 0) {
      if (pCVar12 != (CSfxSample *)0x0) {
        *(CSfxSample **)(&DAT_02c74654 + iVar2) = pCVar12;
        goto LAB_00572e88;
      }
      break;
    }
    iVar8 = iVar8 + 1;
    pCVar12 = pCVar12 + 1;
  } while (iVar8 < 0x40);
  iVar8 = engine_dosio_cpp_getFileSize_FUN_00478fb0("sound",local_188);
  if (iVar8 < 0x200001) {
    engine_dosio_cpp_splitPath_FUN_00479580(local_188,(char *)0x0,(char *)0x0,(char *)0x0,local_288)
    ;
    iVar8 = _stricmp(local_288,&DAT_005f30e3);
    if ((iVar8 == 0) ||
       (iVar8 = _stricmp(local_288,&DAT_005f30e7), iVar8 == 0))
    goto LAB_00573017;
    pCVar12 = sound_sndmain_cpp_getSfxSample_FUN_0056e830(local_188);
    *(CSfxSample **)(&DAT_02c74654 + iVar2) = pCVar12;
  }
  else {
LAB_00573017:
    local_28 = local_24;
    pcVar13 = local_188;
    iVar8 = 0;
    do {
      _DAT_02c78ff0 = _DAT_02c78ff0 + 1;
      if (0x3f < _DAT_02c78ff0) {
        _DAT_02c78ff0 = 0;
      }
      if (((g_SfxSamples[_DAT_02c78ff0].taken == 0) && (g_SfxSamples[_DAT_02c78ff0].ref_count == 0))
         && ((g_SfxSamples[_DAT_02c78ff0].is_user_sample == 0 &&
             (g_SfxSamples[_DAT_02c78ff0].locked_length == 0)))) {
        local_18 = g_SfxSamples + _DAT_02c78ff0;
        goto LAB_0057305f;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x40);
    local_18 = (CSfxSample *)0x0;
LAB_0057305f:
    local_14 = local_18;
    if (local_18 == (CSfxSample *)0x0) {
      *(uint *)(&DAT_02c74654 + iVar2) = 0;
    }
    else {
      engine_dosio_cpp_splitPath_FUN_00479580(pcVar13,(char *)0x0,(char *)0x0,(char *)0x0,local_388)
      ;
      iVar8 = _stricmp(local_388,&DAT_005f30ec);
      if ((iVar8 == 0) ||
         (iVar8 = _stricmp(local_388,&DAT_005f30f0), iVar8 == 0)) {
        iVar8 = engine_dosio_cpp_getFileSize_FUN_00478fb0("sound",pcVar13);
        if (0 < iVar8) {
          this_ptr = (CMP3Decoder *)operator_new(0x8630);
          pCVar7 = (CMP3Decoder *)0x0;
          if (this_ptr != (CMP3Decoder *)0x0) {
            pCVar7 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_0052ae40(this_ptr);
          }
          local_14->mp3_data = pCVar7;
          if (pCVar7 == (CMP3Decoder *)0x0) {
            _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
            _DAT_01d1d404 = 0x461;
            core_main_c_FUN_005030e0("Out of memory.");
          }
          sound_mp3_cpp_CMP3Decoder_openFile_FUN_0052aea0(local_14->mp3_data,pcVar13);
          pCVar12 = local_14;
          pCVar14 = local_14;
          do {
            cVar1 = *pcVar13;
            (pCVar14->sample_info).name[0] = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar13[1];
            pcVar13 = pcVar13 + 2;
            (pCVar14->sample_info).name[1] = cVar1;
            pCVar14 = (CSfxSample *)((pCVar14->sample_info).name + 2);
          } while (cVar1 != '\0');
          (local_14->sample_info).streaming_flag = 1;
          pCVar7 = local_14->mp3_data;
          (local_14->sample_info).bit_depth = 0x10;
          (local_14->sample_info).num_channels = pCVar7->num_channels;
          iVar8 = local_14->mp3_data->sample_rate;
          (local_14->sample_info).sample_count = -1;
          (local_14->sample_info).sample_rate = iVar8;
          sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_0056e130(local_14);
          pCVar12->taken = 0;
          iVar8 = (pCVar12->sample_info).sample_rate;
          pCVar12->ref_count = 0;
          fVar16 = (float10)iVar8 * (float10)0x40000000;
          pCVar12->buffer_id = 0;
          pCVar12->is_user_sample = 0;
          round();
          pCVar12->streaming_buffer_size = (int)ROUND(fVar16);
          pCVar12->stream_read_position = 0;
          pCVar12->stream_write_position = 0;
          pCVar12->streaming_slot_index = local_28;
          iVar8 = sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_00572400
                            (pCVar12,pCVar12->streaming_buffer_size);
          pCVar12->data_size_bytes = iVar8;
          iVar8 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0056feb0(pCVar12);
joined_r0x00573430:
          if (iVar8 != 0) {
            sound_sndmain_cpp_CSfxSample_seek_FUN_005702c0(local_14,0,0);
            *(CSfxSample **)(&DAT_02c74654 + iVar2) = local_14;
            goto LAB_00572e88;
          }
        }
      }
      else {
        local_20 = &local_18->file_stream;
        iVar8 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
                          (local_20,"sound",pcVar13,1);
        pCVar12 = local_18;
        pCVar14 = local_18;
        if (iVar8 != 0) {
          do {
            cVar1 = *pcVar13;
            (pCVar14->sample_info).name[0] = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar13[1];
            pcVar13 = pcVar13 + 2;
            (pCVar14->sample_info).name[1] = cVar1;
            pCVar14 = (CSfxSample *)((pCVar14->sample_info).name + 2);
          } while (cVar1 != '\0');
          iVar8 = support_trstream_cpp_CInStreamFile_tell_FUN_005a0d50(local_20);
          pCVar12->file_offset = iVar8;
          iVar8 = sound_sndmain_cpp_parseWavFile_FUN_0056db10
                            (&local_20->base,&pCVar12->file_offset,pCVar12);
          if (iVar8 != 0) {
            sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_0056e130(local_18);
            local_18->taken = 0;
            iVar8 = (local_18->sample_info).sample_rate;
            local_18->ref_count = 0;
            fVar16 = (float10)iVar8 * (float10)0x40000000;
            local_18->buffer_id = 0;
            local_18->is_user_sample = 0;
            uVar17 = round();
            pCVar12 = (CSfxSample *)((ulonglong)uVar17 >> 0x20);
            *(int *)((int)uVar17 + 0x164) = (int)ROUND(fVar16);
            pCVar12->stream_read_position = 0;
            pCVar12->stream_write_position = 0;
            pCVar12->streaming_slot_index = local_28;
            iVar8 = sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_00572400
                              (pCVar12,pCVar12->streaming_buffer_size);
            local_18->data_size_bytes = iVar8;
            iVar8 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0056feb0(local_18);
            goto joined_r0x00573430;
          }
        }
      }
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00570020(local_14);
      *(uint *)(&DAT_02c74654 + iVar2) = 0;
    }
  }
LAB_00572e88:
  iVar8 = *(int *)(&DAT_02c74654 + iVar2);
  if (iVar8 == 0) {
    sound_sndmain_cpp_logSoundError_FUN_005773f0("startSfx - can't get sample %s\n",local_188);
  }
  else {
    *(int *)(iVar8 + 0x154) = *(int *)(iVar8 + 0x154) + 1;
    sound_sndmain_cpp_CSfxSlot_seek_FUN_00572250(this_ptr_00);
    *(uint *)(iVar2 + 0x2c746f4) = 0;
    *(uint *)(iVar2 + 0x2c746ec) = 0xbf800000;
    *(uint *)(iVar2 + 0x2c746f0) = 0;
    *(uint *)(iVar2 + 0x2c746e8) = *(uint *)(iVar2 + 0x2c74624);
    pCVar4 = this_ptr_00;
    do {
      pCVar5 = &(pCVar4->options).position;
      pCVar4->channel_current_buffer_offsets[0] = -1;
      pCVar4 = (CSfxSlot *)pCVar5;
    } while (pCVar5 != (CVector3d *)(iVar2 + 0x2c7460c));
    iVar8 = *(int *)(&DAT_02c74654 + iVar2);
    *(uint *)(iVar2 + 0x2c746dc) = *(uint *)(*(int *)(&DAT_02c74654 + iVar2) + 0x114);
    iVar3 = *(int *)(&DAT_02c74654 + iVar2);
    *(uint *)(iVar2 + 0x2c746e0) = *(uint *)(iVar8 + 0x118);
    *(uint *)(iVar2 + 0x2c746e4) = *(uint *)(iVar3 + 0x11c);
    DAT_006232d0 = DAT_006232d0 + 1;
    *(uint *)(iVar2 + 0x2c74704) = 0xffffffff;
    if (0xfffffe < DAT_006232d0) {
      DAT_006232d0 = 1;
    }
    iVar8 = DAT_006232d0;
    *(int *)(&DAT_02c74650 + iVar2) = DAT_006232d0;
    iVar3 = sound_sndmain_cpp_CSfxSample_pollStream_FUN_00570460
                      (*(CSfxSample **)(&DAT_02c74654 + iVar2),999.0,999.0);
    if (iVar3 != 0) {
      sound_sndmain_cpp_CSfxSlot_compute_FUN_00570f30(this_ptr_00,0.0);
      uVar6 = sound_sndmain_cpp_hasHardware3DSound_FUN_00575560();
      if ((int)uVar6 < 1) {
LAB_0057346a:
        sound_sndmain_cpp_unlockSound_FUN_00573e70();
        return iVar8 << 6 | local_24;
      }
      iVar3 = (**(code **)(*_DAT_02c80650 + 0x40))
                        (_DAT_02c80650,*(uint *)(*(int *)(&DAT_02c74654 + iVar2) + 0x158));
      *(int *)(&DAT_02c7464c + iVar2) = iVar3;
      if (iVar3 != 0) goto LAB_0057346a;
    }
  }
  sound_sndmain_cpp_CSfxSlot_kill_FUN_00571d70(this_ptr_00);
LAB_00572fa1:
  sound_sndmain_cpp_unlockSound_FUN_00573e70();
  return 0;
}
