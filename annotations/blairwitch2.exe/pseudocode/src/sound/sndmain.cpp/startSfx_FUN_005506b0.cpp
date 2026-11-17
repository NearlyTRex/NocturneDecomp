// Name: sound_sndmain.cpp_startSfx_FUN_005506b0
// Address: 005506b0
// Address Range: [[005506b0, 00550a51]]
// Convention: __cdecl
// Signature: uint __cdecl sound_sndmain_cpp_startSfx_FUN_005506b0(char *filename)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_startSfx_FUN_005506b0(char *filename)

{
  float fVar1;
  char cVar2;
  CSfxSample *pCVar3;
  int iVar4;
  int iVar5;
  CSfxSlot *pCVar6;
  uint uVar8;
  uint uVar9;
  CSfxSample *pCVar10;
  CSfxSlot *this_ptr;
  char *pcVar11;
  CSfxOptions *pCVar12;
  char *pcVar13;
  CSfxOptions *pCVar14;
  byte bVar15;
  char local_274 [256];
  char local_174 [256];
  CSfxOptions local_74;
  uint local_14;
  CVector3d *pCVar7;
  
  bVar15 = 0;
  if (((filename == (char *)0x0) || (*filename == '\0')) ||
     (iVar4 = sound_sndmain_cpp_isSoundBusy_FUN_00552b20(), iVar4 == 0)) {
    return 0;
  }
  sound_sndmain_cpp_CSfxOptions_reset_FUN_00550070(&local_74);
  pcVar13 = local_174;
  pcVar11 = filename;
  do {
    cVar2 = *pcVar11;
    *pcVar13 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar11[1];
    pcVar11 = pcVar11 + 2;
    pcVar13[1] = cVar2;
    pcVar13 = pcVar13 + 2;
  } while (cVar2 != '\0');
  pCVar12 = g_CSfxOptions_ARRAY_02641620 + g_SfxLastSlot;
  pCVar14 = &local_74;
  for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
    pCVar14->channel_index = pCVar12->channel_index;
    pCVar12 = (CSfxOptions *)((int)pCVar12 + ((uint)bVar15 * -2 + 1) * 4);
    pCVar14 = (CSfxOptions *)((int)pCVar14 + ((uint)bVar15 * -2 + 1) * 4);
  }
  iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005512a0(local_74.channel_index);
  if (iVar4 == 0) {
    return 0;
  }
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  if (g_SoundLockCount < 1) {
    g_CHAR_PTR_01d046a0 = "..\\sound\\sndmain.cpp";
    g_INT_01d046a4 = 0x249;
    core_main_c_displayErrorAndQuit_FUN_004e4500("SfxSlot::kill - must be locked!");
  }
  uVar9 = 0;
  iVar5 = 0;
  iVar4 = g_CSfxSlot_ARRAY_0263cf1c[0].playback_state;
  while (iVar4 != 0) {
    uVar9 = uVar9 + 1;
    if (0x46ff < iVar5 + 0x11c) {
      uVar9 = 0xffffffff;
      break;
    }
    iVar4 = *(int *)((int)g_CSfxSlot_ARRAY_0263cf1c[1].distance_to_speakers + iVar5 + -0xc);
    iVar5 = iVar5 + 0x11c;
  }
  local_14 = uVar9;
  if ((int)uVar9 < 0) goto LAB_00550933;
  this_ptr = g_CSfxSlot_ARRAY_0263cf1c + uVar9;
  pCVar12 = &local_74;
  pCVar6 = this_ptr;
  for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
    (pCVar6->options).channel_index = pCVar12->channel_index;
    pCVar12 = (CSfxOptions *)((int)pCVar12 + ((uint)bVar15 * -2 + 1) * 4);
    pCVar6 = (CSfxSlot *)((int)pCVar6 + (uint)bVar15 * -8 + 4);
  }
  pCVar10 = g_SfxSamples;
  iVar4 = 0;
  do {
    iVar5 = _stricmp((char *)pCVar10,filename);
    if (iVar5 == 0) {
      if (pCVar10 != (CSfxSample *)0x0) {
        if (pCVar10->streaming_slot_index != -1) goto LAB_0055080c;
        g_CSfxSlot_ARRAY_0263cf1c[uVar9].sample = pCVar10;
        goto LAB_00550817;
      }
      break;
    }
    iVar4 = iVar4 + 1;
    pCVar10 = pCVar10 + 1;
  } while (iVar4 < 0x40);
  iVar4 = engine_dosio_cpp_getFileSize_FUN_00460aa0("sound",local_174);
  if (iVar4 < 0x200001) {
    engine_dosio_cpp_splitPath_FUN_00461070(local_174,(char *)0x0,(char *)0x0,(char *)0x0,local_274)
    ;
    iVar4 = _stricmp(local_274,"mp3");
    if ((iVar4 == 0) ||
       (iVar4 = _stricmp(local_274,".mp3"), iVar4 == 0))
    goto LAB_0055080c;
    pCVar10 = sound_sndmain_cpp_getSfxSample_FUN_0054c1c0(local_174);
  }
  else {
LAB_0055080c:
    pCVar10 = sound_sndmain_cpp_loadStreamingSoundFile_FUN_0054c7f0(local_14,local_174);
  }
  g_CSfxSlot_ARRAY_0263cf1c[uVar9].sample = pCVar10;
