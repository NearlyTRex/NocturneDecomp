// Name: sound_sndmain.cpp_CSfxSample_pollStream_FUN_00523ea0
// Address: 00523ea0
// Address Range: [[00523ea0, 0052440e]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSample_pollStream_FUN_00523ea0(CSfxSample *this_ptr,float time_window,float update_interval)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_CSfxSample_pollStream_FUN_00523ea0(CSfxSample *this_ptr,float time_window,float update_interval)

{
  CSfxSample *this_ptr_00;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  SIZE_T SVar6;
  SIZE_T SVar7;
  uint *puVar8;
  SIZE_T size;
  ulong count;
  uint uVar9;
  SIZE_T lock_length;
  short *output_buffer;
  uint *puVar10;
  byte bVar11;
  double dVar12;
  char *pcVar13;
  _FILE *file;
  uint uVar14;
  int iVar15;
  SIZE_T local_34;
  CSfxSlot *local_30;
  int local_28;
  SIZE_T local_20;
  
  bVar11 = 0;
  if (_DAT_02dc84bc < 1) {
    g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    g_INT_01cc4804 = 0x7be;
    core_main_c_FUN_004c8440("SfxSlot::kill - must be locked!");
  }
  iVar15 = this_ptr->streaming_slot_index;
  if (-1 < iVar15) {
    if ((g_CSfxSlot_ARRAY_02dbd374[iVar15].playback_state == 0) ||
       (this_ptr != g_CSfxSlot_ARRAY_02dbd374[iVar15].sample)) {
      g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
      g_INT_01cc4804 = 0x7cb;
      core_main_c_FUN_004c8440("SfxSample::pollStream - my sfx isn't active with me!");
    }
    if (_DAT_02dc8318 == 0) {
      sound_sndmain_cpp_FUN_00529980("SfxSample::pollStream - no sound device?\n");
      goto LAB_005240fa;
    }
    if (g_CSfxSlot_ARRAY_02dbd374[iVar15].hardware_buffer_handle != 0) {
      iVar4 = sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_005257e0
                        (g_CSfxSlot_ARRAY_02dbd374 + iVar15);
      if (iVar4 == 0) {
        sound_sndmain_cpp_FUN_00529980("SfxSample::pollStream - error querrying hw playback position\n");
        goto LAB_005240fa;
      }
      if (((this_ptr->loop_marker_count == 0) && (-1 < (this_ptr->sample_info).sample_count)) &&
         ((double)(this_ptr->sample_info).sample_count <=
          g_CSfxSlot_ARRAY_02dbd374[iVar15].options.trigger_time)) goto LAB_005240fa;
    }
    iVar15 = 0x523f55;
    round
              ((double)((float)(this_ptr->sample_info).sample_rate * time_window));
    uVar14 = 0x523f78;
    dVar12 = round
                       ((double)this_ptr->stream_write_position - *(double *)(local_28 + 0x118));
    local_34 = (SIZE_T)ROUND(dVar12);
    if ((int)local_34 < 0) {
      local_34 = local_34 + this_ptr->streaming_buffer_size;
    }
    if ((int)local_34 < iVar15) {
      local_30 = (CSfxSlot *)0x5f5e0ff;
      if (this_ptr->buffer_id != 0) {
        iVar4 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(this_ptr);
        local_30 = (CSfxSlot *)(0x3c00 / (longlong)iVar4);
      }
      iVar5 = this_ptr->streaming_buffer_size + -1;
      dVar12 = round
                         ((double)((float)(this_ptr->sample_info).sample_rate * (float)this_ptr));
      iVar4 = (int)ROUND(dVar12);
      if (iVar5 < (int)ROUND(dVar12)) {
        iVar4 = iVar5;
      }
      SVar6 = iVar4 - iVar15;
      while( true ) {
        if ((int)SVar6 < 1) {
          return 1;
        }
        if ((this_ptr->stream_write_position < 0) ||
           (this_ptr->streaming_buffer_size <= this_ptr->stream_write_position)) {
          g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
          g_INT_01cc4804 = 0x81a;
          core_main_c_FUN_004c8440
                    ("nextLoadSampleDest = %d, allocLength = %d",this_ptr->stream_write_position,
                     this_ptr->streaming_buffer_size,iVar4,uVar14);
        }
        lock_length = this_ptr->streaming_buffer_size - this_ptr->stream_write_position;
        if ((int)SVar6 < (int)lock_length) {
          lock_length = SVar6;
        }
        if ((int)local_34 < (int)lock_length) {
          lock_length = local_34;
        }
        iVar15 = (this_ptr->sample_info).sample_count;
        bVar3 = false;
        if (-1 < iVar15) {
          if (this_ptr->stream_read_position < iVar15) {
            SVar7 = iVar15 - this_ptr->stream_read_position;
            if ((int)SVar7 < (int)lock_length) {
              lock_length = SVar7;
            }
          }
          else {
            this_ptr_00 = local_30->sample;
            if ((this_ptr_00->loop_marker_count == 0) ||
               (this_ptr_00->streaming_buffer_size == (this_ptr_00->sample_info).sample_count)) {
              if (this_ptr->buffer_id == 0) {
                return 1;
              }
              bVar3 = true;
            }
            else {
              sound_sndmain_cpp_CSfxSample_seek_FUN_00523d10
                        (this_ptr_00,0,this_ptr->stream_write_position);
            }
          }
        }
        output_buffer = (short *)&DAT_02db1118;
        bVar1 = true;
        bVar2 = false;
        if (this_ptr->buffer_id == 0) break;
LAB_005241ef:
        if (bVar3) {
          count = (local_30->sample->sample_info).num_channels * lock_length;
          uVar9 = (local_30->sample->sample_info).bit_depth;
          local_20 = lock_length;
          if (uVar9 < 8) {
LAB_00524219:
            g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
            g_INT_01cc4804 = 0x5c4;
            core_main_c_FUN_004c8440("generateSilence - invalid bit depth!");
          }
          else if (uVar9 < 9) {
            memset(output_buffer,0x80,count);
          }
          else {
            if (uVar9 != 0x10) goto LAB_00524219;
            memset(output_buffer,0,count * 2);
          }
        }
        else if (this_ptr->mp3_data == (CMP3Decoder *)0x0) {
          if (this_ptr->file_handle == (_FILE *)0x0) {
            g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
            g_INT_01cc4804 = 0x86c;
            core_main_c_FUN_004c8440("Can't stream unless we have mp3 decoder or open wav file!");
          }
          file = this_ptr->file_handle;
          SVar7 = lock_length;
          size = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(this_ptr);
          local_20 = _fread(output_buffer,size,SVar7,file);
          if ((this_ptr->file_handle->_flag & 0x20) != 0) {
            sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0(this_ptr);
            pcVar13 = "Error reading %s while streaming\n";
            goto LAB_005240f2;
          }
        }
        else {
          local_20 = sound_mp3_cpp_CMP3Decoder_read_FUN_004e82d0
                               (this_ptr->mp3_data,output_buffer,lock_length);
        }
        if ((bVar1) && (0 < (int)local_20)) {
          puVar8 = sound_sndmain_cpp_CSfxSample_lock_FUN_00523ba0
                             (this_ptr,this_ptr->stream_write_position,local_20);
          if (puVar8 == (uint *)0x0) {
            pcVar13 = "Error locking %s while streaming\n";
            goto LAB_005240f2;
          }
          iVar15 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(this_ptr);
          puVar10 = (uint *)&DAT_02db1118;
          for (uVar9 = local_20 * iVar15 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar8 = *puVar10;
            puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
          }
          for (uVar9 = local_20 * iVar15 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(byte *)puVar8 = *(byte *)puVar10;
            puVar10 = (uint *)((int)puVar10 + (uint)bVar11 * -2 + 1);
            puVar8 = (uint *)((int)puVar8 + (uint)bVar11 * -2 + 1);
          }
LAB_00524292:
          sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0(this_ptr);
        }
        else if (bVar2) goto LAB_00524292;
        if ((int)lock_length < (int)local_20) {
          g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
          g_INT_01cc4804 = 0x893;
          core_main_c_FUN_004c8440("MP3 decoded more than batch: r = %d, batch = %d",local_20,lock_length);
        }
        if (lock_length != local_20) {
          (this_ptr->sample_info).sample_count = this_ptr->stream_read_position + local_20;
        }
        SVar6 = SVar6 - local_20;
        iVar15 = this_ptr->stream_write_position + local_20;
        this_ptr->stream_read_position = this_ptr->stream_read_position + local_20;
        this_ptr->stream_write_position = iVar15;
        if (this_ptr->streaming_buffer_size <= iVar15) {
          this_ptr->stream_write_position = 0;
        }
      }
      output_buffer =
           sound_sndmain_cpp_CSfxSample_lock_FUN_00523ba0
                     (this_ptr,this_ptr->stream_write_position,lock_length);
      if (output_buffer != (short *)0x0) {
        bVar2 = true;
        bVar1 = false;
        goto LAB_005241ef;
      }
      pcVar13 = "Error locking %s while streaming\n";
LAB_005240f2:
      sound_sndmain_cpp_FUN_00529980(pcVar13,this_ptr);
LAB_005240fa:
      sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(local_30);
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(this_ptr);
      return 0;
    }
  }
  return 1;
}
