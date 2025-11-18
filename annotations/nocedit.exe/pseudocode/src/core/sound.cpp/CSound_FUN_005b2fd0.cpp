// Name: core_sound.cpp_CSound_FUN_005b2fd0
// Address: 005b2fd0
// Address Range: [[005b2fd0, 005b382a]]
// Convention: __cdecl
// Signature: void core_sound.cpp_CSound_FUN_005b2fd0(CSound * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004dab51 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_005b2fbc = 005b3692
//   TerminatedCString s_x_0065270a
//   TerminatedCString s_ext_0065270c
//   TerminatedCString s_int_00652710
//   TerminatedCString s_ext_00652714
//   TerminatedCString s_int_00652718
//   TerminatedCString s_trainext_wav_0065271c
//   TerminatedCString s_railnoiz_wav_00652729
//   TerminatedCString s_rail_s_wav_00652736
//   undefined1 DAT_00652742
//   undefined1 DAT_00652743
//   TerminatedCString s_mp_wav_00652744
//   undefined4 s_p?.wav_00652745
//   TerminatedCString s_s_g_0065274c
//   TerminatedCString s_wind_ctl_wav_0065277e
//   TerminatedCString s_NDUN_0065278b
//   TerminatedCString s_water_2_wav_00652790
//   double DOUBLE_0065279e = 0.5
//   double DOUBLE_006527a6 = 0.00100000000000000
//   double DOUBLE_006527ae = 0.0277777777777778
//   double DOUBLE_006527b6 = 0.200000000000000
//   double DOUBLE_006527be = 0.700000000000000
//   float FLOAT_006527c6 = 20
//   double DOUBLE_006527ce = 1.5
//   double DOUBLE_006527d6 = 0.800000000000000
//   double DOUBLE_006527de = 0.600000000000000
//   double DOUBLE_006527e6 = 510
//   CGame* g_CGamePtr = 02d81a9c
//   CDemonSet* g_CDemonSetPtr = 03114278
//   void* PTR_s_int_00681ef0 = 00652706
//   void* PTR_s_x_00681ef4 = 0065270a
//   CSound* g_CSoundPtr = 03f6af64
//   undefined4 DAT_00682118
//   undefined4 DAT_0068211c
//   CWater* g_CWaterPtr = 03f875e0
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.block_auto_save
//   undefined4 g_CGameInstance.delta_time_float
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_03261368
//   undefined4 g_CDemonSetInstance.field29_0x15aca8
//   undefined4 g_CDemonSetInstance.selected_camera_index
//   CSound g_CSoundInstance
//   undefined4 DAT_03f6af68
//   undefined4 DAT_03f6af6c
//   undefined4 DAT_03f6af70
//   undefined4 DAT_03f6af74
//   undefined4 DAT_03f6af78
//   undefined4 DAT_03f6af7c
//   undefined4 DAT_03f6af80
//   undefined4 DAT_03f6af84
//   undefined4 DAT_03f6b7b0
//   undefined4 DAT_03f6b7b4
//   undefined4 DAT_03f6b7b8
//   STrainNoise[10] STrainNoise_ARRAY_03f6b7bc
//   undefined4 STrainNoise_ARRAY_03f6b7bc[0].field0_0x0[4]
//   undefined4 STrainNoise_ARRAY_03f6b7bc[0].field0_0x0[8]
//   undefined4 DAT_03f6b7c8
//   undefined4 DAT_03f6b7cc
//   undefined4 DAT_03f6b7d8
//   undefined4 DAT_03f6b85c
//   undefined4 DAT_03f6b860
//   undefined4 DAT_03f6b864
//   undefined4 DAT_03f6b868
//   undefined4 DAT_03f6b86c
//   undefined4 DAT_03f6b870
//   undefined4 DAT_03f6b874
//   undefined4 g_CWaterInstance.visible_area_sqft
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460
//   core_sound.cpp_CSound_FUN_005b3a70
//   core_sound.cpp_CSound_FUN_005b3b80
//   core_sound.cpp_CSound_FUN_005b3b90
//   core_sound.cpp_FUN_005b1870
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdlib.c_rand_FUN_005feb5c
//   crt_string.c_stricmp_FUN_005fe7f0
//   crt_string.c_strnicmp_FUN_005ff070
//   sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
//   sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
//   sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
//   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
//   sound_sndmain.cpp_killSfx_FUN_005a9c40
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0
//   sound_sndmain.cpp_setNextSfxFlags_FUN_005a8b70
//   sound_sndmain.cpp_setNextSfxTrackedVelocity_FUN_005a8a00
//   sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60
//   sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0
//   sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0
//   sound_sndmain.cpp_startSfx_FUN_005a8e90

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_CSound_FUN_005b2fd0(CSound *this_ptr)

