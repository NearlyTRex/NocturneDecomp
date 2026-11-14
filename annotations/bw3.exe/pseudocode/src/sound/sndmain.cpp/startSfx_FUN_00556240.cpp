// Name: sound_sndmain.cpp_startSfx_FUN_00556240
// Address: 00556240
// Address Range: [[00556240, 005565e1]]
// Convention: __cdecl
// Signature: uint __cdecl sound_sndmain_cpp_startSfx_FUN_00556240(char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl sound_sndmain_cpp_startSfx_FUN_00556240(char *filename)

{
  char cVar1;
  int iVar2;
  int iVar3;
  CSfxSlot *pCVar4;
  uint uVar6;
  int iVar7;
  int iVar8;
  CSfxSample *pCVar9;
  CSfxSlot *this_ptr;
  char *pcVar10;
  int *piVar11;
  CSfxOptions *pCVar12;
  char *pcVar13;
  byte bVar14;
  char local_274 [256];
  char local_174 [256];
  CSfxOptions local_74;
  uint local_14;
  CVector3d *pCVar5;
  
  bVar14 = 0;
  if (((filename == (char *)0x0) || (*filename == '\0')) ||
     (iVar2 = sound_sndmain_cpp_isSoundBusy_FUN_005586c0(), iVar2 == 0)) {
    return 0;
  }
  sound_sndmain_cpp_CSfxOptions_reset_FUN_00555bf0(&local_74);
  pcVar13 = local_174;
  pcVar10 = filename;
  do {
    cVar1 = *pcVar10;
    *pcVar13 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar13[1] = cVar1;
    pcVar13 = pcVar13 + 2;
  } while (cVar1 != '\0');
  piVar11 = (int *)(_DAT_02ceb91c * 0x60 + 0x2ceb920);
  pCVar12 = &local_74;
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar12->channel_index = *piVar11;
    piVar11 = piVar11 + (uint)bVar14 * -2 + 1;
    pCVar12 = (CSfxOptions *)((int)pCVar12 + ((uint)bVar14 * -2 + 1) * 4);
  }
  iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(local_74.channel_index);
  if (iVar2 == 0) {
    return 0;
  }
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  if (_DAT_02cf341c < 1) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x24b;
    core_main_c_FUN_004e4330("SfxSlot::kill - must be locked!");
  }
  local_14 = 0;
  iVar7 = 0;
  iVar2 = _DAT_02ce7280;
  while (iVar2 != 0) {
    local_14 = local_14 + 1;
    if (0x46ff < iVar7 + 0x11c) {
      local_14 = 0xffffffff;
      break;
    }
    iVar2 = *(int *)(&DAT_02ce739c + iVar7);
    iVar7 = iVar7 + 0x11c;
  }
  if ((int)local_14 < 0) goto LAB_005564c3;
  iVar2 = local_14 * 0x11c;
  this_ptr = (CSfxSlot *)(iVar2 + 0x2ce721c);
  pCVar12 = &local_74;
  pCVar4 = this_ptr;
  for (iVar7 = 0x18; iVar7 != 0; iVar7 = iVar7 + -1) {
    (pCVar4->options).channel_index = pCVar12->channel_index;
    pCVar12 = (CSfxOptions *)((int)pCVar12 + ((uint)bVar14 * -2 + 1) * 4);
    pCVar4 = (CSfxSlot *)((int)pCVar4 + (uint)bVar14 * -8 + 4);
  }
  pCVar9 = g_SfxSamples;
  iVar7 = 0;
  do {
    iVar3 = _stricmp((char *)pCVar9,filename);
    if (iVar3 == 0) {
      if (pCVar9 != (CSfxSample *)0x0) {
        if (pCVar9->streaming_slot_index != -1) goto LAB_0055639c;
        *(CSfxSample **)(&DAT_02ce7284 + iVar2) = pCVar9;
        goto LAB_005563a7;
      }
      break;
    }
    iVar7 = iVar7 + 1;
    pCVar9 = pCVar9 + 1;
  } while (iVar7 < 0x40);
  iVar7 = engine_dosio_cpp_getFileSize_FUN_004657f0("sound",local_174);
  if (iVar7 < 0x200001) {
    engine_dosio_cpp_splitPath_FUN_00465e50(local_174,(char *)0x0,(char *)0x0,(char *)0x0,local_274)
    ;
    iVar7 = _stricmp(local_274,&DAT_005d29cd);
    if ((iVar7 == 0) ||
       (iVar7 = _stricmp(local_274,&DAT_005d29d1), iVar7 == 0))
    goto LAB_0055639c;
    pCVar9 = sound_sndmain_cpp_getSfxSample_FUN_00551d20(local_174);
  }
  else {
LAB_0055639c:
    pCVar9 = sound_sndmain_cpp_loadStreamingSoundFile_FUN_00552350(local_14,local_174);
  }
  *(CSfxSample **)(&DAT_02ce7284 + iVar2) = pCVar9;