LAB_00550817:
  pCVar10 = g_CSfxSlot_ARRAY_0263cf1c[uVar9].sample;
  if (pCVar10 == (CSfxSample *)0x0) {
    sound_sndmain_cpp_logSoundError_FUN_005549c0("startSfx - can't get sample %s\n",local_174);
  }
  else {
    pCVar10->ref_count = pCVar10->ref_count + 1;
    sound_sndmain_cpp_CSfxSlot_seek_FUN_0054fbe0(this_ptr);
    g_CSfxSlot_ARRAY_0263cf1c[uVar9].is_active = 0;
    fVar1 = g_CSfxSlot_ARRAY_0263cf1c[uVar9].options.current_volume;
    g_CSfxSlot_ARRAY_0263cf1c[uVar9].fade_time_remaining = -1.0;
    g_CSfxSlot_ARRAY_0263cf1c[uVar9].stop_after_fade = 0.0;
    g_CSfxSlot_ARRAY_0263cf1c[uVar9].fade_target_volume = fVar1;
    pCVar6 = this_ptr;
    do {
      pCVar7 = &(pCVar6->options).position;
      pCVar6->channel_current_buffer_offsets[0] = -1;
      pCVar6 = (CSfxSlot *)pCVar7;
    } while (pCVar7 != (CVector3d *)&g_CSfxSlot_ARRAY_0263cf1c[uVar9].options.position_format);
    iVar4 = g_SfxPlaybackStateCounter + 1;
    pCVar10 = g_CSfxSlot_ARRAY_0263cf1c[uVar9].sample;
    g_CSfxSlot_ARRAY_0263cf1c[uVar9].reference_distance =
         ((g_CSfxSlot_ARRAY_0263cf1c[uVar9].sample)->sample_info).reference_distance;
    pCVar3 = g_CSfxSlot_ARRAY_0263cf1c[uVar9].sample;
    g_SfxPlaybackStateCounter = iVar4;
    g_CSfxSlot_ARRAY_0263cf1c[uVar9].min_distance = (pCVar10->sample_info).reference_volume_distance
    ;
    g_CSfxSlot_ARRAY_0263cf1c[uVar9].max_distance = (pCVar3->sample_info).max_distance;
    g_CSfxSlot_ARRAY_0263cf1c[uVar9].changed_flags = 0xffffffff;
    if (0xfffffe < iVar4) {
      g_SfxPlaybackStateCounter = 1;
    }
    iVar4 = g_SfxPlaybackStateCounter;
    pCVar10 = g_CSfxSlot_ARRAY_0263cf1c[uVar9].sample;
    g_CSfxSlot_ARRAY_0263cf1c[uVar9].playback_state = g_SfxPlaybackStateCounter;
    iVar5 = sound_sndmain_cpp_CSfxSample_pollStream_FUN_0054ddf0(pCVar10,999.0,999.0);
    if (iVar5 != 0) {
      sound_sndmain_cpp_CSfxSlot_compute_FUN_0054e8c0(this_ptr,0.0);
      uVar8 = sound_sndmain_cpp_hasHardware3DSound_FUN_00552b30();
      if ((int)uVar8 < 1) {
LAB_00550a34:
        sound_sndmain_cpp_unlockSound_FUN_00551440();
        return iVar4 << 6 | local_14;
      }
      iVar5 = (*g_CSoundDevicePtr->vtable->allocateSfx)
                        (g_CSoundDevicePtr,(g_CSfxSlot_ARRAY_0263cf1c[uVar9].sample)->buffer_id);
      g_CSfxSlot_ARRAY_0263cf1c[uVar9].hardware_buffer_handle = iVar5;
      if (iVar5 != 0) goto LAB_00550a34;
    }
  }
  sound_sndmain_cpp_CSfxSlot_kill_FUN_0054f700(this_ptr);
LAB_00550933:
  sound_sndmain_cpp_unlockSound_FUN_00551440();
  return 0;
}
