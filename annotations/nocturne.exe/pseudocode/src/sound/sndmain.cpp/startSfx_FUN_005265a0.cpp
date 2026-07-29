// Name: sound_sndmain.cpp_startSfx_FUN_005265a0
// Address: 005265a0
// Address Range: [[005265a0, 00526c4e]]
// Convention: __cdecl
// Signature: uint __cdecl sound_sndmain_cpp_startSfx_FUN_005265a0(char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl sound_sndmain_cpp_startSfx_FUN_005265a0(char *filename)

{
  char cVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  CSfxSlot *pCVar5;
  uint uVar7;
  CMP3Decoder *this_ptr;
  CMP3Decoder *pCVar8;
  _FILE *p_Var9;
  long lVar10;
  CSfxSample *pCVar11;
  int iVar12;
  CSfxSlot *this_ptr_00;
  int *piVar13;
  CSfxOptions *pCVar14;
  int iVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  byte bVar19;
  double dVar20;
  CSfxSample *pCVar21;
  char local_38c [256];
  char local_28c [256];
  char local_18c [256];
  CSfxOptions local_8c;
  uint local_1c;
  CSfxSample *local_18;
  CSfxSample *local_14;
  CVector3d *pCVar6;
  
  bVar19 = 0;
  pcVar18 = local_38c;
  pcVar16 = local_38c;
  pcVar17 = local_38c;
  if (((filename == (char *)0x0) || (*filename == '\0')) ||
     (iVar3 = sound_sndmain_cpp_isSoundBusy_FUN_00528490(), iVar3 == 0)) {
    return 0;
  }
  sound_sndmain_cpp_CSfxOptions_reset_FUN_00525eb0(&local_8c);
  do {
    cVar1 = *filename;
    *pcVar18 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar18[1] = cVar1;
    pcVar18 = pcVar18 + 2;
  } while (cVar1 != '\0');
  piVar13 = (int *)(_DAT_02dc1b74 * 0x6c + 0x2dc1b78);
  pCVar14 = &local_8c;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar14->channel_index = *piVar13;
    piVar13 = piVar13 + (uint)bVar19 * -2 + 1;
    pCVar14 = (CSfxOptions *)((int)pCVar14 + ((uint)bVar19 * -2 + 1) * 4);
  }
  iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(local_8c.channel_index);
  if (iVar3 == 0) {
    return 0;
  }
  sound_sndmain_cpp_lockSound_FUN_00528800();
  if (_DAT_02dc84bc < 1) {
    PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    INT_01cc4804 = 0x1f6;
    core_main_c_FUN_004c8440();
  }
  local_1c = 0;
  iVar12 = 0;
  iVar3 = _DAT_02dbd3e4;
  while (iVar3 != 0) {
    local_1c = local_1c + 1;
    if (0x47ff < iVar12 + 0x120) {
      local_1c = 0xffffffff;
      break;
    }
    iVar3 = *(int *)(&DAT_02dbd504 + iVar12);
    iVar12 = iVar12 + 0x120;
  }
  if ((int)local_1c < 0) {
    sound_sndmain_cpp_unlockSound_FUN_00528890();
    return 0;
  }
  iVar3 = local_1c * 0x120;
  this_ptr_00 = (CSfxSlot *)(iVar3 + 0x2dbd374);
  pCVar14 = &local_8c;
  pCVar5 = this_ptr_00;
  for (iVar12 = 0x1b; iVar12 != 0; iVar12 = iVar12 + -1) {
    (pCVar5->options).channel_index = pCVar14->channel_index;
    pCVar14 = (CSfxOptions *)((int)pCVar14 + ((uint)bVar19 * -2 + 1) * 4);
    pCVar5 = (CSfxSlot *)((int)pCVar5 + (uint)bVar19 * -8 + 4);
  }
  iVar12 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound",local_38c);
  if (iVar12 < 0x200001) {
    splitpath(local_38c,(char *)0x0,(char *)0x0,(char *)0x0,local_18c);
    iVar12 = _stricmp(local_18c,"mp3");
    if ((iVar12 == 0) ||
       (iVar12 = _stricmp(local_18c,".mp3"), iVar12 == 0))
    goto LAB_005266dc;
    pCVar11 = sound_sndmain_cpp_getSfxSample_FUN_00522480(local_38c);
  }
  else {
LAB_005266dc:
    iVar12 = 0;
    local_8c.dead = local_1c;
    do {
      _DAT_02dc1ed8 = _DAT_02dc1ed8 + 1;
      if (0x3f < _DAT_02dc1ed8) {
        _DAT_02dc1ed8 = 0;
      }
      iVar4 = _DAT_02dc1ed8 * 0x168;
      if ((*(int *)(iVar4 + 0x2dc2004) == 0) && (*(int *)(iVar4 + 0x2dc2008) == 0)) {
        local_18 = (CSfxSample *)(iVar4 + 0x2dc1edc);
        goto LAB_0052671f;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < 0x40);
    local_18 = (CSfxSample *)0x0;
LAB_0052671f:
    local_14 = local_18;
    pCVar11 = local_18;
    if (local_18 != (CSfxSample *)0x0) {
      splitpath(local_38c,(char *)0x0,(char *)0x0,(char *)0x0,local_28c);
      iVar12 = _stricmp(local_28c,"mp3");
      if ((iVar12 == 0) ||
         (iVar12 = _stricmp(local_28c,".mp3"), iVar12 == 0)) {
        iVar12 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound",local_38c);
        if (0 < iVar12) {
          this_ptr = (CMP3Decoder *)FUN_0056497c();
          pCVar8 = (CMP3Decoder *)0x0;
          if (this_ptr != (CMP3Decoder *)0x0) {
            pCVar8 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_004e7d90(this_ptr);
          }
          local_14->loop_destinations[2] = (int)pCVar8;
          if (pCVar8 == (CMP3Decoder *)0x0) {
            PTR_01cc4800 = "..\\sound\\sndmain.cpp";
            INT_01cc4804 = 0x3c8;
            core_main_c_FUN_004c8440();
          }
          sound_mp3_cpp_CMP3Decoder_openFile_FUN_004e7df0(local_14->loop_destinations[2]);
          pCVar11 = local_14;
          pCVar21 = local_14;
          do {
            cVar1 = *pcVar16;
            (pCVar21->sample_info).name[0] = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar16[1];
            pcVar16 = pcVar16 + 2;
            (pCVar21->sample_info).name[1] = cVar1;
            pCVar21 = (CSfxSample *)((pCVar21->sample_info).name + 2);
          } while (cVar1 != '\0');
          (local_14->sample_info).streaming_flag = 1;
          iVar12 = local_14->loop_destinations[2];
          (local_14->sample_info).bit_depth = 0x10;
          (local_14->sample_info).num_channels = *(int *)(iVar12 + 0x104);
          iVar12 = *(int *)(local_14->loop_destinations[2] + 0x100);
          (local_14->sample_info).sample_count = -1;
          (local_14->sample_info).sample_rate = iVar12;
          sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00521e10();
          iVar4 = local_8c.dead;
          pCVar11->loop_endpoints[0] = 0;
          pCVar11->loop_endpoints[1] = 0;
          iVar12 = (pCVar11->sample_info).sample_rate;
          pCVar11->loop_endpoints[2] = 0;
          fVar2 = (float)iVar12 * 2.0f;
          pCVar11->loop_destinations[0] = 0;
          pCVar11->loop_destinations[1] = 0;
          pCVar21 = (CSfxSample *)0x526ab4;
          dVar20 = round((double)fVar2);
          pCVar11->loop_endpoints[4] = (int)ROUND(dVar20);
          pCVar11->loop_endpoints[3] = iVar4;
          iVar12 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_00523910(pCVar21);
          pCVar11 = local_18;
joined_r0x00526c01:
          local_18 = pCVar11;
          if (iVar12 != 0) {
            sound_sndmain_cpp_CSfxSample_seek_FUN_00523d10(pCVar11,0,0);
            goto LAB_0052673b;
          }
        }
      }
      else {
        p_Var9 = engine_dosio_cpp_getFile_FUN_00456a60("sound",local_38c,"rb");
        pCVar11 = local_18;
        local_18->loop_destinations[4] = (int)p_Var9;
        pCVar21 = local_18;
        if (p_Var9 != (_FILE *)0x0) {
          do {
            cVar1 = *pcVar17;
            (pCVar21->sample_info).name[0] = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar17[1];
            pcVar17 = pcVar17 + 2;
            (pCVar21->sample_info).name[1] = cVar1;
            pCVar21 = (CSfxSample *)((pCVar21->sample_info).name + 2);
          } while (cVar1 != '\0');
          lVar10 = _ftell((_FILE *)local_18->loop_destinations[4]);
          pCVar11->loop_destinations[3] = lVar10;
          iVar12 = sound_sndmain_cpp_parseWavFile_FUN_00521830
                             ((_FILE *)pCVar11->loop_destinations[4],pCVar11->loop_destinations + 3,
                              pCVar11);
          if (iVar12 != 0) {
            sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00521e10();
            pCVar11 = local_18;
            iVar12 = (local_18->sample_info).sample_rate;
            local_18->loop_endpoints[0] = 0;
            fVar2 = (float)iVar12 * 2.0f;
            local_18->loop_endpoints[1] = 0;
            local_18->loop_endpoints[2] = 0;
            dVar20 = round((double)fVar2);
            pCVar11->loop_endpoints[4] = (int)ROUND(dVar20);
            pCVar11->loop_destinations[0] = 0;
            pCVar11->loop_destinations[1] = 0;
            pCVar11->loop_endpoints[3] = local_8c.trigger_id;
            iVar12 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_00523910(pCVar11);
            pCVar11 = local_18;
            goto joined_r0x00526c01;
          }
        }
      }
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(local_18);
      pCVar11 = (CSfxSample *)0x0;
    }
  }
LAB_0052673b:
  *(CSfxSample **)(&DAT_02dbd3e8 + iVar3) = pCVar11;
  iVar12 = *(int *)(&DAT_02dbd3e8 + iVar3);
  if (iVar12 == 0) {
    sound_sndmain_cpp_FUN_00529980("startSfx - can't get sample %s\n",&stack0xfffffc70);
  }
  else {
    *(int *)(iVar12 + 300) = *(int *)(iVar12 + 300) + 1;
    sound_sndmain_cpp_CSfxSlot_seek_FUN_00525a80(this_ptr_00);
    *(uint *)(iVar3 + 0x2dbd488) = 0;
    *(uint *)(iVar3 + 0x2dbd480) = 0xbf800000;
    *(uint *)(iVar3 + 0x2dbd484) = 0;
    *(uint *)(iVar3 + 0x2dbd47c) = *(uint *)(iVar3 + 0x2dbd3b8);
    pCVar5 = this_ptr_00;
    do {
      pCVar6 = &(pCVar5->options).position;
      pCVar5->channel_target_buffer_offsets[7] = -1;
      pCVar5 = (CSfxSlot *)pCVar6;
    } while (pCVar6 != (CVector3d *)(iVar3 + 0x2dbd394));
    iVar15 = DAT_005bea40 + 1;
    iVar12 = *(int *)(&DAT_02dbd3e8 + iVar3);
    *(uint *)(iVar3 + 0x2dbd470) = *(uint *)(*(int *)(&DAT_02dbd3e8 + iVar3) + 0x114);
    iVar4 = *(int *)(&DAT_02dbd3e8 + iVar3);
    DAT_005bea40 = iVar15;
    *(uint *)(iVar3 + 0x2dbd474) = *(uint *)(iVar12 + 0x118);
    *(uint *)(iVar3 + 0x2dbd478) = *(uint *)(iVar4 + 0x11c);
    if (0xfffffe < iVar15) {
      DAT_005bea40 = 1;
    }
    iVar12 = DAT_005bea40;
    *(int *)(&DAT_02dbd3e4 + iVar3) = DAT_005bea40;
    iVar4 = sound_sndmain_cpp_CSfxSample_pollStream_FUN_00523ea0
                      (*(uint *)(&DAT_02dbd3e8 + iVar3),0x4479c000,0x4479c000);
    if (iVar4 != 0) {
      sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(this_ptr_00,0.0);
      uVar7 = sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0();
      if (uVar7 != 0) {
        iVar4 = (**(code **)(*_DAT_02dc8318 + 0x3c))
                          (_DAT_02dc8318,*(uint *)(*(int *)(&DAT_02dbd3e8 + iVar3) + 0x130));
        *(int *)(iVar3 + 0x2dbd3e0) = iVar4;
        if ((iVar4 == 0) ||
           (iVar3 = (**(code **)(*_DAT_02dc8318 + 0x48))(_DAT_02dc8318,this_ptr_00), iVar3 == 0))
        goto LAB_00526c2e;
      }
      sound_sndmain_cpp_unlockSound_FUN_00528890();
      return iVar12 << 6 | local_8c.dead;
    }
  }
LAB_00526c2e:
  sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(this_ptr_00);
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return 0;
}
