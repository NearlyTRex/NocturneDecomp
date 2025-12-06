// Name: core_game.cpp_CGame_openSomething_FUN_004e2910
// Address: 004e2910
// Address Range: [[004e2910, 004e2f04]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_openSomething_FUN_004e2910(CGame * this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_openSomething_FUN_004e2910(CGame *this_ptr)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  FILE *pFVar4;
  void *pvVar5;
  int iVar6;
  undefined3 extraout_var;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  BADSPACEBASE *in_ESP;
  char *pcVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  byte bVar15;
  void *unaff_retaddr;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_0000001c;
  CGame *in_stack_00000024;
  int in_stack_00000030;
  int in_stack_00000038;
  void *in_stack_0000003c;
  CGame *in_stack_0000004c;
  CGame *in_stack_fffff620;
  byte abStack_63c [24];
  byte auStack_624 [744];
  ushort auStack_33c [264];
  char acStack_12c [4];
  char acStack_128 [236];
  uint uStack_3c;
  uint uStack_38;
  int local_2c;
  char *pcVar14;
  
  bVar15 = 0;
  if (this_ptr->field101_0x38c[0x528] == '\0') {
    return;
  }
  this_ptr->cutscene_skippable = 0;
  iVar3 = engine_dosio_c_getFileSize_FUN_00481880("art",this_ptr->field101_0x38c + 0x528);
  if (iVar3 < 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s");
    *(byte *)(in_stack_0000000c + 0x8b4) = 0;
    return;
  }
  if (iVar3 != *(int *)(in_stack_00000008 + 0x9b4) * *(int *)(in_stack_00000008 + 0x9b8)) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"%s is %d bytes, but expected %dx%d=%d byte file");
    *(byte *)(in_stack_0000000c + 0x8b4) = 0;
    return;
  }
  crt_string_c_splitpath_FUN_005ff178
            (this_ptr->field101_0x38c + 0x528,(char *)0x0,(char *)0x0,acStack_12c,(char *)0x0);
  pcVar10 = ".act";
  iVar3 = -1;
  pcVar14 = acStack_128;
  do {
    pcVar13 = pcVar14;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar13 = pcVar14 + (uint)bVar15 * -2 + 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar13;
  } while (cVar1 != '\0');
  pcVar13 = pcVar13 + -1;
  do {
    cVar1 = *pcVar10;
    *pcVar13 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar13[1] = cVar1;
    pcVar13 = pcVar13 + 2;
  } while (cVar1 != '\0');
  pFVar4 = engine_dosio_c_getFile_FUN_00481a50("art",acStack_128,"rb");
  if (pFVar4 == (FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s");
  }
  else {
    crt_stdio_c_fread_FUN_005fd990(auStack_624,1,0x300,pFVar4);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\core\\game.cpp",0xfff);
    iVar3 = 0;
    iVar11 = 0;
    local_2c = 0;
    do {
      if (g_BitsPerPixel == 0x10) {
        uStack_3c = (uint)abStack_63c[iVar3 + 1];
        uStack_3c = (uint)abStack_63c[iVar3 + 1] / (uint)g_GreenScaleFactor;
        uStack_38 = (uint)abStack_63c[iVar3 + 2] / (uint)g_BlueScaleFactor;
        *(ushort *)((int)auStack_33c + iVar11) =
             (ushort)((uint)abStack_63c[iVar3 + 2] / (uint)g_BlueScaleFactor <<
                     ((byte)g_BlueBitPosition & 0x1f)) |
             (ushort)((uint)abStack_63c[iVar3] / (uint)g_RedScaleFactor <<
                     ((byte)g_RedBitPosition & 0x1f)) |
             (ushort)(uStack_3c << ((byte)g_GreenBitPosition & 0x1f));
      }
      else if (g_BitsPerPixel == 0x20) {
        *(uint *)(&stack0xfffff5c4 + local_2c) =
             (uint)abStack_63c[iVar3] << ((byte)g_RedBitPosition & 0x1f) |
             (uint)abStack_63c[iVar3 + 1] << ((byte)g_GreenBitPosition & 0x1f) |
             (uint)abStack_63c[iVar3 + 2] << ((byte)g_BlueBitPosition & 0x1f);
      }
      else {
        *(uint *)(&stack0xfffff5c4 + local_2c) =
             (uint)abStack_63c[iVar3 + 1] << 8 | (uint)abStack_63c[iVar3] << 0x10 |
             (uint)abStack_63c[iVar3 + 2];
      }
      iVar11 = iVar11 + 2;
      iVar3 = iVar3 + 3;
      local_2c = local_2c + 4;
    } while (iVar11 != 0x200);
    wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580();
    wincore_windll_cpp_lockFrame_FUN_005b7210();
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    wincore_windll_cpp_unlockFrame_FUN_005b7250(0);
    wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    pvVar5 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       (*(int *)(in_stack_00000010 + 0x9b4) * *(int *)(in_stack_00000010 + 0x9b8),
                        "..\\core\\game.cpp",0x1016);
    if (pvVar5 != (void *)0x0) {
      pFVar4 = engine_dosio_c_getFile_FUN_00481a50
                         ("art",(char *)(in_stack_00000014 + 0x8b4),"rb");
      if (pFVar4 == (FILE *)0x0) {
        g_CurrentFilename = "..\\core\\game.cpp";
        g_CurrentLineNumber = 0x101f;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s");
      }
      crt_stdio_c_fread_FUN_005fd990
                (unaff_retaddr,*(SIZE_T *)(in_stack_0000001c + 0x9b4),
                 *(SIZE_T *)(in_stack_0000001c + 0x9b8),pFVar4);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\core\\game.cpp",0x1021);
      this_ptr = (CGame *)0x0;
      if (0 < g_WindowHeight) {
        iVar3 = 0;
        do {
          iVar6 = ((int)this_ptr * *(int *)(in_stack_00000024->field101_0x38c + 0x62c)) /
                  g_WindowHeight;
          iVar11 = *(int *)(in_stack_00000024->field101_0x38c + 0x628);
          iVar7 = 0;
          if (0 < g_WindowWidth) {
            iVar9 = 0;
            iVar12 = 0;
            do {
              pbVar8 = (byte *)(in_stack_00000008 +
                               (*(int *)(in_stack_00000024->field101_0x38c + 0x628) * iVar7) /
                               g_WindowWidth + iVar11 * iVar6);
              if (g_BitsPerPixel == 0x10) {
                *(ushort *)(*(int *)((int)g_ScreenBufferArray + iVar3) + iVar12) =
                     auStack_33c[*pbVar8 + 0x16];
              }
              else {
                *(uint *)(iVar9 + *(int *)((int)g_ScreenBufferArray + iVar3)) =
                     *(uint *)(&stack0xfffff5f0 + (uint)*pbVar8 * 4);
              }
              iVar9 = iVar9 + 4;
              iVar7 = iVar7 + 1;
              iVar12 = iVar12 + 2;
            } while (iVar7 < g_WindowWidth);
          }
          iVar3 = iVar3 + 4;
          this_ptr = (CGame *)((int)&this_ptr->game_pixx + 1);
        } while ((int)this_ptr < g_WindowHeight);
      }
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(in_stack_00000024);
      do {
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        if (*(int *)(in_stack_00000030 + 0xbc) == 2) {
          core_game_cpp_CGame_resetKeyState_FUN_004dbe60();
        }
        bVar2 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
      } while (((CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) == 0) &&
               (iVar3 = (*g_CKeysPtr->vtable->isKeyDown)
                                  (g_CKeysPtr,*(int *)(in_stack_00000038 + 0x48)), iVar3 == 0)) &&
              (g_MouseButtonFlags == 0));
      while ((g_MouseButtonFlags != 0 ||
             (iVar3 = (*g_CKeysPtr->vtable->isKeyDown)
                                (g_CKeysPtr,*(int *)(in_stack_00000038 + 0x48)), iVar3 != 0))) {
        if (*(int *)(in_stack_00000038 + 0xbc) == 2) {
          core_game_cpp_CGame_resetKeyState_FUN_004dbe60();
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        }
        else {
          wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        }
      }
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(in_stack_0000004c);
      core_game_cpp_CGame_saveClockTime_FUN_004d7d80(in_stack_0000004c,in_stack_fffff620);
      in_stack_0000004c->field101_0x38c[0x528] = '\0';
      shape_memdbg_cpp_debugFree_FUN_0050f460(in_stack_0000003c,"..\\core\\game.cpp",0x1057);
      return;
    }
  }
  *(byte *)(in_stack_00000014 + 0x8b4) = 0;
  return;
}
