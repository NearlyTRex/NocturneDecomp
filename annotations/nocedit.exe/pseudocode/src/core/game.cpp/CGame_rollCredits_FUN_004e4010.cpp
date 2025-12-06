// Name: core_game.cpp_CGame_rollCredits_FUN_004e4010
// Address: 004e4010
// Address Range: [[004e4010, 004e443c]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_rollCredits_FUN_004e4010(CGame * this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_rollCredits_FUN_004e4010(CGame *this_ptr)

{
  uint *puVar1;
  char cVar2;
  CBitFont *this_ptr_00;
  int iVar3;
  FILE *stream;
  uint uVar4;
  char *pcVar5;
  void *pvVar6;
  int color_mode;
  int unaff_EBX;
  int iVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  char *pcVar9;
  byte bVar10;
  float10 fVar11;
  double dVar12;
  uint *puStack00000020;
  int in_stack_00000028;
  float in_stack_0000002c;
  uint uStack00000030;
  float in_stack_00000038;
  int in_stack_0000003c;
  CGame *in_stack_00000040;
  char *in_stack_00000044;
  float in_stack_0000005c;
  int in_stack_00000060;
  int in_stack_00000064;
  CGame *in_stack_00000074;
  int in_stack_00000078;
  uint uStack_1120;
  CGame *in_stack_ffffef00;
  uint auStack_10bc [997];
  char acStack_128 [4];
  char acStack_124 [244];
  byte auStack_30 [12];
  CAlphaBitmap CStack_24;
  
  bVar10 = 0;
  CStack_24.height = 0;
  CStack_24.width = 0x43f00000;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  iVar7 = 0;
  do {
    iVar3 = iVar7 + 4;
    *(uint *)(&stack0xffffeed0 + iVar7) = 0;
    iVar7 = iVar3;
  } while (iVar3 != 0x1000);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520((CAlphaBitmap *)auStack_30);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            ((CAlphaBitmap *)(auStack_30 + 4),"stats",0x280,0x1e0);
  stream = engine_dosio_c_getFile_FUN_00481a50("data","credits.txt","rt")
  ;
  if (stream == (FILE *)0x0) {
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(&CStack_24);
    return;
  }
  for (iVar7 = unaff_EBX << 2; ((stream->_flag & 0x10) == 0 && (iVar7 < 0x1000)); iVar7 = iVar7 + 4)
  {
    crt_stdio_c_fgets_FUN_005fefd0(acStack_124,0xff,stream);
    iVar3 = crt_string_c_strcmp_FUN_005fef20(acStack_128,"end\n");
    if (iVar3 == 0) break;
    uVar4 = 0xffffffff;
    pcVar5 = acStack_124;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar10 * -2 + 1;
    } while (cVar2 != '\0');
    pvVar6 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(~uVar4 + 9,"..\\core\\game.cpp",0x1237);
    *(void **)((int)&uStack_1120 + iVar7) = pvVar6;
    if (pvVar6 == (void *)0x0) {
      g_CurrentFilename = "..\\core\\game.cpp";
      g_CurrentLineNumber = 0x1239;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CGame::rollCredits - Out of memory");
    }
    pcVar5 = acStack_124;
    pcVar9 = *(char **)(&stack0xffffeedc + iVar7);
    do {
      cVar2 = *pcVar5;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\core\\game.cpp",0x123e);
  sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
  sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
  iVar7 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
  if (iVar7 != 0) {
    uStack_1120 = 0x4e438f;
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    uStack_1120 = 0x4e4396;
    sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(1);
    sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(1);
    sound_sndmain_cpp_startSfx_FUN_005a8e90("faded-remix.mp3");
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  this_ptr_00 = g_ThemeFont;
  g_ThemeFont->win_font_enabled = 0;
  uVar4 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr_00,0x58);
  puStack00000020 = (uint *)0xffffffff;
  uStack00000030 = uVar4;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(in_stack_00000040,in_stack_ffffef00);
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  iVar7 = 0x1df - uVar4;
  do {
    fVar11 = (float10)in_stack_0000002c;
    dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_stack_00000028,iVar7));
    in_stack_00000038 = (float)(int)ROUND(fVar11);
    if (in_stack_00000038 != (float)((ulonglong)dVar12 >> 0x20)) {
      in_stack_0000002c = in_stack_00000038;
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950
                ((CAlphaBitmap *)&stack0x00000018,0,0,0xffff);
      iVar7 = in_stack_0000003c;
      if (0 < in_stack_0000003c) {
        iVar3 = in_stack_0000003c * 4;
        iVar8 = 0;
        do {
          pcVar5 = *(char **)(&stack0xffffef1c + iVar8);
          color_mode = 0xf8;
          if (*pcVar5 == '\\') {
            if (pcVar5[1] == 'b') {
              color_mode = 2;
            }
            pcVar5 = pcVar5 + 2;
          }
          if ((-1 < (int)in_stack_00000040) && ((int)in_stack_00000040 < (int)(0x1df - uVar4))) {
            engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                      (this_ptr_00,0x19e,0x27f,(int)in_stack_00000040,color_mode,0,pcVar5);
          }
          in_stack_00000040 = (CGame *)(in_stack_00000044 + (int)&in_stack_00000040->game_pixx);
          iVar8 = iVar8 + 4;
        } while (SBORROW /* signed borrow */4(iVar8,iVar3) != iVar8 + iVar7 * -4 < 0);
      }
      if ((uStack00000030 != 0) &&
         (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uStack00000030), iVar7 == 0)) {
LAB_004e43c1:
        if (g_MessageCount != 0) {
          this_ptr_00->win_font_enabled = 1;
        }
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        engine_2d_c_clearInputAndWait_FUN_00403260();
        if (0 < in_stack_00000060) {
          iVar7 = 0;
          do {
            puVar1 = (uint *)((int)auStack_10bc + iVar7);
            iVar7 = iVar7 + 4;
            shape_memdbg_cpp_debugFree_FUN_0050f460((void *)*puVar1,"..\\core\\game.cpp",0x1294)
            ;
          } while (iVar7 < in_stack_00000064 * 4);
        }
        engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540((CAlphaBitmap *)&stack0x00000044);
        return;
      }
      engine_2d_c_fillRectColor_FUN_00403170(0x19e,0,0x27f,0x1e,0);
      engine_2d_c_fillRectColor_FUN_00403170(0x19e,0x1b7,0x27f,0x1df,0);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar7 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,1);
    if (iVar7 != 0) goto LAB_004e43c1;
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(in_stack_00000074);
    in_stack_0000005c = in_stack_0000005c - *(float *)(in_stack_00000078 + 0x264) * 32f;
    iVar7 = in_stack_00000078;
  } while( true );
}
