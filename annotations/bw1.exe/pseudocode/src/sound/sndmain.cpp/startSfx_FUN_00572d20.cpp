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
  int extraout_EAX;
  CMP3Decoder *this_ptr;
  CMP3Decoder *pCVar6;
  int iVar7;
  CSfxSlot *this_ptr_00;
  char *pcVar8;
  int *piVar9;
  CSfxOptions *pCVar10;
  CSfxSample *pCVar11;
  char *pcVar12;
  CSfxSample *pCVar13;
  byte bVar14;
  float10 fVar15;
  ulonglong uVar16;
  int in_stack_fffffc78;
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
  
  bVar14 = 0;
  if (((filename == (char *)0x0) || (*filename == '\0')) ||
     (iVar2 = sound_sndmain_cpp_isSoundBusy_FUN_00575550(), iVar2 == 0)) {
    return 0;
  }
  sound_sndmain_cpp_FUN_005726e0(&local_88);
  pcVar12 = local_188;
  pcVar8 = filename;
  do {
    cVar1 = *pcVar8;
    *pcVar12 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar12[1] = cVar1;
    pcVar12 = pcVar12 + 2;
  } while (cVar1 != '\0');
  piVar9 = (int *)(_DAT_02c78cec * 0x60 + 0x2c78cf0);
  pCVar10 = &local_88;
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar10->channel_index = *piVar9;
    piVar9 = piVar9 + (uint)bVar14 * -2 + 1;
    pCVar10 = (CSfxOptions *)((int)pCVar10 + ((uint)bVar14 * -2 + 1) * 4);
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
  iVar7 = 0;
  iVar2 = _DAT_02c74650;
  while (iVar2 != 0) {
    local_24 = local_24 + 1;
    if (0x46ff < iVar7 + 0x11c) {
      local_24 = 0xffffffff;
      break;
    }
    iVar2 = *(int *)(&DAT_02c7476c + iVar7);
    iVar7 = iVar7 + 0x11c;
  }
  if ((int)local_24 < 0) goto LAB_00572fa1;
  iVar2 = local_24 * 0x11c;
  this_ptr_00 = (CSfxSlot *)(iVar2 + 0x2c745ec);
  pCVar10 = &local_88;
  pCVar4 = this_ptr_00;
  for (iVar7 = 0x18; iVar7 != 0; iVar7 = iVar7 + -1) {
    (pCVar4->options).channel_index = pCVar10->channel_index;
    pCVar10 = (CSfxOptions *)((int)pCVar10 + ((uint)bVar14 * -2 + 1) * 4);
    pCVar4 = (CSfxSlot *)((int)pCVar4 + (uint)bVar14 * -8 + 4);
  }
  local_1c = filename;
  pCVar11 = g_SfxSamples;
  iVar7 = 0;
  do {
    iVar3 = _stricmp((char *)pCVar11,local_1c);
    if (iVar3 == 0) {
      if (pCVar11 != (CSfxSample *)0x0) {
        *(CSfxSample **)(&DAT_02c74654 + iVar2) = pCVar11;
        goto LAB_00572e88;
      }
      break;
    }
    iVar7 = iVar7 + 1;
    pCVar11 = pCVar11 + 1;
  } while (iVar7 < 0x40);
  iVar7 = engine_dosio_cpp_getFileSize_FUN_00478fb0("sound",local_188);
  if (iVar7 < 0x200001) {
    engine_dosio_cpp_splitPath_FUN_00479580(local_188,(char *)0x0,(char *)0x0,(char *)0x0,local_288)
    ;
    iVar7 = _stricmp(local_288,&DAT_005f30e3);
    if ((iVar7 == 0) ||
       (iVar7 = _stricmp(local_288,&DAT_005f30e7), iVar7 == 0))
    goto LAB_00573017;
    pCVar11 = sound_sndmain_cpp_FUN_0056e830(local_188);
    *(CSfxSample **)(&DAT_02c74654 + iVar2) = pCVar11;
  }
  else {
LAB_00573017:
    local_28 = local_24;
    pcVar12 = local_188;
    iVar7 = 0;
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
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x40);
    local_18 = (CSfxSample *)0x0;
