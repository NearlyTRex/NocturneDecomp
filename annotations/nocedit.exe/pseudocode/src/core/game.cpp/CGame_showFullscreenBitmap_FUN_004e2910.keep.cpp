// Name: core_game.cpp_CGame_showFullscreenBitmap_FUN_004e2910
// Address: 004e2910
// MANUAL RECONSTRUCTION
// Address Range: [[004e2910, 004e2f04]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_showFullscreenBitmap_FUN_004e2910(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_showFullscreenBitmap_FUN_004e2910(CGame *this_ptr)

{
  int iVar2;
  int iVar3;
  _FILE *p_Var4;
  void *buffer;
  _FILE *file;
  int iVar4;
  int iVar5;
  byte *pbVar5;
  int iVar8;
  char *pcVar10;
  uint auStack_a30 [256];
  byte local_630 [768];
  ushort auStack_330 [256];
  char local_130 [256];
  int local_24;
  int local_1c;
  byte bVar10;

  bVar10 = 0;
  if (this_ptr->bitmap_filename[0] == '\0') {
    return;
  }
  pcVar10 = this_ptr->bitmap_filename;
  this_ptr->cutscene_skippable = 0;
  iVar2 = engine_dosio_cpp_getFileSize_FUN_00481880("art",pcVar10);
  if (iVar2 < 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s",pcVar10);
    this_ptr->bitmap_filename[0] = '\0';
    return;
  }
  iVar3 = this_ptr->bitmap_width * this_ptr->bitmap_height;
  if (iVar2 != iVar3) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"%s is %d bytes, but expected %dx%d=%d byte file",pcVar10,iVar2,
               this_ptr->bitmap_width,this_ptr->bitmap_height,iVar3);
    this_ptr->bitmap_filename[0] = '\0';
    return;
  }
  splitpath(pcVar10,(char *)0x0,(char *)0x0,local_130,(char *)0x0);
  strcat(local_130,".act");
  p_Var4 = engine_dosio_cpp_getFile_FUN_00481a50("art",local_130,"rb");
  if (p_Var4 == (_FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s",local_130);
  }
  else {
    _fread(local_630,1,0x300,p_Var4);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var4,"..\\core\\game.cpp",0xfff);
    iVar4 = 0;
    iVar8 = 0;
    do {
      if (g_BitsPerPixel == 0x10) {
        auStack_330[iVar8] =
             (ushort)((uint)local_630[iVar4 + 2] / (uint)g_BlueScaleFactor <<
                     (g_BlueBitPosition.bytes[0] & 0x1f)) |
             (ushort)((uint)local_630[iVar4] / (uint)g_RedScaleFactor <<
                     (g_RedBitPosition.bytes[0] & 0x1f)) |
             (ushort)((uint)local_630[iVar4 + 1] / (uint)g_GreenScaleFactor <<
                     (g_GreenBitPosition.bytes[0] & 0x1f));
      }
      else if (g_BitsPerPixel == 0x20) {
        auStack_a30[iVar8] =
             (uint)local_630[iVar4] << (g_RedBitPosition.bytes[0] & 0x1f) |
             (uint)local_630[iVar4 + 1] << (g_GreenBitPosition.bytes[0] & 0x1f) |
             (uint)local_630[iVar4 + 2] << (g_BlueBitPosition.bytes[0] & 0x1f);
      }
      else {
        auStack_a30[iVar8] =
             (uint)local_630[iVar4 + 1] << 8 | (uint)local_630[iVar4] << 0x10 |
             (uint)local_630[iVar4 + 2];
      }
      iVar8 = iVar8 + 1;
      iVar4 = iVar4 + 3;
    } while (iVar8 != 0x100);
    wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580();
    wincore_windll_cpp_lockFrame_FUN_005b7210();
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    wincore_windll_cpp_unlockFrame_FUN_005b7250(0);
    wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    buffer = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       (this_ptr->bitmap_width * this_ptr->bitmap_height,"..\\core\\game.cpp",
                        0x1016);
    if (buffer != (void *)0x0) {
      file = engine_dosio_cpp_getFile_FUN_00481a50
                       ("art",this_ptr->bitmap_filename,"rb");
      if (file == (_FILE *)0x0) {
        g_CurrentFilename = "..\\core\\game.cpp";
        g_CurrentLineNumber = 0x101f;
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("Can't open %s",this_ptr->bitmap_filename);
      }
      _fread(buffer,this_ptr->bitmap_width,this_ptr->bitmap_height,file);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\game.cpp",0x1021);
      local_1c = 0;
      if (0 < g_WindowHeight) {
        local_24 = 0;
        do {
          iVar8 = (local_1c * this_ptr->bitmap_height) / g_WindowHeight;
          iVar4 = this_ptr->bitmap_width;
          iVar5 = 0;
          if (0 < g_WindowWidth) {
            do {
              pbVar5 = (byte *)buffer +
                       (this_ptr->bitmap_width * iVar5) / g_WindowWidth + iVar4 * iVar8;
              if (g_BitsPerPixel == 0x10) {
                ((ushort *)g_ScreenBufferArray[local_24])[iVar5] = auStack_330[*pbVar5];
              }
              else {
                ((uint *)g_ScreenBufferArray[local_24])[iVar5] = auStack_a30[*pbVar5];
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < g_WindowWidth);
          }
          local_24 = local_24 + 1;
          local_1c = local_1c + 1;
        } while (local_1c < g_WindowHeight);
      }
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(this_ptr);
      do {
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        if (this_ptr->game_control == CONTROL_MODE_GAMEPAD) {
          core_game_cpp_CGame_resetKeyState_FUN_004dbe60(this_ptr);
        }
        iVar4 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
      } while (((iVar4 == 0) &&
               (iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,this_ptr->key_fire),
               iVar4 == 0)) && (g_MouseButtonFlags.dword == 0));
      while ((g_MouseButtonFlags.dword != 0 ||
             (iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,this_ptr->key_fire), iVar4 != 0)
             )) {
        if (this_ptr->game_control == CONTROL_MODE_GAMEPAD) {
          core_game_cpp_CGame_resetKeyState_FUN_004dbe60(this_ptr);
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        }
        else {
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        }
      }
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(this_ptr);
      core_game_cpp_CGame_saveClockTime_FUN_004d7d80(this_ptr);
      this_ptr->bitmap_filename[0] = '\0';
      shape_memdbg_cpp_debugFree_FUN_0050f460(buffer,"..\\core\\game.cpp",0x1057);
      return;
    }
  }
  this_ptr->bitmap_filename[0] = '\0';
  return;
}
