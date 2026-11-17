// Name: core_game.cpp_CGame_showFullscreenBitmap_FUN_004bec20
// Address: 004bec20
// Address Range: [[004bec20, 004bf22b]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_showFullscreenBitmap_FUN_004bec20(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_showFullscreenBitmap_FUN_004bec20(CGame *this_ptr)

{
  char cVar1;
  int iVar2;
  _FILE *p_Var3;
  byte *pbVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  byte bVar10;
  uint auStack_a2c [256];
  byte local_62c [768];
  ushort auStack_32c [256];
  char local_12c [256];
  uint local_2c;
  uint local_28;
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
  this_ptr->cinematic_skip_in_progress = 0;
  iVar2 = engine_dosio_cpp_getFileSize_FUN_004657f0("art",this_ptr->bitmap_filename);
  if (iVar2 < 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
              (g_CEditorToolsPtr,"Can't open %s");
    this_ptr->bitmap_filename[0] = '\0';
    return;
  }
  if (iVar2 != this_ptr->bitmap_width * this_ptr->bitmap_height) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
              (g_CEditorToolsPtr,"%s is %d bytes, but expected %dx%d=%d byte file");
    this_ptr->bitmap_filename[0] = '\0';
    return;
  }
  splitpath
            (this_ptr->bitmap_filename,(char *)0x0,(char *)0x0,local_12c,(char *)0x0);
  pcVar5 = ".act";
  iVar2 = -1;
  pcVar9 = local_12c;
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
    cVar1 = *pcVar5;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  p_Var3 = engine_dosio_cpp_getFile_FUN_004659c0("art",local_12c,"rb");
  if (p_Var3 == (_FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
              (g_CEditorToolsPtr,"Can't open %s");
  }
  else {
    _fread(local_62c,1,0x300,p_Var3);
    _fclose(p_Var3);
    iVar2 = 0;
    iVar6 = 0;
    local_1c = 0;
    do {
      if (g_INT_005fba20 == 0x10) {
        local_2c = (uint)local_62c[iVar2];
        local_2c = (uint)local_62c[iVar2] / (uint)g_INT_01c6af78;
        local_28 = (uint)local_62c[iVar2 + 2] / (uint)g_INT_01c6af90;
        *(ushort *)((int)auStack_32c + iVar6) =
             (ushort)((uint)local_62c[iVar2 + 2] / (uint)g_INT_01c6af90 <<
                     (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f)) |
             (ushort)((uint)local_62c[iVar2 + 1] / (uint)g_INT_01c6af84 <<
                     (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f)) |
             (ushort)(local_2c << (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f));
      }
      else if (g_INT_005fba20 == 0x20) {
        *(uint *)((int)auStack_a2c + local_1c) =
             (uint)local_62c[iVar2] << (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f) |
             (uint)local_62c[iVar2 + 1] << (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f) |
             (uint)local_62c[iVar2 + 2] << (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f);
      }
      else {
        *(uint *)((int)auStack_a2c + local_1c) =
             (uint)local_62c[iVar2] << 0x10 | (uint)local_62c[iVar2 + 1] << 8 |
             (uint)local_62c[iVar2 + 2];
      }
      iVar6 = iVar6 + 2;
      iVar2 = iVar2 + 3;
      local_1c = local_1c + 4;
    } while (iVar6 != 0x200);
    wincore_wddvmem_cpp_openScreenDevice_FUN_0057a3c0();
    engine_special_cpp_lockFrame_FUN_00565820();
    engine_special_cpp_clearScreen_FUN_00560d70();
    engine_special_cpp_unlockFrame_FUN_00565870(0);
    wincore_wddvmem_cpp_closeScreenDevice_FUN_0057a4b0();
    wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
    local_18 = malloc(this_ptr->bitmap_width * this_ptr->bitmap_height);
    if (local_18 != (void *)0x0) {
      p_Var3 = engine_dosio_cpp_getFile_FUN_004659c0
                         ("art",this_ptr->bitmap_filename,"rb");
      if (p_Var3 == (_FILE *)0x0) {
        g_CHAR_PTR_01d71de0 = "..\\core\\game.cpp";
        g_INT_01d71de4 = 0x1287;
        core_main_c_displayErrorAndQuit_FUN_004e4330("Can't open %s");
      }
      _fread(local_18,this_ptr->bitmap_width,this_ptr->bitmap_height,p_Var3)
      ;
      _fclose(p_Var3);
      local_24 = 0;
      if (0 < g_INT_005fba1c) {
        local_20 = 0;
        do {
          local_14 = this_ptr->bitmap_width *
                     ((local_24 * this_ptr->bitmap_height) / g_INT_005fba1c);
          iVar2 = 0;
          if (0 < g_INT_005fba18) {
            iVar7 = 0;
            iVar6 = 0;
            do {
              pbVar4 = (byte *)((this_ptr->bitmap_width * iVar2) / g_INT_005fba18 + local_14 +
                               (int)local_18);
              if (g_INT_005fba20 == 0x10) {
                *(ushort *)(*(int *)((int)g_ScreenBufferArray + local_20) + iVar6) =
                     auStack_32c[*pbVar4];
              }
              else {
                *(uint *)(*(int *)((int)g_ScreenBufferArray + local_20) + iVar7) =
                     auStack_a2c[*pbVar4];
              }
              iVar7 = iVar7 + 4;
              iVar2 = iVar2 + 1;
              iVar6 = iVar6 + 2;
            } while (iVar2 < g_INT_005fba18);
          }
          local_24 = local_24 + 1;
          local_20 = local_20 + 4;
        } while (local_24 < g_INT_005fba1c);
      }
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004ba490(this_ptr);
      while( true ) {
        wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
        if (this_ptr->game_control == CONTROL_MODE_GAMEPAD) {
          core_game_cpp_CGame_resetKeyState_FUN_004b93e0(this_ptr);
        }
        iVar2 = wincore_winrun_cpp_wasKeyPressed_FUN_00580800();
        if ((((iVar2 != 0) ||
             (iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,this_ptr->key_fire), iVar2 != 0)
             ) || (g_MouseButtonFlags.dword != 0)) ||
           ((g_INT_01d22b44 != 1 && (this_ptr->bitmap_display_time < 0.0)))) break;
        core_game_cpp_CGame_updateDT_FUN_004b4440(g_CGamePtr);
        this_ptr->bitmap_display_time = this_ptr->bitmap_display_time - g_CGamePtr->delta_time_float
        ;
      }
      while ((g_MouseButtonFlags.dword != 0 ||
             (iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,this_ptr->key_fire), iVar2 != 0)
             )) {
        if (this_ptr->game_control == CONTROL_MODE_GAMEPAD) {
          core_game_cpp_CGame_resetKeyState_FUN_004b93e0(this_ptr);
          wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
        }
        else {
          wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
        }
      }
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004ba490(this_ptr);
      core_game_cpp_CGame_saveClockTime_FUN_004b4430(this_ptr);
      this_ptr->bitmap_filename[0] = '\0';
      debugFree(local_18);
      return;
    }
  }
  this_ptr->bitmap_filename[0] = '\0';
  return;
}
