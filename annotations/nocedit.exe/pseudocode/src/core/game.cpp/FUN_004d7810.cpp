// Name: core_game.cpp_FUN_004d7810
// Address: 004d7810
// Address Range: [[004d7810, 004d7b3f]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004d7810()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004d7810(void)

{
  uint uVar1;
  int iVar2;
  FILE *file;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  int iVar8;
  int iVar9;
  int iStack00000004;
  int iStack0000000c;
  int iStack00000018;
  int iStack00000020;
  char acStack_70 [4];
  byte auStack_6c [4];
  char acStack_68 [88];
  
  if (g_CheatFlags != 0) {
    iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
    if (iVar2 != 0) {
      iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2f);
      if (iVar2 != 0) {
        iVar2 = g_DebugRecording;
        if (g_DebugRecording == 0) {
          g_DebugRecording = 1;
          _DAT_02d831bc = iVar2;
        }
        else {
          g_DebugRecording = 0;
        }
      }
    }
    if ((0 < _g_DebugRecordingParams) && (_g_DebugRecordingParams <= _DAT_02d831bc)) {
      g_DebugRecording = 0;
      return;
    }
    if (g_DebugRecording != 0) {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_70,"noc%05d.raw",_DAT_02d831bc);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xfffffecc,"Movie recording active: movie\\%s",auStack_6c);
      file = engine_dosio_c_getFile_FUN_00481a50("movie",acStack_68,"wb");
      if (file != (FILE *)0x0) {
        iStack00000004 = 0;
        if (0 < DAT_0067b668) {
          do {
            iStack0000000c = 0;
            if (0 < DAT_0067b664) {
              do {
                iVar2 = (iStack0000000c * g_WindowWidth) / DAT_0067b664;
                iVar3 = ((iStack0000000c + 1) * g_WindowWidth) / DAT_0067b664;
                iStack00000018 = (iStack00000004 * g_WindowHeight) / DAT_0067b668;
                iVar4 = ((iStack00000004 + 1) * g_WindowHeight) / DAT_0067b668;
                iVar9 = 0;
                iVar7 = 0;
                iVar8 = 0;
                iStack00000020 = 0;
                if (iStack00000018 < iVar4) {
                  iStack00000018 = iStack00000018 * 4;
                  do {
                    if (iVar2 < iVar3) {
                      puVar6 = (uint *)(iVar2 * 4 +
                                       *(int *)((int)g_ScreenBufferArray + iStack00000018));
                      iVar5 = iVar2;
                      do {
                        uVar1 = *puVar6;
                        puVar6 = puVar6 + 1;
                        iVar7 = iVar7 + (uVar1 >> 0x10 & 0xff);
                        iVar5 = iVar5 + 1;
                        iVar9 = iVar9 + (uVar1 & 0xff);
                        iStack00000020 = iStack00000020 + 1;
                        iVar8 = iVar8 + (uVar1 >> 8 & 0xff);
                      } while (iVar5 < iVar3);
                    }
                    iStack00000018 = iStack00000018 + 4;
                  } while (iStack00000018 < iVar4 << 2);
                }
                crt_stdio_c_fputc_FUN_006007a0(iVar7 / iStack00000020,file);
                crt_stdio_c_fputc_FUN_006007a0(iVar8 / iStack00000020,file);
                crt_stdio_c_fputc_FUN_006007a0(iVar9 / iStack00000020,file);
                iStack0000000c = iStack0000000c + 1;
              } while (iStack0000000c < DAT_0067b664);
            }
            iStack00000004 = iStack00000004 + 1;
          } while (iStack00000004 < DAT_0067b668);
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\game.cpp",0x110);
        engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffed8,0,0);
        _DAT_02d831bc = _DAT_02d831bc + 1;
        return;
      }
    }
  }
  return;
}
