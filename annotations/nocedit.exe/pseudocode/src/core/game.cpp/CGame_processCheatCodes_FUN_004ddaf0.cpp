// Name: core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0
// Address: 004ddaf0
// Address Range: [[004ddaf0, 004e0791]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0(CGame * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_process_FUN_004e3190 (004e3190) at 004e3567 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Enter_Movie_FPS_0062b161
//   TerminatedCString s_Enter_number_of_frames_t_0062b171
//   TerminatedCString s_Enter_image_width_0062b1bb
//   TerminatedCString s_Enter_image_height_0062b1cd
//   TerminatedCString s_Press_CTRL_V_to_begin_re_0062b1e0
//   TerminatedCString s_cheat_1_wav_0062b9dd
//   TerminatedCString s_headOfHorror_0062b9e9
//   TerminatedCString s_The_horror_has_been_unle_0062b9f6
//   TerminatedCString s_cheat_1_wav_0062ba15
//   TerminatedCString s_Enter_cheat_code_0062ba21
//   char[54] DAT_0062ba32
//   TerminatedCString s_Buy_Fly_today_0062ba68
//   TerminatedCString s_buy_fly_today_wav_4_0_0062ba78
//   char[52] DAT_0062ba90
//   TerminatedCString s_FPS_3_2lf_0062bac4
//   char[53] DAT_0062bad0
//   char[51] DAT_0062bb05
//   TerminatedCString s_Event_debug_on_0062bb38
//   TerminatedCString s_Event_debug_off_0062bb47
//   TerminatedCString s_cheat_1_wav_0062bb57
//   char[52] DAT_0062bb63
//   TerminatedCString s_Script_debug_on_0062bb97
//   TerminatedCString s_Script_debug_off_0062bba7
//   TerminatedCString s_cheat_1_wav_0062bbb8
//   char[52] DAT_0062bbc4
//   TerminatedCString s_Memory_debugging_on_0062bbf8
//   TerminatedCString s_Memory_debugging_off_0062bc0c
//   TerminatedCString s_cheat_1_wav_0062bc21
//   char[52] DAT_0062bc2d
//   TerminatedCString s_Manual_aim_enabled_0062bc61
//   TerminatedCString s_cheat_1_wav_0062bc74
//   char[50] DAT_0062bc80
//   TerminatedCString s_Auto_aim_enabled_0062bcb2
//   TerminatedCString s_cheat_1_wav_0062bcc3
//   char[51] DAT_0062bccf
//   char[55] DAT_0062bd02
//   char[57] DAT_0062bd39
//   TerminatedCString s_Skeleton_key_0062bd72
//   TerminatedCString s_CKeyActor_0062bd7f
//   TerminatedCString s_Skeleton_key_0062bd89
//   undefined4 s_keleton_key_0062bd8a
//   undefined4 s_eleton_key_0062bd8b
//   undefined4 s_leton_key_0062bd8c
//   TerminatedCString s_cheat_1_wav_0062bd96
//   TerminatedCString s_You_have_the_skeleton_ke_0062bda2
//   char[54] DAT_0062bdbc
//   TerminatedCString s_God_mode_enabled_0062bdf2
//   TerminatedCString s_God_mode_disabled_0062be03
//   TerminatedCString s_cheat_1_wav_0062be15
//   char[53] DAT_0062be21
//   TerminatedCString s_Enemies_frozen_0062be56
//   TerminatedCString s_Enemies_thawed_0062be65
//   TerminatedCString s_cheat_1_wav_0062be74
//   TerminatedCString s_You_have_the_shotgun_0062be80
//   TerminatedCString s_CShotgun_0062be95
//   char[53] DAT_0062be9e
//   TerminatedCString s_You_have_the_crossbow_0062bed3
//   TerminatedCString s_CCrossbow_0062bee9
//   char[54] DAT_0062bef3
//   TerminatedCString s_DY_NO_MITE_0062bf29
//   TerminatedCString s_CDynamite_0062bf34
//   char[52] DAT_0062bf3e
//   TerminatedCString s_Fire_Fire_Fire_0062bf72
//   TerminatedCString s_CFlameThrower_0062bf84
//   char[54] DAT_0062bf92
//   TerminatedCString s_You_have_the_tommy_gun_0062bfc8
//   TerminatedCString s_CTommyGun_0062bfdf
//   char[56] DAT_0062bfe9
//   TerminatedCString s_You_can_now_summon_the_b_0062c021
//   TerminatedCString s_CBaronWeapon_0062c03e
//   char[54] DAT_0062c04b
//   TerminatedCString s_You_have_the_elephant_gu_0062c081
//   TerminatedCString s_CElephantGun_0062c09b
//   char[52] DAT_0062c0a8
//   TerminatedCString s_You_have_the_charged_rad_0062c0dc
//   TerminatedCString s_CLightGun_0062c102
//   char[53] DAT_0062c10c
//   char[54] DAT_0062c141
//   TerminatedCString s_CGun_0062c177
//   TerminatedCString s_CGun_0062c17c
//   TerminatedCString s_CGun_0062c181
//   TerminatedCString s_CShotgun_0062c186
//   TerminatedCString s_CCrossbow_0062c18f
//   TerminatedCString s_CCrossbow_0062c199
//   TerminatedCString s_CDynamite_0062c1a3
//   TerminatedCString s_CFlameThrower_0062c1ad
//   TerminatedCString s_CTommyGun_0062c1bb
//   TerminatedCString s_CElephantGun_0062c1c5
//   TerminatedCString s_CLightGun_0062c1d2
//   TerminatedCString s_You_ve_got_all_the_weapo_0062c1dc
//   TerminatedCString s_cheat_1_wav_0062c1f7
//   char[54] DAT_0062c203
//   TerminatedCString s_You_just_got_100_more_bu_0062c239
//   TerminatedCString s_cheat_1_wav_0062c257
//   char[51] DAT_0062c263
//   TerminatedCString s_cheat_1_wav_0062c296
//   char[53] DAT_0062c2b1
//   TerminatedCString s_cheat_1_wav_0062c2e6
//   char[54] DAT_0062c2f2
//   TerminatedCString s_Gratuitous_dismemberment_0062c328
//   TerminatedCString s_Gratuitous_dismemberment_0062c349
//   TerminatedCString s_cheat_1_wav_0062c36b
//   char[50] DAT_0062c377
//   TerminatedCString s_cheat_1_wav_0062c3a9
//   TerminatedCString s_Enter_time_factor_0062c3b5
//   char[51] DAT_0062c3c7
//   TerminatedCString s_cheat_1_wav_0062c3fa
//   char[51] DAT_0062c406
//   TerminatedCString s_cheat_1_wav_0062c439
//   char[58] DAT_0062c445
//   TerminatedCString s_Flaming_ammo_disabled_0062c47f
//   TerminatedCString s_CCrossbow_0062c495
//   TerminatedCString s_You_can_only_use_flaming_0062c49f
//   TerminatedCString s_Flaming_ammo_enabled_0062c4ce
//   TerminatedCString s_cheat_1_wav_0062c4e4
//   char[51] DAT_0062c4f0
//   TerminatedCString s_cheat_1_wav_0062c523
//   char[50] DAT_0062c52f
//   char[50] DAT_0062c561
//   TerminatedCString s_Single_step_enabled_0062c593
//   TerminatedCString s_Single_step_disabled_0062c5a7
//   char[54] DAT_0062c5bc
//   TerminatedCString s_Flashlight_battery_resto_0062c5f2
//   TerminatedCString s_cheat_1_wav_0062c60e
//   char[58] DAT_0062c61a
//   char[55] DAT_0062c654
//   char[53] DAT_0062c68b
//   TerminatedCString s_burp2_wav_0062c6c0
//   TerminatedCString s_burp1_wav_0062c6ca
//   TerminatedCString s_Bip01_head_0062c6d4
//   TerminatedCString s_bipltit02_0062c6df
//   TerminatedCString s_biprtit02_0062c6e9
//   TerminatedCString s_big_hat_kfm_0062c6f3
//   TerminatedCString s_stranger_hat_kfm_0062c6ff
//   char[52] DAT_0062c710
//   char[53] DAT_0062c744
//   TerminatedCString s_core_game_cpp_0062c779
//   TerminatedCString s_You_ve_got_a_gasmask_0062c78a
//   char[52] DAT_0062c7a0
//   TerminatedCString s_Health_restored_0062c7d4
//   char[52] DAT_0062c7e5
//   TerminatedCString s_oldhat_kfm_0062c819
//   TerminatedCString s_cheat_1_wav_0062c824
//   char[52] DAT_0062c830
//   TerminatedCString s_CGun_0062c864
//   char[50] DAT_0062c869
//   TerminatedCString s_CGun_0062c89b
//   char[53] DAT_0062c8a0
//   TerminatedCString s_CGun_0062c8d5
//   char[59] DAT_0062c8da
//   double DOUBLE_0062c915 = 0.0555555555555556
//   double DOUBLE_0062c91d = 0.0000152587890625
//   double DOUBLE_0062c925 = 50
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowHeight = 0xc8
//   CEventList* g_CEventListPtr = 02d05310
//   undefined4 DAT_0067b5f0
//   CGame* g_CGamePtr = 02d81a9c
//   float g_MovieRecordingTargetFPS = 30
//   undefined4 DAT_0067b664
//   undefined4 DAT_0067b668
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CSound* g_CSoundPtr = 03f6af64
//   CWeather* g_CWeatherPtr = 03f95dc0
//   undefined4 g_ColorMagenta
//   CEditorTools g_CEditorToolsPtr
//   CEventList g_CEventListInstance
//   CGame g_CGameInstance
//   undefined4 DAT_02d81cb0
//   int g_CheatSystemEnabled
//   int g_CheatFlags
//   int g_DebugRecording
//   undefined4 g_DebugRecordingParams
//   undefined4 DAT_02d831bc
//   undefined4 DAT_02d831c0
//   undefined1 DAT_02d831d6
//   char[20] g_InputHistory
//   undefined4 CHAR_ARRAY_02d831d8
//   undefined4 DAT_02d831e9
//   undefined4 DAT_02d831ea
//   undefined1 DAT_02d831eb
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   void* g_CKeysPtr
//   CDemonMission g_CDemonMissionInstance
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_032613c8
//   undefined4 g_CDemonSetInstance.damage_listener_count
//   undefined4 g_CDemonSetInstance.damage_listeners
//   undefined4 DAT_03263318
//   undefined4 g_CDemonSetInstance.field19_0x14f0a0[7996]
//   undefined4 DAT_03265258
//   undefined4 DAT_0326525c
//   CDemonCamera g_CDemonCameraInstance
//   CSound g_CSoundInstance
//   undefined4 g_CStrangerClassInfo.name_hash
//   CWeather g_CWeatherInstance
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_createActorByName_FUN_0040c430
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00453c90
//   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   core_event.cpp_CEventList_FUN_004aabe0
//   core_event.cpp_CEventList_FUN_004add40
//   core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   core_game.cpp_CGame_FUN_004dda80
//   core_game.cpp_FUN_004dd930
//   core_game.cpp_giveHeroWeapon_FUN_004dd870
//   core_gasmask.cpp_CGasMask_ctor_FUN_004e5d00
//   core_inv.cpp_CInventory_addItem_FUN_004fd600
//   core_inv.cpp_CInventory_findItemByName_FUN_004fe9d0
//   core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   core_set.cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   core_sound.cpp_CSound_playSound_FUN_005b3a20
//   core_weather.cpp_CWeather_FUN_005ef8c0
//   crt_ctype.c_toupper_FUN_005ff9e0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
//   shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_004a0400
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   support_newmsg.cpp_decryptMessage_FUN_00544270
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   wincore_winrun.cpp_enqueueInput_FUN_005f2f30
//   wincore_winrun.cpp_getTime_FUN_005f2dc0
//   wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_processCheatCodes_FUN_004ddaf0(CGame *this_ptr)

{
  int *piVar1;
  float *pfVar2;
  byte bVar3;
  char cVar4;
  CWeapon *pCVar5;
  CHero *pCVar6;
  double dVar7;
  CSound *this_ptr_00;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  char *pcVar12;
  undefined3 extraout_var;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  CDemonActor *pCVar16;
  CDemonActor *this_ptr_01;
  CSkeleton *pCVar17;
  CGasMask *this_ptr_02;
  int iVar18;
  int iVar19;
  BADSPACEBASE *in_ESP;
  CSkeleton *pCVar20;
  byte *pbVar21;
  byte bVar22;
  float fVar23;
  byte abStack_358 [100];
  SDamageInfo SStack_2f4;
  float fStack_2b8;
  float local_2b4;
  float fStack_2b0;
  undefined8 local_2ac;
  int local_2a4;
  int local_2a0;
  int local_29c;
  int local_298;
  int local_294;
  int local_290;
  int local_28c;
  int local_288;
  int local_284;
  int local_280;
  int local_27c;
  int local_278;
  int local_274;
  int local_270;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  int local_254;
  int iStack_250;
  int iStack_24c;
  int iStack_248;
  int iStack_244;
  int iStack_240;
  char *pcStack_23c;
  char *pcStack_238;
  int iStack_234;
  int iStack_230;
  char *pcStack_22c;
  char *pcStack_228;
  int iStack_224;
  int iStack_220;
  char *pcStack_21c;
  char *pcStack_218;
  int iStack_214;
  int iStack_210;
  char *pcStack_20c;
  char *pcStack_208;
  int iStack_204;
  int iStack_200;
  char *pcStack_1fc;
  char *pcStack_1f8;
  int iStack_1f4;
  int iStack_1f0;
  char *pcStack_1ec;
  char *pcStack_1e8;
  int iStack_1e4;
  int iStack_1e0;
  char *pcStack_1dc;
  char *pcStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  char *pcStack_1cc;
  char *pcStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int local_194;
  int iStack_190;
  float *pfStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  float fStack_13c;
  CDeformableModelInstance *pCStack_138;
  CSkeleton *pCStack_134;
  CDeformableModelInstance *pCStack_130;
  float fStack_12c;
  int iStack_128;
  CDeformableModelInstance *pCStack_124;
  float fStack_120;
  int iStack_11c;
  CDeformableModelInstance *pCStack_118;
  float fStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int local_18;
  int iStack_14;
  
  bVar22 = 0;
  if (g_CheatSystemEnabled == 0) {
    iVar11 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                       (g_CEventListPtr,"headOfHorror");
    if ((iVar11 != 0) && (g_CGamePtr->head_of_horror_cheat != 0x29a)) {
      fVar23 = 5.0;
      g_CGamePtr->head_of_horror_cheat = 0x29a;
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("The horror has been unleashed.");
      core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,fVar23);
      core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav");
    }
    if ((this_ptr->subtitle_system_enabled == 0) &&
       (iVar11 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x44), iVar11 != 0)) {
      iVar18 = 0;
      iVar11 = 100;
      pbVar21 = abStack_358;
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Enter cheat code");
      iVar11 = shape_edittool_cpp_CEditorTools_showCheatInputDialog_FUN_004a0400
                         (g_CEditorToolsPtr,pcVar12,(char *)pbVar21,iVar11,iVar18);
      if (iVar11 != 0) {
        iVar11 = 0;
        while (abStack_358[0] != 0) {
          wincore_winrun_cpp_enqueueInput_FUN_005f2f30((uint)abStack_358[iVar11]);
          iVar18 = iVar11 + 1;
          iVar11 = iVar11 + 1;
          abStack_358[0] = abStack_358[iVar18];
        }
      }
    }
    pfStack_18c = &this_ptr->time_scale_factor;
    while( true ) {
      bVar10 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
      if (CONCAT31(extraout_var,bVar10) == 0) break;
      uVar13 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
      iVar11 = (uVar13 & 0xff) << 8;
      iVar18 = 0x13;
      do {
        iVar14 = iVar11;
        iVar19 = iVar18 + -1;
        g_InputHistory[iVar18 + 1] = g_InputHistory[iVar18];
        iVar11 = CONCAT31((int3)((uint)iVar14 >> 8),g_InputHistory[iVar18]);
        iVar18 = iVar19;
      } while (0 < iVar19);
      g_InputHistory[1] = (char)((uint)iVar14 >> 8);
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062ba32);
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      local_29c = 0;
      local_2a0 = iVar11;
      if (0 < iVar11) {
        local_cc = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            local_29c = local_29c + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (local_cc < iVar11);
      }
      if (local_29c == local_2a0) {
        fVar23 = 5.0;
        g_InputHistory[1] = '\0';
        pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Buy Fly! today!");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,fVar23);
        uVar13 = (uint)(this_ptr->velocity_debug_enabled == 0);
        this_ptr->velocity_debug_enabled = uVar13;
        if (uVar13 != 0) {
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"buy-fly-today.wav @ 4.0");
        }
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062ba90);
      local_294 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      local_298 = iVar11;
      if (0 < iVar11) {
        local_2a4 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            local_294 = local_294 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (local_2a4 < iVar11);
      }
      if (local_294 == local_298) {
        g_InputHistory[1] = '\0';
        if (this_ptr->field67_0x208 == 0) {
          iVar11 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
          this_ptr->field67_0x208 = 1;
          this_ptr->timing_related_flag = iVar11;
          this_ptr->frame_counter = 0;
        }
        else {
          iVar11 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
          dVar7 = (double)(iVar11 - this_ptr->timing_related_flag) * DOUBLE_0062c915;
          this_ptr->field67_0x208 = 0;
          dVar7 = (double)this_ptr->frame_counter / (dVar7 * DOUBLE_0062c91d);
          local_2ac._4_4_ = (undefined4)((ulonglong)dVar7 >> 0x20);
          uVar8 = local_2ac._4_4_;
          local_2ac._0_4_ = SUB84(dVar7,0);
          uVar9 = (undefined4)local_2ac;
          local_2ac = dVar7;
          crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffba8,"FPS: %3.2lf",uVar9,uVar8);
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,&stack0xfffffba8,5.0);
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062bad0);
        local_28c = 0;
        uVar13 = 0xffffffff;
        pbVar21 = pbVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          bVar3 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar3 != 0);
        iVar11 = ~uVar13 - 1;
        local_290 = iVar11;
        if (0 < iVar11) {
          local_c8 = 0;
          do {
            bVar3 = g_InputHistory[iVar11];
            uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
            if (bVar3 == uVar13) {
              local_28c = local_28c + 1;
            }
            iVar11 = iVar11 + -1;
            pbVar15 = pbVar15 + 1;
          } while (local_c8 < iVar11);
        }
        if (local_28c == local_290) {
          g_InputHistory[1] = '\0';
          iVar11 = this_ptr->profile_mode + 1;
          this_ptr->profile_mode = iVar11;
          if (2 < iVar11) {
            this_ptr->profile_mode = 0;
          }
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062bb05);
        local_284 = 0;
        uVar13 = 0xffffffff;
        pbVar21 = pbVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          bVar3 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar3 != 0);
        iVar11 = ~uVar13 - 1;
        local_288 = iVar11;
        if (0 < iVar11) {
          local_c4 = 0;
          do {
            bVar3 = g_InputHistory[iVar11];
            uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
            if (bVar3 == uVar13) {
              local_284 = local_284 + 1;
            }
            iVar11 = iVar11 + -1;
            pbVar15 = pbVar15 + 1;
          } while (local_c4 < iVar11);
        }
        if (local_284 == local_288) {
          g_InputHistory[1] = '\0';
          uVar13 = (uint)(this_ptr->event_processing_enabled == 0);
          this_ptr->event_processing_enabled = uVar13;
          if (uVar13 == 0) {
            pcVar12 = "Event debug off";
          }
          else {
            pcVar12 = "Event debug on";
          }
          fVar23 = 5.0;
          pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar12);
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,fVar23);
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062bb63);
        uVar13 = 0xffffffff;
        pbVar21 = pbVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          bVar3 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar3 != 0);
        iVar11 = ~uVar13 - 1;
        local_27c = 0;
        local_280 = iVar11;
        if (0 < iVar11) {
          local_c0 = 0;
          do {
            bVar3 = g_InputHistory[iVar11];
            uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
            if (bVar3 == uVar13) {
              local_27c = local_27c + 1;
            }
            iVar11 = iVar11 + -1;
            pbVar15 = pbVar15 + 1;
          } while (local_c0 < iVar11);
        }
        if (local_27c == local_280) {
          g_InputHistory[1] = '\0';
          uVar13 = (uint)(this_ptr->subtitle_system_enabled == 0);
          this_ptr->subtitle_system_enabled = uVar13;
          if (uVar13 == 0) {
            fVar23 = 5.0;
            pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                                ("Script debug off");
            core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,fVar23);
            this_ptr->screen_clear_enabled = 0;
          }
          else {
            fVar23 = 5.0;
            pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Script debug on")
            ;
            core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,fVar23);
            this_ptr->screen_clear_enabled = 1;
          }
          core_set_cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0();
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062bbc4);
        local_274 = 0;
        uVar13 = 0xffffffff;
        pbVar21 = pbVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          bVar3 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar3 != 0);
        iVar11 = ~uVar13 - 1;
        local_278 = iVar11;
        if (0 < iVar11) {
          local_bc = 0;
          do {
            bVar3 = g_InputHistory[iVar11];
            uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
            if (bVar3 == uVar13) {
              local_274 = local_274 + 1;
            }
            iVar11 = iVar11 + -1;
            pbVar15 = pbVar15 + 1;
          } while (local_bc < iVar11);
        }
        if (local_274 == local_278) {
          g_InputHistory[1] = (byte)local_274 ^ (byte)local_278;
          uVar13 = (uint)(this_ptr->editor_tools_enabled == 0);
          this_ptr->editor_tools_enabled = uVar13;
          if (uVar13 == 0) {
            pcVar12 = "Memory debugging off";
          }
          else {
            pcVar12 = "Memory debugging on";
          }
          fVar23 = 5.0;
          pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar12);
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,fVar23);
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
        }
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062bc2d);
      local_26c = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      local_270 = iVar11;
      if (0 < iVar11) {
        local_b8 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            local_26c = local_26c + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (local_b8 < iVar11);
      }
      if (local_26c == local_270) {
        fVar23 = 5.0;
        g_InputHistory[1] = '\0';
        this_ptr->aim_mode = 2;
        pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Manual aim enabled");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,fVar23);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        *(int *)(g_HeroActors[g_LocalHeroIndex]->field3_0xbe2c + 0x13908) = this_ptr->aim_mode;
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062bc80);
      local_264 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      local_268 = iVar11;
      if (0 < iVar11) {
        local_b4 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            local_264 = local_264 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (local_b4 < iVar11);
      }
      if (local_264 == local_268) {
        fVar23 = 5.0;
        g_InputHistory[1] = '\0';
        this_ptr->aim_mode = 0;
        pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Auto aim enabled");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,fVar23);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        *(int *)(g_HeroActors[g_LocalHeroIndex]->field3_0xbe2c + 0x13908) = this_ptr->aim_mode;
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062bccf);
        local_25c = 0;
        uVar13 = 0xffffffff;
        pbVar21 = pbVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          bVar3 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar3 != 0);
        iVar11 = ~uVar13 - 1;
        local_260 = iVar11;
        if (0 < iVar11) {
          local_b0 = 0;
          do {
            bVar3 = g_InputHistory[iVar11];
            uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
            if (bVar3 == uVar13) {
              local_25c = local_25c + 1;
            }
            iVar11 = iVar11 + -1;
            pbVar15 = pbVar15 + 1;
          } while (local_b0 < iVar11);
        }
        if (local_25c == local_260) {
          g_InputHistory[1] = '\0';
          g_DebugRecording = 0;
          _DAT_02d831bc = 0;
          iVar11 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                             (g_CEditorToolsPtr,"Enter Movie FPS",
                              &g_MovieRecordingTargetFPS,true,0.25,240.0,true);
          if ((((iVar11 != 0) &&
               (bVar10 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                                   (g_CEditorToolsPtr,"Enter number of frames to record (or 0 to record until CTRL+V is pressed)",
                                    (int *)&g_DebugRecordingParams,true,0,99999,true),
               CONCAT31(extraout_var_00,bVar10) != 0)) &&
              (bVar10 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                                  (g_CEditorToolsPtr,"Enter image width",&DAT_0067b664,true
                                   ,1,9999,true), CONCAT31(extraout_var_01,bVar10) != 0)) &&
             (bVar10 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                                 (g_CEditorToolsPtr,"Enter image height",&DAT_0067b668,true
                                  ,1,9999,true), CONCAT31(extraout_var_02,bVar10) != 0)) {
            shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                      (g_CEditorToolsPtr,"Press CTRL+V to begin recording.");
            g_CheatFlags = 1;
          }
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062bd02);
        local_254 = 0;
        uVar13 = 0xffffffff;
        pbVar21 = pbVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          bVar3 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar3 != 0);
        iVar11 = ~uVar13 - 1;
        local_258 = iVar11;
        if (0 < iVar11) {
          iStack_ac = 0;
          do {
            bVar3 = g_InputHistory[iVar11];
            uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
            if (bVar3 == uVar13) {
              local_254 = local_254 + 1;
            }
            iVar11 = iVar11 + -1;
            pbVar15 = pbVar15 + 1;
          } while (iStack_ac < iVar11);
        }
        if (local_254 == local_258) {
          g_InputHistory[1] = '\0';
          this_ptr->field72_0x21c = (uint)(this_ptr->field72_0x21c == 0);
        }
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062bd39);
      iStack_24c = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_250 = iVar11;
      if (0 < iVar11) {
        iStack_a8 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_24c = iStack_24c + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_a8 < iVar11);
      }
      if (iStack_24c == iStack_250) {
        g_InputHistory[1] = '\0';
        pCVar16 = core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0
                            (&g_HeroActors[g_LocalHeroIndex]->inventory,"Skeleton_key");
        if (pCVar16 == (CDemonActor *)0x0) {
          this_ptr_01 = core_actor_cpp_createActorByName_FUN_0040c430("CKeyActor");
          pcVar12 = "Skeleton_key";
          (*this_ptr_01->vtable->setup)(this_ptr_01);
          this_ptr_01[2].location.position.y = -NAN;
          pCVar16 = this_ptr_01;
          do {
            cVar4 = *pcVar12;
            pCVar16->actor_name[0] = cVar4;
            if (cVar4 == '\0') break;
            cVar4 = pcVar12[1];
            pcVar12 = pcVar12 + 2;
            pCVar16->actor_name[1] = cVar4;
            pCVar16 = (CDemonActor *)(pCVar16->actor_name + 2);
          } while (cVar4 != '\0');
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
          core_inv_cpp_CInventory_addItem_FUN_004fd600
                    (&g_HeroActors[g_LocalHeroIndex]->inventory,this_ptr_01,1);
          fVar23 = 5.0;
          pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                              ("You have the skeleton key");
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,fVar23);
        }
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062bdbc);
      iStack_244 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_248 = iVar11;
      if (0 < iVar11) {
        iStack_a4 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_244 = iStack_244 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_a4 < iVar11);
      }
      if (iStack_244 == iStack_248) {
        g_InputHistory[1] = '\0';
        uVar13 = (uint)(this_ptr->field53_0x1d0 == 0);
        this_ptr->field53_0x1d0 = uVar13;
        if (uVar13 == 0) {
          fVar23 = 5.0;
          pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("God mode disabled")
          ;
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,fVar23);
        }
        else {
          fVar23 = 5.0;
          pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("God mode enabled");
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,fVar23);
          (g_HeroActors[g_LocalHeroIndex]->base_character).hit_points = 100.0;
        }
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062be21);
      iVar11 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar18 = ~uVar13 - 1;
      iStack_240 = iVar18;
      if (0 < iVar18) {
        iStack_a0 = 0;
        do {
          bVar3 = g_InputHistory[iVar18];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (uVar13 == bVar3) {
            iVar11 = iVar11 + 1;
          }
          iVar18 = iVar18 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_a0 < iVar18);
      }
      if (iVar11 == iStack_240) {
        g_InputHistory[1] = '\0';
        uVar13 = (uint)(this_ptr->field54_0x1d4 == 0);
        this_ptr->field54_0x1d4 = uVar13;
        if (uVar13 == 0) {
          pcVar12 = "Enemies thawed";
        }
        else {
          pcVar12 = "Enemies frozen";
        }
        fVar23 = 5.0;
        pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar12);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,fVar23);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("You have the shotgun");
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062be9e);
      pcStack_23c = "CShotgun";
      iStack_230 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      pcStack_238 = pcVar12;
      iStack_234 = iVar11;
      if (0 < iVar11) {
        iStack_9c = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_230 = iStack_230 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_9c < iVar11);
      }
      if (iStack_230 == iStack_234) {
        g_InputHistory[1] = (byte)iStack_230 ^ (byte)iStack_234;
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_23c);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_238,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("You have the crossbow")
      ;
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062bef3);
      pcStack_22c = "CCrossbow";
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_220 = 0;
      pcStack_228 = pcVar12;
      iStack_224 = iVar11;
      if (0 < iVar11) {
        iStack_98 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_220 = iStack_220 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_98 < iVar11);
      }
      if (iStack_220 == iStack_224) {
        g_InputHistory[1] = (byte)((uint)iStack_220 >> 8) ^ (byte)((uint)iStack_224 >> 8);
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_22c);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_228,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("DY-NO-MITE");
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062bf3e);
      iStack_210 = 0;
      pcStack_21c = "CDynamite";
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      pcStack_218 = pcVar12;
      iStack_214 = iVar11;
      if (0 < iVar11) {
        iStack_94 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_210 = iStack_210 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_94 < iVar11);
      }
      if (iStack_210 == iStack_214) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_21c);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_218,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Fire! Fire! Fire!");
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062bf92);
      pcStack_20c = "CFlameThrower";
      iStack_200 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      pcStack_208 = pcVar12;
      iStack_204 = iVar11;
      if (0 < iVar11) {
        iStack_90 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_200 = iStack_200 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_90 < iVar11);
      }
      if (iStack_200 == iStack_204) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_20c);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_208,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("You have the tommy gun");
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062bfe9);
      pcStack_1fc = "CTommyGun";
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_1f0 = 0;
      pcStack_1f8 = pcVar12;
      iStack_1f4 = iVar11;
      if (0 < iVar11) {
        iStack_8c = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_1f0 = iStack_1f0 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_8c < iVar11);
      }
      if (iStack_1f0 == iStack_1f4) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_1fc);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_1f8,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("You can now summon the baron");
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c04b);
      iStack_1e0 = 0;
      pcStack_1ec = "CBaronWeapon";
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      pcStack_1e8 = pcVar12;
      iStack_1e4 = iVar11;
      if (0 < iVar11) {
        iStack_88 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_1e0 = iStack_1e0 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_88 < iVar11);
      }
      if (iStack_1e0 == iStack_1e4) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_1ec);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_1e8,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("You have the elephant gun");
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c0a8);
      pcStack_1dc = "CElephantGun";
      iStack_1d0 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      pcStack_1d8 = pcVar12;
      iStack_1d4 = iVar11;
      if (0 < iVar11) {
        iStack_84 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_1d0 = iStack_1d0 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_84 < iVar11);
      }
      if (iStack_1d0 == iStack_1d4) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_1dc);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_1d8,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("You have the charged radiance emitter");
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c10c);
      pcStack_1cc = "CLightGun";
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_1c0 = 0;
      pcStack_1c8 = pcVar12;
      iStack_1c4 = iVar11;
      if (0 < iVar11) {
        iStack_80 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_1c0 = iStack_1c0 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_80 < iVar11);
      }
      if (iStack_1c0 == iStack_1c4) {
        g_InputHistory[1] = '\0';
        core_game_cpp_giveHeroWeapon_FUN_004dd870(pcStack_1cc);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcStack_1c8,5.0);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c141);
      iStack_1b8 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_1bc = iVar11;
      if (0 < iVar11) {
        iStack_7c = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_1b8 = iStack_1b8 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_7c < iVar11);
      }
      if (iStack_1b8 == iStack_1bc) {
        g_InputHistory[1] = (byte)iStack_1b8 ^ (byte)iStack_1bc;
        core_game_cpp_FUN_004dd930("CGun",3);
        core_game_cpp_FUN_004dd930("CGun",7);
        core_game_cpp_FUN_004dd930("CGun",8);
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CShotgun");
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CCrossbow");
        core_game_cpp_FUN_004dd930("CCrossbow",1);
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CDynamite");
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CFlameThrower");
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CTommyGun");
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CElephantGun");
        core_game_cpp_giveHeroWeapon_FUN_004dd870("CLightGun");
        fVar23 = 5.0;
        pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            ("You've got all the weapons");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,fVar23);
        iVar11 = g_LocalHeroIndex;
        this_ptr->field53_0x1d0 = 1;
        this_ptr_00 = g_CSoundPtr;
        (g_HeroActors[iVar11]->base_character).hit_points = 100.0;
        core_sound_cpp_CSound_playSound_FUN_005b3a20(this_ptr_00,(void *)0x0,"cheat-1.wav")
        ;
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c203);
      iStack_1b0 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_1b4 = iVar11;
      if (0 < iVar11) {
        iStack_78 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_1b0 = iStack_1b0 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_78 < iVar11);
      }
      if (iStack_1b0 == iStack_1b4) {
        g_InputHistory[1] = (byte)((uint)iStack_1b0 >> 8) ^ (byte)((uint)iStack_1b4 >> 8);
        pCVar5 = (g_HeroActors[g_LocalHeroIndex]->inventory).selected_weapon;
        if (pCVar5 != (CWeapon *)0x0) {
          piVar1 = &pCVar5->ammo_count;
          *piVar1 = *piVar1 + 100;
        }
        fVar23 = 5.0;
        pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            ("You just got 100 more bullets");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,fVar23);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062c263);
        iStack_1a8 = 0;
        uVar13 = 0xffffffff;
        pbVar21 = pbVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          bVar3 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar3 != 0);
        iVar11 = ~uVar13 - 1;
        iStack_1ac = iVar11;
        if (0 < iVar11) {
          iStack_74 = 0;
          do {
            bVar3 = g_InputHistory[iVar11];
            uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
            if (bVar3 == uVar13) {
              iStack_1a8 = iStack_1a8 + 1;
            }
            iVar11 = iVar11 + -1;
            pbVar15 = pbVar15 + 1;
          } while (iStack_74 < iVar11);
        }
        if (iStack_1a8 == iStack_1ac) {
          g_InputHistory[1] = '\0';
        }
        else {
          iVar11 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
          if ((iVar11 == 0) ||
             (iVar11 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x13), iVar11 == 0))
          goto LAB_004df408;
        }
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        while (iVar11 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                                  (g_CEditorToolsPtr,"Raise an event",&DAT_0067b5f0,100,1),
              iVar11 != 0) {
          pcVar12 = (char *)core_event_cpp_CEventList_FUN_004add40(g_CEventListPtr);
          if (pcVar12 == (char *)0x0) {
            core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
            break;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar12);
        }
      }
