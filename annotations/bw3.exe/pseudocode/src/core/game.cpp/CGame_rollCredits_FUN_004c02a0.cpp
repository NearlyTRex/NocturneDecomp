// Name: core_game.cpp_CGame_rollCredits_FUN_004c02a0
// Address: 004c02a0
// Address Range: [[004c02a0, 004c07a0]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_rollCredits_FUN_004c02a0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_rollCredits_FUN_004c02a0(CGame *this_ptr)

{
  uint *puVar1;
  char cVar2;
  CBitFont *pCVar3;
  CBitFont *y;
  int iVar4;
  _FILE *stream;
  SIZE_T SVar5;
  void *pvVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  byte bVar11;
  double dVar12;
  uint local_154c [1023];
  char acStack_550 [1028];
  char local_14c [256];
  CAlphaBitmap local_4c;
  float local_38;
  int local_34;
  int local_30;
  SIZE_T local_2c;
  CBitFont *local_28;
  CBitFont *local_24;
  int local_20;
  int local_1c;
  int local_18;
  CBitFont *local_14;
  CBitFont *local_10;
  
  bVar11 = 0;
  local_20 = 0;
  local_38 = 480.0;
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  iVar9 = 0;
  do {
    iVar4 = iVar9 + 4;
    *(uint *)((int)local_154c + iVar9) = 0;
    iVar9 = iVar4;
  } while (iVar4 != 0x1000);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0(&local_4c);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(&local_4c,"stats",0x280,0x1e0);
  stream = engine_dosio_cpp_getFile_FUN_004659c0
                     ("data","credits.txt","rt");
  if (stream == (_FILE *)0x0) {
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300(&local_4c,0);
    return;
  }
  for (iVar9 = local_20 << 2; ((stream->_flag & 0x10) == 0 && (iVar9 < 0x1000)); iVar9 = iVar9 + 4)
  {
    _fgets(local_14c,0xff,stream);
    iVar4 = _strcmp(local_14c,"end\n");
    if (iVar4 == 0) break;
    uVar7 = 0xffffffff;
    pcVar10 = local_14c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + (uint)bVar11 * -2 + 1;
    } while (cVar2 != '\0');
    pvVar6 = malloc(~uVar7 + 9);
    *(void **)((int)local_154c + iVar9) = pvVar6;
    if (pvVar6 == (void *)0x0) {
      g_CurrentFilename = "..\\core\\game.cpp";
      g_CurrentLineNumber = 5295;
      core_main_c_displayErrorAndQuit_FUN_004e4330("CGame::rollCredits - Out of memory");
    }
    pcVar10 = local_14c;
    pcVar8 = *(char **)((int)local_154c + iVar9);
    do {
      cVar2 = *pcVar10;
      *pcVar8 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar8[1] = cVar2;
      pcVar8 = pcVar8 + 2;
    } while (cVar2 != '\0');
    local_20 = local_20 + 1;
  }
  _fclose(stream);
  sound_sndmain_cpp_enableSoundSystem_FUN_00558050();
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  pCVar3 = g_CBitFont_PTR_01549aa8;
  local_10 = g_CBitFont_PTR_01549aa8;
  g_CBitFont_PTR_01549aa8->win_font_enabled = 0;
  iVar9 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(pCVar3,0x58);
  local_24 = (CBitFont *)0xffffffff;
  local_34 = iVar9;
  core_game_cpp_CGame_saveClockTime_FUN_004b4430(this_ptr);
  engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
  local_1c = 0x1df - iVar9;
  do {
    pCVar3 = local_24;
    dVar12 = round((double)local_38);
    local_10 = (CBitFont *)(int)ROUND(dVar12);
    if (local_10 != pCVar3) {
      local_28 = local_10;
      engine_special_cpp_clearScreen_FUN_00560d70();
      local_1c = 0;
      if (0 < (int)local_24) {
        local_34 = 0;
        local_18 = (int)local_24 * 4;
        do {
          local_30 = 0xf8;
          pcVar10 = *(char **)((int)local_154c + local_34 + -4);
          if ((*pcVar10 == '\\') && (pcVar10[1] == 'b')) {
            local_30 = 2;
            pcVar10 = pcVar10 + 2;
          }
          if ((-1 < (int)local_10) && ((int)local_10 < local_20)) {
            local_1c = 1;
            if ((*pcVar10 == '\\') && (pcVar10[1] == '1')) {
              pcVar10 = pcVar10 + 2;
              local_2c = 0xffffffff;
              uVar7 = 0xffffffff;
              pcVar8 = pcVar10;
              do {
                if (uVar7 == 0) break;
                uVar7 = uVar7 - 1;
                cVar2 = *pcVar8;
                pcVar8 = pcVar8 + (uint)bVar11 * -2 + 1;
              } while (cVar2 != '\0');
              iVar9 = ~uVar7 - 1;
              SVar5 = 0;
              if (0 < iVar9) {
                pcVar8 = pcVar10;
                do {
                  if ((int)(~uVar7 - 3) <= (int)SVar5) break;
                  if ((*pcVar8 == '\\') && (pcVar8[1] == '2')) {
                    local_2c = SVar5;
                    break;
                  }
                  SVar5 = SVar5 + 1;
                  pcVar8 = pcVar8 + 1;
                } while ((int)SVar5 < iVar9);
              }
              if (0 < (int)local_2c) {
                _strncpy(acStack_550,pcVar10,local_2c);
                iVar4 = local_2c + 2;
                acStack_550[local_2c] = '\0';
                y = local_10;
                pCVar3 = local_14;
                iVar9 = local_30;
                engine_font_cpp_CBitFont_drawTextWrapper_FUN_004b0cb0
                          (local_14,100,(int)local_10,local_30,0,acStack_550);
                engine_font_cpp_CBitFont_drawTextWrapper_FUN_004b0cb0
                          (pCVar3,300,(int)y,iVar9,0,pcVar10 + iVar4);
              }
            }
            else {
              engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004b0fa0
                        (local_14,100,400,(int)local_10,local_30,0,pcVar10);
            }
          }
          local_34 = local_34 + 4;
          local_10 = (CBitFont *)((int)(local_10->bitmap_files + -1) + 0x4c + (int)local_38);
        } while (local_34 < local_18);
      }
      engine_2d_c_fillRectColor_FUN_004031c0(0,0,0x27f,0x1e,0);
      engine_2d_c_fillRectColor_FUN_004031c0(0,0x1b7,0x27f,0x1df,0);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
    iVar9 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar9 != 0) {
      if (g_UseOSFonts != 0) {
        local_10->win_font_enabled = 1;
      }
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      if (0 < local_20) {
        iVar9 = local_20 * 4;
        iVar4 = 0;
        do {
          puVar1 = (uint *)((int)local_154c + iVar4);
          iVar4 = iVar4 + 4;
          debugFree((void *)*puVar1);
        } while (iVar4 < iVar9);
      }
      engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300(&local_4c,0);
      return;
    }
    core_game_cpp_CGame_updateDT_FUN_004b4440(this_ptr);
    local_38 = local_38 - this_ptr->delta_time_float * 32.0f;
    if ((local_18 == 0) && (local_38 < 0.0)) {
      local_38 = 480.0;
      local_24 = (CBitFont *)0xffffffff;
    }
  } while( true );
}
