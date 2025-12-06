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
  double dVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  CSfxSlot *pCVar6;
  CSfxSlot *pCVar7;
  SIZE_T size;
  ulong count;
  uint uVar8;
  uint in_EDX;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  int iVar9;
  uint extraout_EDX_02;
  CSfxSlot *lock_length;
  char *pcVar10;
  char *pcVar11;
  byte bVar12;
  float10 fVar13;
  double dVar14;
  char *in_stack_ffffffc8;
  FILE *count_00;
  CSfxSample *file;
  uint uVar15;
  int in_stack_ffffffd4;
  CSfxSlot *local_28;
  int local_1c;
  CSfxSlot *local_14;
  
  bVar12 = 0;
  if (g_SoundLockCount < 1) {
    in_stack_ffffffc8 = "SfxSlot::pollStream - must be locked!";
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x7c4;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::pollStream - must be locked!");
    in_EDX = extraout_EDX_02;
  }
  iVar5 = this_ptr->streaming_slot_index;
  if (iVar5 < 0) {
    return 1;
  }
  pCVar6 = g_SfxSlots + iVar5;
  if ((g_SfxSlots[iVar5].playback_state == 0) || (this_ptr != g_SfxSlots[iVar5].sample)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x7d1;
    in_stack_ffffffc8 = (char *)0x5a679d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSample::pollStream - my sfx isn't active with me!");
    in_EDX = extraout_EDX;
  }
  if (g_CSoundDevicePtr == (CSoundDevice *)0x0) {
    sound_sndmain_cpp_logSoundError_FUN_005adba0("SfxSample::pollStream - no sound device?\n");
  }
  else {
    if (this_ptr->loop_marker_count != 1) {
      in_stack_ffffffc8 = "SfxSample::pollStream - cannot stream sample with exotic loop points: %s";
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 0x7e2;
      core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSample::pollStream - cannot stream sample with exotic loop points: %s",this_ptr);
      in_EDX = extraout_EDX_00;
    }
    if (g_SfxSlots[iVar5].hardware_buffer_handle != 0) {
      iVar5 = sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0(pCVar6);
      if (iVar5 == 0) {
        sound_sndmain_cpp_logSoundError_FUN_005adba0("SfxSample::pollStream - error querrying hw playback position\n");
        goto LAB_005a69e2;
      }
      in_stack_ffffffc8 = (char *)0x5a67fa;
      pCVar6 = (CSfxSlot *)sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_005a87d0(this_ptr);
      in_EDX = extraout_EDX_01;
      if ((pCVar6 == (CSfxSlot *)0x0) && (-1 < (this_ptr->sample_info).sample_count)) {
        dVar1 = (double)(this_ptr->sample_info).sample_count;
        dVar14 = (local_14->options).trigger_time;
        pCVar6 = (CSfxSlot *)
                 CONCAT22 /* combine 2-byte values */((short)((uint)local_14 >> 0x10),
                          (ushort)(dVar1 < dVar14) << 8 | (ushort)(NAN(dVar1) || NAN(dVar14)) << 10
                          | (ushort)(dVar1 == dVar14) << 0xe);
        if (dVar1 < dVar14 || (dVar1 == dVar14) != 0) goto LAB_005a69e2;
      }
    }
    dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,pCVar6));
    fVar13 = (float10)this_ptr->stream_write_position -
             (float10)local_28->prev_hardware_playback_pos;
    dVar14 = crt_math_c_round_FUN_005fe6b0
                       ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar14 >> 0x20),local_28));
    iVar9 = (int)((ulonglong)dVar14 >> 0x20);
    iVar5 = (int)ROUND(fVar13);
    if (iVar5 < 0) {
      iVar9 = iVar5 + this_ptr->streaming_buffer_size;
      iVar5 = iVar9;
    }
    if ((int)in_stack_ffffffc8 <= iVar5) {
      return 1;
    }
    uVar15 = 99999999;
    if (this_ptr->buffer_id != 0) {
      iVar5 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(this_ptr);
      in_stack_ffffffd4 = (int)(0x3c00 / (longlong)iVar5);
      iVar9 = (int)(0x3c00 % (longlong)iVar5);
    }
    fVar13 = (float10)(this_ptr->sample_info).sample_rate * (float10)time_window;
    dVar14 = crt_math_c_round_FUN_005fe6b0
                       ((double)CONCAT44 /* combine 2-byte values */(iVar9,this_ptr->streaming_buffer_size + -1));
    file = (CSfxSample *)(int)ROUND(fVar13);
    if ((int)SUB84 /* extract 2-byte value */(dVar14,0) < (int)ROUND(fVar13)) {
      file = SUB84 /* extract 2-byte value */(dVar14,0);
    }
    pCVar6 = (CSfxSlot *)((int)file - in_stack_ffffffd4);
    while( true ) {
      if ((int)pCVar6 < 1) {
        return 1;
      }
      if ((this_ptr->stream_write_position < 0) ||
         (this_ptr->streaming_buffer_size <= this_ptr->stream_write_position)) {
        g_CurrentFilename = "..\\sound\\sndmain.cpp";
        g_CurrentLineNumber = 0x827;
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("nextLoadSampleDest = %d, allocLength = %d",this_ptr->stream_write_position,
                   this_ptr->streaming_buffer_size,file,uVar15);
      }
      lock_length = (CSfxSlot *)(this_ptr->streaming_buffer_size - this_ptr->stream_write_position);
      if ((int)pCVar6 < (int)lock_length) {
        lock_length = pCVar6;
      }
      if ((int)local_28 < (int)lock_length) {
        lock_length = local_28;
      }
      iVar5 = (this_ptr->sample_info).sample_count;
      bVar2 = false;
      if (-1 < iVar5) {
        if (this_ptr->stream_read_position < iVar5) {
          pCVar7 = (CSfxSlot *)(iVar5 - this_ptr->stream_read_position);
          if ((int)pCVar7 < (int)lock_length) {
            lock_length = pCVar7;
          }
        }
        else {
          iVar5 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_005a87d0
                            (*(CSfxSample **)(local_1c + 0x78));
          if ((iVar5 == 0) ||
             (this_ptr_00 = *(CSfxSample **)(local_1c + 0x78),
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
      pcVar10 = g_SfxStreamReadBuffer;
      bVar3 = false;
      bVar4 = true;
      if (this_ptr->buffer_id == 0) break;
LAB_005a6ab8:
      if (bVar2) {
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
          crt_memory_c_memset_FUN_005fde40(pcVar10,0x80,count);
        }
        else {
          if (uVar8 != 0x10) goto LAB_005a6adf;
          crt_memory_c_memset_FUN_005fde40(pcVar10,0,count * 2);
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
                   crt_stdio_c_fread_FUN_005fd990(pcVar10,size,(SIZE_T)count_00,(FILE *)file);
        if ((this_ptr->file_handle->_flag & 0x20) != 0) {
          sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(this_ptr);
          pcVar10 = "Error reading %s while streaming\n";
          file = this_ptr;
          goto LAB_005a69da;
        }
      }
      else {
        sound_mp3_cpp_CMP3Decoder_read_FUN_00534a60
                  (this_ptr->mp3_data,(short *)pcVar10,(int)lock_length);
      }
      if ((bVar4) && (0 < (int)local_14)) {
        pcVar10 = (char *)sound_sndmain_cpp_CSfxSample_lock_FUN_005a6430
                                    (this_ptr,this_ptr->stream_write_position,(int)local_14);
        if (pcVar10 == (char *)0x0) {
          pcVar10 = "Error locking %s while streaming\n";
          goto LAB_005a69da;
        }
        iVar5 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(this_ptr);
        pcVar11 = g_SfxStreamReadBuffer;
        for (uVar8 = (uint)((int)local_14 * iVar5) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(uint *)pcVar10 = *(uint *)pcVar11;
          pcVar11 = pcVar11 + ((uint)bVar12 * -2 + 1) * 4;
          pcVar10 = pcVar10 + ((uint)bVar12 * -2 + 1) * 4;
        }
        for (uVar8 = (int)local_14 * iVar5 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar10 = *pcVar11;
          pcVar11 = pcVar11 + (uint)bVar12 * -2 + 1;
          pcVar10 = pcVar10 + (uint)bVar12 * -2 + 1;
        }
LAB_005a6b5d:
        sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(this_ptr);
      }
      else if (bVar3) goto LAB_005a6b5d;
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
      pCVar6 = (CSfxSlot *)((int)pCVar6 - (int)local_14);
      iVar5 = (int)(local_14->options).userdata + this_ptr->stream_write_position + -0x54;
      this_ptr->stream_read_position =
           (int)(local_14->options).userdata + this_ptr->stream_read_position + -0x54;
      this_ptr->stream_write_position = iVar5;
      if (this_ptr->streaming_buffer_size <= iVar5) {
        this_ptr->stream_write_position = 0;
      }
    }
    pcVar10 = (char *)sound_sndmain_cpp_CSfxSample_lock_FUN_005a6430
                                (this_ptr,this_ptr->stream_write_position,(int)lock_length);
    if ((short *)pcVar10 != (short *)0x0) {
      bVar4 = false;
      bVar3 = true;
      goto LAB_005a6ab8;
    }
    pcVar10 = "Error locking %s while streaming\n";
LAB_005a69da:
    sound_sndmain_cpp_logSoundError_FUN_005adba0(pcVar10,file);
  }
LAB_005a69e2:
  sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(local_14);
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(this_ptr);
  return 0;
}