{
  char cVar1;
  float fVar2;
  float fVar3;
  STrainNoise *pSVar4;
  int extraout_EAX;
  int iVar5;
  int extraout_EAX_00;
  int iVar6;
  undefined4 extraout_EAX_01;
  STrainNoise *pSVar7;
  BADSPACEBASE *in_ESP;
  char *pcVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  byte bVar12;
  undefined4 uStack00000038;
  float in_stack_00000040;
  int iStack00000044;
  STrainNoise *in_stack_00000048;
  undefined4 *in_stack_0000004c;
  float fStack00000050;
  float fStack00000058;
  int in_stack_00000064;
  float fVar13;
  float in_stack_ffffff14;
  float in_stack_ffffff1c;
  float in_stack_ffffff2c;
  float fStack_c8;
  char acStack_bc [4];
  char acStack_b8 [72];
  undefined4 auStack_70 [2];
  char local_68 [16];
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_3c;
  CVector3f local_38;
  CVector3f local_2c;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar12 = 0;
  local_3c = g_CGamePtr->delta_time_float;
  local_20 = local_3c * (float)DOUBLE_0065279e;
  local_38.z = local_3c;
  core_sound_cpp_FUN_005b1870();
  local_38.y = -local_1c;
  local_20 = _DAT_03f6af7c - DAT_03f6af80;
  if (local_20 < local_38.y) {
    local_20 = local_38.y;
  }
  if (local_1c < local_20) {
    local_20 = local_1c;
  }
  DAT_03f6af80 = DAT_03f6af80 + local_20;
  if (DAT_03f6af80 <= (float)DOUBLE_006527a6) {
    core_sound_cpp_CSound_FUN_005b3b90(this_ptr);
    DAT_03f6af80 = 0.0;
  }
  else {
    core_sound_cpp_CSound_FUN_005b3b80(this_ptr);
    if (extraout_EAX == 0) {
      DAT_03f6af68 = sound_sndmain_cpp_startSfx_FUN_005a8e90("wind-ctl.wav");
    }
    sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0(DAT_03f6af68,DAT_03f6af80);
  }
  fVar13 = 0.0;
  if (((0.0 < g_CWaterPtr->visible_area_sqft) &&
      (iVar5 = crt_string_c_strnicmp_FUN_005ff070
                         (g_CDemonSetPtr->geometry_filename,"NDUN",4), iVar5 == 0)) &&
     (fVar13 = SQRT(g_CWaterPtr->visible_area_sqft) * (float)DOUBLE_006527ae +
               (float)DOUBLE_006527b6, (float)DOUBLE_006527be < fVar13)) {
    fVar13 = 0.7;
  }
  local_2c.x = -local_18;
  local_20 = fVar13 - DAT_03f6af84;
  if (local_20 < local_2c.x) {
    local_20 = local_2c.x;
  }
  if (local_18 < local_20) {
    local_20 = local_18;
  }
  DAT_03f6af84 = DAT_03f6af84 + local_20;
  if (DAT_03f6af84 <= (float)DOUBLE_006527a6) {
    core_sound_cpp_CSound_FUN_005b3b90(this_ptr);
    DAT_03f6af84 = 0.0;
  }
  else {
    core_sound_cpp_CSound_FUN_005b3b80(this_ptr);
    if (extraout_EAX_00 == 0) {
      DAT_03f6af6c = sound_sndmain_cpp_startSfx_FUN_005a8e90("water-2.wav");
    }
    sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0(DAT_03f6af6c,DAT_03f6af84);
  }
  if (_DAT_03f6b7b8 <= local_2c.z) {
    _DAT_03f6b7b0 = _DAT_03f6b7b4;
    _DAT_03f6b7b8 = 0.0;
  }
  else {
    fVar13 = local_2c.z / _DAT_03f6b7b8;
    _DAT_03f6b7b8 = _DAT_03f6b7b8 - local_2c.z;
    _DAT_03f6b7b0 = fVar13 * (_DAT_03f6b7b4 - _DAT_03f6b7b0) + _DAT_03f6b7b0;
  }
  iVar5 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
  if (iVar5 == 0) {
    sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(3,0);
  }
  else {
    sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(3,1);
    fVar13 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
    sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(3,fVar13 * _DAT_03f6b7b0);
  }
  if (g_CDemonSetPtr->field29_0x15aca8 != 0) {
    if (g_CGamePtr->block_auto_save == 0) {
      if (DAT_03f6b86c != g_CDemonSetPtr->selected_camera_index) {
        core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00574210(g_CDemonSetPtr);
        local_38.x = DAT_03f6af70;
        local_38.y = DAT_03f6af74;
        local_38.z = DAT_03f6af78;
        local_4c = 0x41a00000;
        local_2c.x = DAT_03f6af70;
        local_50 = 0;
        local_2c.z = DAT_03f6af78;
        local_48 = 0;
        local_2c.y = DAT_03f6af74 + FLOAT_006527c6;
        iVar5 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                          (g_CDemonSetPtr,&local_38,&local_2c);
        if (iVar5 == 0) {
          PTR_s_int_00681ef0 = "ext";
        }
        else {
          PTR_s_int_00681ef0 = "int";
        }
        core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
        DAT_03f6b86c = g_CDemonSetPtr->selected_camera_index;
      }
    }
    else {
      DAT_03f6b86c = -1;
      PTR_s_int_00681ef0 = "ext";
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(1);
    sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(3);
    iVar5 = crt_string_c_stricmp_FUN_005fe7f0((char *)PTR_s_int_00681ef0,"int");
    if (iVar5 == 0) {
      sound_sndmain_cpp_killSfx_FUN_005a9c40(DAT_03f6b874);
    }
    else {
      iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(DAT_03f6b874);
      if (iVar5 == 0) {
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(0.4);
        DAT_03f6b874 = sound_sndmain_cpp_startSfx_FUN_005a8e90("trainext.wav");
        sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      }
    }
    iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(DAT_03f6b870);
    if (iVar5 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(in_stack_ffffff14 * (float)DOUBLE_006527ce);
      DAT_03f6b870 = sound_sndmain_cpp_startSfx_FUN_005a8e90("railnoiz.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
    else {
      iVar5 = crt_string_c_stricmp_FUN_005fe7f0((char *)PTR_s_x_00681ef4,(char *)PTR_s_int_00681ef0)
      ;
      if (iVar5 != 0) {
        sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0
                  (DAT_03f6b870,in_stack_ffffff1c * (float)DOUBLE_006527ce);
      }
    }
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    pSVar7 = STrainNoise_ARRAY_03f6b7bc;
    iVar5 = 0;
    PTR_s_x_00681ef4 = PTR_s_int_00681ef0;
    _DAT_03f6b85c = 0.0;
    _DAT_03f6b860 = 0.0;
    _DAT_03f6b864 = 30.0;
    iStack00000044 = 0;
    do {
      iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                        (*(uint *)(STrainNoise_ARRAY_03f6b7bc[iVar5].field0_0x0 + 0xc));
      pSVar4 = pSVar7;
      if (iVar6 != 0) {
        fVar2 = _DAT_03f6b860 * (float)in_stack_0000004c;
        fVar3 = _DAT_03f6b864 * (float)in_stack_0000004c;
        fVar13 = *(float *)(pSVar7->field0_0x0 + 4);
        *(float *)pSVar7->field0_0x0 =
             *(float *)pSVar7->field0_0x0 + _DAT_03f6b85c * (float)in_stack_0000004c;
        *(float *)(pSVar7->field0_0x0 + 4) = fVar13 + fVar2;
        *(float *)(pSVar7->field0_0x0 + 8) = *(float *)(pSVar7->field0_0x0 + 8) + fVar3;
        pSVar4 = in_stack_00000048;
        if ((float)DOUBLE_006527e6 <
            ABS(*(float *)(STrainNoise_ARRAY_03f6b7bc[iVar5].field0_0x0 + 8))) {
          sound_sndmain_cpp_killSfx_FUN_005a9c40
                    (*(uint *)(STrainNoise_ARRAY_03f6b7bc[iVar5].field0_0x0 + 0xc));
        }
      }
      in_stack_00000048 = pSVar4;
      iVar5 = iVar5 + 1;
      pSVar7 = pSVar7 + 1;
    } while (iVar5 < 10);
    _DAT_03f6b868 = _DAT_03f6b868 - (float)in_stack_00000048;
    if ((_DAT_03f6b868 <= 0.0) && (iStack00000044 != 0)) {
      _DAT_03f6b868 = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,5.0);
      uStack00000038 = 0x41a00000;
      puVar9 = &DAT_00682118;
      puVar11 = auStack_70;
      for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
        puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
      }
      fStack00000050 = _DAT_03f6b868;
      iVar5 = crt_stdlib_c_rand_FUN_005feb5c();
      switch(iVar5 % 5) {
      case 0:
      case 1:
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_68,"rail?%s.wav",PTR_s_int_00681ef0,
                   in_stack_ffffff2c * (float)DOUBLE_006527de);
        break;
      case 2:
      case 3:
        pcVar8 = &DAT_00652742;
        pcVar10 = local_68;
        do {
          cVar1 = *pcVar8;
          *pcVar10 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar10[1] = cVar1;
          pcVar10 = pcVar10 + 2;
        } while (cVar1 != '\0');
        break;
      case 4:
        goto switchD_005b3824_caseD_4;
      }
      *in_stack_0000004c = 0;
      fStack00000058 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.0,2.0);
      fVar13 = fStack00000058 * in_stack_00000040 + DAT_03f6af78;
      *(undefined4 *)((int)fStack00000050 + 4) = 0;
      *(float *)((int)fStack00000050 + 8) = fVar13;
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(3);
      sound_sndmain_cpp_setNextSfxTrackedVelocity_FUN_005a8a00((CVector3f *)&DAT_03f6b85c);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_bc,"%s @ %g",local_58,(double)fStack_c8);
      core_sound_cpp_CSound_FUN_005b3a70(g_CSoundPtr,(char *)0x0,acStack_b8);
      *(undefined4 *)(in_stack_00000064 + 0xc) = extraout_EAX_01;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      return;
    }
  }
