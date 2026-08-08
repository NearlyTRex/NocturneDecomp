// Name: core_game.cpp_CGame_FUN_004a57c0
// Address: 004a57c0
// Address Range: [[004a57c0, 004a5d87]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_FUN_004a57c0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_FUN_004a57c0(CGame *this_ptr)

{
  char cVar1;
  int iVar2;
  int iVar3;
  _FILE *p_Var4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  byte bVar10;
  uint auStack_a30 [256];
  byte local_630 [768];
  ushort auStack_330 [256];
  char local_130 [256];
  uint local_30;
  uint local_2c;
  ushort *local_28;
  int local_24;
  int local_20;
  int local_1c;
  void *local_18;
  int local_14;
  char *pcVar9;
  
  bVar10 = 0;
  if (this_ptr->bitmap_filename[0] == '\0') {
    return;
  }
  pcVar9 = this_ptr->bitmap_filename;
  this_ptr->cutscene_skippable = 0;
  iVar2 = engine_dosio_cpp_getFileSize_FUN_004568c0("art",pcVar9);
  if (iVar2 < 0) {
    shape_edittool_cpp_FUN_0046fcd0(g_CEditorTools_PTR_005b6d50,"Can't open %s",pcVar9);
    this_ptr->bitmap_filename[0] = '\0';
    return;
  }
  iVar3 = this_ptr->bitmap_width * this_ptr->bitmap_height;
  if (iVar2 != iVar3) {
    shape_edittool_cpp_FUN_0046fcd0
              (g_CEditorTools_PTR_005b6d50,"%s is %d bytes, but expected %dx%d=%d byte file",pcVar9,
               this_ptr->bitmap_width,this_ptr->bitmap_height,iVar3);
    this_ptr->bitmap_filename[0] = '\0';
    return;
  }
  splitpath(pcVar9,(char *)0x0,(char *)0x0,local_130,(char *)0x0);
  pcVar6 = ".act";
  iVar2 = -1;
  pcVar9 = local_130;
  do {
    pcVar8 = pcVar9;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = pcVar9 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar8;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar1 = *pcVar6;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  p_Var4 = engine_dosio_cpp_getFile_FUN_00456a60("art",local_130,"rb");
  if (p_Var4 == (_FILE *)0x0) {
    shape_edittool_cpp_FUN_0046fcd0(g_CEditorTools_PTR_005b6d50,"Can't open %s",local_130);
  }
  else {
    _fread(local_630,1,0x300,p_Var4);
    _fclose(p_Var4);
    iVar2 = 0;
    iVar3 = 0;
    local_20 = 0;
    do {
      if (g_BitsPerPixel == 0x10) {
        local_30 = (uint)local_630[iVar2 + 1];
        local_30 = (uint)local_630[iVar2 + 1] / (uint)g_GreenScaleFactor;
        local_2c = (uint)local_630[iVar2 + 2] / (uint)g_BlueScaleFactor;
        *(ushort *)((int)auStack_330 + iVar3) =
             (ushort)((uint)local_630[iVar2 + 2] / (uint)g_BlueScaleFactor <<
                     (g_BlueBitPosition.bytes[0] & 0x1f)) |
             (ushort)((uint)local_630[iVar2] / (uint)g_RedScaleFactor <<
                     (g_RedBitPosition.bytes[0] & 0x1f)) |
             (ushort)(local_30 << (g_GreenBitPosition.bytes[0] & 0x1f));
      }
      else if (g_BitsPerPixel == 0x20) {
        *(uint *)((int)auStack_a30 + local_20) =
             (uint)local_630[iVar2] << (g_RedBitPosition.bytes[0] & 0x1f) |
             (uint)local_630[iVar2 + 1] << (g_GreenBitPosition.bytes[0] & 0x1f) |
             (uint)local_630[iVar2 + 2] << (g_BlueBitPosition.bytes[0] & 0x1f);
      }
      else {
        *(uint *)((int)auStack_a30 + local_20) =
             (uint)local_630[iVar2 + 1] << 8 | (uint)local_630[iVar2] << 0x10 |
             (uint)local_630[iVar2 + 2];
      }
      iVar3 = iVar3 + 2;
      iVar2 = iVar2 + 3;
      local_20 = local_20 + 4;
    } while (iVar3 != 0x200);
    wincore_wddvmem_cpp_openScreenDevice_FUN_00553470();
    engine_special_cpp_lockFrame_FUN_005322e0();
    engine_special_cpp_clearScreen_FUN_0052ee70();
    engine_special_cpp_unlockFrame_FUN_00532320();
    wincore_wddvmem_cpp_closeScreenDevice_FUN_00553520();
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    local_18 = malloc(this_ptr->bitmap_width * this_ptr->bitmap_height);
    if (local_18 != (void *)0x0) {
      p_Var4 = engine_dosio_cpp_getFile_FUN_00456a60
                         ("art",this_ptr->bitmap_filename,"rb");
      if (p_Var4 == (_FILE *)0x0) {
        g_CurrentFilename = "..\\core\\game.cpp";
        g_CurrentLineNumber = 4136;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Can't open %s");
      }
      _fread(local_18,this_ptr->bitmap_width,this_ptr->bitmap_height,p_Var4)
      ;
      _fclose(p_Var4);
      local_1c = 0;
      if (0 < g_WindowHeight) {
        local_24 = 0;
        do {
          local_14 = this_ptr->bitmap_width *
                     ((local_1c * this_ptr->bitmap_height) / g_WindowHeight);
          iVar2 = 0;
          if (0 < g_WindowWidth) {
            iVar3 = 0;
            iVar7 = 0;
            do {
              pbVar5 = (byte *)((int)local_18 +
                               (this_ptr->bitmap_width * iVar2) / g_WindowWidth + local_14);
              if (g_BitsPerPixel == 0x10) {
                local_28 = (ushort *)(*(int *)((int)g_ScreenBufferArray + local_24) + iVar7);
                *local_28 = auStack_330[*pbVar5];
              }
              else {
                *(uint *)(iVar3 + *(int *)((int)g_ScreenBufferArray + local_24)) =
                     auStack_a30[*pbVar5];
              }
              iVar3 = iVar3 + 4;
              iVar2 = iVar2 + 1;
              iVar7 = iVar7 + 2;
            } while (iVar2 < g_WindowWidth);
          }
          local_1c = local_1c + 1;
          local_24 = local_24 + 4;
        } while (local_1c < g_WindowHeight);
      }
      engine_2d_c_clearInputAndWait_FUN_00403f50();
      core_game_cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0(this_ptr);
      do {
        wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
        if (this_ptr->game_control == CONTROL_MODE_GAMEPAD) {
          core_game_cpp_CGame_resetKeyState_FUN_0049e8b0(this_ptr);
        }
        iVar2 = wincore_winrun_cpp_wasKeyPressed_FUN_00558b70();
      } while (((iVar2 == 0) &&
               (iVar2 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)
                                  (g_CKeys_PTR_005bac64,this_ptr->key_fire), iVar2 == 0)) &&
              (_DAT_01bd1d94 == 0));
      while ((_DAT_01bd1d94 != 0 ||
             (iVar2 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)
                                (g_CKeys_PTR_005bac64,this_ptr->key_fire), iVar2 != 0))) {
        if (this_ptr->game_control == CONTROL_MODE_GAMEPAD) {
          core_game_cpp_CGame_resetKeyState_FUN_0049e8b0(this_ptr);
          wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
        }
        else {
          wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
        }
      }
      engine_2d_c_clearInputAndWait_FUN_00403f50();
      core_game_cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0(this_ptr);
      core_game_cpp_CGame_saveClockTime_FUN_0049a890(this_ptr);
      this_ptr->bitmap_filename[0] = '\0';
      free(local_18);
      return;
    }
  }
  this_ptr->bitmap_filename[0] = '\0';
  return;
}
