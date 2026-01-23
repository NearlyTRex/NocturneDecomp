// Name: sound_sndmain.cpp_CSfxSample_pollStream_FUN_005a6730
// Address: 005a6730
// Address Range: [[005a6730, 005a6cd8]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_CSfxSample_pollStream_FUN_005a6730(CSfxSample * this_ptr, float time_window, float update_interval)

#include "nocturne.h"

int __cdecl
sound_sndmain_cpp_CSfxSample_pollStream_FUN_005a6730
          (CSfxSample *this_ptr,float time_window,float update_interval)

{
  CSfxSample *this_ptr_00;
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  SIZE_T SVar5;
  SIZE_T SVar6;
  SIZE_T size;
  ulong count;
  uint uVar7;
  SIZE_T SVar8;
  SIZE_T lock_length;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  double dVar12;
  FILE *file;
  int iVar13;
  uint uVar14;
  int iVar15;
  CSfxSlot *local_28;
  SIZE_T local_20;
  
  bVar11 = 0;
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x7c4;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::pollStream - must be locked!");
  }
  iVar15 = this_ptr->streaming_slot_index;
  if (-1 < iVar15) {
    if ((g_SfxSlots[iVar15].playback_state == 0) || (this_ptr != g_SfxSlots[iVar15].sample)) {
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
      core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSample::pollStream - cannot stream sample with exotic loop points: %s",this_ptr);
    }
    if (g_SfxSlots[iVar15].hardware_buffer_handle != 0) {
      iVar3 = sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0(g_SfxSlots + iVar15);
      if (iVar3 == 0) {
        sound_sndmain_cpp_logSoundError_FUN_005adba0("SfxSample::pollStream - error querrying hw playback position\n");
        goto LAB_005a69e2;
      }
      iVar3 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_005a87d0(this_ptr);
      if (((iVar3 == 0) && (-1 < (this_ptr->sample_info).sample_count)) &&
         ((double)(this_ptr->sample_info).sample_count <= g_SfxSlots[iVar15].options.trigger_time))
      goto LAB_005a69e2;
    }
    iVar15 = 0x5a6835;
    crt_math_c_round_FUN_005fe6b0
              ((double)((float)(this_ptr->sample_info).sample_rate * time_window));
    uVar14 = 0x5a6858;
    dVar12 = crt_math_c_round_FUN_005fe6b0
                       ((double)this_ptr->stream_write_position - *(double *)(local_20 + 0x11c));
    SVar8 = (SIZE_T)ROUND(dVar12);
    if ((int)SVar8 < 0) {
      SVar8 = SVar8 + this_ptr->streaming_buffer_size;
    }
    if ((int)SVar8 < iVar15) {
      iVar3 = 99999999;
      if (this_ptr->buffer_id != 0) {
        iVar3 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(this_ptr);
        iVar3 = (int)(0x3c00 / (longlong)iVar3);
      }
      iVar4 = this_ptr->streaming_buffer_size + -1;
      dVar12 = crt_math_c_round_FUN_005fe6b0
                         ((double)((float)(this_ptr->sample_info).sample_rate * (float)this_ptr));
      iVar13 = (int)ROUND(dVar12);
      if (iVar4 < (int)ROUND(dVar12)) {
        iVar13 = iVar4;
      }
      SVar5 = iVar13 - iVar15;
      while( true ) {
        if ((int)SVar5 < 1) {
          return 1;
        }
        if ((this_ptr->stream_write_position < 0) ||
           (this_ptr->streaming_buffer_size <= this_ptr->stream_write_position)) {
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 0x827;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("nextLoadSampleDest = %d, allocLength = %d",this_ptr->stream_write_position,
                     this_ptr->streaming_buffer_size,iVar13,uVar14,iVar15,SVar8,iVar3);
        }
        lock_length = this_ptr->streaming_buffer_size - this_ptr->stream_write_position;
        if ((int)SVar5 < (int)lock_length) {
          lock_length = SVar5;
        }
        if ((int)SVar8 < (int)lock_length) {
          lock_length = SVar8;
        }
        iVar3 = (this_ptr->sample_info).sample_count;
        bVar1 = false;
        if (-1 < iVar3) {
          if (this_ptr->stream_read_position < iVar3) {
            SVar6 = iVar3 - this_ptr->stream_read_position;
            if ((int)SVar6 < (int)lock_length) {
              lock_length = SVar6;
            }
          }
          else {
            iVar3 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_005a87d0(local_28->sample);
            if ((iVar3 == 0) ||
               (this_ptr_00 = local_28->sample,
               (this_ptr_00->sample_info).sample_count == this_ptr_00->streaming_buffer_size)) {
              if (this_ptr->buffer_id == 0) {
                return 1;
              }
              bVar1 = true;
            }
            else {
              sound_sndmain_cpp_CSfxSample_seek_FUN_005a65a0
                        (this_ptr_00,0,this_ptr->stream_write_position);
            }
          }
        }
        pcVar9 = g_SfxStreamReadBuffer;
        bVar2 = false;
        iVar3 = 1;
        if (this_ptr->buffer_id == 0) break;
LAB_005a6ab8:
        if (bVar1) {
          count = (local_28->sample->sample_info).num_channels * lock_length;
          uVar7 = (local_28->sample->sample_info).bit_depth;
          local_20 = lock_length;
          if (uVar7 < 8) {
LAB_005a6adf:
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 0x5ca;
            core_main_c_displayErrorAndQuit_FUN_00506f10("generateSilence - invalid bit depth!");
          }
          else if (uVar7 < 9) {
            crt_memory_c_memset_FUN_005fde40(pcVar9,0x80,count);
          }
          else {
            if (uVar7 != 0x10) goto LAB_005a6adf;
            crt_memory_c_memset_FUN_005fde40(pcVar9,0,count * 2);
          }
        }
        else if (this_ptr->mp3_data == (CMP3Decoder *)0x0) {
          if (this_ptr->file_handle == (FILE *)0x0) {
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 0x879;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Can't stream unless we have mp3 decoder or open wav file!");
          }
          file = this_ptr->file_handle;
          SVar6 = lock_length;
          size = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(this_ptr);
          local_20 = crt_stdio_c_fread_FUN_005fd990(pcVar9,size,SVar6,file);
          if ((this_ptr->file_handle->_flag & 0x20) != 0) {
            sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(this_ptr);
            pcVar9 = "Error reading %s while streaming\n";
            goto LAB_005a69da;
          }
        }
        else {
          local_20 = sound_mp3_cpp_CMP3Decoder_read_FUN_00534a60
                               (this_ptr->mp3_data,(short *)pcVar9,lock_length);
        }
        if ((iVar3 == 0) || ((int)local_20 < 1)) {
          if (bVar2) goto LAB_005a6b5d;
        }
        else {
          pcVar9 = sound_sndmain_cpp_CSfxSample_lock_FUN_005a6430
                             (this_ptr,this_ptr->stream_write_position,local_20);
          if (pcVar9 == (char *)0x0) {
            pcVar9 = "Error locking %s while streaming\n";
            goto LAB_005a69da;
          }
          iVar4 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(this_ptr);
          pcVar10 = g_SfxStreamReadBuffer;
          for (uVar7 = local_20 * iVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(uint *)pcVar9 = *(uint *)pcVar10;
            pcVar10 = pcVar10 + ((uint)bVar11 * -2 + 1) * 4;
            pcVar9 = pcVar9 + ((uint)bVar11 * -2 + 1) * 4;
          }
          for (uVar7 = local_20 * iVar4 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar9 = *pcVar10;
            pcVar10 = pcVar10 + (uint)bVar11 * -2 + 1;
            pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
          }
LAB_005a6b5d:
          sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(this_ptr);
        }
        if ((int)lock_length < (int)local_20) {
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 0x8a0;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("MP3 decoded more than batch: r = %d, batch = %d",local_20,lock_length);
        }
        if (lock_length != local_20) {
          (this_ptr->sample_info).sample_count = this_ptr->stream_read_position + local_20;
        }
        SVar5 = SVar5 - local_20;
        iVar4 = this_ptr->stream_write_position + local_20;
        this_ptr->stream_read_position = this_ptr->stream_read_position + local_20;
        this_ptr->stream_write_position = iVar4;
        if (this_ptr->streaming_buffer_size <= iVar4) {
          this_ptr->stream_write_position = 0;
        }
      }
      pcVar9 = sound_sndmain_cpp_CSfxSample_lock_FUN_005a6430
                         (this_ptr,this_ptr->stream_write_position,lock_length);
      if ((short *)pcVar9 != (short *)0x0) {
        iVar3 = 0;
        bVar2 = true;
        goto LAB_005a6ab8;
      }
      pcVar9 = "Error locking %s while streaming\n";
LAB_005a69da:
      sound_sndmain_cpp_logSoundError_FUN_005adba0(pcVar9,this_ptr);
LAB_005a69e2:
      sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(local_28);
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(this_ptr);
      return 0;
    }
  }
  return 1;
}