LAB_0057305f:
    local_14 = local_18;
    if (local_18 == (CSfxSample *)0x0) {
      *(uint *)(&DAT_02c74654 + iVar2) = 0;
    }
    else {
      engine_dosio_cpp_splitPath_FUN_00479580
                (pcVar12,(char *)0x0,(char *)0x0,(char *)0x0,&stack0xfffffc78);
      iVar7 = _stricmp(&stack0xfffffc78,&DAT_005f30ec);
      if ((iVar7 == 0) ||
         (iVar7 = _stricmp(&stack0xfffffc78,&DAT_005f30f0), iVar7 == 0)) {
        iVar7 = engine_dosio_cpp_getFileSize_FUN_00478fb0("sound",pcVar12);
        if (0 < iVar7) {
          this_ptr = (CMP3Decoder *)operator_new(0x8630);
          pCVar6 = (CMP3Decoder *)0x0;
          if (this_ptr != (CMP3Decoder *)0x0) {
            pCVar6 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_0052ae40(this_ptr);
          }
          local_14->mp3_data = pCVar6;
          if (pCVar6 == (CMP3Decoder *)0x0) {
            _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
            _DAT_01d1d404 = 0x461;
            core_main_c_FUN_005030e0("Out of memory.");
          }
          sound_mp3_cpp_CMP3Decoder_openFile_FUN_0052aea0(local_14->mp3_data,pcVar12);
          pCVar11 = local_14;
          pCVar13 = local_14;
          do {
            cVar1 = *pcVar12;
            (pCVar13->sample_info).name[0] = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar12[1];
            pcVar12 = pcVar12 + 2;
            (pCVar13->sample_info).name[1] = cVar1;
            pCVar13 = (CSfxSample *)((pCVar13->sample_info).name + 2);
          } while (cVar1 != '\0');
          (local_14->sample_info).streaming_flag = 1;
          pCVar6 = local_14->mp3_data;
          (local_14->sample_info).bit_depth = 0x10;
          (local_14->sample_info).num_channels = pCVar6->num_channels;
          iVar7 = local_14->mp3_data->sample_rate;
          (local_14->sample_info).sample_count = -1;
          (local_14->sample_info).sample_rate = iVar7;
          sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_0056e130(local_14);
          pCVar11->taken = 0;
          iVar7 = (pCVar11->sample_info).sample_rate;
          pCVar11->ref_count = 0;
          fVar15 = (float10)iVar7 * (float10)0x40000000;
          pCVar11->buffer_id = 0;
          pCVar11->is_user_sample = 0;
          round();
          pCVar11->streaming_buffer_size = (int)ROUND(fVar15);
          pCVar11->stream_read_position = 0;
          pCVar11->stream_write_position = 0;
          pCVar11->streaming_slot_index = local_28;
          iVar7 = sound_sndmain_cpp_FUN_00572400(pCVar11,pCVar11->streaming_buffer_size);
          pCVar11->data_size_bytes = iVar7;
          iVar7 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0056feb0(pCVar11);
joined_r0x00573430:
          if (iVar7 != 0) {
            sound_sndmain_cpp_CSfxSample_seek_FUN_005702c0(local_14,0,0);
            *(CSfxSample **)(&DAT_02c74654 + iVar2) = local_14;
            goto LAB_00572e88;
          }
        }
      }
      else {
        local_20 = &local_18->file_stream;
        iVar7 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
                          (local_20,"sound",pcVar12,1);
        pCVar11 = local_18;
        pCVar13 = local_18;
        if (iVar7 != 0) {
          do {
            cVar1 = *pcVar12;
            (pCVar13->sample_info).name[0] = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar12[1];
            pcVar12 = pcVar12 + 2;
            (pCVar13->sample_info).name[1] = cVar1;
            pCVar13 = (CSfxSample *)((pCVar13->sample_info).name + 2);
          } while (cVar1 != '\0');
          iVar7 = support_trstream_cpp_CInStreamFile_tell_FUN_005a0d50(local_20);
          pCVar11->file_offset = iVar7;
          iVar7 = sound_sndmain_cpp_FUN_0056db10(local_20,&pCVar11->file_offset,pCVar11);
          if (iVar7 != 0) {
            sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_0056e130(local_18);
            local_18->taken = 0;
            iVar7 = (local_18->sample_info).sample_rate;
            local_18->ref_count = 0;
            fVar15 = (float10)iVar7 * (float10)0x40000000;
            local_18->buffer_id = 0;
            local_18->is_user_sample = 0;
            uVar16 = round();
            iVar7 = (int)((ulonglong)uVar16 >> 0x20);
            *(int *)((int)uVar16 + 0x164) = (int)ROUND(fVar15);
            *(uint *)(iVar7 + 0x16c) = 0;
            *(uint *)(iVar7 + 0x170) = 0;
            *(uint *)(iVar7 + 0x160) = local_28;
            iVar7 = sound_sndmain_cpp_FUN_00572400(iVar7,*(uint *)(iVar7 + 0x164));
            local_18->data_size_bytes = iVar7;
            iVar7 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0056feb0(local_18);
            goto joined_r0x00573430;
          }
        }
      }
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00570020(local_14);
      *(uint *)(&DAT_02c74654 + iVar2) = 0;
    }
  }
