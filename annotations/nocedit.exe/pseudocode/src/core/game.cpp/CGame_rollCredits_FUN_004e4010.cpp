// Name: core_game.cpp_CGame_rollCredits_FUN_004e4010
// Address: 004e4010
// Address Range: [[004e4010, 004e443c]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_rollCredits_FUN_004e4010(CGame * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_finishAct_FUN_004e3b90 (004e3b90) at 004e3c5d [UNCONDITIONAL_CALL]
//   core_menu.cpp_ShowOptionsScreen_FUN_00512d30 (00512d30) at 00512ee4 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_stats_0062d5d5
//   TerminatedCString s_rt_0062d5db
//   TerminatedCString s_credits_txt_0062d5de
//   TerminatedCString s_data_0062d5ea
//   TerminatedCString s_end_0062d5ef
//   TerminatedCString s_core_game_cpp_0062d5f4
//   TerminatedCString s_core_game_cpp_0062d605
//   TerminatedCString s_CGame_rollCredits_Out_of_0062d616
//   TerminatedCString s_core_game_cpp_0062d639
//   TerminatedCString s_faded_remix_mp3_0062d64a
//   TerminatedCString s_core_game_cpp_0062d65a
//   float FLOAT_0062d66d = 32
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CBitFont* g_ThemeFont
//   void* g_CKeysPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_MessageCount
// Function calls:
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_fgets_FUN_005fefd0
//   crt_string.c_strcmp_FUN_005fef20
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_fillRectColor_FUN_00403170
//   engine_3d.c_setRenderAlpha_FUN_00406d80
//   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540
//   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   sound_sndmain.cpp_FUN_005a8b70
//   sound_sndmain.cpp_FUN_005aaef0
//   sound_sndmain.cpp_FUN_005ab130
//   sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   sound_sndmain.cpp_startSfx_FUN_005a8e90
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_rollCredits_FUN_004e4010(CGame *this_ptr)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  CBitFont *this_ptr_00;
  int iVar4;
  FILE *stream;
  char *pcVar5;
  void *pvVar6;
  uint uVar7;
  int color_mode;
  int unaff_EBX;
  int iVar8;
  int iVar9;
  BADSPACEBASE *in_ESP;
  char *pcVar10;
  byte bVar11;
  float10 fVar12;
  double dVar13;
  uint *puStack00000020;
  int in_stack_00000028;
  float in_stack_0000002c;
  int iStack00000030;
  float in_stack_00000038;
  int in_stack_0000003c;
  CGame *in_stack_00000040;
  char *in_stack_00000044;
  float in_stack_0000005c;
  int in_stack_00000060;
  int in_stack_00000064;
  CGame *in_stack_00000074;
  int in_stack_00000078;
  undefined4 uStack_1120;
  CGame *in_stack_ffffef00;
  undefined4 auStack_10bc [997];
  char acStack_128 [4];
  char acStack_124 [244];
  undefined1 auStack_30 [12];
  CAlphaBitmap CStack_24;
  
  bVar11 = 0;
  CStack_24.height = 0;
  CStack_24.width = 0x43f00000;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  iVar8 = 0;
  do {
    iVar4 = iVar8 + 4;
    *(undefined4 *)(&stack0xffffeed0 + iVar8) = 0;
    iVar8 = iVar4;
  } while (iVar4 != 0x1000);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520((CAlphaBitmap *)auStack_30);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            ((CAlphaBitmap *)(auStack_30 + 4),"stats",0x280,0x1e0);
  stream = engine_dosio_c_getFile_FUN_00481a50("data","credits.txt","rt")
  ;
  if (stream == (FILE *)0x0) {
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(&CStack_24);
    return;
  }
  for (iVar8 = unaff_EBX << 2; ((stream->_flag & 0x10) == 0 && (iVar8 < 0x1000)); iVar8 = iVar8 + 4)
  {
    crt_stdio_c_fgets_FUN_005fefd0(acStack_124,0xff,stream);
    iVar4 = crt_string_c_strcmp_FUN_005fef20(acStack_128,"end\n");
    if (iVar4 == 0) break;
    uVar7 = 0xffffffff;
    pcVar5 = acStack_124;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar3 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar11 * -2 + 1;
    } while (cVar3 != '\0');
    pvVar6 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(~uVar7 + 9,"..\\core\\game.cpp",0x1237);
    *(void **)((int)&uStack_1120 + iVar8) = pvVar6;
    if (pvVar6 == (void *)0x0) {
      g_CurrentFilename = "..\\core\\game.cpp";
      g_CurrentLineNumber = 0x1239;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CGame::rollCredits - Out of memory");
    }
    pcVar5 = acStack_124;
    pcVar10 = *(char **)(&stack0xffffeedc + iVar8);
    do {
      cVar3 = *pcVar5;
      *pcVar10 = cVar3;
      if (cVar3 == '\0') break;
      cVar3 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar10[1] = cVar3;
      pcVar10 = pcVar10 + 2;
    } while (cVar3 != '\0');
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\core\\game.cpp",0x123e);
  sound_sndmain_cpp_FUN_005ab130();
  sound_sndmain_cpp_FUN_005aaef0();
  iVar8 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
  if (iVar8 != 0) {
    uStack_1120 = 0x4e438f;
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    uStack_1120 = 0x4e4396;
    sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(1);
    sound_sndmain_cpp_FUN_005a8b70();
    sound_sndmain_cpp_startSfx_FUN_005a8e90();
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  this_ptr_00 = g_ThemeFont;
  g_ThemeFont->win_font_enabled = 0;
  iVar4 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr_00,0x58);
  puStack00000020 = (uint *)0xffffffff;
  iStack00000030 = iVar4;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(in_stack_00000040,in_stack_ffffef00);
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  iVar8 = 0x1df - iVar4;
  do {
    fVar12 = (float10)in_stack_0000002c;
    dVar13 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_stack_00000028,iVar8));
    in_stack_00000038 = (float)(int)ROUND(fVar12);
    if (in_stack_00000038 != (float)((ulonglong)dVar13 >> 0x20)) {
      in_stack_0000002c = in_stack_00000038;
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950
                ((CAlphaBitmap *)&stack0x00000018,0,0,0xffff);
      iVar8 = in_stack_0000003c;
      if (0 < in_stack_0000003c) {
        iVar1 = in_stack_0000003c * 4;
        iVar9 = 0;
        do {
          pcVar5 = *(char **)(&stack0xffffef1c + iVar9);
          color_mode = 0xf8;
          if (*pcVar5 == '\\') {
            if (pcVar5[1] == 'b') {
              color_mode = 2;
            }
            pcVar5 = pcVar5 + 2;
          }
          if ((-1 < (int)in_stack_00000040) && ((int)in_stack_00000040 < 0x1df - iVar4)) {
            engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                      (this_ptr_00,0x19e,0x27f,(int)in_stack_00000040,color_mode,0,pcVar5);
          }
          in_stack_00000040 = (CGame *)(in_stack_00000044 + (int)&in_stack_00000040->game_pixx);
          iVar9 = iVar9 + 4;
        } while (SBORROW4(iVar9,iVar1) != iVar9 + iVar8 * -4 < 0);
      }
      if ((iStack00000030 != 0) &&
         (iVar8 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660(), iVar8 == 0)) {
LAB_004e43c1:
        if (g_MessageCount != 0) {
          this_ptr_00->win_font_enabled = 1;
        }
        sound_sndmain_cpp_FUN_005ab130();
        engine_2d_c_clearInputAndWait_FUN_00403260();
        if (0 < in_stack_00000060) {
          iVar8 = 0;
          do {
            puVar2 = (undefined4 *)((int)auStack_10bc + iVar8);
            iVar8 = iVar8 + 4;
            shape_memdbg_cpp_debugFree_FUN_0050f460((void *)*puVar2,"..\\core\\game.cpp",0x1294)
            ;
          } while (iVar8 < in_stack_00000064 * 4);
        }
        engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540((CAlphaBitmap *)&stack0x00000044);
        return;
      }
      engine_2d_c_fillRectColor_FUN_00403170(0x19e,0,0x27f,0x1e,0);
      engine_2d_c_fillRectColor_FUN_00403170(0x19e,0x1b7,0x27f,0x1df,0);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar8 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,1);
    if (iVar8 != 0) goto LAB_004e43c1;
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(in_stack_00000074);
    in_stack_0000005c = in_stack_0000005c - *(float *)(in_stack_00000078 + 0x264) * FLOAT_0062d66d;
    iVar8 = in_stack_00000078;
  } while( true );
}


