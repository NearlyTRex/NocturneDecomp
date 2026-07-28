// Name: core_game.cpp_CGame_rollCredits_FUN_004a6e90
// Address: 004a6e90
// Address Range: [[004a6e90, 004a729c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_rollCredits_FUN_004a6e90(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_rollCredits_FUN_004a6e90(CGame *this_ptr)

{
  char cVar1;
  CBitFont *this_ptr_00;
  int iVar2;
  _FILE *stream;
  char *pcVar3;
  void *pvVar4;
  uint uVar5;
  int color_mode;
  int iVar6;
  int iVar7;
  char *pcVar8;
  byte bVar9;
  double dVar10;
  CGame *unaff_retaddr;
  uint uVar11;
  uint local_1134 [1024];
  char local_134 [252];
  byte auStack_38 [20];
  int iStack_24;
  int local_20;
  uint local_1c;
  float local_18;
  float local_14;
  int local_10;
  
  bVar9 = 0;
  local_1c = 0;
  local_14 = 480.0;
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  iVar6 = 0;
  do {
    iVar2 = iVar6 + 4;
    *(uint *)((int)local_1134 + iVar6) = 0;
    iVar6 = iVar2;
  } while (iVar2 != 0x1000);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320((CAlphaBitmap *)(auStack_38 + 4));
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            ((CAlphaBitmap *)(auStack_38 + 4),"stats",0x280,0x1e0);
  stream = engine_dosio_cpp_getFile_FUN_00456a60
                     ("data","credits.txt","rt");
  if (stream == (_FILE *)0x0) {
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040e340((CAlphaBitmap *)(auStack_38 + 4),0);
    return;
  }
  for (iVar6 = local_1c << 2; ((stream->_flag & 0x10) == 0 && (iVar6 < 0x1000)); iVar6 = iVar6 + 4)
  {
    _fgets(local_134,0xff,stream);
    iVar2 = _strcmp(local_134,"end\n");
    if (iVar2 == 0) break;
    uVar5 = 0xffffffff;
    pcVar3 = local_134;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + (uint)bVar9 * -2 + 1;
    } while (cVar1 != '\0');
    pvVar4 = malloc(~uVar5 + 9);
    *(void **)((int)local_1134 + iVar6) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      PTR_01cc4800 = "..\\core\\game.cpp";
      INT_01cc4804 = 0x1242;
      core_main_c_FUN_004c8440("CGame::rollCredits - Out of memory");
    }
    pcVar3 = local_134;
    pcVar8 = *(char **)((int)local_1134 + iVar6);
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    local_1c = local_1c + 1;
  }
  _fclose(stream);
  sound_sndmain_cpp_resetSoundDevice_FUN_00528080();
  sound_sndmain_cpp_enableSoundSystem_FUN_00527e40();
  local_18 = 0.0;
  iVar6 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(1);
  if (iVar6 != 0) {
    sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
    sound_sndmain_cpp_setNextSfxChannel_FUN_005261b0(1);
    sound_sndmain_cpp_setNextSfxFlags_FUN_00526240(1);
    local_18 = (float)sound_sndmain_cpp_startSfx_FUN_005265a0("faded-remix.mp3");
    sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  }
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  this_ptr_00 = _DAT_014b9900;
  _DAT_014b9900->win_font_enabled = 0;
  iVar6 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(this_ptr_00,0x58);
  local_20 = -1;
  core_game_cpp_CGame_saveClockTime_FUN_0049a890(this_ptr);
  engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
  local_10 = 0x1df - iVar6;
  do {
    iVar2 = local_20;
    uVar11 = 0x4a6ffd;
    dVar10 = round((double)local_14);
    local_10 = (int)ROUND(dVar10);
    if (local_10 != iVar2) {
      iStack_24 = local_10;
      engine_special_cpp_clearScreen_FUN_0052ee70();
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710((CAlphaBitmap *)auStack_38,0,0,0xffff);
      if (0 < local_20) {
        iVar2 = local_20 * 4;
        iVar7 = 0;
        do {
          pcVar3 = *(char **)((int)local_1134 + iVar7 + -4);
          color_mode = 0xf8;
          if (*pcVar3 == '\\') {
            if (pcVar3[1] == 'b') {
              color_mode = 2;
            }
            pcVar3 = pcVar3 + 2;
          }
          if ((-1 < local_10) && (local_10 < (int)local_14)) {
            engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_00490de0
                      (this_ptr_00,0x19e,0x27f,local_10,color_mode,0,pcVar3);
          }
          iVar7 = iVar7 + 4;
          local_10 = local_10 + iVar6;
        } while (iVar7 < iVar2);
      }
      if ((local_1c != 0) &&
         (iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(local_1c), iVar2 == 0)) {
LAB_004a722b:
        if (_DAT_01d16810 != 0) {
          this_ptr_00->win_font_enabled = 1;
        }
        sound_sndmain_cpp_resetSoundDevice_FUN_00528080();
        iVar6 = local_20;
        engine_2d_c_clearInputAndWait_FUN_00403f50();
        if (0 < iVar6) {
          iVar6 = 0;
          iVar2 = local_20 * 4;
          do {
            iVar7 = iVar6 + -4;
            iVar6 = iVar6 + 4;
            FUN_005638d0(*(uint *)((int)local_1134 + iVar7));
          } while (iVar6 < iVar2);
        }
        engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040e340((CAlphaBitmap *)auStack_38,0);
        return;
      }
      engine_2d_c_fillRectColor_FUN_00403e60(0x19e,0,0x27f,0x1e,0);
      engine_2d_c_fillRectColor_FUN_00403e60(0x19e,0x1b7,0x27f,0x1df,0);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    iVar2 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,1,uVar11);
    if (iVar2 != 0) goto LAB_004a722b;
    core_game_cpp_CGame_updateDT_FUN_0049a8a0(unaff_retaddr);
    local_18 = local_18 - unaff_retaddr->delta_time_float * 32.0f;
  } while( true );
}
