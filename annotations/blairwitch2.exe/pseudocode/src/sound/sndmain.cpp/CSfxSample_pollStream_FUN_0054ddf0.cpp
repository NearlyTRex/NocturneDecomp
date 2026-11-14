// Name: sound_sndmain.cpp_CSfxSample_pollStream_FUN_0054ddf0
// Address: 0054ddf0
// Address Range: [[0054ddf0, 0054e3cd]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSample_pollStream_FUN_0054ddf0(CSfxSample *this_ptr,float time_window,float update_interval)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_CSfxSample_pollStream_FUN_0054ddf0(CSfxSample *this_ptr,float time_window,float update_interval)

{
  CSfxSample *this_ptr_00;
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  undefined3 extraout_var;
  int iVar9;
  uint uVar10;
  ulong count;
  short *output_buffer;
  uint *puVar11;
  byte bVar12;
  float10 fVar13;
  char *format;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_1c;
  int local_18;
  
  bVar12 = 0;
  if (_DAT_0264901c < 1) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x90a;
    core_main_c_FUN_004e4500("SfxSlot::pollStream - must be locked!");
  }
  if (-1 < this_ptr->streaming_slot_index) {
    iVar1 = this_ptr->streaming_slot_index * 0x11c;
    if ((*(int *)(&DAT_0263cf80 + iVar1) == 0) ||
       (this_ptr != *(CSfxSample **)(&DAT_0263cf84 + iVar1))) {
      _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
      _DAT_01d046a4 = 0x918;
      core_main_c_FUN_004e4500("SfxSample::pollStream - my sfx isn't active with me!");
    }
    if (_DAT_02648e80 == 0) {
      sound_sndmain_cpp_logSoundError_FUN_005549c0("SfxSample::pollStream - no sound device?\n");
      goto LAB_0054e0a3;
    }
    if (this_ptr->loop_marker_count != 1) {
      _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
      _DAT_01d046a4 = 0x929;
      core_main_c_FUN_004e4500("SfxSample::pollStream - cannot stream sample with exotic loop points: %s",this_ptr);
    }
    if (*(int *)(&DAT_0263cf7c + iVar1) != 0) {
      iVar5 = sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_0054f930
                        ((CSfxSlot *)(iVar1 + 0x263cf1c));
      if (iVar5 == 0) {
        sound_sndmain_cpp_logSoundError_FUN_005549c0("SfxSample::pollStream - error querrying hw playback position\n");
LAB_0054e0a3:
        sound_sndmain_cpp_CSfxSlot_kill_FUN_0054f700((CSfxSlot *)(iVar1 + 0x263cf1c));
        sound_sndmain_cpp_CSfxSample_freeMemory_FUN_0054d9b0(this_ptr);
        return 0;
      }
      iVar5 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_00550010(this_ptr);
      if (((iVar5 == 0) && (-1 < (this_ptr->sample_info).sample_count)) &&
         ((double)(this_ptr->sample_info).sample_count <= *(double *)(iVar1 + 0x263cf6c)))
      goto LAB_0054e0a3;
    }
    fVar13 = (float10)(this_ptr->sample_info).sample_rate * (float10)time_window;
    iVar5 = this_ptr->streaming_buffer_size;
    round();
    local_38 = (int)ROUND(fVar13);
    if (iVar5 < (int)ROUND(fVar13)) {
      local_38 = iVar5;
    }
    fVar13 = (float10)this_ptr->stream_write_position - (float10)*(double *)(iVar1 + 0x263d028);
    round();
    local_30 = (int)ROUND(fVar13);
    if (local_30 < 0) {
      local_30 = local_30 + this_ptr->streaming_buffer_size;
    }
    if (local_30 < local_38) {
      local_2c = 99999999;
      if (this_ptr->buffer_id != 0) {
        local_2c = sound_sndmain_cpp_CSfxSample_bytesToFrames_FUN_0054fd70(this_ptr,0x3c00);
      }
      fVar13 = (float10)(this_ptr->sample_info).sample_rate * (float10)update_interval;
      iVar5 = round();
      local_34 = (int)ROUND(fVar13);
      if (iVar5 < (int)ROUND(fVar13)) {
        local_34 = iVar5;
      }
      local_1c = local_34 - local_30;
      if (0 < local_1c) {
        do {
          if ((this_ptr->stream_write_position < 0) ||
             (this_ptr->streaming_buffer_size <= this_ptr->stream_write_position)) {
            _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
            _DAT_01d046a4 = 0x96e;
            core_main_c_FUN_004e4500
                      ("nextLoadSampleDest = %d, allocLength = %d",this_ptr->stream_write_position,
                       this_ptr->streaming_buffer_size);
          }
          iVar5 = this_ptr->streaming_buffer_size - this_ptr->stream_write_position;
          if (local_1c < iVar5) {
            iVar5 = local_1c;
          }
          if (local_2c < iVar5) {
            iVar5 = local_2c;
          }
          iVar6 = (this_ptr->sample_info).sample_count;
          bVar4 = false;
          if (-1 < iVar6) {
            if (this_ptr->stream_read_position < iVar6) {
              iVar6 = iVar6 - this_ptr->stream_read_position;
              if (iVar6 < iVar5) {
                iVar5 = iVar6;
              }
            }
            else {
              iVar6 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_00550010
                                (*(CSfxSample **)(&DAT_0263cf84 + iVar1));
              if ((iVar6 == 0) ||
                 (this_ptr_00 = *(CSfxSample **)(&DAT_0263cf84 + iVar1),
                 (this_ptr_00->sample_info).sample_count == this_ptr_00->streaming_buffer_size)) {
                if (this_ptr->buffer_id == 0) {
                  return 1;
                }
                bVar4 = true;
              }
              else {
                sound_sndmain_cpp_CSfxSample_seek_FUN_0054dc50
                          (this_ptr_00,0,this_ptr->stream_write_position);
              }
            }
          }
          output_buffer = (short *)&DAT_02630cb8;
          bVar2 = false;
          bVar3 = true;
          if (this_ptr->buffer_id == 0) {
            output_buffer =
                 sound_sndmain_cpp_CSfxSample_lock_FUN_0054daf0
                           (this_ptr,this_ptr->stream_write_position,iVar5);
            if (output_buffer != (short *)0x0) {
              bVar3 = false;
              bVar2 = true;
              goto LAB_0054e179;
            }
            format = "Error locking %s while streaming\n";
LAB_0054e09b:
            sound_sndmain_cpp_logSoundError_FUN_005549c0(format,this_ptr);
            goto LAB_0054e0a3;
          }
LAB_0054e179:
          local_18 = iVar5;
          if (bVar4) {
            count = *(int *)(*(int *)(&DAT_0263cf84 + iVar1) + 0x108) * iVar5;
            uVar8 = *(uint *)(*(int *)(&DAT_0263cf84 + iVar1) + 0x104);
            if (uVar8 < 8) {
LAB_0054e1a0:
              _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
              _DAT_01d046a4 = 0x689;
              core_main_c_FUN_004e4500("generateSilence - invalid bit depth!");
            }
            else if (uVar8 < 9) {
              memset(output_buffer,0x80,count);
            }
            else {
              if (uVar8 != 0x10) goto LAB_0054e1a0;
              memset(output_buffer,0,count * 2);
            }
          }
          else if (this_ptr->mp3_data == (CMP3Decoder *)0x0) {
            bVar4 = support_trstream_cpp_CInStreamFile_isOpen_FUN_0057d130(&this_ptr->file_stream);
            if (CONCAT31(extraout_var,bVar4) == 0) {
              _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
              _DAT_01d046a4 = 0x9c0;
              core_main_c_FUN_004e4500("Can't stream unless we have mp3 decoder or open wav file!");
            }
            iVar6 = sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_0054fd90(this_ptr,iVar5);
            iVar9 = support_trstream_cpp_CInStreamFile_read_FUN_0057cfe0
                              (&this_ptr->file_stream,output_buffer,iVar6);
            if (iVar9 != iVar6) {
              sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0(this_ptr);
              format = "Error reading %s while streaming\n";
              goto LAB_0054e09b;
            }
            if (*(int *)(*(int *)(&DAT_0263cf84 + iVar1) + 0x104) == 0x10) {
              for (iVar6 = 0; iVar6 < *(int *)(*(int *)(&DAT_0263cf84 + iVar1) + 0x108) * iVar5;
                  iVar6 = iVar6 + 1) {
              }
            }
          }
          else {
            local_18 = sound_mp3_cpp_CMP3Decoder_read_FUN_00509fa0
                                 (this_ptr->mp3_data,output_buffer,iVar5);
          }
          if ((bVar3) && (0 < local_18)) {
            puVar7 = sound_sndmain_cpp_CSfxSample_lock_FUN_0054daf0
                               (this_ptr,this_ptr->stream_write_position,local_18);
            if (puVar7 == (uint *)0x0) {
              format = "Error locking %s while streaming\n";
              goto LAB_0054e09b;
            }
            uVar8 = sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_0054fd90(this_ptr,local_18);
            puVar11 = (uint *)&DAT_02630cb8;
            for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *puVar7 = *puVar11;
              puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
              puVar7 = puVar7 + (uint)bVar12 * -2 + 1;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(byte *)puVar7 = *(byte *)puVar11;
              puVar11 = (uint *)((int)puVar11 + (uint)bVar12 * -2 + 1);
              puVar7 = (uint *)((int)puVar7 + (uint)bVar12 * -2 + 1);
            }
LAB_0054e21d:
            sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0(this_ptr);
          }
          else if (bVar2) goto LAB_0054e21d;
          if (iVar5 < local_18) {
            _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
            _DAT_01d046a4 = 0x9f3;
            core_main_c_FUN_004e4500("MP3 decoded more than batch: r = %d, batch = %d",local_18,iVar5);
          }
          if (iVar5 != local_18) {
            (this_ptr->sample_info).sample_count = this_ptr->stream_read_position + local_18;
          }
          local_1c = local_1c - local_18;
          iVar5 = this_ptr->stream_write_position + local_18;
          this_ptr->stream_read_position = this_ptr->stream_read_position + local_18;
          this_ptr->stream_write_position = iVar5;
          if (this_ptr->streaming_buffer_size <= iVar5) {
            this_ptr->stream_write_position = 0;
          }
        } while (0 < local_1c);
      }
      return 1;
    }
  }
  return 1;
}
