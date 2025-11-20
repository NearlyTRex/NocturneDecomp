// Name: sound_sndmain.cpp_startSfx_FUN_005a8e90
// Address: 005a8e90
// Address Range: [[005a8e90, 005a9543]]
// Convention: __cdecl
// Signature: uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
// Cross-references:
//   core_event.cpp_CEventList_FUN_004b0f00 (004b0f00) at 004b0f59 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireball_onCollision_FUN_004c1690 (004c1690) at 004c1736 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20 (004d1f20) at 004d1f5f [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e43a8 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450 (00506450) at 00506641 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0 (0050aba0) at 0050ad04 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40 (0050ad40) at 0050adba [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050a4f0 (0050a4f0) at 0050a5e3 [UNCONDITIONAL_CALL]
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 00512877 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00581131 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589b10 (00589b10) at 00589b25 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589c20 (00589c20) at 00589e96 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058d1fe [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b2fd0 (005b2fd0) at 005b352f [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b3830 (005b3830) at 005b3962 [UNCONDITIONAL_CALL]
//   core_sound.cpp_playSfxInternal_FUN_005b1fd0 (005b1fd0) at 005b220c [UNCONDITIONAL_CALL]
//   core_sound.cpp_processTrainSounds_FUN_005b2770 (005b2770) at 005b2a7c [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bdce1 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startNonPositionalSfx_FUN_005a9550 (005a9550) at 005a9565 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfxAtStaticPosition_FUN_005a9580 (005a9580) at 005a95be [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfxTrackedDoublePosition_FUN_005a9620 (005a9620) at 005a9642 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfxTrackedFloatPosition_FUN_005a95e0 (005a95e0) at 005a9602 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_testSoundFile_FUN_005ad3b0 (005ad3b0) at 005ad480 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_0064f54e
//   TerminatedCString s_SfxSlot_kill_must_be_loc_0064f563
//   TerminatedCString s_sound_0064fa53
//   TerminatedCString s_mp3_0064fa59
//   TerminatedCString s_mp3_0064fa5d
//   TerminatedCString s_mp3_0064fa62
//   TerminatedCString s_mp3_0064fa66
//   TerminatedCString s_sound_0064fa6b
//   TerminatedCString s_sound_sndmain_cpp_0064fa71
//   TerminatedCString s_sound_sndmain_cpp_0064fa86
//   TerminatedCString s_Out_of_memory_0064fa9b
//   TerminatedCString s_rb_0064faaa
//   TerminatedCString s_sound_0064faad
//   TerminatedCString s_startSfx_can_t_get_sampl_0065098e
//   float FLOAT_00663164 = 2
//   int g_SfxPlaybackStateCounter = 0x1
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_03f5d97c
//   CSfxSlot[64] g_SfxSlots
//   undefined4 g_SfxSlots[0].field7_0x74
//   undefined4 g_SfxSlots[1].status
//   undefined4 g_SfxSlots[1].sample_data
//   undefined4 g_SfxSlots[1].field_20[12]
//   undefined4 g_SfxSlots[1].field_20[48]
//   undefined4 g_SfxSlots[1].dsound_buffer
//   undefined4 DAT_03f5dc40
//   undefined4 DAT_03f5dc44
//   undefined4 g_SfxSlots[1].field_124[100]
//   undefined4 g_SfxSlots[1].field_124[104]
//   undefined4 g_SfxSlots[1].field_124[132]
//   undefined4 g_SfxSlots[1].field_124[136]
//   undefined4 g_SfxSlots[1].field_124[140]
//   undefined4 g_SfxSlots[1].field_124[144]
//   undefined4 g_SfxSlots[1].field_124[148]
//   undefined4 g_SfxSlots[1].field_124[152]
//   undefined4 g_SfxSlots[1].is_active
//   undefined4 g_SfxSlots[2].field_116
//   int g_SfxLastSlot
//   CSfxOptions[8] g_SfxOptions
//   undefined4 g_SfxLastSlot.volume
//   int g_LastSampleAccessIndex
//   CSfxSample[64] g_SfxSamples
//   undefined4 DAT_03f6297c
//   undefined4 DAT_03f629ac
//   undefined4 DAT_03f62afc
//   undefined4 DAT_03f62b00
//   CSoundDevice* g_CSoundDevicePtr
//   int g_SoundLockCount
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_ftell_FUN_00601560
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_dosio.c_getFileSize_FUN_00481880
//   engine_dosio.c_splitPath_FUN_00481f20
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0
//   sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550
//   sound_sndmain.cpp_CSfxOptions_reset_FUN_005a8830
//   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170
//   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
//   sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0
//   sound_sndmain.cpp_CSfxSample_pollStream_FUN_005a6730
//   sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0
//   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
//   sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
//   sound_sndmain.cpp_CSfxSlot_seek_FUN_005a8390
//   sound_sndmain.cpp_getSfxSample_FUN_005a4c80
//   sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0
//   sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
//   sound_sndmain.cpp_isSoundBusy_FUN_005ab540
//   sound_sndmain.cpp_lockSound_FUN_005abd30
//   sound_sndmain.cpp_logSoundError_FUN_005adba0
//   sound_sndmain.cpp_parseWavFile_FUN_005a3fe0
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

uint __cdecl sound_sndmain_cpp_startSfx_FUN_005a8e90(char *filename)

{
  float fVar1;
  char cVar2;
  int iVar3;
  CSfxSlot *pCVar4;
  int iVar5;
  uint uVar6;
  CMP3Decoder *pCVar7;
  FILE *pFVar8;
  long lVar9;
  CSfxSample *sfx_sample;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  CSfxSlot *this_ptr;
  char *pcVar10;
  CSfxOptions *pCVar11;
  int *piVar12;
  char *pcVar13;
  CVector3d *pCVar14;
  CSfxSample *pCVar15;
  byte bVar16;
  float10 fVar17;
  double dVar18;
  CSfxSample *unaff_retaddr;
  CSfxSample *in_stack_0000000c;
  CSfxSample *pCStack00000010;
  CSfxSample *in_stack_00000014;
  CSfxSample *pCVar19;
  char acStack_28c [4];
  char acStack_288 [32];
  char acStack_268 [240];
  char acStack_178 [4];
  char acStack_174 [4];
  char acStack_170 [228];
  CSfxOptions CStack_8c;
  
  bVar16 = 0;
  if ((filename == (char *)0x0) || (*filename == '\0')) {
    return 0;
  }
  iVar3 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
  if (iVar3 == 0) {
    return 0;
  }
  sound_sndmain_cpp_CSfxOptions_reset_FUN_005a8830(&CStack_8c);
  pcVar13 = &stack0xfffffc78;
  pcVar10 = filename;
  do {
    cVar2 = *pcVar10;
    *pcVar13 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar13[1] = cVar2;
    pcVar13 = pcVar13 + 2;
  } while (cVar2 != '\0');
  pCVar11 = g_SfxOptions + g_SfxLastSlot;
  pCVar14 = &CStack_8c.position;
  for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(int *)&pCVar14->x = pCVar11->channel_index;
    pCVar11 = (CSfxOptions *)((int)pCVar11 + ((uint)bVar16 * -2 + 1) * 4);
    pCVar14 = (CVector3d *)((int)pCVar14 + ((uint)bVar16 * -2 + 1) * 4);
  }
  iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(CStack_8c.position.x._0_4_);
  if (iVar3 == 0) {
    return 0;
  }
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x1f6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - must be locked!");
  }
  sfx_sample = (CSfxSample *)0x0;
  iVar5 = 0;
  iVar3 = g_SfxSlots[0].playback_state;
  while (iVar3 != 0) {
    sfx_sample = (CSfxSample *)((sfx_sample->sample_info).name + 1);
    if (0x49ff < iVar5 + 0x128) {
      sfx_sample = (CSfxSample *)0xffffffff;
      break;
    }
    iVar3 = *(int *)((int)g_SfxSlots[1].distance_to_speakers + iVar5 + -0xc);
    iVar5 = iVar5 + 0x128;
  }
  if ((int)sfx_sample < 0) {
    sound_sndmain_cpp_unlockSound_FUN_005abdc0();
    return 0;
  }
  this_ptr = g_SfxSlots + (int)sfx_sample;
  piVar12 = (int *)((int)&CStack_8c.position.y + 4);
  pCVar4 = this_ptr;
  for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
    (pCVar4->options).channel_index = *piVar12;
    piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
    pCVar4 = (CSfxSlot *)((int)pCVar4 + (uint)bVar16 * -8 + 4);
  }
  iVar3 = engine_dosio_c_getFileSize_FUN_00481880("sound",&stack0xfffffc84);
  if (iVar3 < 0x200001) {
    engine_dosio_c_splitPath_FUN_00481f20
              (&stack0xfffffc88,(char *)0x0,(char *)0x0,(char *)0x0,acStack_178);
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(acStack_174,"mp3");
    if (iVar3 == 0) goto LAB_005a8fc7;
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(acStack_170,".mp3");
    if (iVar3 == 0) goto LAB_005a8fc7;
    pCStack00000010 = sound_sndmain_cpp_getSfxSample_FUN_005a4c80(&stack0xfffffc94);
  }
  else {
LAB_005a8fc7:
    pcVar10 = &stack0xfffffc98;
    pcVar13 = &stack0xfffffc98;
    iVar3 = 0;
    do {
      g_LastSampleAccessIndex = g_LastSampleAccessIndex + 1;
      if (0x3f < g_LastSampleAccessIndex) {
        g_LastSampleAccessIndex = 0;
      }
      if ((g_SfxSamples[g_LastSampleAccessIndex].taken == 0) &&
         (g_SfxSamples[g_LastSampleAccessIndex].ref_count == 0)) {
        pCStack00000010 = g_SfxSamples + g_LastSampleAccessIndex;
        goto LAB_005a900a;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40);
    pCStack00000010 = (CSfxSample *)0x0;
LAB_005a900a:
    in_stack_00000014 = pCStack00000010;
    if (pCStack00000010 != (CSfxSample *)0x0) {
      pCVar19 = (CSfxSample *)0x0;
      engine_dosio_c_splitPath_FUN_00481f20
                (&stack0xfffffc98,(char *)0x0,(char *)0x0,(char *)0x0,acStack_268);
      iVar3 = crt_string_c_stricmp_FUN_005fe7f0(acStack_28c,"mp3");
      if ((iVar3 == 0) ||
         (iVar3 = crt_string_c_stricmp_FUN_005fe7f0(acStack_288,".mp3"), iVar3 == 0)) {
        iVar3 = engine_dosio_c_getFileSize_FUN_00481880("sound",&stack0xfffffc98);
        if (0 < iVar3) {
          pCVar7 = (CMP3Decoder *)
                   shape_memdbg_cpp_debugAlloc_FUN_0050f1b0
                             (0x8630,"..\\sound\\sndmain.cpp",0x3c5);
          if (pCVar7 != (CMP3Decoder *)0x0) {
            pCVar7 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(pCVar7);
          }
          *(CMP3Decoder **)(filename + 0x16c) = pCVar7;
          if (pCVar7 == (CMP3Decoder *)0x0) {
            g_CurrentFilename = "..\\sound\\sndmain.cpp";
            g_CurrentLineNumber = 0x3c6;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory.");
          }
          sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550
                    (*(CMP3Decoder **)(filename + 0x16c),&stack0xfffffc98);
          pCVar15 = in_stack_0000000c;
          do {
            cVar2 = *pcVar10;
            (pCVar15->sample_info).name[0] = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar10[1];
            pcVar10 = pcVar10 + 2;
            (pCVar15->sample_info).name[1] = cVar2;
            pCVar15 = (CSfxSample *)((pCVar15->sample_info).name + 2);
          } while (cVar2 != '\0');
          (in_stack_0000000c->sample_info).streaming_flag = 1;
          pCVar7 = in_stack_0000000c->mp3_data;
          (in_stack_0000000c->sample_info).bit_depth = 0x10;
          (in_stack_0000000c->sample_info).num_channels = pCVar7->num_channels;
          iVar3 = in_stack_0000000c->mp3_data->sample_rate;
          (in_stack_0000000c->sample_info).sample_count = -1;
          (in_stack_0000000c->sample_info).sample_rate = iVar3;
          sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(in_stack_0000000c);
          in_stack_0000000c->taken = 0;
          in_stack_0000000c->ref_count = 0;
          iVar3 = (in_stack_0000000c->sample_info).sample_rate;
          in_stack_0000000c->buffer_id = 0;
          fVar17 = (float10)iVar3 * (float10)FLOAT_00663164;
          in_stack_0000000c->stream_read_position = 0;
          in_stack_0000000c->stream_write_position = 0;
          dVar18 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,unaff_retaddr));
          in_stack_0000000c->streaming_buffer_size = (int)ROUND(fVar17);
          in_stack_0000000c->streaming_slot_index = SUB84(dVar18,0);
          iVar3 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005a6170(pCVar19);
joined_r0x005a94f6:
          if (iVar3 != 0) {
            sound_sndmain_cpp_CSfxSample_seek_FUN_005a65a0(pCStack00000010,0,0);
            goto LAB_005a9026;
          }
        }
      }
      else {
        pFVar8 = engine_dosio_c_getFile_FUN_00481a50
                           ("sound",&stack0xfffffc98,"rb");
        sfx_sample->file_handle = pFVar8;
        pCVar19 = sfx_sample;
        if (pFVar8 != (FILE *)0x0) {
          do {
            cVar2 = *pcVar13;
            (pCVar19->sample_info).name[0] = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar13[1];
            pcVar13 = pcVar13 + 2;
            (pCVar19->sample_info).name[1] = cVar2;
            pCVar19 = (CSfxSample *)((pCVar19->sample_info).name + 2);
          } while (cVar2 != '\0');
          lVar9 = crt_stdio_c_ftell_FUN_00601560(sfx_sample->file_handle);
          sfx_sample->file_offset = lVar9;
          iVar3 = sound_sndmain_cpp_parseWavFile_FUN_005a3fe0
                            (sfx_sample->file_handle,&sfx_sample->file_offset,sfx_sample);
          if (iVar3 != 0) {
            sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(unaff_retaddr);
            iVar3 = *(int *)(filename + 0x10c);
            filename[0x150] = '\0';
            filename[0x151] = '\0';
            filename[0x152] = '\0';
            filename[0x153] = '\0';
            fVar17 = (float10)iVar3 * (float10)FLOAT_00663164;
            filename[0x154] = '\0';
            filename[0x155] = '\0';
            filename[0x156] = '\0';
            filename[0x157] = '\0';
            filename[0x158] = '\0';
            filename[0x159] = '\0';
            filename[0x15a] = '\0';
            filename[0x15b] = '\0';
            dVar18 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(filename,filename));
            pCVar19 = (CSfxSample *)((ulonglong)dVar18 >> 0x20);
            *(int *)(SUB84(dVar18,0) + 0x160) = (int)ROUND(fVar17);
            pCVar19->stream_read_position = 0;
            pCVar19->stream_write_position = 0;
            pCVar19->streaming_slot_index = (int)unaff_retaddr;
            iVar3 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005a6170(pCVar19);
            goto joined_r0x005a94f6;
          }
        }
      }
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(pCStack00000010);
      pCStack00000010 = (CSfxSample *)0x0;
    }
  }
