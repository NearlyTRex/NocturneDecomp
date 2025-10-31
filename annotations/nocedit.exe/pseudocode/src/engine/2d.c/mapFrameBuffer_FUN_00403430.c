// Name: engine_2d.c_mapFrameBuffer_FUN_00403430
// Address: 00403430
// Address Range: [[00403430, 00403649]]
// Convention: __cdecl
// Signature: int engine_2d.c_mapFrameBuffer_FUN_00403430(int width, int height, int bits_per_pixel, int stride, void * frame_buffer)
// Cross-references:
//   engine_2d.c_mapTextureFrameBuffer_FUN_00403650 (00403650) at 00403663 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_2d_c_00613239
//   TerminatedCString s_mapFrameBuffer_already_m_00613248
//   TerminatedCString s_engine_2d_c_00613269
//   TerminatedCString s_mapFrameBuffer_invalid_b_00613278
//   TerminatedCString s_engine_2d_c_0061329c
//   TerminatedCString s_mapFrameBuffer_invalid_s_006132ab
//   TerminatedCString s_engine_2d_c_006132cb
//   TerminatedCString s_mapFrameBuffer_invalid_s_006132da
//   TerminatedCString s_engine_2d_c_006132f8
//   TerminatedCString s_mapFrameBuffer_ySize_too_00613307
//   TerminatedCString s_engine_2d_c_00613327
//   TerminatedCString s_mapFrameBuffer_invalid_b_00613336
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   int g_StoredWindowWidth
//   int g_StoredWindowHeight
//   int g_StoredClipLeft
//   int g_StoredClipTop
//   int g_StoredClipRight
//   int g_StoredClipBottom
//   int g_StoredBitsPerPixel
//   void* g_StoredMappedFrameBuffer
//   int g_ScreenBufferStride
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

int __cdecl
engine_2d_c_mapFrameBuffer_FUN_00403430
          (int width,int height,int bits_per_pixel,int stride,void *frame_buffer)

