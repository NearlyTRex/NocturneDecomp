// Name: engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
// Address: 00410950
// Address Range: [[00410950, 00410af8]]
// Convention: __cdecl
// Signature: void engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950(CAlphaBitmap * this_ptr, int x, int y, int alpha)
// Cross-references:
//   core_game.cpp_CGame_displayActStats_FUN_004e3800 (004e3800) at 004e384f [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_finishAct_FUN_004e3b90 (004e3b90) at 004e3cda [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e41ba [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0 (004daed0) at 004daf48 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_renderAllItems_FUN_00500690 (00500690) at 00501222 [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_show_FUN_00503dc0 (00503dc0) at 00503ec4 [UNCONDITIONAL_CALL]
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 00508615 [UNCONDITIONAL_CALL]
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 005080e6 [UNCONDITIONAL_CALL]
//   core_main.c_showPromoScreen_FUN_00508340 (00508340) at 005083b4 [UNCONDITIONAL_CALL]
//   core_menu.cpp_showCalibrationTestPattern_FUN_00510a50 (00510a50) at 00510aea [UNCONDITIONAL_CALL]
//   core_moon.cpp_CMoon_render_FUN_00529ed0 (00529ed0) at 0052a293 [UNCONDITIONAL_CALL]
//   support_newmsg.cpp_FUN_005445c0 (005445c0) at 0054461c [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
// Function calls:
//   engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_00410cf0
//   wincore_windll.cpp_renderAlphaRow16_FUN_005b55f7
//   wincore_windll.cpp_renderAlphaRow32_FUN_005b555c

#include "nocturne.h"

void __cdecl
engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(CAlphaBitmap *this_ptr,int x,int y,int alpha)

{
  int iVar1;
  uint *destPixels;
  ushort *destPixels_00;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int in_stack_00000014;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((((-1 < this_ptr->width + x) && (x < g_WindowWidth)) && (-1 < y + this_ptr->height)) &&
     (y < g_WindowHeight)) {
    engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_00410cf0(this_ptr);
    pcVar3 = this_ptr->ptrRaw;
    pcVar4 = this_ptr->ptrOpa;
    if (g_BitsPerPixel == 0x20) {
      local_20 = 0;
      if (0 < this_ptr->height) {
        local_14 = alpha;
        do {
          if ((-1 < local_14) && (local_14 < g_WindowHeight)) {
            destPixels = (uint *)g_ScreenBufferArray[local_14];
            iVar1 = this_ptr->width;
            iVar2 = 0;
            if (x < 0) {
              iVar2 = -x;
              iVar1 = iVar1 + x;
            }
            else {
              destPixels = destPixels + x;
            }
            if (g_WindowWidth < x + iVar1) {
              iVar1 = g_WindowWidth - x;
            }
            wincore_windll_cpp_renderAlphaRow32_FUN_005b555c
                      (destPixels,(uchar *)(pcVar3 + iVar2),(uchar *)(pcVar4 + iVar2),
                       in_stack_00000014,iVar1);
          }
          local_14 = local_14 + 1;
          pcVar3 = pcVar3 + this_ptr->width;
          pcVar4 = pcVar4 + this_ptr->width;
          local_20 = local_20 + 1;
        } while (local_20 < this_ptr->height);
      }
    }
    else {
      local_1c = 0;
      if (0 < this_ptr->height) {
        local_18 = alpha;
        do {
          if ((-1 < local_18) && (local_18 < g_WindowHeight)) {
            destPixels_00 = (ushort *)g_ScreenBufferArray[local_18];
            iVar1 = this_ptr->width;
            iVar2 = 0;
            if (x < 0) {
              iVar2 = -x;
              iVar1 = iVar1 + x;
            }
            else {
              destPixels_00 = destPixels_00 + x;
            }
            if (g_WindowWidth < x + iVar1) {
              iVar1 = g_WindowWidth - x;
            }
            wincore_windll_cpp_renderAlphaRow16_FUN_005b55f7
                      (destPixels_00,(uchar *)(pcVar3 + iVar2),(uchar *)(pcVar4 + iVar2),
                       in_stack_00000014,iVar1);
          }
          local_18 = local_18 + 1;
          pcVar3 = pcVar3 + this_ptr->width;
          pcVar4 = pcVar4 + this_ptr->width;
          local_1c = local_1c + 1;
        } while (local_1c < this_ptr->height);
      }
    }
  }
  return;
}