LAB_005a9026:
  g_SfxSlots[(int)sfx_sample].sample = pCStack00000010;
  pCVar19 = g_SfxSlots[(int)sfx_sample].sample;
  if (pCVar19 == (CSfxSample *)0x0) {
    sound_sndmain_cpp_logSoundError_FUN_005adba0("startSfx - can't get sample %s\n");
  }
  else {
    pCVar19->ref_count = pCVar19->ref_count + 1;
    sound_sndmain_cpp_CSfxSlot_seek_FUN_005a8390(this_ptr);
    g_SfxSlots[(int)sfx_sample].is_active = 0;
    fVar1 = g_SfxSlots[(int)sfx_sample].options.current_volume;
    g_SfxSlots[(int)sfx_sample].fade_time_remaining = -1.0;
    g_SfxSlots[(int)sfx_sample].stop_after_fade = 0;
    g_SfxSlots[(int)sfx_sample].fade_target_volume = fVar1;
    pCVar4 = this_ptr;
    do {
      pCVar14 = &(pCVar4->options).position;
      pCVar4->channel_current_buffer_offsets[0] = -1;
      pCVar4 = (CSfxSlot *)pCVar14;
    } while (pCVar14 != (CVector3d *)&g_SfxSlots[(int)sfx_sample].options.position_format);
    iVar3 = g_SfxPlaybackStateCounter + 1;
    pCVar19 = g_SfxSlots[(int)sfx_sample].sample;
    g_SfxSlots[(int)sfx_sample].reference_distance =
         ((g_SfxSlots[(int)sfx_sample].sample)->sample_info).reference_distance;
    pCVar15 = g_SfxSlots[(int)sfx_sample].sample;
    g_SfxPlaybackStateCounter = iVar3;
    g_SfxSlots[(int)sfx_sample].min_distance = (pCVar19->sample_info).reference_volume_distance;
    g_SfxSlots[(int)sfx_sample].max_distance = (pCVar15->sample_info).max_distance;
    if (0xfffffe < iVar3) {
      g_SfxPlaybackStateCounter = 1;
    }
    iVar3 = g_SfxPlaybackStateCounter;
    pCVar19 = g_SfxSlots[(int)sfx_sample].sample;
    g_SfxSlots[(int)sfx_sample].playback_state = g_SfxPlaybackStateCounter;
    iVar5 = sound_sndmain_cpp_CSfxSample_pollStream_FUN_005a6730(pCVar19,999.0,999.0);
    if (iVar5 != 0) {
      sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr,0.0);
      uVar6 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar6 != 0) {
        iVar5 = (*g_CSoundDevicePtr->vtable->allocateSfx)
                          (g_CSoundDevicePtr,(g_SfxSlots[(int)sfx_sample].sample)->buffer_id);
        g_SfxSlots[(int)sfx_sample].hardware_buffer_handle = iVar5;
        if ((iVar5 == 0) ||
           (iVar5 = (*g_CSoundDevicePtr->vtable->startSfx)(g_CSoundDevicePtr,this_ptr), iVar5 == 0))
        goto LAB_005a9523;
      }
      sound_sndmain_cpp_unlockSound_FUN_005abdc0();
      return iVar3 << 6 | (uint)in_stack_00000014;
    }
  }
