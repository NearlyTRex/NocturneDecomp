// Name: sound_sndmain.cpp_FUN_00553960
// Address: 00553960
// Address Range: [[00553960, 00553f3d]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_00553960(CSfxSample *param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_sndmain_cpp_FUN_00553960(CSfxSample *param_1,float param_2,float param_3)

{
  CSfxSample *this_ptr;
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  undefined3 extraout_var;
  uint uVar9;
  ulong count;
  short *output_buffer;
  uint *puVar10;
  byte bVar11;
  float10 fVar12;
  char *pcVar13;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_1c;
  int local_18;
  
  bVar11 = 0;
  if (_DAT_02cf341c < 1) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x90c;
    core_main_c_FUN_004e4330("SfxSlot::pollStream - must be locked!");
  }
  if (-1 < param_1->streaming_slot_index) {
    iVar1 = param_1->streaming_slot_index * 0x11c;
    if ((*(int *)(&DAT_02ce7280 + iVar1) == 0) ||
       (param_1 != *(CSfxSample **)(&DAT_02ce7284 + iVar1))) {
      _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
      _DAT_01d71de4 = 0x91a;
      core_main_c_FUN_004e4330("SfxSample::pollStream - my sfx isn't active with me!");
    }
    if (_DAT_02cf3280 == 0) {
      sound_sndmain_cpp_FUN_0055a560("SfxSample::pollStream - no sound device?\n");
      goto LAB_00553c13;
    }
    if (param_1->loop_marker_count != 1) {
      _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
      _DAT_01d71de4 = 0x92b;
      core_main_c_FUN_004e4330("SfxSample::pollStream - cannot stream sample with exotic loop points: %s",param_1);
    }
    if (*(int *)(&DAT_02ce727c + iVar1) != 0) {
      iVar5 = sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_005554a0
                        ((CSfxSlot *)(iVar1 + 0x2ce721c));
      if (iVar5 == 0) {
        sound_sndmain_cpp_FUN_0055a560("SfxSample::pollStream - error querrying hw playback position\n");
LAB_00553c13:
        sound_sndmain_cpp_CSfxSlot_kill_FUN_00555270((CSfxSlot *)(iVar1 + 0x2ce721c));
        sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00553520(param_1);
        return 0;
      }
      iVar5 = sound_sndmain_cpp_FUN_00555b80(param_1);
      if (((iVar5 == 0) && (-1 < (param_1->sample_info).sample_count)) &&
         ((double)(param_1->sample_info).sample_count <= *(double *)(iVar1 + 0x2ce726c)))
      goto LAB_00553c13;
    }
    fVar12 = (float10)(param_1->sample_info).sample_rate * (float10)param_2;
    iVar5 = param_1->streaming_buffer_size;
    round();
    local_38 = (int)ROUND(fVar12);
    if (iVar5 < (int)ROUND(fVar12)) {
      local_38 = iVar5;
    }
    fVar12 = (float10)param_1->stream_write_position - (float10)*(double *)(iVar1 + 0x2ce7328);
    round();
    local_30 = (int)ROUND(fVar12);
    if (local_30 < 0) {
      local_30 = local_30 + param_1->streaming_buffer_size;
    }
    if (local_30 < local_38) {
      local_2c = 99999999;
      if (param_1->buffer_id != 0) {
        local_2c = sound_sndmain_cpp_FUN_005558e0(param_1,0x3c00);
      }
      fVar12 = (float10)(param_1->sample_info).sample_rate * (float10)param_3;
      iVar5 = round();
      local_34 = (int)ROUND(fVar12);
      if (iVar5 < (int)ROUND(fVar12)) {
        local_34 = iVar5;
      }
      local_1c = local_34 - local_30;
      if (0 < local_1c) {
        do {
          if ((param_1->stream_write_position < 0) ||
             (param_1->streaming_buffer_size <= param_1->stream_write_position)) {
            _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
            _DAT_01d71de4 = 0x970;
            core_main_c_FUN_004e4330
                      ("nextLoadSampleDest = %d, allocLength = %d",param_1->stream_write_position,
                       param_1->streaming_buffer_size);
          }
          iVar5 = param_1->streaming_buffer_size - param_1->stream_write_position;
          if (local_1c < iVar5) {
            iVar5 = local_1c;
          }
          if (local_2c < iVar5) {
            iVar5 = local_2c;
          }
          iVar6 = (param_1->sample_info).sample_count;
          bVar4 = false;
          if (-1 < iVar6) {
            if (param_1->stream_read_position < iVar6) {
              iVar6 = iVar6 - param_1->stream_read_position;
              if (iVar6 < iVar5) {
                iVar5 = iVar6;
              }
            }
            else {
              iVar6 = sound_sndmain_cpp_FUN_00555b80(*(CSfxSample **)(&DAT_02ce7284 + iVar1));
              if ((iVar6 == 0) ||
                 (this_ptr = *(CSfxSample **)(&DAT_02ce7284 + iVar1),
                 (this_ptr->sample_info).sample_count == this_ptr->streaming_buffer_size)) {
                if (param_1->buffer_id == 0) {
                  return 1;
                }
                bVar4 = true;
              }
              else {
                sound_sndmain_cpp_CSfxSample_seek_FUN_005537c0
                          (this_ptr,0,param_1->stream_write_position);
              }
            }
          }
          output_buffer = (short *)&DAT_02cdafb8;
          bVar2 = false;
          bVar3 = true;
          if (param_1->buffer_id == 0) {
            output_buffer =
                 (short *)sound_sndmain_cpp_FUN_00553660
                                    (param_1,param_1->stream_write_position,iVar5);
            if (output_buffer != (short *)0x0) {
              bVar3 = false;
              bVar2 = true;
              goto LAB_00553ce9;
            }
            pcVar13 = "Error locking %s while streaming\n";
LAB_00553c0b:
            sound_sndmain_cpp_FUN_0055a560(pcVar13,param_1);
            goto LAB_00553c13;
          }
LAB_00553ce9:
          local_18 = iVar5;
          if (bVar4) {
            count = *(int *)(*(int *)(&DAT_02ce7284 + iVar1) + 0x108) * iVar5;
            uVar8 = *(uint *)(*(int *)(&DAT_02ce7284 + iVar1) + 0x104);
            if (uVar8 < 8) {
LAB_00553d10:
              _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
              _DAT_01d71de4 = 0x68b;
              core_main_c_FUN_004e4330("generateSilence - invalid bit depth!");
            }
            else if (uVar8 < 9) {
              memset(output_buffer,0x80,count);
            }
            else {
              if (uVar8 != 0x10) goto LAB_00553d10;
              memset(output_buffer,0,count * 2);
            }
          }
          else if (param_1->mp3_data == (CMP3Decoder *)0x0) {
            bVar4 = support_trstream_cpp_CInStreamFile_isOpen_FUN_00573d60(&param_1->file_stream);
            if (CONCAT31(extraout_var,bVar4) == 0) {
              _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
              _DAT_01d71de4 = 0x9c2;
              core_main_c_FUN_004e4330("Can't stream unless we have mp3 decoder or open wav file!");
            }
            uVar8 = sound_sndmain_cpp_FUN_00555900(param_1,iVar5);
            uVar9 = support_trstream_cpp_CInStreamFile_read_FUN_00573c00
                              (&param_1->file_stream,(uint *)output_buffer,uVar8);
            if (uVar9 != uVar8) {
              sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00553760(param_1);
              pcVar13 = "Error reading %s while streaming\n";
              goto LAB_00553c0b;
            }
            if (*(int *)(*(int *)(&DAT_02ce7284 + iVar1) + 0x104) == 0x10) {
              for (iVar6 = 0; iVar6 < *(int *)(*(int *)(&DAT_02ce7284 + iVar1) + 0x108) * iVar5;
                  iVar6 = iVar6 + 1) {
              }
            }
          }
          else {
            local_18 = sound_mp3_cpp_CMP3Decoder_read_FUN_00502a80
                                 (param_1->mp3_data,output_buffer,iVar5);
          }
          if ((bVar3) && (0 < local_18)) {
            puVar7 = (uint *)
                     sound_sndmain_cpp_FUN_00553660(param_1,param_1->stream_write_position,local_18)
            ;
            if (puVar7 == (uint *)0x0) {
              pcVar13 = "Error locking %s while streaming\n";
              goto LAB_00553c0b;
            }
            uVar8 = sound_sndmain_cpp_FUN_00555900(param_1,local_18);
            puVar10 = (uint *)&DAT_02cdafb8;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *puVar7 = *puVar10;
              puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
              puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(byte *)puVar7 = *(byte *)puVar10;
              puVar10 = (uint *)((int)puVar10 + (uint)bVar11 * -2 + 1);
              puVar7 = (uint *)((int)puVar7 + (uint)bVar11 * -2 + 1);
            }
LAB_00553d8d:
            sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00553760(param_1);
          }
          else if (bVar2) goto LAB_00553d8d;
          if (iVar5 < local_18) {
            _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
            _DAT_01d71de4 = 0x9f5;
            core_main_c_FUN_004e4330("MP3 decoded more than batch: r = %d, batch = %d",local_18,iVar5);
          }
          if (iVar5 != local_18) {
            (param_1->sample_info).sample_count = param_1->stream_read_position + local_18;
          }
          local_1c = local_1c - local_18;
          iVar5 = param_1->stream_write_position + local_18;
          param_1->stream_read_position = param_1->stream_read_position + local_18;
          param_1->stream_write_position = iVar5;
          if (param_1->streaming_buffer_size <= iVar5) {
            param_1->stream_write_position = 0;
          }
        } while (0 < local_1c);
      }
      return 1;
    }
  }
  return 1;
}
