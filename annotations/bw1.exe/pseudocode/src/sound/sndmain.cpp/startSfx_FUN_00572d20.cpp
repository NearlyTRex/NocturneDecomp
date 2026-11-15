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
  float fVar2;
  int iVar3;
  int iVar4;
  CSfxSlot *pCVar5;
  uint uVar7;
  CMP3Decoder *this_ptr;
  CMP3Decoder *pCVar8;
  int iVar9;
  CSfxSlot *this_ptr_00;
  char *pcVar10;
  int *piVar11;
  CSfxOptions *pCVar12;
  CSfxSample *pCVar13;
  char *pcVar14;
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
  pcVar14 = local_188;
  pcVar10 = filename;
  do {
    cVar1 = *pcVar10;
    *pcVar14 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar14[1] = cVar1;
    pcVar14 = pcVar14 + 2;
  } while (cVar1 != '\0');
  piVar11 = (int *)(_DAT_02c78cec * 0x60 + 0x2c78cf0);
  pCVar12 = &local_88;
  for (iVar3 = 0x18; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar12->channel_index = *piVar11;
    piVar11 = piVar11 + (uint)bVar16 * -2 + 1;
    pCVar12 = (CSfxOptions *)((int)pCVar12 + ((uint)bVar16 * -2 + 1) * 4);
  }
  iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(local_88.channel_index);
  if (iVar3 == 0) {
    return 0;
  }
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  if (_DAT_02c807ec < 1) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x249;
    core_main_c_displayErrorAndQuit_FUN_005030e0("SfxSlot::kill - must be locked!");
  }
  local_24 = 0;
  iVar9 = 0;
  iVar3 = _DAT_02c74650;
  while (iVar3 != 0) {
    local_24 = local_24 + 1;
    if (0x46ff < iVar9 + 0x11c) {
      local_24 = 0xffffffff;
      break;
    }
    iVar3 = *(int *)(&DAT_02c7476c + iVar9);
    iVar9 = iVar9 + 0x11c;
  }
  if ((int)local_24 < 0) goto LAB_00572fa1;
  iVar3 = local_24 * 0x11c;
  this_ptr_00 = (CSfxSlot *)(iVar3 + 0x2c745ec);
  pCVar12 = &local_88;
  pCVar5 = this_ptr_00;
  for (iVar9 = 0x18; iVar9 != 0; iVar9 = iVar9 + -1) {
    (pCVar5->options).channel_index = pCVar12->channel_index;
    pCVar12 = (CSfxOptions *)((int)pCVar12 + ((uint)bVar16 * -2 + 1) * 4);
    pCVar5 = (CSfxSlot *)((int)pCVar5 + (uint)bVar16 * -8 + 4);
  }
  local_1c = (CSfxSample *)filename;
  pCVar13 = g_SfxSamples;
  iVar9 = 0;
  do {
    iVar4 = _stricmp((char *)pCVar13,(char *)local_1c);
    if (iVar4 == 0) {
      if (pCVar13 != (CSfxSample *)0x0) {
        *(CSfxSample **)(&DAT_02c74654 + iVar3) = pCVar13;
        goto LAB_00572e88;
      }
      break;
    }
    iVar9 = iVar9 + 1;
    pCVar13 = pCVar13 + 1;
  } while (iVar9 < 0x40);
  iVar9 = engine_dosio_cpp_getFileSize_FUN_00478fb0("sound",local_188);
  if (iVar9 < 0x200001) {
    engine_dosio_cpp_splitPath_FUN_00479580(local_188,(char *)0x0,(char *)0x0,(char *)0x0,local_288)
    ;
    iVar9 = _stricmp(local_288,&DAT_005f30e3);
    if ((iVar9 == 0) ||
       (iVar9 = _stricmp(local_288,&DAT_005f30e7), iVar9 == 0))
    goto LAB_00573017;
    pCVar13 = sound_sndmain_cpp_getSfxSample_FUN_0056e830(local_188);
    *(CSfxSample **)(&DAT_02c74654 + iVar3) = pCVar13;
  }
  else {
LAB_00573017:
    local_28 = local_24;
    pcVar14 = local_188;
    iVar9 = 0;
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
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x40);
    local_18 = (CSfxSample *)0x0;