LAB_005563a7:
  iVar7 = *(int *)(&DAT_02ce7284 + iVar2);
  if (iVar7 == 0) {
    sound_sndmain_cpp_logSoundError_FUN_0055a560("startSfx - can't get sample %s\n",local_174);
  }
  else {
    *(int *)(iVar7 + 0x154) = *(int *)(iVar7 + 0x154) + 1;
    sound_sndmain_cpp_CSfxSlot_seek_FUN_00555750(this_ptr);
    *(uint *)(iVar2 + 0x2ce7324) = 0;
    *(uint *)(iVar2 + 0x2ce731c) = 0xbf800000;
    *(uint *)(iVar2 + 0x2ce7320) = 0;
    *(uint *)(iVar2 + 0x2ce7318) = *(uint *)(iVar2 + 0x2ce7254);
    pCVar4 = this_ptr;
    do {
      pCVar5 = &(pCVar4->options).position;
      pCVar4->channel_current_buffer_offsets[0] = -1;
      pCVar4 = (CSfxSlot *)pCVar5;
    } while (pCVar5 != (CVector3d *)(iVar2 + 0x2ce723c));
    iVar8 = DAT_00604210 + 1;
    iVar7 = *(int *)(&DAT_02ce7284 + iVar2);
    *(uint *)(iVar2 + 0x2ce730c) = *(uint *)(*(int *)(&DAT_02ce7284 + iVar2) + 0x114);
    iVar3 = *(int *)(&DAT_02ce7284 + iVar2);
    DAT_00604210 = iVar8;
    *(uint *)(iVar2 + 0x2ce7310) = *(uint *)(iVar7 + 0x118);
    *(uint *)(iVar2 + 0x2ce7314) = *(uint *)(iVar3 + 0x11c);
    *(uint *)(iVar2 + 0x2ce7334) = 0xffffffff;
    if (0xfffffe < iVar8) {
      DAT_00604210 = 1;
    }
    iVar7 = DAT_00604210;
    *(int *)(&DAT_02ce7280 + iVar2) = DAT_00604210;
    iVar3 = sound_sndmain_cpp_CSfxSample_pollStream_FUN_00553960
                      (*(CSfxSample **)(&DAT_02ce7284 + iVar2),999.0,999.0);
    if (iVar3 != 0) {
      sound_sndmain_cpp_CSfxSlot_compute_FUN_00554430(this_ptr,0.0);
      uVar6 = sound_sndmain_cpp_hasHardware3DSound_FUN_005586d0();
      if ((int)uVar6 < 1) {
LAB_005565c4:
        sound_sndmain_cpp_unlockSound_FUN_00556fd0();
        return iVar7 << 6 | local_14;
      }
      iVar3 = (**(code **)(*_DAT_02cf3280 + 0x40))
                        (_DAT_02cf3280,*(uint *)(*(int *)(&DAT_02ce7284 + iVar2) + 0x158));
      *(int *)(&DAT_02ce727c + iVar2) = iVar3;
      if (iVar3 != 0) goto LAB_005565c4;
    }
  }
  sound_sndmain_cpp_CSfxSlot_kill_FUN_00555270(this_ptr);
LAB_005564c3:
  sound_sndmain_cpp_unlockSound_FUN_00556fd0();
  return 0;
}