switchD_005b3824_caseD_4:
  return;
}


// Assembly code:
// 005b2fd0: PUSH EBX
//   Label: core_sound.cpp_CSound_FUN_005b2fd0
// 005b2fd1: PUSH ESI
// 005b2fd2: PUSH EDI
// 005b2fd3: PUSH EBP
// 005b2fd4: MOV EBP,ESP
// 005b2fd6: SUB ESP,0x130
// 005b2fdc: AND ESP,0xfffffff8
// 005b2fdf: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005b2fe2: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 005b2fe7: MOV EAX,dword ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 005b2fed: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005b2ff4: FLD float ptr [ESP + 0x104]
//   XREF to: Stack[-0x3c] (READ)
// 005b2ffb: FMUL double ptr [0x0065279e]
//   XREF to: 0065279e (READ)
// 005b3001: MOV dword ptr [ESP + 0x110],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005b3008: FSTP float ptr [ESP + 0x120]
//   XREF to: Stack[-0x20] (WRITE)
// 005b300f: CALL core_sound.cpp_FUN_005b1870
//   XREF to: 005b1870 (UNCONDITIONAL_CALL)
// 005b3014: FLD float ptr [0x03f6af7c]
//   XREF to: 03f6af7c (READ)
// 005b301a: FLD float ptr [ESP + 0x120]
//   XREF to: Stack[-0x20] (READ)
// 005b3021: FCHS
// 005b3023: FXCH
// 005b3025: FSUB float ptr [0x03f6af80]
//   XREF to: 03f6af80 (READ)
// 005b302b: FXCH
// 005b302d: FSTP float ptr [ESP + 0x108]
//   XREF to: Stack[-0x38] (WRITE)
// 005b3034: FST float ptr [ESP + 0x11c]
//   XREF to: Stack[-0x24] (WRITE)
// 005b303b: FCOMP float ptr [ESP + 0x108]
//   XREF to: Stack[-0x38] (READ)
// 005b3042: FNSTSW AX
// 005b3044: SAHF
// 005b3045: JC 0x005b3517
//   XREF to: 005b3517 (CONDITIONAL_JUMP)
// 005b304b: FLD float ptr [ESP + 0x11c]
//   Label: LAB_005b304b
//   XREF to: Stack[-0x24] (READ)
// 005b3052: FCOMP float ptr [ESP + 0x120]
//   XREF to: Stack[-0x20] (READ)
// 005b3059: FNSTSW AX
// 005b305b: SAHF
// 005b305c: JBE 0x005b306c
//   XREF to: 005b306c (CONDITIONAL_JUMP)
// 005b305e: MOV EAX,dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x20] (READ)
// 005b3065: MOV dword ptr [ESP + 0x11c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005b306c: FLD float ptr [0x03f6af80]
//   Label: LAB_005b306c
//   XREF to: 03f6af80 (READ)
// 005b3072: FADD float ptr [ESP + 0x11c]
//   XREF to: Stack[-0x24] (READ)
// 005b3079: FST float ptr [0x03f6af80]
//   XREF to: 03f6af80 (WRITE)
// 005b307f: FCOMP double ptr [0x006527a6]
//   XREF to: 006527a6 (READ)
// 005b3085: FNSTSW AX
// 005b3087: SAHF
// 005b3088: JBE 0x005b3541
//   XREF to: 005b3541 (CONDITIONAL_JUMP)
// 005b308e: MOV ESI,dword ptr [0x03f6af68]
//   XREF to: 03f6af68 (READ)
// 005b3094: PUSH ESI
// 005b3095: PUSH EBX
// 005b3096: CALL core_sound.cpp_CSound_FUN_005b3b80
//   XREF to: 005b3b80 (UNCONDITIONAL_CALL)
// 005b309b: ADD ESP,0x8
// 005b309e: TEST EAX,EAX
// 005b30a0: JZ 0x005b352a
//   XREF to: 005b352a (CONDITIONAL_JUMP)
// 005b30a6: MOV EDI,dword ptr [0x03f6af68]
//   Label: LAB_005b30a6
//   XREF to: 03f6af68 (READ)
// 005b30ac: PUSH dword ptr [0x03f6af80]
//   XREF to: 03f6af80 (READ)
// 005b30b2: PUSH EDI
// 005b30b3: CALL sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0
//   XREF to: 005a9ae0 (UNCONDITIONAL_CALL)
// 005b30b8: ADD ESP,0x8
// 005b30bb: XOR EAX,EAX
//   Label: LAB_005b30bb
// 005b30bd: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x138] (WRITE)
// 005b30c1: MOV EAX,[0x006844f0]
//   XREF to: 006844f0 (READ)
// 005b30c6: FLD float ptr [EAX + 0xc]
//   XREF to: 03f875ec (READ)
// 005b30c9: FLDZ
// 005b30cb: FCOMPP
// 005b30cd: FNSTSW AX
// 005b30cf: SAHF
// 005b30d0: JNC 0x005b311d
//   XREF to: 005b311d (CONDITIONAL_JUMP)
// 005b30d2: PUSH 0x4
// 005b30d4: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 005b30d9: PUSH 0x65278b
//   XREF to: 0065278b (DATA)
// 005b30de: ADD EAX,0x14d0f0
// 005b30e3: PUSH EAX
//   XREF to: 03261368 (DATA)
// 005b30e4: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 005b30e9: ADD ESP,0xc
// 005b30ec: TEST EAX,EAX
// 005b30ee: JNZ 0x005b311d
//   XREF to: 005b311d (CONDITIONAL_JUMP)
// 005b30f0: MOV EAX,[0x006844f0]
//   XREF to: 006844f0 (READ)
// 005b30f5: FLD float ptr [EAX + 0xc]
//   XREF to: 03f875ec (READ)
// 005b30f8: FSQRT
// 005b30fa: FMUL double ptr [0x006527ae]
//   XREF to: 006527ae (READ)
// 005b3100: FADD double ptr [0x006527b6]
//   XREF to: 006527b6 (READ)
// 005b3106: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x138] (WRITE)
// 005b310a: FCOMP double ptr [0x006527be]
//   XREF to: 006527be (READ)
// 005b3110: FNSTSW AX
// 005b3112: SAHF
// 005b3113: JBE 0x005b311d
//   XREF to: 005b311d (CONDITIONAL_JUMP)
// 005b3115: MOV dword ptr [ESP + 0x8],0x3f333333
//   XREF to: Stack[-0x138] (WRITE)
// 005b311d: FLD float ptr [ESP + 0x8]
//   Label: LAB_005b311d
//   XREF to: Stack[-0x138] (READ)
// 005b3121: FLD float ptr [ESP + 0x120]
//   XREF to: Stack[-0x20] (READ)
// 005b3128: FCHS
// 005b312a: FXCH
// 005b312c: FSUB float ptr [0x03f6af84]
//   XREF to: 03f6af84 (READ)
// 005b3132: FXCH
// 005b3134: FSTP float ptr [ESP + 0x10c]
//   XREF to: Stack[-0x34] (WRITE)
// 005b313b: FST float ptr [ESP + 0x118]
//   XREF to: Stack[-0x28] (WRITE)
// 005b3142: FCOMP float ptr [ESP + 0x10c]
//   XREF to: Stack[-0x34] (READ)
// 005b3149: FNSTSW AX
// 005b314b: SAHF
// 005b314c: JNC 0x005b315c
//   XREF to: 005b315c (CONDITIONAL_JUMP)
// 005b314e: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x34] (READ)
// 005b3155: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005b315c: FLD float ptr [ESP + 0x118]
//   Label: LAB_005b315c
//   XREF to: Stack[-0x28] (READ)
// 005b3163: FCOMP float ptr [ESP + 0x120]
//   XREF to: Stack[-0x20] (READ)
// 005b316a: FNSTSW AX
// 005b316c: SAHF
// 005b316d: JBE 0x005b317d
//   XREF to: 005b317d (CONDITIONAL_JUMP)
// 005b316f: MOV EAX,dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x20] (READ)
// 005b3176: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005b317d: FLD float ptr [0x03f6af84]
//   Label: LAB_005b317d
//   XREF to: 03f6af84 (READ)
// 005b3183: FADD float ptr [ESP + 0x118]
//   XREF to: Stack[-0x28] (READ)
// 005b318a: FST float ptr [0x03f6af84]
//   XREF to: 03f6af84 (WRITE)
// 005b3190: FCOMP double ptr [0x006527a6]
//   XREF to: 006527a6 (READ)
// 005b3196: FNSTSW AX
// 005b3198: SAHF
// 005b3199: JBE 0x005b3575
//   XREF to: 005b3575 (CONDITIONAL_JUMP)
// 005b319f: MOV ESI,dword ptr [0x03f6af6c]
//   XREF to: 03f6af6c (READ)
// 005b31a5: PUSH ESI
// 005b31a6: PUSH EBX
// 005b31a7: CALL core_sound.cpp_CSound_FUN_005b3b80
//   XREF to: 005b3b80 (UNCONDITIONAL_CALL)
// 005b31ac: ADD ESP,0x8
// 005b31af: TEST EAX,EAX
// 005b31b1: JZ 0x005b355e
//   XREF to: 005b355e (CONDITIONAL_JUMP)
// 005b31b7: MOV EDI,dword ptr [0x03f6af6c]
//   Label: LAB_005b31b7
//   XREF to: 03f6af6c (READ)
// 005b31bd: PUSH dword ptr [0x03f6af84]
//   XREF to: 03f6af84 (READ)
// 005b31c3: PUSH EDI
// 005b31c4: CALL sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0
//   XREF to: 005a9ae0 (UNCONDITIONAL_CALL)
// 005b31c9: ADD ESP,0x8
// 005b31cc: FLD float ptr [0x03f6b7b8]
//   Label: LAB_005b31cc
//   XREF to: 03f6b7b8 (READ)
// 005b31d2: FCOMP float ptr [ESP + 0x110]
//   XREF to: Stack[-0x30] (READ)
// 005b31d9: FNSTSW AX
// 005b31db: SAHF
// 005b31dc: JBE 0x005b3592
//   XREF to: 005b3592 (CONDITIONAL_JUMP)
// 005b31e2: FLD float ptr [0x03f6b7b4]
//   XREF to: 03f6b7b4 (READ)
// 005b31e8: FSUB float ptr [0x03f6b7b0]
//   XREF to: 03f6b7b0 (READ)
// 005b31ee: FLD float ptr [ESP + 0x110]
//   XREF to: Stack[-0x30] (READ)
// 005b31f5: FLD ST0
// 005b31f7: FDIV float ptr [0x03f6b7b8]
//   XREF to: 03f6b7b8 (READ)
// 005b31fd: FMULP ST2
// 005b31ff: FSUBR float ptr [0x03f6b7b8]
//   XREF to: 03f6b7b8 (READ)
// 005b3205: FXCH
// 005b3207: FADD float ptr [0x03f6b7b0]
//   XREF to: 03f6b7b0 (READ)
// 005b320d: FXCH
// 005b320f: FSTP float ptr [0x03f6b7b8]
//   XREF to: 03f6b7b8 (WRITE)
// 005b3215: FSTP float ptr [0x03f6b7b0]
//   XREF to: 03f6b7b0 (WRITE)
// 005b321b: PUSH 0x0
//   Label: LAB_005b321b
// 005b321d: CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
//   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)
// 005b3222: ADD ESP,0x4
// 005b3225: TEST EAX,EAX
// 005b3227: JZ 0x005b35aa
//   XREF to: 005b35aa (CONDITIONAL_JUMP)
// 005b322d: PUSH 0x1
// 005b322f: PUSH 0x3
// 005b3231: CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
//   XREF to: 005a9e20 (UNCONDITIONAL_CALL)
// 005b3236: ADD ESP,0x8
// 005b3239: PUSH 0x0
// 005b323b: CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
//   XREF to: 005a9d90 (UNCONDITIONAL_CALL)
// 005b3240: MOV dword ptr [ESP + 0x130],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005b3247: FLD float ptr [ESP + 0x130]
//   XREF to: Stack[-0x14] (READ)
// 005b324e: ADD ESP,0x4
// 005b3251: FMUL float ptr [0x03f6b7b0]
//   XREF to: 03f6b7b0 (READ)
// 005b3257: SUB ESP,0x4
// 005b325a: FSTP float ptr [ESP]
//   XREF to: Stack[-0x144] (DATA)
// 005b325d: PUSH 0x3
// 005b325f: CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0
//   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)
// 005b3264: ADD ESP,0x8
//   Label: LAB_005b3264
// 005b3267: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005b326c: CMP dword ptr [EAX + 0x15aca8],0x0
//   XREF to: 0326ef20 (READ)
// 005b3273: JZ 0x005b3510
//   XREF to: 005b3510 (CONDITIONAL_JUMP)
// 005b3279: MOV EDX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
//   XREF to: 02d81a9c (PARAM)
// 005b327f: FLD float ptr [EDX + 0x264]
//   XREF to: 02d81d00 (READ)
// 005b3285: MOV ECX,dword ptr [EDX + 0x240]
//   XREF to: 02d81cdc (READ)
// 005b328b: FSTP float ptr [ESP + 0x128]
//   XREF to: Stack[-0x18] (WRITE)
// 005b3292: TEST ECX,ECX
// 005b3294: JNZ 0x005b35b7
//   XREF to: 005b35b7 (CONDITIONAL_JUMP)
// 005b329a: MOV EBX,dword ptr [0x03f6b86c]
//   XREF to: 03f6b86c (READ)
// 005b32a0: CMP EBX,dword ptr [EAX + 0x15aea4]
//   XREF to: 0326f11c (READ)
// 005b32a6: JZ 0x005b3384
//   XREF to: 005b3384 (CONDITIONAL_JUMP)
// 005b32ac: PUSH EAX
//   XREF to: 03114278 (DATA)
// 005b32ad: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 005b32b2: ADD ESP,0x4
// 005b32b5: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005b32bb: PUSH ESI
//   XREF to: 03114278 (DATA)
// 005b32bc: CALL core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210
//   XREF to: 00574210 (UNCONDITIONAL_CALL)
// 005b32c1: MOV EAX,[0x03f6af70]
//   XREF to: 03f6af70 (READ)
// 005b32c6: ADD ESP,0x4
// 005b32c9: MOV dword ptr [ESP + 0xec],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005b32d0: MOV EAX,[0x03f6af74]
//   XREF to: 03f6af74 (READ)
// 005b32d5: MOV dword ptr [ESP + 0xf0],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 005b32dc: MOV EAX,[0x03f6af78]
//   XREF to: 03f6af78 (READ)
// 005b32e1: MOV dword ptr [ESP + 0xf4],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 005b32e8: MOV EAX,0x41a00000
// 005b32ed: XOR EDI,EDI
// 005b32ef: MOV dword ptr [ESP + 0xd8],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 005b32f6: MOV EAX,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0x54] (READ)
// 005b32fd: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005b3303: MOV dword ptr [ESP + 0xf8],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005b330a: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0x4c] (READ)
// 005b3311: MOV dword ptr [ESP + 0xd4],EDI
//   XREF to: Stack[-0x6c] (WRITE)
// 005b3318: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005b331f: LEA EAX,[ESP + 0xf8]
//   XREF to: Stack[-0x48] (DATA)
// 005b3326: MOV dword ptr [ESP + 0xdc],EDI
//   XREF to: Stack[-0x64] (WRITE)
// 005b332d: PUSH EAX
// 005b332e: LEA EAX,[ESP + 0xf0]
//   XREF to: Stack[-0x54] (DATA)
// 005b3335: FLD float ptr [ESP + 0xf4]
//   XREF to: Stack[-0x50] (READ)
// 005b333c: PUSH EAX
// 005b333d: FADD float ptr [0x006527c6]
//   XREF to: 006527c6 (READ)
// 005b3343: PUSH ECX
//   XREF to: 03114278 (DATA)
// 005b3344: FSTP float ptr [ESP + 0x108]
//   XREF to: Stack[-0x44] (WRITE)
// 005b334b: CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460
//   XREF to: 00572460 (UNCONDITIONAL_CALL)
// 005b3350: ADD ESP,0xc
// 005b3353: TEST EAX,EAX
// 005b3355: JZ 0x005b35cc
//   XREF to: 005b35cc (CONDITIONAL_JUMP)
// 005b335b: MOV dword ptr [0x00681ef0],0x652710
//   XREF to: 00681ef0 (WRITE)
//   XREF to: 00652710 (DATA)
// 005b3365: MOV EDI,dword ptr [0x006810c8]
//   Label: LAB_005b3365
//   XREF to: 006810c8 (READ)
// 005b336b: PUSH EDI
//   XREF to: 03114278 (DATA)
// 005b336c: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 005b3371: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 005b3376: MOV EAX,dword ptr [EAX + 0x15aea4]
//   XREF to: 0326f11c (READ)
// 005b337c: ADD ESP,0x4
// 005b337f: MOV [0x03f6b86c],EAX
//   Label: LAB_005b337f
//   XREF to: 03f6b86c (WRITE)
// 005b3384: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   Label: LAB_005b3384
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 005b3389: PUSH 0x1
// 005b338b: CALL sound_sndmain.cpp_setNextSfxFlags_FUN_005a8b70
//   XREF to: 005a8b70 (UNCONDITIONAL_CALL)
// 005b3390: ADD ESP,0x4
// 005b3393: PUSH 0x3
// 005b3395: CALL sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0
//   XREF to: 005a8af0 (UNCONDITIONAL_CALL)
// 005b339a: ADD ESP,0x4
// 005b339d: PUSH 0x652718
//   XREF to: 00652718 (DATA)
// 005b33a2: MOV ECX,dword ptr [0x00681ef0]
//   XREF to: 00681ef0 (READ)
// 005b33a8: PUSH ECX
//   XREF to: 00652710 (DATA)
// 005b33a9: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005b33ae: ADD ESP,0x8
// 005b33b1: TEST EAX,EAX
// 005b33b3: JNZ 0x005b35db
//   XREF to: 005b35db (CONDITIONAL_JUMP)
// 005b33b9: MOV EDI,dword ptr [0x03f6b874]
//   XREF to: 03f6b874 (READ)
// 005b33bf: PUSH EDI
// 005b33c0: CALL sound_sndmain.cpp_killSfx_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005b33c5: MOV EAX,0x3ecccccd
// 005b33ca: ADD ESP,0x4
// 005b33cd: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x13c] (WRITE)
// 005b33d1: MOV EDX,dword ptr [0x03f6b870]
//   Label: LAB_005b33d1
//   XREF to: 03f6b870 (READ)
// 005b33d7: PUSH EDX
// 005b33d8: CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 005b33dd: ADD ESP,0x4
// 005b33e0: TEST EAX,EAX
// 005b33e2: JZ 0x005b3629
//   XREF to: 005b3629 (CONDITIONAL_JUMP)
// 005b33e8: MOV ECX,dword ptr [0x00681ef0]
//   XREF to: 00681ef0 (READ)
// 005b33ee: PUSH ECX
//   XREF to: 00652710 (DATA)
// 005b33ef: MOV EBX,dword ptr [0x00681ef4]
//   XREF to: 00681ef4 (READ)
//   XREF to: 0065270a (PARAM)
// 005b33f5: PUSH EBX
//   XREF to: 0065270a (DATA)
// 005b33f6: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005b33fb: ADD ESP,0x8
// 005b33fe: TEST EAX,EAX
// 005b3400: JNZ 0x005b3662
//   XREF to: 005b3662 (CONDITIONAL_JUMP)
// 005b3406: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   Label: LAB_005b3406
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 005b340b: MOV EDX,0x41f00000
// 005b3410: MOV EBX,0x3f6b7bc
//   XREF to: 03f6b7bc (PARAM)
// 005b3415: MOV EAX,[0x00681ef0]
//   XREF to: 00681ef0 (READ)
// 005b341a: XOR EDI,EDI
// 005b341c: XOR ESI,ESI
// 005b341e: MOV [0x00681ef4],EAX
//   XREF to: 00681ef4 (WRITE)
// 005b3423: MOV dword ptr [0x03f6b85c],EDI
//   XREF to: 03f6b85c (WRITE)
// 005b3429: MOV dword ptr [0x03f6b860],EDI
//   XREF to: 03f6b860 (WRITE)
// 005b342f: MOV dword ptr [0x03f6b864],EDX
//   XREF to: 03f6b864 (WRITE)
// 005b3435: MOV dword ptr [ESP + 0x124],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 005b343c: MOV EDI,ESI
//   Label: LAB_005b343c
// 005b343e: SHL EDI,0x4
// 005b3441: MOV EAX,dword ptr [EDI + 0x3f6b7c8]
//   XREF to: 03f6b7c8 (READ)
//   XREF to: 03f6b7d8 (READ)
// 005b3447: PUSH EAX
// 005b3448: CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 005b344d: ADD ESP,0x4
// 005b3450: TEST EAX,EAX
// 005b3452: JZ 0x005b3686
//   XREF to: 005b3686 (CONDITIONAL_JUMP)
// 005b3458: FLD float ptr [ESP + 0x128]
//   XREF to: Stack[-0x18] (READ)
// 005b345f: FLD float ptr [0x03f6b85c]
//   XREF to: 03f6b85c (READ)
// 005b3465: FMUL ST1
// 005b3467: FLD float ptr [0x03f6b860]
//   XREF to: 03f6b860 (READ)
// 005b346d: FMUL ST2
// 005b346f: FLD float ptr [0x03f6b864]
//   XREF to: 03f6b864 (READ)
// 005b3475: FMULP ST3
// 005b3477: FXCH
// 005b3479: FSTP float ptr [ESP + 0xe0]
//   XREF to: Stack[-0x60] (WRITE)
// 005b3480: FSTP float ptr [ESP + 0xe4]
//   XREF to: Stack[-0x5c] (WRITE)
// 005b3487: FSTP float ptr [ESP + 0xe8]
//   XREF to: Stack[-0x58] (WRITE)
// 005b348e: FLD float ptr [EBX]
//   XREF to: 03f6b7bc (READ)
// 005b3490: FADD float ptr [ESP + 0xe0]
//   XREF to: Stack[-0x60] (READ)
// 005b3497: FLD float ptr [EBX + 0x4]
//   XREF to: 03f6b7c0 (READ)
// 005b349a: FXCH
// 005b349c: FSTP float ptr [EBX]
//   XREF to: 03f6b7bc (WRITE)
// 005b349e: FADD float ptr [ESP + 0xe4]
//   XREF to: Stack[-0x5c] (READ)
// 005b34a5: FLD float ptr [EBX + 0x8]
//   XREF to: 03f6b7c4 (READ)
// 005b34a8: FXCH
// 005b34aa: FSTP float ptr [EBX + 0x4]
//   XREF to: 03f6b7c0 (WRITE)
// 005b34ad: FADD float ptr [ESP + 0xe8]
//   XREF to: Stack[-0x58] (READ)
// 005b34b4: FSTP float ptr [EBX + 0x8]
//   XREF to: 03f6b7c4 (WRITE)
// 005b34b7: FLD float ptr [EDI + 0x3f6b7c4]
//   XREF to: 03f6b7c4 (READ)
// 005b34bd: FABS
// 005b34bf: FCOMP double ptr [0x006527e6]
//   XREF to: 006527e6 (READ)
// 005b34c5: FNSTSW AX
// 005b34c7: SAHF
// 005b34c8: JBE 0x005b34d9
//   XREF to: 005b34d9 (CONDITIONAL_JUMP)
// 005b34ca: MOV EDX,dword ptr [EDI + 0x3f6b7c8]
//   XREF to: 03f6b7c8 (READ)
// 005b34d0: PUSH EDX
// 005b34d1: CALL sound_sndmain.cpp_killSfx_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005b34d6: ADD ESP,0x4
// 005b34d9: INC ESI
//   Label: LAB_005b34d9
// 005b34da: ADD EBX,0x10
//   XREF to: 03f6b7cc (PARAM)
// 005b34dd: CMP ESI,0xa
// 005b34e0: JL 0x005b343c
//   XREF to: 005b343c (CONDITIONAL_JUMP)
// 005b34e6: FLD float ptr [0x03f6b868]
//   XREF to: 03f6b868 (READ)
// 005b34ec: FSUB float ptr [ESP + 0x128]
//   XREF to: Stack[-0x18] (READ)
// 005b34f3: FST float ptr [0x03f6b868]
//   XREF to: 03f6b868 (WRITE)
// 005b34f9: FLDZ
// 005b34fb: FCOMPP
// 005b34fd: FNSTSW AX
// 005b34ff: SAHF
// 005b3500: JC 0x005b3510
//   XREF to: 005b3510 (CONDITIONAL_JUMP)
// 005b3502: CMP dword ptr [ESP + 0x124],0x0
//   XREF to: Stack[-0x1c] (READ)
// 005b350a: JNZ 0x005b37c1
//   XREF to: 005b37c1 (CONDITIONAL_JUMP)
// 005b3510: MOV ESP,EBP
//   Label: caseD_4
// 005b3512: POP EBP
// 005b3513: POP EDI
// 005b3514: POP ESI
// 005b3515: POP EBX
// 005b3516: RET
// 005b3517: MOV EAX,dword ptr [ESP + 0x108]
//   Label: LAB_005b3517
//   XREF to: Stack[-0x38] (READ)
// 005b351e: MOV dword ptr [ESP + 0x11c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005b3525: JMP 0x005b304b
//   XREF to: 005b304b (UNCONDITIONAL_JUMP)
// 005b352a: PUSH 0x65277e
//   Label: LAB_005b352a
//   XREF to: 0065277e (DATA)
// 005b352f: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 005b3534: ADD ESP,0x4
// 005b3537: MOV [0x03f6af68],EAX
//   XREF to: 03f6af68 (WRITE)
// 005b353c: JMP 0x005b30a6
//   XREF to: 005b30a6 (UNCONDITIONAL_JUMP)
// 005b3541: MOV EDX,dword ptr [0x03f6af68]
//   Label: LAB_005b3541
//   XREF to: 03f6af68 (READ)
// 005b3547: PUSH EDX
// 005b3548: PUSH EBX
// 005b3549: CALL core_sound.cpp_CSound_FUN_005b3b90
//   XREF to: 005b3b90 (UNCONDITIONAL_CALL)
// 005b354e: XOR ECX,ECX
// 005b3550: ADD ESP,0x8
// 005b3553: MOV dword ptr [0x03f6af80],ECX
//   XREF to: 03f6af80 (WRITE)
// 005b3559: JMP 0x005b30bb
//   XREF to: 005b30bb (UNCONDITIONAL_JUMP)
// 005b355e: PUSH 0x652790
//   Label: LAB_005b355e
//   XREF to: 00652790 (DATA)
// 005b3563: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 005b3568: ADD ESP,0x4
// 005b356b: MOV [0x03f6af6c],EAX
//   XREF to: 03f6af6c (WRITE)
// 005b3570: JMP 0x005b31b7
//   XREF to: 005b31b7 (UNCONDITIONAL_JUMP)
// 005b3575: MOV ECX,dword ptr [0x03f6af6c]
//   Label: LAB_005b3575
//   XREF to: 03f6af6c (READ)
// 005b357b: PUSH ECX
// 005b357c: PUSH EBX
// 005b357d: CALL core_sound.cpp_CSound_FUN_005b3b90
//   XREF to: 005b3b90 (UNCONDITIONAL_CALL)
// 005b3582: XOR EBX,EBX
// 005b3584: ADD ESP,0x8
// 005b3587: MOV dword ptr [0x03f6af84],EBX
//   XREF to: 03f6af84 (WRITE)
// 005b358d: JMP 0x005b31cc
//   XREF to: 005b31cc (UNCONDITIONAL_JUMP)
// 005b3592: FLD float ptr [0x03f6b7b4]
//   Label: LAB_005b3592
//   XREF to: 03f6b7b4 (READ)
// 005b3598: XOR EAX,EAX
// 005b359a: FSTP float ptr [0x03f6b7b0]
//   XREF to: 03f6b7b0 (WRITE)
// 005b35a0: MOV [0x03f6b7b8],EAX
//   XREF to: 03f6b7b8 (WRITE)
// 005b35a5: JMP 0x005b321b
//   XREF to: 005b321b (UNCONDITIONAL_JUMP)
// 005b35aa: PUSH EAX
//   Label: LAB_005b35aa
// 005b35ab: PUSH 0x3
// 005b35ad: CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
//   XREF to: 005a9e20 (UNCONDITIONAL_CALL)
// 005b35b2: JMP 0x005b3264
//   XREF to: 005b3264 (UNCONDITIONAL_JUMP)
// 005b35b7: MOV EDX,0x65270c
//   Label: LAB_005b35b7
//   XREF to: 0065270c (PARAM)
// 005b35bc: MOV EAX,0xffffffff
// 005b35c1: MOV dword ptr [0x00681ef0],EDX
//   XREF to: 00681ef0 (WRITE)
// 005b35c7: JMP 0x005b337f
//   XREF to: 005b337f (UNCONDITIONAL_JUMP)
// 005b35cc: MOV dword ptr [0x00681ef0],0x652714
//   Label: LAB_005b35cc
//   XREF to: 00681ef0 (WRITE)
//   XREF to: 00652714 (DATA)
// 005b35d6: JMP 0x005b3365
//   XREF to: 005b3365 (UNCONDITIONAL_JUMP)
// 005b35db: MOV ESI,dword ptr [0x03f6b874]
//   Label: LAB_005b35db
//   XREF to: 03f6b874 (READ)
// 005b35e1: PUSH ESI
// 005b35e2: MOV EBX,0x3f333333
// 005b35e7: CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 005b35ec: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x13c] (WRITE)
// 005b35f0: ADD ESP,0x4
// 005b35f3: TEST EAX,EAX
// 005b35f5: JNZ 0x005b33d1
//   XREF to: 005b33d1 (CONDITIONAL_JUMP)
// 005b35fb: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 005b3600: PUSH 0x3ecccccd
// 005b3605: CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60
//   XREF to: 005a8a60 (UNCONDITIONAL_CALL)
// 005b360a: ADD ESP,0x4
// 005b360d: PUSH 0x65271c
//   XREF to: 0065271c (DATA)
// 005b3612: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 005b3617: ADD ESP,0x4
// 005b361a: MOV [0x03f6b874],EAX
//   XREF to: 03f6b874 (WRITE)
// 005b361f: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 005b3624: JMP 0x005b33d1
//   XREF to: 005b33d1 (UNCONDITIONAL_JUMP)
// 005b3629: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   Label: LAB_005b3629
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 005b362e: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x13c] (READ)
// 005b3632: FMUL double ptr [0x006527ce]
//   XREF to: 006527ce (READ)
// 005b3638: SUB ESP,0x4
// 005b363b: FSTP float ptr [ESP]
//   XREF to: Stack[-0x144] (DATA)
// 005b363e: CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60
//   XREF to: 005a8a60 (UNCONDITIONAL_CALL)
// 005b3643: ADD ESP,0x4
// 005b3646: PUSH 0x652729
//   XREF to: 00652729 (DATA)
// 005b364b: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 005b3650: ADD ESP,0x4
// 005b3653: MOV [0x03f6b870],EAX
//   XREF to: 03f6b870 (WRITE)
// 005b3658: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 005b365d: JMP 0x005b3406
//   XREF to: 005b3406 (UNCONDITIONAL_JUMP)
// 005b3662: FLD float ptr [ESP + 0x4]
//   Label: LAB_005b3662
//   XREF to: Stack[-0x13c] (READ)
// 005b3666: FMUL double ptr [0x006527ce]
//   XREF to: 006527ce (READ)
// 005b366c: SUB ESP,0x4
// 005b366f: MOV ESI,dword ptr [0x03f6b870]
//   XREF to: 03f6b870 (READ)
// 005b3675: FSTP float ptr [ESP]
//   XREF to: Stack[-0x144] (DATA)
// 005b3678: PUSH ESI
// 005b3679: CALL sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0
//   XREF to: 005a9ae0 (UNCONDITIONAL_CALL)
// 005b367e: ADD ESP,0x8
// 005b3681: JMP 0x005b3406
//   XREF to: 005b3406 (UNCONDITIONAL_JUMP)
// 005b3686: MOV dword ptr [ESP + 0x124],EBX
//   Label: LAB_005b3686
//   XREF to: 03f6b7bc (DATA)
//   XREF to: Stack[-0x1c] (WRITE)
// 005b368d: JMP 0x005b34d9
//   XREF to: 005b34d9 (UNCONDITIONAL_JUMP)
// 005b3692: FLD float ptr [ESP + 0x4]
//   Label: caseD_1
//   XREF to: Stack[-0x13c] (READ)
// 005b3696: MOV EDX,dword ptr [0x00681ef0]
//   XREF to: 00681ef0 (READ)
// 005b369c: FMUL double ptr [0x006527de]
//   XREF to: 006527de (READ)
// 005b36a2: PUSH EDX
//   XREF to: 00652710 (DATA)
// 005b36a3: MOV EAX,0x41c80000
// 005b36a8: PUSH 0x652736
//   XREF to: 00652736 (DATA)
// 005b36ad: MOV dword ptr [ESP + 0x11c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005b36b4: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[-0xd0] (DATA)
// 005b36b8: PUSH EAX
// 005b36b9: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x140] (WRITE)
// 005b36bd: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005b36c2: ADD ESP,0xc
// 005b36c5: PUSH 0x40000000
//   Label: default
// 005b36ca: MOV EAX,dword ptr [ESP + 0x128]
//   XREF to: Stack[-0x1c] (READ)
// 005b36d1: PUSH 0xc0400000
// 005b36d6: MOV dword ptr [EAX],0x0
// 005b36dc: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005b36e1: MOV dword ptr [ESP + 0x134],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005b36e8: FLD float ptr [ESP + 0x134]
//   XREF to: Stack[-0x14] (READ)
// 005b36ef: ADD ESP,0x8
// 005b36f2: FMUL float ptr [ESP + 0x114]
//   XREF to: Stack[-0x2c] (READ)
// 005b36f9: MOV EAX,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x1c] (READ)
// 005b3700: FADD float ptr [0x03f6af78]
//   XREF to: 03f6af78 (READ)
// 005b3706: MOV dword ptr [EAX + 0x4],0x0
// 005b370d: FSTP float ptr [EAX + 0x8]
// 005b3710: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 005b3715: PUSH 0x3
// 005b3717: CALL sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0
//   XREF to: 005a8af0 (UNCONDITIONAL_CALL)
// 005b371c: ADD ESP,0x4
// 005b371f: PUSH 0x3f6b85c
//   XREF to: 03f6b85c (DATA)
// 005b3724: CALL sound_sndmain.cpp_setNextSfxTrackedVelocity_FUN_005a8a00
//   XREF to: 005a8a00 (UNCONDITIONAL_CALL)
// 005b3729: ADD ESP,0x4
// 005b372c: FLD float ptr [ESP]
//   XREF to: Stack[-0x140] (DATA)
// 005b372f: SUB ESP,0x8
// 005b3732: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[-0xd0] (DATA)
// 005b3736: FSTP double ptr [ESP]
//   XREF to: Stack[-0x148] (DATA)
// 005b3739: PUSH EAX
// 005b373a: PUSH 0x65274c
//   XREF to: 0065274c (DATA)
// 005b373f: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x134] (DATA)
// 005b3743: PUSH EAX
// 005b3744: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005b3749: ADD ESP,0x14
// 005b374c: MOV ECX,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x1c] (READ)
// 005b3753: PUSH ECX
// 005b3754: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x134] (DATA)
// 005b3758: PUSH EAX
// 005b3759: PUSH 0x0
// 005b375b: MOV EBX,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
//   XREF to: 03f6af64 (PARAM)
// 005b3761: PUSH EBX
//   XREF to: 03f6af64 (DATA)
// 005b3762: CALL core_sound.cpp_CSound_FUN_005b3a70
//   XREF to: 005b3a70 (UNCONDITIONAL_CALL)
// 005b3767: ADD ESP,0x10
// 005b376a: MOV EDX,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x1c] (READ)
// 005b3771: MOV dword ptr [EDX + 0xc],EAX
// 005b3774: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 005b3779: MOV ESP,EBP
// 005b377b: POP EBP
// 005b377c: POP EDI
// 005b377d: POP ESI
// 005b377e: POP EBX
// 005b377f: RET
// 005b3780: FLD float ptr [ESP + 0x4]
//   Label: caseD_3
//   XREF to: Stack[-0x13c] (READ)
// 005b3784: FMUL double ptr [0x006527d6]
//   XREF to: 006527d6 (READ)
// 005b378a: MOV EDI,0x41a00000
// 005b378f: MOV ESI,0x652742
//   XREF to: 00652742 (DATA)
// 005b3794: MOV dword ptr [ESP + 0x114],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 005b379b: LEA EDI,[ESP + 0x70]
//   XREF to: Stack[-0xd0] (DATA)
// 005b379f: FSTP float ptr [ESP]
//   XREF to: Stack[-0x140] (DATA)
// 005b37a2: PUSH EDI
// 005b37a3: MOV AL,byte ptr [ESI]
//   Label: LAB_005b37a3
//   XREF to: 00652742 (READ)
//   XREF to: 00652744 (READ)
// 005b37a5: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xd0] (DATA)
// 005b37a7: CMP AL,0x0
// 005b37a9: JZ 0x005b37bb
//   XREF to: 005b37bb (CONDITIONAL_JUMP)
// 005b37ab: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00652743 (READ)
//   XREF to: 00652745 (READ)
// 005b37ae: ADD ESI,0x2
// 005b37b1: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xcf] (WRITE)
// 005b37b4: ADD EDI,0x2
// 005b37b7: CMP AL,0x0
// 005b37b9: JNZ 0x005b37a3
//   XREF to: 005b37a3 (CONDITIONAL_JUMP)
// 005b37bb: POP EDI
//   Label: LAB_005b37bb
// 005b37bc: JMP 0x005b36c5
//   XREF to: 005b36c5 (UNCONDITIONAL_JUMP)
// 005b37c1: PUSH 0x40a00000
//   Label: LAB_005b37c1
// 005b37c6: PUSH 0x3f800000
// 005b37cb: MOV EBX,0x41a00000
// 005b37d0: LEA EDI,[ESP + 0x78]
//   XREF to: Stack[-0xd0] (DATA)
// 005b37d4: MOV ESI,0x682118
//   XREF to: 00682118 (DATA)
// 005b37d9: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005b37de: MOV dword ptr [ESP + 0x134],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005b37e5: MOV ECX,0x19
// 005b37ea: FLD float ptr [ESP + 0x134]
//   XREF to: Stack[-0x14] (READ)
// 005b37f1: ADD ESP,0x8
// 005b37f4: FSTP float ptr [0x03f6b868]
//   XREF to: 03f6b868 (WRITE)
// 005b37fa: MOV dword ptr [ESP + 0x114],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 005b3801: MOVSD.REP ES:EDI,ESI
//   XREF to: 00682118 (READ)
//   XREF to: 0068211c (READ)
// 005b3803: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 005b3808: MOV EDX,EAX
// 005b380a: MOV EBX,0x5
// 005b380f: SAR EDX,0x1f
// 005b3812: IDIV EBX
// 005b3814: MOV dword ptr [ESP],0x3f800000
//   XREF to: Stack[-0x140] (DATA)
// 005b381b: CMP EDX,0x4
// 005b381e: JA 0x005b36c5
//   XREF to: 005b36c5 (CONDITIONAL_JUMP)
// 005b3824: JMP dword ptr [EDX*0x4 + 0x5b2fbc]
//   Label: switchD
//   XREF to: 005b3692 (COMPUTED_JUMP)
//   XREF to: 005b3780 (COMPUTED_JUMP)
//   XREF to: 005b3510 (COMPUTED_JUMP)
//   XREF to: 005b2fbc (DATA)