LAB_00572e88:
  iVar7 = *(int *)(&DAT_02c74654 + iVar2);
  if (iVar7 == 0) {
    sound_sndmain_cpp_FUN_005773f0("startSfx - can't get sample %s\n",local_188);
  }
  else {
    *(int *)(iVar7 + 0x154) = *(int *)(iVar7 + 0x154) + 1;
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
    iVar7 = *(int *)(&DAT_02c74654 + iVar2);
    *(uint *)(iVar2 + 0x2c746dc) = *(uint *)(*(int *)(&DAT_02c74654 + iVar2) + 0x114);
    iVar3 = *(int *)(&DAT_02c74654 + iVar2);
    *(uint *)(iVar2 + 0x2c746e0) = *(uint *)(iVar7 + 0x118);
    *(uint *)(iVar2 + 0x2c746e4) = *(uint *)(iVar3 + 0x11c);
    DAT_006232d0 = DAT_006232d0 + 1;
    *(uint *)(iVar2 + 0x2c74704) = 0xffffffff;
    if (0xfffffe < DAT_006232d0) {
      DAT_006232d0 = 1;
    }
    iVar7 = DAT_006232d0;
    *(int *)(&DAT_02c74650 + iVar2) = DAT_006232d0;
    iVar3 = sound_sndmain_cpp_FUN_00570460
                      (*(uint *)(&DAT_02c74654 + iVar2),0x4479c000,0x4479c000);
    if (iVar3 != 0) {
      sound_sndmain_cpp_CSfxSlot_compute_FUN_00570f30(this_ptr_00,0.0);
      sound_sndmain_cpp_FUN_00575560(in_stack_fffffc78);
      if (extraout_EAX < 1) {
LAB_0057346a:
        sound_sndmain_cpp_FUN_00573e70();
        return iVar7 << 6 | local_24;
      }
      iVar3 = (**(code **)(*_DAT_02c80650 + 0x40))
                        (_DAT_02c80650,*(uint *)(*(int *)(&DAT_02c74654 + iVar2) + 0x158));
      *(int *)(&DAT_02c7464c + iVar2) = iVar3;
      if (iVar3 != 0) goto LAB_0057346a;
    }
  }
  sound_sndmain_cpp_CSfxSlot_kill_FUN_00571d70(this_ptr_00);
LAB_00572fa1:
  sound_sndmain_cpp_FUN_00573e70();
  return 0;
}
