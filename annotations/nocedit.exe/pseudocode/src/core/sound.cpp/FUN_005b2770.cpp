// Name: core_sound.cpp_FUN_005b2770
// Address: 005b2770
// Address Range: [[005b2770, 005b2c93]]
// Convention: unknown
// Signature: undefined core_sound.cpp_FUN_005b2770()
// Globals:
//   void* switchdataD_005b275c = 005b2afa
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
//   float FLOAT_00652756 = 20
//   double DOUBLE_0065275e = 1.5
//   double DOUBLE_00652766 = 0.800000000000000
//   double DOUBLE_0065276e = 0.600000000000000
//   double DOUBLE_00652776 = 510
//   CGame* g_CGamePtr = 02d81a9c
//   CDemonSet* g_CDemonSetPtr = 03114278
//   void* PTR_s_int_00681ef0 = 00652706
//   void* PTR_s_x_00681ef4 = 0065270a
//   CSound* g_CSoundPtr = 03f6af64
//   undefined4 DAT_00682118
//   undefined4 DAT_0068211c
//   undefined4 g_CGameInstance.block_auto_save
//   undefined4 g_CGameInstance.delta_time_float
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.selected_camera_index
//   CSound g_CSoundInstance
//   undefined4 DAT_03f6af70
//   undefined4 DAT_03f6af74
//   undefined4 DAT_03f6af78
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
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460
//   core_sound.cpp_CSound_FUN_005b3a70
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdlib.c_rand_FUN_005feb5c
//   crt_string.c_stricmp_FUN_005fe7f0
//   sound_sndmain.cpp_CallComputingDelay2_FUN_005a9ae0
//   sound_sndmain.cpp_FUN_005a8a00
//   sound_sndmain.cpp_FUN_005a8a60
//   sound_sndmain.cpp_FUN_005a8b70
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   sound_sndmain.cpp_startSfx_FUN_005a8e90

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005b2c28) */
/* WARNING: Removing unreachable block (ram,0x005b2c71) */
/* WARNING: Removing unreachable block (ram,0x005b2c73) */
/* WARNING: Removing unreachable block (ram,0x005b2c8d) */
/* WARNING: Removing unreachable block (ram,0x005b2be7) */
/* WARNING: Removing unreachable block (ram,0x005b2c0a) */
/* WARNING: Removing unreachable block (ram,0x005b2c12) */
/* WARNING: Removing unreachable block (ram,0x005b2c22) */
/* WARNING: Removing unreachable block (ram,0x005b2afa) */
/* WARNING: Removing unreachable block (ram,0x005b2b2b) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 core_sound_cpp_FUN_005b2770(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined2 extraout_var;
  undefined2 uVar6;
  STrainNoise *pSVar7;
  BADSPACEBASE *in_ESP;
  STrainNoise *in_stack_00000034;
  float in_stack_00000038;
  CVector3f local_48;
  CVector3f local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_18;
  
  local_18 = g_CGamePtr->delta_time_float;
  if (g_CGamePtr->block_auto_save == 0) {
    if (DAT_03f6b86c != g_CDemonSetPtr->selected_camera_index) {
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00574210(g_CDemonSetPtr);
      local_48.x = DAT_03f6af70;
      local_48.y = DAT_03f6af74;
      local_48.z = DAT_03f6af78;
      local_30 = 0;
      local_3c.x = DAT_03f6af70;
      local_2c = 0x41a00000;
      local_3c.z = DAT_03f6af78;
      local_28 = 0;
      local_3c.y = DAT_03f6af74 + FLOAT_00652756;
      iVar4 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                        (g_CDemonSetPtr,&local_48,&local_3c);
      if (iVar4 == 0) {
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
    PTR_s_int_00681ef0 = "ext";
    DAT_03f6b86c = -1;
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_FUN_005a8b70();
  sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(3);
  iVar4 = crt_string_c_stricmp_FUN_005fe7f0((char *)PTR_s_int_00681ef0,"int");
  if (iVar4 == 0) {
    sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
  }
  else {
    iVar4 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
    if (iVar4 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_FUN_005a8a60();
      DAT_03f6b874 = sound_sndmain_cpp_startSfx_FUN_005a8e90();
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
  }
  iVar4 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
  if (iVar4 == 0) {
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_FUN_005a8a60();
    DAT_03f6b870 = sound_sndmain_cpp_startSfx_FUN_005a8e90();
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  }
  else {
    iVar4 = crt_string_c_stricmp_FUN_005fe7f0((char *)PTR_s_x_00681ef4,(char *)PTR_s_int_00681ef0);
    if (iVar4 != 0) {
      sound_sndmain_cpp_CallComputingDelay2_FUN_005a9ae0();
    }
  }
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  pSVar7 = STrainNoise_ARRAY_03f6b7bc;
  iVar4 = 0;
  PTR_s_x_00681ef4 = PTR_s_int_00681ef0;
  _DAT_03f6b85c = 0.0;
  _DAT_03f6b860 = 0.0;
  _DAT_03f6b864 = 30.0;
  do {
    iVar5 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
    if (iVar5 == 0) {
      uVar6 = 0;
      in_stack_00000034 = pSVar7;
    }
    else {
      fVar2 = _DAT_03f6b860 * in_stack_00000038;
      fVar3 = _DAT_03f6b864 * in_stack_00000038;
      fVar1 = *(float *)(pSVar7->field0_0x0 + 4);
      *(float *)pSVar7->field0_0x0 =
           *(float *)pSVar7->field0_0x0 + _DAT_03f6b85c * in_stack_00000038;
      *(float *)(pSVar7->field0_0x0 + 4) = fVar1 + fVar2;
      *(float *)(pSVar7->field0_0x0 + 8) = *(float *)(pSVar7->field0_0x0 + 8) + fVar3;
      uVar6 = (undefined2)((uint)iVar5 >> 0x10);
      if ((float)DOUBLE_00652776 < ABS(*(float *)(STrainNoise_ARRAY_03f6b7bc[iVar4].field0_0x0 + 8))
         ) {
        sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
        uVar6 = extraout_var;
      }
    }
    iVar4 = iVar4 + 1;
    pSVar7 = pSVar7 + 1;
  } while (iVar4 < 10);
  _DAT_03f6b868 = _DAT_03f6b868 - (float)in_stack_00000034;
  return CONCAT22(uVar6,(ushort)(0.0 < _DAT_03f6b868) << 8 | (ushort)NAN(_DAT_03f6b868) << 10 |
                        (ushort)(_DAT_03f6b868 == 0.0) << 0xe);
}


// Assembly code:
// 005b2770: PUSH EBX
//   Label: core_sound.cpp_FUN_005b2770
// 005b2771: PUSH ESI
// 005b2772: PUSH EDI
// 005b2773: PUSH EBP
// 005b2774: MOV EBP,ESP
// 005b2776: SUB ESP,0x110
// 005b277c: AND ESP,0xfffffff8
// 005b277f: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 005b2784: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 005b278a: MOV EDX,dword ptr [EAX + 0x240]
//   XREF to: 02d81cdc (READ)
// 005b2790: FSTP float ptr [ESP + 0x108]
//   XREF to: Stack[-0x18] (WRITE)
// 005b2797: TEST EDX,EDX
// 005b2799: JNZ 0x005b2a1c
//   XREF to: 005b2a1c (CONDITIONAL_JUMP)
// 005b279f: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005b27a4: MOV ECX,dword ptr [0x03f6b86c]
//   XREF to: 03f6b86c (READ)
// 005b27aa: CMP ECX,dword ptr [EAX + 0x15aea4]
//   XREF to: 0326f11c (READ)
// 005b27b0: JZ 0x005b288e
//   XREF to: 005b288e (CONDITIONAL_JUMP)
// 005b27b6: PUSH EAX
//   XREF to: 03114278 (DATA)
// 005b27b7: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 005b27bc: ADD ESP,0x4
// 005b27bf: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005b27c5: PUSH EBX
//   XREF to: 03114278 (DATA)
// 005b27c6: CALL core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210
//   XREF to: 00574210 (UNCONDITIONAL_CALL)
// 005b27cb: MOV EAX,[0x03f6af70]
//   XREF to: 03f6af70 (READ)
// 005b27d0: ADD ESP,0x4
// 005b27d3: MOV EDI,0x41a00000
// 005b27d8: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 005b27df: MOV EAX,[0x03f6af74]
//   XREF to: 03f6af74 (READ)
// 005b27e4: XOR ESI,ESI
// 005b27e6: MOV dword ptr [ESP + 0xd4],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 005b27ed: MOV EAX,[0x03f6af78]
//   XREF to: 03f6af78 (READ)
// 005b27f2: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005b27f8: MOV dword ptr [ESP + 0xd8],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005b27ff: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x50] (READ)
// 005b2806: MOV dword ptr [ESP + 0xe8],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 005b280d: MOV dword ptr [ESP + 0xdc],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005b2814: MOV EAX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x48] (READ)
// 005b281b: MOV dword ptr [ESP + 0xec],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 005b2822: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005b2829: LEA EAX,[ESP + 0xdc]
//   XREF to: Stack[-0x44] (DATA)
// 005b2830: MOV dword ptr [ESP + 0xf0],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 005b2837: PUSH EAX
// 005b2838: LEA EAX,[ESP + 0xd4]
//   XREF to: Stack[-0x50] (DATA)
// 005b283f: FLD float ptr [ESP + 0xd8]
//   XREF to: Stack[-0x4c] (READ)
// 005b2846: PUSH EAX
// 005b2847: FADD float ptr [0x00652756]
//   XREF to: 00652756 (READ)
// 005b284d: PUSH EDX
//   XREF to: 03114278 (DATA)
// 005b284e: FSTP float ptr [ESP + 0xec]
//   XREF to: Stack[-0x40] (WRITE)
// 005b2855: CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460
//   XREF to: 00572460 (UNCONDITIONAL_CALL)
// 005b285a: ADD ESP,0xc
// 005b285d: TEST EAX,EAX
// 005b285f: JZ 0x005b2a36
//   XREF to: 005b2a36 (CONDITIONAL_JUMP)
// 005b2865: MOV dword ptr [0x00681ef0],0x652710
//   XREF to: 00681ef0 (WRITE)
//   XREF to: 00652710 (DATA)
// 005b286f: MOV ESI,dword ptr [0x006810c8]
//   Label: LAB_005b286f
//   XREF to: 006810c8 (READ)
// 005b2875: PUSH ESI
//   XREF to: 03114278 (DATA)
// 005b2876: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 005b287b: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 005b2880: MOV EAX,dword ptr [EAX + 0x15aea4]
//   XREF to: 0326f11c (READ)
// 005b2886: ADD ESP,0x4
// 005b2889: MOV [0x03f6b86c],EAX
//   XREF to: 03f6b86c (WRITE)
// 005b288e: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   Label: LAB_005b288e
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 005b2893: PUSH 0x1
// 005b2895: CALL sound_sndmain.cpp_FUN_005a8b70
//   XREF to: 005a8b70 (UNCONDITIONAL_CALL)
// 005b289a: ADD ESP,0x4
// 005b289d: PUSH 0x3
// 005b289f: CALL sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0
//   XREF to: 005a8af0 (UNCONDITIONAL_CALL)
// 005b28a4: ADD ESP,0x4
// 005b28a7: PUSH 0x652718
//   XREF to: 00652718 (DATA)
// 005b28ac: MOV EDX,dword ptr [0x00681ef0]
//   XREF to: 00681ef0 (READ)
// 005b28b2: PUSH EDX
//   XREF to: 00652710 (DATA)
// 005b28b3: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005b28b8: ADD ESP,0x8
// 005b28bb: TEST EAX,EAX
// 005b28bd: JNZ 0x005b2a45
//   XREF to: 005b2a45 (CONDITIONAL_JUMP)
// 005b28c3: MOV ESI,dword ptr [0x03f6b874]
//   XREF to: 03f6b874 (READ)
// 005b28c9: PUSH ESI
// 005b28ca: MOV EDI,0x3ecccccd
// 005b28cf: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005b28d4: ADD ESP,0x4
// 005b28d7: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x120] (DATA)
// 005b28da: MOV EAX,[0x03f6b870]
//   Label: LAB_005b28da
//   XREF to: 03f6b870 (READ)
// 005b28df: PUSH EAX
// 005b28e0: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 005b28e5: ADD ESP,0x4
// 005b28e8: TEST EAX,EAX
// 005b28ea: JZ 0x005b2a93
//   XREF to: 005b2a93 (CONDITIONAL_JUMP)
// 005b28f0: MOV EDX,dword ptr [0x00681ef0]
//   XREF to: 00681ef0 (READ)
// 005b28f6: PUSH EDX
//   XREF to: 00652710 (DATA)
// 005b28f7: MOV ECX,dword ptr [0x00681ef4]
//   XREF to: 00681ef4 (READ)
// 005b28fd: PUSH ECX
//   XREF to: 0065270a (DATA)
// 005b28fe: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005b2903: ADD ESP,0x8
// 005b2906: TEST EAX,EAX
// 005b2908: JNZ 0x005b2acb
//   XREF to: 005b2acb (CONDITIONAL_JUMP)
// 005b290e: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   Label: LAB_005b290e
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 005b2913: MOV EBX,0x3f6b7bc
//   XREF to: 03f6b7bc (PARAM)
// 005b2918: MOV EAX,[0x00681ef0]
//   XREF to: 00681ef0 (READ)
// 005b291d: XOR ESI,ESI
// 005b291f: MOV [0x00681ef4],EAX
//   XREF to: 00681ef4 (WRITE)
// 005b2924: MOV dword ptr [0x03f6b85c],ESI
//   XREF to: 03f6b85c (WRITE)
// 005b292a: MOV dword ptr [0x03f6b860],ESI
//   XREF to: 03f6b860 (WRITE)
// 005b2930: MOV EAX,0x41f00000
// 005b2935: MOV dword ptr [ESP + 0x104],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 005b293c: MOV [0x03f6b864],EAX
//   XREF to: 03f6b864 (WRITE)
// 005b2941: MOV EDI,ESI
//   Label: LAB_005b2941
// 005b2943: SHL EDI,0x4
// 005b2946: MOV ECX,dword ptr [EDI + 0x3f6b7c8]
//   XREF to: 03f6b7c8 (READ)
//   XREF to: 03f6b7d8 (READ)
// 005b294c: PUSH ECX
// 005b294d: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 005b2952: ADD ESP,0x4
// 005b2955: TEST EAX,EAX
// 005b2957: JZ 0x005b2aee
//   XREF to: 005b2aee (CONDITIONAL_JUMP)
// 005b295d: FLD float ptr [ESP + 0x108]
//   XREF to: Stack[-0x18] (READ)
// 005b2964: FLD float ptr [0x03f6b85c]
//   XREF to: 03f6b85c (READ)
// 005b296a: FMUL ST1
// 005b296c: FLD float ptr [0x03f6b860]
//   XREF to: 03f6b860 (READ)
// 005b2972: FMUL ST2
// 005b2974: FLD float ptr [0x03f6b864]
//   XREF to: 03f6b864 (READ)
// 005b297a: FMULP ST3
// 005b297c: FXCH
// 005b297e: FSTP float ptr [ESP + 0xf4]
//   XREF to: Stack[-0x2c] (WRITE)
// 005b2985: FSTP float ptr [ESP + 0xf8]
//   XREF to: Stack[-0x28] (WRITE)
// 005b298c: FSTP float ptr [ESP + 0xfc]
//   XREF to: Stack[-0x24] (WRITE)
// 005b2993: FLD float ptr [EBX]
//   XREF to: 03f6b7bc (READ)
// 005b2995: FADD float ptr [ESP + 0xf4]
//   XREF to: Stack[-0x2c] (READ)
// 005b299c: FLD float ptr [EBX + 0x4]
//   XREF to: 03f6b7c0 (READ)
// 005b299f: FXCH
// 005b29a1: FSTP float ptr [EBX]
//   XREF to: 03f6b7bc (WRITE)
// 005b29a3: FADD float ptr [ESP + 0xf8]
//   XREF to: Stack[-0x28] (READ)
// 005b29aa: FLD float ptr [EBX + 0x8]
//   XREF to: 03f6b7c4 (READ)
// 005b29ad: FXCH
// 005b29af: FSTP float ptr [EBX + 0x4]
//   XREF to: 03f6b7c0 (WRITE)
// 005b29b2: FADD float ptr [ESP + 0xfc]
//   XREF to: Stack[-0x24] (READ)
// 005b29b9: FSTP float ptr [EBX + 0x8]
//   XREF to: 03f6b7c4 (WRITE)
// 005b29bc: FLD float ptr [EDI + 0x3f6b7c4]
//   XREF to: 03f6b7c4 (READ)
// 005b29c2: FABS
// 005b29c4: FCOMP double ptr [0x00652776]
//   XREF to: 00652776 (READ)
// 005b29ca: FNSTSW AX
// 005b29cc: SAHF
// 005b29cd: JBE 0x005b29de
//   XREF to: 005b29de (CONDITIONAL_JUMP)
// 005b29cf: MOV EAX,dword ptr [EDI + 0x3f6b7c8]
//   XREF to: 03f6b7c8 (READ)
// 005b29d5: PUSH EAX
// 005b29d6: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005b29db: ADD ESP,0x4
// 005b29de: INC ESI
//   Label: LAB_005b29de
// 005b29df: ADD EBX,0x10
//   XREF to: 03f6b7cc (PARAM)
// 005b29e2: CMP ESI,0xa
// 005b29e5: JL 0x005b2941
//   XREF to: 005b2941 (CONDITIONAL_JUMP)
// 005b29eb: FLD float ptr [0x03f6b868]
//   XREF to: 03f6b868 (READ)
// 005b29f1: FSUB float ptr [ESP + 0x108]
//   XREF to: Stack[-0x18] (READ)
// 005b29f8: FST float ptr [0x03f6b868]
//   XREF to: 03f6b868 (WRITE)
// 005b29fe: FLDZ
// 005b2a00: FCOMPP
// 005b2a02: FNSTSW AX
// 005b2a04: SAHF
// 005b2a05: JC 0x005b2a15
//   XREF to: 005b2a15 (CONDITIONAL_JUMP)
// 005b2a07: CMP dword ptr [ESP + 0x104],0x0
//   XREF to: Stack[-0x1c] (READ)
// 005b2a0f: JNZ 0x005b2c28
//   XREF to: 005b2c28 (CONDITIONAL_JUMP)
// 005b2a15: MOV ESP,EBP
//   Label: caseD_4
// 005b2a17: POP EBP
// 005b2a18: POP EDI
// 005b2a19: POP ESI
// 005b2a1a: POP EBX
// 005b2a1b: RET
// 005b2a1c: MOV EAX,0x65270c
//   Label: LAB_005b2a1c
//   XREF to: 0065270c (PARAM)
// 005b2a21: MOV EDI,0xffffffff
// 005b2a26: MOV [0x00681ef0],EAX
//   XREF to: 00681ef0 (WRITE)
// 005b2a2b: MOV dword ptr [0x03f6b86c],EDI
//   XREF to: 03f6b86c (WRITE)
// 005b2a31: JMP 0x005b288e
//   XREF to: 005b288e (UNCONDITIONAL_JUMP)
// 005b2a36: MOV dword ptr [0x00681ef0],0x652714
//   Label: LAB_005b2a36
//   XREF to: 00681ef0 (WRITE)
//   XREF to: 00652714 (DATA)
// 005b2a40: JMP 0x005b286f
//   XREF to: 005b286f (UNCONDITIONAL_JUMP)
// 005b2a45: MOV EBX,dword ptr [0x03f6b874]
//   Label: LAB_005b2a45
//   XREF to: 03f6b874 (READ)
// 005b2a4b: MOV ECX,0x3f333333
// 005b2a50: PUSH EBX
// 005b2a51: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x120] (WRITE)
// 005b2a55: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 005b2a5a: ADD ESP,0x4
// 005b2a5d: TEST EAX,EAX
// 005b2a5f: JNZ 0x005b28da
//   XREF to: 005b28da (CONDITIONAL_JUMP)
// 005b2a65: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 005b2a6a: PUSH 0x3ecccccd
// 005b2a6f: CALL sound_sndmain.cpp_FUN_005a8a60
//   XREF to: 005a8a60 (UNCONDITIONAL_CALL)
// 005b2a74: ADD ESP,0x4
// 005b2a77: PUSH 0x65271c
//   XREF to: 0065271c (DATA)
// 005b2a7c: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 005b2a81: ADD ESP,0x4
// 005b2a84: MOV [0x03f6b874],EAX
//   XREF to: 03f6b874 (WRITE)
// 005b2a89: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 005b2a8e: JMP 0x005b28da
//   XREF to: 005b28da (UNCONDITIONAL_JUMP)
// 005b2a93: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   Label: LAB_005b2a93
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 005b2a98: FLD float ptr [ESP]
//   XREF to: Stack[-0x120] (DATA)
// 005b2a9b: FMUL double ptr [0x0065275e]
//   XREF to: 0065275e (READ)
// 005b2aa1: SUB ESP,0x4
// 005b2aa4: FSTP float ptr [ESP]
//   XREF to: Stack[-0x124] (DATA)
// 005b2aa7: CALL sound_sndmain.cpp_FUN_005a8a60
//   XREF to: 005a8a60 (UNCONDITIONAL_CALL)
// 005b2aac: ADD ESP,0x4
// 005b2aaf: PUSH 0x652729
//   XREF to: 00652729 (DATA)
// 005b2ab4: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 005b2ab9: ADD ESP,0x4
// 005b2abc: MOV [0x03f6b870],EAX
//   XREF to: 03f6b870 (WRITE)
// 005b2ac1: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 005b2ac6: JMP 0x005b290e
//   XREF to: 005b290e (UNCONDITIONAL_JUMP)
// 005b2acb: FLD float ptr [ESP]
//   Label: LAB_005b2acb
//   XREF to: Stack[-0x120] (DATA)
// 005b2ace: FMUL double ptr [0x0065275e]
//   XREF to: 0065275e (READ)
// 005b2ad4: SUB ESP,0x4
// 005b2ad7: MOV EBX,dword ptr [0x03f6b870]
//   XREF to: 03f6b870 (READ)
// 005b2add: FSTP float ptr [ESP]
//   XREF to: Stack[-0x124] (DATA)
// 005b2ae0: PUSH EBX
// 005b2ae1: CALL sound_sndmain.cpp_CallComputingDelay2_FUN_005a9ae0
//   XREF to: 005a9ae0 (UNCONDITIONAL_CALL)
// 005b2ae6: ADD ESP,0x8
// 005b2ae9: JMP 0x005b290e
//   XREF to: 005b290e (UNCONDITIONAL_JUMP)
// 005b2aee: MOV dword ptr [ESP + 0x104],EBX
//   Label: LAB_005b2aee
//   XREF to: 03f6b7bc (DATA)
//   XREF to: Stack[-0x1c] (WRITE)
// 005b2af5: JMP 0x005b29de
//   XREF to: 005b29de (UNCONDITIONAL_JUMP)
// 005b2afa: FLD float ptr [ESP]
//   Label: caseD_0
//   XREF to: Stack[-0x120] (DATA)
// 005b2afd: MOV EAX,[0x00681ef0]
//   XREF to: 00681ef0 (READ)
// 005b2b02: FMUL double ptr [0x0065276e]
//   XREF to: 0065276e (READ)
// 005b2b08: PUSH EAX
//   XREF to: 00652710 (DATA)
// 005b2b09: MOV EDI,0x41c80000
// 005b2b0e: PUSH 0x652736
//   XREF to: 00652736 (DATA)
// 005b2b13: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x118] (DATA)
// 005b2b17: MOV dword ptr [ESP + 0x108],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 005b2b1e: PUSH EAX
// 005b2b1f: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x11c] (WRITE)
// 005b2b23: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005b2b28: ADD ESP,0xc
// 005b2b2b: PUSH 0x40000000
//   Label: default
// 005b2b30: MOV EAX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x1c] (READ)
// 005b2b37: PUSH 0xc0400000
// 005b2b3c: MOV dword ptr [EAX],0x0
// 005b2b42: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005b2b47: MOV dword ptr [ESP + 0x114],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005b2b4e: FLD float ptr [ESP + 0x114]
//   XREF to: Stack[-0x14] (READ)
// 005b2b55: ADD ESP,0x8
// 005b2b58: FMUL float ptr [ESP + 0x100]
//   XREF to: Stack[-0x20] (READ)
// 005b2b5f: MOV EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x1c] (READ)
// 005b2b66: FADD float ptr [0x03f6af78]
//   XREF to: 03f6af78 (READ)
// 005b2b6c: MOV dword ptr [EAX + 0x4],0x0
// 005b2b73: FSTP float ptr [EAX + 0x8]
// 005b2b76: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 005b2b7b: PUSH 0x3
// 005b2b7d: CALL sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0
//   XREF to: 005a8af0 (UNCONDITIONAL_CALL)
// 005b2b82: ADD ESP,0x4
// 005b2b85: PUSH 0x3f6b85c
//   XREF to: 03f6b85c (DATA)
// 005b2b8a: CALL sound_sndmain.cpp_FUN_005a8a00
//   XREF to: 005a8a00 (UNCONDITIONAL_CALL)
// 005b2b8f: ADD ESP,0x4
// 005b2b92: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x11c] (READ)
// 005b2b96: SUB ESP,0x8
// 005b2b99: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x118] (DATA)
// 005b2b9d: FSTP double ptr [ESP]
//   XREF to: Stack[-0x128] (DATA)
// 005b2ba0: PUSH EAX
// 005b2ba1: PUSH 0x65274c
//   XREF to: 0065274c (DATA)
// 005b2ba6: LEA EAX,[ESP + 0x7c]
//   XREF to: Stack[-0xb4] (DATA)
// 005b2baa: PUSH EAX
// 005b2bab: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005b2bb0: ADD ESP,0x14
// 005b2bb3: MOV EDX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x1c] (READ)
// 005b2bba: PUSH EDX
// 005b2bbb: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0xb4] (DATA)
// 005b2bbf: PUSH EAX
// 005b2bc0: PUSH 0x0
// 005b2bc2: MOV ECX,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
//   XREF to: 03f6af64 (PARAM)
// 005b2bc8: PUSH ECX
//   XREF to: 03f6af64 (DATA)
// 005b2bc9: CALL core_sound.cpp_CSound_FUN_005b3a70
//   XREF to: 005b3a70 (UNCONDITIONAL_CALL)
// 005b2bce: ADD ESP,0x10
// 005b2bd1: MOV EDX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x1c] (READ)
// 005b2bd8: MOV dword ptr [EDX + 0xc],EAX
// 005b2bdb: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 005b2be0: MOV ESP,EBP
// 005b2be2: POP EBP
// 005b2be3: POP EDI
// 005b2be4: POP ESI
// 005b2be5: POP EBX
// 005b2be6: RET
// 005b2be7: FLD float ptr [ESP]
//   Label: caseD_2
//   XREF to: Stack[-0x120] (DATA)
// 005b2bea: FMUL double ptr [0x00652766]
//   XREF to: 00652766 (READ)
// 005b2bf0: MOV ESI,0x41a00000
// 005b2bf5: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x118] (DATA)
// 005b2bf9: MOV dword ptr [ESP + 0x100],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 005b2c00: MOV ESI,0x652742
//   XREF to: 00652742 (DATA)
// 005b2c05: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x11c] (WRITE)
// 005b2c09: PUSH EDI
// 005b2c0a: MOV AL,byte ptr [ESI]
//   Label: LAB_005b2c0a
//   XREF to: 00652742 (READ)
//   XREF to: 00652744 (READ)
// 005b2c0c: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x118] (DATA)
// 005b2c0e: CMP AL,0x0
// 005b2c10: JZ 0x005b2c22
//   XREF to: 005b2c22 (CONDITIONAL_JUMP)
// 005b2c12: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00652743 (READ)
//   XREF to: 00652745 (READ)
// 005b2c15: ADD ESI,0x2
// 005b2c18: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x117] (WRITE)
// 005b2c1b: ADD EDI,0x2
// 005b2c1e: CMP AL,0x0
// 005b2c20: JNZ 0x005b2c0a
//   XREF to: 005b2c0a (CONDITIONAL_JUMP)
// 005b2c22: POP EDI
//   Label: LAB_005b2c22
// 005b2c23: JMP 0x005b2b2b
//   XREF to: 005b2b2b (UNCONDITIONAL_JUMP)
// 005b2c28: PUSH 0x40a00000
//   Label: LAB_005b2c28
// 005b2c2d: PUSH 0x3f800000
// 005b2c32: LEA EDI,[ESP + 0x10]
//   XREF to: Stack[-0x118] (DATA)
// 005b2c36: MOV EBX,0x3f800000
// 005b2c3b: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005b2c40: MOV dword ptr [ESP + 0x114],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005b2c47: MOV ECX,0x41a00000
// 005b2c4c: FLD float ptr [ESP + 0x114]
//   XREF to: Stack[-0x14] (READ)
// 005b2c53: ADD ESP,0x8
// 005b2c56: MOV ESI,0x682118
//   XREF to: 00682118 (DATA)
// 005b2c5b: MOV dword ptr [ESP + 0x100],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 005b2c62: MOV ECX,0x19
// 005b2c67: FSTP float ptr [0x03f6b868]
//   XREF to: 03f6b868 (WRITE)
// 005b2c6d: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x11c] (WRITE)
// 005b2c71: MOVSD.REP ES:EDI,ESI
//   XREF to: 00682118 (READ)
//   XREF to: 0068211c (READ)
// 005b2c73: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 005b2c78: MOV EDX,EAX
// 005b2c7a: MOV EBX,0x5
// 005b2c7f: SAR EDX,0x1f
// 005b2c82: IDIV EBX
// 005b2c84: CMP EDX,0x4
// 005b2c87: JA 0x005b2b2b
//   XREF to: 005b2b2b (CONDITIONAL_JUMP)
// 005b2c8d: JMP dword ptr [EDX*0x4 + 0x5b275c]
//   Label: switchD
//   XREF to: 005b2afa (COMPUTED_JUMP)
//   XREF to: 005b2be7 (COMPUTED_JUMP)
//   XREF to: 005b2a15 (COMPUTED_JUMP)
//   XREF to: 005b275c (DATA)