{
  int iVar1;
  
  if (g_StoredWindowWidth != 0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x99a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("mapFrameBuffer - already mapped!");
  }
  if (frame_buffer == (void *)0x0) {
    iVar1 = height * stride >> 0x1f;
    frame_buffer = (void *)((int)((height * stride + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3);
  }
  if (((stride != 8) && (stride != 0x10)) && (stride != 0x20)) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x9a2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("mapFrameBuffer - invalid bits/pixel");
  }
  iVar1 = height * stride >> 0x1f;
  if ((int)(((uint)frame_buffer ^ (int)frame_buffer >> 0x1f) - ((int)frame_buffer >> 0x1f)) <
      (int)((height * stride + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x9a3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("mapFrameBuffer - invalid stride");
  }
  if ((height < 1) || (bits_per_pixel < 1)) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x9a4;
    core_main_c_displayErrorAndQuit_FUN_00506f10("mapFrameBuffer - invalid size");
  }
  if (0x4b0 < bits_per_pixel) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x9a5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("mapFrameBuffer - ySize too big!");
  }
  if (height == 0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x9a6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("mapFrameBuffer - invalid buffer!");
  }
  g_StoredWindowWidth = g_WindowWidth;
  g_StoredWindowHeight = g_WindowHeight;
  g_StoredClipLeft = g_ClipLeft;
  g_WindowWidth = height;
  g_StoredClipTop = g_ClipTop;
  g_StoredClipRight = g_ClipRight;
  g_WindowHeight = bits_per_pixel;
  g_StoredClipBottom = g_ClipBottom;
  g_ClipLeft = 0;
  g_StoredBitsPerPixel = g_BitsPerPixel;
  g_ClipTop = 0;
  g_StoredMappedFrameBuffer = g_ScreenBufferArray[0];
  g_ScreenBufferStride = (int)g_ScreenBufferArray[1] - (int)g_ScreenBufferArray[0];
  g_BitsPerPixel = stride;
  iVar1 = bits_per_pixel + -1;
  g_ClipRight = height + -1;
  g_ClipBottom = iVar1;
  if (0 < bits_per_pixel) {
    iVar1 = 0;
    do {
      *(int *)((int)g_ScreenBufferArray + iVar1) = height;
      iVar1 = iVar1 + 4;
      height = height + (int)frame_buffer;
    } while (SBORROW4(iVar1,bits_per_pixel * 4) != iVar1 + bits_per_pixel * -4 < 0);
  }
  return iVar1;
}


// Assembly code:
// 00403430: PUSH EBX
//   Label: engine_2d.c_mapFrameBuffer_FUN_00403430
// 00403431: PUSH ESI
// 00403432: PUSH EDI
// 00403433: PUSH EBP
// 00403434: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00403438: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0040343c: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00403440: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00403444: CMP dword ptr [0x00772a38],0x0
//   XREF to: 00772a38 (READ)
// 0040344b: JNZ 0x00403615
//   XREF to: 00403615 (CONDITIONAL_JUMP)
// 00403451: TEST EBX,EBX
//   Label: LAB_00403451
// 00403453: JNZ 0x00403469
//   XREF to: 00403469 (CONDITIONAL_JUMP)
// 00403455: MOV EDX,EBP
// 00403457: IMUL EDX,ESI
// 0040345a: MOV EAX,EDX
// 0040345c: SAR EDX,0x1f
// 0040345f: SHL EDX,0x3
// 00403462: SBB EAX,EDX
// 00403464: SAR EAX,0x3
// 00403467: MOV EBX,EAX
// 00403469: CMP ESI,0x8
//   Label: LAB_00403469
// 0040346c: JZ 0x0040349b
//   XREF to: 0040349b (CONDITIONAL_JUMP)
// 0040346e: CMP ESI,0x10
// 00403471: JZ 0x0040349b
//   XREF to: 0040349b (CONDITIONAL_JUMP)
// 00403473: CMP ESI,0x20
// 00403476: JZ 0x0040349b
//   XREF to: 0040349b (CONDITIONAL_JUMP)
// 00403478: MOV EDX,0x613269
//   XREF to: 00613269 (DATA)
// 0040347d: MOV ECX,0x9a2
// 00403482: PUSH 0x613278
//   XREF to: 00613278 (DATA)
// 00403487: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0040348d: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00403493: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00403498: ADD ESP,0x4
// 0040349b: MOV EDX,EBP
//   Label: LAB_0040349b
// 0040349d: IMUL EDX,ESI
// 004034a0: MOV EAX,EDX
// 004034a2: SAR EDX,0x1f
// 004034a5: SHL EDX,0x3
// 004034a8: SBB EAX,EDX
// 004034aa: SAR EAX,0x3
// 004034ad: MOV ECX,EAX
// 004034af: MOV EAX,EBX
// 004034b1: CDQ
// 004034b2: XOR EAX,EDX
// 004034b4: SUB EAX,EDX
// 004034b6: CMP EAX,ECX
// 004034b8: JGE 0x004034dc
//   XREF to: 004034dc (CONDITIONAL_JUMP)
// 004034ba: MOV EAX,0x61329c
//   XREF to: 0061329c (DATA)
// 004034bf: MOV EDX,0x9a3
// 004034c4: PUSH 0x6132ab
//   XREF to: 006132ab (DATA)
// 004034c9: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 004034ce: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 004034d4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004034d9: ADD ESP,0x4
// 004034dc: CMP EBP,0x1
//   Label: LAB_004034dc
// 004034df: JGE 0x0040363c
//   XREF to: 0040363c (CONDITIONAL_JUMP)
// 004034e5: MOV ECX,0x6132cb
//   Label: LAB_004034e5
//   XREF to: 006132cb (DATA)
// 004034ea: MOV EAX,0x9a4
// 004034ef: PUSH 0x6132da
//   XREF to: 006132da (DATA)
// 004034f4: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004034fa: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004034ff: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00403504: ADD ESP,0x4
// 00403507: CMP EDI,0x4b0
//   Label: LAB_00403507
// 0040350d: JLE 0x00403532
//   XREF to: 00403532 (CONDITIONAL_JUMP)
// 0040350f: MOV EDX,0x6132f8
//   XREF to: 006132f8 (DATA)
// 00403514: MOV ECX,0x9a5
// 00403519: PUSH 0x613307
//   XREF to: 00613307 (DATA)
// 0040351e: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00403524: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0040352a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0040352f: ADD ESP,0x4
// 00403532: CMP dword ptr [ESP + 0x14],0x0
//   Label: LAB_00403532
//   XREF to: Stack[0x4] (READ)
// 00403537: JNZ 0x0040355c
//   XREF to: 0040355c (CONDITIONAL_JUMP)
// 00403539: MOV EDX,0x613327
//   XREF to: 00613327 (DATA)
// 0040353e: MOV ECX,0x9a6
// 00403543: PUSH 0x613336
//   XREF to: 00613336 (DATA)
// 00403548: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0040354e: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00403554: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00403559: ADD ESP,0x4
// 0040355c: MOV EAX,[0x00679394]
//   Label: LAB_0040355c
//   XREF to: 00679394 (READ)
// 00403561: MOV [0x00772a38],EAX
//   XREF to: 00772a38 (WRITE)
// 00403566: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0040356b: MOV EDX,dword ptr [0x02cf6a9c]
//   XREF to: 02cf6a9c (READ)
// 00403571: MOV [0x00772a3c],EAX
//   XREF to: 00772a3c (WRITE)
// 00403576: MOV EAX,[0x02d02558]
//   XREF to: 02d02558 (READ)
// 0040357b: XOR ECX,ECX
// 0040357d: MOV [0x00772a40],EAX
//   XREF to: 00772a40 (WRITE)
// 00403582: MOV EAX,[0x02d0255c]
//   XREF to: 02d0255c (READ)
// 00403587: MOV dword ptr [0x00679394],EBP
//   XREF to: 00679394 (WRITE)
// 0040358d: MOV [0x00772a44],EAX
//   XREF to: 00772a44 (WRITE)
// 00403592: MOV EAX,[0x02d02560]
//   XREF to: 02d02560 (READ)
// 00403597: DEC EBP
// 00403598: MOV [0x00772a48],EAX
//   XREF to: 00772a48 (WRITE)
// 0040359d: MOV EAX,[0x02d02564]
//   XREF to: 02d02564 (READ)
// 004035a2: MOV dword ptr [0x00679398],EDI
//   XREF to: 00679398 (WRITE)
// 004035a8: MOV [0x00772a4c],EAX
//   XREF to: 00772a4c (WRITE)
// 004035ad: MOV EAX,[0x0067939c]
//   XREF to: 0067939c (READ)
// 004035b2: MOV dword ptr [0x02d02558],ECX
//   XREF to: 02d02558 (WRITE)
// 004035b8: MOV [0x00772a50],EAX
//   XREF to: 00772a50 (WRITE)
// 004035bd: MOV EAX,[0x02cf6a9c]
//   XREF to: 02cf6a9c (READ)
// 004035c2: MOV dword ptr [0x02d0255c],ECX
//   XREF to: 02d0255c (WRITE)
// 004035c8: MOV [0x00772a54],EAX
//   XREF to: 00772a54 (WRITE)
// 004035cd: MOV EAX,[0x02cf6aa0]
//   XREF to: 02cf6aa0 (READ)
// 004035d2: MOV dword ptr [0x02d02560],EBP
//   XREF to: 02d02560 (WRITE)
// 004035d8: SUB EAX,EDX
// 004035da: MOV dword ptr [0x0067939c],ESI
//   XREF to: 0067939c (WRITE)
// 004035e0: MOV [0x00772a58],EAX
//   XREF to: 00772a58 (WRITE)
// 004035e5: LEA EAX,[EDI + -0x1]
// 004035e8: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004035ec: MOV [0x02d02564],EAX
//   XREF to: 02d02564 (WRITE)
// 004035f1: TEST EDI,EDI
// 004035f3: JLE 0x00403610
//   XREF to: 00403610 (CONDITIONAL_JUMP)
// 004035f5: LEA ECX,[EDI*0x4 + 0x0]
// 004035fc: XOR EAX,EAX
// 004035fe: MOV dword ptr [EAX + 0x2cf6a9c],EDX
//   Label: LAB_004035fe
//   XREF to: 02cf6a9c (WRITE)
//   XREF to: 02cf6aa0 (WRITE)
// 00403604: ADD EAX,0x4
// 00403607: ADD EDX,EBX
// 00403609: CMP EAX,ECX
// 0040360b: JL 0x004035fe
//   XREF to: 004035fe (CONDITIONAL_JUMP)
// 0040360d: LEA EAX,[EAX]
// 00403610: POP EBP
//   Label: LAB_00403610
// 00403611: POP EDI
// 00403612: POP ESI
// 00403613: POP EBX
// 00403614: RET
// 00403615: MOV ECX,0x613239
//   Label: LAB_00403615
//   XREF to: 00613239 (DATA)
// 0040361a: MOV EAX,0x99a
// 0040361f: PUSH 0x613248
//   XREF to: 00613248 (DATA)
// 00403624: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0040362a: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0040362f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00403634: ADD ESP,0x4
// 00403637: JMP 0x00403451
//   XREF to: 00403451 (UNCONDITIONAL_JUMP)
// 0040363c: CMP EDI,0x1
//   Label: LAB_0040363c
// 0040363f: JL 0x004034e5
//   XREF to: 004034e5 (CONDITIONAL_JUMP)
// 00403645: JMP 0x00403507
//   XREF to: 00403507 (UNCONDITIONAL_JUMP)
