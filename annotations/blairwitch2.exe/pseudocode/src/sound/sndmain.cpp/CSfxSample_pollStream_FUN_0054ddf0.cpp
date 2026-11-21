// Name: sound_sndmain.cpp_CSfxSample_pollStream_FUN_0054ddf0
// Address: 0054ddf0
// Address Range: [[0054ddf0, 0054e3cd]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSample_pollStream_FUN_0054ddf0(CSfxSample *this_ptr,float time_window,float update_interval)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSample_pollStream_FUN_0054ddf0(CSfxSample *this_ptr,float time_window,float update_interval)

{
  CSfxSample *this_ptr_00;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined3 extraout_var;
  int iVar6;
  uint uVar7;
  ulong count;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  double dVar11;
  int iVar12;
  int local_38;
  int local_28;
  int local_24;
  CSfxSlot *local_20;
  int local_18;
  
  bVar10 = 0;
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 2314;
    core_main_c_displayErrorAndQuit_FUN_004e4500("SfxSlot::pollStream - must be locked!");
  }
  iVar12 = this_ptr->streaming_slot_index;
  if (-1 < iVar12) {
    if ((g_CSfxSlot_ARRAY_0263cf1c[iVar12].playback_state == 0) ||
       (this_ptr != g_CSfxSlot_ARRAY_0263cf1c[iVar12].sample)) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 2328;
      core_main_c_displayErrorAndQuit_FUN_004e4500("SfxSample::pollStream - my sfx isn't active with me!");
    }
    if (g_CSoundDevicePtr == (CSoundDevice *)0x0) {
      sound_sndmain_cpp_logSoundError_FUN_005549c0("SfxSample::pollStream - no sound device?\n");
      goto LAB_0054e0a3;
    }
    if (this_ptr->loop_marker_count != 1) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 2345;
      core_main_c_displayErrorAndQuit_FUN_004e4500("SfxSample::pollStream - cannot stream sample with exotic loop points: %s");
    }
    if (g_CSfxSlot_ARRAY_0263cf1c[iVar12].hardware_buffer_handle != 0) {
      iVar4 = sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_0054f930
                        (g_CSfxSlot_ARRAY_0263cf1c + iVar12);
      if (iVar4 == 0) {
        sound_sndmain_cpp_logSoundError_FUN_005549c0("SfxSample::pollStream - error querrying hw playback position\n");
LAB_0054e0a3:
        sound_sndmain_cpp_CSfxSlot_kill_FUN_0054f700(local_20);
        sound_sndmain_cpp_CSfxSample_freeMemory_FUN_0054d9b0(this_ptr);
        return 0;
      }
      iVar4 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_00550010(this_ptr);
      if (((iVar4 == 0) && (-1 < (this_ptr->sample_info).sample_count)) &&
         ((double)(this_ptr->sample_info).sample_count <=
          g_CSfxSlot_ARRAY_0263cf1c[iVar12].options.playback_position)) goto LAB_0054e0a3;
    }
    iVar12 = this_ptr->streaming_buffer_size;
    dVar11 = round
                       ((double)((float)(this_ptr->sample_info).sample_rate * time_window));
    iVar4 = (int)ROUND(dVar11);
    if (iVar12 < (int)ROUND(dVar11)) {
      iVar4 = iVar12;
    }
    iVar12 = 0x54df15;
    dVar11 = round
                       ((double)this_ptr->stream_write_position - *(double *)(local_18 + 0x10c));
    local_38 = (int)ROUND(dVar11);
    if (local_38 < 0) {
      local_38 = local_38 + this_ptr->streaming_buffer_size;
    }
    if (local_38 < iVar12) {
      if (this_ptr->buffer_id != 0) {
        sound_sndmain_cpp_CSfxSample_bytesToFrames_FUN_0054fd70(this_ptr,0x3c00);
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
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 2414;
            core_main_c_displayErrorAndQuit_FUN_004e4500("nextLoadSampleDest = %d, allocLength = %d");
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
              iVar4 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_00550010(local_20->sample);
              if ((iVar4 == 0) ||
                 (this_ptr_00 = local_20->sample,
                 (this_ptr_00->sample_info).sample_count == this_ptr_00->streaming_buffer_size)) {
                if (this_ptr->buffer_id == 0) {
                  return 1;
                }
                bVar3 = true;
              }
              else {
                sound_sndmain_cpp_CSfxSample_seek_FUN_0054dc50
                          (this_ptr_00,0,this_ptr->stream_write_position);
              }
            }
          }
          pcVar8 = g_SfxStreamReadBuffer;
          bVar1 = false;
          bVar2 = true;
          if (this_ptr->buffer_id == 0) {
            pcVar8 = sound_sndmain_cpp_CSfxSample_lock_FUN_0054daf0
                               (this_ptr,this_ptr->stream_write_position,iVar12);
            if ((short *)pcVar8 != (short *)0x0) {
              bVar2 = false;
              bVar1 = true;
              goto LAB_0054e179;
            }
            pcVar8 = "Error locking %s while streaming\n";
LAB_0054e09b:
            sound_sndmain_cpp_logSoundError_FUN_005549c0(pcVar8,this_ptr);
            goto LAB_0054e0a3;
          }