// Assembly code:
// 00410950: PUSH EBX
//   Label: engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
// 00410951: PUSH ESI
// 00410952: PUSH EDI
// 00410953: PUSH EBP
// 00410954: SUB ESP,0x1c
// 00410957: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0041095b: MOV EDI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 0041095f: MOV EAX,dword ptr [ESI + 0xc]
// 00410962: ADD EAX,EDI
// 00410964: TEST EAX,EAX
// 00410966: JL 0x00410987
//   XREF to: 00410987 (CONDITIONAL_JUMP)
// 00410968: CMP EDI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0041096e: JGE 0x00410987
//   XREF to: 00410987 (CONDITIONAL_JUMP)
// 00410970: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 00410974: ADD EAX,dword ptr [ESI + 0x10]
// 00410977: TEST EAX,EAX
// 00410979: JL 0x00410987
//   XREF to: 00410987 (CONDITIONAL_JUMP)
// 0041097b: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 0041097f: CMP EAX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00410985: JL 0x0041098f
//   XREF to: 0041098f (CONDITIONAL_JUMP)
// 00410987: ADD ESP,0x1c
//   Label: LAB_00410987
// 0041098a: POP EBP
// 0041098b: POP EDI
// 0041098c: POP ESI
// 0041098d: POP EBX
// 0041098e: RET
// 0041098f: PUSH ESI
//   Label: LAB_0041098f
// 00410990: CALL engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_00410cf0
//   XREF to: 00410cf0 (UNCONDITIONAL_CALL)
// 00410995: ADD ESP,0x4
// 00410998: MOV EAX,dword ptr [ESI]
// 0041099a: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0041099e: MOV EAX,[0x0067939c]
//   XREF to: 0067939c (READ)
// 004109a3: MOV EBP,dword ptr [ESI + 0x4]
// 004109a6: CMP EAX,0x20
// 004109a9: JNZ 0x00410a55
//   XREF to: 00410a55 (CONDITIONAL_JUMP)
// 004109af: XOR EBX,EBX
// 004109b1: MOV EAX,dword ptr [ESI + 0x10]
// 004109b4: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 004109b8: TEST EAX,EAX
// 004109ba: JLE 0x00410987
//   XREF to: 00410987 (CONDITIONAL_JUMP)
// 004109bc: LEA EAX,[EDI*0x4 + 0x0]
// 004109c3: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004109c7: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 004109cb: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004109cf: MOV ECX,dword ptr [ESP + 0x14]
//   Label: LAB_004109cf
//   XREF to: Stack[-0x18] (READ)
// 004109d3: TEST ECX,ECX
// 004109d5: JL 0x00410a1f
//   XREF to: 00410a1f (CONDITIONAL_JUMP)
// 004109d7: CMP ECX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004109dd: JGE 0x00410a1f
//   XREF to: 00410a1f (CONDITIONAL_JUMP)
// 004109df: MOV ECX,dword ptr [ECX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 004109e6: MOV EAX,dword ptr [ESI + 0xc]
// 004109e9: XOR EDX,EDX
// 004109eb: TEST EDI,EDI
// 004109ed: JL 0x00410a4d
//   XREF to: 00410a4d (CONDITIONAL_JUMP)
// 004109ef: ADD ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x28] (READ)
// 004109f3: LEA EBX,[EDI + EAX*0x1]
//   Label: LAB_004109f3
// 004109f6: CMP EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004109fc: JLE 0x00410a05
//   XREF to: 00410a05 (CONDITIONAL_JUMP)
// 004109fe: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00410a03: SUB EAX,EDI
// 00410a05: PUSH EAX
//   Label: LAB_00410a05
// 00410a06: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x10] (READ)
// 00410a0a: PUSH EAX
// 00410a0b: LEA EAX,[EDX + EBP*0x1]
// 00410a0e: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 00410a12: PUSH EAX
// 00410a13: ADD EDX,EBX
// 00410a15: PUSH EDX
// 00410a16: PUSH ECX
// 00410a17: CALL wincore_windll.cpp_renderAlphaRow32_FUN_005b555c
//   XREF to: 005b555c (UNCONDITIONAL_CALL)
// 00410a1c: ADD ESP,0x14
// 00410a1f: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_00410a1f
//   XREF to: Stack[-0x14] (READ)
// 00410a23: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 00410a27: MOV EAX,dword ptr [ESI + 0xc]
// 00410a2a: INC EBX
// 00410a2b: ADD EDX,EAX
// 00410a2d: ADD EBP,EAX
// 00410a2f: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x24] (READ)
// 00410a33: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00410a37: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00410a3b: INC EAX
// 00410a3c: MOV EDX,dword ptr [ESI + 0x10]
// 00410a3f: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00410a43: CMP EAX,EDX
// 00410a45: JGE 0x00410987
//   XREF to: 00410987 (CONDITIONAL_JUMP)
// 00410a4b: JMP 0x004109cf
//   XREF to: 004109cf (UNCONDITIONAL_JUMP)
// 00410a4d: MOV EDX,EDI
//   Label: LAB_00410a4d
// 00410a4f: NEG EDX
// 00410a51: SUB EAX,EDX
// 00410a53: JMP 0x004109f3
//   XREF to: 004109f3 (UNCONDITIONAL_JUMP)
// 00410a55: XOR EDX,EDX
//   Label: LAB_00410a55
// 00410a57: MOV ECX,dword ptr [ESI + 0x10]
// 00410a5a: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00410a5e: TEST ECX,ECX
// 00410a60: JLE 0x00410987
//   XREF to: 00410987 (CONDITIONAL_JUMP)
// 00410a66: LEA EAX,[EDI + EDI*0x1]
// 00410a69: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x2c] (DATA)
// 00410a6c: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 00410a70: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00410a74: MOV ECX,dword ptr [ESP + 0x10]
//   Label: LAB_00410a74
//   XREF to: Stack[-0x1c] (READ)
// 00410a78: TEST ECX,ECX
// 00410a7a: JL 0x00410ac3
//   XREF to: 00410ac3 (CONDITIONAL_JUMP)
// 00410a7c: CMP ECX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00410a82: JGE 0x00410ac3
//   XREF to: 00410ac3 (CONDITIONAL_JUMP)
// 00410a84: MOV ECX,dword ptr [ECX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00410a8b: MOV EAX,dword ptr [ESI + 0xc]
// 00410a8e: XOR EDX,EDX
// 00410a90: TEST EDI,EDI
// 00410a92: JL 0x00410af1
//   XREF to: 00410af1 (CONDITIONAL_JUMP)
// 00410a94: ADD ECX,dword ptr [ESP]
//   XREF to: Stack[-0x2c] (DATA)
// 00410a97: LEA EBX,[EDI + EAX*0x1]
//   Label: LAB_00410a97
// 00410a9a: CMP EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00410aa0: JLE 0x00410aa9
//   XREF to: 00410aa9 (CONDITIONAL_JUMP)
// 00410aa2: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00410aa7: SUB EAX,EDI
// 00410aa9: PUSH EAX
//   Label: LAB_00410aa9
// 00410aaa: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x10] (READ)
// 00410aae: PUSH EAX
// 00410aaf: LEA EAX,[EDX + EBP*0x1]
// 00410ab2: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 00410ab6: PUSH EAX
// 00410ab7: ADD EDX,EBX
// 00410ab9: PUSH EDX
// 00410aba: PUSH ECX
// 00410abb: CALL wincore_windll.cpp_renderAlphaRow16_FUN_005b55f7
//   XREF to: 005b55f7 (UNCONDITIONAL_CALL)
// 00410ac0: ADD ESP,0x14
// 00410ac3: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_00410ac3
//   XREF to: Stack[-0x14] (READ)
// 00410ac7: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (READ)
// 00410acb: MOV EAX,dword ptr [ESI + 0xc]
// 00410ace: INC EBX
// 00410acf: ADD EDX,EAX
// 00410ad1: ADD EBP,EAX
// 00410ad3: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 00410ad7: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00410adb: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 00410adf: INC EAX
// 00410ae0: MOV EDX,dword ptr [ESI + 0x10]
// 00410ae3: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00410ae7: CMP EAX,EDX
// 00410ae9: JGE 0x00410987
//   XREF to: 00410987 (CONDITIONAL_JUMP)
// 00410aef: JMP 0x00410a74
//   XREF to: 00410a74 (UNCONDITIONAL_JUMP)
// 00410af1: MOV EDX,EDI
//   Label: LAB_00410af1
// 00410af3: NEG EDX
// 00410af5: SUB EAX,EDX
// 00410af7: JMP 0x00410a97
//   XREF to: 00410a97 (UNCONDITIONAL_JUMP)