LAB_004df408:
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c2b1);
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_1a0 = 0;
      iStack_1a4 = iVar11;
      if (0 < iVar11) {
        iStack_70 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_1a0 = iStack_1a0 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_70 < iVar11);
      }
      if (iStack_1a0 == iStack_1a4) {
        g_InputHistory[1] = '\0';
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        iStack_6c = 0;
        for (iVar11 = 0; iVar11 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c);
            iVar11 = iVar11 + 1) {
          iVar18 = *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + iStack_6c + 8000);
          pCVar6 = g_HeroActors[g_LocalHeroIndex];
          fStack_2b8 = (pCVar6->base_character).base_actor.location.position.x -
                       *(float *)(iVar18 + 0x20);
          local_2b4 = (pCVar6->base_character).base_actor.location.position.y -
                      *(float *)(iVar18 + 0x24);
          fStack_2b0 = (pCVar6->base_character).base_actor.location.position.z -
                       *(float *)(iVar18 + 0x28);
          if (SQRT(fStack_2b0 * fStack_2b0 + fStack_2b8 * fStack_2b8 + local_2b4 * local_2b4) <=
              (float)DOUBLE_0062c925) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_2f4);
            SStack_2f4.damage_amount = 100.0;
            (**(code **)(*(int *)(iVar18 + 0x154) + 0x11c))();
          }
          iStack_6c = iStack_6c + 4;
        }
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c2f2);
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_198 = 0;
      iStack_19c = iVar11;
      if (0 < iVar11) {
        iStack_68 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_198 = iStack_198 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_68 < iVar11);
      }
      if (iStack_198 == iStack_19c) {
        g_InputHistory[1] = '\0';
        uVar13 = (uint)(this_ptr->field57_0x1e0 == 0);
        this_ptr->field57_0x1e0 = uVar13;
        if (uVar13 == 0) {
          pcVar12 = "Gratuitous dismemberment disabled";
        }
        else {
          pcVar12 = "Gratuitous dismemberment enabled";
        }
        fVar23 = 5.0;
        pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar12);
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,fVar23);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062c377);
        iStack_190 = 0;
        uVar13 = 0xffffffff;
        pbVar21 = pbVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          bVar3 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar3 != 0);
        iVar11 = ~uVar13 - 1;
        local_194 = iVar11;
        if (0 < iVar11) {
          iStack_64 = 0;
          do {
            bVar3 = g_InputHistory[iVar11];
            uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
            if (bVar3 == uVar13) {
              iStack_190 = iStack_190 + 1;
            }
            iVar11 = iVar11 + -1;
            pbVar15 = pbVar15 + 1;
          } while (iStack_64 < iVar11);
        }
        if (iStack_190 == local_194) {
          g_InputHistory[1] = '\0';
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
          shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                    (g_CEditorToolsPtr,"Enter time factor",pfStack_18c,true,0.01,4.0,true);
        }
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c3c7);
      iVar11 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar18 = ~uVar13 - 1;
      iStack_188 = iVar18;
      if (0 < iVar18) {
        iStack_60 = 0;
        do {
          bVar3 = g_InputHistory[iVar18];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (uVar13 == bVar3) {
            iVar11 = iVar11 + 1;
          }
          iVar18 = iVar18 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_60 < iVar18);
      }
      if (iVar11 == iStack_188) {
        g_InputHistory[1] = '\0';
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        this_ptr->scripted_sequence_active = (uint)(this_ptr->scripted_sequence_active == 0);
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c406);
      iStack_180 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_184 = iVar11;
      if (0 < iVar11) {
        iStack_5c = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_180 = iStack_180 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_5c < iVar11);
      }
      if (iStack_180 == iStack_184) {
        g_InputHistory[1] = '\0';
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
        this_ptr->field62_0x1f4 = (uint)(this_ptr->field62_0x1f4 == 0);
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c445);
      iStack_178 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_17c = iVar11;
      if (0 < iVar11) {
        iStack_58 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_178 = iStack_178 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_58 < iVar11);
      }
      if (iStack_178 == iStack_17c) {
        g_InputHistory[1] = (byte)iStack_178 ^ (byte)iStack_17c;
        pCVar5 = (g_HeroActors[g_LocalHeroIndex]->inventory).selected_weapon;
        if (pCVar5 != (CWeapon *)0x0) {
          if (*(int *)(pCVar5->field9_0x305 + 0x25b + 0xc) == 5) {
            fVar23 = 5.0;
            *(int *)(pCVar5->field9_0x305 + 0x25b + 0xc) = 0;
            pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                                ("Flaming ammo disabled");
          }
          else {
            iVar11 = core_actor_cpp_isOfClass_FUN_0040c6d0(&pCVar5->base_actor,"CCrossbow")
            ;
            if (iVar11 == 0) {
              fVar23 = 5.0;
              pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                                  ("You can only use flaming ammo on the crossbow.");
            }
            else {
              fVar23 = 5.0;
              *(int *)(pCVar5->field9_0x305 + 0x25b + 0xc) = 5;
              pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                                  ("Flaming ammo enabled.");
            }
          }
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,fVar23);
        }
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062c4f0);
        iStack_170 = 0;
        uVar13 = 0xffffffff;
        pbVar21 = pbVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          bVar3 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar3 != 0);
        iVar11 = ~uVar13 - 1;
        iStack_174 = iVar11;
        if (0 < iVar11) {
          iStack_54 = 0;
          do {
            bVar3 = g_InputHistory[iVar11];
            uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
            if (bVar3 == uVar13) {
              iStack_170 = iStack_170 + 1;
            }
            iVar11 = iVar11 + -1;
            pbVar15 = pbVar15 + 1;
          } while (iStack_54 < iVar11);
        }
        if (iStack_170 == iStack_174) {
          g_InputHistory[1] = (byte)((uint)iStack_170 >> 8) ^ (byte)((uint)iStack_174 >> 8);
          core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00453c90
                    (&g_CDemonCameraInstance,0xff00ff);
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062c52f);
        iStack_168 = 0;
        uVar13 = 0xffffffff;
        pbVar21 = pbVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          bVar3 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar3 != 0);
        iVar11 = ~uVar13 - 1;
        iStack_16c = iVar11;
        if (0 < iVar11) {
          iStack_50 = 0;
          do {
            bVar3 = g_InputHistory[iVar11];
            uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
            if (bVar3 == uVar13) {
              iStack_168 = iStack_168 + 1;
            }
            iVar11 = iVar11 + -1;
            pbVar15 = pbVar15 + 1;
          } while (iStack_50 < iVar11);
        }
        if (iStack_168 == iStack_16c) {
          g_InputHistory[1] = '\0';
          g_CDemonSetPtr->min_ambient_value = 0.0;
          core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(&g_CDemonCameraInstance,0.0)
          ;
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062c561);
        uVar13 = 0xffffffff;
        pbVar21 = pbVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          bVar3 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar3 != 0);
        iVar11 = ~uVar13 - 1;
        iStack_160 = 0;
        iStack_164 = iVar11;
        if (0 < iVar11) {
          iStack_4c = 0;
          do {
            bVar3 = g_InputHistory[iVar11];
            uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
            if (bVar3 == uVar13) {
              iStack_160 = iStack_160 + 1;
            }
            iVar11 = iVar11 + -1;
            pbVar15 = pbVar15 + 1;
          } while (iStack_4c < iVar11);
        }
        if (iStack_160 == iStack_164) {
          g_InputHistory[1] = '\0';
          uVar13 = (uint)(this_ptr->wait_for_keypress == 0);
          this_ptr->wait_for_keypress = uVar13;
          if (uVar13 == 0) {
            pcVar12 = "Single step disabled";
          }
          else {
            pcVar12 = "Single step enabled";
          }
          fVar23 = 5.0;
          pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar12);
          core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,fVar23);
        }
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c5bc);
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_158 = 0;
      iStack_15c = iVar11;
      if (0 < iVar11) {
        iStack_48 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_158 = iStack_158 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_48 < iVar11);
      }
      if (iStack_158 == iStack_15c) {
        fVar23 = 5.0;
        g_InputHistory[1] = '\0';
        (g_HeroActors[g_LocalHeroIndex]->inventory).battery_charge = 100.0;
        pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            ("Flashlight battery restored");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,fVar23);
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,"cheat-1.wav")
        ;
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c61a);
      iStack_150 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_154 = iVar11;
      if (0 < iVar11) {
        iStack_44 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_150 = iStack_150 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_44 < iVar11);
      }
      if (iStack_150 == iStack_154) {
        g_InputHistory[1] = '\0';
        core_weather_cpp_CWeather_FUN_005ef8c0();
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c654);
      iStack_148 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_14c = iVar11;
      if (0 < iVar11) {
        iStack_40 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_148 = iStack_148 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_40 < iVar11);
      }
      if (iStack_148 == iStack_14c) {
        g_InputHistory[1] = '\0';
        core_weather_cpp_CWeather_FUN_005ef8c0();
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c68b);
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_140 = 0;
      iStack_144 = iVar11;
      if (0 < iVar11) {
        iStack_3c = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_140 = iStack_140 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_3c < iVar11);
      }
      if (iStack_140 == iStack_144) {
        g_InputHistory[1] = '\0';
        uVar13 = (uint)(this_ptr->field66_0x204 == 0);
        fStack_13c = 0.25;
        this_ptr->field66_0x204 = uVar13;
        if (uVar13 == 0) {
          pcVar12 = "burp1.wav";
        }
        else {
          pcVar12 = "burp2.wav";
          fStack_13c = 4.0;
        }
        core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,pcVar12);
        iStack_38 = 0;
        for (iStack_14 = 0; iStack_14 < g_CDemonSetPtr->damage_listener_count;
            iStack_14 = iStack_14 + 1) {
          pCStack_138 = (CDeformableModelInstance *)
                        (*(int *)(g_CDemonSetPtr->field19_0x14f0a0 + iStack_38 + -4) + 0x158);
          if (*(char *)(*(int *)(g_CDemonSetPtr->field19_0x14f0a0 + iStack_38 + -4) + 0x23b8) !=
              '\0') {
            pCVar17 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                                (pCStack_138);
            pCStack_134 = pCVar17;
            iVar11 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                               (pCVar17,"Bip01 head");
            if (iVar11 != -1) {
              pCStack_130 = pCStack_138;
              fStack_12c = fStack_13c;
              pCStack_138->rest_pose_data[iVar11] = pCStack_138->rest_pose_data[iVar11] * fStack_13c
              ;
              iVar18 = 0;
              pCVar20 = pCVar17;
              iStack_128 = iVar11;
              if (0 < pCVar17->bone_count) {
                do {
                  if (iStack_128 == pCVar20->bone_list[0].parent_index) {
                    core_game_cpp_CGame_FUN_004dda80((CGame *)pCStack_130);
                  }
                  iVar18 = iVar18 + 1;
                  pCVar20 = (CSkeleton *)((pCVar20->motion_list).state_names[1] + 2);
                } while (iVar18 < pCVar17->bone_count);
              }
            }
            iVar11 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                               (pCStack_134,"bipltit02");
            pCVar17 = pCStack_134;
            if (iVar11 != -1) {
              pCStack_124 = pCStack_138;
              fStack_120 = fStack_13c;
              pCStack_138->rest_pose_data[iVar11] = pCStack_138->rest_pose_data[iVar11] * fStack_13c
              ;
              iVar18 = 0;
              pCVar20 = pCStack_134;
              iStack_11c = iVar11;
              if (0 < pCStack_134->bone_count) {
                do {
                  if (iStack_11c == pCVar20->bone_list[0].parent_index) {
                    core_game_cpp_CGame_FUN_004dda80((CGame *)pCStack_124);
                  }
                  iVar18 = iVar18 + 1;
                  pCVar20 = (CSkeleton *)((pCVar20->motion_list).state_names[1] + 2);
                } while (iVar18 < pCVar17->bone_count);
              }
            }
            iVar11 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                               (pCStack_134,"biprtit02");
            pCVar17 = pCStack_134;
            if (iVar11 != -1) {
              pCStack_118 = pCStack_138;
              fStack_114 = fStack_13c;
              pCStack_138->rest_pose_data[iVar11] = pCStack_138->rest_pose_data[iVar11] * fStack_13c
              ;
              iVar18 = 0;
              pCVar20 = pCStack_134;
              iStack_110 = iVar11;
              if (0 < pCStack_134->bone_count) {
                do {
                  if (iStack_110 == pCVar20->bone_list[0].parent_index) {
                    core_game_cpp_CGame_FUN_004dda80((CGame *)pCStack_118);
                  }
                  iVar18 = iVar18 + 1;
                  pCVar20 = (CSkeleton *)((pCVar20->motion_list).state_names[1] + 2);
                } while (iVar18 < pCVar17->bone_count);
              }
            }
          }
          iStack_38 = iStack_38 + 4;
        }
        pCVar16 = core_actor_cpp_castToClassHash_FUN_0040c790
                            ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],
                             g_CStrangerClassInfo.name_hash);
        if (pCVar16 != (CDemonActor *)0x0) {
          pfVar2 = &pCVar16[0x17a].field12_0xe0.z;
          if (this_ptr->field66_0x204 == 0) {
            pcVar12 = "stranger-hat.kfm";
          }
          else {
            pcVar12 = "big-hat.kfm";
          }
          core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
                    ((CKeyFramedModelInstance *)pfVar2,pcVar12);
          core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
                    ((CKeyFramedModelInstance *)pfVar2);
        }
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062c710);
        iStack_108 = 0;
        uVar13 = 0xffffffff;
        pbVar21 = pbVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          bVar3 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar3 != 0);
        iVar11 = ~uVar13 - 1;
        iStack_10c = iVar11;
        if (0 < iVar11) {
          iStack_34 = 0;
          do {
            bVar3 = g_InputHistory[iVar11];
            uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
            if (bVar3 == uVar13) {
              iStack_108 = iStack_108 + 1;
            }
            iVar11 = iVar11 + -1;
            pbVar15 = pbVar15 + 1;
          } while (iStack_34 < iVar11);
        }
        if (iStack_108 == iStack_10c) {
          g_InputHistory[1] = '\0';
          this_ptr->field71_0x218 = (uint)(this_ptr->field71_0x218 == 0);
        }
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c744);
      iStack_100 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_104 = iVar11;
      if (0 < iVar11) {
        iStack_30 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_100 = iStack_100 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_30 < iVar11);
      }
      if (iStack_100 == iStack_104) {
        g_InputHistory[1] = '\0';
        this_ptr_02 = (CGasMask *)
                      shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x2d8,"..\\core\\game.cpp",0xbb0)
        ;
        if (this_ptr_02 != (CGasMask *)0x0) {
          this_ptr_02 = core_gasmask_cpp_CGasMask_ctor_FUN_004e5d00(this_ptr_02);
        }
        core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(g_CDemonMissionPtr);
        (*((this_ptr_02->base_actor).vtable)->setup)(&this_ptr_02->base_actor);
        core_inv_cpp_CInventory_addItem_FUN_004fd600
                  (&g_HeroActors[g_LocalHeroIndex]->inventory,&this_ptr_02->base_actor,1);
        fVar23 = 5.0;
        pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                            ("You've got a gasmask!");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,fVar23);
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c7a0);
      iStack_f8 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_fc = iVar11;
      if (0 < iVar11) {
        iStack_2c = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_f8 = iStack_f8 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_2c < iVar11);
      }
      if (iStack_f8 == iStack_fc) {
        fVar23 = 5.0;
        g_InputHistory[1] = '\0';
        (g_HeroActors[g_LocalHeroIndex]->base_character).hit_points = 100.0;
        pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Health restored.");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(this_ptr,pcVar12,fVar23);
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c7e5);
      iStack_f0 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_f4 = iVar11;
      if (0 < iVar11) {
        iStack_28 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_f0 = iStack_f0 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_28 < iVar11);
      }
      if (iStack_f0 == iStack_f4) {
        g_InputHistory[1] = '\0';
        pCVar16 = core_actor_cpp_castToClassHash_FUN_0040c790
                            ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],
                             g_CStrangerClassInfo.name_hash);
        if (pCVar16 != (CDemonActor *)0x0) {
          pfVar2 = &pCVar16[0x17a].field12_0xe0.z;
          core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
                    ((CKeyFramedModelInstance *)pfVar2,"oldhat.kfm");
          core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
                    ((CKeyFramedModelInstance *)pfVar2);
          core_sound_cpp_CSound_playSound_FUN_005b3a20
                    (g_CSoundPtr,(void *)0x0,"cheat-1.wav");
        }
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c830);
      iStack_e8 = 0;
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_ec = iVar11;
      if (0 < iVar11) {
        iStack_24 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_e8 = iStack_e8 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_24 < iVar11);
      }
      if (iStack_e8 == iStack_ec) {
        g_InputHistory[1] = '\0';
        core_game_cpp_FUN_004dd930("CGun",3);
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c869);
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_e0 = 0;
      iStack_e4 = iVar11;
      if (0 < iVar11) {
        iStack_20 = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_e0 = iStack_e0 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_20 < iVar11);
      }
      if (iStack_e0 == iStack_e4) {
        g_InputHistory[1] = (byte)iStack_e0 ^ (byte)iStack_e4;
        core_game_cpp_FUN_004dd930("CGun",7);
      }
      pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                  ((SEncryptedMessage *)DAT_0062c8a0);
      uVar13 = 0xffffffff;
      pbVar21 = pbVar15;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        bVar3 = *pbVar21;
        pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
      } while (bVar3 != 0);
      iVar11 = ~uVar13 - 1;
      iStack_d8 = 0;
      iStack_dc = iVar11;
      if (0 < iVar11) {
        iStack_1c = 0;
        do {
          bVar3 = g_InputHistory[iVar11];
          uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
          if (bVar3 == uVar13) {
            iStack_d8 = iStack_d8 + 1;
          }
          iVar11 = iVar11 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iStack_1c < iVar11);
      }
      if (iStack_d8 == iStack_dc) {
        g_InputHistory[1] = (byte)((uint)iStack_d8 >> 8) ^ (byte)((uint)iStack_dc >> 8);
        core_game_cpp_FUN_004dd930("CGun",8);
      }
      if (this_ptr->velocity_debug_enabled != 0) {
        pbVar15 = (byte *)support_newmsg_cpp_decryptMessage_FUN_00544270
                                    ((SEncryptedMessage *)DAT_0062c8da);
        local_d0 = 0;
        uVar13 = 0xffffffff;
        pbVar21 = pbVar15;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          bVar3 = *pbVar21;
          pbVar21 = pbVar21 + (uint)bVar22 * -2 + 1;
        } while (bVar3 != 0);
        iVar11 = ~uVar13 - 1;
        local_d4 = iVar11;
        if (0 < iVar11) {
          local_18 = 0;
          do {
            bVar3 = g_InputHistory[iVar11];
            uVar13 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar15);
            if (bVar3 == uVar13) {
              local_d0 = local_d0 + 1;
            }
            iVar11 = iVar11 + -1;
            pbVar15 = pbVar15 + 1;
          } while (local_18 < iVar11);
        }
        if (local_d0 == local_d4) {
          g_InputHistory[1] = '\0';
          _DAT_02d831c0 = (uint)(_DAT_02d831c0 == 0);
        }
      }
    }
  }
  return;
}