// Assembly code:
// 004e4010: PUSH EBX
//   Label: core_game.cpp_CGame_rollCredits_FUN_004e4010
// 004e4011: PUSH EBP
// 004e4012: SUB ESP,0x112c
// 004e4018: XOR EDX,EDX
// 004e401a: MOV ECX,0x43f00000
// 004e401f: MOV dword ptr [ESP + 0x1120],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004e4026: MOV dword ptr [ESP + 0x111c],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 004e402d: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 004e4032: XOR EAX,EAX
// 004e4034: ADD EAX,0x4
//   Label: LAB_004e4034
// 004e4037: XOR EBX,EBX
// 004e4039: MOV dword ptr [ESP + EAX*0x1 + -0x4],EBX
//   XREF to: Stack[-0x1134] (DATA)
// 004e403d: CMP EAX,0x1000
// 004e4042: JNZ 0x004e4034
//   XREF to: 004e4034 (CONDITIONAL_JUMP)
// 004e4044: LEA EAX,[ESP + 0x1100]
//   XREF to: Stack[-0x34] (DATA)
// 004e404b: PUSH EAX
// 004e404c: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 004e4051: ADD ESP,0x4
// 004e4054: PUSH 0x1e0
// 004e4059: PUSH 0x280
// 004e405e: PUSH 0x62d5d5
//   XREF to: 0062d5d5 (DATA)
// 004e4063: LEA EAX,[ESP + 0x110c]
//   XREF to: Stack[-0x34] (DATA)
// 004e406a: PUSH EAX
// 004e406b: CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   XREF to: 004105d0 (UNCONDITIONAL_CALL)
// 004e4070: ADD ESP,0x10
// 004e4073: PUSH 0x62d5db
//   XREF to: 0062d5db (DATA)
// 004e4078: PUSH 0x62d5de
//   XREF to: 0062d5de (DATA)
// 004e407d: PUSH 0x62d5ea
//   XREF to: 0062d5ea (DATA)
// 004e4082: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004e4087: ADD ESP,0xc
// 004e408a: MOV EBP,EAX
// 004e408c: TEST EAX,EAX
// 004e408e: JZ 0x004e42e1
//   XREF to: 004e42e1 (CONDITIONAL_JUMP)
// 004e4094: PUSH EDI
// 004e4095: PUSH ESI
// 004e4096: MOV EBX,dword ptr [ESP + 0x1128]
//   XREF to: Stack[-0x14] (READ)
// 004e409d: SHL EBX,0x2
// 004e40a0: TEST byte ptr [EBP + 0xc],0x10
//   Label: LAB_004e40a0
// 004e40a4: JNZ 0x004e40e1
//   XREF to: 004e40e1 (CONDITIONAL_JUMP)
// 004e40a6: CMP EBX,0x1000
// 004e40ac: JGE 0x004e40e1
//   XREF to: 004e40e1 (CONDITIONAL_JUMP)
// 004e40ae: PUSH EBP
// 004e40af: PUSH 0xff
// 004e40b4: LEA EAX,[ESP + 0x1010]
//   XREF to: Stack[-0x134] (DATA)
// 004e40bb: PUSH EAX
// 004e40bc: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004e40c1: ADD ESP,0xc
// 004e40c4: PUSH 0x62d5ef
//   XREF to: 0062d5ef (DATA)
// 004e40c9: LEA EAX,[ESP + 0x100c]
//   XREF to: Stack[-0x134] (DATA)
// 004e40d0: PUSH EAX
// 004e40d1: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004e40d6: ADD ESP,0x8
// 004e40d9: TEST EAX,EAX
// 004e40db: JNZ 0x004e42fb
//   XREF to: 004e42fb (CONDITIONAL_JUMP)
// 004e40e1: PUSH 0x123e
//   Label: LAB_004e40e1
// 004e40e6: PUSH 0x62d639
//   XREF to: 0062d639 (DATA)
// 004e40eb: PUSH EBP
// 004e40ec: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004e40f1: ADD ESP,0xc
// 004e40f4: CALL sound_sndmain.cpp_FUN_005ab130
//   XREF to: 005ab130 (UNCONDITIONAL_CALL)
// 004e40f9: CALL sound_sndmain.cpp_FUN_005aaef0
//   XREF to: 005aaef0 (UNCONDITIONAL_CALL)
// 004e40fe: XOR ECX,ECX
// 004e4100: PUSH 0x1
// 004e4102: MOV dword ptr [ESP + 0x1120],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 004e4109: CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
//   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)
// 004e410e: ADD ESP,0x4
// 004e4111: TEST EAX,EAX
// 004e4113: JNZ 0x004e438a
//   XREF to: 004e438a (CONDITIONAL_JUMP)
// 004e4119: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: LAB_004e4119
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 004e411e: PUSH 0x58
// 004e4120: MOV EDI,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004e4126: PUSH EDI
// 004e4127: MOV dword ptr [EDI + 0x3190],0x0
// 004e4131: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004e4136: ADD ESP,0x8
// 004e4139: MOV EBX,0xffffffff
// 004e413e: MOV ESI,dword ptr [ESP + 0x1140]
//   XREF to: Stack[0x4] (READ)
// 004e4145: MOV EBP,EAX
// 004e4147: PUSH ESI
// 004e4148: MOV dword ptr [ESP + 0x1134],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 004e414f: MOV dword ptr [ESP + 0x1124],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 004e4156: CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
// 004e415b: ADD ESP,0x4
// 004e415e: PUSH 0xffff
// 004e4163: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 004e4168: MOV EAX,0x1df
// 004e416d: SUB EAX,EBP
// 004e416f: ADD ESP,0x4
// 004e4172: MOV EBP,EAX
// 004e4174: FLD float ptr [ESP + 0x1124]
//   Label: LAB_004e4174
//   XREF to: Stack[-0x18] (READ)
// 004e417b: MOV EDX,dword ptr [ESP + 0x1120]
//   XREF to: Stack[-0x1c] (READ)
// 004e4182: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004e4187: FISTP dword ptr [ESP + 0x112c]
//   XREF to: Stack[-0x10] (WRITE)
// 004e418e: MOV EAX,dword ptr [ESP + 0x112c]
//   XREF to: Stack[-0x10] (READ)
// 004e4195: CMP EAX,EDX
// 004e4197: JZ 0x004e428f
//   XREF to: 004e428f (CONDITIONAL_JUMP)
// 004e419d: MOV dword ptr [ESP + 0x1120],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004e41a4: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 004e41a9: PUSH 0xffff
// 004e41ae: PUSH 0x0
// 004e41b0: PUSH 0x0
// 004e41b2: LEA EAX,[ESP + 0x1114]
//   XREF to: Stack[-0x34] (DATA)
// 004e41b9: PUSH EAX
// 004e41ba: CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   XREF to: 00410950 (UNCONDITIONAL_CALL)
// 004e41bf: ADD ESP,0x10
// 004e41c2: MOV ECX,dword ptr [ESP + 0x1128]
//   XREF to: Stack[-0x14] (READ)
// 004e41c9: TEST ECX,ECX
// 004e41cb: JLE 0x004e423d
//   XREF to: 004e423d (CONDITIONAL_JUMP)
// 004e41d1: LEA ESI,[ECX*0x4 + 0x0]
// 004e41d8: XOR EBX,EBX
// 004e41da: MOV EAX,dword ptr [ESP + EBX*0x1 + 0x8]
//   Label: LAB_004e41da
// 004e41de: MOV CL,byte ptr [EAX]
// 004e41e0: MOV EDX,0xf8
// 004e41e5: CMP CL,0x5c
// 004e41e8: JNZ 0x004e41f8
//   XREF to: 004e41f8 (CONDITIONAL_JUMP)
// 004e41ea: CMP byte ptr [EAX + 0x1],0x62
// 004e41ee: JNZ 0x004e41f5
//   XREF to: 004e41f5 (CONDITIONAL_JUMP)
// 004e41f0: MOV EDX,0x2
// 004e41f5: ADD EAX,0x2
//   Label: LAB_004e41f5
// 004e41f8: MOV ECX,dword ptr [ESP + 0x112c]
//   Label: LAB_004e41f8
//   XREF to: Stack[-0x10] (READ)
// 004e41ff: TEST ECX,ECX
// 004e4201: JL 0x004e421f
//   XREF to: 004e421f (CONDITIONAL_JUMP)
// 004e4203: CMP EBP,ECX
// 004e4205: JLE 0x004e421f
//   XREF to: 004e421f (CONDITIONAL_JUMP)
// 004e4207: PUSH EAX
// 004e4208: PUSH 0x0
// 004e420a: PUSH EDX
// 004e420b: PUSH ECX
// 004e420c: PUSH 0x27f
// 004e4211: PUSH 0x19e
// 004e4216: PUSH EDI
// 004e4217: CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
//   XREF to: 004cdee0 (UNCONDITIONAL_CALL)
// 004e421c: ADD ESP,0x1c
// 004e421f: MOV EAX,dword ptr [ESP + 0x1130]
//   Label: LAB_004e421f
//   XREF to: Stack[-0xc] (READ)
// 004e4226: MOV EDX,dword ptr [ESP + 0x112c]
//   XREF to: Stack[-0x10] (READ)
// 004e422d: ADD EDX,EAX
// 004e422f: ADD EBX,0x4
// 004e4232: MOV dword ptr [ESP + 0x112c],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 004e4239: CMP EBX,ESI
// 004e423b: JL 0x004e41da
//   XREF to: 004e41da (CONDITIONAL_JUMP)
// 004e423d: MOV ECX,dword ptr [ESP + 0x111c]
//   Label: LAB_004e423d
//   XREF to: Stack[-0x20] (READ)
// 004e4244: TEST ECX,ECX
// 004e4246: JZ 0x004e4259
//   XREF to: 004e4259 (CONDITIONAL_JUMP)
// 004e4248: PUSH ECX
// 004e4249: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004e424e: ADD ESP,0x4
// 004e4251: TEST EAX,EAX
// 004e4253: JZ 0x004e43c1
//   XREF to: 004e43c1 (CONDITIONAL_JUMP)
// 004e4259: PUSH 0x0
//   Label: LAB_004e4259
// 004e425b: PUSH 0x1e
// 004e425d: PUSH 0x27f
// 004e4262: PUSH 0x0
// 004e4264: PUSH 0x19e
// 004e4269: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 004e426e: ADD ESP,0x14
// 004e4271: PUSH 0x0
// 004e4273: PUSH 0x1df
// 004e4278: PUSH 0x27f
// 004e427d: PUSH 0x1b7
// 004e4282: PUSH 0x19e
// 004e4287: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 004e428c: ADD ESP,0x14
// 004e428f: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   Label: LAB_004e428f
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 004e4294: PUSH 0x1
// 004e4296: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004e429b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004e429c: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004e429e: CALL dword ptr [EDX]
// 004e42a0: ADD ESP,0x8
// 004e42a3: TEST EAX,EAX
// 004e42a5: JNZ 0x004e43c1
//   XREF to: 004e43c1 (CONDITIONAL_JUMP)
// 004e42ab: MOV EDX,dword ptr [ESP + 0x1140]
// 004e42b2: PUSH EDX
// 004e42b3: CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
// 004e42b8: ADD ESP,0x4
// 004e42bb: MOV EAX,dword ptr [ESP + 0x1140]
// 004e42c2: FLD float ptr [EAX + 0x264]
// 004e42c8: FMUL float ptr [0x0062d66d]
//   XREF to: 0062d66d (READ)
// 004e42ce: FSUBR float ptr [ESP + 0x1124]
// 004e42d5: FSTP float ptr [ESP + 0x1124]
// 004e42dc: JMP 0x004e4174
//   XREF to: 004e4174 (UNCONDITIONAL_JUMP)
// 004e42e1: PUSH EBX
//   Label: LAB_004e42e1
// 004e42e2: LEA EAX,[ESP + 0x1104]
//   XREF to: Stack[-0x34] (DATA)
// 004e42e9: PUSH EAX
// 004e42ea: CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540
//   XREF to: 00410540 (UNCONDITIONAL_CALL)
// 004e42ef: ADD ESP,0x8
// 004e42f2: ADD ESP,0x112c
// 004e42f8: POP EBP
// 004e42f9: POP EBX
// 004e42fa: RET
// 004e42fb: PUSH 0x1237
//   Label: LAB_004e42fb
// 004e4300: PUSH 0x62d5f4
//   XREF to: 0062d5f4 (DATA)
// 004e4305: LEA EDI,[ESP + 0x1010]
//   XREF to: Stack[-0x134] (DATA)
// 004e430c: SUB ECX,ECX
// 004e430e: DEC ECX
// 004e430f: XOR EAX,EAX
// 004e4311: SCASB.REPNE ES:EDI
// 004e4313: NOT ECX
// 004e4315: DEC ECX
// 004e4316: ADD ECX,0xa
// 004e4319: PUSH ECX
// 004e431a: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 004e431f: ADD ESP,0xc
// 004e4322: MOV dword ptr [ESP + EBX*0x1 + 0x8],EAX
// 004e4326: TEST EAX,EAX
// 004e4328: JZ 0x004e4366
//   XREF to: 004e4366 (CONDITIONAL_JUMP)
// 004e432a: LEA ESI,[ESP + 0x1008]
//   Label: LAB_004e432a
//   XREF to: Stack[-0x134] (DATA)
// 004e4331: MOV EDI,dword ptr [ESP + EBX*0x1 + 0x8]
// 004e4335: MOV EDX,dword ptr [ESP + 0x1128]
//   XREF to: Stack[-0x14] (READ)
// 004e433c: PUSH EDI
// 004e433d: MOV AL,byte ptr [ESI]
//   Label: LAB_004e433d
//   XREF to: Stack[-0x134] (DATA)
// 004e433f: MOV byte ptr [EDI],AL
// 004e4341: CMP AL,0x0
// 004e4343: JZ 0x004e4355
//   XREF to: 004e4355 (CONDITIONAL_JUMP)
// 004e4345: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x133] (READ)
// 004e4348: ADD ESI,0x2
// 004e434b: MOV byte ptr [EDI + 0x1],AL
// 004e434e: ADD EDI,0x2
// 004e4351: CMP AL,0x0
// 004e4353: JNZ 0x004e433d
//   XREF to: 004e433d (CONDITIONAL_JUMP)
// 004e4355: POP EDI
//   Label: LAB_004e4355
// 004e4356: INC EDX
// 004e4357: ADD EBX,0x4
// 004e435a: MOV dword ptr [ESP + 0x1128],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004e4361: JMP 0x004e40a0
//   XREF to: 004e40a0 (UNCONDITIONAL_JUMP)
// 004e4366: MOV EDI,0x62d605
//   Label: LAB_004e4366
//   XREF to: 0062d605 (DATA)
// 004e436b: MOV EAX,0x1239
// 004e4370: PUSH 0x62d616
//   XREF to: 0062d616 (DATA)
// 004e4375: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 004e437b: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004e4380: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004e4385: ADD ESP,0x4
// 004e4388: JMP 0x004e432a
//   XREF to: 004e432a (UNCONDITIONAL_JUMP)
// 004e438a: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   Label: LAB_004e438a
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 004e438f: PUSH 0x1
// 004e4391: CALL sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0
//   XREF to: 005a8af0 (UNCONDITIONAL_CALL)
// 004e4396: ADD ESP,0x4
// 004e4399: PUSH 0x1
// 004e439b: CALL sound_sndmain.cpp_FUN_005a8b70
//   XREF to: 005a8b70 (UNCONDITIONAL_CALL)
// 004e43a0: ADD ESP,0x4
// 004e43a3: PUSH 0x62d64a
//   XREF to: 0062d64a (DATA)
// 004e43a8: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 004e43ad: ADD ESP,0x4
// 004e43b0: MOV dword ptr [ESP + 0x111c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004e43b7: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 004e43bc: JMP 0x004e4119
//   XREF to: 004e4119 (UNCONDITIONAL_JUMP)
// 004e43c1: CMP dword ptr [0x02fa8cd0],0x0
//   Label: LAB_004e43c1
//   XREF to: 02fa8cd0 (READ)
// 004e43c8: JZ 0x004e43d4
//   XREF to: 004e43d4 (CONDITIONAL_JUMP)
// 004e43ca: MOV dword ptr [EDI + 0x3190],0x1
// 004e43d4: CALL sound_sndmain.cpp_FUN_005ab130
//   Label: LAB_004e43d4
//   XREF to: 005ab130 (UNCONDITIONAL_CALL)
// 004e43d9: MOV EBX,dword ptr [ESP + 0x1128]
// 004e43e0: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 004e43e5: TEST EBX,EBX
// 004e43e7: JLE 0x004e4420
//   XREF to: 004e4420 (CONDITIONAL_JUMP)
// 004e43e9: MOV ESI,dword ptr [ESP + 0x1128]
// 004e43f0: XOR EBX,EBX
// 004e43f2: SHL ESI,0x2
// 004e43f5: PUSH 0x1294
//   Label: LAB_004e43f5
// 004e43fa: PUSH 0x62d65a
//   XREF to: 0062d65a (DATA)
// 004e43ff: MOV EDI,dword ptr [ESP + EBX*0x1 + 0x10]
// 004e4403: PUSH EDI
// 004e4404: ADD EBX,0x4
// 004e4407: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004e440c: ADD ESP,0xc
// 004e440f: CMP EBX,ESI
// 004e4411: JL 0x004e43f5
//   XREF to: 004e43f5 (CONDITIONAL_JUMP)
// 004e4413: LEA EAX,[EAX]
// 004e4419: LEA EDX,[EDX]
// 004e441f: NOP
// 004e4420: PUSH 0x0
//   Label: LAB_004e4420
// 004e4422: LEA EAX,[ESP + 0x110c]
// 004e4429: PUSH EAX
// 004e442a: CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540
//   XREF to: 00410540 (UNCONDITIONAL_CALL)
// 004e442f: ADD ESP,0x8
// 004e4432: POP ESI
// 004e4433: POP EDI
// 004e4434: ADD ESP,0x112c
// 004e443a: POP EBP
// 004e443b: POP EBX
// 004e443c: RET
