// Name: core_game.cpp_CGame_openSomething_FUN_004e2910
// Address: 004e2910
// Address Range: [[004e2910, 004e2f04]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_openSomething_FUN_004e2910(CGame * this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_openSomething_FUN_004e2910(CGame *this_ptr)

{
  char cVar1;
  int iVar2;
  int iVar3;
  FILE *pFVar4;
  byte *pbVar5;
  void *unaff_EBP;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  byte bVar10;
  CGame *in_stack_0000000c;
  CGame *in_stack_fffff5d8;
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
  if (this_ptr->unk13[0x528] == '\0') {
    return;
  }
  pcVar9 = this_ptr->unk13 + 0x528;
  this_ptr->cutscene_skippable = 0;
  iVar2 = engine_dosio_c_getFileSize_FUN_00481880("art",pcVar9);
  if (iVar2 < 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s",pcVar9);
    this_ptr->unk13[0x528] = '\0';
    return;
  }
  iVar3 = *(int *)(this_ptr->unk13 + 0x628) * *(int *)(this_ptr->unk13 + 0x62c);
  if (iVar2 != iVar3) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"%s is %d bytes, but expected %dx%d=%d byte file",pcVar9,
               *(uint *)(this_ptr->unk13 + 0x628),*(int *)(this_ptr->unk13 + 0x62c),iVar3);
    this_ptr->unk13[0x528] = '\0';
    return;
  }
  crt_string_c_splitpath_FUN_005ff178(pcVar9,(char *)0x0,(char *)0x0,local_130,(char *)0x0);
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
  pFVar4 = engine_dosio_c_getFile_FUN_00481a50("art",local_130,"rb");
  if (pFVar4 == (FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s",local_130);
  }
  else {
    crt_stdio_c_fread_FUN_005fd990(local_630,1,0x300,pFVar4);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\core\\game.cpp",0xfff);
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
                     ((byte)g_BlueBitPosition & 0x1f)) |
             (ushort)((uint)local_630[iVar2] / (uint)g_RedScaleFactor <<
                     ((byte)g_RedBitPosition & 0x1f)) |
             (ushort)(local_30 << ((byte)g_GreenBitPosition & 0x1f));
      }
      else if (g_BitsPerPixel == 0x20) {
        *(uint *)(&stack0xfffff5d0 + local_20) =
             (uint)local_630[iVar2] << ((byte)g_RedBitPosition & 0x1f) |
             (uint)local_630[iVar2 + 1] << ((byte)g_GreenBitPosition & 0x1f) |
             (uint)local_630[iVar2 + 2] << ((byte)g_BlueBitPosition & 0x1f);
      }
      else {
        *(uint *)(&stack0xfffff5d0 + local_20) =
             (uint)local_630[iVar2 + 1] << 8 | (uint)local_630[iVar2] << 0x10 |
             (uint)local_630[iVar2 + 2];
      }
      iVar3 = iVar3 + 2;
      iVar2 = iVar2 + 3;
      local_20 = local_20 + 4;
    } while (iVar3 != 0x200);
    wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580();
    wincore_windll_cpp_lockFrame_FUN_005b7210();
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    wincore_windll_cpp_unlockFrame_FUN_005b7250(0);
    wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    local_18 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                         (*(int *)(this_ptr->unk13 + 0x628) * *(int *)(this_ptr->unk13 + 0x62c),
                          "..\\core\\game.cpp",0x1016);
    if (local_18 != (void *)0x0) {
      pFVar4 = engine_dosio_c_getFile_FUN_00481a50
                         ("art",this_ptr->unk13 + 0x528,"rb");
      if (pFVar4 == (FILE *)0x0) {
        g_CurrentFilename = "..\\core\\game.cpp";
        g_CurrentLineNumber = 0x101f;
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("Can't open %s",this_ptr->unk13 + 0x528);
      }
      crt_stdio_c_fread_FUN_005fd990
                (local_18,*(SIZE_T *)(this_ptr->unk13 + 0x628),*(SIZE_T *)(this_ptr->unk13 + 0x62c),
                 pFVar4);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\core\\game.cpp",0x1021);
      local_1c = 0;
      if (0 < g_WindowHeight) {
        local_24 = 0;
        do {
          local_14 = *(int *)(this_ptr->unk13 + 0x628) *
                     ((local_1c * *(int *)(this_ptr->unk13 + 0x62c)) / g_WindowHeight);
          iVar2 = 0;
          if (0 < g_WindowWidth) {
            iVar3 = 0;
            iVar7 = 0;
            do {
              pbVar5 = (byte *)((int)local_18 +
                               (*(int *)(this_ptr->unk13 + 0x628) * iVar2) / g_WindowWidth +
                               local_14);
              if (g_BitsPerPixel == 0x10) {
                local_28 = (ushort *)(*(int *)((int)g_ScreenBufferArray + local_24) + iVar7);
                *local_28 = auStack_330[*pbVar5];
              }
              else {
                *(uint *)(iVar3 + *(int *)((int)g_ScreenBufferArray + local_24)) =
                     *(uint *)(&stack0xfffff5d0 + (uint)*pbVar5 * 4);
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
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(this_ptr);
      do {
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        if (this_ptr->game_control == 2) {
          core_game_cpp_CGame_resetKeyState_FUN_004dbe60();
        }
        iVar2 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
      } while (((iVar2 == 0) &&
               (iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,this_ptr->key_fire),
               iVar2 == 0)) && (g_MouseButtonFlags == 0));
      while ((g_MouseButtonFlags != 0 ||
             (iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,this_ptr->key_fire), iVar2 != 0)
             )) {
        if (this_ptr->game_control == 2) {
          core_game_cpp_CGame_resetKeyState_FUN_004dbe60();
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        }
        else {
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        }
      }
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(in_stack_0000000c);
      core_game_cpp_CGame_saveClockTime_FUN_004d7d80(in_stack_0000000c,in_stack_fffff5d8);
      in_stack_0000000c->unk13[0x528] = '\0';
      shape_memdbg_cpp_debugFree_FUN_0050f460(unaff_EBP,"..\\core\\game.cpp",0x1057);
      return;
    }
  }
  this_ptr->unk13[0x528] = '\0';
  return;
}