LAB_005a9523:
  sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(this_ptr);
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 0;
}


// Assembly code:
// 005a8e90: PUSH EBX
//   Label: sound_sndmain.cpp_startSfx_FUN_005a8e90
// 005a8e91: PUSH ESI
// 005a8e92: PUSH EDI
// 005a8e93: PUSH EBP
// 005a8e94: SUB ESP,0x380
// 005a8e9a: MOV EBX,dword ptr [0x03f62828]
//   XREF to: 03f62828 (READ)
// 005a8ea0: MOV ESI,dword ptr [ESP + 0x394]
//   XREF to: Stack[0x4] (READ)
// 005a8ea7: TEST ESI,ESI
// 005a8ea9: JZ 0x005a8eb0
//   XREF to: 005a8eb0 (CONDITIONAL_JUMP)
// 005a8eab: CMP byte ptr [ESI],0x0
// 005a8eae: JNZ 0x005a8ec3
//   XREF to: 005a8ec3 (CONDITIONAL_JUMP)
// 005a8eb0: XOR EAX,EAX
//   Label: LAB_005a8eb0
// 005a8eb2: MOV EBX,dword ptr [0x03f62828]
//   Label: LAB_005a8eb2
//   XREF to: 03f62828 (READ)
// 005a8eb8: ADD ESP,0x380
// 005a8ebe: POP EBP
// 005a8ebf: POP EDI
// 005a8ec0: POP ESI
// 005a8ec1: POP EBX
// 005a8ec2: RET
// 005a8ec3: CALL sound_sndmain.cpp_isSoundBusy_FUN_005ab540
//   Label: LAB_005a8ec3
//   XREF to: 005ab540 (UNCONDITIONAL_CALL)
// 005a8ec8: TEST EAX,EAX
// 005a8eca: JZ 0x005a8eb2
//   XREF to: 005a8eb2 (CONDITIONAL_JUMP)
// 005a8ecc: LEA EAX,[ESP + 0x300]
//   XREF to: Stack[-0x90] (DATA)
// 005a8ed3: PUSH EAX
// 005a8ed4: CALL sound_sndmain.cpp_CSfxOptions_reset_FUN_005a8830
//   XREF to: 005a8830 (UNCONDITIONAL_CALL)
// 005a8ed9: ADD ESP,0x4
// 005a8edc: MOV EDI,ESP
// 005a8ede: PUSH EDI
// 005a8edf: MOV AL,byte ptr [ESI]
//   Label: LAB_005a8edf
// 005a8ee1: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x390] (DATA)
// 005a8ee3: CMP AL,0x0
// 005a8ee5: JZ 0x005a8ef7
//   XREF to: 005a8ef7 (CONDITIONAL_JUMP)
// 005a8ee7: MOV AL,byte ptr [ESI + 0x1]
// 005a8eea: ADD ESI,0x2
// 005a8eed: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x38f] (WRITE)
// 005a8ef0: ADD EDI,0x2
// 005a8ef3: CMP AL,0x0
// 005a8ef5: JNZ 0x005a8edf
//   XREF to: 005a8edf (CONDITIONAL_JUMP)
// 005a8ef7: POP EDI
//   Label: LAB_005a8ef7
// 005a8ef8: MOV EAX,[0x03f624a4]
//   XREF to: 03f624a4 (READ)
// 005a8efd: SHL EAX,0x4
// 005a8f00: MOV EDX,EAX
// 005a8f02: SHL EAX,0x3
// 005a8f05: SUB EAX,EDX
// 005a8f07: MOV ECX,0x1c
// 005a8f0c: LEA EDI,[ESP + 0x300]
//   XREF to: Stack[-0x90] (DATA)
// 005a8f13: LEA ESI,[EAX + 0x3f624a8]
//   XREF to: 03f624a8 (DATA)
// 005a8f19: MOVSD.REP ES:EDI,ESI
//   XREF to: 03f624a8 (DATA)
//   XREF to: 03f624ac (DATA)
// 005a8f1b: MOV EDX,dword ptr [ESP + 0x300]
//   XREF to: Stack[-0x90] (READ)
// 005a8f22: PUSH EDX
// 005a8f23: CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
//   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)
// 005a8f28: ADD ESP,0x4
// 005a8f2b: TEST EAX,EAX
// 005a8f2d: JZ 0x005a8eb2
//   XREF to: 005a8eb2 (CONDITIONAL_JUMP)
// 005a8f2f: CALL sound_sndmain.cpp_lockSound_FUN_005abd30
//   XREF to: 005abd30 (UNCONDITIONAL_CALL)
// 005a8f34: CMP dword ptr [0x03f6940c],0x0
//   XREF to: 03f6940c (READ)
// 005a8f3b: JLE 0x005a916c
//   XREF to: 005a916c (CONDITIONAL_JUMP)
// 005a8f41: MOV EBP,dword ptr [0x03f5db18]
//   Label: LAB_005a8f41
//   XREF to: 03f5db18 (READ)
// 005a8f47: MOV EBX,dword ptr [0x03f62828]
//   XREF to: 03f62828 (READ)
// 005a8f4d: XOR EAX,EAX
// 005a8f4f: XOR EDX,EDX
// 005a8f51: TEST EBP,EBP
// 005a8f53: JZ 0x005a8f6f
//   XREF to: 005a8f6f (CONDITIONAL_JUMP)
// 005a8f55: ADD EAX,0x128
//   Label: LAB_005a8f55
// 005a8f5a: INC EDX
// 005a8f5b: CMP EAX,0x4a00
// 005a8f60: JGE 0x005a9194
//   XREF to: 005a9194 (CONDITIONAL_JUMP)
// 005a8f66: CMP dword ptr [EAX + 0x3f5db18],0x0
//   XREF to: 03f5dc40 (READ)
//   XREF to: 03f5dd68 (READ)
// 005a8f6d: JNZ 0x005a8f55
//   XREF to: 005a8f55 (CONDITIONAL_JUMP)
// 005a8f6f: MOV dword ptr [ESP + 0x374],EDX
//   Label: LAB_005a8f6f
//   XREF to: Stack[-0x1c] (WRITE)
// 005a8f76: MOV dword ptr [0x03f62828],EBX
//   XREF to: 03f62828 (WRITE)
// 005a8f7c: TEST EDX,EDX
// 005a8f7e: JL 0x005a919e
//   XREF to: 005a919e (CONDITIONAL_JUMP)
// 005a8f84: LEA EAX,[EDX*0x8 + 0x0]
// 005a8f8b: ADD EAX,EDX
// 005a8f8d: SHL EAX,0x2
// 005a8f90: ADD EAX,EDX
// 005a8f92: MOV EBP,0x3f5daa4
//   XREF to: 03f5daa4 (DATA)
// 005a8f97: SHL EAX,0x3
// 005a8f9a: ADD EBP,EAX
// 005a8f9c: MOV EAX,ESP
// 005a8f9e: MOV ECX,0x1c
// 005a8fa3: PUSH EAX
// 005a8fa4: LEA ESI,[ESP + 0x304]
//   XREF to: Stack[-0x90] (DATA)
// 005a8fab: MOV EDI,EBP
// 005a8fad: PUSH 0x64fa53
//   XREF to: 0064fa53 (DATA)
// 005a8fb2: MOVSD.REP ES:EDI,ESI
//   XREF to: 03f5d97c (WRITE)
//   XREF to: 03f5dbcc (WRITE)
//   XREF to: 03f5dbd0 (WRITE)
// 005a8fb4: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 005a8fb9: ADD ESP,0x8
// 005a8fbc: CMP EAX,0x200000
// 005a8fc1: JLE 0x005a91b6
//   XREF to: 005a91b6 (CONDITIONAL_JUMP)
// 005a8fc7: MOV EAX,dword ptr [ESP + 0x374]
//   Label: LAB_005a8fc7
//   XREF to: Stack[-0x1c] (READ)
// 005a8fce: MOV ESI,ESP
// 005a8fd0: MOV EBX,dword ptr [0x03f62828]
//   XREF to: 03f62828 (READ)
// 005a8fd6: XOR EDX,EDX
// 005a8fd8: MOV dword ptr [ESP + 0x370],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005a8fdf: XOR EDI,EDI
// 005a8fe1: INC EBX
//   Label: LAB_005a8fe1
// 005a8fe2: CMP EBX,0x40
// 005a8fe5: JL 0x005a8fe9
//   XREF to: 005a8fe9 (CONDITIONAL_JUMP)
// 005a8fe7: MOV EBX,EDI
// 005a8fe9: IMUL EAX,EBX,0x180
//   Label: LAB_005a8fe9
// 005a8fef: CMP EDI,dword ptr [EAX + 0x3f6297c]
//   XREF to: 03f6297c (READ)
//   XREF to: 03f62afc (READ)
// 005a8ff5: JZ 0x005a921b
//   XREF to: 005a921b (CONDITIONAL_JUMP)
// 005a8ffb: INC EDX
//   Label: LAB_005a8ffb
// 005a8ffc: CMP EDX,0x40
// 005a8fff: JL 0x005a8fe1
//   XREF to: 005a8fe1 (CONDITIONAL_JUMP)
// 005a9001: XOR EDI,EDI
// 005a9003: MOV dword ptr [ESP + 0x378],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 005a900a: MOV EAX,dword ptr [ESP + 0x378]
//   Label: LAB_005a900a
//   XREF to: Stack[-0x18] (READ)
//   XREF to: 03f629ac (PARAM)
// 005a9011: MOV dword ptr [0x03f62828],EBX
//   XREF to: 03f62828 (WRITE)
// 005a9017: MOV dword ptr [ESP + 0x37c],EAX
//   XREF to: Stack[-0x14] (WRITE)
//   XREF to: 03f629ac (DATA)
// 005a901e: TEST EAX,EAX
// 005a9020: JNZ 0x005a923a
//   XREF to: 005a923a (CONDITIONAL_JUMP)
// 005a9026: MOV dword ptr [EBP + 0x78],EAX
//   Label: LAB_005a9026
//   XREF to: 03f5dc44 (WRITE)
//   XREF to: 03f629ac (DATA)
// 005a9029: MOV EDX,dword ptr [EBP + 0x78]
//   XREF to: 03f629ac (PARAM)
//   XREF to: 03f5dc44 (READ)
// 005a902c: TEST EDX,EDX
// 005a902e: JZ 0x005a9513
//   XREF to: 005a9513 (CONDITIONAL_JUMP)
// 005a9034: MOV ECX,dword ptr [EDX + 0x154]
//   XREF to: 03f62b00 (READ)
// 005a903a: INC ECX
// 005a903b: PUSH EBP
//   XREF to: 03f5dbcc (DATA)
// 005a903c: MOV dword ptr [EDX + 0x154],ECX
//   XREF to: 03f62b00 (WRITE)
// 005a9042: CALL sound_sndmain.cpp_CSfxSlot_seek_FUN_005a8390
//   XREF to: 005a8390 (UNCONDITIONAL_CALL)
// 005a9047: MOV dword ptr [EBP + 0x118],0x0
//   XREF to: 03f5dce4 (WRITE)
// 005a9051: FLD float ptr [EBP + 0x44]
//   XREF to: 03f5dc10 (READ)
// 005a9054: MOV dword ptr [EBP + 0x110],0xbf800000
//   XREF to: 03f5dcdc (WRITE)
// 005a905e: ADD ESP,0x4
// 005a9061: MOV dword ptr [EBP + 0x114],0x0
//   XREF to: 03f5dce0 (WRITE)
// 005a906b: MOV EAX,EBP
// 005a906d: FSTP float ptr [EBP + 0x10c]
//   XREF to: 03f5dcd8 (WRITE)
// 005a9073: LEA EDX,[EBP + 0x20]
//   XREF to: 03f5dbec (DATA)
// 005a9076: ADD EAX,0x4
//   Label: LAB_005a9076
// 005a9079: MOV dword ptr [EAX + 0xdc],0xffffffff
//   XREF to: 03f5dcac (WRITE)
//   XREF to: 03f5dcb0 (WRITE)
// 005a9083: CMP EAX,EDX
// 005a9085: JNZ 0x005a9076
//   XREF to: 005a9076 (CONDITIONAL_JUMP)
// 005a9087: MOV EAX,dword ptr [EBP + 0x78]
//   XREF to: 03f5dc44 (READ)
// 005a908a: MOV ESI,dword ptr [0x00681af0]
//   XREF to: 00681af0 (READ)
// 005a9090: FLD float ptr [EAX + 0x114]
// 005a9096: INC ESI
// 005a9097: MOV EAX,dword ptr [EBP + 0x78]
//   XREF to: 03f5dc44 (READ)
// 005a909a: FSTP float ptr [EBP + 0x100]
//   XREF to: 03f5dccc (WRITE)
// 005a90a0: MOV dword ptr [0x00681af0],ESI
//   XREF to: 00681af0 (WRITE)
// 005a90a6: FLD float ptr [EAX + 0x118]
// 005a90ac: MOV EAX,dword ptr [EBP + 0x78]
//   XREF to: 03f5dc44 (READ)
// 005a90af: FSTP float ptr [EBP + 0x104]
//   XREF to: 03f5dcd0 (WRITE)
// 005a90b5: MOV EDX,dword ptr [EAX + 0x11c]
// 005a90bb: MOV dword ptr [EBP + 0x108],EDX
//   XREF to: 03f5dcd4 (WRITE)
// 005a90c1: CMP ESI,0xffffff
// 005a90c7: JL 0x005a90d3
//   XREF to: 005a90d3 (CONDITIONAL_JUMP)
// 005a90c9: MOV dword ptr [0x00681af0],0x1
//   XREF to: 00681af0 (WRITE)
// 005a90d3: PUSH 0x4479c000
//   Label: LAB_005a90d3
// 005a90d8: PUSH 0x4479c000
// 005a90dd: MOV EDX,dword ptr [EBP + 0x78]
//   XREF to: 03f5dc44 (READ)
// 005a90e0: MOV ESI,dword ptr [0x00681af0]
//   XREF to: 00681af0 (READ)
// 005a90e6: PUSH EDX
// 005a90e7: MOV dword ptr [EBP + 0x74],ESI
//   XREF to: 03f5dc40 (WRITE)
// 005a90ea: CALL sound_sndmain.cpp_CSfxSample_pollStream_FUN_005a6730
//   XREF to: 005a6730 (UNCONDITIONAL_CALL)
// 005a90ef: ADD ESP,0xc
// 005a90f2: TEST EAX,EAX
// 005a90f4: JZ 0x005a9523
//   XREF to: 005a9523 (CONDITIONAL_JUMP)
// 005a90fa: PUSH 0x0
// 005a90fc: PUSH EBP
//   XREF to: 03f5dbcc (DATA)
// 005a90fd: CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
//   XREF to: 005a7100 (UNCONDITIONAL_CALL)
// 005a9102: ADD ESP,0x8
// 005a9105: CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0
//   XREF to: 005ab5a0 (UNCONDITIONAL_CALL)
// 005a910a: TEST EAX,EAX
// 005a910c: JZ 0x005a9148
//   XREF to: 005a9148 (CONDITIONAL_JUMP)
// 005a910e: MOV EDI,dword ptr [EBP + 0x78]
//   XREF to: 03f5dc44 (READ)
// 005a9111: MOV ECX,dword ptr [EDI + 0x158]
// 005a9117: MOV EAX,[0x03f69268]
//   XREF to: 03f69268 (READ)
// 005a911c: PUSH ECX
// 005a911d: MOV EDX,dword ptr [EAX]
// 005a911f: PUSH EAX
// 005a9120: CALL dword ptr [EDX + 0x3c]
// 005a9123: ADD ESP,0x8
// 005a9126: MOV dword ptr [EBP + 0x70],EAX
//   XREF to: 03f5dc3c (WRITE)
// 005a9129: TEST EAX,EAX
// 005a912b: JZ 0x005a9523
//   XREF to: 005a9523 (CONDITIONAL_JUMP)
// 005a9131: PUSH EBP
//   XREF to: 03f5dbcc (DATA)
// 005a9132: MOV EAX,[0x03f69268]
//   XREF to: 03f69268 (READ)
// 005a9137: PUSH EAX
// 005a9138: MOV EDX,dword ptr [EAX]
// 005a913a: CALL dword ptr [EDX + 0x48]
// 005a913d: ADD ESP,0x8
// 005a9140: TEST EAX,EAX
// 005a9142: JZ 0x005a9523
//   XREF to: 005a9523 (CONDITIONAL_JUMP)
// 005a9148: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   Label: LAB_005a9148
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005a914d: MOV EAX,ESI
// 005a914f: MOV EBP,dword ptr [ESP + 0x374]
//   XREF to: Stack[-0x1c] (READ)
// 005a9156: SHL EAX,0x6
// 005a9159: OR EAX,EBP
// 005a915b: MOV EBX,dword ptr [0x03f62828]
//   XREF to: 03f62828 (READ)
// 005a9161: ADD ESP,0x380
// 005a9167: POP EBP
// 005a9168: POP EDI
// 005a9169: POP ESI
// 005a916a: POP EBX
// 005a916b: RET
// 005a916c: MOV ESI,0x64f54e
//   Label: LAB_005a916c
//   XREF to: 0064f54e (DATA)
// 005a9171: MOV EDI,0x1f6
// 005a9176: PUSH 0x64f563
//   XREF to: 0064f563 (DATA)
// 005a917b: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005a9181: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005a9187: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a918c: ADD ESP,0x4
// 005a918f: JMP 0x005a8f41
//   XREF to: 005a8f41 (UNCONDITIONAL_JUMP)
// 005a9194: MOV EDX,0xffffffff
//   Label: LAB_005a9194
// 005a9199: JMP 0x005a8f6f
//   XREF to: 005a8f6f (UNCONDITIONAL_JUMP)
// 005a919e: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   Label: LAB_005a919e
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005a91a3: XOR EAX,EAX
// 005a91a5: MOV EBX,dword ptr [0x03f62828]
//   XREF to: 03f62828 (READ)
// 005a91ab: ADD ESP,0x380
// 005a91b1: POP EBP
// 005a91b2: POP EDI
// 005a91b3: POP ESI
// 005a91b4: POP EBX
// 005a91b5: RET
// 005a91b6: LEA EAX,[ESP + 0x200]
//   Label: LAB_005a91b6
//   XREF to: Stack[-0x190] (DATA)
// 005a91bd: PUSH EAX
// 005a91be: PUSH 0x0
// 005a91c0: PUSH 0x0
// 005a91c2: PUSH 0x0
// 005a91c4: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x390] (DATA)
// 005a91c8: PUSH EAX
// 005a91c9: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 005a91ce: ADD ESP,0x14
// 005a91d1: PUSH 0x64fa59
//   XREF to: 0064fa59 (DATA)
// 005a91d6: LEA EAX,[ESP + 0x204]
//   XREF to: Stack[-0x190] (DATA)
// 005a91dd: PUSH EAX
// 005a91de: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005a91e3: ADD ESP,0x8
// 005a91e6: TEST EAX,EAX
// 005a91e8: JZ 0x005a8fc7
//   XREF to: 005a8fc7 (CONDITIONAL_JUMP)
// 005a91ee: PUSH 0x64fa5d
//   XREF to: 0064fa5d (DATA)
// 005a91f3: LEA EAX,[ESP + 0x204]
//   XREF to: Stack[-0x190] (DATA)
// 005a91fa: PUSH EAX
// 005a91fb: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005a9200: ADD ESP,0x8
// 005a9203: TEST EAX,EAX
// 005a9205: JZ 0x005a8fc7
//   XREF to: 005a8fc7 (CONDITIONAL_JUMP)
// 005a920b: MOV EAX,ESP
// 005a920d: PUSH EAX
// 005a920e: CALL sound_sndmain.cpp_getSfxSample_FUN_005a4c80
//   XREF to: 005a4c80 (UNCONDITIONAL_CALL)
// 005a9213: ADD ESP,0x4
// 005a9216: JMP 0x005a9026
//   XREF to: 005a9026 (UNCONDITIONAL_JUMP)
// 005a921b: CMP EDI,dword ptr [EAX + 0x3f62980]
//   Label: LAB_005a921b
//   XREF to: 03f62b00 (READ)
// 005a9221: JNZ 0x005a8ffb
//   XREF to: 005a8ffb (CONDITIONAL_JUMP)
// 005a9227: MOV EDX,0x3f6282c
//   XREF to: 03f6282c (DATA)
// 005a922c: ADD EDX,EAX
// 005a922e: MOV dword ptr [ESP + 0x378],EDX
//   XREF to: Stack[-0x18] (WRITE)
//   XREF to: 03f629ac (DATA)
// 005a9235: JMP 0x005a900a
//   XREF to: 005a900a (UNCONDITIONAL_JUMP)
// 005a923a: LEA EAX,[ESP + 0x100]
//   Label: LAB_005a923a
//   XREF to: Stack[-0x290] (DATA)
// 005a9241: PUSH EAX
// 005a9242: PUSH 0x0
// 005a9244: PUSH 0x0
// 005a9246: PUSH 0x0
// 005a9248: PUSH ESI
// 005a9249: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 005a924e: ADD ESP,0x14
// 005a9251: PUSH 0x64fa62
//   XREF to: 0064fa62 (DATA)
// 005a9256: LEA EAX,[ESP + 0x104]
//   XREF to: Stack[-0x290] (DATA)
// 005a925d: PUSH EAX
// 005a925e: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005a9263: ADD ESP,0x8
// 005a9266: TEST EAX,EAX
// 005a9268: JNZ 0x005a93e0
//   XREF to: 005a93e0 (CONDITIONAL_JUMP)
// 005a926e: PUSH ESI
//   Label: LAB_005a926e
// 005a926f: PUSH 0x64fa6b
//   XREF to: 0064fa6b (DATA)
// 005a9274: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 005a9279: ADD ESP,0x8
// 005a927c: TEST EAX,EAX
// 005a927e: JLE 0x005a94fc
//   XREF to: 005a94fc (CONDITIONAL_JUMP)
// 005a9284: PUSH 0x3c5
// 005a9289: PUSH 0x64fa71
//   XREF to: 0064fa71 (DATA)
// 005a928e: PUSH 0x8630
// 005a9293: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005a9298: ADD ESP,0xc
// 005a929b: TEST EAX,EAX
// 005a929d: JZ 0x005a92a8
//   XREF to: 005a92a8 (CONDITIONAL_JUMP)
// 005a929f: PUSH EAX
// 005a92a0: CALL sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0
//   XREF to: 005344f0 (UNCONDITIONAL_CALL)
// 005a92a5: ADD ESP,0x4
// 005a92a8: MOV EDX,dword ptr [ESP + 0x37c]
//   Label: LAB_005a92a8
//   XREF to: Stack[-0x14] (READ)
// 005a92af: MOV dword ptr [EDX + 0x16c],EAX
// 005a92b5: TEST EAX,EAX
// 005a92b7: JNZ 0x005a92db
//   XREF to: 005a92db (CONDITIONAL_JUMP)
// 005a92b9: MOV EDI,0x64fa86
//   XREF to: 0064fa86 (DATA)
// 005a92be: MOV EAX,0x3c6
// 005a92c3: PUSH 0x64fa9b
//   XREF to: 0064fa9b (DATA)
// 005a92c8: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005a92ce: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005a92d3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a92d8: ADD ESP,0x4
// 005a92db: MOV EAX,dword ptr [ESP + 0x37c]
//   Label: LAB_005a92db
//   XREF to: Stack[-0x14] (READ)
// 005a92e2: PUSH ESI
// 005a92e3: MOV EDX,dword ptr [EAX + 0x16c]
// 005a92e9: PUSH EDX
// 005a92ea: CALL sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550
//   XREF to: 00534550 (UNCONDITIONAL_CALL)
// 005a92ef: ADD ESP,0x8
// 005a92f2: MOV EDI,dword ptr [ESP + 0x37c]
//   XREF to: Stack[-0x14] (READ)
// 005a92f9: PUSH EDI
// 005a92fa: MOV AL,byte ptr [ESI]
//   Label: LAB_005a92fa
//   XREF to: Stack[-0x390] (DATA)
// 005a92fc: MOV byte ptr [EDI],AL
// 005a92fe: CMP AL,0x0
// 005a9300: JZ 0x005a9312
//   XREF to: 005a9312 (CONDITIONAL_JUMP)
// 005a9302: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x38f] (READ)
// 005a9305: ADD ESI,0x2
// 005a9308: MOV byte ptr [EDI + 0x1],AL
// 005a930b: ADD EDI,0x2
// 005a930e: CMP AL,0x0
// 005a9310: JNZ 0x005a92fa
//   XREF to: 005a92fa (CONDITIONAL_JUMP)
// 005a9312: POP EDI
//   Label: LAB_005a9312
// 005a9313: MOV dword ptr [EDI + 0x100],0x1
// 005a931d: MOV EAX,dword ptr [EDI + 0x16c]
// 005a9323: MOV dword ptr [EDI + 0x104],0x10
// 005a932d: MOV EAX,dword ptr [EAX + 0x104]
// 005a9333: MOV dword ptr [EDI + 0x108],EAX
// 005a9339: MOV EAX,dword ptr [EDI + 0x16c]
// 005a933f: MOV EAX,dword ptr [EAX + 0x100]
// 005a9345: MOV dword ptr [EDI + 0x110],0xffffffff
// 005a934f: PUSH EDI
// 005a9350: MOV dword ptr [EDI + 0x10c],EAX
// 005a9356: CALL sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0
//   XREF to: 005a45c0 (UNCONDITIONAL_CALL)
// 005a935b: MOV dword ptr [EDI + 0x150],0x0
// 005a9365: MOV dword ptr [EDI + 0x154],0x0
// 005a936f: FILD dword ptr [EDI + 0x10c]
// 005a9375: MOV dword ptr [EDI + 0x158],0x0
// 005a937f: FMUL float ptr [0x00663164]
//   XREF to: 00663164 (READ)
// 005a9385: MOV dword ptr [EDI + 0x164],0x0
// 005a938f: ADD ESP,0x4
// 005a9392: MOV dword ptr [EDI + 0x168],0x0
// 005a939c: MOV EAX,dword ptr [ESP + 0x370]
//   XREF to: Stack[-0x20] (READ)
// 005a93a3: PUSH EDI
// 005a93a4: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a93a9: FISTP dword ptr [EDI + 0x160]
// 005a93af: MOV dword ptr [EDI + 0x15c],EAX
// 005a93b5: CALL sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170
//   XREF to: 005a6170 (UNCONDITIONAL_CALL)
// 005a93ba: ADD ESP,0x4
// 005a93bd: TEST EAX,EAX
// 005a93bf: JZ 0x005a94fc
//   XREF to: 005a94fc (CONDITIONAL_JUMP)
// 005a93c5: PUSH 0x0
//   Label: LAB_005a93c5
// 005a93c7: PUSH 0x0
// 005a93c9: MOV EDI,dword ptr [ESP + 0x384]
//   XREF to: Stack[-0x14] (READ)
// 005a93d0: PUSH EDI
// 005a93d1: CALL sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0
//   XREF to: 005a65a0 (UNCONDITIONAL_CALL)
// 005a93d6: ADD ESP,0xc
// 005a93d9: MOV EAX,EDI
// 005a93db: JMP 0x005a9026
//   XREF to: 005a9026 (UNCONDITIONAL_JUMP)
// 005a93e0: PUSH 0x64fa66
//   Label: LAB_005a93e0
//   XREF to: 0064fa66 (DATA)
// 005a93e5: LEA EAX,[ESP + 0x104]
//   XREF to: Stack[-0x290] (DATA)
// 005a93ec: PUSH EAX
// 005a93ed: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005a93f2: ADD ESP,0x8
// 005a93f5: TEST EAX,EAX
// 005a93f7: JZ 0x005a926e
//   XREF to: 005a926e (CONDITIONAL_JUMP)
// 005a93fd: PUSH 0x64faaa
//   XREF to: 0064faaa (DATA)
// 005a9402: PUSH ESI
// 005a9403: PUSH 0x64faad
//   XREF to: 0064faad (DATA)
// 005a9408: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 005a940d: ADD ESP,0xc
// 005a9410: MOV EDX,dword ptr [ESP + 0x378]
//   XREF to: Stack[-0x18] (READ)
// 005a9417: MOV dword ptr [EDX + 0x174],EAX
// 005a941d: TEST EAX,EAX
// 005a941f: JZ 0x005a94fc
//   XREF to: 005a94fc (CONDITIONAL_JUMP)
// 005a9425: MOV EDI,EDX
// 005a9427: PUSH EDI
// 005a9428: MOV AL,byte ptr [ESI]
//   Label: LAB_005a9428
//   XREF to: Stack[-0x390] (DATA)
// 005a942a: MOV byte ptr [EDI],AL
// 005a942c: CMP AL,0x0
// 005a942e: JZ 0x005a9440
//   XREF to: 005a9440 (CONDITIONAL_JUMP)
// 005a9430: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x38f] (READ)
// 005a9433: ADD ESI,0x2
// 005a9436: MOV byte ptr [EDI + 0x1],AL
// 005a9439: ADD EDI,0x2
// 005a943c: CMP AL,0x0
// 005a943e: JNZ 0x005a9428
//   XREF to: 005a9428 (CONDITIONAL_JUMP)
// 005a9440: POP EDI
//   Label: LAB_005a9440
// 005a9441: MOV ECX,dword ptr [EDX + 0x174]
// 005a9447: PUSH ECX
// 005a9448: CALL crt_stdio.c_ftell_FUN_00601560
//   XREF to: 00601560 (UNCONDITIONAL_CALL)
// 005a944d: ADD ESP,0x4
// 005a9450: MOV EDX,EDI
// 005a9452: PUSH EDI
// 005a9453: MOV dword ptr [EDX + 0x170],EAX
// 005a9459: LEA EAX,[EDI + 0x170]
// 005a945f: PUSH EAX
// 005a9460: MOV EDI,dword ptr [EDI + 0x174]
// 005a9466: PUSH EDI
// 005a9467: CALL sound_sndmain.cpp_parseWavFile_FUN_005a3fe0
//   XREF to: 005a3fe0 (UNCONDITIONAL_CALL)
// 005a946c: ADD ESP,0xc
// 005a946f: TEST EAX,EAX
// 005a9471: JZ 0x005a94fc
//   XREF to: 005a94fc (CONDITIONAL_JUMP)
// 005a9477: MOV EAX,dword ptr [ESP + 0x378]
//   XREF to: Stack[-0x18] (READ)
// 005a947e: PUSH EAX
// 005a947f: CALL sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0
//   XREF to: 005a45c0 (UNCONDITIONAL_CALL)
// 005a9484: ADD ESP,0x4
// 005a9487: MOV EAX,dword ptr [ESP + 0x378]
//   XREF to: Stack[-0x18] (READ)
// 005a948e: FILD dword ptr [EAX + 0x10c]
// 005a9494: MOV dword ptr [EAX + 0x150],0x0
// 005a949e: FMUL float ptr [0x00663164]
//   XREF to: 00663164 (READ)
// 005a94a4: MOV dword ptr [EAX + 0x154],0x0
// 005a94ae: MOV EDX,dword ptr [ESP + 0x378]
//   XREF to: Stack[-0x18] (READ)
// 005a94b5: MOV dword ptr [EAX + 0x158],0x0
// 005a94bf: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a94c4: FISTP dword ptr [EAX + 0x160]
// 005a94ca: MOV dword ptr [EDX + 0x164],0x0
// 005a94d4: MOV EAX,dword ptr [ESP + 0x370]
//   XREF to: Stack[-0x20] (READ)
// 005a94db: MOV dword ptr [EDX + 0x168],0x0
// 005a94e5: PUSH EDX
// 005a94e6: MOV dword ptr [EDX + 0x15c],EAX
// 005a94ec: CALL sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170
//   XREF to: 005a6170 (UNCONDITIONAL_CALL)
// 005a94f1: ADD ESP,0x4
// 005a94f4: TEST EAX,EAX
// 005a94f6: JNZ 0x005a93c5
//   XREF to: 005a93c5 (CONDITIONAL_JUMP)
// 005a94fc: MOV EAX,dword ptr [ESP + 0x37c]
//   Label: LAB_005a94fc
//   XREF to: Stack[-0x14] (READ)
// 005a9503: PUSH EAX
// 005a9504: CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
//   XREF to: 005a62c0 (UNCONDITIONAL_CALL)
// 005a9509: ADD ESP,0x4
// 005a950c: XOR EAX,EAX
// 005a950e: JMP 0x005a9026
//   XREF to: 005a9026 (UNCONDITIONAL_JUMP)
// 005a9513: MOV EAX,ESP
//   Label: LAB_005a9513
// 005a9515: PUSH EAX
// 005a9516: PUSH 0x65098e
//   XREF to: 0065098e (DATA)
// 005a951b: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005a9520: ADD ESP,0x8
// 005a9523: PUSH EBP
//   Label: LAB_005a9523
//   XREF to: 03f5dbcc (DATA)
// 005a9524: CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
//   XREF to: 005a7e60 (UNCONDITIONAL_CALL)
// 005a9529: ADD ESP,0x4
// 005a952c: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005a9531: XOR EAX,EAX
// 005a9533: MOV EBX,dword ptr [0x03f62828]
//   XREF to: 03f62828 (READ)
// 005a9539: ADD ESP,0x380
// 005a953f: POP EBP
// 005a9540: POP EDI
// 005a9541: POP ESI
// 005a9542: POP EBX
// 005a9543: RET
