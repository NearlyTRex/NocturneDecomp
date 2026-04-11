// Name: sound_sndmain.cpp_CSfxSample_pollStream_FUN_005a6730
// Address: 005a6730
// MANUAL RECONSTRUCTION
// Address Range: [[005a6730, 005a6cd8]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSample_pollStream_FUN_005a6730(CSfxSample *this_ptr,float time_window,float update_interval)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl sound_sndmain_cpp_CSfxSample_pollStream_FUN_005a6730(CSfxSample *this_ptr,float time_window,float update_interval)

{
  int iVar5;
  int iVar2;
  SIZE_T SVar6;
  SIZE_T SVar7;
  SIZE_T size;
  ulong count;
  uint uVar8;
  uint uVar3;
  SIZE_T lock_length;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  char *pcVar4;
  SIZE_T count_00;
  int local_34;
  int local_30;
  int local_2c;
  SIZE_T local_28;
  SIZE_T local_14;
  bool bVar3;
  bool bVar4;
  CSfxSample *this_ptr_00;
  bool bVar2;
  _FILE *file;
  int iVar1;
  
  bVar11 = 0;
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x7c4;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::pollStream - must be locked!");
  }
  iVar1 = this_ptr->streaming_slot_index;
  if (-1 < iVar1) {
    if ((g_SfxSlots[iVar1].playback_state == 0) || (this_ptr != g_SfxSlots[iVar1].sample)) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 0x7d1;
      core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSample::pollStream - my sfx isn't active with me!");
    }
    if (g_CSoundDevicePtr == (CSoundDevice *)0x0) {
      sound_sndmain_cpp_logSoundError_FUN_005adba0("SfxSample::pollStream - no sound device?\n");
      goto LAB_005a69e2;
    }
    if (this_ptr->loop_marker_count != 1) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 0x7e2;
      core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSample::pollStream - cannot stream sample with exotic loop points: %s",(this_ptr->sample_info).name);
    }
    if (g_SfxSlots[iVar1].hardware_buffer_handle != 0) {
      iVar5 = sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0(g_SfxSlots + iVar1);
      if (iVar5 == 0) {
        sound_sndmain_cpp_logSoundError_FUN_005adba0("SfxSample::pollStream - error querrying hw playback position\n");
        goto LAB_005a69e2;
      }
      iVar2 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_005a87d0(this_ptr);
      if (((iVar2 == 0) && (-1 < (this_ptr->sample_info).sample_count)) &&
         ((double)(this_ptr->sample_info).sample_count <= g_SfxSlots[iVar1].options.trigger_time))
      goto LAB_005a69e2;
    }
    local_30 = (int)ROUND(ROUND((float)(this_ptr->sample_info).sample_rate * time_window));
    if (this_ptr->streaming_buffer_size < local_30) {
      local_30 = this_ptr->streaming_buffer_size;
    }
    local_2c = (int)ROUND(ROUND((double)this_ptr->stream_write_position -
                                g_SfxSlots[iVar1].prev_hardware_playback_pos));
    if (local_2c < 0) {
      local_2c = local_2c + this_ptr->streaming_buffer_size;
    }
    if (local_2c < local_30) {
      local_28 = 99999999;
      if (this_ptr->buffer_id != 0) {
        iVar2 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(this_ptr);
        local_28 = (SIZE_T)(0x3c00 / (longlong)iVar2);
      }
      iVar2 = this_ptr->streaming_buffer_size + -1;
      local_34 = (int)ROUND(ROUND((float)(this_ptr->sample_info).sample_rate * update_interval));
      if (iVar2 < local_34) {
        local_34 = iVar2;
      }
      SVar6 = local_34 - local_2c;
      while( true ) {
        if ((int)SVar6 < 1) {
          return 1;
        }
        if ((this_ptr->stream_write_position < 0) ||
           (this_ptr->streaming_buffer_size <= this_ptr->stream_write_position)) {
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 0x827;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("nextLoadSampleDest = %d, allocLength = %d",this_ptr->stream_write_position,
                     this_ptr->streaming_buffer_size);
        }
        lock_length = this_ptr->streaming_buffer_size - this_ptr->stream_write_position;
        if ((int)SVar6 < (int)lock_length) {
          lock_length = SVar6;
        }
        if ((int)local_28 < (int)lock_length) {
          lock_length = local_28;
        }
        iVar2 = (this_ptr->sample_info).sample_count;
        bVar2 = false;
        if (-1 < iVar2) {
          if (this_ptr->stream_read_position < iVar2) {
            SVar7 = iVar2 - this_ptr->stream_read_position;
            if ((int)SVar7 < (int)lock_length) {
              lock_length = SVar7;
            }
          }
          else {
            iVar2 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_005a87d0(g_SfxSlots[iVar1].sample);
            if ((iVar2 == 0) ||
               (this_ptr_00 = g_SfxSlots[iVar1].sample,
               (this_ptr_00->sample_info).sample_count == this_ptr_00->streaming_buffer_size)) {
              if (this_ptr->buffer_id == 0) {
                return 1;
              }
              bVar2 = true;
            }
            else {
              sound_sndmain_cpp_CSfxSample_seek_FUN_005a65a0
                        (this_ptr_00,0,this_ptr->stream_write_position);
            }
          }
        }
        pcVar9 = g_SfxStreamReadBuffer;
        bVar3 = false;
        bVar4 = true;
        if (this_ptr->buffer_id == 0) break;
LAB_005a6ab8:
        if (bVar2) {
          count = ((g_SfxSlots[iVar1].sample)->sample_info).num_channels * lock_length;
          uVar3 = ((g_SfxSlots[iVar1].sample)->sample_info).bit_depth;
          local_14 = lock_length;
          if (uVar3 < 8) {
LAB_005a6adf:
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 0x5ca;
            core_main_c_displayErrorAndQuit_FUN_00506f10("generateSilence - invalid bit depth!");
          }
          else if (uVar3 < 9) {
            memset(pcVar9,0x80,count);
          }
          else {
            if (uVar3 != 0x10) goto LAB_005a6adf;
            memset(pcVar9,0,count * 2);
          }
        }
        else if (this_ptr->mp3_data == (CMP3Decoder *)0x0) {
          if (this_ptr->file_handle == (_FILE *)0x0) {
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 0x879;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Can't stream unless we have mp3 decoder or open wav file!");
          }
          file = this_ptr->file_handle;
          count_00 = lock_length;
          size = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(this_ptr);
          local_14 = _fread(pcVar9,size,count_00,file);
          if ((this_ptr->file_handle->_flag & 0x20) != 0) {
            sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(this_ptr);
            pcVar4 = "Error reading %s while streaming\n";
            goto LAB_005a69da;
          }
        }
        else {
          local_14 = sound_mp3_cpp_CMP3Decoder_read_FUN_00534a60
                               (this_ptr->mp3_data,(short *)pcVar9,lock_length);
        }
        if ((bVar4) && (0 < (int)local_14)) {
          pcVar4 = (char *)sound_sndmain_cpp_CSfxSample_lock_FUN_005a6430
                             (this_ptr,this_ptr->stream_write_position,local_14);
          if (pcVar4 == (char *)0x0) {
            pcVar4 = "Error locking %s while streaming\n";
            goto LAB_005a69da;
          }
          iVar2 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(this_ptr);
          pcVar10 = g_SfxStreamReadBuffer;
          for (uVar8 = local_14 * iVar2 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(uint *)pcVar4 = *(uint *)pcVar10;
            pcVar10 = pcVar10 + (uint)bVar11 * -8 + 4;
            pcVar4 = pcVar4 + (uint)bVar11 * -8 + 4;
          }
          for (uVar3 = local_14 * iVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            pcVar10 = pcVar10 + (uint)bVar11 * -2 + 1;
            *pcVar4 = *pcVar10;
            pcVar10 = pcVar10;
            pcVar4 = pcVar4 + (uint)bVar11 * -2 + 1;
          }
LAB_005a6b5d:
          sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(this_ptr);
        }
        else if (bVar3) goto LAB_005a6b5d;
        if ((int)lock_length < (int)local_14) {
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 0x8a0;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("MP3 decoded more than batch: r = %d, batch = %d",(int)local_14,(int)lock_length);
        }
        if (lock_length != local_14) {
          (this_ptr->sample_info).sample_count = this_ptr->stream_read_position + local_14;
        }
        SVar6 = SVar6 - local_14;
        iVar2 = this_ptr->stream_write_position + local_14;
        this_ptr->stream_read_position = this_ptr->stream_read_position + local_14;
        this_ptr->stream_write_position = iVar2;
        if (this_ptr->streaming_buffer_size <= iVar2) {
          this_ptr->stream_write_position = 0;
        }
      }
      pcVar9 = (char *)sound_sndmain_cpp_CSfxSample_lock_FUN_005a6430
                         (this_ptr,this_ptr->stream_write_position,lock_length);
      if ((short *)pcVar9 != (short *)0x0) {
        bVar4 = false;
        bVar3 = true;
        goto LAB_005a6ab8;
      }
      pcVar4 = "Error locking %s while streaming\n";
LAB_005a69da:
      sound_sndmain_cpp_logSoundError_FUN_005adba0(pcVar4,this_ptr);
LAB_005a69e2:
      sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(g_SfxSlots + iVar1);
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(this_ptr);
      return 0;
    }
  }
  return 1;
}
