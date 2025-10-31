// Name: core_game.cpp_FUN_004d7810
// Address: 004d7810
// Address Range: [[004d7810, 004d7b3f]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004d7810()
// Globals:
//   TerminatedCString s_noc_05d_raw_0062b201
//   TerminatedCString s_Movie_recording_active_m_0062b20d
//   TerminatedCString s_wb_0062b22e
//   TerminatedCString s_movie_0062b231
//   TerminatedCString s_core_game_cpp_0062b237
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   undefined4 DAT_0067b664
//   undefined4 DAT_0067b668
//   CKeys* g_CKeysPtr = 02dcd7d4
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   int g_CheatFlags
//   int g_DebugRecording
//   undefined4 g_DebugRecordingParams
//   undefined4 DAT_02d831bc
//   void* g_CKeysPtr
// Function calls:
//   crt_stdio.c_fputc_FUN_006007a0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

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
  undefined1 auStack_6c [4];
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


// Assembly code:
// 004d7810: PUSH EBX
//   Label: core_game.cpp_FUN_004d7810
// 004d7811: PUSH ESI
// 004d7812: PUSH EDI
// 004d7813: PUSH EBP
// 004d7814: SUB ESP,0x150
// 004d781a: CMP dword ptr [0x02d831b0],0x0
//   XREF to: 02d831b0 (READ)
// 004d7821: JNZ 0x004d782e
//   XREF to: 004d782e (CONDITIONAL_JUMP)
// 004d7823: ADD ESP,0x150
//   Label: LAB_004d7823
// 004d7829: POP EBP
// 004d782a: POP EDI
// 004d782b: POP ESI
// 004d782c: POP EBX
// 004d782d: RET
// 004d782e: PUSH 0x1d
//   Label: LAB_004d782e
// 004d7830: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004d7835: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004d7836: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004d7838: CALL dword ptr [EDX]
// 004d783a: ADD ESP,0x8
// 004d783d: TEST EAX,EAX
// 004d783f: JZ 0x004d786b
//   XREF to: 004d786b (CONDITIONAL_JUMP)
// 004d7841: PUSH 0x2f
// 004d7843: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004d7848: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004d7849: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004d784b: CALL dword ptr [EDX + 0x4]
// 004d784e: ADD ESP,0x8
// 004d7851: TEST EAX,EAX
// 004d7853: JZ 0x004d786b
//   XREF to: 004d786b (CONDITIONAL_JUMP)
// 004d7855: MOV ECX,dword ptr [0x02d831b4]
//   XREF to: 02d831b4 (READ)
// 004d785b: TEST ECX,ECX
// 004d785d: JZ 0x004d7b17
//   XREF to: 004d7b17 (CONDITIONAL_JUMP)
// 004d7863: XOR EDI,EDI
// 004d7865: MOV dword ptr [0x02d831b4],EDI
//   XREF to: 02d831b4 (WRITE)
// 004d786b: MOV EBP,dword ptr [0x02d831b8]
//   Label: LAB_004d786b
//   XREF to: 02d831b8 (READ)
// 004d7871: TEST EBP,EBP
// 004d7873: JLE 0x004d7881
//   XREF to: 004d7881 (CONDITIONAL_JUMP)
// 004d7875: CMP EBP,dword ptr [0x02d831bc]
//   XREF to: 02d831bc (READ)
// 004d787b: JLE 0x004d7b2d
//   XREF to: 004d7b2d (CONDITIONAL_JUMP)
// 004d7881: CMP dword ptr [0x02d831b4],0x0
//   Label: LAB_004d7881
//   XREF to: 02d831b4 (READ)
// 004d7888: JZ 0x004d7823
//   XREF to: 004d7823 (CONDITIONAL_JUMP)
// 004d788a: MOV EBX,dword ptr [0x02d831bc]
//   XREF to: 02d831bc (READ)
// 004d7890: PUSH EBX
// 004d7891: PUSH 0x62b201
//   XREF to: 0062b201 (DATA)
// 004d7896: LEA EAX,[ESP + 0xd0]
// 004d789d: PUSH EAX
// 004d789e: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d78a3: ADD ESP,0xc
// 004d78a6: LEA EAX,[ESP + 0xc8]
// 004d78ad: PUSH EAX
// 004d78ae: PUSH 0x62b20d
//   XREF to: 0062b20d (DATA)
// 004d78b3: LEA EAX,[ESP + 0x8]
// 004d78b7: PUSH EAX
// 004d78b8: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d78bd: ADD ESP,0xc
// 004d78c0: PUSH 0x62b22e
//   XREF to: 0062b22e (DATA)
// 004d78c5: LEA EAX,[ESP + 0xcc]
// 004d78cc: PUSH EAX
// 004d78cd: PUSH 0x62b231
//   XREF to: 0062b231 (DATA)
// 004d78d2: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004d78d7: ADD ESP,0xc
// 004d78da: MOV dword ptr [ESP + 0x134],EAX
// 004d78e1: TEST EAX,EAX
// 004d78e3: JZ 0x004d7823
//   XREF to: 004d7823 (CONDITIONAL_JUMP)
// 004d78e9: XOR ESI,ESI
// 004d78eb: MOV EDI,dword ptr [0x0067b668]
//   XREF to: 0067b668 (READ)
// 004d78f1: MOV dword ptr [ESP + 0x130],ESI
// 004d78f8: TEST EDI,EDI
// 004d78fa: JLE 0x004d7ad4
//   XREF to: 004d7ad4 (CONDITIONAL_JUMP)
// 004d7900: XOR ESI,ESI
//   Label: LAB_004d7900
// 004d7902: MOV EDI,dword ptr [0x0067b664]
//   XREF to: 0067b664 (READ)
// 004d7908: MOV dword ptr [ESP + 0x138],ESI
// 004d790f: TEST EDI,EDI
// 004d7911: JLE 0x004d7ab7
//   XREF to: 004d7ab7 (CONDITIONAL_JUMP)
// 004d7917: MOV EAX,dword ptr [ESP + 0x130]
// 004d791e: INC EAX
// 004d791f: MOV dword ptr [ESP + 0x12c],EAX
// 004d7926: MOV EDX,dword ptr [ESP + 0x138]
//   Label: LAB_004d7926
// 004d792d: MOV ESI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004d7933: IMUL EDX,ESI
// 004d7936: MOV EDI,dword ptr [0x0067b664]
//   XREF to: 0067b664 (READ)
// 004d793c: MOV EAX,EDX
// 004d793e: SAR EDX,0x1f
// 004d7941: IDIV EDI
// 004d7943: MOV EDX,dword ptr [ESP + 0x138]
// 004d794a: INC EDX
// 004d794b: IMUL EDX,ESI
// 004d794e: MOV dword ptr [ESP + 0x140],EAX
// 004d7955: MOV EAX,EDX
// 004d7957: SAR EDX,0x1f
// 004d795a: IDIV EDI
// 004d795c: MOV EBX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004d7962: MOV EDX,dword ptr [ESP + 0x130]
// 004d7969: IMUL EDX,EBX
// 004d796c: MOV ESI,dword ptr [0x0067b668]
//   XREF to: 0067b668 (READ)
// 004d7972: MOV dword ptr [ESP + 0x148],EAX
// 004d7979: MOV EAX,EDX
// 004d797b: SAR EDX,0x1f
// 004d797e: IDIV ESI
// 004d7980: MOV EDX,dword ptr [ESP + 0x12c]
// 004d7987: IMUL EDX,EBX
// 004d798a: MOV ECX,EAX
// 004d798c: MOV EAX,EDX
// 004d798e: SAR EDX,0x1f
// 004d7991: IDIV ESI
// 004d7993: XOR EDI,EDI
// 004d7995: XOR EBX,EBX
// 004d7997: MOV EDX,EAX
// 004d7999: XOR EAX,EAX
// 004d799b: XOR ESI,ESI
// 004d799d: MOV dword ptr [ESP + 0x14c],EAX
// 004d79a4: CMP ECX,EDX
// 004d79a6: JGE 0x004d7a4d
//   XREF to: 004d7a4d (CONDITIONAL_JUMP)
// 004d79ac: LEA EAX,[ECX*0x4 + 0x0]
// 004d79b3: SHL EDX,0x2
// 004d79b6: MOV dword ptr [ESP + 0x144],EAX
// 004d79bd: MOV dword ptr [ESP + 0x13c],EDX
// 004d79c4: MOV EBP,dword ptr [ESP + 0x148]
//   Label: LAB_004d79c4
// 004d79cb: MOV ECX,dword ptr [ESP + 0x140]
// 004d79d2: CMP ECX,EBP
// 004d79d4: JGE 0x004d7a2d
//   XREF to: 004d7a2d (CONDITIONAL_JUMP)
// 004d79d6: MOV EAX,dword ptr [ESP + 0x144]
// 004d79dd: LEA EDX,[ECX*0x4 + 0x0]
// 004d79e4: MOV EAX,dword ptr [EAX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004d79ea: ADD EDX,EAX
// 004d79ec: MOV EAX,dword ptr [EDX]
//   Label: LAB_004d79ec
// 004d79ee: MOV EBP,EAX
// 004d79f0: SHR EBP,0x10
// 004d79f3: AND EBP,0xff
// 004d79f9: ADD EDX,0x4
// 004d79fc: ADD EBX,EBP
// 004d79fe: MOV EBP,EAX
// 004d7a00: INC ECX
// 004d7a01: SHR EBP,0x8
// 004d7a04: AND EAX,0xff
// 004d7a09: ADD EDI,EAX
// 004d7a0b: AND EBP,0xff
// 004d7a11: MOV EAX,dword ptr [ESP + 0x14c]
// 004d7a18: INC EAX
// 004d7a19: ADD ESI,EBP
// 004d7a1b: MOV EBP,dword ptr [ESP + 0x148]
// 004d7a22: MOV dword ptr [ESP + 0x14c],EAX
// 004d7a29: CMP ECX,EBP
// 004d7a2b: JL 0x004d79ec
//   XREF to: 004d79ec (CONDITIONAL_JUMP)
// 004d7a2d: MOV EDX,dword ptr [ESP + 0x144]
//   Label: LAB_004d7a2d
// 004d7a34: ADD EDX,0x4
// 004d7a37: MOV ECX,dword ptr [ESP + 0x13c]
// 004d7a3e: MOV dword ptr [ESP + 0x144],EDX
// 004d7a45: CMP EDX,ECX
// 004d7a47: JL 0x004d79c4
//   XREF to: 004d79c4 (CONDITIONAL_JUMP)
// 004d7a4d: MOV EBP,dword ptr [ESP + 0x14c]
//   Label: LAB_004d7a4d
// 004d7a54: MOV EDX,EBX
// 004d7a56: MOV EAX,EBX
// 004d7a58: SAR EDX,0x1f
// 004d7a5b: IDIV EBP
// 004d7a5d: MOV EBX,EAX
// 004d7a5f: MOV EDX,ESI
// 004d7a61: MOV EAX,ESI
// 004d7a63: SAR EDX,0x1f
// 004d7a66: IDIV EBP
// 004d7a68: MOV ESI,EAX
// 004d7a6a: MOV EDX,EDI
// 004d7a6c: MOV EAX,EDI
// 004d7a6e: SAR EDX,0x1f
// 004d7a71: IDIV EBP
// 004d7a73: MOV EBP,dword ptr [ESP + 0x134]
// 004d7a7a: PUSH EBP
// 004d7a7b: PUSH EBX
// 004d7a7c: MOV EDI,EAX
// 004d7a7e: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 004d7a83: ADD ESP,0x8
// 004d7a86: PUSH EBP
// 004d7a87: PUSH ESI
// 004d7a88: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 004d7a8d: ADD ESP,0x8
// 004d7a90: PUSH EBP
// 004d7a91: PUSH EDI
// 004d7a92: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 004d7a97: ADD ESP,0x8
// 004d7a9a: MOV ECX,dword ptr [ESP + 0x138]
// 004d7aa1: INC ECX
// 004d7aa2: MOV EBX,dword ptr [0x0067b664]
//   XREF to: 0067b664 (READ)
// 004d7aa8: MOV dword ptr [ESP + 0x138],ECX
// 004d7aaf: CMP ECX,EBX
// 004d7ab1: JL 0x004d7926
//   XREF to: 004d7926 (CONDITIONAL_JUMP)
// 004d7ab7: MOV EAX,dword ptr [ESP + 0x130]
//   Label: LAB_004d7ab7
// 004d7abe: INC EAX
// 004d7abf: MOV EDX,dword ptr [0x0067b668]
//   XREF to: 0067b668 (READ)
// 004d7ac5: MOV dword ptr [ESP + 0x130],EAX
// 004d7acc: CMP EAX,EDX
// 004d7ace: JL 0x004d7900
//   XREF to: 004d7900 (CONDITIONAL_JUMP)
// 004d7ad4: PUSH 0x110
//   Label: LAB_004d7ad4
// 004d7ad9: PUSH 0x62b237
//   XREF to: 0062b237 (DATA)
// 004d7ade: MOV ECX,dword ptr [ESP + 0x13c]
// 004d7ae5: PUSH ECX
// 004d7ae6: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004d7aeb: ADD ESP,0xc
// 004d7aee: PUSH 0x0
// 004d7af0: PUSH 0x0
// 004d7af2: LEA EAX,[ESP + 0x8]
// 004d7af6: PUSH EAX
// 004d7af7: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004d7afc: MOV EBX,dword ptr [0x02d831bc]
//   XREF to: 02d831bc (READ)
// 004d7b02: INC EBX
// 004d7b03: ADD ESP,0xc
// 004d7b06: MOV dword ptr [0x02d831bc],EBX
//   XREF to: 02d831bc (WRITE)
// 004d7b0c: ADD ESP,0x150
// 004d7b12: POP EBP
// 004d7b13: POP EDI
// 004d7b14: POP ESI
// 004d7b15: POP EBX
// 004d7b16: RET
// 004d7b17: MOV ESI,0x1
//   Label: LAB_004d7b17
// 004d7b1c: MOV dword ptr [0x02d831bc],ECX
//   XREF to: 02d831bc (WRITE)
// 004d7b22: MOV dword ptr [0x02d831b4],ESI
//   XREF to: 02d831b4 (WRITE)
// 004d7b28: JMP 0x004d786b
//   XREF to: 004d786b (UNCONDITIONAL_JUMP)
// 004d7b2d: XOR EBP,EBP
//   Label: LAB_004d7b2d
// 004d7b2f: MOV dword ptr [0x02d831b4],EBP
//   XREF to: 02d831b4 (WRITE)
// 004d7b35: ADD ESP,0x150
// 004d7b3b: POP EBP
// 004d7b3c: POP EDI
// 004d7b3d: POP ESI
// 004d7b3e: POP EBX
// 004d7b3f: RET