LAB_0057305f:
    local_14 = local_18;
    if (local_18 == (CSfxSample *)0x0) {
      *(uint *)(&DAT_02c74654 + iVar3) = 0;
    }
    else {
      engine_dosio_cpp_splitPath_FUN_00479580(pcVar14,(char *)0x0,(char *)0x0,(char *)0x0,local_388)
      ;
      iVar9 = _stricmp(local_388,&DAT_005f30ec);
      if ((iVar9 == 0) ||
         (iVar9 = _stricmp(local_388,&DAT_005f30f0), iVar9 == 0)) {
        iVar9 = engine_dosio_cpp_getFileSize_FUN_00478fb0("sound",pcVar14);
        if (0 < iVar9) {
          this_ptr = (CMP3Decoder *)operator_new(0x8630);
          pCVar8 = (CMP3Decoder *)0x0;
          if (this_ptr != (CMP3Decoder *)0x0) {
            pCVar8 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_0052ae40(this_ptr);
          }
          local_14->mp3_data = pCVar8;
          if (pCVar8 == (CMP3Decoder *)0x0) {
            _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
            _DAT_01d1d404 = 0x461;
            core_main_c_displayErrorAndQuit_FUN_005030e0("Out of memory.");
          }
          sound_mp3_cpp_CMP3Decoder_openFile_FUN_0052aea0(local_14->mp3_data,pcVar14);
          pCVar13 = local_14;
          pCVar15 = local_14;
          do {
            cVar1 = *pcVar14;
            (pCVar15->sample_info).name[0] = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar14[1];
            pcVar14 = pcVar14 + 2;
            (pCVar15->sample_info).name[1] = cVar1;
            pCVar15 = (CSfxSample *)((pCVar15->sample_info).name + 2);
          } while (cVar1 != '\0');
          (local_14->sample_info).streaming_flag = 1;
          pCVar8 = local_14->mp3_data;
          (local_14->sample_info).bit_depth = 0x10;
          (local_14->sample_info).num_channels = pCVar8->num_channels;
          iVar9 = local_14->mp3_data->sample_rate;
          (local_14->sample_info).sample_count = -1;
          (local_14->sample_info).sample_rate = iVar9;
          sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_0056e130(local_14);
          pCVar13->taken = 0;
          iVar9 = (pCVar13->sample_info).sample_rate;
          pCVar13->ref_count = 0;
          fVar2 = (float)iVar9 * 0x40000000;
          pCVar13->buffer_id = 0;
          pCVar13->is_user_sample = 0;
          dVar17 = round((double)fVar2);
          pCVar13->streaming_buffer_size = (int)ROUND(dVar17);
          pCVar13->stream_read_position = 0;
          pCVar13->stream_write_position = 0;
          pCVar13->streaming_slot_index = local_88.dead;
          iVar9 = sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_00572400
                            (pCVar13,pCVar13->streaming_buffer_size);
          pCVar13->data_size_bytes = iVar9;
          iVar9 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0056feb0(pCVar13);
joined_r0x00573430:
          if (iVar9 != 0) {
            sound_sndmain_cpp_CSfxSample_seek_FUN_005702c0(local_18,0,0);
            *(CSfxSample **)(&DAT_02c74654 + iVar3) = local_18;
            goto LAB_00572e88;
          }
        }
      }
      else {
        local_20 = &local_18->file_stream;
        iVar9 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
                          (local_20,"sound",pcVar14,1);
        pCVar13 = local_18;
        pCVar15 = local_18;
        if (iVar9 != 0) {
          do {
            cVar1 = *pcVar14;
            (pCVar15->sample_info).name[0] = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar14[1];
            pcVar14 = pcVar14 + 2;
            (pCVar15->sample_info).name[1] = cVar1;
            pCVar15 = (CSfxSample *)((pCVar15->sample_info).name + 2);
          } while (cVar1 != '\0');
          iVar9 = support_trstream_cpp_CInStreamFile_tell_FUN_005a0d50(local_20);
          pCVar13->file_offset = iVar9;
          iVar9 = sound_sndmain_cpp_parseWavFile_FUN_0056db10
                            (&local_20->base,&pCVar13->file_offset,pCVar13);
          if (iVar9 != 0) {
            sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_0056e130(local_18);
            pCVar13 = local_18;
            local_18->taken = 0;
            iVar9 = (local_18->sample_info).sample_rate;
            local_18->ref_count = 0;
            fVar2 = (float)iVar9 * 0x40000000;
            local_18->buffer_id = 0;
            local_18->is_user_sample = 0;
            dVar17 = round((double)fVar2);
            pCVar13->streaming_buffer_size = (int)ROUND(dVar17);
            pCVar13->stream_read_position = 0;
            pCVar13->stream_write_position = 0;
            pCVar13->streaming_slot_index = local_88.dead;
            iVar9 = sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_00572400
                              (pCVar13,pCVar13->streaming_buffer_size);
            local_1c->data_size_bytes = iVar9;
            iVar9 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0056feb0(local_1c);
            goto joined_r0x00573430;
          }
        }
      }
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00570020(local_18);
      *(uint *)(&DAT_02c74654 + iVar3) = 0;
    }
  }
