// Name: sound_sndmain.cpp_CSfxSample_pollStream_FUN_005a6730
// Address: 005a6730
// Address Range: [[005a6730, 005a6cd8]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_CSfxSample_pollStream_FUN_005a6730(CSfxSample * this_ptr, float time_window, float update_interval)
// Cross-references:
//   sound_sndmain.cpp_pollAllStreams_FUN_005ace90 (005ace90) at 005acede [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfx_FUN_005a8e90 (005a8e90) at 005a90ea [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_0064fc6b
//   TerminatedCString s_generateSilence_invalid__0064fc80
//   TerminatedCString s_sound_sndmain_cpp_0064feea
//   TerminatedCString s_SfxSlot_pollStream_must__0064feff
//   TerminatedCString s_sound_sndmain_cpp_0064ff25
//   TerminatedCString s_SfxSample_pollStream_my__0064ff3a
//   TerminatedCString s_SfxSample_pollStream_no__0064ff6f
//   TerminatedCString s_sound_sndmain_cpp_0064ff99
//   TerminatedCString s_SfxSample_pollStream_can_0064ffae
//   TerminatedCString s_SfxSample_pollStream_err_0064fff7
//   TerminatedCString s_sound_sndmain_cpp_00650035
//   TerminatedCString s_nextLoadSampleDest_d_all_0065004a
//   TerminatedCString s_Error_locking_s_while_st_00650074
//   TerminatedCString s_sound_sndmain_cpp_00650096
//   TerminatedCString s_Can_t_stream_unless_we_h_006500ab
//   TerminatedCString s_Error_reading_s_while_st_006500e5
//   TerminatedCString s_Error_locking_s_while_st_00650107
//   TerminatedCString s_sound_sndmain_cpp_00650129
//   TerminatedCString s_MP3_decoded_more_than_ba_0065013e
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   char[15360] g_SfxStreamReadBuffer
//   undefined4 DAT_03f5164c
//   undefined4 DAT_03f5164d
//   CSfxSlot[64] g_SfxSlots
//   undefined4 g_SfxSlots[0].field_20[76]
//   undefined4 DAT_03f5db14
//   undefined4 g_SfxSlots[0].field7_0x74
//   undefined4 DAT_03f5db1c
//   undefined4 g_SfxSlots[0].field_284[0]
//   CSoundDevice* g_CSoundDevicePtr
//   int g_SoundLockCount
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_fread_FUN_005fd990
//   sound_mp3.cpp_CMP3Decoder_read_FUN_00534a60
//   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
//   sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550
//   sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0
//   sound_sndmain.cpp_CSfxSample_lock_FUN_005a6430
//   sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540
//   sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0
//   sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
//   sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0
//   sound_sndmain.cpp_logSoundError_FUN_005adba0

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
  undefined4 in_EDX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int iVar9;
  undefined4 extraout_EDX_02;
  CSfxSlot *lock_length;
  char *pcVar10;
  char *pcVar11;
  byte bVar12;
  float10 fVar13;
  double dVar14;
  char *in_stack_ffffffc8;
  FILE *count_00;
  CSfxSample *file;
  undefined4 uVar15;
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
                 CONCAT22((short)((uint)local_14 >> 0x10),
                          (ushort)(dVar1 < dVar14) << 8 | (ushort)(NAN(dVar1) || NAN(dVar14)) << 10
                          | (ushort)(dVar1 == dVar14) << 0xe);
        if (dVar1 < dVar14 || (dVar1 == dVar14) != 0) goto LAB_005a69e2;
      }
    }
    dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,pCVar6));
    fVar13 = (float10)this_ptr->stream_write_position -
             (float10)local_28->prev_hardware_playback_pos;
    dVar14 = crt_math_c_round_FUN_005fe6b0
                       ((double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),local_28));
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
                       ((double)CONCAT44(iVar9,this_ptr->streaming_buffer_size + -1));
    file = (CSfxSample *)(int)ROUND(fVar13);
    if ((int)SUB84(dVar14,0) < (int)ROUND(fVar13)) {
      file = SUB84(dVar14,0);
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
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
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


// Assembly code:
// 005a6730: PUSH EBX
//   Label: sound_sndmain.cpp_CSfxSample_pollStream_FUN_005a6730
// 005a6731: PUSH ESI
// 005a6732: PUSH EDI
// 005a6733: PUSH EBP
// 005a6734: SUB ESP,0x24
// 005a6737: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 005a673b: CMP dword ptr [0x03f6940c],0x0
//   XREF to: 03f6940c (READ)
// 005a6742: JLE 0x005a6a02
//   XREF to: 005a6a02 (CONDITIONAL_JUMP)
// 005a6748: MOV EDI,dword ptr [EBX + 0x15c]
//   Label: LAB_005a6748
// 005a674e: TEST EDI,EDI
// 005a6750: JL 0x005a6a2a
//   XREF to: 005a6a2a (CONDITIONAL_JUMP)
// 005a6756: LEA EAX,[EDI*0x8 + 0x0]
// 005a675d: ADD EAX,EDI
// 005a675f: SHL EAX,0x2
// 005a6762: ADD EAX,EDI
// 005a6764: MOV ECX,0x3f5daa4
//   XREF to: 03f5daa4 (DATA)
// 005a6769: SHL EAX,0x3
// 005a676c: ADD ECX,EAX
// 005a676e: MOV EBP,dword ptr [ECX + 0x74]
//   XREF to: 03f5db18 (DATA)
// 005a6771: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 005a6775: TEST EBP,EBP
// 005a6777: JNZ 0x005a6a37
//   XREF to: 005a6a37 (CONDITIONAL_JUMP)
// 005a677d: MOV ECX,0x64ff25
//   Label: LAB_005a677d
//   XREF to: 0064ff25 (PARAM)
// 005a6782: MOV ESI,0x7d1
// 005a6787: PUSH 0x64ff3a
//   XREF to: 0064ff3a (DATA)
// 005a678c: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005a6792: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005a6798: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a679d: ADD ESP,0x4
// 005a67a0: CMP dword ptr [0x03f69268],0x0
//   Label: LAB_005a67a0
//   XREF to: 03f69268 (READ)
// 005a67a7: JZ 0x005a6a45
//   XREF to: 005a6a45 (CONDITIONAL_JUMP)
// 005a67ad: CMP dword ptr [EBX + 0x124],0x1
// 005a67b4: JZ 0x005a67d9
//   XREF to: 005a67d9 (CONDITIONAL_JUMP)
// 005a67b6: PUSH EBX
// 005a67b7: MOV EAX,0x64ff99
//   XREF to: 0064ff99 (PARAM)
// 005a67bc: MOV EDX,0x7e2
// 005a67c1: PUSH 0x64ffae
//   XREF to: 0064ffae (DATA)
// 005a67c6: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005a67cb: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005a67d1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a67d6: ADD ESP,0x8
// 005a67d9: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_005a67d9
//   XREF to: Stack[-0x1c] (READ)
// 005a67dd: CMP dword ptr [EAX + 0x70],0x0
//   XREF to: 03f5db14 (DATA)
// 005a67e1: JZ 0x005a6820
//   XREF to: 005a6820 (CONDITIONAL_JUMP)
// 005a67e3: PUSH EAX
// 005a67e4: CALL sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0
//   XREF to: 005a80e0 (UNCONDITIONAL_CALL)
// 005a67e9: ADD ESP,0x4
// 005a67ec: TEST EAX,EAX
// 005a67ee: JZ 0x005a6a54
//   XREF to: 005a6a54 (CONDITIONAL_JUMP)
// 005a67f4: PUSH EBX
// 005a67f5: CALL sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0
//   XREF to: 005a87d0 (UNCONDITIONAL_CALL)
// 005a67fa: ADD ESP,0x4
// 005a67fd: TEST EAX,EAX
// 005a67ff: JNZ 0x005a6820
//   XREF to: 005a6820 (CONDITIONAL_JUMP)
// 005a6801: CMP dword ptr [EBX + 0x110],0x0
// 005a6808: JL 0x005a6820
//   XREF to: 005a6820 (CONDITIONAL_JUMP)
// 005a680a: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (READ)
// 005a680e: FILD dword ptr [EBX + 0x110]
// 005a6814: FCOMP double ptr [EAX + 0x60]
//   XREF to: 03f5db04 (DATA)
// 005a6817: FNSTSW AX
// 005a6819: SAHF
// 005a681a: JBE 0x005a69e2
//   XREF to: 005a69e2 (CONDITIONAL_JUMP)
// 005a6820: FILD dword ptr [EBX + 0x10c]
//   Label: LAB_005a6820
// 005a6826: FMUL float ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 005a682a: MOV EBP,dword ptr [EBX + 0x160]
// 005a6830: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a6835: FISTP dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x30] (WRITE)
// 005a6839: CMP EBP,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x30] (READ)
// 005a683d: JGE 0x005a6843
//   XREF to: 005a6843 (CONDITIONAL_JUMP)
// 005a683f: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0x30] (WRITE)
// 005a6843: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_005a6843
//   XREF to: Stack[-0x1c] (READ)
// 005a6847: FILD dword ptr [EBX + 0x168]
// 005a684d: FSUB double ptr [EAX + 0x11c]
//   XREF to: 03f5dbc0 (DATA)
// 005a6853: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a6858: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x2c] (WRITE)
// 005a685c: CMP dword ptr [ESP + 0x8],0x0
//   XREF to: Stack[-0x2c] (READ)
// 005a6861: JL 0x005a6a66
//   XREF to: 005a6a66 (CONDITIONAL_JUMP)
// 005a6867: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_005a6867
//   XREF to: Stack[-0x2c] (READ)
// 005a686b: CMP EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x30] (READ)
// 005a686f: JGE 0x005a6a2a
//   XREF to: 005a6a2a (CONDITIONAL_JUMP)
// 005a6875: MOV ESI,0x5f5e0ff
// 005a687a: MOV EDI,dword ptr [EBX + 0x158]
// 005a6880: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 005a6884: TEST EDI,EDI
// 005a6886: JZ 0x005a68a3
//   XREF to: 005a68a3 (CONDITIONAL_JUMP)
// 005a6888: PUSH EBX
// 005a6889: CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550
//   XREF to: 005a8550 (UNCONDITIONAL_CALL)
// 005a688e: MOV ECX,EAX
// 005a6890: MOV EAX,0x3c00
// 005a6895: MOV EDX,EAX
// 005a6897: SAR EDX,0x1f
// 005a689a: IDIV ECX
// 005a689c: ADD ESP,0x4
// 005a689f: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005a68a3: FILD dword ptr [EBX + 0x10c]
//   Label: LAB_005a68a3
// 005a68a9: MOV EAX,dword ptr [EBX + 0x160]
// 005a68af: FMUL float ptr [ESP + 0x40]
//   XREF to: Stack[0xc] (READ)
// 005a68b3: DEC EAX
// 005a68b4: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a68b9: FISTP dword ptr [ESP]
//   XREF to: Stack[-0x34] (DATA)
// 005a68bc: CMP EAX,dword ptr [ESP]
//   XREF to: Stack[-0x34] (DATA)
// 005a68bf: JGE 0x005a68c4
//   XREF to: 005a68c4 (CONDITIONAL_JUMP)
// 005a68c1: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x34] (DATA)
// 005a68c4: MOV EAX,dword ptr [ESP]
//   Label: LAB_005a68c4
//   XREF to: Stack[-0x34] (DATA)
// 005a68c7: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x2c] (READ)
// 005a68cb: SUB EAX,EDX
// 005a68cd: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005a68d1: TEST EAX,EAX
// 005a68d3: JLE 0x005a6bf2
//   XREF to: 005a6bf2 (CONDITIONAL_JUMP)
// 005a68d9: MOV EDI,dword ptr [EBX + 0x168]
//   Label: LAB_005a68d9
// 005a68df: TEST EDI,EDI
// 005a68e1: JL 0x005a68eb
//   XREF to: 005a68eb (CONDITIONAL_JUMP)
// 005a68e3: CMP EDI,dword ptr [EBX + 0x160]
// 005a68e9: JL 0x005a691b
//   XREF to: 005a691b (CONDITIONAL_JUMP)
// 005a68eb: MOV ECX,dword ptr [EBX + 0x160]
//   Label: LAB_005a68eb
// 005a68f1: PUSH ECX
// 005a68f2: MOV ESI,dword ptr [EBX + 0x168]
// 005a68f8: PUSH ESI
// 005a68f9: MOV EAX,0x650035
//   XREF to: 00650035 (PARAM)
// 005a68fe: MOV EDX,0x827
// 005a6903: PUSH 0x65004a
//   XREF to: 0065004a (DATA)
// 005a6908: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005a690d: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005a6913: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a6918: ADD ESP,0xc
// 005a691b: MOV EDI,dword ptr [EBX + 0x168]
//   Label: LAB_005a691b
// 005a6921: MOV EBP,dword ptr [EBX + 0x160]
// 005a6927: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 005a692b: SUB EBP,EDI
// 005a692d: CMP EBP,EAX
// 005a692f: JLE 0x005a6933
//   XREF to: 005a6933 (CONDITIONAL_JUMP)
// 005a6931: MOV EBP,EAX
// 005a6933: MOV EDX,dword ptr [ESP + 0xc]
//   Label: LAB_005a6933
//   XREF to: Stack[-0x28] (READ)
// 005a6937: CMP EBP,EDX
// 005a6939: JLE 0x005a693d
//   XREF to: 005a693d (CONDITIONAL_JUMP)
// 005a693b: MOV EBP,EDX
// 005a693d: MOV ECX,dword ptr [EBX + 0x110]
//   Label: LAB_005a693d
// 005a6943: XOR EDI,EDI
// 005a6945: TEST ECX,ECX
// 005a6947: JL 0x005a6997
//   XREF to: 005a6997 (CONDITIONAL_JUMP)
// 005a6949: CMP ECX,dword ptr [EBX + 0x164]
// 005a694f: JG 0x005a6a92
//   XREF to: 005a6a92 (CONDITIONAL_JUMP)
// 005a6955: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (READ)
// 005a6959: MOV ECX,dword ptr [EAX + 0x78]
//   XREF to: 03f5db1c (DATA)
// 005a695c: PUSH ECX
// 005a695d: CALL sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0
//   XREF to: 005a87d0 (UNCONDITIONAL_CALL)
// 005a6962: ADD ESP,0x4
// 005a6965: TEST EAX,EAX
// 005a6967: JZ 0x005a6a7b
//   XREF to: 005a6a7b (CONDITIONAL_JUMP)
// 005a696d: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (READ)
// 005a6971: MOV EAX,dword ptr [EAX + 0x78]
//   XREF to: 03f5db1c (DATA)
// 005a6974: MOV ECX,dword ptr [EAX + 0x110]
// 005a697a: CMP ECX,dword ptr [EAX + 0x160]
// 005a6980: JZ 0x005a6a7b
//   XREF to: 005a6a7b (CONDITIONAL_JUMP)
// 005a6986: MOV EDX,dword ptr [EBX + 0x168]
// 005a698c: PUSH EDX
// 005a698d: PUSH EDI
// 005a698e: PUSH EAX
// 005a698f: CALL sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0
//   XREF to: 005a65a0 (UNCONDITIONAL_CALL)
// 005a6994: ADD ESP,0xc
// 005a6997: MOV ECX,0x1
//   Label: LAB_005a6997
// 005a699c: MOV ESI,0x3f51648
//   XREF to: 03f51648 (DATA)
// 005a69a1: XOR EAX,EAX
// 005a69a3: MOV EDX,dword ptr [EBX + 0x158]
// 005a69a9: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005a69ad: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 005a69b1: TEST EDX,EDX
// 005a69b3: JNZ 0x005a6ab8
//   XREF to: 005a6ab8 (CONDITIONAL_JUMP)
// 005a69b9: PUSH EBP
// 005a69ba: MOV ECX,dword ptr [EBX + 0x168]
// 005a69c0: PUSH ECX
// 005a69c1: PUSH EBX
// 005a69c2: CALL sound_sndmain.cpp_CSfxSample_lock_FUN_005a6430
//   XREF to: 005a6430 (UNCONDITIONAL_CALL)
// 005a69c7: ADD ESP,0xc
// 005a69ca: MOV ESI,EAX
// 005a69cc: TEST EAX,EAX
// 005a69ce: JNZ 0x005a6aa9
//   XREF to: 005a6aa9 (CONDITIONAL_JUMP)
// 005a69d4: PUSH EBX
// 005a69d5: PUSH 0x650074
//   XREF to: 00650074 (DATA)
// 005a69da: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   Label: LAB_005a69da
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005a69df: ADD ESP,0x8
// 005a69e2: MOV EBP,dword ptr [ESP + 0x18]
//   Label: LAB_005a69e2
//   XREF to: Stack[-0x1c] (READ)
// 005a69e6: PUSH EBP
// 005a69e7: CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
//   XREF to: 005a7e60 (UNCONDITIONAL_CALL)
// 005a69ec: ADD ESP,0x4
// 005a69ef: PUSH EBX
// 005a69f0: CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
//   XREF to: 005a62c0 (UNCONDITIONAL_CALL)
// 005a69f5: ADD ESP,0x4
// 005a69f8: XOR EAX,EAX
// 005a69fa: ADD ESP,0x24
// 005a69fd: POP EBP
// 005a69fe: POP EDI
// 005a69ff: POP ESI
// 005a6a00: POP EBX
// 005a6a01: RET
// 005a6a02: MOV ECX,0x64feea
//   Label: LAB_005a6a02
//   XREF to: 0064feea (PARAM)
// 005a6a07: MOV ESI,0x7c4
// 005a6a0c: PUSH 0x64feff
//   XREF to: 0064feff (DATA)
// 005a6a11: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005a6a17: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005a6a1d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a6a22: ADD ESP,0x4
// 005a6a25: JMP 0x005a6748
//   XREF to: 005a6748 (UNCONDITIONAL_JUMP)
// 005a6a2a: MOV EAX,0x1
//   Label: LAB_005a6a2a
// 005a6a2f: ADD ESP,0x24
// 005a6a32: POP EBP
// 005a6a33: POP EDI
// 005a6a34: POP ESI
// 005a6a35: POP EBX
// 005a6a36: RET
// 005a6a37: CMP EBX,dword ptr [ECX + 0x78]
//   Label: LAB_005a6a37
//   XREF to: 03f5db1c (DATA)
// 005a6a3a: JNZ 0x005a677d
//   XREF to: 005a677d (CONDITIONAL_JUMP)
// 005a6a40: JMP 0x005a67a0
//   XREF to: 005a67a0 (UNCONDITIONAL_JUMP)
// 005a6a45: PUSH 0x64ff6f
//   Label: LAB_005a6a45
//   XREF to: 0064ff6f (DATA)
// 005a6a4a: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005a6a4f: ADD ESP,0x4
// 005a6a52: JMP 0x005a69e2
//   XREF to: 005a69e2 (UNCONDITIONAL_JUMP)
// 005a6a54: PUSH 0x64fff7
//   Label: LAB_005a6a54
//   XREF to: 0064fff7 (DATA)
// 005a6a59: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005a6a5e: ADD ESP,0x4
// 005a6a61: JMP 0x005a69e2
//   XREF to: 005a69e2 (UNCONDITIONAL_JUMP)
// 005a6a66: MOV EDX,dword ptr [ESP + 0x8]
//   Label: LAB_005a6a66
//   XREF to: Stack[-0x2c] (READ)
// 005a6a6a: MOV EAX,dword ptr [EBX + 0x160]
// 005a6a70: ADD EDX,EAX
// 005a6a72: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 005a6a76: JMP 0x005a6867
//   XREF to: 005a6867 (UNCONDITIONAL_JUMP)
// 005a6a7b: CMP dword ptr [EBX + 0x158],0x0
//   Label: LAB_005a6a7b
// 005a6a82: JZ 0x005a6bf2
//   XREF to: 005a6bf2 (CONDITIONAL_JUMP)
// 005a6a88: MOV EDI,0x1
// 005a6a8d: JMP 0x005a6997
//   XREF to: 005a6997 (UNCONDITIONAL_JUMP)
// 005a6a92: MOV EAX,ECX
//   Label: LAB_005a6a92
// 005a6a94: SUB EAX,dword ptr [EBX + 0x164]
// 005a6a9a: CMP EBP,EAX
// 005a6a9c: JLE 0x005a6997
//   XREF to: 005a6997 (CONDITIONAL_JUMP)
// 005a6aa2: MOV EBP,EAX
// 005a6aa4: JMP 0x005a6997
//   XREF to: 005a6997 (UNCONDITIONAL_JUMP)
// 005a6aa9: XOR EDX,EDX
//   Label: LAB_005a6aa9
// 005a6aab: MOV EAX,0x1
// 005a6ab0: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005a6ab4: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005a6ab8: TEST EDI,EDI
//   Label: LAB_005a6ab8
// 005a6aba: JZ 0x005a6c32
//   XREF to: 005a6c32 (CONDITIONAL_JUMP)
// 005a6ac0: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (READ)
// 005a6ac4: MOV EAX,dword ptr [EAX + 0x78]
//   XREF to: 03f5db1c (DATA)
// 005a6ac7: MOV ECX,dword ptr [EAX + 0x108]
// 005a6acd: IMUL ECX,EBP
// 005a6ad0: MOV EAX,dword ptr [EAX + 0x104]
// 005a6ad6: CMP EAX,0x8
// 005a6ad9: JNC 0x005a6c26
//   XREF to: 005a6c26 (CONDITIONAL_JUMP)
// 005a6adf: MOV ESI,0x64fc6b
//   Label: LAB_005a6adf
//   XREF to: 0064fc6b (DATA)
// 005a6ae4: MOV EDI,0x5ca
// 005a6ae9: PUSH 0x64fc80
//   XREF to: 0064fc80 (DATA)
// 005a6aee: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005a6af4: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005a6afa: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a6aff: ADD ESP,0x4
// 005a6b02: MOV dword ptr [ESP + 0x20],EBP
//   Label: LAB_005a6b02
//   XREF to: Stack[-0x14] (WRITE)
// 005a6b06: CMP dword ptr [ESP + 0x10],0x0
//   Label: LAB_005a6b06
//   XREF to: Stack[-0x24] (READ)
// 005a6b0b: JZ 0x005a6cc9
//   XREF to: 005a6cc9 (CONDITIONAL_JUMP)
// 005a6b11: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 005a6b15: TEST EDX,EDX
// 005a6b17: JLE 0x005a6cc9
//   XREF to: 005a6cc9 (CONDITIONAL_JUMP)
// 005a6b1d: PUSH EDX
// 005a6b1e: MOV EDI,dword ptr [EBX + 0x168]
// 005a6b24: PUSH EDI
// 005a6b25: PUSH EBX
// 005a6b26: CALL sound_sndmain.cpp_CSfxSample_lock_FUN_005a6430
//   XREF to: 005a6430 (UNCONDITIONAL_CALL)
// 005a6b2b: MOV EDI,EAX
// 005a6b2d: ADD ESP,0xc
// 005a6b30: TEST EAX,EAX
// 005a6b32: JZ 0x005a6cbe
//   XREF to: 005a6cbe (CONDITIONAL_JUMP)
// 005a6b38: PUSH EBX
// 005a6b39: CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550
//   XREF to: 005a8550 (UNCONDITIONAL_CALL)
// 005a6b3e: ADD ESP,0x4
// 005a6b41: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 005a6b45: IMUL ECX,EAX
// 005a6b48: MOV ESI,0x3f51648
//   XREF to: 03f51648 (DATA)
// 005a6b4d: PUSH EDI
// 005a6b4e: MOV EAX,ECX
// 005a6b50: SHR ECX,0x2
// 005a6b53: MOVSD.REP ES:EDI,ESI
//   XREF to: 03f51648 (READ)
//   XREF to: 03f5164c (READ)
// 005a6b55: MOV CL,AL
// 005a6b57: AND CL,0x3
// 005a6b5a: MOVSB.REP ES:EDI,ESI
//   XREF to: 03f51648 (READ)
//   XREF to: 03f5164c (READ)
//   XREF to: 03f5164d (READ)
// 005a6b5c: POP EDI
// 005a6b5d: PUSH EBX
//   Label: LAB_005a6b5d
// 005a6b5e: CALL sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540
//   XREF to: 005a6540 (UNCONDITIONAL_CALL)
// 005a6b63: ADD ESP,0x4
// 005a6b66: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_005a6b66
//   XREF to: Stack[-0x14] (READ)
// 005a6b6a: CMP EBP,EAX
// 005a6b6c: JGE 0x005a6b93
//   XREF to: 005a6b93 (CONDITIONAL_JUMP)
// 005a6b6e: PUSH EBP
// 005a6b6f: PUSH EAX
// 005a6b70: MOV EDX,0x650129
//   XREF to: 00650129 (PARAM)
// 005a6b75: MOV ECX,0x8a0
// 005a6b7a: PUSH 0x65013e
//   XREF to: 0065013e (DATA)
// 005a6b7f: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005a6b85: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005a6b8b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a6b90: ADD ESP,0xc
// 005a6b93: MOV EDI,dword ptr [ESP + 0x20]
//   Label: LAB_005a6b93
//   XREF to: Stack[-0x14] (READ)
// 005a6b97: CMP EBP,EDI
// 005a6b99: JZ 0x005a6ba9
//   XREF to: 005a6ba9 (CONDITIONAL_JUMP)
// 005a6b9b: MOV EAX,dword ptr [EBX + 0x164]
// 005a6ba1: ADD EAX,EDI
// 005a6ba3: MOV dword ptr [EBX + 0x110],EAX
// 005a6ba9: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_005a6ba9
//   XREF to: Stack[-0x14] (READ)
// 005a6bad: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 005a6bb1: MOV ECX,dword ptr [EBX + 0x164]
// 005a6bb7: MOV ESI,dword ptr [EBX + 0x168]
// 005a6bbd: MOV EDI,dword ptr [EBX + 0x160]
// 005a6bc3: ADD ECX,EAX
// 005a6bc5: SUB EDX,EAX
// 005a6bc7: ADD ESI,EAX
// 005a6bc9: MOV dword ptr [EBX + 0x164],ECX
// 005a6bcf: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005a6bd3: MOV dword ptr [EBX + 0x168],ESI
// 005a6bd9: CMP ESI,EDI
// 005a6bdb: JL 0x005a6be7
//   XREF to: 005a6be7 (CONDITIONAL_JUMP)
// 005a6bdd: MOV dword ptr [EBX + 0x168],0x0
// 005a6be7: CMP dword ptr [ESP + 0x1c],0x0
//   Label: LAB_005a6be7
//   XREF to: Stack[-0x18] (READ)
// 005a6bec: JG 0x005a68d9
//   XREF to: 005a68d9 (CONDITIONAL_JUMP)
// 005a6bf2: MOV EAX,0x1
//   Label: LAB_005a6bf2
// 005a6bf7: ADD ESP,0x24
// 005a6bfa: POP EBP
// 005a6bfb: POP EDI
// 005a6bfc: POP ESI
// 005a6bfd: POP EBX
// 005a6bfe: RET
// 005a6bff: PUSH ECX
//   Label: LAB_005a6bff
// 005a6c00: PUSH 0x80
// 005a6c05: PUSH ESI
//   XREF to: 03f51648 (DATA)
// 005a6c06: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005a6c0b: ADD ESP,0xc
// 005a6c0e: JMP 0x005a6b02
//   XREF to: 005a6b02 (UNCONDITIONAL_JUMP)
// 005a6c13: ADD ECX,ECX
//   Label: LAB_005a6c13
// 005a6c15: PUSH ECX
// 005a6c16: PUSH 0x0
// 005a6c18: PUSH ESI
//   XREF to: 03f51648 (DATA)
// 005a6c19: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005a6c1e: ADD ESP,0xc
// 005a6c21: JMP 0x005a6b02
//   XREF to: 005a6b02 (UNCONDITIONAL_JUMP)
// 005a6c26: JBE 0x005a6bff
//   Label: LAB_005a6c26
//   XREF to: 005a6bff (CONDITIONAL_JUMP)
// 005a6c28: CMP EAX,0x10
// 005a6c2b: JZ 0x005a6c13
//   XREF to: 005a6c13 (CONDITIONAL_JUMP)
// 005a6c2d: JMP 0x005a6adf
//   XREF to: 005a6adf (UNCONDITIONAL_JUMP)
// 005a6c32: MOV ECX,dword ptr [EBX + 0x16c]
//   Label: LAB_005a6c32
// 005a6c38: TEST ECX,ECX
// 005a6c3a: JNZ 0x005a6caa
//   XREF to: 005a6caa (CONDITIONAL_JUMP)
// 005a6c3c: CMP dword ptr [EBX + 0x174],0x0
// 005a6c43: JNZ 0x005a6c67
//   XREF to: 005a6c67 (CONDITIONAL_JUMP)
// 005a6c45: MOV EAX,0x650096
//   XREF to: 00650096 (PARAM)
// 005a6c4a: MOV EDX,0x879
// 005a6c4f: PUSH 0x6500ab
//   XREF to: 006500ab (DATA)
// 005a6c54: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005a6c59: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005a6c5f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a6c64: ADD ESP,0x4
// 005a6c67: MOV ECX,dword ptr [EBX + 0x174]
//   Label: LAB_005a6c67
// 005a6c6d: PUSH ECX
// 005a6c6e: PUSH EBP
// 005a6c6f: PUSH EBX
// 005a6c70: CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550
//   XREF to: 005a8550 (UNCONDITIONAL_CALL)
// 005a6c75: ADD ESP,0x4
// 005a6c78: PUSH EAX
// 005a6c79: PUSH ESI
// 005a6c7a: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 005a6c7f: ADD ESP,0x10
// 005a6c82: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005a6c86: MOV EAX,dword ptr [EBX + 0x174]
// 005a6c8c: TEST byte ptr [EAX + 0xc],0x20
// 005a6c90: JZ 0x005a6b06
//   XREF to: 005a6b06 (CONDITIONAL_JUMP)
// 005a6c96: PUSH EBX
// 005a6c97: CALL sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540
//   XREF to: 005a6540 (UNCONDITIONAL_CALL)
// 005a6c9c: ADD ESP,0x4
// 005a6c9f: PUSH EBX
// 005a6ca0: PUSH 0x6500e5
//   XREF to: 006500e5 (DATA)
// 005a6ca5: JMP 0x005a69da
//   XREF to: 005a69da (UNCONDITIONAL_JUMP)
// 005a6caa: PUSH EBP
//   Label: LAB_005a6caa
// 005a6cab: PUSH ESI
// 005a6cac: PUSH ECX
// 005a6cad: CALL sound_mp3.cpp_CMP3Decoder_read_FUN_00534a60
//   XREF to: 00534a60 (UNCONDITIONAL_CALL)
// 005a6cb2: ADD ESP,0xc
// 005a6cb5: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005a6cb9: JMP 0x005a6b06
//   XREF to: 005a6b06 (UNCONDITIONAL_JUMP)
// 005a6cbe: PUSH EBX
//   Label: LAB_005a6cbe
// 005a6cbf: PUSH 0x650107
//   XREF to: 00650107 (DATA)
// 005a6cc4: JMP 0x005a69da
//   XREF to: 005a69da (UNCONDITIONAL_JUMP)
// 005a6cc9: CMP dword ptr [ESP + 0x14],0x0
//   Label: LAB_005a6cc9
//   XREF to: Stack[-0x20] (READ)
// 005a6cce: JNZ 0x005a6b5d
//   XREF to: 005a6b5d (CONDITIONAL_JUMP)
// 005a6cd4: JMP 0x005a6b66
//   XREF to: 005a6b66 (UNCONDITIONAL_JUMP)
