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
  int iVar9;
  uint uVar10;
  ulong count;
  short *output_buffer;
  uint *puVar11;
  byte bVar12;
  float10 fVar13;
  char *pcVar14;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_1c;
  int local_18;
  
  bVar12 = 0;
  if (_DAT_02cf341c < 1) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x90c;
    core_main_c_FUN_004e4330("SfxSlot::pollStream - must be locked!");
  }
  if (-1 < *(int *)&param_1->field_0x160) {
    iVar1 = *(int *)&param_1->field_0x160 * 0x11c;
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
    fVar13 = (float10)(param_1->sample_info).sample_rate * (float10)param_2;
    iVar5 = *(int *)&param_1->field_0x164;
    round();
    local_38 = (int)ROUND(fVar13);
    if (iVar5 < (int)ROUND(fVar13)) {
      local_38 = iVar5;
    }
    fVar13 = (float10)*(int *)&param_1->field_0x170 - (float10)*(double *)(iVar1 + 0x2ce7328);
    round();
    local_30 = (int)ROUND(fVar13);
    if (local_30 < 0) {
      local_30 = local_30 + *(int *)&param_1->field_0x164;
    }
    if (local_30 < local_38) {
      local_2c = 99999999;
      if (param_1->buffer_id != 0) {
        local_2c = sound_sndmain_cpp_FUN_005558e0(param_1,0x3c00);
      }
      fVar13 = (float10)(param_1->sample_info).sample_rate * (float10)param_3;
      iVar5 = round();
      local_34 = (int)ROUND(fVar13);
      if (iVar5 < (int)ROUND(fVar13)) {
        local_34 = iVar5;
      }
      local_1c = local_34 - local_30;
      if (0 < local_1c) {
        do {
          if ((*(int *)&param_1->field_0x170 < 0) ||
             (*(int *)&param_1->field_0x164 <= *(int *)&param_1->field_0x170)) {
            _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
            _DAT_01d71de4 = 0x970;
            core_main_c_FUN_004e4330
                      ("nextLoadSampleDest = %d, allocLength = %d",*(uint *)&param_1->field_0x170,
                       *(uint *)&param_1->field_0x164);
          }
          iVar5 = *(int *)&param_1->field_0x164 - *(int *)&param_1->field_0x170;
          if (local_1c < iVar5) {
            iVar5 = local_1c;
          }
          if (local_2c < iVar5) {
            iVar5 = local_2c;
          }
          iVar6 = (param_1->sample_info).sample_count;
          bVar2 = false;
          if (-1 < iVar6) {
            if (*(int *)&param_1->field_0x16c < iVar6) {
              iVar6 = iVar6 - *(int *)&param_1->field_0x16c;
              if (iVar6 < iVar5) {
                iVar5 = iVar6;
              }
            }
            else {
              iVar6 = sound_sndmain_cpp_FUN_00555b80(*(CSfxSample **)(&DAT_02ce7284 + iVar1));
              if ((iVar6 == 0) ||
                 (this_ptr = *(CSfxSample **)(&DAT_02ce7284 + iVar1),
                 (this_ptr->sample_info).sample_count == *(int *)&this_ptr->field_0x164)) {
                if (param_1->buffer_id == 0) {
                  return 1;
                }
                bVar2 = true;
              }
              else {
                sound_sndmain_cpp_CSfxSample_seek_FUN_005537c0
                          (this_ptr,0,*(int *)&param_1->field_0x170);
              }
            }
          }
          output_buffer = (short *)&DAT_02cdafb8;
          bVar3 = false;
          bVar4 = true;
          if (param_1->buffer_id == 0) {
            output_buffer =
                 (short *)sound_sndmain_cpp_FUN_00553660
                                    (param_1,*(uint *)&param_1->field_0x170,iVar5);
            if (output_buffer != (short *)0x0) {
              bVar4 = false;
              bVar3 = true;
              goto LAB_00553ce9;
            }
            pcVar14 = "Error locking %s while streaming\n";
LAB_00553c0b:
            sound_sndmain_cpp_FUN_0055a560(pcVar14,param_1);
            goto LAB_00553c13;
          }
LAB_00553ce9:
          local_18 = iVar5;
          if (bVar2) {
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
          else if (*(CMP3Decoder **)&param_1->field_0x174 == (CMP3Decoder *)0x0) {
            iVar6 = unkafter_turret_cpp_FUN_00573d60(&param_1->field_0x17c);
            if (iVar6 == 0) {
              _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
              _DAT_01d71de4 = 0x9c2;
              core_main_c_FUN_004e4330("Can't stream unless we have mp3 decoder or open wav file!");
            }
            iVar6 = sound_sndmain_cpp_FUN_00555900(param_1,iVar5);
            iVar9 = unkafter_turret_cpp_FUN_00573c00(&param_1->field_0x17c,output_buffer,iVar6);
            if (iVar9 != iVar6) {
              sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00553760(param_1);
              pcVar14 = "Error reading %s while streaming\n";
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
                                 (*(CMP3Decoder **)&param_1->field_0x174,output_buffer,iVar5);
          }
          if ((bVar4) && (0 < local_18)) {
            puVar7 = (uint *)
                     sound_sndmain_cpp_FUN_00553660
                               (param_1,*(uint *)&param_1->field_0x170,local_18);
            if (puVar7 == (uint *)0x0) {
              pcVar14 = "Error locking %s while streaming\n";
              goto LAB_00553c0b;
            }
            uVar8 = sound_sndmain_cpp_FUN_00555900(param_1,local_18);
            puVar11 = (uint *)&DAT_02cdafb8;
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
LAB_00553d8d:
            sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00553760(param_1);
          }
          else if (bVar3) goto LAB_00553d8d;
          if (iVar5 < local_18) {
            _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
            _DAT_01d71de4 = 0x9f5;
            core_main_c_FUN_004e4330("MP3 decoded more than batch: r = %d, batch = %d",local_18,iVar5);
          }
          if (iVar5 != local_18) {
            (param_1->sample_info).sample_count = *(int *)&param_1->field_0x16c + local_18;
          }
          local_1c = local_1c - local_18;
          iVar5 = *(int *)&param_1->field_0x170 + local_18;
          *(int *)&param_1->field_0x16c = *(int *)&param_1->field_0x16c + local_18;
          *(int *)&param_1->field_0x170 = iVar5;
          if (*(int *)&param_1->field_0x164 <= iVar5) {
            *(uint *)&param_1->field_0x170 = 0;
          }
        } while (0 < local_1c);
      }
      return 1;
    }
  }
  return 1;
}
