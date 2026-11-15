// Name: sound_sndmain.cpp_CSfxSample_pollStream_FUN_00553960
// Address: 00553960
// Address Range: [[00553960, 00553f3d]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSample_pollStream_FUN_00553960(CSfxSample *this_ptr,float time_window,float update_interval)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_CSfxSample_pollStream_FUN_00553960(CSfxSample *this_ptr,float time_window,float update_interval)

{
  CSfxSample *this_ptr_00;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined3 extraout_var;
  int iVar7;
  uint uVar8;
  ulong count;
  short *output_buffer;
  uint *puVar9;
  byte bVar10;
  double dVar11;
  char *format;
  int iVar12;
  int local_38;
  int local_28;
  int local_24;
  CSfxSlot *local_20;
  int local_18;
  
  bVar10 = 0;
  if (_DAT_02cf341c < 1) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x90c;
    core_main_c_displayErrorAndQuit_FUN_004e4330("SfxSlot::pollStream - must be locked!");
  }
  if (-1 < this_ptr->streaming_slot_index) {
    iVar12 = this_ptr->streaming_slot_index * 0x11c;
    if ((*(int *)(&DAT_02ce7280 + iVar12) == 0) ||
       (this_ptr != *(CSfxSample **)(&DAT_02ce7284 + iVar12))) {
      _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
      _DAT_01d71de4 = 0x91a;
      core_main_c_displayErrorAndQuit_FUN_004e4330("SfxSample::pollStream - my sfx isn't active with me!");
    }
    if (_DAT_02cf3280 == 0) {
      sound_sndmain_cpp_logSoundError_FUN_0055a560("SfxSample::pollStream - no sound device?\n");
      goto LAB_00553c13;
    }
    if (this_ptr->loop_marker_count != 1) {
      _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
      _DAT_01d71de4 = 0x92b;
      core_main_c_displayErrorAndQuit_FUN_004e4330("SfxSample::pollStream - cannot stream sample with exotic loop points: %s");
    }
    if (*(int *)(&DAT_02ce727c + iVar12) != 0) {
      iVar4 = sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_005554a0
                        ((CSfxSlot *)(iVar12 + 0x2ce721c));
      if (iVar4 == 0) {
        sound_sndmain_cpp_logSoundError_FUN_0055a560("SfxSample::pollStream - error querrying hw playback position\n");
LAB_00553c13:
        sound_sndmain_cpp_CSfxSlot_kill_FUN_00555270(local_20);
        sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00553520(this_ptr);
        return 0;
      }
      iVar4 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_00555b80(this_ptr);
      if (((iVar4 == 0) && (-1 < (this_ptr->sample_info).sample_count)) &&
         ((double)(this_ptr->sample_info).sample_count <= *(double *)(iVar12 + 0x2ce726c)))
      goto LAB_00553c13;
    }
    iVar12 = this_ptr->streaming_buffer_size;
    dVar11 = round
                       ((double)((float)(this_ptr->sample_info).sample_rate * time_window));
    iVar4 = (int)ROUND(dVar11);
    if (iVar12 < (int)ROUND(dVar11)) {
      iVar4 = iVar12;
    }
    iVar12 = 0x553a85;
    dVar11 = round
                       ((double)this_ptr->stream_write_position - *(double *)(local_18 + 0x10c));
    local_38 = (int)ROUND(dVar11);
    if (local_38 < 0) {
      local_38 = local_38 + this_ptr->streaming_buffer_size;
    }
    if (local_38 < iVar12) {
      if (this_ptr->buffer_id != 0) {
        sound_sndmain_cpp_CSfxSample_bytesToFrames_FUN_005558e0(this_ptr,0x3c00);
      }
      iVar12 = this_ptr->streaming_buffer_size + -1;
      dVar11 = round
                         ((double)((float)(this_ptr->sample_info).sample_rate * (float)this_ptr));
      local_28 = (int)ROUND(dVar11);
      if (iVar12 < (int)ROUND(dVar11)) {
        local_28 = iVar12;
      }
      local_28 = local_28 - iVar4;
      if (0 < local_28) {
        do {
          if ((this_ptr->stream_write_position < 0) ||
             (this_ptr->streaming_buffer_size <= this_ptr->stream_write_position)) {
            _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
            _DAT_01d71de4 = 0x970;
            core_main_c_displayErrorAndQuit_FUN_004e4330("nextLoadSampleDest = %d, allocLength = %d");
          }
          iVar12 = this_ptr->streaming_buffer_size - this_ptr->stream_write_position;
          if (local_28 < iVar12) {
            iVar12 = local_28;
          }
          if (local_38 < iVar12) {
            iVar12 = local_38;
          }
          iVar4 = (this_ptr->sample_info).sample_count;
          bVar3 = false;
          if (-1 < iVar4) {
            if (this_ptr->stream_read_position < iVar4) {
              iVar4 = iVar4 - this_ptr->stream_read_position;
              if (iVar4 < iVar12) {
                iVar12 = iVar4;
              }
            }
            else {
              iVar4 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_00555b80(local_20->sample);
              if ((iVar4 == 0) ||
                 (this_ptr_00 = local_20->sample,
                 (this_ptr_00->sample_info).sample_count == this_ptr_00->streaming_buffer_size)) {
                if (this_ptr->buffer_id == 0) {
                  return 1;
                }
                bVar3 = true;
              }
              else {
                sound_sndmain_cpp_CSfxSample_seek_FUN_005537c0
                          (this_ptr_00,0,this_ptr->stream_write_position);
              }
            }
          }
          output_buffer = (short *)&DAT_02cdafb8;
          bVar1 = false;
          bVar2 = true;
          if (this_ptr->buffer_id == 0) {
            output_buffer =
                 sound_sndmain_cpp_CSfxSample_lock_FUN_00553660
                           (this_ptr,this_ptr->stream_write_position,iVar12);
            if (output_buffer != (short *)0x0) {
              bVar2 = false;
              bVar1 = true;
              goto LAB_00553ce9;
            }
            format = "Error locking %s while streaming\n";
LAB_00553c0b:
            sound_sndmain_cpp_logSoundError_FUN_0055a560(format,this_ptr);
            goto LAB_00553c13;
          }
LAB_00553ce9:
          local_24 = iVar12;
          if (bVar3) {
            count = (local_20->sample->sample_info).num_channels * iVar12;
            uVar6 = (local_20->sample->sample_info).bit_depth;
            if (uVar6 < 8) {
LAB_00553d10:
              _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
              _DAT_01d71de4 = 0x68b;
              core_main_c_displayErrorAndQuit_FUN_004e4330("generateSilence - invalid bit depth!");
            }
            else if (uVar6 < 9) {
              memset(output_buffer,0x80,count);
            }
            else {
              if (uVar6 != 0x10) goto LAB_00553d10;
              memset(output_buffer,0,count * 2);
            }
          }
          else if (this_ptr->mp3_data == (CMP3Decoder *)0x0) {
            bVar3 = support_trstream_cpp_CInStreamFile_isOpen_FUN_00573d60(&this_ptr->file_stream);
            if (CONCAT31(extraout_var,bVar3) == 0) {
              _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
              _DAT_01d71de4 = 0x9c2;
              core_main_c_displayErrorAndQuit_FUN_004e4330("Can't stream unless we have mp3 decoder or open wav file!");
            }
            iVar4 = sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_00555900(this_ptr,iVar12);
            iVar7 = support_trstream_cpp_CInStreamFile_read_FUN_00573c00
                              (&this_ptr->file_stream,output_buffer,iVar4);
            if (iVar7 != iVar4) {
              sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00553760(this_ptr);
              format = "Error reading %s while streaming\n";
              goto LAB_00553c0b;
            }
            if ((local_20->sample->sample_info).bit_depth == 0x10) {
              for (iVar4 = 0; iVar4 < (local_20->sample->sample_info).num_channels * iVar12;
                  iVar4 = iVar4 + 1) {
              }
            }
          }
          else {
            local_24 = sound_mp3_cpp_CMP3Decoder_read_FUN_00502a80
                                 (this_ptr->mp3_data,output_buffer,iVar12);
          }
          if ((bVar2) && (0 < local_24)) {
            puVar5 = sound_sndmain_cpp_CSfxSample_lock_FUN_00553660
                               (this_ptr,this_ptr->stream_write_position,local_24);
            if (puVar5 == (uint *)0x0) {
              format = "Error locking %s while streaming\n";
              goto LAB_00553c0b;
            }
            uVar6 = sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_00555900(this_ptr,local_24);
            puVar9 = (uint *)&DAT_02cdafb8;
            for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar5 = *puVar9;
              puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
              puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(byte *)puVar5 = *(byte *)puVar9;
              puVar9 = (uint *)((int)puVar9 + (uint)bVar10 * -2 + 1);
              puVar5 = (uint *)((int)puVar5 + (uint)bVar10 * -2 + 1);
            }
LAB_00553d8d:
            sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00553760(this_ptr);
          }
          else if (bVar1) goto LAB_00553d8d;
          if (iVar12 < local_24) {
            _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
            _DAT_01d71de4 = 0x9f5;
            core_main_c_displayErrorAndQuit_FUN_004e4330("MP3 decoded more than batch: r = %d, batch = %d");
          }
          if (iVar12 != local_24) {
            (this_ptr->sample_info).sample_count = this_ptr->stream_read_position + local_24;
          }
          local_28 = local_28 - local_24;
          iVar12 = this_ptr->stream_write_position + local_24;
          this_ptr->stream_read_position = this_ptr->stream_read_position + local_24;
          this_ptr->stream_write_position = iVar12;
          if (this_ptr->streaming_buffer_size <= iVar12) {
            this_ptr->stream_write_position = 0;
          }
        } while (0 < local_28);
      }
      return 1;
    }
  }
  return 1;
}
