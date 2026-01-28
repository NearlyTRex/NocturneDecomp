// Name: core_game.cpp_FUN_004d7810
// Address: 004d7810
// Address Range: [[004d7810, 004d7b3f]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004d7810(void)

#include "nocturne.h"

void core_game_cpp_FUN_004d7810(void)

{
  uint uVar1;
  FILE *file;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char acStack_150 [200];
  char acStack_88 [100];
  int iStack_24;
  int iStack_20;
  FILE *pFStack_1c;
  int iStack_18;
  int iStack_14;
  int iVar11;
  
  if (g_CheatFlags != 0) {
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
    if (iVar2 != 0) {
      iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x2f);
      if (iVar2 != 0) {
        fVar6 = (float)g_DebugRecording;
        if (g_DebugRecording == 0) {
          g_DebugRecording = 1;
          FLOAT_02d831bc = fVar6;
        }
        else {
          g_DebugRecording = 0;
        }
      }
    }
    if ((0 < g_DebugRecordingParams) && (g_DebugRecordingParams <= (int)FLOAT_02d831bc)) {
      g_DebugRecording = 0;
      return;
    }
    if (g_DebugRecording != 0) {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_88,"noc%05d.raw",FLOAT_02d831bc);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_150,"Movie recording active: movie\\%s",acStack_88);
      pFStack_1c = engine_dosio_c_getFile_FUN_00481a50("movie",acStack_88,"wb");
      if (pFStack_1c != (FILE *)0x0) {
        iStack_20 = 0;
        if (0 < 0x00000040) {
          do {
            iStack_18 = 0;
            if (0 < 0x00000040) {
              iStack_24 = iStack_20 + 1;
              do {
                file = pFStack_1c;
                iVar3 = (iStack_18 * g_WindowWidth) / 0x00000040;
                iVar4 = ((iStack_18 + 1) * g_WindowWidth) / 0x00000040;
                iVar2 = (iStack_20 * g_WindowHeight) / 0x00000040;
                iVar5 = (iStack_24 * g_WindowHeight) / 0x00000040;
                iVar10 = 0;
                iVar8 = 0;
                iVar9 = 0;
                iVar11 = 0;
                if (iVar2 < iVar5) {
                  iVar2 = iVar2 * 4;
                  iStack_14 = iVar5 << 2;
                  do {
                    if (iVar3 < iVar4) {
                      puVar7 = (uint *)(iVar3 * 4 + *(int *)((int)g_ScreenBufferArray + iVar2));
                      iVar5 = iVar3;
                      do {
                        uVar1 = *puVar7;
                        puVar7 = puVar7 + 1;
                        iVar8 = iVar8 + (uVar1 >> 0x10 & 0xff);
                        iVar5 = iVar5 + 1;
                        iVar10 = iVar10 + (uVar1 & 0xff);
                        iVar11 = iVar11 + 1;
                        iVar9 = iVar9 + (uVar1 >> 8 & 0xff);
                      } while (iVar5 < iVar4);
                    }
                    iVar2 = iVar2 + 4;
                  } while (iVar2 < iStack_14);
                }
                crt_stdio_c_fputc_FUN_006007a0(iVar8 / iVar11,pFStack_1c);
                crt_stdio_c_fputc_FUN_006007a0(iVar9 / iVar11,file);
                crt_stdio_c_fputc_FUN_006007a0(iVar10 / iVar11,file);
                iStack_18 = iStack_18 + 1;
              } while (iStack_18 < 0x00000040);
            }
            iStack_20 = iStack_20 + 1;
          } while (iStack_20 < 0x00000040);
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFStack_1c,"..\\core\\game.cpp",0x110);
        engine_2d_c_drawText_FUN_00401fd0(acStack_150,0,0);
        FLOAT_02d831bc = (float)((int)FLOAT_02d831bc + 1);
        return;
      }
    }
  }
  return;
}