// Assembly code:
// 004ddaf0: PUSH EBX
//   Label: core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0
// 004ddaf1: PUSH ESI
// 004ddaf2: PUSH EDI
// 004ddaf3: PUSH EBP
// 004ddaf4: MOV EBP,ESP
// 004ddaf6: SUB ESP,0x44c
// 004ddafc: AND ESP,0xfffffff8
// 004ddaff: CMP dword ptr [0x02d828d0],0x0
//   XREF to: 02d828d0 (READ)
// 004ddb06: JZ 0x004ddb0f
//   XREF to: 004ddb0f (CONDITIONAL_JUMP)
// 004ddb08: MOV ESP,EBP
//   Label: LAB_004ddb08
// 004ddb0a: POP EBP
// 004ddb0b: POP EDI
// 004ddb0c: POP ESI
// 004ddb0d: POP EBX
// 004ddb0e: RET
// 004ddb0f: PUSH 0x62b9e9
//   Label: LAB_004ddb0f
//   XREF to: 0062b9e9 (DATA)
// 004ddb14: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 004ddb1a: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 004ddb1b: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 004ddb20: ADD ESP,0x8
// 004ddb23: TEST EAX,EAX
// 004ddb25: JZ 0x004ddb77
//   XREF to: 004ddb77 (CONDITIONAL_JUMP)
// 004ddb27: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004ddb2c: CMP dword ptr [EAX + 0x214],0x29a
//   XREF to: 02d81cb0 (READ)
// 004ddb36: JZ 0x004ddb77
//   XREF to: 004ddb77 (CONDITIONAL_JUMP)
// 004ddb38: PUSH 0x40a00000
// 004ddb3d: PUSH 0x62b9f6
//   XREF to: 0062b9f6 (DATA)
// 004ddb42: MOV dword ptr [EAX + 0x214],0x29a
//   XREF to: 02d81cb0 (WRITE)
// 004ddb4c: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004ddb51: ADD ESP,0x4
// 004ddb54: PUSH EAX
// 004ddb55: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004ddb58: PUSH ESI
// 004ddb59: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004ddb5e: ADD ESP,0xc
// 004ddb61: PUSH 0x62ba15
//   XREF to: 0062ba15 (DATA)
// 004ddb66: PUSH 0x0
// 004ddb68: MOV EDI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 004ddb6e: PUSH EDI
//   XREF to: 03f6af64 (DATA)
// 004ddb6f: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004ddb74: ADD ESP,0xc
// 004ddb77: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004ddb77
//   XREF to: Stack[0x4] (READ)
// 004ddb7a: CMP dword ptr [EAX + 0x1dc],0x0
// 004ddb81: JZ 0x004df23f
//   XREF to: 004df23f (CONDITIONAL_JUMP)
// 004ddb87: LEA EAX,[EAX]
// 004ddb8d: LEA EDX,[EDX]
// 004ddb90: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004ddb90
//   XREF to: Stack[0x4] (READ)
// 004ddb93: ADD EAX,0x1ec
// 004ddb98: MOV dword ptr [ESP + 0x2cc],EAX
//   XREF to: Stack[-0x194] (WRITE)
// 004ddb9f: CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00
//   Label: LAB_004ddb9f
//   XREF to: 005f2f00 (UNCONDITIONAL_CALL)
// 004ddba4: TEST EAX,EAX
// 004ddba6: JZ 0x004ddb08
//   XREF to: 004ddb08 (CONDITIONAL_JUMP)
// 004ddbac: MOV EBX,dword ptr [0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 004ddbb2: PUSH EBX
//   XREF to: 02dcd7d4 (DATA)
// 004ddbb3: CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   XREF to: 00502470 (UNCONDITIONAL_CALL)
// 004ddbb8: MOV EBX,0x13
// 004ddbbd: ADD ESP,0x4
// 004ddbc0: MOV AH,AL
// 004ddbc2: DEC EBX
//   Label: LAB_004ddbc2
// 004ddbc3: MOV AL,byte ptr [EBX + 0x2d831d8]
//   XREF to: 02d831e9 (READ)
//   XREF to: 02d831ea (READ)
// 004ddbc9: MOV byte ptr [EBX + 0x2d831d9],AL
//   XREF to: 02d831ea (WRITE)
//   XREF to: 02d831eb (WRITE)
// 004ddbcf: TEST EBX,EBX
// 004ddbd1: JG 0x004ddbc2
//   XREF to: 004ddbc2 (CONDITIONAL_JUMP)
// 004ddbd3: PUSH 0x62ba32
//   XREF to: 0062ba32 (DATA)
// 004ddbd8: MOV byte ptr [0x02d831d8],AH
//   XREF to: 02d831d8 (WRITE)
// 004ddbde: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004ddbe3: XOR ESI,ESI
// 004ddbe5: ADD ESP,0x4
// 004ddbe8: MOV EDI,EAX
// 004ddbea: MOV EBX,EAX
// 004ddbec: SUB ECX,ECX
// 004ddbee: DEC ECX
// 004ddbef: XOR EAX,EAX
// 004ddbf1: SCASB.REPNE ES:EDI
// 004ddbf3: NOT ECX
// 004ddbf5: DEC ECX
// 004ddbf6: MOV dword ptr [ESP + 0x1bc],ESI
//   XREF to: Stack[-0x2a4] (WRITE)
// 004ddbfd: MOV dword ptr [ESP + 0x1b8],ECX
//   XREF to: Stack[-0x2a8] (WRITE)
// 004ddc04: TEST ECX,ECX
// 004ddc06: JLE 0x004ddc40
//   XREF to: 004ddc40 (CONDITIONAL_JUMP)
// 004ddc08: MOV EAX,ECX
// 004ddc0a: NEG EAX
// 004ddc0c: MOV EDI,ECX
// 004ddc0e: ADD ECX,EAX
// 004ddc10: MOV dword ptr [ESP + 0x38c],ECX
//   XREF to: Stack[-0xd4] (WRITE)
// 004ddc17: XOR EAX,EAX
//   Label: LAB_004ddc17
// 004ddc19: MOV AL,byte ptr [EBX]
// 004ddc1b: PUSH EAX
// 004ddc1c: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004ddc23: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004ddc28: ADD ESP,0x4
// 004ddc2b: CMP ESI,EAX
// 004ddc2d: JZ 0x004df2bc
//   XREF to: 004df2bc (CONDITIONAL_JUMP)
// 004ddc33: MOV EAX,dword ptr [ESP + 0x38c]
//   Label: LAB_004ddc33
//   XREF to: Stack[-0xd4] (READ)
// 004ddc3a: DEC EDI
// 004ddc3b: INC EBX
// 004ddc3c: CMP EDI,EAX
// 004ddc3e: JG 0x004ddc17
//   XREF to: 004ddc17 (CONDITIONAL_JUMP)
// 004ddc40: MOV EAX,dword ptr [ESP + 0x1bc]
//   Label: LAB_004ddc40
//   XREF to: Stack[-0x2a4] (READ)
// 004ddc47: CMP EAX,dword ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x2a8] (READ)
// 004ddc4e: JNZ 0x004ddcaa
//   XREF to: 004ddcaa (CONDITIONAL_JUMP)
// 004ddc50: PUSH 0x40a00000
// 004ddc55: XOR DH,DH
// 004ddc57: PUSH 0x62ba68
//   XREF to: 0062ba68 (DATA)
// 004ddc5c: MOV byte ptr [0x02d831d8],DH
//   XREF to: 02d831d8 (WRITE)
// 004ddc62: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004ddc67: ADD ESP,0x4
// 004ddc6a: PUSH EAX
// 004ddc6b: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004ddc6e: PUSH ECX
// 004ddc6f: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004ddc74: ADD ESP,0xc
// 004ddc77: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004ddc7a: CMP dword ptr [EAX + 0x210],0x0
// 004ddc81: SETZ AL
// 004ddc84: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004ddc87: AND EAX,0xff
// 004ddc8c: MOV dword ptr [EBX + 0x210],EAX
// 004ddc92: JZ 0x004ddcaa
//   XREF to: 004ddcaa (CONDITIONAL_JUMP)
// 004ddc94: PUSH 0x62ba78
//   XREF to: 0062ba78 (DATA)
// 004ddc99: PUSH 0x0
// 004ddc9b: MOV EDI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 004ddca1: PUSH EDI
//   XREF to: 03f6af64 (DATA)
// 004ddca2: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004ddca7: ADD ESP,0xc
// 004ddcaa: PUSH 0x62ba90
//   Label: LAB_004ddcaa
//   XREF to: 0062ba90 (DATA)
// 004ddcaf: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004ddcb4: MOV EBX,EAX
// 004ddcb6: ADD ESP,0x4
// 004ddcb9: XOR EAX,EAX
// 004ddcbb: MOV EDI,EBX
// 004ddcbd: MOV dword ptr [ESP + 0x1c4],EAX
//   XREF to: Stack[-0x29c] (WRITE)
// 004ddcc4: SUB ECX,ECX
// 004ddcc6: DEC ECX
// 004ddcc7: XOR EAX,EAX
// 004ddcc9: SCASB.REPNE ES:EDI
// 004ddccb: NOT ECX
// 004ddccd: DEC ECX
// 004ddcce: MOV dword ptr [ESP + 0x1c0],ECX
//   XREF to: Stack[-0x2a0] (WRITE)
// 004ddcd5: TEST ECX,ECX
// 004ddcd7: JLE 0x004ddd14
//   XREF to: 004ddd14 (CONDITIONAL_JUMP)
// 004ddcd9: MOV EAX,ECX
// 004ddcdb: NEG EAX
// 004ddcdd: MOV EDI,ECX
// 004ddcdf: ADD ECX,EAX
// 004ddce1: MOV dword ptr [ESP + 0x1b4],ECX
//   XREF to: Stack[-0x2ac] (WRITE)
// 004ddce8: XOR EAX,EAX
//   Label: LAB_004ddce8
// 004ddcea: MOV AL,byte ptr [EBX]
// 004ddcec: PUSH EAX
// 004ddced: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004ddcf4: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004ddcf9: ADD ESP,0x4
// 004ddcfc: CMP ESI,EAX
// 004ddcfe: JNZ 0x004ddd07
//   XREF to: 004ddd07 (CONDITIONAL_JUMP)
// 004ddd00: INC dword ptr [ESP + 0x1c4]
//   XREF to: Stack[-0x29c] (READ_WRITE)
// 004ddd07: MOV ECX,dword ptr [ESP + 0x1b4]
//   Label: LAB_004ddd07
//   XREF to: Stack[-0x2ac] (READ)
// 004ddd0e: DEC EDI
// 004ddd0f: INC EBX
// 004ddd10: CMP EDI,ECX
// 004ddd12: JG 0x004ddce8
//   XREF to: 004ddce8 (CONDITIONAL_JUMP)
// 004ddd14: MOV EAX,dword ptr [ESP + 0x1c4]
//   Label: LAB_004ddd14
//   XREF to: Stack[-0x29c] (READ)
// 004ddd1b: CMP EAX,dword ptr [ESP + 0x1c0]
//   XREF to: Stack[-0x2a0] (READ)
// 004ddd22: JNZ 0x004ddd5b
//   XREF to: 004ddd5b (CONDITIONAL_JUMP)
// 004ddd24: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004ddd27: XOR BL,BL
// 004ddd29: MOV ESI,dword ptr [EAX + 0x208]
// 004ddd2f: MOV byte ptr [0x02d831d8],BL
//   XREF to: 02d831d8 (WRITE)
// 004ddd35: TEST ESI,ESI
// 004ddd37: JNZ 0x004df2c8
//   XREF to: 004df2c8 (CONDITIONAL_JUMP)
// 004ddd3d: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004ddd40: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004ddd45: MOV dword ptr [EBX + 0x208],0x1
// 004ddd4f: MOV dword ptr [EBX + 0x268],EAX
// 004ddd55: MOV dword ptr [EBX + 0x26c],ESI
// 004ddd5b: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004ddd5b
//   XREF to: Stack[0x4] (READ)
// 004ddd5e: CMP dword ptr [EAX + 0x210],0x0
// 004ddd65: JZ 0x004dde0c
//   XREF to: 004dde0c (CONDITIONAL_JUMP)
// 004ddd6b: PUSH 0x62bad0
//   XREF to: 0062bad0 (DATA)
// 004ddd70: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004ddd75: XOR EDI,EDI
// 004ddd77: ADD ESP,0x4
// 004ddd7a: MOV dword ptr [ESP + 0x1cc],EDI
//   XREF to: Stack[-0x294] (WRITE)
// 004ddd81: MOV EDI,EAX
// 004ddd83: MOV ESI,EAX
// 004ddd85: SUB ECX,ECX
// 004ddd87: DEC ECX
// 004ddd88: XOR EAX,EAX
// 004ddd8a: SCASB.REPNE ES:EDI
// 004ddd8c: NOT ECX
// 004ddd8e: DEC ECX
// 004ddd8f: MOV dword ptr [ESP + 0x1c8],ECX
//   XREF to: Stack[-0x298] (WRITE)
// 004ddd96: TEST ECX,ECX
// 004ddd98: JLE 0x004dddd5
//   XREF to: 004dddd5 (CONDITIONAL_JUMP)
// 004ddd9a: MOV EAX,ECX
// 004ddd9c: NEG EAX
// 004ddd9e: MOV EBX,ECX
// 004ddda0: ADD ECX,EAX
// 004ddda2: MOV dword ptr [ESP + 0x390],ECX
//   XREF to: Stack[-0xd0] (WRITE)
// 004ddda9: XOR EAX,EAX
//   Label: LAB_004ddda9
// 004dddab: MOV AL,byte ptr [ESI]
// 004dddad: PUSH EAX
// 004dddae: MOVZX EDI,byte ptr [EBX + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004dddb5: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004dddba: ADD ESP,0x4
// 004dddbd: CMP EDI,EAX
// 004dddbf: JNZ 0x004dddc8
//   XREF to: 004dddc8 (CONDITIONAL_JUMP)
// 004dddc1: INC dword ptr [ESP + 0x1cc]
//   XREF to: Stack[-0x294] (READ_WRITE)
// 004dddc8: MOV EDX,dword ptr [ESP + 0x390]
//   Label: LAB_004dddc8
//   XREF to: Stack[-0xd0] (READ)
// 004dddcf: DEC EBX
// 004dddd0: INC ESI
// 004dddd1: CMP EBX,EDX
// 004dddd3: JG 0x004ddda9
//   XREF to: 004ddda9 (CONDITIONAL_JUMP)
// 004dddd5: MOV EAX,dword ptr [ESP + 0x1cc]
//   Label: LAB_004dddd5
//   XREF to: Stack[-0x294] (READ)
// 004ddddc: CMP EAX,dword ptr [ESP + 0x1c8]
//   XREF to: Stack[-0x298] (READ)
// 004ddde3: JNZ 0x004dde0c
//   XREF to: 004dde0c (CONDITIONAL_JUMP)
// 004ddde5: XOR BH,BH
// 004ddde7: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004dddea: MOV byte ptr [0x02d831d8],BH
//   XREF to: 02d831d8 (WRITE)
// 004dddf0: MOV EBX,dword ptr [EAX + 0x20c]
// 004dddf6: INC EBX
// 004dddf7: MOV dword ptr [EAX + 0x20c],EBX
// 004dddfd: CMP EBX,0x2
// 004dde00: JLE 0x004dde0c
//   XREF to: 004dde0c (CONDITIONAL_JUMP)
// 004dde02: MOV dword ptr [EAX + 0x20c],0x0
// 004dde0c: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004dde0c
//   XREF to: Stack[0x4] (READ)
// 004dde0f: CMP dword ptr [EAX + 0x210],0x0
// 004dde16: JZ 0x004ddef2
//   XREF to: 004ddef2 (CONDITIONAL_JUMP)
// 004dde1c: PUSH 0x62bb05
//   XREF to: 0062bb05 (DATA)
// 004dde21: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004dde26: MOV EBX,EAX
// 004dde28: ADD ESP,0x4
// 004dde2b: XOR ECX,ECX
// 004dde2d: MOV EDI,EAX
// 004dde2f: MOV dword ptr [ESP + 0x1d4],ECX
//   XREF to: Stack[-0x28c] (WRITE)
// 004dde36: SUB ECX,ECX
// 004dde38: DEC ECX
// 004dde39: XOR EAX,EAX
// 004dde3b: SCASB.REPNE ES:EDI
// 004dde3d: NOT ECX
// 004dde3f: DEC ECX
// 004dde40: MOV dword ptr [ESP + 0x1d0],ECX
//   XREF to: Stack[-0x290] (WRITE)
// 004dde47: TEST ECX,ECX
// 004dde49: JLE 0x004dde88
//   XREF to: 004dde88 (CONDITIONAL_JUMP)
// 004dde4b: MOV EAX,ECX
// 004dde4d: MOV ESI,EBX
// 004dde4f: NEG EAX
// 004dde51: MOV EBX,ECX
// 004dde53: ADD ECX,EAX
// 004dde55: MOV dword ptr [ESP + 0x394],ECX
//   XREF to: Stack[-0xcc] (WRITE)
// 004dde5c: XOR EAX,EAX
//   Label: LAB_004dde5c
// 004dde5e: MOV AL,byte ptr [ESI]
// 004dde60: PUSH EAX
// 004dde61: MOVZX EDI,byte ptr [EBX + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004dde68: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004dde6d: ADD ESP,0x4
// 004dde70: CMP EDI,EAX
// 004dde72: JNZ 0x004dde7b
//   XREF to: 004dde7b (CONDITIONAL_JUMP)
// 004dde74: INC dword ptr [ESP + 0x1d4]
//   XREF to: Stack[-0x28c] (READ_WRITE)
// 004dde7b: MOV EDI,dword ptr [ESP + 0x394]
//   Label: LAB_004dde7b
//   XREF to: Stack[-0xcc] (READ)
// 004dde82: DEC EBX
// 004dde83: INC ESI
// 004dde84: CMP EBX,EDI
// 004dde86: JG 0x004dde5c
//   XREF to: 004dde5c (CONDITIONAL_JUMP)
// 004dde88: MOV EAX,dword ptr [ESP + 0x1d4]
//   Label: LAB_004dde88
//   XREF to: Stack[-0x28c] (READ)
// 004dde8f: CMP EAX,dword ptr [ESP + 0x1d0]
//   XREF to: Stack[-0x290] (READ)
// 004dde96: JNZ 0x004ddef2
//   XREF to: 004ddef2 (CONDITIONAL_JUMP)
// 004dde98: XOR CL,CL
// 004dde9a: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004dde9d: MOV byte ptr [0x02d831d8],CL
//   XREF to: 02d831d8 (WRITE)
// 004ddea3: CMP dword ptr [EAX + 0x1d8],0x0
// 004ddeaa: SETZ AL
// 004ddead: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004ddeb0: AND EAX,0xff
// 004ddeb5: MOV dword ptr [EBX + 0x1d8],EAX
// 004ddebb: JZ 0x004df353
//   XREF to: 004df353 (CONDITIONAL_JUMP)
// 004ddec1: PUSH 0x40a00000
// 004ddec6: PUSH 0x62bb38
//   XREF to: 0062bb38 (DATA)
// 004ddecb: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   Label: LAB_004ddecb
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004dded0: ADD ESP,0x4
// 004dded3: PUSH EAX
// 004dded4: PUSH EBX
// 004dded5: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004ddeda: ADD ESP,0xc
// 004ddedd: PUSH 0x62bb57
//   XREF to: 0062bb57 (DATA)
// 004ddee2: PUSH 0x0
// 004ddee4: MOV EAX,[0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004ddee9: PUSH EAX
//   XREF to: 03f6af64 (DATA)
// 004ddeea: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004ddeef: ADD ESP,0xc
// 004ddef2: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004ddef2
//   XREF to: Stack[0x4] (READ)
// 004ddef5: CMP dword ptr [EAX + 0x210],0x0
// 004ddefc: JZ 0x004ddffb
//   XREF to: 004ddffb (CONDITIONAL_JUMP)
// 004ddf02: PUSH 0x62bb63
//   XREF to: 0062bb63 (DATA)
// 004ddf07: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004ddf0c: XOR ESI,ESI
// 004ddf0e: ADD ESP,0x4
// 004ddf11: MOV EDI,EAX
// 004ddf13: MOV EBX,EAX
// 004ddf15: SUB ECX,ECX
// 004ddf17: DEC ECX
// 004ddf18: XOR EAX,EAX
// 004ddf1a: SCASB.REPNE ES:EDI
// 004ddf1c: NOT ECX
// 004ddf1e: DEC ECX
// 004ddf1f: MOV dword ptr [ESP + 0x1dc],ESI
//   XREF to: Stack[-0x284] (WRITE)
// 004ddf26: MOV dword ptr [ESP + 0x1d8],ECX
//   XREF to: Stack[-0x288] (WRITE)
// 004ddf2d: TEST ECX,ECX
// 004ddf2f: JLE 0x004ddf6e
//   XREF to: 004ddf6e (CONDITIONAL_JUMP)
// 004ddf31: MOV EAX,ECX
// 004ddf33: MOV ESI,EBX
// 004ddf35: NEG EAX
// 004ddf37: MOV EBX,ECX
// 004ddf39: ADD ECX,EAX
// 004ddf3b: MOV dword ptr [ESP + 0x398],ECX
//   XREF to: Stack[-0xc8] (WRITE)
// 004ddf42: XOR EAX,EAX
//   Label: LAB_004ddf42
// 004ddf44: MOV AL,byte ptr [ESI]
// 004ddf46: PUSH EAX
// 004ddf47: MOVZX EDI,byte ptr [EBX + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004ddf4e: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004ddf53: ADD ESP,0x4
// 004ddf56: CMP EDI,EAX
// 004ddf58: JNZ 0x004ddf61
//   XREF to: 004ddf61 (CONDITIONAL_JUMP)
// 004ddf5a: INC dword ptr [ESP + 0x1dc]
//   XREF to: Stack[-0x284] (READ_WRITE)
// 004ddf61: MOV EDI,dword ptr [ESP + 0x398]
//   Label: LAB_004ddf61
//   XREF to: Stack[-0xc8] (READ)
// 004ddf68: DEC EBX
// 004ddf69: INC ESI
// 004ddf6a: CMP EBX,EDI
// 004ddf6c: JG 0x004ddf42
//   XREF to: 004ddf42 (CONDITIONAL_JUMP)
// 004ddf6e: MOV EAX,dword ptr [ESP + 0x1dc]
//   Label: LAB_004ddf6e
//   XREF to: Stack[-0x284] (READ)
// 004ddf75: CMP EAX,dword ptr [ESP + 0x1d8]
//   XREF to: Stack[-0x288] (READ)
// 004ddf7c: JNZ 0x004ddffb
//   XREF to: 004ddffb (CONDITIONAL_JUMP)
// 004ddf7e: XOR CH,CH
// 004ddf80: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004ddf83: MOV byte ptr [0x02d831d8],CH
//   XREF to: 02d831d8 (WRITE)
// 004ddf89: CMP dword ptr [EAX + 0x1dc],0x0
// 004ddf90: SETZ AL
// 004ddf93: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004ddf96: AND EAX,0xff
// 004ddf9b: MOV dword ptr [EBX + 0x1dc],EAX
// 004ddfa1: JZ 0x004df362
//   XREF to: 004df362 (CONDITIONAL_JUMP)
// 004ddfa7: PUSH 0x40a00000
// 004ddfac: PUSH 0x62bb97
//   XREF to: 0062bb97 (DATA)
// 004ddfb1: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004ddfb6: ADD ESP,0x4
// 004ddfb9: PUSH EAX
// 004ddfba: PUSH EBX
// 004ddfbb: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004ddfc0: ADD ESP,0xc
// 004ddfc3: PUSH 0xf0
// 004ddfc8: PUSH 0x0
// 004ddfca: PUSH 0x0
// 004ddfcc: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004ddfd2: PUSH ECX
//   XREF to: 03114278 (DATA)
// 004ddfd3: MOV dword ptr [EBX + 0x278],0x1
// 004ddfdd: CALL core_set.cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0
//   Label: LAB_004ddfdd
//   XREF to: 0056b7e0 (UNCONDITIONAL_CALL)
//   XREF to: 03114278 (PARAM)
// 004ddfe2: ADD ESP,0x10
// 004ddfe5: PUSH 0x62bbb8
//   XREF to: 0062bbb8 (DATA)
// 004ddfea: PUSH 0x0
// 004ddfec: MOV EBX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004ddff2: PUSH EBX
//   XREF to: 03f6af64 (DATA)
// 004ddff3: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004ddff8: ADD ESP,0xc
// 004ddffb: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004ddffb
//   XREF to: Stack[0x4] (READ)
// 004ddffe: CMP dword ptr [EAX + 0x210],0x0
// 004de005: JZ 0x004de0e2
//   XREF to: 004de0e2 (CONDITIONAL_JUMP)
// 004de00b: PUSH 0x62bbc4
//   XREF to: 0062bbc4 (DATA)
// 004de010: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004de015: MOV EBX,EAX
// 004de017: ADD ESP,0x4
// 004de01a: XOR ECX,ECX
// 004de01c: MOV EDI,EAX
// 004de01e: MOV dword ptr [ESP + 0x1e4],ECX
//   XREF to: Stack[-0x27c] (WRITE)
// 004de025: SUB ECX,ECX
// 004de027: DEC ECX
// 004de028: XOR EAX,EAX
// 004de02a: SCASB.REPNE ES:EDI
// 004de02c: NOT ECX
// 004de02e: DEC ECX
// 004de02f: MOV dword ptr [ESP + 0x1e0],ECX
//   XREF to: Stack[-0x280] (WRITE)
// 004de036: TEST ECX,ECX
// 004de038: JLE 0x004de077
//   XREF to: 004de077 (CONDITIONAL_JUMP)
// 004de03a: MOV EAX,ECX
// 004de03c: MOV ESI,EBX
// 004de03e: NEG EAX
// 004de040: MOV EBX,ECX
// 004de042: ADD ECX,EAX
// 004de044: MOV dword ptr [ESP + 0x39c],ECX
//   XREF to: Stack[-0xc4] (WRITE)
// 004de04b: XOR EAX,EAX
//   Label: LAB_004de04b
// 004de04d: MOV AL,byte ptr [ESI]
// 004de04f: PUSH EAX
// 004de050: MOVZX EDI,byte ptr [EBX + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004de057: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004de05c: ADD ESP,0x4
// 004de05f: CMP EDI,EAX
// 004de061: JNZ 0x004de06a
//   XREF to: 004de06a (CONDITIONAL_JUMP)
// 004de063: INC dword ptr [ESP + 0x1e4]
//   XREF to: Stack[-0x27c] (READ_WRITE)
// 004de06a: MOV EDI,dword ptr [ESP + 0x39c]
//   Label: LAB_004de06a
//   XREF to: Stack[-0xc4] (READ)
// 004de071: DEC EBX
// 004de072: INC ESI
// 004de073: CMP EBX,EDI
// 004de075: JG 0x004de04b
//   XREF to: 004de04b (CONDITIONAL_JUMP)
// 004de077: MOV EAX,dword ptr [ESP + 0x1e4]
//   Label: LAB_004de077
//   XREF to: Stack[-0x27c] (READ)
// 004de07e: MOV EDX,dword ptr [ESP + 0x1e0]
//   XREF to: Stack[-0x280] (READ)
// 004de085: CMP EAX,EDX
// 004de087: JNZ 0x004de0e2
//   XREF to: 004de0e2 (CONDITIONAL_JUMP)
// 004de089: XOR AL,DL
// 004de08b: MOV [0x02d831d8],AL
//   XREF to: 02d831d8 (WRITE)
// 004de090: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004de093: CMP dword ptr [EAX + 0x1f8],0x0
// 004de09a: SETZ AL
// 004de09d: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004de0a0: AND EAX,0xff
// 004de0a5: MOV dword ptr [EBX + 0x1f8],EAX
// 004de0ab: JZ 0x004df39e
//   XREF to: 004df39e (CONDITIONAL_JUMP)
// 004de0b1: PUSH 0x40a00000
// 004de0b6: PUSH 0x62bbf8
//   XREF to: 0062bbf8 (DATA)
// 004de0bb: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   Label: LAB_004de0bb
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004de0c0: ADD ESP,0x4
// 004de0c3: PUSH EAX
// 004de0c4: PUSH EBX
// 004de0c5: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004de0ca: ADD ESP,0xc
// 004de0cd: PUSH 0x62bc21
//   XREF to: 0062bc21 (DATA)
// 004de0d2: PUSH 0x0
// 004de0d4: MOV EAX,[0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004de0d9: PUSH EAX
//   XREF to: 03f6af64 (DATA)
// 004de0da: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004de0df: ADD ESP,0xc
// 004de0e2: PUSH 0x62bc2d
//   Label: LAB_004de0e2
//   XREF to: 0062bc2d (DATA)
// 004de0e7: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004de0ec: MOV EBX,EAX
// 004de0ee: ADD ESP,0x4
// 004de0f1: XOR ECX,ECX
// 004de0f3: MOV EDI,EAX
// 004de0f5: MOV dword ptr [ESP + 0x1ec],ECX
//   XREF to: Stack[-0x274] (WRITE)
// 004de0fc: SUB ECX,ECX
// 004de0fe: DEC ECX
// 004de0ff: XOR EAX,EAX
// 004de101: SCASB.REPNE ES:EDI
// 004de103: NOT ECX
// 004de105: DEC ECX
// 004de106: MOV dword ptr [ESP + 0x1e8],ECX
//   XREF to: Stack[-0x278] (WRITE)
// 004de10d: TEST ECX,ECX
// 004de10f: JLE 0x004de14c
//   XREF to: 004de14c (CONDITIONAL_JUMP)
// 004de111: MOV EAX,ECX
// 004de113: NEG EAX
// 004de115: MOV EDI,ECX
// 004de117: ADD ECX,EAX
// 004de119: MOV dword ptr [ESP + 0x3a0],ECX
//   XREF to: Stack[-0xc0] (WRITE)
// 004de120: XOR EAX,EAX
//   Label: LAB_004de120
// 004de122: MOV AL,byte ptr [EBX]
// 004de124: PUSH EAX
// 004de125: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004de12c: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004de131: ADD ESP,0x4
// 004de134: CMP ESI,EAX
// 004de136: JNZ 0x004de13f
//   XREF to: 004de13f (CONDITIONAL_JUMP)
// 004de138: INC dword ptr [ESP + 0x1ec]
//   XREF to: Stack[-0x274] (READ_WRITE)
// 004de13f: MOV ESI,dword ptr [ESP + 0x3a0]
//   Label: LAB_004de13f
//   XREF to: Stack[-0xc0] (READ)
// 004de146: DEC EDI
// 004de147: INC EBX
// 004de148: CMP EDI,ESI
// 004de14a: JG 0x004de120
//   XREF to: 004de120 (CONDITIONAL_JUMP)
// 004de14c: MOV EAX,dword ptr [ESP + 0x1ec]
//   Label: LAB_004de14c
//   XREF to: Stack[-0x274] (READ)
// 004de153: CMP EAX,dword ptr [ESP + 0x1e8]
//   XREF to: Stack[-0x278] (READ)
// 004de15a: JNZ 0x004de1c2
//   XREF to: 004de1c2 (CONDITIONAL_JUMP)
// 004de15c: XOR AH,AH
// 004de15e: PUSH 0x40a00000
// 004de163: MOV byte ptr [0x02d831d8],AH
//   XREF to: 02d831d8 (WRITE)
// 004de169: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004de16c: PUSH 0x62bc61
//   XREF to: 0062bc61 (DATA)
// 004de171: MOV dword ptr [EAX + 0xc4],0x2
// 004de17b: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004de180: ADD ESP,0x4
// 004de183: PUSH EAX
// 004de184: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004de187: PUSH EAX
// 004de188: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004de18d: ADD ESP,0xc
// 004de190: PUSH 0x62bc74
//   XREF to: 0062bc74 (DATA)
// 004de195: PUSH 0x0
// 004de197: MOV EDX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004de19d: PUSH EDX
//   XREF to: 03f6af64 (DATA)
// 004de19e: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004de1a3: ADD ESP,0xc
// 004de1a6: MOV EBX,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004de1ac: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004de1af: MOV EBX,dword ptr [EBX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004de1b6: MOV EAX,dword ptr [EAX + 0xc4]
// 004de1bc: MOV dword ptr [EBX + 0x1f734],EAX
// 004de1c2: PUSH 0x62bc80
//   Label: LAB_004de1c2
//   XREF to: 0062bc80 (DATA)
// 004de1c7: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004de1cc: MOV EBX,EAX
// 004de1ce: ADD ESP,0x4
// 004de1d1: XOR ECX,ECX
// 004de1d3: MOV EDI,EAX
// 004de1d5: MOV dword ptr [ESP + 0x1f4],ECX
//   XREF to: Stack[-0x26c] (WRITE)
// 004de1dc: SUB ECX,ECX
// 004de1de: DEC ECX
// 004de1df: XOR EAX,EAX
// 004de1e1: SCASB.REPNE ES:EDI
// 004de1e3: NOT ECX
// 004de1e5: DEC ECX
// 004de1e6: MOV dword ptr [ESP + 0x1f0],ECX
//   XREF to: Stack[-0x270] (WRITE)
// 004de1ed: TEST ECX,ECX
// 004de1ef: JLE 0x004de22c
//   XREF to: 004de22c (CONDITIONAL_JUMP)
// 004de1f1: MOV EAX,ECX
// 004de1f3: NEG EAX
// 004de1f5: MOV EDI,ECX
// 004de1f7: ADD ECX,EAX
// 004de1f9: MOV dword ptr [ESP + 0x3a4],ECX
//   XREF to: Stack[-0xbc] (WRITE)
// 004de200: XOR EAX,EAX
//   Label: LAB_004de200
// 004de202: MOV AL,byte ptr [EBX]
// 004de204: PUSH EAX
// 004de205: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004de20c: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004de211: ADD ESP,0x4
// 004de214: CMP ESI,EAX
// 004de216: JNZ 0x004de21f
//   XREF to: 004de21f (CONDITIONAL_JUMP)
// 004de218: INC dword ptr [ESP + 0x1f4]
//   XREF to: Stack[-0x26c] (READ_WRITE)
// 004de21f: MOV EAX,dword ptr [ESP + 0x3a4]
//   Label: LAB_004de21f
//   XREF to: Stack[-0xbc] (READ)
// 004de226: DEC EDI
// 004de227: INC EBX
// 004de228: CMP EDI,EAX
// 004de22a: JG 0x004de200
//   XREF to: 004de200 (CONDITIONAL_JUMP)
// 004de22c: MOV EAX,dword ptr [ESP + 0x1f4]
//   Label: LAB_004de22c
//   XREF to: Stack[-0x26c] (READ)
// 004de233: CMP EAX,dword ptr [ESP + 0x1f0]
//   XREF to: Stack[-0x270] (READ)
// 004de23a: JNZ 0x004de2a1
//   XREF to: 004de2a1 (CONDITIONAL_JUMP)
// 004de23c: PUSH 0x40a00000
// 004de241: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004de244: XOR DL,DL
// 004de246: PUSH 0x62bcb2
//   XREF to: 0062bcb2 (DATA)
// 004de24b: MOV byte ptr [0x02d831d8],DL
//   XREF to: 02d831d8 (WRITE)
// 004de251: MOV dword ptr [EAX + 0xc4],0x0
// 004de25b: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004de260: ADD ESP,0x4
// 004de263: PUSH EAX
// 004de264: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004de267: PUSH ECX
// 004de268: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004de26d: ADD ESP,0xc
// 004de270: PUSH 0x62bcc3
//   XREF to: 0062bcc3 (DATA)
// 004de275: PUSH 0x0
// 004de277: MOV EBX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004de27d: PUSH EBX
//   XREF to: 03f6af64 (DATA)
// 004de27e: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004de283: ADD ESP,0xc
// 004de286: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004de28b: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004de28e: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004de295: MOV EBX,dword ptr [EBX + 0xc4]
// 004de29b: MOV dword ptr [EAX + 0x1f734],EBX
// 004de2a1: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004de2a1
//   XREF to: Stack[0x4] (READ)
// 004de2a4: CMP dword ptr [EAX + 0x210],0x0
// 004de2ab: JZ 0x004de409
//   XREF to: 004de409 (CONDITIONAL_JUMP)
// 004de2b1: PUSH 0x62bccf
//   XREF to: 0062bccf (DATA)
// 004de2b6: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004de2bb: XOR EDI,EDI
// 004de2bd: ADD ESP,0x4
// 004de2c0: MOV dword ptr [ESP + 0x1fc],EDI
//   XREF to: Stack[-0x264] (WRITE)
// 004de2c7: MOV EDI,EAX
// 004de2c9: MOV ESI,EAX
// 004de2cb: SUB ECX,ECX
// 004de2cd: DEC ECX
// 004de2ce: XOR EAX,EAX
// 004de2d0: SCASB.REPNE ES:EDI
// 004de2d2: NOT ECX
// 004de2d4: DEC ECX
// 004de2d5: MOV dword ptr [ESP + 0x1f8],ECX
//   XREF to: Stack[-0x268] (WRITE)
// 004de2dc: TEST ECX,ECX
// 004de2de: JLE 0x004de31b
//   XREF to: 004de31b (CONDITIONAL_JUMP)
// 004de2e0: MOV EAX,ECX
// 004de2e2: NEG EAX
// 004de2e4: MOV EBX,ECX
// 004de2e6: ADD ECX,EAX
// 004de2e8: MOV dword ptr [ESP + 0x3a8],ECX
//   XREF to: Stack[-0xb8] (WRITE)
// 004de2ef: XOR EAX,EAX
//   Label: LAB_004de2ef
// 004de2f1: MOV AL,byte ptr [ESI]
// 004de2f3: PUSH EAX
// 004de2f4: MOVZX EDI,byte ptr [EBX + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004de2fb: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004de300: ADD ESP,0x4
// 004de303: CMP EDI,EAX
// 004de305: JNZ 0x004de30e
//   XREF to: 004de30e (CONDITIONAL_JUMP)
// 004de307: INC dword ptr [ESP + 0x1fc]
//   XREF to: Stack[-0x264] (READ_WRITE)
// 004de30e: MOV EDX,dword ptr [ESP + 0x3a8]
//   Label: LAB_004de30e
//   XREF to: Stack[-0xb8] (READ)
// 004de315: DEC EBX
// 004de316: INC ESI
// 004de317: CMP EBX,EDX
// 004de319: JG 0x004de2ef
//   XREF to: 004de2ef (CONDITIONAL_JUMP)
// 004de31b: MOV EAX,dword ptr [ESP + 0x1fc]
//   Label: LAB_004de31b
//   XREF to: Stack[-0x264] (READ)
// 004de322: CMP EAX,dword ptr [ESP + 0x1f8]
//   XREF to: Stack[-0x268] (READ)
// 004de329: JNZ 0x004de409
//   XREF to: 004de409 (CONDITIONAL_JUMP)
// 004de32f: PUSH 0x1
// 004de331: PUSH 0x43700000
// 004de336: PUSH 0x3e800000
// 004de33b: PUSH 0x1
// 004de33d: PUSH 0x67b660
//   XREF to: 0067b660 (DATA)
// 004de342: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004de348: XOR DH,DH
// 004de34a: PUSH 0x62b161
//   XREF to: 0062b161 (DATA)
// 004de34f: XOR EBX,EBX
// 004de351: MOV byte ptr [0x02d831d8],DH
//   XREF to: 02d831d8 (WRITE)
// 004de357: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004de358: MOV dword ptr [0x02d831b4],EBX
//   XREF to: 02d831b4 (WRITE)
// 004de35e: MOV dword ptr [0x02d831bc],EBX
//   XREF to: 02d831bc (WRITE)
// 004de364: CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
// 004de369: ADD ESP,0x1c
// 004de36c: TEST EAX,EAX
// 004de36e: JZ 0x004de409
//   XREF to: 004de409 (CONDITIONAL_JUMP)
// 004de374: PUSH 0x1
// 004de376: PUSH 0x1869f
// 004de37b: PUSH EBX
// 004de37c: PUSH 0x1
// 004de37e: PUSH 0x2d831b8
//   XREF to: 02d831b8 (DATA)
// 004de383: PUSH 0x62b171
//   XREF to: 0062b171 (DATA)
// 004de388: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004de38d: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004de38e: CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
//   XREF to: 004a0020 (UNCONDITIONAL_CALL)
// 004de393: ADD ESP,0x1c
// 004de396: TEST EAX,EAX
// 004de398: JZ 0x004de409
//   XREF to: 004de409 (CONDITIONAL_JUMP)
// 004de39a: PUSH 0x1
// 004de39c: PUSH 0x270f
// 004de3a1: PUSH 0x1
// 004de3a3: PUSH 0x1
// 004de3a5: PUSH 0x67b664
//   XREF to: 0067b664 (DATA)
// 004de3aa: PUSH 0x62b1bb
//   XREF to: 0062b1bb (DATA)
// 004de3af: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004de3b5: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004de3b6: CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
//   XREF to: 004a0020 (UNCONDITIONAL_CALL)
// 004de3bb: ADD ESP,0x1c
// 004de3be: TEST EAX,EAX
// 004de3c0: JZ 0x004de409
//   XREF to: 004de409 (CONDITIONAL_JUMP)
// 004de3c2: PUSH 0x1
// 004de3c4: PUSH 0x270f
// 004de3c9: PUSH 0x1
// 004de3cb: PUSH 0x1
// 004de3cd: PUSH 0x67b668
//   XREF to: 0067b668 (DATA)
// 004de3d2: PUSH 0x62b1cd
//   XREF to: 0062b1cd (DATA)
// 004de3d7: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004de3dd: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004de3de: CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
//   XREF to: 004a0020 (UNCONDITIONAL_CALL)
// 004de3e3: ADD ESP,0x1c
// 004de3e6: TEST EAX,EAX
// 004de3e8: JZ 0x004de409
//   XREF to: 004de409 (CONDITIONAL_JUMP)
// 004de3ea: PUSH 0x62b1e0
//   XREF to: 0062b1e0 (DATA)
// 004de3ef: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004de3f5: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004de3f6: MOV ESI,0x1
// 004de3fb: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 004de400: ADD ESP,0x8
// 004de403: MOV dword ptr [0x02d831b0],ESI
//   XREF to: 02d831b0 (WRITE)
// 004de409: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004de409
//   XREF to: Stack[0x4] (READ)
// 004de40c: CMP dword ptr [EAX + 0x210],0x0
// 004de413: JZ 0x004de4b9
//   XREF to: 004de4b9 (CONDITIONAL_JUMP)
// 004de419: PUSH 0x62bd02
//   XREF to: 0062bd02 (DATA)
// 004de41e: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004de423: MOV EBX,EAX
// 004de425: ADD ESP,0x4
// 004de428: XOR ECX,ECX
// 004de42a: MOV EDI,EAX
// 004de42c: MOV dword ptr [ESP + 0x204],ECX
//   XREF to: Stack[-0x25c] (WRITE)
// 004de433: SUB ECX,ECX
// 004de435: DEC ECX
// 004de436: XOR EAX,EAX
// 004de438: SCASB.REPNE ES:EDI
// 004de43a: NOT ECX
// 004de43c: DEC ECX
// 004de43d: MOV dword ptr [ESP + 0x200],ECX
//   XREF to: Stack[-0x260] (WRITE)
// 004de444: TEST ECX,ECX
// 004de446: JLE 0x004de485
//   XREF to: 004de485 (CONDITIONAL_JUMP)
// 004de448: MOV EAX,ECX
// 004de44a: MOV ESI,EBX
// 004de44c: NEG EAX
// 004de44e: MOV EBX,ECX
// 004de450: ADD ECX,EAX
// 004de452: MOV dword ptr [ESP + 0x3ac],ECX
//   XREF to: Stack[-0xb4] (WRITE)
// 004de459: XOR EAX,EAX
//   Label: LAB_004de459
// 004de45b: MOV AL,byte ptr [ESI]
// 004de45d: PUSH EAX
// 004de45e: MOVZX EDI,byte ptr [EBX + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004de465: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004de46a: ADD ESP,0x4
// 004de46d: CMP EDI,EAX
// 004de46f: JNZ 0x004de478
//   XREF to: 004de478 (CONDITIONAL_JUMP)
// 004de471: INC dword ptr [ESP + 0x204]
//   XREF to: Stack[-0x25c] (READ_WRITE)
// 004de478: MOV EDI,dword ptr [ESP + 0x3ac]
//   Label: LAB_004de478
//   XREF to: Stack[-0xb4] (READ)
// 004de47f: DEC EBX
// 004de480: INC ESI
// 004de481: CMP EBX,EDI
// 004de483: JG 0x004de459
//   XREF to: 004de459 (CONDITIONAL_JUMP)
// 004de485: MOV EAX,dword ptr [ESP + 0x204]
//   Label: LAB_004de485
//   XREF to: Stack[-0x25c] (READ)
// 004de48c: CMP EAX,dword ptr [ESP + 0x200]
//   XREF to: Stack[-0x260] (READ)
// 004de493: JNZ 0x004de4b9
//   XREF to: 004de4b9 (CONDITIONAL_JUMP)
// 004de495: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004de498: XOR BL,BL
// 004de49a: MOV ECX,dword ptr [EAX + 0x21c]
// 004de4a0: MOV byte ptr [0x02d831d8],BL
//   XREF to: 02d831d8 (WRITE)
// 004de4a6: TEST ECX,ECX
// 004de4a8: SETZ AL
// 004de4ab: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004de4ae: AND EAX,0xff
// 004de4b3: MOV dword ptr [EBX + 0x21c],EAX
// 004de4b9: PUSH 0x62bd39
//   Label: LAB_004de4b9
//   XREF to: 0062bd39 (DATA)
// 004de4be: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004de4c3: MOV EBX,EAX
// 004de4c5: ADD ESP,0x4
// 004de4c8: XOR EAX,EAX
// 004de4ca: MOV EDI,EBX
// 004de4cc: MOV dword ptr [ESP + 0x20c],EAX
//   XREF to: Stack[-0x254] (WRITE)
// 004de4d3: SUB ECX,ECX
// 004de4d5: DEC ECX
// 004de4d6: XOR EAX,EAX
// 004de4d8: SCASB.REPNE ES:EDI
// 004de4da: NOT ECX
// 004de4dc: DEC ECX
// 004de4dd: MOV dword ptr [ESP + 0x208],ECX
//   XREF to: Stack[-0x258] (WRITE)
// 004de4e4: TEST ECX,ECX
// 004de4e6: JLE 0x004de526
//   XREF to: 004de526 (CONDITIONAL_JUMP)
// 004de4e8: MOV EAX,ECX
// 004de4ea: NEG EAX
// 004de4ec: MOV EDI,ECX
// 004de4ee: ADD ECX,EAX
// 004de4f0: MOV ESI,EBX
// 004de4f2: MOV dword ptr [ESP + 0x3b0],ECX
//   XREF to: Stack[-0xb0] (WRITE)
// 004de4f9: XOR EAX,EAX
//   Label: LAB_004de4f9
// 004de4fb: MOV AL,byte ptr [ESI]
// 004de4fd: XOR EBX,EBX
// 004de4ff: PUSH EAX
// 004de500: MOV BL,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004de506: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004de50b: ADD ESP,0x4
// 004de50e: CMP EBX,EAX
// 004de510: JNZ 0x004de519
//   XREF to: 004de519 (CONDITIONAL_JUMP)
// 004de512: INC dword ptr [ESP + 0x20c]
//   XREF to: Stack[-0x254] (READ_WRITE)
// 004de519: MOV EDX,dword ptr [ESP + 0x3b0]
//   Label: LAB_004de519
//   XREF to: Stack[-0xb0] (READ)
// 004de520: DEC EDI
// 004de521: INC ESI
// 004de522: CMP EDI,EDX
// 004de524: JG 0x004de4f9
//   XREF to: 004de4f9 (CONDITIONAL_JUMP)
// 004de526: MOV EAX,dword ptr [ESP + 0x20c]
//   Label: LAB_004de526
//   XREF to: Stack[-0x254] (READ)
// 004de52d: CMP EAX,dword ptr [ESP + 0x208]
//   XREF to: Stack[-0x258] (READ)
// 004de534: JNZ 0x004de601
//   XREF to: 004de601 (CONDITIONAL_JUMP)
// 004de53a: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004de53f: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004de546: PUSH 0x62bd72
//   XREF to: 0062bd72 (DATA)
// 004de54b: ADD EAX,0x1f738
// 004de550: XOR BH,BH
// 004de552: PUSH EAX
// 004de553: MOV byte ptr [0x02d831d8],BH
//   XREF to: 02d831d8 (WRITE)
// 004de559: CALL core_inv.cpp_CInventory_findItemByName_FUN_004fe9d0
//   XREF to: 004fe9d0 (UNCONDITIONAL_CALL)
// 004de55e: ADD ESP,0x8
// 004de561: TEST EAX,EAX
// 004de563: JNZ 0x004de601
//   XREF to: 004de601 (CONDITIONAL_JUMP)
// 004de569: PUSH 0x62bd7f
//   XREF to: 0062bd7f (DATA)
// 004de56e: CALL core_actor.cpp_createActorByName_FUN_0040c430
//   XREF to: 0040c430 (UNCONDITIONAL_CALL)
// 004de573: ADD ESP,0x4
// 004de576: MOV EBX,EAX
// 004de578: PUSH EBX
// 004de579: MOV EAX,dword ptr [EAX + 0x154]
// 004de57f: MOV ESI,0x62bd89
//   XREF to: 0062bd89 (DATA)
// 004de584: CALL dword ptr [EAX]
// 004de586: ADD ESP,0x4
// 004de589: MOV EDI,EBX
// 004de58b: MOV dword ptr [EBX + 0x2d4],0xffffffff
// 004de595: PUSH EDI
// 004de596: MOV AL,byte ptr [ESI]
//   Label: LAB_004de596
//   XREF to: 0062bd89 (READ)
//   XREF to: 0062bd8b (READ)
// 004de598: MOV byte ptr [EDI],AL
// 004de59a: CMP AL,0x0
// 004de59c: JZ 0x004de5ae
//   XREF to: 004de5ae (CONDITIONAL_JUMP)
// 004de59e: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062bd8a (READ)
//   XREF to: 0062bd8c (READ)
// 004de5a1: ADD ESI,0x2
// 004de5a4: MOV byte ptr [EDI + 0x1],AL
// 004de5a7: ADD EDI,0x2
// 004de5aa: CMP AL,0x0
// 004de5ac: JNZ 0x004de596
//   XREF to: 004de596 (CONDITIONAL_JUMP)
// 004de5ae: POP EDI
//   Label: LAB_004de5ae
// 004de5af: PUSH 0x62bd96
//   XREF to: 0062bd96 (DATA)
// 004de5b4: PUSH 0x0
// 004de5b6: MOV ESI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 004de5bc: PUSH ESI
//   XREF to: 03f6af64 (DATA)
// 004de5bd: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004de5c2: ADD ESP,0xc
// 004de5c5: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004de5ca: PUSH 0x1
// 004de5cc: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004de5d3: PUSH EBX
// 004de5d4: ADD EAX,0x1f738
// 004de5d9: PUSH EAX
// 004de5da: CALL core_inv.cpp_CInventory_addItem_FUN_004fd600
//   XREF to: 004fd600 (UNCONDITIONAL_CALL)
// 004de5df: ADD ESP,0xc
// 004de5e2: PUSH 0x40a00000
// 004de5e7: PUSH 0x62bda2
//   XREF to: 0062bda2 (DATA)
// 004de5ec: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004de5f1: ADD ESP,0x4
// 004de5f4: PUSH EAX
// 004de5f5: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004de5f8: PUSH EDI
// 004de5f9: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004de5fe: ADD ESP,0xc
// 004de601: PUSH 0x62bdbc
//   Label: LAB_004de601
//   XREF to: 0062bdbc (DATA)
// 004de606: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004de60b: MOV EBX,EAX
// 004de60d: ADD ESP,0x4
// 004de610: XOR EAX,EAX
// 004de612: MOV EDI,EBX
// 004de614: MOV dword ptr [ESP + 0x214],EAX
// 004de61b: SUB ECX,ECX
// 004de61d: DEC ECX
// 004de61e: XOR EAX,EAX
// 004de620: SCASB.REPNE ES:EDI
// 004de622: NOT ECX
// 004de624: DEC ECX
// 004de625: MOV dword ptr [ESP + 0x210],ECX
// 004de62c: TEST ECX,ECX
// 004de62e: JLE 0x004de66b
//   XREF to: 004de66b (CONDITIONAL_JUMP)
// 004de630: MOV EAX,ECX
// 004de632: NEG EAX
// 004de634: MOV EDI,ECX
// 004de636: ADD ECX,EAX
// 004de638: MOV dword ptr [ESP + 0x3b4],ECX
// 004de63f: XOR EAX,EAX
//   Label: LAB_004de63f
// 004de641: MOV AL,byte ptr [EBX]
// 004de643: PUSH EAX
// 004de644: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004de64b: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004de650: ADD ESP,0x4
// 004de653: CMP ESI,EAX
// 004de655: JNZ 0x004de65e
//   XREF to: 004de65e (CONDITIONAL_JUMP)
// 004de657: INC dword ptr [ESP + 0x214]
// 004de65e: MOV ECX,dword ptr [ESP + 0x3b4]
//   Label: LAB_004de65e
// 004de665: DEC EDI
// 004de666: INC EBX
// 004de667: CMP EDI,ECX
// 004de669: JG 0x004de63f
//   XREF to: 004de63f (CONDITIONAL_JUMP)
// 004de66b: MOV EAX,dword ptr [ESP + 0x214]
//   Label: LAB_004de66b
// 004de672: CMP EAX,dword ptr [ESP + 0x210]
// 004de679: JNZ 0x004de6ed
//   XREF to: 004de6ed (CONDITIONAL_JUMP)
// 004de67b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004de67e: XOR CL,CL
// 004de680: MOV ESI,dword ptr [EAX + 0x1d0]
// 004de686: MOV byte ptr [0x02d831d8],CL
//   XREF to: 02d831d8 (WRITE)
// 004de68c: TEST ESI,ESI
// 004de68e: SETZ AL
// 004de691: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004de694: AND EAX,0xff
// 004de699: MOV dword ptr [EBX + 0x1d0],EAX
// 004de69f: JZ 0x004df3ad
//   XREF to: 004df3ad (CONDITIONAL_JUMP)
// 004de6a5: PUSH 0x40a00000
// 004de6aa: PUSH 0x62bdf2
//   XREF to: 0062bdf2 (DATA)
// 004de6af: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004de6b4: ADD ESP,0x4
// 004de6b7: PUSH EAX
// 004de6b8: PUSH EBX
// 004de6b9: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004de6be: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004de6c3: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004de6ca: ADD ESP,0xc
// 004de6cd: MOV dword ptr [EAX + 0x243c],0x42c80000
// 004de6d7: PUSH 0x62be15
//   Label: LAB_004de6d7
//   XREF to: 0062be15 (DATA)
// 004de6dc: PUSH 0x0
// 004de6de: MOV ECX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004de6e4: PUSH ECX
//   XREF to: 03f6af64 (DATA)
// 004de6e5: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004de6ea: ADD ESP,0xc
// 004de6ed: PUSH 0x62be21
//   Label: LAB_004de6ed
//   XREF to: 0062be21 (DATA)
// 004de6f2: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004de6f7: XOR ESI,ESI
// 004de6f9: ADD ESP,0x4
// 004de6fc: MOV EDI,EAX
// 004de6fe: MOV EBX,EAX
// 004de700: SUB ECX,ECX
// 004de702: DEC ECX
// 004de703: XOR EAX,EAX
// 004de705: SCASB.REPNE ES:EDI
// 004de707: NOT ECX
// 004de709: DEC ECX
// 004de70a: MOV dword ptr [ESP + 0x218],ECX
// 004de711: TEST ECX,ECX
// 004de713: JLE 0x004de757
//   XREF to: 004de757 (CONDITIONAL_JUMP)
// 004de715: MOV EAX,ECX
// 004de717: NEG EAX
// 004de719: MOV EDI,ECX
// 004de71b: ADD ECX,EAX
// 004de71d: MOV dword ptr [ESP + 0x3b8],ECX
// 004de724: XOR EAX,EAX
//   Label: LAB_004de724
// 004de726: MOV AL,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004de72c: MOV dword ptr [ESP + 0x448],EAX
// 004de733: XOR EAX,EAX
// 004de735: MOV AL,byte ptr [EBX]
// 004de737: PUSH EAX
// 004de738: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004de73d: ADD ESP,0x4
// 004de740: CMP EAX,dword ptr [ESP + 0x448]
// 004de747: JNZ 0x004de74a
//   XREF to: 004de74a (CONDITIONAL_JUMP)
// 004de749: INC ESI
// 004de74a: MOV EAX,dword ptr [ESP + 0x3b8]
//   Label: LAB_004de74a
// 004de751: DEC EDI
// 004de752: INC EBX
// 004de753: CMP EDI,EAX
// 004de755: JG 0x004de724
//   XREF to: 004de724 (CONDITIONAL_JUMP)
// 004de757: CMP ESI,dword ptr [ESP + 0x218]
//   Label: LAB_004de757
// 004de75e: JNZ 0x004de7ba
//   XREF to: 004de7ba (CONDITIONAL_JUMP)
// 004de760: XOR CH,CH
// 004de762: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004de765: MOV byte ptr [0x02d831d8],CH
//   XREF to: 02d831d8 (WRITE)
// 004de76b: CMP dword ptr [EAX + 0x1d4],0x0
// 004de772: SETZ AL
// 004de775: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004de778: AND EAX,0xff
// 004de77d: MOV dword ptr [EBX + 0x1d4],EAX
// 004de783: JZ 0x004df3ce
//   XREF to: 004df3ce (CONDITIONAL_JUMP)
// 004de789: PUSH 0x40a00000
// 004de78e: PUSH 0x62be56
//   XREF to: 0062be56 (DATA)
// 004de793: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   Label: LAB_004de793
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004de798: ADD ESP,0x4
// 004de79b: PUSH EAX
// 004de79c: PUSH EBX
// 004de79d: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004de7a2: ADD ESP,0xc
// 004de7a5: PUSH 0x62be74
//   XREF to: 0062be74 (DATA)
// 004de7aa: PUSH 0x0
// 004de7ac: MOV EAX,[0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004de7b1: PUSH EAX
//   XREF to: 03f6af64 (DATA)
// 004de7b2: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004de7b7: ADD ESP,0xc
// 004de7ba: PUSH 0x62be80
//   Label: LAB_004de7ba
//   XREF to: 0062be80 (DATA)
// 004de7bf: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004de7c4: ADD ESP,0x4
// 004de7c7: PUSH 0x62be9e
//   XREF to: 0062be9e (DATA)
// 004de7cc: MOV EBX,EAX
// 004de7ce: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004de7d3: MOV EDX,0x62be95
//   XREF to: 0062be95 (PARAM)
// 004de7d8: MOV ESI,EAX
// 004de7da: ADD ESP,0x4
// 004de7dd: MOV EDI,EAX
// 004de7df: XOR ECX,ECX
// 004de7e1: MOV dword ptr [ESP + 0x21c],EDX
//   XREF to: 0062be95 (DATA)
// 004de7e8: MOV dword ptr [ESP + 0x220],EBX
// 004de7ef: MOV dword ptr [ESP + 0x228],ECX
// 004de7f6: SUB ECX,ECX
// 004de7f8: DEC ECX
// 004de7f9: XOR EAX,EAX
// 004de7fb: SCASB.REPNE ES:EDI
// 004de7fd: NOT ECX
// 004de7ff: DEC ECX
// 004de800: MOV dword ptr [ESP + 0x224],ECX
// 004de807: TEST ECX,ECX
// 004de809: JLE 0x004de848
//   XREF to: 004de848 (CONDITIONAL_JUMP)
// 004de80b: MOV EAX,ECX
// 004de80d: NEG EAX
// 004de80f: MOV EDI,ECX
// 004de811: ADD ECX,EAX
// 004de813: MOV EBX,ESI
// 004de815: MOV dword ptr [ESP + 0x3bc],ECX
// 004de81c: XOR EAX,EAX
//   Label: LAB_004de81c
// 004de81e: MOV AL,byte ptr [EBX]
// 004de820: PUSH EAX
// 004de821: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004de828: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004de82d: ADD ESP,0x4
// 004de830: CMP ESI,EAX
// 004de832: JNZ 0x004de83b
//   XREF to: 004de83b (CONDITIONAL_JUMP)
// 004de834: INC dword ptr [ESP + 0x228]
// 004de83b: MOV ECX,dword ptr [ESP + 0x3bc]
//   Label: LAB_004de83b
// 004de842: DEC EDI
// 004de843: INC EBX
// 004de844: CMP EDI,ECX
// 004de846: JG 0x004de81c
//   XREF to: 004de81c (CONDITIONAL_JUMP)
// 004de848: MOV EAX,dword ptr [ESP + 0x228]
//   Label: LAB_004de848
// 004de84f: MOV EBX,dword ptr [ESP + 0x224]
// 004de856: CMP EAX,EBX
// 004de858: JNZ 0x004de8a2
//   XREF to: 004de8a2 (CONDITIONAL_JUMP)
// 004de85a: MOV ESI,dword ptr [ESP + 0x21c]
// 004de861: XOR AL,BL
// 004de863: PUSH ESI
//   XREF to: 0062be95 (DATA)
// 004de864: MOV [0x02d831d8],AL
//   XREF to: 02d831d8 (WRITE)
// 004de869: CALL core_game.cpp_giveHeroWeapon_FUN_004dd870
//   XREF to: 004dd870 (UNCONDITIONAL_CALL)
// 004de86e: ADD ESP,0x4
// 004de871: MOV EDI,dword ptr [ESP + 0x220]
// 004de878: PUSH 0x40a00000
// 004de87d: PUSH EDI
// 004de87e: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004de883: PUSH EAX
//   XREF to: 02d81a9c (DATA)
// 004de884: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004de889: ADD ESP,0xc
// 004de88c: PUSH 0x62b9dd
//   XREF to: 0062b9dd (DATA)
// 004de891: PUSH 0x0
// 004de893: MOV EDX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004de899: PUSH EDX
//   XREF to: 03f6af64 (DATA)
// 004de89a: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004de89f: ADD ESP,0xc
// 004de8a2: PUSH 0x62bed3
//   Label: LAB_004de8a2
//   XREF to: 0062bed3 (DATA)
// 004de8a7: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004de8ac: ADD ESP,0x4
// 004de8af: PUSH 0x62bef3
//   XREF to: 0062bef3 (DATA)
// 004de8b4: MOV EBX,EAX
// 004de8b6: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004de8bb: MOV ECX,0x62bee9
//   XREF to: 0062bee9 (DATA)
// 004de8c0: MOV ESI,EAX
// 004de8c2: ADD ESP,0x4
// 004de8c5: MOV EDI,EAX
// 004de8c7: MOV dword ptr [ESP + 0x22c],ECX
//   XREF to: 0062bee9 (DATA)
// 004de8ce: MOV dword ptr [ESP + 0x230],EBX
// 004de8d5: SUB ECX,ECX
// 004de8d7: DEC ECX
// 004de8d8: XOR EAX,EAX
// 004de8da: SCASB.REPNE ES:EDI
// 004de8dc: NOT ECX
// 004de8de: DEC ECX
// 004de8df: XOR EBX,EBX
// 004de8e1: MOV dword ptr [ESP + 0x234],ECX
// 004de8e8: MOV dword ptr [ESP + 0x238],EBX
// 004de8ef: TEST ECX,ECX
// 004de8f1: JLE 0x004de930
//   XREF to: 004de930 (CONDITIONAL_JUMP)
// 004de8f3: MOV EAX,ECX
// 004de8f5: NEG EAX
// 004de8f7: MOV EDI,ECX
// 004de8f9: ADD ECX,EAX
// 004de8fb: MOV EBX,ESI
// 004de8fd: MOV dword ptr [ESP + 0x3c0],ECX
// 004de904: XOR EAX,EAX
//   Label: LAB_004de904
// 004de906: MOV AL,byte ptr [EBX]
// 004de908: PUSH EAX
// 004de909: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
// 004de910: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004de915: ADD ESP,0x4
// 004de918: CMP ESI,EAX
// 004de91a: JNZ 0x004de923
//   XREF to: 004de923 (CONDITIONAL_JUMP)
// 004de91c: INC dword ptr [ESP + 0x238]
// 004de923: MOV EAX,dword ptr [ESP + 0x3c0]
//   Label: LAB_004de923
// 004de92a: DEC EDI
// 004de92b: INC EBX
// 004de92c: CMP EDI,EAX
// 004de92e: JG 0x004de904
//   XREF to: 004de904 (CONDITIONAL_JUMP)
// 004de930: MOV EAX,dword ptr [ESP + 0x238]
//   Label: LAB_004de930
// 004de937: MOV EDX,dword ptr [ESP + 0x234]
// 004de93e: CMP EAX,EDX
// 004de940: JNZ 0x004de98c
//   XREF to: 004de98c (CONDITIONAL_JUMP)
// 004de942: MOV ECX,dword ptr [ESP + 0x22c]
//   XREF to: 0062bee9 (PARAM)
// 004de949: XOR AH,DH
// 004de94b: PUSH ECX
//   XREF to: 0062bee9 (DATA)
// 004de94c: MOV byte ptr [0x02d831d8],AH
//   XREF to: 02d831d8 (WRITE)
// 004de952: CALL core_game.cpp_giveHeroWeapon_FUN_004dd870
//   XREF to: 004dd870 (UNCONDITIONAL_CALL)
// 004de957: ADD ESP,0x4
// 004de95a: MOV EBX,dword ptr [ESP + 0x230]
// 004de961: PUSH 0x40a00000
// 004de966: PUSH EBX
// 004de967: MOV ESI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 004de96d: PUSH ESI
//   XREF to: 02d81a9c (DATA)
// 004de96e: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004de973: ADD ESP,0xc
// 004de976: PUSH 0x62b9dd
//   XREF to: 0062b9dd (DATA)
// 004de97b: PUSH 0x0
// 004de97d: MOV EDI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 004de983: PUSH EDI
//   XREF to: 03f6af64 (DATA)
// 004de984: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004de989: ADD ESP,0xc
// 004de98c: PUSH 0x62bf29
//   Label: LAB_004de98c
//   XREF to: 0062bf29 (DATA)
// 004de991: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004de996: ADD ESP,0x4
// 004de999: PUSH 0x62bf3e
//   XREF to: 0062bf3e (DATA)
// 004de99e: MOV EBX,EAX
// 004de9a0: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004de9a5: MOV ESI,EAX
// 004de9a7: ADD ESP,0x4
// 004de9aa: XOR EDX,EDX
// 004de9ac: MOV EAX,0x62bf34
//   XREF to: 0062bf34 (DATA)
// 004de9b1: MOV dword ptr [ESP + 0x240],EBX
// 004de9b8: MOV dword ptr [ESP + 0x248],EDX
// 004de9bf: MOV EDI,ESI
// 004de9c1: MOV dword ptr [ESP + 0x23c],EAX
//   XREF to: 0062bf34 (DATA)
// 004de9c8: SUB ECX,ECX
// 004de9ca: DEC ECX
// 004de9cb: XOR EAX,EAX
// 004de9cd: SCASB.REPNE ES:EDI
// 004de9cf: NOT ECX
// 004de9d1: DEC ECX
// 004de9d2: MOV dword ptr [ESP + 0x244],ECX
// 004de9d9: TEST ECX,ECX
// 004de9db: JLE 0x004dea1a
//   XREF to: 004dea1a (CONDITIONAL_JUMP)
// 004de9dd: MOV EAX,ECX
// 004de9df: NEG EAX
// 004de9e1: MOV EDI,ECX
// 004de9e3: ADD ECX,EAX
// 004de9e5: MOV EBX,ESI
// 004de9e7: MOV dword ptr [ESP + 0x3c4],ECX
// 004de9ee: XOR EAX,EAX
//   Label: LAB_004de9ee
// 004de9f0: MOV AL,byte ptr [EBX]
// 004de9f2: PUSH EAX
// 004de9f3: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004de9fa: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004de9ff: ADD ESP,0x4
// 004dea02: CMP ESI,EAX
// 004dea04: JNZ 0x004dea0d
//   XREF to: 004dea0d (CONDITIONAL_JUMP)
// 004dea06: INC dword ptr [ESP + 0x248]
// 004dea0d: MOV ESI,dword ptr [ESP + 0x3c4]
//   Label: LAB_004dea0d
// 004dea14: DEC EDI
// 004dea15: INC EBX
// 004dea16: CMP EDI,ESI
// 004dea18: JG 0x004de9ee
//   XREF to: 004de9ee (CONDITIONAL_JUMP)
// 004dea1a: MOV EAX,dword ptr [ESP + 0x248]
//   Label: LAB_004dea1a
// 004dea21: CMP EAX,dword ptr [ESP + 0x244]
// 004dea28: JNZ 0x004dea74
//   XREF to: 004dea74 (CONDITIONAL_JUMP)
// 004dea2a: MOV EAX,dword ptr [ESP + 0x23c]
//   XREF to: 0062bf34 (PARAM)
// 004dea31: XOR DL,DL
// 004dea33: PUSH EAX
//   XREF to: 0062bf34 (DATA)
// 004dea34: MOV byte ptr [0x02d831d8],DL
//   XREF to: 02d831d8 (WRITE)
// 004dea3a: CALL core_game.cpp_giveHeroWeapon_FUN_004dd870
//   XREF to: 004dd870 (UNCONDITIONAL_CALL)
// 004dea3f: ADD ESP,0x4
// 004dea42: MOV EDX,dword ptr [ESP + 0x240]
// 004dea49: PUSH 0x40a00000
// 004dea4e: PUSH EDX
// 004dea4f: MOV ECX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004dea55: PUSH ECX
//   XREF to: 02d81a9c (DATA)
// 004dea56: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004dea5b: ADD ESP,0xc
// 004dea5e: PUSH 0x62b9dd
//   XREF to: 0062b9dd (DATA)
// 004dea63: PUSH 0x0
// 004dea65: MOV EBX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004dea6b: PUSH EBX
//   XREF to: 03f6af64 (DATA)
// 004dea6c: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004dea71: ADD ESP,0xc
// 004dea74: PUSH 0x62bf72
//   Label: LAB_004dea74
//   XREF to: 0062bf72 (DATA)
// 004dea79: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004dea7e: ADD ESP,0x4
// 004dea81: PUSH 0x62bf92
//   XREF to: 0062bf92 (DATA)
// 004dea86: MOV EDI,0x62bf84
//   XREF to: 0062bf84 (DATA)
// 004dea8b: MOV EBX,EAX
// 004dea8d: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004dea92: ADD ESP,0x4
// 004dea95: MOV ESI,EAX
// 004dea97: MOV dword ptr [ESP + 0x24c],EDI
//   XREF to: 0062bf84 (DATA)
// 004dea9e: MOV dword ptr [ESP + 0x250],EBX
// 004deaa5: XOR EAX,EAX
// 004deaa7: MOV EDI,ESI
// 004deaa9: MOV dword ptr [ESP + 0x258],EAX
// 004deab0: SUB ECX,ECX
// 004deab2: DEC ECX
// 004deab3: XOR EAX,EAX
// 004deab5: SCASB.REPNE ES:EDI
// 004deab7: NOT ECX
// 004deab9: DEC ECX
// 004deaba: MOV dword ptr [ESP + 0x254],ECX
// 004deac1: TEST ECX,ECX
// 004deac3: JLE 0x004deb02
//   XREF to: 004deb02 (CONDITIONAL_JUMP)
// 004deac5: MOV EAX,ECX
// 004deac7: NEG EAX
// 004deac9: MOV EDI,ECX
// 004deacb: ADD ECX,EAX
// 004deacd: MOV EBX,ESI
// 004deacf: MOV dword ptr [ESP + 0x3c8],ECX
// 004dead6: XOR EAX,EAX
//   Label: LAB_004dead6
// 004dead8: MOV AL,byte ptr [EBX]
// 004deada: PUSH EAX
// 004deadb: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004deae2: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004deae7: ADD ESP,0x4
// 004deaea: CMP ESI,EAX
// 004deaec: JNZ 0x004deaf5
//   XREF to: 004deaf5 (CONDITIONAL_JUMP)
// 004deaee: INC dword ptr [ESP + 0x258]
// 004deaf5: MOV ECX,dword ptr [ESP + 0x3c8]
//   Label: LAB_004deaf5
// 004deafc: DEC EDI
// 004deafd: INC EBX
// 004deafe: CMP EDI,ECX
// 004deb00: JG 0x004dead6
//   XREF to: 004dead6 (CONDITIONAL_JUMP)
// 004deb02: MOV EAX,dword ptr [ESP + 0x258]
//   Label: LAB_004deb02
// 004deb09: CMP EAX,dword ptr [ESP + 0x254]
// 004deb10: JNZ 0x004deb5b
//   XREF to: 004deb5b (CONDITIONAL_JUMP)
// 004deb12: MOV ESI,dword ptr [ESP + 0x24c]
// 004deb19: XOR DH,DH
// 004deb1b: PUSH ESI
//   XREF to: 0062bf84 (DATA)
// 004deb1c: MOV byte ptr [0x02d831d8],DH
//   XREF to: 02d831d8 (WRITE)
// 004deb22: CALL core_game.cpp_giveHeroWeapon_FUN_004dd870
//   XREF to: 004dd870 (UNCONDITIONAL_CALL)
// 004deb27: ADD ESP,0x4
// 004deb2a: MOV EDI,dword ptr [ESP + 0x250]
// 004deb31: PUSH 0x40a00000
// 004deb36: PUSH EDI
// 004deb37: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004deb3c: PUSH EAX
//   XREF to: 02d81a9c (DATA)
// 004deb3d: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004deb42: ADD ESP,0xc
// 004deb45: PUSH 0x62b9dd
//   XREF to: 0062b9dd (DATA)
// 004deb4a: PUSH 0x0
// 004deb4c: MOV EDX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004deb52: PUSH EDX
//   XREF to: 03f6af64 (DATA)
// 004deb53: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004deb58: ADD ESP,0xc
// 004deb5b: PUSH 0x62bfc8
//   Label: LAB_004deb5b
//   XREF to: 0062bfc8 (DATA)
// 004deb60: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004deb65: ADD ESP,0x4
// 004deb68: PUSH 0x62bfe9
//   XREF to: 0062bfe9 (DATA)
// 004deb6d: MOV EBX,EAX
// 004deb6f: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004deb74: MOV ECX,0x62bfdf
//   XREF to: 0062bfdf (DATA)
// 004deb79: MOV ESI,EAX
// 004deb7b: ADD ESP,0x4
// 004deb7e: MOV EDI,EAX
// 004deb80: MOV dword ptr [ESP + 0x25c],ECX
//   XREF to: 0062bfdf (DATA)
// 004deb87: MOV dword ptr [ESP + 0x260],EBX
// 004deb8e: SUB ECX,ECX
// 004deb90: DEC ECX
// 004deb91: XOR EAX,EAX
// 004deb93: SCASB.REPNE ES:EDI
// 004deb95: NOT ECX
// 004deb97: DEC ECX
// 004deb98: XOR EBX,EBX
// 004deb9a: MOV dword ptr [ESP + 0x264],ECX
// 004deba1: MOV dword ptr [ESP + 0x268],EBX
// 004deba8: TEST ECX,ECX
// 004debaa: JLE 0x004debe9
//   XREF to: 004debe9 (CONDITIONAL_JUMP)
// 004debac: MOV EAX,ECX
// 004debae: NEG EAX
// 004debb0: MOV EDI,ECX
// 004debb2: ADD ECX,EAX
// 004debb4: MOV EBX,ESI
// 004debb6: MOV dword ptr [ESP + 0x3cc],ECX
// 004debbd: XOR EAX,EAX
//   Label: LAB_004debbd
// 004debbf: MOV AL,byte ptr [EBX]
// 004debc1: PUSH EAX
// 004debc2: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
// 004debc9: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004debce: ADD ESP,0x4
// 004debd1: CMP ESI,EAX
// 004debd3: JNZ 0x004debdc
//   XREF to: 004debdc (CONDITIONAL_JUMP)
// 004debd5: INC dword ptr [ESP + 0x268]
// 004debdc: MOV EAX,dword ptr [ESP + 0x3cc]
//   Label: LAB_004debdc
// 004debe3: DEC EDI
// 004debe4: INC EBX
// 004debe5: CMP EDI,EAX
// 004debe7: JG 0x004debbd
//   XREF to: 004debbd (CONDITIONAL_JUMP)
// 004debe9: MOV EAX,dword ptr [ESP + 0x268]
//   Label: LAB_004debe9
// 004debf0: CMP EAX,dword ptr [ESP + 0x264]
// 004debf7: JNZ 0x004dec43
//   XREF to: 004dec43 (CONDITIONAL_JUMP)
// 004debf9: MOV ECX,dword ptr [ESP + 0x25c]
//   XREF to: 0062bfdf (PARAM)
// 004dec00: XOR BL,BL
// 004dec02: PUSH ECX
//   XREF to: 0062bfdf (DATA)
// 004dec03: MOV byte ptr [0x02d831d8],BL
//   XREF to: 02d831d8 (WRITE)
// 004dec09: CALL core_game.cpp_giveHeroWeapon_FUN_004dd870
//   XREF to: 004dd870 (UNCONDITIONAL_CALL)
// 004dec0e: ADD ESP,0x4
// 004dec11: MOV EBX,dword ptr [ESP + 0x260]
// 004dec18: PUSH 0x40a00000
// 004dec1d: PUSH EBX
// 004dec1e: MOV ESI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 004dec24: PUSH ESI
//   XREF to: 02d81a9c (DATA)
// 004dec25: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004dec2a: ADD ESP,0xc
// 004dec2d: PUSH 0x62b9dd
//   XREF to: 0062b9dd (DATA)
// 004dec32: PUSH 0x0
// 004dec34: MOV EDI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 004dec3a: PUSH EDI
//   XREF to: 03f6af64 (DATA)
// 004dec3b: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004dec40: ADD ESP,0xc
// 004dec43: PUSH 0x62c021
//   Label: LAB_004dec43
//   XREF to: 0062c021 (DATA)
// 004dec48: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004dec4d: ADD ESP,0x4
// 004dec50: PUSH 0x62c04b
//   XREF to: 0062c04b (DATA)
// 004dec55: MOV EBX,EAX
// 004dec57: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004dec5c: MOV ESI,EAX
// 004dec5e: ADD ESP,0x4
// 004dec61: XOR EDX,EDX
// 004dec63: MOV EAX,0x62c03e
//   XREF to: 0062c03e (DATA)
// 004dec68: MOV dword ptr [ESP + 0x270],EBX
// 004dec6f: MOV dword ptr [ESP + 0x278],EDX
// 004dec76: MOV EDI,ESI
// 004dec78: MOV dword ptr [ESP + 0x26c],EAX
//   XREF to: 0062c03e (DATA)
// 004dec7f: SUB ECX,ECX
// 004dec81: DEC ECX
// 004dec82: XOR EAX,EAX
// 004dec84: SCASB.REPNE ES:EDI
// 004dec86: NOT ECX
// 004dec88: DEC ECX
// 004dec89: MOV dword ptr [ESP + 0x274],ECX
// 004dec90: TEST ECX,ECX
// 004dec92: JLE 0x004decd1
//   XREF to: 004decd1 (CONDITIONAL_JUMP)
// 004dec94: MOV EAX,ECX
// 004dec96: NEG EAX
// 004dec98: MOV EDI,ECX
// 004dec9a: ADD ECX,EAX
// 004dec9c: MOV EBX,ESI
// 004dec9e: MOV dword ptr [ESP + 0x3d0],ECX
// 004deca5: XOR EAX,EAX
//   Label: LAB_004deca5
// 004deca7: MOV AL,byte ptr [EBX]
// 004deca9: PUSH EAX
// 004decaa: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004decb1: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004decb6: ADD ESP,0x4
// 004decb9: CMP ESI,EAX
// 004decbb: JNZ 0x004decc4
//   XREF to: 004decc4 (CONDITIONAL_JUMP)
// 004decbd: INC dword ptr [ESP + 0x278]
// 004decc4: MOV ESI,dword ptr [ESP + 0x3d0]
//   Label: LAB_004decc4
// 004deccb: DEC EDI
// 004deccc: INC EBX
// 004deccd: CMP EDI,ESI
// 004deccf: JG 0x004deca5
//   XREF to: 004deca5 (CONDITIONAL_JUMP)
// 004decd1: MOV EAX,dword ptr [ESP + 0x278]
//   Label: LAB_004decd1
// 004decd8: CMP EAX,dword ptr [ESP + 0x274]
// 004decdf: JNZ 0x004ded2b
//   XREF to: 004ded2b (CONDITIONAL_JUMP)
// 004dece1: MOV EAX,dword ptr [ESP + 0x26c]
//   XREF to: 0062c03e (PARAM)
// 004dece8: XOR BH,BH
// 004decea: PUSH EAX
//   XREF to: 0062c03e (DATA)
// 004deceb: MOV byte ptr [0x02d831d8],BH
//   XREF to: 02d831d8 (WRITE)
// 004decf1: CALL core_game.cpp_giveHeroWeapon_FUN_004dd870
//   XREF to: 004dd870 (UNCONDITIONAL_CALL)
// 004decf6: ADD ESP,0x4
// 004decf9: MOV EDX,dword ptr [ESP + 0x270]
// 004ded00: PUSH 0x40a00000
// 004ded05: PUSH EDX
// 004ded06: MOV ECX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004ded0c: PUSH ECX
//   XREF to: 02d81a9c (DATA)
// 004ded0d: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004ded12: ADD ESP,0xc
// 004ded15: PUSH 0x62b9dd
//   XREF to: 0062b9dd (DATA)
// 004ded1a: PUSH 0x0
// 004ded1c: MOV EBX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004ded22: PUSH EBX
//   XREF to: 03f6af64 (DATA)
// 004ded23: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004ded28: ADD ESP,0xc
// 004ded2b: PUSH 0x62c081
//   Label: LAB_004ded2b
//   XREF to: 0062c081 (DATA)
// 004ded30: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004ded35: ADD ESP,0x4
// 004ded38: PUSH 0x62c0a8
//   XREF to: 0062c0a8 (DATA)
// 004ded3d: MOV EDI,0x62c09b
//   XREF to: 0062c09b (DATA)
// 004ded42: MOV EBX,EAX
// 004ded44: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004ded49: ADD ESP,0x4
// 004ded4c: MOV ESI,EAX
// 004ded4e: MOV dword ptr [ESP + 0x27c],EDI
//   XREF to: 0062c09b (DATA)
// 004ded55: MOV dword ptr [ESP + 0x280],EBX
// 004ded5c: XOR EAX,EAX
// 004ded5e: MOV EDI,ESI
// 004ded60: MOV dword ptr [ESP + 0x288],EAX
// 004ded67: SUB ECX,ECX
// 004ded69: DEC ECX
// 004ded6a: XOR EAX,EAX
// 004ded6c: SCASB.REPNE ES:EDI
// 004ded6e: NOT ECX
// 004ded70: DEC ECX
// 004ded71: MOV dword ptr [ESP + 0x284],ECX
// 004ded78: TEST ECX,ECX
// 004ded7a: JLE 0x004dedb9
//   XREF to: 004dedb9 (CONDITIONAL_JUMP)
// 004ded7c: MOV EAX,ECX
// 004ded7e: NEG EAX
// 004ded80: MOV EDI,ECX
// 004ded82: ADD ECX,EAX
// 004ded84: MOV EBX,ESI
// 004ded86: MOV dword ptr [ESP + 0x3d4],ECX
// 004ded8d: XOR EAX,EAX
//   Label: LAB_004ded8d
// 004ded8f: MOV AL,byte ptr [EBX]
// 004ded91: PUSH EAX
// 004ded92: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004ded99: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004ded9e: ADD ESP,0x4
// 004deda1: CMP ESI,EAX
// 004deda3: JNZ 0x004dedac
//   XREF to: 004dedac (CONDITIONAL_JUMP)
// 004deda5: INC dword ptr [ESP + 0x288]
// 004dedac: MOV ECX,dword ptr [ESP + 0x3d4]
//   Label: LAB_004dedac
// 004dedb3: DEC EDI
// 004dedb4: INC EBX
// 004dedb5: CMP EDI,ECX
// 004dedb7: JG 0x004ded8d
//   XREF to: 004ded8d (CONDITIONAL_JUMP)
// 004dedb9: MOV EAX,dword ptr [ESP + 0x288]
//   Label: LAB_004dedb9
// 004dedc0: CMP EAX,dword ptr [ESP + 0x284]
// 004dedc7: JNZ 0x004dee12
//   XREF to: 004dee12 (CONDITIONAL_JUMP)
// 004dedc9: MOV ESI,dword ptr [ESP + 0x27c]
// 004dedd0: XOR CL,CL
// 004dedd2: PUSH ESI
//   XREF to: 0062c09b (DATA)
// 004dedd3: MOV byte ptr [0x02d831d8],CL
//   XREF to: 02d831d8 (WRITE)
// 004dedd9: CALL core_game.cpp_giveHeroWeapon_FUN_004dd870
//   XREF to: 004dd870 (UNCONDITIONAL_CALL)
// 004dedde: ADD ESP,0x4
// 004dede1: MOV EDI,dword ptr [ESP + 0x280]
// 004dede8: PUSH 0x40a00000
// 004deded: PUSH EDI
// 004dedee: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004dedf3: PUSH EAX
//   XREF to: 02d81a9c (DATA)
// 004dedf4: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004dedf9: ADD ESP,0xc
// 004dedfc: PUSH 0x62b9dd
//   XREF to: 0062b9dd (DATA)
// 004dee01: PUSH 0x0
// 004dee03: MOV EDX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004dee09: PUSH EDX
//   XREF to: 03f6af64 (DATA)
// 004dee0a: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004dee0f: ADD ESP,0xc
// 004dee12: PUSH 0x62c0dc
//   Label: LAB_004dee12
//   XREF to: 0062c0dc (DATA)
// 004dee17: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004dee1c: ADD ESP,0x4
// 004dee1f: PUSH 0x62c10c
//   XREF to: 0062c10c (DATA)
// 004dee24: MOV EBX,EAX
// 004dee26: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004dee2b: MOV ECX,0x62c102
//   XREF to: 0062c102 (DATA)
// 004dee30: MOV ESI,EAX
// 004dee32: ADD ESP,0x4
// 004dee35: MOV EDI,EAX
// 004dee37: MOV dword ptr [ESP + 0x28c],ECX
//   XREF to: 0062c102 (DATA)
// 004dee3e: MOV dword ptr [ESP + 0x290],EBX
// 004dee45: SUB ECX,ECX
// 004dee47: DEC ECX
// 004dee48: XOR EAX,EAX
// 004dee4a: SCASB.REPNE ES:EDI
// 004dee4c: NOT ECX
// 004dee4e: DEC ECX
// 004dee4f: XOR EBX,EBX
// 004dee51: MOV dword ptr [ESP + 0x294],ECX
// 004dee58: MOV dword ptr [ESP + 0x298],EBX
// 004dee5f: TEST ECX,ECX
// 004dee61: JLE 0x004deea0
//   XREF to: 004deea0 (CONDITIONAL_JUMP)
// 004dee63: MOV EAX,ECX
// 004dee65: NEG EAX
// 004dee67: MOV EDI,ECX
// 004dee69: ADD ECX,EAX
// 004dee6b: MOV EBX,ESI
// 004dee6d: MOV dword ptr [ESP + 0x3d8],ECX
// 004dee74: XOR EAX,EAX
//   Label: LAB_004dee74
// 004dee76: MOV AL,byte ptr [EBX]
// 004dee78: PUSH EAX
// 004dee79: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
// 004dee80: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004dee85: ADD ESP,0x4
// 004dee88: CMP ESI,EAX
// 004dee8a: JNZ 0x004dee93
//   XREF to: 004dee93 (CONDITIONAL_JUMP)
// 004dee8c: INC dword ptr [ESP + 0x298]
// 004dee93: MOV EAX,dword ptr [ESP + 0x3d8]
//   Label: LAB_004dee93
// 004dee9a: DEC EDI
// 004dee9b: INC EBX
// 004dee9c: CMP EDI,EAX
// 004dee9e: JG 0x004dee74
//   XREF to: 004dee74 (CONDITIONAL_JUMP)
// 004deea0: MOV EAX,dword ptr [ESP + 0x298]
//   Label: LAB_004deea0
// 004deea7: CMP EAX,dword ptr [ESP + 0x294]
// 004deeae: JNZ 0x004deefa
//   XREF to: 004deefa (CONDITIONAL_JUMP)
// 004deeb0: XOR CH,CH
// 004deeb2: MOV byte ptr [0x02d831d8],CH
//   XREF to: 02d831d8 (WRITE)
// 004deeb8: MOV ECX,dword ptr [ESP + 0x28c]
//   XREF to: 0062c102 (PARAM)
// 004deebf: PUSH ECX
//   XREF to: 0062c102 (DATA)
// 004deec0: CALL core_game.cpp_giveHeroWeapon_FUN_004dd870
//   XREF to: 004dd870 (UNCONDITIONAL_CALL)
// 004deec5: ADD ESP,0x4
// 004deec8: MOV EBX,dword ptr [ESP + 0x290]
// 004deecf: PUSH 0x40a00000
// 004deed4: PUSH EBX
// 004deed5: MOV ESI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 004deedb: PUSH ESI
//   XREF to: 02d81a9c (DATA)
// 004deedc: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004deee1: ADD ESP,0xc
// 004deee4: PUSH 0x62b9dd
//   XREF to: 0062b9dd (DATA)
// 004deee9: PUSH 0x0
// 004deeeb: MOV EDI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 004deef1: PUSH EDI
//   XREF to: 03f6af64 (DATA)
// 004deef2: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004deef7: ADD ESP,0xc
// 004deefa: PUSH 0x62c141
//   Label: LAB_004deefa
//   XREF to: 0062c141 (DATA)
// 004deeff: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004def04: MOV EBX,EAX
// 004def06: ADD ESP,0x4
// 004def09: XOR EAX,EAX
// 004def0b: MOV EDI,EBX
// 004def0d: MOV dword ptr [ESP + 0x2a0],EAX
// 004def14: SUB ECX,ECX
// 004def16: DEC ECX
// 004def17: XOR EAX,EAX
// 004def19: SCASB.REPNE ES:EDI
// 004def1b: NOT ECX
// 004def1d: DEC ECX
// 004def1e: MOV dword ptr [ESP + 0x29c],ECX
// 004def25: TEST ECX,ECX
// 004def27: JLE 0x004def64
//   XREF to: 004def64 (CONDITIONAL_JUMP)
// 004def29: MOV EAX,ECX
// 004def2b: NEG EAX
// 004def2d: MOV EDI,ECX
// 004def2f: ADD ECX,EAX
// 004def31: MOV dword ptr [ESP + 0x3dc],ECX
// 004def38: XOR EAX,EAX
//   Label: LAB_004def38
// 004def3a: MOV AL,byte ptr [EBX]
// 004def3c: PUSH EAX
// 004def3d: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004def44: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004def49: ADD ESP,0x4
// 004def4c: CMP ESI,EAX
// 004def4e: JNZ 0x004def57
//   XREF to: 004def57 (CONDITIONAL_JUMP)
// 004def50: INC dword ptr [ESP + 0x2a0]
// 004def57: MOV ECX,dword ptr [ESP + 0x3dc]
//   Label: LAB_004def57
// 004def5e: DEC EDI
// 004def5f: INC EBX
// 004def60: CMP EDI,ECX
// 004def62: JG 0x004def38
//   XREF to: 004def38 (CONDITIONAL_JUMP)
// 004def64: MOV EAX,dword ptr [ESP + 0x2a0]
//   Label: LAB_004def64
// 004def6b: MOV EBX,dword ptr [ESP + 0x29c]
// 004def72: CMP EAX,EBX
// 004def74: JNZ 0x004df06d
//   XREF to: 004df06d (CONDITIONAL_JUMP)
// 004def7a: PUSH 0x3
// 004def7c: XOR AL,BL
// 004def7e: PUSH 0x62c177
//   XREF to: 0062c177 (DATA)
// 004def83: MOV [0x02d831d8],AL
//   XREF to: 02d831d8 (WRITE)
// 004def88: CALL core_game.cpp_FUN_004dd930
//   XREF to: 004dd930 (UNCONDITIONAL_CALL)
// 004def8d: ADD ESP,0x8
// 004def90: PUSH 0x7
// 004def92: PUSH 0x62c17c
//   XREF to: 0062c17c (DATA)
// 004def97: CALL core_game.cpp_FUN_004dd930
//   XREF to: 004dd930 (UNCONDITIONAL_CALL)
// 004def9c: ADD ESP,0x8
// 004def9f: PUSH 0x8
// 004defa1: PUSH 0x62c181
//   XREF to: 0062c181 (DATA)
// 004defa6: CALL core_game.cpp_FUN_004dd930
//   XREF to: 004dd930 (UNCONDITIONAL_CALL)
// 004defab: ADD ESP,0x8
// 004defae: PUSH 0x62c186
//   XREF to: 0062c186 (DATA)
// 004defb3: CALL core_game.cpp_giveHeroWeapon_FUN_004dd870
//   XREF to: 004dd870 (UNCONDITIONAL_CALL)
// 004defb8: ADD ESP,0x4
// 004defbb: PUSH 0x62c18f
//   XREF to: 0062c18f (DATA)
// 004defc0: CALL core_game.cpp_giveHeroWeapon_FUN_004dd870
//   XREF to: 004dd870 (UNCONDITIONAL_CALL)
// 004defc5: ADD ESP,0x4
// 004defc8: PUSH 0x1
// 004defca: PUSH 0x62c199
//   XREF to: 0062c199 (DATA)
// 004defcf: CALL core_game.cpp_FUN_004dd930
//   XREF to: 004dd930 (UNCONDITIONAL_CALL)
// 004defd4: ADD ESP,0x8
// 004defd7: PUSH 0x62c1a3
//   XREF to: 0062c1a3 (DATA)
// 004defdc: CALL core_game.cpp_giveHeroWeapon_FUN_004dd870
//   XREF to: 004dd870 (UNCONDITIONAL_CALL)
// 004defe1: ADD ESP,0x4
// 004defe4: PUSH 0x62c1ad
//   XREF to: 0062c1ad (DATA)
// 004defe9: CALL core_game.cpp_giveHeroWeapon_FUN_004dd870
//   XREF to: 004dd870 (UNCONDITIONAL_CALL)
// 004defee: ADD ESP,0x4
// 004deff1: PUSH 0x62c1bb
//   XREF to: 0062c1bb (DATA)
// 004deff6: CALL core_game.cpp_giveHeroWeapon_FUN_004dd870
//   XREF to: 004dd870 (UNCONDITIONAL_CALL)
// 004deffb: ADD ESP,0x4
// 004deffe: PUSH 0x62c1c5
//   XREF to: 0062c1c5 (DATA)
// 004df003: CALL core_game.cpp_giveHeroWeapon_FUN_004dd870
//   XREF to: 004dd870 (UNCONDITIONAL_CALL)
// 004df008: ADD ESP,0x4
// 004df00b: PUSH 0x62c1d2
//   XREF to: 0062c1d2 (DATA)
// 004df010: CALL core_game.cpp_giveHeroWeapon_FUN_004dd870
//   XREF to: 004dd870 (UNCONDITIONAL_CALL)
// 004df015: ADD ESP,0x4
// 004df018: PUSH 0x40a00000
// 004df01d: PUSH 0x62c1dc
//   XREF to: 0062c1dc (DATA)
// 004df022: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004df027: ADD ESP,0x4
// 004df02a: PUSH EAX
// 004df02b: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004df02e: PUSH ESI
// 004df02f: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004df034: ADD ESP,0xc
// 004df037: PUSH 0x62c1f7
//   XREF to: 0062c1f7 (DATA)
// 004df03c: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004df041: MOV dword ptr [ESI + 0x1d0],0x1
// 004df04b: PUSH 0x0
// 004df04d: MOV EDI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 004df053: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004df05a: PUSH EDI
//   XREF to: 03f6af64 (DATA)
// 004df05b: MOV dword ptr [EAX + 0x243c],0x42c80000
// 004df065: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004df06a: ADD ESP,0xc
// 004df06d: PUSH 0x62c203
//   Label: LAB_004df06d
//   XREF to: 0062c203 (DATA)
// 004df072: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004df077: MOV EBX,EAX
// 004df079: ADD ESP,0x4
// 004df07c: XOR EAX,EAX
// 004df07e: MOV EDI,EBX
// 004df080: MOV dword ptr [ESP + 0x2a8],EAX
// 004df087: SUB ECX,ECX
// 004df089: DEC ECX
// 004df08a: XOR EAX,EAX
// 004df08c: SCASB.REPNE ES:EDI
// 004df08e: NOT ECX
// 004df090: DEC ECX
// 004df091: MOV dword ptr [ESP + 0x2a4],ECX
// 004df098: TEST ECX,ECX
// 004df09a: JLE 0x004df0d7
//   XREF to: 004df0d7 (CONDITIONAL_JUMP)
// 004df09c: MOV EAX,ECX
// 004df09e: NEG EAX
// 004df0a0: MOV EDI,ECX
// 004df0a2: ADD ECX,EAX
// 004df0a4: MOV dword ptr [ESP + 0x3e0],ECX
// 004df0ab: XOR EAX,EAX
//   Label: LAB_004df0ab
// 004df0ad: MOV AL,byte ptr [EBX]
// 004df0af: PUSH EAX
// 004df0b0: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004df0b7: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004df0bc: ADD ESP,0x4
// 004df0bf: CMP ESI,EAX
// 004df0c1: JNZ 0x004df0ca
//   XREF to: 004df0ca (CONDITIONAL_JUMP)
// 004df0c3: INC dword ptr [ESP + 0x2a8]
// 004df0ca: MOV ECX,dword ptr [ESP + 0x3e0]
//   Label: LAB_004df0ca
// 004df0d1: DEC EDI
// 004df0d2: INC EBX
// 004df0d3: CMP EDI,ECX
// 004df0d5: JG 0x004df0ab
//   XREF to: 004df0ab (CONDITIONAL_JUMP)
// 004df0d7: MOV EAX,dword ptr [ESP + 0x2a8]
//   Label: LAB_004df0d7
// 004df0de: MOV EBX,dword ptr [ESP + 0x2a4]
// 004df0e5: CMP EAX,EBX
// 004df0e7: JNZ 0x004df142
//   XREF to: 004df142 (CONDITIONAL_JUMP)
// 004df0e9: XOR AH,BH
// 004df0eb: MOV byte ptr [0x02d831d8],AH
//   XREF to: 02d831d8 (WRITE)
// 004df0f1: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004df0f6: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004df0fd: MOV EAX,dword ptr [EAX + 0x1fa68]
// 004df103: TEST EAX,EAX
// 004df105: JZ 0x004df10e
//   XREF to: 004df10e (CONDITIONAL_JUMP)
// 004df107: ADD dword ptr [EAX + 0x568],0x64
// 004df10e: PUSH 0x40a00000
//   Label: LAB_004df10e
// 004df113: PUSH 0x62c239
//   XREF to: 0062c239 (DATA)
// 004df118: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004df11d: ADD ESP,0x4
// 004df120: PUSH EAX
// 004df121: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004df124: PUSH EDI
// 004df125: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004df12a: ADD ESP,0xc
// 004df12d: PUSH 0x62c257
//   XREF to: 0062c257 (DATA)
// 004df132: PUSH 0x0
// 004df134: MOV EAX,[0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004df139: PUSH EAX
//   XREF to: 03f6af64 (DATA)
// 004df13a: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004df13f: ADD ESP,0xc
// 004df142: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004df142
//   XREF to: Stack[0x4] (READ)
// 004df145: CMP dword ptr [EAX + 0x210],0x0
// 004df14c: JZ 0x004df408
//   XREF to: 004df408 (CONDITIONAL_JUMP)
// 004df152: PUSH 0x62c263
//   XREF to: 0062c263 (DATA)
// 004df157: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004df15c: MOV EBX,EAX
// 004df15e: ADD ESP,0x4
// 004df161: XOR ECX,ECX
// 004df163: MOV EDI,EAX
// 004df165: MOV dword ptr [ESP + 0x2b0],ECX
// 004df16c: SUB ECX,ECX
// 004df16e: DEC ECX
// 004df16f: XOR EAX,EAX
// 004df171: SCASB.REPNE ES:EDI
// 004df173: NOT ECX
// 004df175: DEC ECX
// 004df176: MOV dword ptr [ESP + 0x2ac],ECX
// 004df17d: TEST ECX,ECX
// 004df17f: JLE 0x004df1be
//   XREF to: 004df1be (CONDITIONAL_JUMP)
// 004df181: MOV EAX,ECX
// 004df183: MOV ESI,EBX
// 004df185: NEG EAX
// 004df187: MOV EBX,ECX
// 004df189: ADD ECX,EAX
// 004df18b: MOV dword ptr [ESP + 0x3e4],ECX
// 004df192: XOR EAX,EAX
//   Label: LAB_004df192
// 004df194: MOV AL,byte ptr [ESI]
// 004df196: PUSH EAX
// 004df197: MOVZX EDI,byte ptr [EBX + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004df19e: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004df1a3: ADD ESP,0x4
// 004df1a6: CMP EDI,EAX
// 004df1a8: JNZ 0x004df1b1
//   XREF to: 004df1b1 (CONDITIONAL_JUMP)
// 004df1aa: INC dword ptr [ESP + 0x2b0]
// 004df1b1: MOV EDI,dword ptr [ESP + 0x3e4]
//   Label: LAB_004df1b1
// 004df1b8: DEC EBX
// 004df1b9: INC ESI
// 004df1ba: CMP EBX,EDI
// 004df1bc: JG 0x004df192
//   XREF to: 004df192 (CONDITIONAL_JUMP)
// 004df1be: MOV EAX,dword ptr [ESP + 0x2b0]
//   Label: LAB_004df1be
// 004df1c5: CMP EAX,dword ptr [ESP + 0x2ac]
// 004df1cc: JNZ 0x004df3dd
//   XREF to: 004df3dd (CONDITIONAL_JUMP)
// 004df1d2: XOR DL,DL
// 004df1d4: MOV byte ptr [0x02d831d8],DL
//   XREF to: 02d831d8 (WRITE)
// 004df1da: PUSH 0x62c296
//   Label: LAB_004df1da
//   XREF to: 0062c296 (DATA)
// 004df1df: PUSH 0x0
// 004df1e1: MOV ECX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004df1e7: PUSH ECX
//   XREF to: 03f6af64 (DATA)
// 004df1e8: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004df1ed: ADD ESP,0xc
// 004df1f0: MOV EDI,0x67b5f0
//   XREF to: 0067b5f0 (DATA)
// 004df1f5: PUSH 0x1
//   Label: LAB_004df1f5
// 004df1f7: PUSH 0x64
// 004df1f9: PUSH EDI
//   XREF to: 0067b5f0 (DATA)
// 004df1fa: PUSH 0x62c2a2
//   XREF to: 0062c2a2 (DATA)
// 004df1ff: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004df204: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004df205: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 004df20a: ADD ESP,0x14
// 004df20d: TEST EAX,EAX
// 004df20f: JZ 0x004df408
//   XREF to: 004df408 (CONDITIONAL_JUMP)
// 004df215: PUSH EDI
//   XREF to: 0067b5f0 (DATA)
// 004df216: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 004df21c: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 004df21d: CALL core_event.cpp_CEventList_FUN_004add40
//   XREF to: 004add40 (UNCONDITIONAL_CALL)
// 004df222: ADD ESP,0x8
// 004df225: TEST EAX,EAX
// 004df227: JZ 0x004df543
//   XREF to: 004df543 (CONDITIONAL_JUMP)
// 004df22d: PUSH EAX
// 004df22e: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004df234: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004df235: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004df23a: ADD ESP,0x8
// 004df23d: JMP 0x004df1f5
//   XREF to: 004df1f5 (UNCONDITIONAL_JUMP)
// 004df23f: PUSH 0x44
//   Label: LAB_004df23f
// 004df241: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004df246: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004df247: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004df249: CALL dword ptr [EBX + 0x4]
// 004df24c: ADD ESP,0x8
// 004df24f: TEST EAX,EAX
// 004df251: JZ 0x004ddb90
//   XREF to: 004ddb90 (CONDITIONAL_JUMP)
// 004df257: PUSH 0x0
// 004df259: PUSH 0x64
// 004df25b: LEA EAX,[ESP + 0x108]
// 004df262: PUSH EAX
// 004df263: PUSH 0x62ba21
//   XREF to: 0062ba21 (DATA)
// 004df268: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004df26d: ADD ESP,0x4
// 004df270: PUSH EAX
// 004df271: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004df277: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004df278: CALL shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_004a0400
//   XREF to: 004a0400 (UNCONDITIONAL_CALL)
// 004df27d: ADD ESP,0x14
// 004df280: TEST EAX,EAX
// 004df282: JZ 0x004ddb90
//   XREF to: 004ddb90 (CONDITIONAL_JUMP)
// 004df288: MOV AH,byte ptr [ESP + 0x100]
// 004df28f: XOR EBX,EBX
// 004df291: TEST AH,AH
// 004df293: JZ 0x004ddb90
//   XREF to: 004ddb90 (CONDITIONAL_JUMP)
// 004df299: XOR EAX,EAX
//   Label: LAB_004df299
// 004df29b: MOV AL,byte ptr [ESP + EBX*0x1 + 0x100]
// 004df2a2: PUSH EAX
// 004df2a3: CALL wincore_winrun.cpp_enqueueInput_FUN_005f2f30
//   XREF to: 005f2f30 (UNCONDITIONAL_CALL)
// 004df2a8: ADD ESP,0x4
// 004df2ab: MOV DL,byte ptr [ESP + EBX*0x1 + 0x101]
// 004df2b2: INC EBX
// 004df2b3: TEST DL,DL
// 004df2b5: JNZ 0x004df299
//   XREF to: 004df299 (CONDITIONAL_JUMP)
// 004df2b7: JMP 0x004ddb90
//   XREF to: 004ddb90 (UNCONDITIONAL_JUMP)
// 004df2bc: INC dword ptr [ESP + 0x1bc]
//   Label: LAB_004df2bc
//   XREF to: Stack[-0x2a4] (READ_WRITE)
// 004df2c3: JMP 0x004ddc33
//   XREF to: 004ddc33 (UNCONDITIONAL_JUMP)
// 004df2c8: MOV EBX,dword ptr [EBP + 0x14]
//   Label: LAB_004df2c8
//   XREF to: Stack[0x4] (READ)
// 004df2cb: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004df2d0: MOV EDI,dword ptr [EBX + 0x268]
// 004df2d6: SUB EAX,EDI
// 004df2d8: MOV dword ptr [ESP + 0x448],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004df2df: FILD dword ptr [ESP + 0x448]
//   XREF to: Stack[-0x18] (READ)
// 004df2e6: FMUL double ptr [0x0062c915]
//   XREF to: 0062c915 (READ)
// 004df2ec: MOV dword ptr [EBX + 0x208],0x0
// 004df2f6: MOV EAX,EBX
// 004df2f8: FMUL double ptr [0x0062c91d]
//   XREF to: 0062c91d (READ)
// 004df2fe: FILD dword ptr [EAX + 0x26c]
// 004df304: FXCH
// 004df306: FSTP double ptr [ESP + 0x1ac]
//   XREF to: Stack[-0x2b4] (WRITE)
// 004df30d: FDIV double ptr [ESP + 0x1ac]
//   XREF to: Stack[-0x2b4] (READ)
// 004df314: FSTP double ptr [ESP + 0x1ac]
//   XREF to: Stack[-0x2b4] (WRITE)
// 004df31b: MOV EAX,dword ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x2b0] (READ)
// 004df322: PUSH EAX
// 004df323: MOV EDX,dword ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x2b4] (READ)
// 004df32a: PUSH EDX
// 004df32b: PUSH 0x62bac4
//   XREF to: 0062bac4 (DATA)
// 004df330: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x460] (DATA)
// 004df334: PUSH EAX
// 004df335: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004df33a: ADD ESP,0x10
// 004df33d: MOV EAX,ESP
// 004df33f: PUSH 0x40a00000
// 004df344: PUSH EAX
// 004df345: PUSH EBX
// 004df346: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004df34b: ADD ESP,0xc
// 004df34e: JMP 0x004ddd5b
//   XREF to: 004ddd5b (UNCONDITIONAL_JUMP)
// 004df353: PUSH 0x40a00000
//   Label: LAB_004df353
// 004df358: PUSH 0x62bb47
//   XREF to: 0062bb47 (DATA)
// 004df35d: JMP 0x004ddecb
//   XREF to: 004ddecb (UNCONDITIONAL_JUMP)
// 004df362: PUSH 0x40a00000
//   Label: LAB_004df362
// 004df367: PUSH 0x62bba7
//   XREF to: 0062bba7 (DATA)
// 004df36c: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004df371: ADD ESP,0x4
// 004df374: PUSH EAX
// 004df375: PUSH EBX
// 004df376: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004df37b: ADD ESP,0xc
// 004df37e: MOV EDI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004df384: PUSH EDI
// 004df385: PUSH 0x0
// 004df387: PUSH 0x0
// 004df389: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004df38e: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004df38f: MOV dword ptr [EBX + 0x278],0x0
// 004df399: JMP 0x004ddfdd
//   XREF to: 004ddfdd (UNCONDITIONAL_JUMP)
// 004df39e: PUSH 0x40a00000
//   Label: LAB_004df39e
// 004df3a3: PUSH 0x62bc0c
//   XREF to: 0062bc0c (DATA)
// 004df3a8: JMP 0x004de0bb
//   XREF to: 004de0bb (UNCONDITIONAL_JUMP)
// 004df3ad: PUSH 0x40a00000
//   Label: LAB_004df3ad
// 004df3b2: PUSH 0x62be03
//   XREF to: 0062be03 (DATA)
// 004df3b7: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004df3bc: ADD ESP,0x4
// 004df3bf: PUSH EAX
// 004df3c0: PUSH EBX
// 004df3c1: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004df3c6: ADD ESP,0xc
// 004df3c9: JMP 0x004de6d7
//   XREF to: 004de6d7 (UNCONDITIONAL_JUMP)
// 004df3ce: PUSH 0x40a00000
//   Label: LAB_004df3ce
// 004df3d3: PUSH 0x62be65
//   XREF to: 0062be65 (DATA)
// 004df3d8: JMP 0x004de793
//   XREF to: 004de793 (UNCONDITIONAL_JUMP)
// 004df3dd: PUSH 0x1d
//   Label: LAB_004df3dd
// 004df3df: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004df3e4: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004df3e5: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004df3e7: CALL dword ptr [EBX]
// 004df3e9: ADD ESP,0x8
// 004df3ec: TEST EAX,EAX
// 004df3ee: JZ 0x004df408
//   XREF to: 004df408 (CONDITIONAL_JUMP)
// 004df3f0: PUSH 0x13
// 004df3f2: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004df3f7: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004df3f8: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004df3fa: CALL dword ptr [EBX + 0x4]
// 004df3fd: ADD ESP,0x8
// 004df400: TEST EAX,EAX
// 004df402: JNZ 0x004df1da
//   XREF to: 004df1da (CONDITIONAL_JUMP)
// 004df408: PUSH 0x62c2b1
//   Label: LAB_004df408
//   XREF to: 0062c2b1 (DATA)
// 004df40d: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004df412: XOR ESI,ESI
// 004df414: ADD ESP,0x4
// 004df417: MOV EDI,EAX
// 004df419: MOV EBX,EAX
// 004df41b: SUB ECX,ECX
// 004df41d: DEC ECX
// 004df41e: XOR EAX,EAX
// 004df420: SCASB.REPNE ES:EDI
// 004df422: NOT ECX
// 004df424: DEC ECX
// 004df425: MOV dword ptr [ESP + 0x2b8],ESI
// 004df42c: MOV dword ptr [ESP + 0x2b4],ECX
// 004df433: TEST ECX,ECX
// 004df435: JLE 0x004df474
//   XREF to: 004df474 (CONDITIONAL_JUMP)
// 004df437: MOV EAX,ECX
// 004df439: MOV EDI,EBX
// 004df43b: NEG EAX
// 004df43d: MOV EBX,ECX
// 004df43f: ADD ECX,EAX
// 004df441: MOV dword ptr [ESP + 0x3e8],ECX
// 004df448: XOR EAX,EAX
//   Label: LAB_004df448
// 004df44a: MOV AL,byte ptr [EDI]
// 004df44c: PUSH EAX
// 004df44d: MOVZX ESI,byte ptr [EBX + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004df454: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004df459: ADD ESP,0x4
// 004df45c: CMP ESI,EAX
// 004df45e: JNZ 0x004df467
//   XREF to: 004df467 (CONDITIONAL_JUMP)
// 004df460: INC dword ptr [ESP + 0x2b8]
// 004df467: MOV EAX,dword ptr [ESP + 0x3e8]
//   Label: LAB_004df467
// 004df46e: DEC EBX
// 004df46f: INC EDI
// 004df470: CMP EBX,EAX
// 004df472: JG 0x004df448
//   XREF to: 004df448 (CONDITIONAL_JUMP)
// 004df474: MOV EAX,dword ptr [ESP + 0x2b8]
//   Label: LAB_004df474
// 004df47b: CMP EAX,dword ptr [ESP + 0x2b4]
// 004df482: JNZ 0x004df592
//   XREF to: 004df592 (CONDITIONAL_JUMP)
// 004df488: PUSH 0x62c2e6
//   XREF to: 0062c2e6 (DATA)
// 004df48d: PUSH 0x0
// 004df48f: MOV ECX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004df495: XOR DH,DH
// 004df497: PUSH ECX
//   XREF to: 03f6af64 (DATA)
// 004df498: XOR EDI,EDI
// 004df49a: MOV byte ptr [0x02d831d8],DH
//   XREF to: 02d831d8 (WRITE)
// 004df4a0: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004df4a5: ADD ESP,0xc
// 004df4a8: MOV dword ptr [ESP + 0x3ec],EDI
// 004df4af: MOV EAX,[0x006810c8]
//   Label: LAB_004df4af
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004df4b4: CMP EDI,dword ptr [EAX + 0x150fdc]
//   XREF to: 03265254 (READ)
// 004df4ba: JGE 0x004df592
//   XREF to: 004df592 (CONDITIONAL_JUMP)
// 004df4c0: ADD EAX,dword ptr [ESP + 0x3ec]
// 004df4c7: MOV EBX,dword ptr [EAX + 0x150fe0]
//   XREF to: 03265258 (DATA)
//   XREF to: 0326525c (DATA)
// 004df4cd: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004df4d2: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004df4d9: LEA ESI,[EBX + 0x20]
// 004df4dc: FLD float ptr [EAX + 0x20]
// 004df4df: FSUB float ptr [ESI]
// 004df4e1: FSTP float ptr [ESP + 0x1a0]
// 004df4e8: FLD float ptr [EAX + 0x24]
// 004df4eb: FSUB float ptr [ESI + 0x4]
// 004df4ee: FST float ptr [ESP + 0x1a4]
// 004df4f5: FMUL float ptr [ESP + 0x1a4]
// 004df4fc: FLD float ptr [ESP + 0x1a0]
// 004df503: FMUL ST0
// 004df505: FLD float ptr [EAX + 0x28]
// 004df508: FSUB float ptr [ESI + 0x8]
// 004df50b: FXCH
// 004df50d: FADDP ST2,ST0
// 004df50f: FST float ptr [ESP + 0x1a8]
// 004df516: FMUL float ptr [ESP + 0x1a8]
// 004df51d: FADDP
// 004df51f: FSQRT
// 004df521: FCOMP double ptr [0x0062c925]
//   XREF to: 0062c925 (READ)
// 004df527: FNSTSW AX
// 004df529: SAHF
// 004df52a: JBE 0x004df55c
//   XREF to: 004df55c (CONDITIONAL_JUMP)
// 004df52c: MOV EAX,dword ptr [ESP + 0x3ec]
//   Label: LAB_004df52c
// 004df533: ADD EAX,0x4
// 004df536: INC EDI
// 004df537: MOV dword ptr [ESP + 0x3ec],EAX
// 004df53e: JMP 0x004df4af
//   XREF to: 004df4af (UNCONDITIONAL_JUMP)
// 004df543: PUSH 0x67b5f0
//   Label: LAB_004df543
//   XREF to: 0067b5f0 (DATA)
// 004df548: MOV EBX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 004df54e: PUSH EBX
//   XREF to: 02d05310 (DATA)
// 004df54f: CALL core_event.cpp_CEventList_FUN_004aabe0
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 004df554: ADD ESP,0x8
// 004df557: JMP 0x004df408
//   XREF to: 004df408 (UNCONDITIONAL_JUMP)
// 004df55c: LEA EAX,[ESP + 0x164]
//   Label: LAB_004df55c
// 004df563: PUSH EAX
// 004df564: MOV ESI,0x42c80000
// 004df569: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 004df56e: ADD ESP,0x4
// 004df571: MOV dword ptr [ESP + 0x168],ESI
// 004df578: LEA ESI,[ESP + 0x164]
// 004df57f: PUSH ESI
// 004df580: MOV EAX,dword ptr [EBX + 0x154]
// 004df586: PUSH EBX
// 004df587: CALL dword ptr [EAX + 0x11c]
// 004df58d: ADD ESP,0x8
// 004df590: JMP 0x004df52c
//   XREF to: 004df52c (UNCONDITIONAL_JUMP)
// 004df592: PUSH 0x62c2f2
//   Label: LAB_004df592
//   XREF to: 0062c2f2 (DATA)
// 004df597: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004df59c: MOV EBX,EAX
// 004df59e: ADD ESP,0x4
// 004df5a1: MOV EDI,EAX
// 004df5a3: XOR EDX,EDX
// 004df5a5: SUB ECX,ECX
// 004df5a7: DEC ECX
// 004df5a8: XOR EAX,EAX
// 004df5aa: SCASB.REPNE ES:EDI
// 004df5ac: NOT ECX
// 004df5ae: DEC ECX
// 004df5af: MOV dword ptr [ESP + 0x2c0],EDX
// 004df5b6: MOV dword ptr [ESP + 0x2bc],ECX
// 004df5bd: TEST ECX,ECX
// 004df5bf: JLE 0x004df5fc
//   XREF to: 004df5fc (CONDITIONAL_JUMP)
// 004df5c1: MOV EAX,ECX
// 004df5c3: NEG EAX
// 004df5c5: MOV EDI,ECX
// 004df5c7: ADD ECX,EAX
// 004df5c9: MOV dword ptr [ESP + 0x3f0],ECX
// 004df5d0: XOR EAX,EAX
//   Label: LAB_004df5d0
// 004df5d2: MOV AL,byte ptr [EBX]
// 004df5d4: PUSH EAX
// 004df5d5: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004df5dc: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004df5e1: ADD ESP,0x4
// 004df5e4: CMP ESI,EAX
// 004df5e6: JNZ 0x004df5ef
//   XREF to: 004df5ef (CONDITIONAL_JUMP)
// 004df5e8: INC dword ptr [ESP + 0x2c0]
// 004df5ef: MOV ECX,dword ptr [ESP + 0x3f0]
//   Label: LAB_004df5ef
// 004df5f6: DEC EDI
// 004df5f7: INC EBX
// 004df5f8: CMP EDI,ECX
// 004df5fa: JG 0x004df5d0
//   XREF to: 004df5d0 (CONDITIONAL_JUMP)
// 004df5fc: MOV EAX,dword ptr [ESP + 0x2c0]
//   Label: LAB_004df5fc
// 004df603: CMP EAX,dword ptr [ESP + 0x2bc]
// 004df60a: JNZ 0x004df668
//   XREF to: 004df668 (CONDITIONAL_JUMP)
// 004df60c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004df60f: XOR BL,BL
// 004df611: MOV ESI,dword ptr [EAX + 0x1e0]
// 004df617: MOV byte ptr [0x02d831d8],BL
//   XREF to: 02d831d8 (WRITE)
// 004df61d: TEST ESI,ESI
// 004df61f: SETZ AL
// 004df622: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004df625: AND EAX,0xff
// 004df62a: MOV dword ptr [EBX + 0x1e0],EAX
// 004df630: JZ 0x004dfefb
//   XREF to: 004dfefb (CONDITIONAL_JUMP)
// 004df636: PUSH 0x40a00000
// 004df63b: PUSH 0x62c328
//   XREF to: 0062c328 (DATA)
// 004df640: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   Label: LAB_004df640
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004df645: ADD ESP,0x4
// 004df648: PUSH EAX
// 004df649: PUSH EBX
// 004df64a: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004df64f: ADD ESP,0xc
// 004df652: PUSH 0x62c36b
//   XREF to: 0062c36b (DATA)
// 004df657: PUSH 0x0
// 004df659: MOV ECX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004df65f: PUSH ECX
//   XREF to: 03f6af64 (DATA)
// 004df660: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004df665: ADD ESP,0xc
// 004df668: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004df668
//   XREF to: Stack[0x4] (READ)
// 004df66b: CMP dword ptr [EAX + 0x210],0x0
// 004df672: JZ 0x004df73a
//   XREF to: 004df73a (CONDITIONAL_JUMP)
// 004df678: PUSH 0x62c377
//   XREF to: 0062c377 (DATA)
// 004df67d: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004df682: XOR EDI,EDI
// 004df684: ADD ESP,0x4
// 004df687: MOV dword ptr [ESP + 0x2c8],EDI
// 004df68e: MOV EDI,EAX
// 004df690: MOV ESI,EAX
// 004df692: SUB ECX,ECX
// 004df694: DEC ECX
// 004df695: XOR EAX,EAX
// 004df697: SCASB.REPNE ES:EDI
// 004df699: NOT ECX
// 004df69b: DEC ECX
// 004df69c: MOV dword ptr [ESP + 0x2c4],ECX
// 004df6a3: TEST ECX,ECX
// 004df6a5: JLE 0x004df6e2
//   XREF to: 004df6e2 (CONDITIONAL_JUMP)
// 004df6a7: MOV EAX,ECX
// 004df6a9: NEG EAX
// 004df6ab: MOV EBX,ECX
// 004df6ad: ADD ECX,EAX
// 004df6af: MOV dword ptr [ESP + 0x3f4],ECX
// 004df6b6: XOR EAX,EAX
//   Label: LAB_004df6b6
// 004df6b8: MOV AL,byte ptr [ESI]
// 004df6ba: PUSH EAX
// 004df6bb: MOVZX EDI,byte ptr [EBX + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004df6c2: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004df6c7: ADD ESP,0x4
// 004df6ca: CMP EDI,EAX
// 004df6cc: JNZ 0x004df6d5
//   XREF to: 004df6d5 (CONDITIONAL_JUMP)
// 004df6ce: INC dword ptr [ESP + 0x2c8]
// 004df6d5: MOV EDX,dword ptr [ESP + 0x3f4]
//   Label: LAB_004df6d5
// 004df6dc: DEC EBX
// 004df6dd: INC ESI
// 004df6de: CMP EBX,EDX
// 004df6e0: JG 0x004df6b6
//   XREF to: 004df6b6 (CONDITIONAL_JUMP)
// 004df6e2: MOV EAX,dword ptr [ESP + 0x2c8]
//   Label: LAB_004df6e2
// 004df6e9: CMP EAX,dword ptr [ESP + 0x2c4]
// 004df6f0: JNZ 0x004df73a
//   XREF to: 004df73a (CONDITIONAL_JUMP)
// 004df6f2: PUSH 0x62c3a9
//   XREF to: 0062c3a9 (DATA)
// 004df6f7: XOR BH,BH
// 004df6f9: PUSH 0x0
// 004df6fb: MOV byte ptr [0x02d831d8],BH
//   XREF to: 02d831d8 (WRITE)
// 004df701: MOV EBX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004df707: PUSH EBX
//   XREF to: 03f6af64 (DATA)
// 004df708: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004df70d: ADD ESP,0xc
// 004df710: PUSH 0x1
// 004df712: PUSH 0x40800000
// 004df717: PUSH 0x3c23d70a
// 004df71c: PUSH 0x1
// 004df71e: MOV ESI,dword ptr [ESP + 0x2dc]
// 004df725: PUSH ESI
// 004df726: PUSH 0x62c3b5
//   XREF to: 0062c3b5 (DATA)
// 004df72b: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004df731: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004df732: CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
// 004df737: ADD ESP,0x1c
// 004df73a: PUSH 0x62c3c7
//   Label: LAB_004df73a
//   XREF to: 0062c3c7 (DATA)
// 004df73f: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004df744: XOR ESI,ESI
// 004df746: ADD ESP,0x4
// 004df749: MOV EDI,EAX
// 004df74b: MOV EBX,EAX
// 004df74d: SUB ECX,ECX
// 004df74f: DEC ECX
// 004df750: XOR EAX,EAX
// 004df752: SCASB.REPNE ES:EDI
// 004df754: NOT ECX
// 004df756: DEC ECX
// 004df757: MOV dword ptr [ESP + 0x2d0],ECX
// 004df75e: TEST ECX,ECX
// 004df760: JLE 0x004df7a4
//   XREF to: 004df7a4 (CONDITIONAL_JUMP)
// 004df762: MOV EAX,ECX
// 004df764: NEG EAX
// 004df766: MOV EDI,ECX
// 004df768: ADD ECX,EAX
// 004df76a: MOV dword ptr [ESP + 0x3f8],ECX
// 004df771: XOR EAX,EAX
//   Label: LAB_004df771
// 004df773: MOV AL,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004df779: MOV dword ptr [ESP + 0x448],EAX
// 004df780: XOR EAX,EAX
// 004df782: MOV AL,byte ptr [EBX]
// 004df784: PUSH EAX
// 004df785: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004df78a: ADD ESP,0x4
// 004df78d: CMP EAX,dword ptr [ESP + 0x448]
// 004df794: JNZ 0x004df797
//   XREF to: 004df797 (CONDITIONAL_JUMP)
// 004df796: INC ESI
// 004df797: MOV EDX,dword ptr [ESP + 0x3f8]
//   Label: LAB_004df797
// 004df79e: DEC EDI
// 004df79f: INC EBX
// 004df7a0: CMP EDI,EDX
// 004df7a2: JG 0x004df771
//   XREF to: 004df771 (CONDITIONAL_JUMP)
// 004df7a4: CMP ESI,dword ptr [ESP + 0x2d0]
//   Label: LAB_004df7a4
// 004df7ab: JNZ 0x004df7e6
//   XREF to: 004df7e6 (CONDITIONAL_JUMP)
// 004df7ad: PUSH 0x62c3fa
//   XREF to: 0062c3fa (DATA)
// 004df7b2: PUSH 0x0
// 004df7b4: MOV EBX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004df7ba: XOR CL,CL
// 004df7bc: PUSH EBX
//   XREF to: 03f6af64 (DATA)
// 004df7bd: MOV byte ptr [0x02d831d8],CL
//   XREF to: 02d831d8 (WRITE)
// 004df7c3: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004df7c8: ADD ESP,0xc
// 004df7cb: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004df7ce: CMP dword ptr [EAX + 0x1f0],0x0
// 004df7d5: SETZ AL
// 004df7d8: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004df7db: AND EAX,0xff
// 004df7e0: MOV dword ptr [EBX + 0x1f0],EAX
// 004df7e6: PUSH 0x62c406
//   Label: LAB_004df7e6
//   XREF to: 0062c406 (DATA)
// 004df7eb: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004df7f0: XOR EDI,EDI
// 004df7f2: ADD ESP,0x4
// 004df7f5: MOV dword ptr [ESP + 0x2d8],EDI
// 004df7fc: MOV EDI,EAX
// 004df7fe: MOV EBX,EAX
// 004df800: SUB ECX,ECX
// 004df802: DEC ECX
// 004df803: XOR EAX,EAX
// 004df805: SCASB.REPNE ES:EDI
// 004df807: NOT ECX
// 004df809: DEC ECX
// 004df80a: MOV dword ptr [ESP + 0x2d4],ECX
// 004df811: TEST ECX,ECX
// 004df813: JLE 0x004df850
//   XREF to: 004df850 (CONDITIONAL_JUMP)
// 004df815: MOV EAX,ECX
// 004df817: NEG EAX
// 004df819: MOV EDI,ECX
// 004df81b: ADD ECX,EAX
// 004df81d: MOV dword ptr [ESP + 0x3fc],ECX
// 004df824: XOR EAX,EAX
//   Label: LAB_004df824
// 004df826: MOV AL,byte ptr [EBX]
// 004df828: PUSH EAX
// 004df829: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004df830: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004df835: ADD ESP,0x4
// 004df838: CMP ESI,EAX
// 004df83a: JNZ 0x004df843
//   XREF to: 004df843 (CONDITIONAL_JUMP)
// 004df83c: INC dword ptr [ESP + 0x2d8]
// 004df843: MOV ECX,dword ptr [ESP + 0x3fc]
//   Label: LAB_004df843
// 004df84a: DEC EDI
// 004df84b: INC EBX
// 004df84c: CMP EDI,ECX
// 004df84e: JG 0x004df824
//   XREF to: 004df824 (CONDITIONAL_JUMP)
// 004df850: MOV EAX,dword ptr [ESP + 0x2d8]
//   Label: LAB_004df850
// 004df857: CMP EAX,dword ptr [ESP + 0x2d4]
// 004df85e: JNZ 0x004df899
//   XREF to: 004df899 (CONDITIONAL_JUMP)
// 004df860: PUSH 0x62c439
//   XREF to: 0062c439 (DATA)
// 004df865: PUSH 0x0
// 004df867: MOV ESI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 004df86d: XOR CH,CH
// 004df86f: PUSH ESI
//   XREF to: 03f6af64 (DATA)
// 004df870: MOV byte ptr [0x02d831d8],CH
//   XREF to: 02d831d8 (WRITE)
// 004df876: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004df87b: ADD ESP,0xc
// 004df87e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004df881: CMP dword ptr [EAX + 0x1f4],0x0
// 004df888: SETZ AL
// 004df88b: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004df88e: AND EAX,0xff
// 004df893: MOV dword ptr [EBX + 0x1f4],EAX
// 004df899: PUSH 0x62c445
//   Label: LAB_004df899
//   XREF to: 0062c445 (DATA)
// 004df89e: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004df8a3: MOV EBX,EAX
// 004df8a5: ADD ESP,0x4
// 004df8a8: XOR EAX,EAX
// 004df8aa: MOV EDI,EBX
// 004df8ac: MOV dword ptr [ESP + 0x2e0],EAX
// 004df8b3: SUB ECX,ECX
// 004df8b5: DEC ECX
// 004df8b6: XOR EAX,EAX
// 004df8b8: SCASB.REPNE ES:EDI
// 004df8ba: NOT ECX
// 004df8bc: DEC ECX
// 004df8bd: MOV dword ptr [ESP + 0x2dc],ECX
// 004df8c4: TEST ECX,ECX
// 004df8c6: JLE 0x004df903
//   XREF to: 004df903 (CONDITIONAL_JUMP)
// 004df8c8: MOV EAX,ECX
// 004df8ca: NEG EAX
// 004df8cc: MOV EDI,ECX
// 004df8ce: ADD ECX,EAX
// 004df8d0: MOV dword ptr [ESP + 0x400],ECX
// 004df8d7: XOR EAX,EAX
//   Label: LAB_004df8d7
// 004df8d9: MOV AL,byte ptr [EBX]
// 004df8db: PUSH EAX
// 004df8dc: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004df8e3: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004df8e8: ADD ESP,0x4
// 004df8eb: CMP ESI,EAX
// 004df8ed: JNZ 0x004df8f6
//   XREF to: 004df8f6 (CONDITIONAL_JUMP)
// 004df8ef: INC dword ptr [ESP + 0x2e0]
// 004df8f6: MOV ECX,dword ptr [ESP + 0x400]
//   Label: LAB_004df8f6
// 004df8fd: DEC EDI
// 004df8fe: INC EBX
// 004df8ff: CMP EDI,ECX
// 004df901: JG 0x004df8d7
//   XREF to: 004df8d7 (CONDITIONAL_JUMP)
// 004df903: MOV EAX,dword ptr [ESP + 0x2e0]
//   Label: LAB_004df903
// 004df90a: MOV EBX,dword ptr [ESP + 0x2dc]
// 004df911: CMP EAX,EBX
// 004df913: JNZ 0x004df97e
//   XREF to: 004df97e (CONDITIONAL_JUMP)
// 004df915: XOR AL,BL
// 004df917: MOV [0x02d831d8],AL
//   XREF to: 02d831d8 (WRITE)
// 004df91c: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004df921: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004df928: MOV EBX,dword ptr [EAX + 0x1fa68]
// 004df92e: TEST EBX,EBX
// 004df930: JZ 0x004df968
//   XREF to: 004df968 (CONDITIONAL_JUMP)
// 004df932: CMP dword ptr [EBX + 0x56c],0x5
// 004df939: JNZ 0x004dff0a
//   XREF to: 004dff0a (CONDITIONAL_JUMP)
// 004df93f: PUSH 0x40a00000
// 004df944: PUSH 0x62c47f
//   XREF to: 0062c47f (DATA)
// 004df949: MOV dword ptr [EBX + 0x56c],0x0
// 004df953: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004df958: ADD ESP,0x4
// 004df95b: PUSH EAX
// 004df95c: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004df95f: PUSH EDX
// 004df960: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   Label: LAB_004df960
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004df965: ADD ESP,0xc
// 004df968: PUSH 0x62c4e4
//   Label: LAB_004df968
//   XREF to: 0062c4e4 (DATA)
// 004df96d: PUSH 0x0
// 004df96f: MOV ECX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004df975: PUSH ECX
//   XREF to: 03f6af64 (DATA)
// 004df976: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004df97b: ADD ESP,0xc
// 004df97e: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004df97e
//   XREF to: Stack[0x4] (READ)
// 004df981: CMP dword ptr [EAX + 0x210],0x0
// 004df988: JZ 0x004dfa3a
//   XREF to: 004dfa3a (CONDITIONAL_JUMP)
// 004df98e: PUSH 0x62c4f0
//   XREF to: 0062c4f0 (DATA)
// 004df993: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004df998: XOR EDI,EDI
// 004df99a: ADD ESP,0x4
// 004df99d: MOV dword ptr [ESP + 0x2e8],EDI
// 004df9a4: MOV EDI,EAX
// 004df9a6: MOV ESI,EAX
// 004df9a8: SUB ECX,ECX
// 004df9aa: DEC ECX
// 004df9ab: XOR EAX,EAX
// 004df9ad: SCASB.REPNE ES:EDI
// 004df9af: NOT ECX
// 004df9b1: DEC ECX
// 004df9b2: MOV dword ptr [ESP + 0x2e4],ECX
// 004df9b9: TEST ECX,ECX
// 004df9bb: JLE 0x004df9f8
//   XREF to: 004df9f8 (CONDITIONAL_JUMP)
// 004df9bd: MOV EAX,ECX
// 004df9bf: NEG EAX
// 004df9c1: MOV EBX,ECX
// 004df9c3: ADD ECX,EAX
// 004df9c5: MOV dword ptr [ESP + 0x404],ECX
// 004df9cc: XOR EAX,EAX
//   Label: LAB_004df9cc
// 004df9ce: MOV AL,byte ptr [ESI]
// 004df9d0: PUSH EAX
// 004df9d1: MOVZX EDI,byte ptr [EBX + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004df9d8: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004df9dd: ADD ESP,0x4
// 004df9e0: CMP EDI,EAX
// 004df9e2: JNZ 0x004df9eb
//   XREF to: 004df9eb (CONDITIONAL_JUMP)
// 004df9e4: INC dword ptr [ESP + 0x2e8]
// 004df9eb: MOV EDX,dword ptr [ESP + 0x404]
//   Label: LAB_004df9eb
// 004df9f2: DEC EBX
// 004df9f3: INC ESI
// 004df9f4: CMP EBX,EDX
// 004df9f6: JG 0x004df9cc
//   XREF to: 004df9cc (CONDITIONAL_JUMP)
// 004df9f8: MOV EAX,dword ptr [ESP + 0x2e8]
//   Label: LAB_004df9f8
// 004df9ff: MOV ECX,dword ptr [ESP + 0x2e4]
// 004dfa06: CMP EAX,ECX
// 004dfa08: JNZ 0x004dfa3a
//   XREF to: 004dfa3a (CONDITIONAL_JUMP)
// 004dfa0a: PUSH 0xff00ff
//   XREF to: 00ff00ff (DATA)
// 004dfa0f: XOR AH,CH
// 004dfa11: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 004dfa16: MOV byte ptr [0x02d831d8],AH
//   XREF to: 02d831d8 (WRITE)
// 004dfa1c: CALL core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00453c90
//   XREF to: 00453c90 (UNCONDITIONAL_CALL)
// 004dfa21: ADD ESP,0x8
// 004dfa24: PUSH 0x62c523
//   XREF to: 0062c523 (DATA)
// 004dfa29: PUSH 0x0
// 004dfa2b: MOV EBX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004dfa31: PUSH EBX
//   XREF to: 03f6af64 (DATA)
// 004dfa32: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004dfa37: ADD ESP,0xc
// 004dfa3a: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004dfa3a
//   XREF to: Stack[0x4] (READ)
// 004dfa3d: CMP dword ptr [EAX + 0x210],0x0
// 004dfa44: JZ 0x004dfaec
//   XREF to: 004dfaec (CONDITIONAL_JUMP)
// 004dfa4a: PUSH 0x62c52f
//   XREF to: 0062c52f (DATA)
// 004dfa4f: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004dfa54: MOV EBX,EAX
// 004dfa56: ADD ESP,0x4
// 004dfa59: XOR ECX,ECX
// 004dfa5b: MOV EDI,EAX
// 004dfa5d: MOV dword ptr [ESP + 0x2f0],ECX
// 004dfa64: SUB ECX,ECX
// 004dfa66: DEC ECX
// 004dfa67: XOR EAX,EAX
// 004dfa69: SCASB.REPNE ES:EDI
// 004dfa6b: NOT ECX
// 004dfa6d: DEC ECX
// 004dfa6e: MOV dword ptr [ESP + 0x2ec],ECX
// 004dfa75: TEST ECX,ECX
// 004dfa77: JLE 0x004dfab6
//   XREF to: 004dfab6 (CONDITIONAL_JUMP)
// 004dfa79: MOV EAX,ECX
// 004dfa7b: MOV ESI,EBX
// 004dfa7d: NEG EAX
// 004dfa7f: MOV EBX,ECX
// 004dfa81: ADD ECX,EAX
// 004dfa83: MOV dword ptr [ESP + 0x408],ECX
// 004dfa8a: XOR EAX,EAX
//   Label: LAB_004dfa8a
// 004dfa8c: MOV AL,byte ptr [ESI]
// 004dfa8e: PUSH EAX
// 004dfa8f: MOVZX EDI,byte ptr [EBX + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004dfa96: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004dfa9b: ADD ESP,0x4
// 004dfa9e: CMP EDI,EAX
// 004dfaa0: JNZ 0x004dfaa9
//   XREF to: 004dfaa9 (CONDITIONAL_JUMP)
// 004dfaa2: INC dword ptr [ESP + 0x2f0]
// 004dfaa9: MOV EDI,dword ptr [ESP + 0x408]
//   Label: LAB_004dfaa9
// 004dfab0: DEC EBX
// 004dfab1: INC ESI
// 004dfab2: CMP EBX,EDI
// 004dfab4: JG 0x004dfa8a
//   XREF to: 004dfa8a (CONDITIONAL_JUMP)
// 004dfab6: MOV EAX,dword ptr [ESP + 0x2f0]
//   Label: LAB_004dfab6
// 004dfabd: CMP EAX,dword ptr [ESP + 0x2ec]
// 004dfac4: JNZ 0x004dfaec
//   XREF to: 004dfaec (CONDITIONAL_JUMP)
// 004dfac6: PUSH 0x0
// 004dfac8: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004dfacd: XOR DL,DL
// 004dfacf: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 004dfad4: MOV byte ptr [0x02d831d8],DL
//   XREF to: 02d831d8 (WRITE)
// 004dfada: MOV dword ptr [EAX + 0x14d150],0x0
//   XREF to: 032613c8 (WRITE)
// 004dfae4: CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
//   XREF to: 004528e0 (UNCONDITIONAL_CALL)
// 004dfae9: ADD ESP,0x8
// 004dfaec: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004dfaec
//   XREF to: Stack[0x4] (READ)
// 004dfaef: CMP dword ptr [EAX + 0x210],0x0
// 004dfaf6: JZ 0x004dfbbe
//   XREF to: 004dfbbe (CONDITIONAL_JUMP)
// 004dfafc: PUSH 0x62c561
//   XREF to: 0062c561 (DATA)
// 004dfb01: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004dfb06: XOR ESI,ESI
// 004dfb08: ADD ESP,0x4
// 004dfb0b: MOV EDI,EAX
// 004dfb0d: MOV EBX,EAX
// 004dfb0f: SUB ECX,ECX
// 004dfb11: DEC ECX
// 004dfb12: XOR EAX,EAX
// 004dfb14: SCASB.REPNE ES:EDI
// 004dfb16: NOT ECX
// 004dfb18: DEC ECX
// 004dfb19: MOV dword ptr [ESP + 0x2f8],ESI
// 004dfb20: MOV dword ptr [ESP + 0x2f4],ECX
// 004dfb27: TEST ECX,ECX
// 004dfb29: JLE 0x004dfb68
//   XREF to: 004dfb68 (CONDITIONAL_JUMP)
// 004dfb2b: MOV EAX,ECX
// 004dfb2d: MOV ESI,EBX
// 004dfb2f: NEG EAX
// 004dfb31: MOV EBX,ECX
// 004dfb33: ADD ECX,EAX
// 004dfb35: MOV dword ptr [ESP + 0x40c],ECX
// 004dfb3c: XOR EAX,EAX
//   Label: LAB_004dfb3c
// 004dfb3e: MOV AL,byte ptr [ESI]
// 004dfb40: PUSH EAX
// 004dfb41: MOVZX EDI,byte ptr [EBX + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004dfb48: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004dfb4d: ADD ESP,0x4
// 004dfb50: CMP EDI,EAX
// 004dfb52: JNZ 0x004dfb5b
//   XREF to: 004dfb5b (CONDITIONAL_JUMP)
// 004dfb54: INC dword ptr [ESP + 0x2f8]
// 004dfb5b: MOV EDI,dword ptr [ESP + 0x40c]
//   Label: LAB_004dfb5b
// 004dfb62: DEC EBX
// 004dfb63: INC ESI
// 004dfb64: CMP EBX,EDI
// 004dfb66: JG 0x004dfb3c
//   XREF to: 004dfb3c (CONDITIONAL_JUMP)
// 004dfb68: MOV EAX,dword ptr [ESP + 0x2f8]
//   Label: LAB_004dfb68
// 004dfb6f: CMP EAX,dword ptr [ESP + 0x2f4]
// 004dfb76: JNZ 0x004dfbbe
//   XREF to: 004dfbbe (CONDITIONAL_JUMP)
// 004dfb78: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004dfb7b: XOR DH,DH
// 004dfb7d: MOV ECX,dword ptr [EAX + 0x200]
// 004dfb83: MOV byte ptr [0x02d831d8],DH
//   XREF to: 02d831d8 (WRITE)
// 004dfb89: TEST ECX,ECX
// 004dfb8b: SETZ AL
// 004dfb8e: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004dfb91: AND EAX,0xff
// 004dfb96: MOV dword ptr [EBX + 0x200],EAX
// 004dfb9c: JZ 0x004dff5e
//   XREF to: 004dff5e (CONDITIONAL_JUMP)
// 004dfba2: PUSH 0x40a00000
// 004dfba7: PUSH 0x62c593
//   XREF to: 0062c593 (DATA)
// 004dfbac: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   Label: LAB_004dfbac
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004dfbb1: ADD ESP,0x4
// 004dfbb4: PUSH EAX
// 004dfbb5: PUSH EBX
// 004dfbb6: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004dfbbb: ADD ESP,0xc
// 004dfbbe: PUSH 0x62c5bc
//   Label: LAB_004dfbbe
//   XREF to: 0062c5bc (DATA)
// 004dfbc3: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004dfbc8: MOV EBX,EAX
// 004dfbca: ADD ESP,0x4
// 004dfbcd: MOV EDI,EAX
// 004dfbcf: XOR EDX,EDX
// 004dfbd1: SUB ECX,ECX
// 004dfbd3: DEC ECX
// 004dfbd4: XOR EAX,EAX
// 004dfbd6: SCASB.REPNE ES:EDI
// 004dfbd8: NOT ECX
// 004dfbda: DEC ECX
// 004dfbdb: MOV dword ptr [ESP + 0x300],EDX
// 004dfbe2: MOV dword ptr [ESP + 0x2fc],ECX
// 004dfbe9: TEST ECX,ECX
// 004dfbeb: JLE 0x004dfc28
//   XREF to: 004dfc28 (CONDITIONAL_JUMP)
// 004dfbed: MOV EAX,ECX
// 004dfbef: NEG EAX
// 004dfbf1: MOV EDI,ECX
// 004dfbf3: ADD ECX,EAX
// 004dfbf5: MOV dword ptr [ESP + 0x410],ECX
// 004dfbfc: XOR EAX,EAX
//   Label: LAB_004dfbfc
// 004dfbfe: MOV AL,byte ptr [EBX]
// 004dfc00: PUSH EAX
// 004dfc01: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004dfc08: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004dfc0d: ADD ESP,0x4
// 004dfc10: CMP ESI,EAX
// 004dfc12: JNZ 0x004dfc1b
//   XREF to: 004dfc1b (CONDITIONAL_JUMP)
// 004dfc14: INC dword ptr [ESP + 0x300]
// 004dfc1b: MOV ECX,dword ptr [ESP + 0x410]
//   Label: LAB_004dfc1b
// 004dfc22: DEC EDI
// 004dfc23: INC EBX
// 004dfc24: CMP EDI,ECX
// 004dfc26: JG 0x004dfbfc
//   XREF to: 004dfbfc (CONDITIONAL_JUMP)
// 004dfc28: MOV EAX,dword ptr [ESP + 0x300]
//   Label: LAB_004dfc28
// 004dfc2f: CMP EAX,dword ptr [ESP + 0x2fc]
// 004dfc36: JNZ 0x004dfc8b
//   XREF to: 004dfc8b (CONDITIONAL_JUMP)
// 004dfc38: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004dfc3d: PUSH 0x40a00000
// 004dfc42: XOR BL,BL
// 004dfc44: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004dfc4b: PUSH 0x62c5f2
//   XREF to: 0062c5f2 (DATA)
// 004dfc50: MOV byte ptr [0x02d831d8],BL
//   XREF to: 02d831d8 (WRITE)
// 004dfc56: MOV dword ptr [EAX + 0x1f738],0x42c80000
// 004dfc60: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004dfc65: ADD ESP,0x4
// 004dfc68: PUSH EAX
// 004dfc69: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004dfc6c: PUSH ESI
// 004dfc6d: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004dfc72: ADD ESP,0xc
// 004dfc75: PUSH 0x62c60e
//   XREF to: 0062c60e (DATA)
// 004dfc7a: PUSH 0x0
// 004dfc7c: MOV EDI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 004dfc82: PUSH EDI
//   XREF to: 03f6af64 (DATA)
// 004dfc83: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004dfc88: ADD ESP,0xc
// 004dfc8b: PUSH 0x62c61a
//   Label: LAB_004dfc8b
//   XREF to: 0062c61a (DATA)
// 004dfc90: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004dfc95: MOV EBX,EAX
// 004dfc97: ADD ESP,0x4
// 004dfc9a: XOR EAX,EAX
// 004dfc9c: MOV EDI,EBX
// 004dfc9e: MOV dword ptr [ESP + 0x308],EAX
// 004dfca5: SUB ECX,ECX
// 004dfca7: DEC ECX
// 004dfca8: XOR EAX,EAX
// 004dfcaa: SCASB.REPNE ES:EDI
// 004dfcac: NOT ECX
// 004dfcae: DEC ECX
// 004dfcaf: MOV dword ptr [ESP + 0x304],ECX
// 004dfcb6: TEST ECX,ECX
// 004dfcb8: JLE 0x004dfcf5
//   XREF to: 004dfcf5 (CONDITIONAL_JUMP)
// 004dfcba: MOV EAX,ECX
// 004dfcbc: NEG EAX
// 004dfcbe: MOV EDI,ECX
// 004dfcc0: ADD ECX,EAX
// 004dfcc2: MOV dword ptr [ESP + 0x414],ECX
// 004dfcc9: XOR EAX,EAX
//   Label: LAB_004dfcc9
// 004dfccb: MOV AL,byte ptr [EBX]
// 004dfccd: PUSH EAX
// 004dfcce: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004dfcd5: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004dfcda: ADD ESP,0x4
// 004dfcdd: CMP ESI,EAX
// 004dfcdf: JNZ 0x004dfce8
//   XREF to: 004dfce8 (CONDITIONAL_JUMP)
// 004dfce1: INC dword ptr [ESP + 0x308]
// 004dfce8: MOV ECX,dword ptr [ESP + 0x414]
//   Label: LAB_004dfce8
// 004dfcef: DEC EDI
// 004dfcf0: INC EBX
// 004dfcf1: CMP EDI,ECX
// 004dfcf3: JG 0x004dfcc9
//   XREF to: 004dfcc9 (CONDITIONAL_JUMP)
// 004dfcf5: MOV EAX,dword ptr [ESP + 0x308]
//   Label: LAB_004dfcf5
// 004dfcfc: CMP EAX,dword ptr [ESP + 0x304]
// 004dfd03: JNZ 0x004dfd1e
//   XREF to: 004dfd1e (CONDITIONAL_JUMP)
// 004dfd05: PUSH 0x1
// 004dfd07: MOV ESI,dword ptr [0x006848fc]
//   XREF to: 006848fc (READ)
// 004dfd0d: XOR BH,BH
// 004dfd0f: PUSH ESI
//   XREF to: 03f95dc0 (DATA)
// 004dfd10: MOV byte ptr [0x02d831d8],BH
//   XREF to: 02d831d8 (WRITE)
// 004dfd16: CALL core_weather.cpp_CWeather_FUN_005ef8c0
//   XREF to: 005ef8c0 (UNCONDITIONAL_CALL)
// 004dfd1b: ADD ESP,0x8
// 004dfd1e: PUSH 0x62c654
//   Label: LAB_004dfd1e
//   XREF to: 0062c654 (DATA)
// 004dfd23: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004dfd28: XOR EDI,EDI
// 004dfd2a: ADD ESP,0x4
// 004dfd2d: MOV dword ptr [ESP + 0x310],EDI
// 004dfd34: MOV EDI,EAX
// 004dfd36: MOV EBX,EAX
// 004dfd38: SUB ECX,ECX
// 004dfd3a: DEC ECX
// 004dfd3b: XOR EAX,EAX
// 004dfd3d: SCASB.REPNE ES:EDI
// 004dfd3f: NOT ECX
// 004dfd41: DEC ECX
// 004dfd42: MOV dword ptr [ESP + 0x30c],ECX
// 004dfd49: TEST ECX,ECX
// 004dfd4b: JLE 0x004dfd88
//   XREF to: 004dfd88 (CONDITIONAL_JUMP)
// 004dfd4d: MOV EAX,ECX
// 004dfd4f: NEG EAX
// 004dfd51: MOV EDI,ECX
// 004dfd53: ADD ECX,EAX
// 004dfd55: MOV dword ptr [ESP + 0x418],ECX
// 004dfd5c: XOR EAX,EAX
//   Label: LAB_004dfd5c
// 004dfd5e: MOV AL,byte ptr [EBX]
// 004dfd60: PUSH EAX
// 004dfd61: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004dfd68: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004dfd6d: ADD ESP,0x4
// 004dfd70: CMP ESI,EAX
// 004dfd72: JNZ 0x004dfd7b
//   XREF to: 004dfd7b (CONDITIONAL_JUMP)
// 004dfd74: INC dword ptr [ESP + 0x310]
// 004dfd7b: MOV EDX,dword ptr [ESP + 0x418]
//   Label: LAB_004dfd7b
// 004dfd82: DEC EDI
// 004dfd83: INC EBX
// 004dfd84: CMP EDI,EDX
// 004dfd86: JG 0x004dfd5c
//   XREF to: 004dfd5c (CONDITIONAL_JUMP)
// 004dfd88: MOV EAX,dword ptr [ESP + 0x310]
//   Label: LAB_004dfd88
// 004dfd8f: CMP EAX,dword ptr [ESP + 0x30c]
// 004dfd96: JNZ 0x004dfdb1
//   XREF to: 004dfdb1 (CONDITIONAL_JUMP)
// 004dfd98: PUSH 0x2
// 004dfd9a: MOV EBX,dword ptr [0x006848fc]
//   XREF to: 03f95dc0 (PARAM)
//   XREF to: 006848fc (READ)
// 004dfda0: XOR CL,CL
// 004dfda2: PUSH EBX
//   XREF to: 03f95dc0 (DATA)
// 004dfda3: MOV byte ptr [0x02d831d8],CL
//   XREF to: 02d831d8 (WRITE)
// 004dfda9: CALL core_weather.cpp_CWeather_FUN_005ef8c0
//   XREF to: 005ef8c0 (UNCONDITIONAL_CALL)
// 004dfdae: ADD ESP,0x8
// 004dfdb1: PUSH 0x62c68b
//   Label: LAB_004dfdb1
//   XREF to: 0062c68b (DATA)
// 004dfdb6: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004dfdbb: XOR ESI,ESI
// 004dfdbd: ADD ESP,0x4
// 004dfdc0: MOV EDI,EAX
// 004dfdc2: MOV EBX,EAX
// 004dfdc4: SUB ECX,ECX
// 004dfdc6: DEC ECX
// 004dfdc7: XOR EAX,EAX
// 004dfdc9: SCASB.REPNE ES:EDI
// 004dfdcb: NOT ECX
// 004dfdcd: DEC ECX
// 004dfdce: MOV dword ptr [ESP + 0x318],ESI
// 004dfdd5: MOV dword ptr [ESP + 0x314],ECX
// 004dfddc: TEST ECX,ECX
// 004dfdde: JLE 0x004dfe1d
//   XREF to: 004dfe1d (CONDITIONAL_JUMP)
// 004dfde0: MOV EAX,ECX
// 004dfde2: MOV ESI,EBX
// 004dfde4: NEG EAX
// 004dfde6: MOV EBX,ECX
// 004dfde8: ADD ECX,EAX
// 004dfdea: MOV dword ptr [ESP + 0x41c],ECX
// 004dfdf1: XOR EAX,EAX
//   Label: LAB_004dfdf1
// 004dfdf3: MOV AL,byte ptr [ESI]
// 004dfdf5: PUSH EAX
// 004dfdf6: MOVZX EDI,byte ptr [EBX + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004dfdfd: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004dfe02: ADD ESP,0x4
// 004dfe05: CMP EDI,EAX
// 004dfe07: JNZ 0x004dfe10
//   XREF to: 004dfe10 (CONDITIONAL_JUMP)
// 004dfe09: INC dword ptr [ESP + 0x318]
// 004dfe10: MOV EDX,dword ptr [ESP + 0x41c]
//   Label: LAB_004dfe10
// 004dfe17: DEC EBX
// 004dfe18: INC ESI
// 004dfe19: CMP EBX,EDX
// 004dfe1b: JG 0x004dfdf1
//   XREF to: 004dfdf1 (CONDITIONAL_JUMP)
// 004dfe1d: MOV EAX,dword ptr [ESP + 0x318]
//   Label: LAB_004dfe1d
// 004dfe24: CMP EAX,dword ptr [ESP + 0x314]
// 004dfe2b: JNZ 0x004e01e0
//   XREF to: 004e01e0 (CONDITIONAL_JUMP)
// 004dfe31: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004dfe34: XOR CH,CH
// 004dfe36: MOV EBX,dword ptr [EAX + 0x204]
// 004dfe3c: MOV byte ptr [0x02d831d8],CH
//   XREF to: 02d831d8 (WRITE)
// 004dfe42: TEST EBX,EBX
// 004dfe44: SETZ AL
// 004dfe47: MOV ESI,0x3e800000
// 004dfe4c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004dfe4f: MOV dword ptr [ESP + 0x31c],ESI
// 004dfe56: AND EAX,0xff
// 004dfe5b: MOV dword ptr [EBX + 0x204],EAX
// 004dfe61: JZ 0x004dff6d
//   XREF to: 004dff6d (CONDITIONAL_JUMP)
// 004dfe67: PUSH 0x62c6c0
//   XREF to: 0062c6c0 (DATA)
// 004dfe6c: PUSH 0x0
// 004dfe6e: MOV ECX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004dfe74: MOV EDX,0x40800000
// 004dfe79: PUSH ECX
//   XREF to: 03f6af64 (DATA)
// 004dfe7a: MOV dword ptr [ESP + 0x328],EDX
// 004dfe81: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   Label: LAB_004dfe81
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004dfe86: ADD ESP,0xc
// 004dfe89: XOR EBX,EBX
// 004dfe8b: MOV dword ptr [ESP + 0x420],EBX
// 004dfe92: MOV dword ptr [ESP + 0x444],EBX
// 004dfe99: MOV EAX,[0x006810c8]
//   Label: LAB_004dfe99
//   XREF to: 006810c8 (READ)
// 004dfe9e: MOV EBX,dword ptr [ESP + 0x444]
// 004dfea5: CMP EBX,dword ptr [EAX + 0x14f098]
//   XREF to: 03263310 (READ)
// 004dfeab: JGE 0x004e0193
//   XREF to: 004e0193 (CONDITIONAL_JUMP)
// 004dfeb1: ADD EAX,dword ptr [ESP + 0x420]
// 004dfeb8: MOV EAX,dword ptr [EAX + 0x14f09c]
//   XREF to: 03263314 (DATA)
//   XREF to: 03263318 (DATA)
// 004dfebe: LEA ECX,[EAX + 0x158]
// 004dfec4: MOV DL,byte ptr [EAX + 0x23b8]
// 004dfeca: MOV dword ptr [ESP + 0x320],ECX
// 004dfed1: TEST DL,DL
// 004dfed3: JNZ 0x004dff7e
//   XREF to: 004dff7e (CONDITIONAL_JUMP)
// 004dfed9: MOV ESI,dword ptr [ESP + 0x444]
//   Label: LAB_004dfed9
// 004dfee0: MOV EBX,dword ptr [ESP + 0x420]
// 004dfee7: INC ESI
// 004dfee8: ADD EBX,0x4
// 004dfeeb: MOV dword ptr [ESP + 0x444],ESI
// 004dfef2: MOV dword ptr [ESP + 0x420],EBX
// 004dfef9: JMP 0x004dfe99
//   XREF to: 004dfe99 (UNCONDITIONAL_JUMP)
// 004dfefb: PUSH 0x40a00000
//   Label: LAB_004dfefb
// 004dff00: PUSH 0x62c349
//   XREF to: 0062c349 (DATA)
// 004dff05: JMP 0x004df640
//   XREF to: 004df640 (UNCONDITIONAL_JUMP)
// 004dff0a: PUSH 0x62c495
//   Label: LAB_004dff0a
//   XREF to: 0062c495 (DATA)
// 004dff0f: PUSH EBX
// 004dff10: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004dff15: ADD ESP,0x8
// 004dff18: TEST EAX,EAX
// 004dff1a: JZ 0x004dff42
//   XREF to: 004dff42 (CONDITIONAL_JUMP)
// 004dff1c: PUSH 0x40a00000
// 004dff21: PUSH 0x62c4ce
//   XREF to: 0062c4ce (DATA)
// 004dff26: MOV dword ptr [EBX + 0x56c],0x5
// 004dff30: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004dff35: ADD ESP,0x4
// 004dff38: PUSH EAX
// 004dff39: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004dff3c: PUSH EAX
// 004dff3d: JMP 0x004df960
//   XREF to: 004df960 (UNCONDITIONAL_JUMP)
// 004dff42: PUSH 0x40a00000
//   Label: LAB_004dff42
// 004dff47: PUSH 0x62c49f
//   XREF to: 0062c49f (DATA)
// 004dff4c: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004dff51: ADD ESP,0x4
// 004dff54: PUSH EAX
// 004dff55: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004dff58: PUSH EDI
// 004dff59: JMP 0x004df960
//   XREF to: 004df960 (UNCONDITIONAL_JUMP)
// 004dff5e: PUSH 0x40a00000
//   Label: LAB_004dff5e
// 004dff63: PUSH 0x62c5a7
//   XREF to: 0062c5a7 (DATA)
// 004dff68: JMP 0x004dfbac
//   XREF to: 004dfbac (UNCONDITIONAL_JUMP)
// 004dff6d: PUSH 0x62c6ca
//   Label: LAB_004dff6d
//   XREF to: 0062c6ca (DATA)
// 004dff72: PUSH EAX
// 004dff73: MOV EAX,[0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004dff78: PUSH EAX
//   XREF to: 03f6af64 (DATA)
// 004dff79: JMP 0x004dfe81
//   XREF to: 004dfe81 (UNCONDITIONAL_JUMP)
// 004dff7e: PUSH ECX
//   Label: LAB_004dff7e
// 004dff7f: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 004dff84: ADD ESP,0x4
// 004dff87: PUSH 0x0
// 004dff89: PUSH 0x62c6d4
//   XREF to: 0062c6d4 (DATA)
// 004dff8e: PUSH EAX
// 004dff8f: MOV ESI,EAX
// 004dff91: MOV dword ptr [ESP + 0x330],EAX
// 004dff98: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004dff9d: ADD ESP,0xc
// 004dffa0: CMP EAX,-0x1
// 004dffa3: JZ 0x004e002f
//   XREF to: 004e002f (CONDITIONAL_JUMP)
// 004dffa9: MOV EDX,dword ptr [ESP + 0x320]
// 004dffb0: MOV dword ptr [ESP + 0x330],EAX
// 004dffb7: SHL EAX,0x2
// 004dffba: ADD EAX,EDX
// 004dffbc: MOV EBX,dword ptr [ESP + 0x320]
// 004dffc3: FLD float ptr [EAX + 0x514]
// 004dffc9: FMUL float ptr [ESP + 0x31c]
// 004dffd0: MOV dword ptr [ESP + 0x328],EBX
// 004dffd7: MOV EBX,dword ptr [ESP + 0x31c]
// 004dffde: MOV EDI,ESI
// 004dffe0: MOV dword ptr [ESP + 0x32c],EBX
// 004dffe7: FSTP float ptr [EAX + 0x514]
// 004dffed: MOV ECX,dword ptr [ESI + 0x28558]
// 004dfff3: XOR EBX,EBX
// 004dfff5: TEST ECX,ECX
// 004dfff7: JLE 0x004e002f
//   XREF to: 004e002f (CONDITIONAL_JUMP)
// 004dfff9: MOV EDX,dword ptr [ESP + 0x330]
//   Label: LAB_004dfff9
// 004e0000: CMP EDX,dword ptr [ESI + 0x2857c]
// 004e0006: JNZ 0x004e0021
//   XREF to: 004e0021 (CONDITIONAL_JUMP)
// 004e0008: PUSH EBX
// 004e0009: PUSH dword ptr [ESP + 0x330]
// 004e0010: PUSH EDI
// 004e0011: MOV ECX,dword ptr [ESP + 0x334]
// 004e0018: PUSH ECX
// 004e0019: CALL core_game.cpp_CGame_FUN_004dda80
//   XREF to: 004dda80 (UNCONDITIONAL_CALL)
// 004e001e: ADD ESP,0x10
// 004e0021: INC EBX
//   Label: LAB_004e0021
// 004e0022: MOV EAX,dword ptr [EDI + 0x28558]
// 004e0028: ADD ESI,0x24
// 004e002b: CMP EBX,EAX
// 004e002d: JL 0x004dfff9
//   XREF to: 004dfff9 (CONDITIONAL_JUMP)
// 004e002f: PUSH 0x0
//   Label: LAB_004e002f
// 004e0031: PUSH 0x62c6df
//   XREF to: 0062c6df (DATA)
// 004e0036: MOV EBX,dword ptr [ESP + 0x32c]
// 004e003d: PUSH EBX
// 004e003e: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e0043: ADD ESP,0xc
// 004e0046: CMP EAX,-0x1
// 004e0049: JZ 0x004e00dc
//   XREF to: 004e00dc (CONDITIONAL_JUMP)
// 004e004f: MOV ESI,dword ptr [ESP + 0x320]
// 004e0056: MOV dword ptr [ESP + 0x33c],EAX
// 004e005d: SHL EAX,0x2
// 004e0060: ADD EAX,ESI
// 004e0062: MOV EBX,dword ptr [ESP + 0x320]
// 004e0069: FLD float ptr [EAX + 0x514]
// 004e006f: FMUL float ptr [ESP + 0x31c]
// 004e0076: MOV dword ptr [ESP + 0x334],EBX
// 004e007d: MOV EBX,dword ptr [ESP + 0x31c]
// 004e0084: MOV EDI,dword ptr [ESP + 0x324]
// 004e008b: MOV dword ptr [ESP + 0x338],EBX
// 004e0092: FSTP float ptr [EAX + 0x514]
// 004e0098: MOV EDX,dword ptr [EDI + 0x28558]
// 004e009e: XOR EBX,EBX
// 004e00a0: TEST EDX,EDX
// 004e00a2: JLE 0x004e00dc
//   XREF to: 004e00dc (CONDITIONAL_JUMP)
// 004e00a4: MOV ESI,EDI
// 004e00a6: MOV EDX,dword ptr [ESP + 0x33c]
//   Label: LAB_004e00a6
// 004e00ad: CMP EDX,dword ptr [ESI + 0x2857c]
// 004e00b3: JNZ 0x004e00ce
//   XREF to: 004e00ce (CONDITIONAL_JUMP)
// 004e00b5: PUSH EBX
// 004e00b6: PUSH dword ptr [ESP + 0x33c]
// 004e00bd: PUSH EDI
// 004e00be: MOV ECX,dword ptr [ESP + 0x340]
// 004e00c5: PUSH ECX
// 004e00c6: CALL core_game.cpp_CGame_FUN_004dda80
//   XREF to: 004dda80 (UNCONDITIONAL_CALL)
// 004e00cb: ADD ESP,0x10
// 004e00ce: INC EBX
//   Label: LAB_004e00ce
// 004e00cf: MOV ECX,dword ptr [EDI + 0x28558]
// 004e00d5: ADD ESI,0x24
// 004e00d8: CMP EBX,ECX
// 004e00da: JL 0x004e00a6
//   XREF to: 004e00a6 (CONDITIONAL_JUMP)
// 004e00dc: PUSH 0x0
//   Label: LAB_004e00dc
// 004e00de: PUSH 0x62c6e9
//   XREF to: 0062c6e9 (DATA)
// 004e00e3: MOV EBX,dword ptr [ESP + 0x32c]
// 004e00ea: PUSH EBX
// 004e00eb: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e00f0: ADD ESP,0xc
// 004e00f3: CMP EAX,-0x1
// 004e00f6: JZ 0x004dfed9
//   XREF to: 004dfed9 (CONDITIONAL_JUMP)
// 004e00fc: MOV ESI,dword ptr [ESP + 0x320]
// 004e0103: MOV dword ptr [ESP + 0x348],EAX
// 004e010a: SHL EAX,0x2
// 004e010d: ADD EAX,ESI
// 004e010f: MOV EBX,dword ptr [ESP + 0x320]
// 004e0116: FLD float ptr [EAX + 0x514]
// 004e011c: FMUL float ptr [ESP + 0x31c]
// 004e0123: MOV dword ptr [ESP + 0x340],EBX
// 004e012a: MOV EBX,dword ptr [ESP + 0x31c]
// 004e0131: MOV EDI,dword ptr [ESP + 0x324]
// 004e0138: MOV dword ptr [ESP + 0x344],EBX
// 004e013f: FSTP float ptr [EAX + 0x514]
// 004e0145: MOV EDX,dword ptr [EDI + 0x28558]
// 004e014b: XOR EBX,EBX
// 004e014d: TEST EDX,EDX
// 004e014f: JLE 0x004dfed9
//   XREF to: 004dfed9 (CONDITIONAL_JUMP)
// 004e0155: MOV ESI,EDI
// 004e0157: MOV EDX,dword ptr [ESP + 0x348]
//   Label: LAB_004e0157
// 004e015e: CMP EDX,dword ptr [ESI + 0x2857c]
// 004e0164: JNZ 0x004e017f
//   XREF to: 004e017f (CONDITIONAL_JUMP)
// 004e0166: PUSH EBX
// 004e0167: PUSH dword ptr [ESP + 0x348]
// 004e016e: PUSH EDI
// 004e016f: MOV ECX,dword ptr [ESP + 0x34c]
// 004e0176: PUSH ECX
// 004e0177: CALL core_game.cpp_CGame_FUN_004dda80
//   XREF to: 004dda80 (UNCONDITIONAL_CALL)
// 004e017c: ADD ESP,0x10
// 004e017f: INC EBX
//   Label: LAB_004e017f
// 004e0180: MOV ECX,dword ptr [EDI + 0x28558]
// 004e0186: ADD ESI,0x24
// 004e0189: CMP EBX,ECX
// 004e018b: JGE 0x004dfed9
//   XREF to: 004dfed9 (CONDITIONAL_JUMP)
// 004e0191: JMP 0x004e0157
//   XREF to: 004e0157 (UNCONDITIONAL_JUMP)
// 004e0193: MOV ECX,dword ptr [0x03f6bb60]
//   Label: LAB_004e0193
//   XREF to: 03f6bb60 (READ)
// 004e0199: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004e019e: PUSH ECX
// 004e019f: MOV EBX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004e01a6: PUSH EBX
// 004e01a7: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004e01ac: ADD ESP,0x8
// 004e01af: TEST EAX,EAX
// 004e01b1: JZ 0x004e01e0
//   XREF to: 004e01e0 (CONDITIONAL_JUMP)
// 004e01b3: LEA EBX,[EAX + 0x1fcd8]
// 004e01b9: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004e01bc: CMP dword ptr [EAX + 0x204],0x0
// 004e01c3: JZ 0x004e077f
//   XREF to: 004e077f (CONDITIONAL_JUMP)
// 004e01c9: PUSH 0x62c6f3
//   XREF to: 0062c6f3 (DATA)
// 004e01ce: PUSH EBX
//   Label: LAB_004e01ce
// 004e01cf: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004e01d4: ADD ESP,0x8
// 004e01d7: PUSH EBX
// 004e01d8: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 004e01dd: ADD ESP,0x4
// 004e01e0: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004e01e0
//   XREF to: Stack[0x4] (READ)
// 004e01e3: CMP dword ptr [EAX + 0x210],0x0
// 004e01ea: JZ 0x004e0290
//   XREF to: 004e0290 (CONDITIONAL_JUMP)
// 004e01f0: PUSH 0x62c710
//   XREF to: 0062c710 (DATA)
// 004e01f5: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004e01fa: MOV EBX,EAX
// 004e01fc: ADD ESP,0x4
// 004e01ff: XOR EAX,EAX
// 004e0201: MOV EDI,EBX
// 004e0203: MOV dword ptr [ESP + 0x350],EAX
// 004e020a: SUB ECX,ECX
// 004e020c: DEC ECX
// 004e020d: XOR EAX,EAX
// 004e020f: SCASB.REPNE ES:EDI
// 004e0211: NOT ECX
// 004e0213: DEC ECX
// 004e0214: MOV dword ptr [ESP + 0x34c],ECX
// 004e021b: TEST ECX,ECX
// 004e021d: JLE 0x004e025c
//   XREF to: 004e025c (CONDITIONAL_JUMP)
// 004e021f: MOV EAX,ECX
// 004e0221: MOV ESI,EBX
// 004e0223: NEG EAX
// 004e0225: MOV EBX,ECX
// 004e0227: ADD ECX,EAX
// 004e0229: MOV dword ptr [ESP + 0x424],ECX
// 004e0230: XOR EAX,EAX
//   Label: LAB_004e0230
// 004e0232: MOV AL,byte ptr [ESI]
// 004e0234: PUSH EAX
// 004e0235: MOVZX EDI,byte ptr [EBX + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004e023c: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004e0241: ADD ESP,0x4
// 004e0244: CMP EDI,EAX
// 004e0246: JNZ 0x004e024f
//   XREF to: 004e024f (CONDITIONAL_JUMP)
// 004e0248: INC dword ptr [ESP + 0x350]
// 004e024f: MOV EDX,dword ptr [ESP + 0x424]
//   Label: LAB_004e024f
// 004e0256: DEC EBX
// 004e0257: INC ESI
// 004e0258: CMP EBX,EDX
// 004e025a: JG 0x004e0230
//   XREF to: 004e0230 (CONDITIONAL_JUMP)
// 004e025c: MOV EAX,dword ptr [ESP + 0x350]
//   Label: LAB_004e025c
// 004e0263: CMP EAX,dword ptr [ESP + 0x34c]
// 004e026a: JNZ 0x004e0290
//   XREF to: 004e0290 (CONDITIONAL_JUMP)
// 004e026c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004e026f: XOR DH,DH
// 004e0271: MOV EBX,dword ptr [EAX + 0x218]
// 004e0277: MOV byte ptr [0x02d831d8],DH
//   XREF to: 02d831d8 (WRITE)
// 004e027d: TEST EBX,EBX
// 004e027f: SETZ AL
// 004e0282: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004e0285: AND EAX,0xff
// 004e028a: MOV dword ptr [EBX + 0x218],EAX
// 004e0290: PUSH 0x62c744
//   Label: LAB_004e0290
//   XREF to: 0062c744 (DATA)
// 004e0295: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004e029a: MOV EBX,EAX
// 004e029c: ADD ESP,0x4
// 004e029f: XOR EAX,EAX
// 004e02a1: MOV EDI,EBX
// 004e02a3: MOV dword ptr [ESP + 0x358],EAX
// 004e02aa: SUB ECX,ECX
// 004e02ac: DEC ECX
// 004e02ad: XOR EAX,EAX
// 004e02af: SCASB.REPNE ES:EDI
// 004e02b1: NOT ECX
// 004e02b3: DEC ECX
// 004e02b4: MOV dword ptr [ESP + 0x354],ECX
// 004e02bb: TEST ECX,ECX
// 004e02bd: JLE 0x004e02fa
//   XREF to: 004e02fa (CONDITIONAL_JUMP)
// 004e02bf: MOV EAX,ECX
// 004e02c1: NEG EAX
// 004e02c3: MOV EDI,ECX
// 004e02c5: ADD ECX,EAX
// 004e02c7: MOV dword ptr [ESP + 0x428],ECX
// 004e02ce: XOR EAX,EAX
//   Label: LAB_004e02ce
// 004e02d0: MOV AL,byte ptr [EBX]
// 004e02d2: PUSH EAX
// 004e02d3: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004e02da: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004e02df: ADD ESP,0x4
// 004e02e2: CMP ESI,EAX
// 004e02e4: JNZ 0x004e02ed
//   XREF to: 004e02ed (CONDITIONAL_JUMP)
// 004e02e6: INC dword ptr [ESP + 0x358]
// 004e02ed: MOV EDX,dword ptr [ESP + 0x428]
//   Label: LAB_004e02ed
// 004e02f4: DEC EDI
// 004e02f5: INC EBX
// 004e02f6: CMP EDI,EDX
// 004e02f8: JG 0x004e02ce
//   XREF to: 004e02ce (CONDITIONAL_JUMP)
// 004e02fa: MOV EAX,dword ptr [ESP + 0x358]
//   Label: LAB_004e02fa
// 004e0301: CMP EAX,dword ptr [ESP + 0x354]
// 004e0308: JNZ 0x004e0394
//   XREF to: 004e0394 (CONDITIONAL_JUMP)
// 004e030e: PUSH 0xbb0
// 004e0313: PUSH 0x62c779
//   XREF to: 0062c779 (DATA)
// 004e0318: XOR BL,BL
// 004e031a: PUSH 0x2d8
// 004e031f: MOV byte ptr [0x02d831d8],BL
//   XREF to: 02d831d8 (WRITE)
// 004e0325: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004e032a: ADD ESP,0xc
// 004e032d: TEST EAX,EAX
// 004e032f: JZ 0x004e033a
//   XREF to: 004e033a (CONDITIONAL_JUMP)
// 004e0331: PUSH EAX
// 004e0332: CALL core_gasmask.cpp_CGasMask_ctor_FUN_004e5d00
//   XREF to: 004e5d00 (UNCONDITIONAL_CALL)
// 004e0337: ADD ESP,0x4
// 004e033a: MOV EBX,EAX
//   Label: LAB_004e033a
// 004e033c: PUSH EBX
// 004e033d: MOV ESI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 004e0343: PUSH ESI
//   XREF to: 02f33740 (DATA)
// 004e0344: CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   XREF to: 00524700 (UNCONDITIONAL_CALL)
// 004e0349: ADD ESP,0x8
// 004e034c: MOV EAX,dword ptr [EBX + 0x154]
// 004e0352: PUSH EBX
// 004e0353: CALL dword ptr [EAX]
// 004e0355: ADD ESP,0x4
// 004e0358: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004e035d: PUSH 0x1
// 004e035f: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004e0366: PUSH EBX
// 004e0367: ADD EAX,0x1f738
// 004e036c: PUSH EAX
// 004e036d: CALL core_inv.cpp_CInventory_addItem_FUN_004fd600
//   XREF to: 004fd600 (UNCONDITIONAL_CALL)
// 004e0372: ADD ESP,0xc
// 004e0375: PUSH 0x40a00000
// 004e037a: PUSH 0x62c78a
//   XREF to: 0062c78a (DATA)
// 004e037f: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e0384: ADD ESP,0x4
// 004e0387: PUSH EAX
// 004e0388: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004e038b: PUSH EDI
// 004e038c: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004e0391: ADD ESP,0xc
// 004e0394: PUSH 0x62c7a0
//   Label: LAB_004e0394
//   XREF to: 0062c7a0 (DATA)
// 004e0399: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004e039e: MOV EBX,EAX
// 004e03a0: ADD ESP,0x4
// 004e03a3: XOR EAX,EAX
// 004e03a5: MOV EDI,EBX
// 004e03a7: MOV dword ptr [ESP + 0x360],EAX
// 004e03ae: SUB ECX,ECX
// 004e03b0: DEC ECX
// 004e03b1: XOR EAX,EAX
// 004e03b3: SCASB.REPNE ES:EDI
// 004e03b5: NOT ECX
// 004e03b7: DEC ECX
// 004e03b8: MOV dword ptr [ESP + 0x35c],ECX
// 004e03bf: TEST ECX,ECX
// 004e03c1: JLE 0x004e03fe
//   XREF to: 004e03fe (CONDITIONAL_JUMP)
// 004e03c3: MOV EAX,ECX
// 004e03c5: NEG EAX
// 004e03c7: MOV EDI,ECX
// 004e03c9: ADD ECX,EAX
// 004e03cb: MOV dword ptr [ESP + 0x42c],ECX
// 004e03d2: XOR EAX,EAX
//   Label: LAB_004e03d2
// 004e03d4: MOV AL,byte ptr [EBX]
// 004e03d6: PUSH EAX
// 004e03d7: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004e03de: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004e03e3: ADD ESP,0x4
// 004e03e6: CMP ESI,EAX
// 004e03e8: JNZ 0x004e03f1
//   XREF to: 004e03f1 (CONDITIONAL_JUMP)
// 004e03ea: INC dword ptr [ESP + 0x360]
// 004e03f1: MOV ECX,dword ptr [ESP + 0x42c]
//   Label: LAB_004e03f1
// 004e03f8: DEC EDI
// 004e03f9: INC EBX
// 004e03fa: CMP EDI,ECX
// 004e03fc: JG 0x004e03d2
//   XREF to: 004e03d2 (CONDITIONAL_JUMP)
// 004e03fe: MOV EAX,dword ptr [ESP + 0x360]
//   Label: LAB_004e03fe
// 004e0405: CMP EAX,dword ptr [ESP + 0x35c]
// 004e040c: JNZ 0x004e044b
//   XREF to: 004e044b (CONDITIONAL_JUMP)
// 004e040e: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004e0413: PUSH 0x40a00000
// 004e0418: XOR BH,BH
// 004e041a: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004e0421: PUSH 0x62c7d4
//   XREF to: 0062c7d4 (DATA)
// 004e0426: MOV byte ptr [0x02d831d8],BH
//   XREF to: 02d831d8 (WRITE)
// 004e042c: MOV dword ptr [EAX + 0x243c],0x42c80000
// 004e0436: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e043b: ADD ESP,0x4
// 004e043e: PUSH EAX
// 004e043f: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004e0442: PUSH ESI
// 004e0443: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004e0448: ADD ESP,0xc
// 004e044b: PUSH 0x62c7e5
//   Label: LAB_004e044b
//   XREF to: 0062c7e5 (DATA)
// 004e0450: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004e0455: XOR EDI,EDI
// 004e0457: ADD ESP,0x4
// 004e045a: MOV dword ptr [ESP + 0x368],EDI
// 004e0461: MOV EDI,EAX
// 004e0463: MOV EBX,EAX
// 004e0465: SUB ECX,ECX
// 004e0467: DEC ECX
// 004e0468: XOR EAX,EAX
// 004e046a: SCASB.REPNE ES:EDI
// 004e046c: NOT ECX
// 004e046e: DEC ECX
// 004e046f: MOV dword ptr [ESP + 0x364],ECX
// 004e0476: TEST ECX,ECX
// 004e0478: JLE 0x004e04b5
//   XREF to: 004e04b5 (CONDITIONAL_JUMP)
// 004e047a: MOV EAX,ECX
// 004e047c: NEG EAX
// 004e047e: MOV EDI,ECX
// 004e0480: ADD ECX,EAX
// 004e0482: MOV dword ptr [ESP + 0x430],ECX
// 004e0489: XOR EAX,EAX
//   Label: LAB_004e0489
// 004e048b: MOV AL,byte ptr [EBX]
// 004e048d: PUSH EAX
// 004e048e: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004e0495: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004e049a: ADD ESP,0x4
// 004e049d: CMP ESI,EAX
// 004e049f: JNZ 0x004e04a8
//   XREF to: 004e04a8 (CONDITIONAL_JUMP)
// 004e04a1: INC dword ptr [ESP + 0x368]
// 004e04a8: MOV EDX,dword ptr [ESP + 0x430]
//   Label: LAB_004e04a8
// 004e04af: DEC EDI
// 004e04b0: INC EBX
// 004e04b1: CMP EDI,EDX
// 004e04b3: JG 0x004e0489
//   XREF to: 004e0489 (CONDITIONAL_JUMP)
// 004e04b5: MOV EAX,dword ptr [ESP + 0x368]
//   Label: LAB_004e04b5
// 004e04bc: CMP EAX,dword ptr [ESP + 0x364]
// 004e04c3: JNZ 0x004e0520
//   XREF to: 004e0520 (CONDITIONAL_JUMP)
// 004e04c5: MOV EBX,dword ptr [0x03f6bb60]
//   XREF to: 03f6bb60 (READ)
// 004e04cb: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004e04d0: PUSH EBX
// 004e04d1: MOV ESI,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004e04d8: XOR CL,CL
// 004e04da: PUSH ESI
// 004e04db: MOV byte ptr [0x02d831d8],CL
//   XREF to: 02d831d8 (WRITE)
// 004e04e1: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004e04e6: ADD ESP,0x8
// 004e04e9: TEST EAX,EAX
// 004e04eb: JZ 0x004e0520
//   XREF to: 004e0520 (CONDITIONAL_JUMP)
// 004e04ed: PUSH 0x62c819
//   XREF to: 0062c819 (DATA)
// 004e04f2: LEA EBX,[EAX + 0x1fcd8]
// 004e04f8: PUSH EBX
// 004e04f9: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004e04fe: ADD ESP,0x8
// 004e0501: PUSH EBX
// 004e0502: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 004e0507: ADD ESP,0x4
// 004e050a: PUSH 0x62c824
//   XREF to: 0062c824 (DATA)
// 004e050f: PUSH 0x0
// 004e0511: MOV EDI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 004e0517: PUSH EDI
//   XREF to: 03f6af64 (DATA)
// 004e0518: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004e051d: ADD ESP,0xc
// 004e0520: PUSH 0x62c830
//   Label: LAB_004e0520
//   XREF to: 0062c830 (DATA)
// 004e0525: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004e052a: MOV EBX,EAX
// 004e052c: ADD ESP,0x4
// 004e052f: XOR EAX,EAX
// 004e0531: MOV EDI,EBX
// 004e0533: MOV dword ptr [ESP + 0x370],EAX
// 004e053a: SUB ECX,ECX
// 004e053c: DEC ECX
// 004e053d: XOR EAX,EAX
// 004e053f: SCASB.REPNE ES:EDI
// 004e0541: NOT ECX
// 004e0543: DEC ECX
// 004e0544: MOV dword ptr [ESP + 0x36c],ECX
// 004e054b: TEST ECX,ECX
// 004e054d: JLE 0x004e058a
//   XREF to: 004e058a (CONDITIONAL_JUMP)
// 004e054f: MOV EAX,ECX
// 004e0551: NEG EAX
// 004e0553: MOV EDI,ECX
// 004e0555: ADD ECX,EAX
// 004e0557: MOV dword ptr [ESP + 0x434],ECX
// 004e055e: XOR EAX,EAX
//   Label: LAB_004e055e
// 004e0560: MOV AL,byte ptr [EBX]
// 004e0562: PUSH EAX
// 004e0563: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004e056a: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004e056f: ADD ESP,0x4
// 004e0572: CMP ESI,EAX
// 004e0574: JNZ 0x004e057d
//   XREF to: 004e057d (CONDITIONAL_JUMP)
// 004e0576: INC dword ptr [ESP + 0x370]
// 004e057d: MOV ECX,dword ptr [ESP + 0x434]
//   Label: LAB_004e057d
// 004e0584: DEC EDI
// 004e0585: INC EBX
// 004e0586: CMP EDI,ECX
// 004e0588: JG 0x004e055e
//   XREF to: 004e055e (CONDITIONAL_JUMP)
// 004e058a: MOV EAX,dword ptr [ESP + 0x370]
//   Label: LAB_004e058a
// 004e0591: CMP EAX,dword ptr [ESP + 0x36c]
// 004e0598: JNZ 0x004e05b1
//   XREF to: 004e05b1 (CONDITIONAL_JUMP)
// 004e059a: PUSH 0x3
// 004e059c: XOR CH,CH
// 004e059e: PUSH 0x62c864
//   XREF to: 0062c864 (DATA)
// 004e05a3: MOV byte ptr [0x02d831d8],CH
//   XREF to: 02d831d8 (WRITE)
// 004e05a9: CALL core_game.cpp_FUN_004dd930
//   XREF to: 004dd930 (UNCONDITIONAL_CALL)
// 004e05ae: ADD ESP,0x8
// 004e05b1: PUSH 0x62c869
//   Label: LAB_004e05b1
//   XREF to: 0062c869 (DATA)
// 004e05b6: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004e05bb: XOR ESI,ESI
// 004e05bd: ADD ESP,0x4
// 004e05c0: MOV EDI,EAX
// 004e05c2: MOV EBX,EAX
// 004e05c4: SUB ECX,ECX
// 004e05c6: DEC ECX
// 004e05c7: XOR EAX,EAX
// 004e05c9: SCASB.REPNE ES:EDI
// 004e05cb: NOT ECX
// 004e05cd: DEC ECX
// 004e05ce: MOV dword ptr [ESP + 0x378],ESI
// 004e05d5: MOV dword ptr [ESP + 0x374],ECX
// 004e05dc: TEST ECX,ECX
// 004e05de: JLE 0x004e061b
//   XREF to: 004e061b (CONDITIONAL_JUMP)
// 004e05e0: MOV EAX,ECX
// 004e05e2: NEG EAX
// 004e05e4: MOV EDI,ECX
// 004e05e6: ADD ECX,EAX
// 004e05e8: MOV dword ptr [ESP + 0x438],ECX
// 004e05ef: XOR EAX,EAX
//   Label: LAB_004e05ef
// 004e05f1: MOV AL,byte ptr [EBX]
// 004e05f3: PUSH EAX
// 004e05f4: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004e05fb: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004e0600: ADD ESP,0x4
// 004e0603: CMP ESI,EAX
// 004e0605: JNZ 0x004e060e
//   XREF to: 004e060e (CONDITIONAL_JUMP)
// 004e0607: INC dword ptr [ESP + 0x378]
// 004e060e: MOV EDX,dword ptr [ESP + 0x438]
//   Label: LAB_004e060e
// 004e0615: DEC EDI
// 004e0616: INC EBX
// 004e0617: CMP EDI,EDX
// 004e0619: JG 0x004e05ef
//   XREF to: 004e05ef (CONDITIONAL_JUMP)
// 004e061b: MOV EAX,dword ptr [ESP + 0x378]
//   Label: LAB_004e061b
// 004e0622: MOV ECX,dword ptr [ESP + 0x374]
// 004e0629: CMP EAX,ECX
// 004e062b: JNZ 0x004e0643
//   XREF to: 004e0643 (CONDITIONAL_JUMP)
// 004e062d: PUSH 0x7
// 004e062f: XOR AL,CL
// 004e0631: PUSH 0x62c89b
//   XREF to: 0062c89b (DATA)
// 004e0636: MOV [0x02d831d8],AL
//   XREF to: 02d831d8 (WRITE)
// 004e063b: CALL core_game.cpp_FUN_004dd930
//   XREF to: 004dd930 (UNCONDITIONAL_CALL)
// 004e0640: ADD ESP,0x8
// 004e0643: PUSH 0x62c8a0
//   Label: LAB_004e0643
//   XREF to: 0062c8a0 (DATA)
// 004e0648: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004e064d: XOR ESI,ESI
// 004e064f: ADD ESP,0x4
// 004e0652: MOV EDI,EAX
// 004e0654: MOV EBX,EAX
// 004e0656: SUB ECX,ECX
// 004e0658: DEC ECX
// 004e0659: XOR EAX,EAX
// 004e065b: SCASB.REPNE ES:EDI
// 004e065d: NOT ECX
// 004e065f: DEC ECX
// 004e0660: MOV dword ptr [ESP + 0x380],ESI
// 004e0667: MOV dword ptr [ESP + 0x37c],ECX
// 004e066e: TEST ECX,ECX
// 004e0670: JLE 0x004e06ad
//   XREF to: 004e06ad (CONDITIONAL_JUMP)
// 004e0672: MOV EAX,ECX
// 004e0674: NEG EAX
// 004e0676: MOV EDI,ECX
// 004e0678: ADD ECX,EAX
// 004e067a: MOV dword ptr [ESP + 0x43c],ECX
// 004e0681: XOR EAX,EAX
//   Label: LAB_004e0681
// 004e0683: MOV AL,byte ptr [EBX]
// 004e0685: PUSH EAX
// 004e0686: MOVZX ESI,byte ptr [EDI + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004e068d: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004e0692: ADD ESP,0x4
// 004e0695: CMP ESI,EAX
// 004e0697: JNZ 0x004e06a0
//   XREF to: 004e06a0 (CONDITIONAL_JUMP)
// 004e0699: INC dword ptr [ESP + 0x380]
// 004e06a0: MOV EDX,dword ptr [ESP + 0x43c]
//   Label: LAB_004e06a0
// 004e06a7: DEC EDI
// 004e06a8: INC EBX
// 004e06a9: CMP EDI,EDX
// 004e06ab: JG 0x004e0681
//   XREF to: 004e0681 (CONDITIONAL_JUMP)
// 004e06ad: MOV EAX,dword ptr [ESP + 0x380]
//   Label: LAB_004e06ad
// 004e06b4: MOV ECX,dword ptr [ESP + 0x37c]
// 004e06bb: CMP EAX,ECX
// 004e06bd: JNZ 0x004e06d6
//   XREF to: 004e06d6 (CONDITIONAL_JUMP)
// 004e06bf: PUSH 0x8
// 004e06c1: XOR AH,CH
// 004e06c3: PUSH 0x62c8d5
//   XREF to: 0062c8d5 (DATA)
// 004e06c8: MOV byte ptr [0x02d831d8],AH
//   XREF to: 02d831d8 (WRITE)
// 004e06ce: CALL core_game.cpp_FUN_004dd930
//   XREF to: 004dd930 (UNCONDITIONAL_CALL)
// 004e06d3: ADD ESP,0x8
// 004e06d6: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004e06d6
//   XREF to: Stack[0x4] (READ)
// 004e06d9: CMP dword ptr [EAX + 0x210],0x0
// 004e06e0: JZ 0x004ddb9f
//   XREF to: 004ddb9f (CONDITIONAL_JUMP)
// 004e06e6: PUSH 0x62c8da
//   XREF to: 0062c8da (DATA)
// 004e06eb: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 004e06f0: XOR EDI,EDI
// 004e06f2: ADD ESP,0x4
// 004e06f5: MOV dword ptr [ESP + 0x388],EDI
// 004e06fc: MOV EDI,EAX
// 004e06fe: MOV ESI,EAX
// 004e0700: SUB ECX,ECX
// 004e0702: DEC ECX
// 004e0703: XOR EAX,EAX
// 004e0705: SCASB.REPNE ES:EDI
// 004e0707: NOT ECX
// 004e0709: DEC ECX
// 004e070a: MOV dword ptr [ESP + 0x384],ECX
// 004e0711: TEST ECX,ECX
// 004e0713: JLE 0x004e0749
//   XREF to: 004e0749 (CONDITIONAL_JUMP)
// 004e0715: MOV EAX,ECX
// 004e0717: NEG EAX
// 004e0719: MOV EBX,ECX
// 004e071b: ADD ECX,EAX
// 004e071d: MOV dword ptr [ESP + 0x440],ECX
// 004e0724: XOR EAX,EAX
//   Label: LAB_004e0724
// 004e0726: MOV AL,byte ptr [ESI]
// 004e0728: PUSH EAX
// 004e0729: MOVZX EDI,byte ptr [EBX + 0x2d831d7]
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d8 (READ)
// 004e0730: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004e0735: ADD ESP,0x4
// 004e0738: CMP EDI,EAX
// 004e073a: JZ 0x004e0789
//   XREF to: 004e0789 (CONDITIONAL_JUMP)
// 004e073c: MOV EDX,dword ptr [ESP + 0x440]
//   Label: LAB_004e073c
// 004e0743: DEC EBX
// 004e0744: INC ESI
// 004e0745: CMP EBX,EDX
// 004e0747: JG 0x004e0724
//   XREF to: 004e0724 (CONDITIONAL_JUMP)
// 004e0749: MOV EAX,dword ptr [ESP + 0x388]
//   Label: LAB_004e0749
// 004e0750: CMP EAX,dword ptr [ESP + 0x384]
// 004e0757: JNZ 0x004ddb9f
//   XREF to: 004ddb9f (CONDITIONAL_JUMP)
// 004e075d: XOR DL,DL
// 004e075f: MOV EBX,dword ptr [0x02d831c0]
//   XREF to: 02d831c0 (READ)
// 004e0765: MOV byte ptr [0x02d831d8],DL
//   XREF to: 02d831d8 (WRITE)
// 004e076b: TEST EBX,EBX
// 004e076d: SETZ AL
// 004e0770: AND EAX,0xff
// 004e0775: MOV [0x02d831c0],EAX
//   XREF to: 02d831c0 (WRITE)
// 004e077a: JMP 0x004ddb9f
//   XREF to: 004ddb9f (UNCONDITIONAL_JUMP)
// 004e077f: PUSH 0x62c6ff
//   Label: LAB_004e077f
//   XREF to: 0062c6ff (DATA)
// 004e0784: JMP 0x004e01ce
//   XREF to: 004e01ce (UNCONDITIONAL_JUMP)
// 004e0789: INC dword ptr [ESP + 0x388]
//   Label: LAB_004e0789
// 004e0790: JMP 0x004e073c
//   XREF to: 004e073c (UNCONDITIONAL_JUMP)