LAB_0054e179:
          local_24 = iVar12;
          if (bVar3) {
            count = (local_20->sample->sample_info).num_channels * iVar12;
            uVar5 = (local_20->sample->sample_info).bit_depth;
            if (uVar5 < 8) {
LAB_0054e1a0:
              g_CurrentFilename = "..\\sound\\sndmain.cpp";
              g_CurrentLineNumber = 1673;
              core_main_c_displayErrorAndQuit_FUN_004e4500("generateSilence - invalid bit depth!");
            }
            else if (uVar5 < 9) {
              memset(pcVar8,0x80,count);
            }
            else {
              if (uVar5 != 0x10) goto LAB_0054e1a0;
              memset(pcVar8,0,count * 2);
            }
          }
          else if (this_ptr->mp3_data == (CMP3Decoder *)0x0) {
            bVar3 = support_trstream_cpp_CInStreamFile_isOpen_FUN_0057d130(&this_ptr->file_stream);
            if (CONCAT31(extraout_var,bVar3) == 0) {
              g_CurrentFilename = "..\\sound\\sndmain.cpp";
              g_CurrentLineNumber = 2496;
              core_main_c_displayErrorAndQuit_FUN_004e4500("Can't stream unless we have mp3 decoder or open wav file!");
            }
            iVar4 = sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_0054fd90(this_ptr,iVar12);
            iVar6 = support_trstream_cpp_CInStreamFile_read_FUN_0057cfe0
                              (&this_ptr->file_stream,pcVar8,iVar4);
            if (iVar6 != iVar4) {
              sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0(this_ptr);
              pcVar8 = "Error reading %s while streaming\n";
              goto LAB_0054e09b;
            }
            if ((local_20->sample->sample_info).bit_depth == 0x10) {
              for (iVar4 = 0; iVar4 < (local_20->sample->sample_info).num_channels * iVar12;
                  iVar4 = iVar4 + 1) {
              }
            }
          }
          else {
            local_24 = sound_mp3_cpp_CMP3Decoder_read_FUN_00509fa0
                                 (this_ptr->mp3_data,(short *)pcVar8,iVar12);
          }
          if ((bVar2) && (0 < local_24)) {
            pcVar8 = sound_sndmain_cpp_CSfxSample_lock_FUN_0054daf0
                               (this_ptr,this_ptr->stream_write_position,local_24);
            if (pcVar8 == (char *)0x0) {
              pcVar8 = "Error locking %s while streaming\n";
              goto LAB_0054e09b;
            }
            uVar5 = sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_0054fd90(this_ptr,local_24);
            pcVar9 = g_SfxStreamReadBuffer;
            for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(uint *)pcVar8 = *(uint *)pcVar9;
              pcVar9 = pcVar9 + ((uint)bVar10 * -2 + 1) * 4;
              pcVar8 = pcVar8 + ((uint)bVar10 * -2 + 1) * 4;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *pcVar8 = *pcVar9;
              pcVar9 = pcVar9 + (uint)bVar10 * -2 + 1;
              pcVar8 = pcVar8 + (uint)bVar10 * -2 + 1;
            }
LAB_0054e21d:
            sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0(this_ptr);
          }
          else if (bVar1) goto LAB_0054e21d;
          if (iVar12 < local_24) {
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 2547;
            core_main_c_displayErrorAndQuit_FUN_004e4500("MP3 decoded more than batch: r = %d, batch = %d");
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