LAB_00572e88:
  iVar9 = *(int *)(&DAT_02c74654 + iVar3);
  if (iVar9 == 0) {
    sound_sndmain_cpp_logSoundError_FUN_005773f0("startSfx - can't get sample %s\n",auStack_18c);
  }
  else {
    *(int *)(iVar9 + 0x154) = *(int *)(iVar9 + 0x154) + 1;
    sound_sndmain_cpp_CSfxSlot_seek_FUN_00572250(this_ptr_00);
    *(uint *)(iVar3 + 0x2c746f4) = 0;
    *(uint *)(iVar3 + 0x2c746ec) = 0xbf800000;
    *(uint *)(iVar3 + 0x2c746f0) = 0;
    *(uint *)(iVar3 + 0x2c746e8) = *(uint *)(iVar3 + 0x2c74624);
    pCVar5 = this_ptr_00;
    do {
      pCVar6 = &(pCVar5->options).position;
      pCVar5->channel_current_buffer_offsets[0] = -1;
      pCVar5 = (CSfxSlot *)pCVar6;
    } while (pCVar6 != (CVector3d *)(iVar3 + 0x2c7460c));
    iVar9 = *(int *)(&DAT_02c74654 + iVar3);
    *(uint *)(iVar3 + 0x2c746dc) = *(uint *)(*(int *)(&DAT_02c74654 + iVar3) + 0x114);
    iVar4 = *(int *)(&DAT_02c74654 + iVar3);
    *(uint *)(iVar3 + 0x2c746e0) = *(uint *)(iVar9 + 0x118);
    *(uint *)(iVar3 + 0x2c746e4) = *(uint *)(iVar4 + 0x11c);
    DAT_006232d0 = DAT_006232d0 + 1;
    *(uint *)(iVar3 + 0x2c74704) = 0xffffffff;
    if (0xfffffe < DAT_006232d0) {
      DAT_006232d0 = 1;
    }
    iVar9 = DAT_006232d0;
    *(int *)(&DAT_02c74650 + iVar3) = DAT_006232d0;
    iVar4 = sound_sndmain_cpp_CSfxSample_pollStream_FUN_00570460
                      (*(CSfxSample **)(&DAT_02c74654 + iVar3),999.0,999.0);
    if (iVar4 != 0) {
      sound_sndmain_cpp_CSfxSlot_compute_FUN_00570f30(this_ptr_00,0.0);
      uVar7 = sound_sndmain_cpp_hasHardware3DSound_FUN_00575560();
      if ((int)uVar7 < 1) {
LAB_0057346a:
        sound_sndmain_cpp_unlockSound_FUN_00573e70();
        return iVar9 << 6 | local_28;
      }
      iVar4 = (**(code **)(*_DAT_02c80650 + 0x40))
                        (_DAT_02c80650,*(uint *)(*(int *)(&DAT_02c74654 + iVar3) + 0x158));
      *(int *)(&DAT_02c7464c + iVar3) = iVar4;
      if (iVar4 != 0) goto LAB_0057346a;
    }
  }
  sound_sndmain_cpp_CSfxSlot_kill_FUN_00571d70(this_ptr_00);
LAB_00572fa1:
  sound_sndmain_cpp_unlockSound_FUN_00573e70();
  return 0;
}
