// Name: sound_sndmain.cpp_startSfx_FUN_00556240
// Address: 00556240
// Address Range: [[00556240, 005565e1]]
// Convention: __cdecl
// Signature: uint __cdecl sound_sndmain_cpp_startSfx_FUN_00556240(char *filename)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_startSfx_FUN_00556240(char *filename)

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
     (iVar4 = sound_sndmain_cpp_isSoundBusy_FUN_005586c0(), iVar4 == 0)) {
    return 0;
  }
  sound_sndmain_cpp_CSfxOptions_reset_FUN_00555bf0(&local_74);
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
  pCVar12 = g_CSfxOptions_ARRAY_02ceb920 + g_INT_02ceb91c;
  pCVar14 = &local_74;
  for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
    pCVar14->channel_index = pCVar12->channel_index;
    pCVar12 = (CSfxOptions *)((int)pCVar12 + ((uint)bVar15 * -2 + 1) * 4);
    pCVar14 = (CSfxOptions *)((int)pCVar14 + ((uint)bVar15 * -2 + 1) * 4);
  }
  iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(local_74.channel_index);
  if (iVar4 == 0) {
    return 0;
  }
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  if (g_INT_02cf341c < 1) {
    g_CHAR_PTR_01d71de0 = "..\\sound\\sndmain.cpp";
    g_INT_01d71de4 = 0x24b;
    core_main_c_displayErrorAndQuit_FUN_004e4330("SfxSlot::kill - must be locked!");
  }
  uVar9 = 0;
  iVar5 = 0;
  iVar4 = g_CSfxSlot_ARRAY_02ce721c[0].playback_state;
  while (iVar4 != 0) {
    uVar9 = uVar9 + 1;
    if (0x46ff < iVar5 + 0x11c) {
      uVar9 = 0xffffffff;
      break;
    }
    iVar4 = *(int *)((int)g_CSfxSlot_ARRAY_02ce721c[1].distance_to_speakers + iVar5 + -0xc);
    iVar5 = iVar5 + 0x11c;
  }
  local_14 = uVar9;
  if ((int)uVar9 < 0) goto LAB_005564c3;
  this_ptr = g_CSfxSlot_ARRAY_02ce721c + uVar9;
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
        if (pCVar10->streaming_slot_index != -1) goto LAB_0055639c;
        g_CSfxSlot_ARRAY_02ce721c[uVar9].sample = pCVar10;
        goto LAB_005563a7;
      }
      break;
    }
    iVar4 = iVar4 + 1;
    pCVar10 = pCVar10 + 1;
  } while (iVar4 < 0x40);
  iVar4 = engine_dosio_cpp_getFileSize_FUN_004657f0("sound",local_174);
  if (iVar4 < 0x200001) {
    engine_dosio_cpp_splitPath_FUN_00465e50(local_174,(char *)0x0,(char *)0x0,(char *)0x0,local_274)
    ;
    iVar4 = _stricmp(local_274,"mp3");
    if ((iVar4 == 0) ||
       (iVar4 = _stricmp(local_274,".mp3"), iVar4 == 0))
    goto LAB_0055639c;
    pCVar10 = sound_sndmain_cpp_getSfxSample_FUN_00551d20(local_174);
  }
  else {
LAB_0055639c:
    pCVar10 = sound_sndmain_cpp_loadStreamingSoundFile_FUN_00552350(local_14,local_174);
  }
  g_CSfxSlot_ARRAY_02ce721c[uVar9].sample = pCVar10;
LAB_005563a7:
  pCVar10 = g_CSfxSlot_ARRAY_02ce721c[uVar9].sample;
  if (pCVar10 == (CSfxSample *)0x0) {
    sound_sndmain_cpp_logSoundError_FUN_0055a560("startSfx - can't get sample %s\n",local_174);
  }
  else {
    pCVar10->ref_count = pCVar10->ref_count + 1;
    sound_sndmain_cpp_CSfxSlot_seek_FUN_00555750(this_ptr);
    g_CSfxSlot_ARRAY_02ce721c[uVar9].is_active = 0;
    fVar1 = g_CSfxSlot_ARRAY_02ce721c[uVar9].options.current_volume;
    g_CSfxSlot_ARRAY_02ce721c[uVar9].fade_time_remaining = -1.0;
    g_CSfxSlot_ARRAY_02ce721c[uVar9].stop_after_fade = 0.0;
    g_CSfxSlot_ARRAY_02ce721c[uVar9].fade_target_volume = fVar1;
    pCVar6 = this_ptr;
    do {
      pCVar7 = &(pCVar6->options).position;
      pCVar6->channel_current_buffer_offsets[0] = -1;
      pCVar6 = (CSfxSlot *)pCVar7;
    } while (pCVar7 != (CVector3d *)&g_CSfxSlot_ARRAY_02ce721c[uVar9].options.position_format);
    iVar4 = g_INT_00604210 + 1;
    pCVar10 = g_CSfxSlot_ARRAY_02ce721c[uVar9].sample;
    g_CSfxSlot_ARRAY_02ce721c[uVar9].reference_distance =
         ((g_CSfxSlot_ARRAY_02ce721c[uVar9].sample)->sample_info).reference_distance;
    pCVar3 = g_CSfxSlot_ARRAY_02ce721c[uVar9].sample;
    g_INT_00604210 = iVar4;
    g_CSfxSlot_ARRAY_02ce721c[uVar9].min_distance = (pCVar10->sample_info).reference_volume_distance
    ;
    g_CSfxSlot_ARRAY_02ce721c[uVar9].max_distance = (pCVar3->sample_info).max_distance;
    g_CSfxSlot_ARRAY_02ce721c[uVar9].changed_flags = 0xffffffff;
    if (0xfffffe < iVar4) {
      g_INT_00604210 = 1;
    }
    iVar4 = g_INT_00604210;
    pCVar10 = g_CSfxSlot_ARRAY_02ce721c[uVar9].sample;
    g_CSfxSlot_ARRAY_02ce721c[uVar9].playback_state = g_INT_00604210;
    iVar5 = sound_sndmain_cpp_CSfxSample_pollStream_FUN_00553960(pCVar10,999.0,999.0);
    if (iVar5 != 0) {
      sound_sndmain_cpp_CSfxSlot_compute_FUN_00554430(this_ptr,0.0);
      uVar8 = sound_sndmain_cpp_hasHardware3DSound_FUN_005586d0();
      if ((int)uVar8 < 1) {
LAB_005565c4:
        sound_sndmain_cpp_unlockSound_FUN_00556fd0();
        return iVar4 << 6 | local_14;
      }
      iVar5 = (*g_CSoundDevice_PTR_02cf3280->vtable->allocateSfx)
                        (g_CSoundDevice_PTR_02cf3280,
                         (g_CSfxSlot_ARRAY_02ce721c[uVar9].sample)->buffer_id);
      g_CSfxSlot_ARRAY_02ce721c[uVar9].hardware_buffer_handle = iVar5;
      if (iVar5 != 0) goto LAB_005565c4;
    }
  }
  sound_sndmain_cpp_CSfxSlot_kill_FUN_00555270(this_ptr);
LAB_005564c3:
  sound_sndmain_cpp_unlockSound_FUN_00556fd0();
  return 0;
}
