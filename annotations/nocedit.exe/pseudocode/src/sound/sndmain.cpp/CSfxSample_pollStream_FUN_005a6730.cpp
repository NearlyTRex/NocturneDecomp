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
  bool bVar1;
  bool bVar2;
  int iVar3;
  CSfxSample *pCVar4;
  CSfxSlot *pCVar5;
  CSfxSlot *pCVar6;
  int iVar7;
  SIZE_T size;
  ulong count;
  uint uVar8;
  CSfxSlot *lock_length;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  double dVar12;
  float in_stack_00000010;
  float in_stack_00000014;
  FILE *count_00;
  CSfxSample *file;
  uint uVar13;
  CSfxSlot *pCVar14;
  int iVar15;
  int local_1c;
  CSfxSlot *local_14;
  
  bVar11 = 0;
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x7c4;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::pollStream - must be locked!");
  }
  iVar3 = this_ptr->streaming_slot_index;
  if (-1 < iVar3) {
    if ((g_SfxSlots[iVar3].playback_state == 0) || (this_ptr != g_SfxSlots[iVar3].sample)) {
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
    if (g_SfxSlots[iVar3].hardware_buffer_handle != 0) {
      iVar3 = sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0(g_SfxSlots + iVar3);
      if (iVar3 == 0) {
        sound_sndmain_cpp_logSoundError_FUN_005adba0("SfxSample::pollStream - error querrying hw playback position\n");
        goto LAB_005a69e2;
      }
      iVar3 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_005a87d0(this_ptr);
      if (((iVar3 == 0) && (-1 < (this_ptr->sample_info).sample_count)) &&
         ((double)(this_ptr->sample_info).sample_count <= (local_14->options).trigger_time))
      goto LAB_005a69e2;
    }
    iVar3 = 0x5a6835;
    crt_math_c_round_FUN_005fe6b0
              ((double)((float)(this_ptr->sample_info).sample_rate * in_stack_00000014));
    uVar13 = 0x5a6858;
    dVar12 = crt_math_c_round_FUN_005fe6b0
                       ((double)this_ptr->stream_write_position -
                        local_14->prev_hardware_playback_pos);
    pCVar14 = (CSfxSlot *)(int)ROUND(dVar12);
    if ((int)pCVar14 < 0) {
      pCVar14 = (CSfxSlot *)
                ((int)(pCVar14->options).userdata + this_ptr->streaming_buffer_size + -0x54);
    }
    if ((int)pCVar14 < iVar3) {
      iVar15 = 99999999;
      if (this_ptr->buffer_id != 0) {
        iVar15 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(this_ptr);
        iVar15 = (int)(0x3c00 / (longlong)iVar15);
      }
      pCVar4 = (CSfxSample *)(this_ptr->streaming_buffer_size + -1);
      dVar12 = crt_math_c_round_FUN_005fe6b0
                         ((double)((float)(this_ptr->sample_info).sample_rate * in_stack_00000010));
      file = (CSfxSample *)(int)ROUND(dVar12);
      if ((int)pCVar4 < (int)ROUND(dVar12)) {
        file = pCVar4;
      }
      pCVar5 = (CSfxSlot *)((int)file - iVar3);
      while( true ) {
        if ((int)pCVar5 < 1) {
          return 1;
        }
        if ((this_ptr->stream_write_position < 0) ||
           (this_ptr->streaming_buffer_size <= this_ptr->stream_write_position)) {
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 0x827;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("nextLoadSampleDest = %d, allocLength = %d",this_ptr->stream_write_position,
                     this_ptr->streaming_buffer_size,file,uVar13,iVar3,pCVar14,iVar15);
        }
        lock_length = (CSfxSlot *)
                      (this_ptr->streaming_buffer_size - this_ptr->stream_write_position);
        if ((int)pCVar5 < (int)lock_length) {
          lock_length = pCVar5;
        }
        if ((int)pCVar14 < (int)lock_length) {
          lock_length = pCVar14;
        }
        iVar15 = (this_ptr->sample_info).sample_count;
        bVar1 = false;
        if (-1 < iVar15) {
          if (this_ptr->stream_read_position < iVar15) {
            pCVar6 = (CSfxSlot *)(iVar15 - this_ptr->stream_read_position);
            if ((int)pCVar6 < (int)lock_length) {
              lock_length = pCVar6;
            }
          }
          else {
            iVar15 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_005a87d0
                               (*(CSfxSample **)(local_1c + 0x78));
            if ((iVar15 == 0) ||
               (pCVar4 = *(CSfxSample **)(local_1c + 0x78),
               (pCVar4->sample_info).sample_count == pCVar4->streaming_buffer_size)) {
              if (this_ptr->buffer_id == 0) {
                return 1;
              }
              bVar1 = true;
            }
            else {
              sound_sndmain_cpp_CSfxSample_seek_FUN_005a65a0
                        (pCVar4,0,this_ptr->stream_write_position);
            }
          }
        }
        pcVar9 = g_SfxStreamReadBuffer;
        bVar2 = false;
        iVar15 = 1;
        if (this_ptr->buffer_id == 0) break;
LAB_005a6ab8:
        if (bVar1) {
          count = *(int *)(*(int *)(local_1c + 0x78) + 0x108) * (int)lock_length;
          uVar8 = *(uint *)(*(int *)(local_1c + 0x78) + 0x104);
          local_14 = lock_length;
          if (uVar8 < 8) {
LAB_005a6adf:
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 0x5ca;
            core_main_c_displayErrorAndQuit_FUN_00506f10("generateSilence - invalid bit depth!");
          }
          else if (uVar8 < 9) {
            crt_memory_c_memset_FUN_005fde40(pcVar9,0x80,count);
          }
          else {
            if (uVar8 != 0x10) goto LAB_005a6adf;
            crt_memory_c_memset_FUN_005fde40(pcVar9,0,count * 2);
          }
        }
        else if (this_ptr->mp3_data == (CMP3Decoder *)0x0) {
          if (this_ptr->file_handle == (FILE *)0x0) {
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 0x879;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Can't stream unless we have mp3 decoder or open wav file!");
          }
          count_00 = this_ptr->file_handle;
          size = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(this_ptr);
          local_14 = (CSfxSlot *)
                     crt_stdio_c_fread_FUN_005fd990(pcVar9,size,(SIZE_T)count_00,(FILE *)file);
          if ((this_ptr->file_handle->_flag & 0x20) != 0) {
            sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(this_ptr);
            pcVar9 = "Error reading %s while streaming\n";
            file = this_ptr;
            goto LAB_005a69da;
          }
        }
        else {
          sound_mp3_cpp_CMP3Decoder_read_FUN_00534a60
                    (this_ptr->mp3_data,(short *)pcVar9,(int)lock_length);
        }
        if ((iVar15 == 0) || ((int)local_14 < 1)) {
          if (bVar2) goto LAB_005a6b5d;
        }
        else {
          pcVar9 = (char *)sound_sndmain_cpp_CSfxSample_lock_FUN_005a6430
                                     (this_ptr,this_ptr->stream_write_position,(int)local_14);
          if (pcVar9 == (char *)0x0) {
            pcVar9 = "Error locking %s while streaming\n";
            goto LAB_005a69da;
          }
          iVar7 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(this_ptr);
          pcVar10 = g_SfxStreamReadBuffer;
          for (uVar8 = (uint)((int)local_14 * iVar7) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(uint *)pcVar9 = *(uint *)pcVar10;
            pcVar10 = pcVar10 + ((uint)bVar11 * -2 + 1) * 4;
            pcVar9 = pcVar9 + ((uint)bVar11 * -2 + 1) * 4;
          }
          for (uVar8 = (int)local_14 * iVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar9 = *pcVar10;
            pcVar10 = pcVar10 + (uint)bVar11 * -2 + 1;
            pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
          }
LAB_005a6b5d:
          sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(this_ptr);
        }
        if ((int)lock_length < (int)local_14) {
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 0x8a0;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("MP3 decoded more than batch: r = %d, batch = %d",local_14,lock_length);
        }
        if (lock_length != local_14) {
          (this_ptr->sample_info).sample_count =
               (int)(local_14->options).userdata + this_ptr->stream_read_position + -0x54;
        }
        pCVar5 = (CSfxSlot *)((int)pCVar5 - (int)local_14);
        iVar7 = (int)(local_14->options).userdata + this_ptr->stream_write_position + -0x54;
        this_ptr->stream_read_position =
             (int)(local_14->options).userdata + this_ptr->stream_read_position + -0x54;
        this_ptr->stream_write_position = iVar7;
        if (this_ptr->streaming_buffer_size <= iVar7) {
          this_ptr->stream_write_position = 0;
        }
      }
      pcVar9 = (char *)sound_sndmain_cpp_CSfxSample_lock_FUN_005a6430
                                 (this_ptr,this_ptr->stream_write_position,(int)lock_length);
      if ((short *)pcVar9 != (short *)0x0) {
        iVar15 = 0;
        bVar2 = true;
        goto LAB_005a6ab8;
      }
      pcVar9 = "Error locking %s while streaming\n";
LAB_005a69da:
      sound_sndmain_cpp_logSoundError_FUN_005adba0(pcVar9,file);
LAB_005a69e2:
      sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(local_14);
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(this_ptr);
      return 0;
    }
  }
  return 1;
}
