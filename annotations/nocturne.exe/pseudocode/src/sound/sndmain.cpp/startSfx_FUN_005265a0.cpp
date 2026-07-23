// Name: sound_sndmain.cpp_startSfx_FUN_005265a0
// Address: 005265a0
// Address Range: [[005265a0, 00526c4e]]
// Convention: __cdecl
// Signature: uint __cdecl sound_sndmain_cpp_startSfx_FUN_005265a0(char *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl sound_sndmain_cpp_startSfx_FUN_005265a0(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  char **ppcVar6;
  char ***pppcVar7;
  int iVar8;
  uint *puVar9;
  char ****ppppcVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char ***pppcVar15;
  byte bVar16;
  float10 fVar17;
  uint uVar18;
  char ****ppppcStack_390;
  uint local_38c;
  char **local_28c [64];
  char **local_18c [64];
  char ***local_8c [26];
  char **ppcStack_24;
  char **local_20;
  char **local_1c;
  char ***local_18;
  char ***local_14;
  uint *puVar5;
  
  bVar16 = 0;
  pcVar14 = (char *)&local_38c;
  pcVar12 = (char *)&local_38c;
  pcVar13 = (char *)&local_38c;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    return 0;
  }
  ppppcStack_390 = (char ****)0x5265d8;
  iVar2 = sound_sndmain_cpp_isSoundBusy_FUN_00528490();
  if (iVar2 == 0) {
    return 0;
  }
  ppppcStack_390 = local_8c;
  sound_sndmain_cpp_CSfxOptions_reset_FUN_00525eb0();
  do {
    cVar1 = *param_1;
    *pcVar14 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_1[1];
    param_1 = param_1 + 2;
    pcVar14[1] = cVar1;
    pcVar14 = pcVar14 + 2;
  } while (cVar1 != '\0');
  puVar4 = (uint *)(_DAT_02dc1b74 * 0x6c + 0x2dc1b78);
  ppppcVar10 = local_8c;
  for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppppcVar10 = (char ***)*puVar4;
    puVar4 = puVar4 + (uint)bVar16 * -2 + 1;
    ppppcVar10 = ppppcVar10 + (uint)bVar16 * -2 + 1;
  }
  ppppcStack_390 = (char ****)local_8c[0];
  iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490();
  if (iVar2 == 0) {
    return 0;
  }
  ppppcStack_390 = (char ****)0x52664e;
  sound_sndmain_cpp_lockSound_FUN_00528800();
  if (_DAT_02dc84bc < 1) {
    ppppcStack_390 = (char ****)"SfxSlot::kill - must be locked!";
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0x1f6;
    FUN_004c8440();
  }
  local_1c = (char **)0x0;
  iVar8 = 0;
  iVar2 = _DAT_02dbd3e4;
  while (iVar2 != 0) {
    local_1c = (char **)((int)local_1c + 1);
    if (0x47ff < iVar8 + 0x120) {
      local_1c = (char **)0xffffffff;
      break;
    }
    iVar2 = *(int *)(&DAT_02dbd504 + iVar8);
    iVar8 = iVar8 + 0x120;
  }
  if ((int)local_1c < 0) {
    ppppcStack_390 = (char ****)0x5268b8;
    sound_sndmain_cpp_unlockSound_FUN_00528890();
    return 0;
  }
  iVar2 = (int)local_1c * 0x120;
  puVar9 = (uint *)(iVar2 + 0x2dbd374);
  ppppcVar10 = local_8c;
  puVar4 = puVar9;
  for (iVar8 = 0x1b; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar4 = *ppppcVar10;
    ppppcVar10 = ppppcVar10 + (uint)bVar16 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar16 * -2 + 1;
  }
  ppppcStack_390 = (char ****)&local_38c;
  iVar8 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound");
  if (iVar8 < 0x200001) {
    ppppcStack_390 = (char ****)local_18c;
    splitpath(&local_38c,0,0,0);
    ppppcStack_390 = (char ****)"mp3";
    iVar8 = _stricmp(local_18c);
    if (iVar8 == 0) goto LAB_005266dc;
    ppppcStack_390 = (char ****)".mp3";
    iVar8 = _stricmp(local_18c);
    if (iVar8 == 0) goto LAB_005266dc;
    ppppcStack_390 = (char ****)&local_38c;
    pppcVar7 = (char ***)FUN_00522480();
  }
  else {
LAB_005266dc:
    iVar8 = 0;
    local_20 = local_1c;
    do {
      _DAT_02dc1ed8 = _DAT_02dc1ed8 + 1;
      if (0x3f < _DAT_02dc1ed8) {
        _DAT_02dc1ed8 = 0;
      }
      iVar3 = _DAT_02dc1ed8 * 0x168;
      if ((*(int *)(iVar3 + 0x2dc2004) == 0) && (*(int *)(iVar3 + 0x2dc2008) == 0)) {
        local_18 = (char ***)(iVar3 + 0x2dc1edc);
        goto LAB_0052671f;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x40);
    local_18 = (char ***)0x0;
LAB_0052671f:
    local_14 = local_18;
    pppcVar7 = local_18;
    if (local_18 != (char ***)0x0) {
      ppppcStack_390 = (char ****)local_28c;
      splitpath(&local_38c,0,0,0);
      ppppcStack_390 = (char ****)"mp3";
      iVar8 = _stricmp(local_28c);
      if (iVar8 == 0) {
LAB_00526983:
        ppppcStack_390 = (char ****)&local_38c;
        iVar8 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound");
        if (0 < iVar8) {
          ppppcStack_390 = (char ****)0x8630;
          ppppcStack_390 = (char ****)FUN_0056497c();
          ppcVar6 = (char **)0x0;
          if (ppppcStack_390 != (char ****)0x0) {
            ppcVar6 = (char **)sound_mp3_cpp_CMP3Decoder_ctor_FUN_004e7d90();
          }
          local_14[0x51] = ppcVar6;
          if (ppcVar6 == (char **)0x0) {
            ppppcStack_390 = (char ****)"Out of memory.";
            _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
            _DAT_01cc4804 = 0x3c8;
            FUN_004c8440();
          }
          ppppcStack_390 = (char ****)&local_38c;
          sound_mp3_cpp_CMP3Decoder_openFile_FUN_004e7df0(local_14[0x51]);
          pppcVar7 = local_14;
          pppcVar15 = local_14;
          do {
            cVar1 = *pcVar12;
            *(char *)pppcVar15 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar12[1];
            pcVar12 = pcVar12 + 2;
            *(char *)((int)pppcVar15 + 1) = cVar1;
            pppcVar15 = (char ***)((int)pppcVar15 + 2);
          } while (cVar1 != '\0');
          local_14[0x40] = (char **)0x1;
          local_14[0x41] = (char **)0x10;
          local_14[0x42] = (char **)local_14[0x51][0x41];
          ppcVar6 = (char **)local_14[0x51][0x40];
          local_14[0x44] = (char **)0xffffffff;
          ppppcStack_390 = (char ****)local_14;
          local_14[0x43] = ppcVar6;
          sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00521e10();
          ppcVar6 = local_20;
          pppcVar7[0x4a] = (char **)0x0;
          pppcVar7[0x4b] = (char **)0x0;
          pppcVar7[0x4c] = (char **)0x0;
          fVar17 = (float10)2.0f;
          pppcVar7[0x4f] = (char **)0x0;
          pppcVar7[0x50] = (char **)0x0;
          ppppcStack_390 = (char ****)pppcVar7;
          uVar18 = 0x526ab4;
          fVar17 = (float10)round((float10)(int)pppcVar7[0x43] * fVar17);
          pppcVar7[0x4e] = (char **)(int)ROUND(fVar17);
          pppcVar7[0x4d] = ppcVar6;
          iVar8 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_00523910(uVar18);
          if (iVar8 != 0) {
LAB_00526ad0:
            pppcVar7 = local_18;
            sound_sndmain_cpp_CSfxSample_seek_FUN_00523d10(local_18,0,0);
            goto LAB_0052673b;
          }
        }
      }
      else {
        ppppcStack_390 = (char ****)".mp3";
        iVar8 = _stricmp(local_28c);
        if (iVar8 == 0) goto LAB_00526983;
        ppppcStack_390 = (char ****)"rb";
        ppcVar6 = (char **)engine_dosio_cpp_getFile_FUN_00456a60("sound",&local_38c);
        pppcVar7 = local_18;
        local_18[0x53] = ppcVar6;
        pppcVar15 = local_18;
        if (ppcVar6 != (char **)0x0) {
          do {
            cVar1 = *pcVar13;
            *(char *)pppcVar15 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar13[1];
            pcVar13 = pcVar13 + 2;
            *(char *)((int)pppcVar15 + 1) = cVar1;
            pppcVar15 = (char ***)((int)pppcVar15 + 2);
          } while (cVar1 != '\0');
          ppppcStack_390 = (char ****)local_18[0x53];
          ppcVar6 = (char **)_ftell();
          ppppcStack_390 = (char ****)pppcVar7;
          pppcVar7[0x52] = ppcVar6;
          iVar8 = sound_sndmain_cpp_parseWavFile_FUN_00521830(pppcVar7[0x53],pppcVar7 + 0x52);
          if (iVar8 == 0) goto LAB_00526c07;
          ppppcStack_390 = (char ****)local_18;
          sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00521e10();
          pppcVar7 = local_18;
          local_18[0x4a] = (char **)0x0;
          fVar17 = (float10)2.0f;
          local_18[0x4b] = (char **)0x0;
          local_18[0x4c] = (char **)0x0;
          ppppcStack_390 = (char ****)0x526bcf;
          fVar17 = (float10)round((float10)(int)local_18[0x43] * fVar17);
          pppcVar7[0x4e] = (char **)(int)ROUND(fVar17);
          pppcVar7[0x4f] = (char **)0x0;
          pppcVar7[0x50] = (char **)0x0;
          pppcVar7[0x4d] = ppcStack_24;
          iVar8 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_00523910(pppcVar7);
          if (iVar8 == 0) goto LAB_00526c07;
          goto LAB_00526ad0;
        }
      }
LAB_00526c07:
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(local_18);
      pppcVar7 = (char ***)0x0;
    }
  }
LAB_0052673b:
  *(char ****)(&DAT_02dbd3e8 + iVar2) = pppcVar7;
  iVar8 = *(int *)(&DAT_02dbd3e8 + iVar2);
  if (iVar8 == 0) {
    FUN_00529980("startSfx - can't get sample %s\n",&ppppcStack_390);
  }
  else {
    *(int *)(iVar8 + 300) = *(int *)(iVar8 + 300) + 1;
    sound_sndmain_cpp_CSfxSlot_seek_FUN_00525a80(puVar9);
    *(uint *)(iVar2 + 0x2dbd488) = 0;
    *(uint *)(iVar2 + 0x2dbd480) = 0xbf800000;
    *(uint *)(iVar2 + 0x2dbd484) = 0;
    *(uint *)(iVar2 + 0x2dbd47c) = *(uint *)(iVar2 + 0x2dbd3b8);
    puVar4 = puVar9;
    do {
      puVar5 = puVar4 + 1;
      puVar4[0x37] = 0xffffffff;
      puVar4 = puVar5;
    } while (puVar5 != (uint *)(iVar2 + 0x2dbd394));
    iVar11 = DAT_005bea40 + 1;
    iVar8 = *(int *)(&DAT_02dbd3e8 + iVar2);
    *(uint *)(iVar2 + 0x2dbd470) = *(uint *)(*(int *)(&DAT_02dbd3e8 + iVar2) + 0x114);
    iVar3 = *(int *)(&DAT_02dbd3e8 + iVar2);
    DAT_005bea40 = iVar11;
    *(uint *)(iVar2 + 0x2dbd474) = *(uint *)(iVar8 + 0x118);
    *(uint *)(iVar2 + 0x2dbd478) = *(uint *)(iVar3 + 0x11c);
    if (0xfffffe < iVar11) {
      DAT_005bea40 = 1;
    }
    iVar8 = DAT_005bea40;
    *(int *)(&DAT_02dbd3e4 + iVar2) = DAT_005bea40;
    iVar3 = sound_sndmain_cpp_CSfxSample_pollStream_FUN_00523ea0
                      (*(uint *)(&DAT_02dbd3e8 + iVar2),0x4479c000,0x4479c000);
    if (iVar3 != 0) {
      sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(puVar9,0);
      iVar3 = sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0();
      if (iVar3 != 0) {
        iVar3 = (**(code **)(*_DAT_02dc8318 + 0x3c))
                          (_DAT_02dc8318,*(uint *)(*(int *)(&DAT_02dbd3e8 + iVar2) + 0x130));
        *(int *)(iVar2 + 0x2dbd3e0) = iVar3;
        if ((iVar3 == 0) ||
           (iVar2 = (**(code **)(*_DAT_02dc8318 + 0x48))(_DAT_02dc8318,puVar9), iVar2 == 0))
        goto LAB_00526c2e;
      }
      sound_sndmain_cpp_unlockSound_FUN_00528890();
      return iVar8 << 6 | (uint)local_20;
    }
  }
LAB_00526c2e:
  sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(puVar9);
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return 0;
}
