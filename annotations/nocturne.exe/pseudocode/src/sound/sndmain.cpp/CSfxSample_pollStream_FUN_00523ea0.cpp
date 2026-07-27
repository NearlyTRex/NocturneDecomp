// Name: sound_sndmain.cpp_CSfxSample_pollStream_FUN_00523ea0
// Address: 00523ea0
// Address Range: [[00523ea0, 0052440e]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_CSfxSample_pollStream_FUN_00523ea0(float param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_sndmain_cpp_CSfxSample_pollStream_FUN_00523ea0(float param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  byte *puVar8;
  uint *puVar9;
  byte bVar10;
  float10 fVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  int local_34;
  int local_30;
  int local_28;
  int local_20;
  
  bVar10 = 0;
  if (_DAT_02dc84bc < 1) {
    PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    INT_01cc4804 = 0x7be;
    core_main_c_FUN_004c8440("SfxSlot::kill - must be locked!");
  }
  if (-1 < *(int *)((int)param_1 + 0x134)) {
    iVar14 = *(int *)((int)param_1 + 0x134) * 0x120;
    if ((*(int *)(&DAT_02dbd3e4 + iVar14) == 0) || (param_1 != *(float *)(&DAT_02dbd3e8 + iVar14)))
    {
      PTR_01cc4800 = "..\\sound\\sndmain.cpp";
      INT_01cc4804 = 0x7cb;
      core_main_c_FUN_004c8440("SfxSample::pollStream - my sfx isn't active with me!");
    }
    if (_DAT_02dc8318 == 0) {
      sound_sndmain_cpp_FUN_00529980("SfxSample::pollStream - no sound device?\n");
      goto LAB_005240fa;
    }
    if (*(int *)(iVar14 + 0x2dbd3e0) != 0) {
      iVar4 = sound_sndmain_cpp_FUN_005257e0(iVar14 + 0x2dbd374);
      if (iVar4 == 0) {
        sound_sndmain_cpp_FUN_00529980("SfxSample::pollStream - error querrying hw playback position\n");
        goto LAB_005240fa;
      }
      if (((*(int *)((int)param_1 + 0x124) == 0) && (-1 < *(int *)((int)param_1 + 0x110))) &&
         ((double)*(int *)((int)param_1 + 0x110) <= *(double *)(iVar14 + 0x2dbd3d4)))
      goto LAB_005240fa;
    }
    iVar14 = 0x523f55;
    round((float10)*(int *)((int)param_1 + 0x10c) * (float10)param_2);
    uVar13 = 0x523f78;
    fVar11 = (float10)round
                                ((float10)*(int *)((int)param_1 + 0x140) -
                                 (float10)*(double *)(local_28 + 0x118));
    local_34 = (int)ROUND(fVar11);
    if (local_34 < 0) {
      local_34 = local_34 + *(int *)((int)param_1 + 0x138);
    }
    if (local_34 < iVar14) {
      local_30 = 99999999;
      if (*(int *)((int)param_1 + 0x130) != 0) {
        iVar4 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(param_1,uVar13);
        local_30 = (int)(0x3c00 / (longlong)iVar4);
      }
      iVar5 = *(int *)((int)param_1 + 0x138) + -1;
      fVar11 = (float10)round
                                  ((float10)*(int *)((int)param_1 + 0x10c) * (float10)param_1);
      iVar4 = (int)ROUND(fVar11);
      if (iVar5 < (int)ROUND(fVar11)) {
        iVar4 = iVar5;
      }
      iVar4 = iVar4 - iVar14;
      while( true ) {
        if (iVar4 < 1) {
          return 1;
        }
        if ((*(int *)((int)param_1 + 0x140) < 0) ||
           (*(int *)((int)param_1 + 0x138) <= *(int *)((int)param_1 + 0x140))) {
          PTR_01cc4800 = "..\\sound\\sndmain.cpp";
          INT_01cc4804 = 0x81a;
          core_main_c_FUN_004c8440
                    ("nextLoadSampleDest = %d, allocLength = %d",*(uint *)((int)param_1 + 0x140),
                     *(uint *)((int)param_1 + 0x138));
        }
        iVar14 = *(int *)((int)param_1 + 0x138) - *(int *)((int)param_1 + 0x140);
        if (iVar4 < iVar14) {
          iVar14 = iVar4;
        }
        if (local_34 < iVar14) {
          iVar14 = local_34;
        }
        iVar5 = *(int *)((int)param_1 + 0x110);
        bVar3 = false;
        if (-1 < iVar5) {
          if (*(int *)((int)param_1 + 0x13c) < iVar5) {
            iVar5 = iVar5 - *(int *)((int)param_1 + 0x13c);
            if (iVar5 < iVar14) {
              iVar14 = iVar5;
            }
          }
          else {
            iVar5 = *(int *)(local_30 + 0x74);
            if ((*(int *)(iVar5 + 0x124) == 0) ||
               (*(int *)(iVar5 + 0x138) == *(int *)(iVar5 + 0x110))) {
              if (*(int *)((int)param_1 + 0x130) == 0) {
                return 1;
              }
              bVar3 = true;
            }
            else {
              sound_sndmain_cpp_CSfxSample_seek_FUN_00523d10
                        (iVar5,0,*(uint *)((int)param_1 + 0x140));
            }
          }
        }
        puVar8 = &DAT_02db1118;
        bVar1 = true;
        bVar2 = false;
        if (*(int *)((int)param_1 + 0x130) == 0) break;
LAB_005241ef:
        if (bVar3) {
          iVar5 = *(int *)(*(int *)(local_30 + 0x74) + 0x108) * iVar14;
          uVar7 = *(uint *)(*(int *)(local_30 + 0x74) + 0x104);
          local_20 = iVar14;
          if (uVar7 < 8) {
LAB_00524219:
            PTR_01cc4800 = "..\\sound\\sndmain.cpp";
            INT_01cc4804 = 0x5c4;
            core_main_c_FUN_004c8440("generateSilence - invalid bit depth!");
          }
          else if (uVar7 < 9) {
            memset(puVar8,0x80,iVar5);
          }
          else {
            if (uVar7 != 0x10) goto LAB_00524219;
            memset(puVar8,0,iVar5 * 2);
          }
        }
        else if (*(int *)((int)param_1 + 0x144) == 0) {
          if (*(int *)((int)param_1 + 0x14c) == 0) {
            PTR_01cc4800 = "..\\sound\\sndmain.cpp";
            INT_01cc4804 = 0x86c;
            core_main_c_FUN_004c8440("Can't stream unless we have mp3 decoder or open wav file!");
          }
          uVar13 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40
                             (param_1,iVar14,*(uint *)((int)param_1 + 0x14c));
          local_20 = _fread(puVar8,uVar13);
          if ((*(byte *)(*(int *)((int)param_1 + 0x14c) + 0xc) & 0x20) != 0) {
            sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0(param_1);
            pcVar12 = "Error reading %s while streaming\n";
            goto LAB_005240f2;
          }
        }
        else {
          local_20 = sound_mp3_cpp_CMP3Decoder_read_FUN_004e82d0
                               (*(int *)((int)param_1 + 0x144),puVar8,iVar14);
        }
        if ((bVar1) && (0 < local_20)) {
          puVar6 = (uint *)
                   sound_sndmain_cpp_CSfxSample_lock_FUN_00523ba0
                             (param_1,*(uint *)((int)param_1 + 0x140),local_20);
          if (puVar6 == (uint *)0x0) {
            pcVar12 = "Error locking %s while streaming\n";
            goto LAB_005240f2;
          }
          iVar5 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(param_1);
          puVar9 = (uint *)&DAT_02db1118;
          for (uVar7 = (uint)(local_20 * iVar5) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar6 = *puVar9;
            puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
          }
          for (uVar7 = local_20 * iVar5 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(byte *)puVar6 = *(byte *)puVar9;
            puVar9 = (uint *)((int)puVar9 + (uint)bVar10 * -2 + 1);
            puVar6 = (uint *)((int)puVar6 + (uint)bVar10 * -2 + 1);
          }
LAB_00524292:
          sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0(param_1);
        }
        else if (bVar2) goto LAB_00524292;
        if (iVar14 < local_20) {
          PTR_01cc4800 = "..\\sound\\sndmain.cpp";
          INT_01cc4804 = 0x893;
          core_main_c_FUN_004c8440("MP3 decoded more than batch: r = %d, batch = %d",local_20,iVar14);
        }
        if (iVar14 != local_20) {
          *(int *)((int)param_1 + 0x110) = *(int *)((int)param_1 + 0x13c) + local_20;
        }
        iVar4 = iVar4 - local_20;
        iVar14 = *(int *)((int)param_1 + 0x140) + local_20;
        *(int *)((int)param_1 + 0x13c) = *(int *)((int)param_1 + 0x13c) + local_20;
        *(int *)((int)param_1 + 0x140) = iVar14;
        if (*(int *)((int)param_1 + 0x138) <= iVar14) {
          *(uint *)((int)param_1 + 0x140) = 0;
        }
      }
      puVar8 = (byte *)
               sound_sndmain_cpp_CSfxSample_lock_FUN_00523ba0
                         (param_1,*(uint *)((int)param_1 + 0x140),iVar14);
      if (puVar8 != (byte *)0x0) {
        bVar2 = true;
        bVar1 = false;
        goto LAB_005241ef;
      }
      pcVar12 = "Error locking %s while streaming\n";
LAB_005240f2:
      sound_sndmain_cpp_FUN_00529980(pcVar12,param_1);
LAB_005240fa:
      sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(local_30);
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(param_1);
      return 0;
    }
  }
  return 1;
}
