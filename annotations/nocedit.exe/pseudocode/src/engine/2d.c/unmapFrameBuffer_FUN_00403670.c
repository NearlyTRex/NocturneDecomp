// Name: engine_2d.c_unmapFrameBuffer_FUN_00403670
// Address: 00403670
// Address Range: [[00403670, 0040373b]]
// Convention: __cdecl
// Signature: void engine_2d.c_unmapFrameBuffer_FUN_00403670(void)
// Globals:
//   TerminatedCString s_engine_2d_c_00613357
//   TerminatedCString s_unmapFrameBuffer_frame_b_00613366
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

void __cdecl engine_2d_c_unmapFrameBuffer_FUN_00403670(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  
  if (g_StoredWindowWidth == 0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x9ea;
    core_main_c_displayErrorAndQuit_FUN_00506f10("unmapFrameBuffer - frame buffer was not mapped!");
  }
  iVar2 = g_StoredWindowHeight;
  g_WindowWidth = g_StoredWindowWidth;
  g_WindowHeight = g_StoredWindowHeight;
  g_ClipLeft = g_StoredClipLeft;
  g_ClipTop = g_StoredClipTop;
  g_ClipRight = g_StoredClipRight;
  g_ClipBottom = g_StoredClipBottom;
  g_BitsPerPixel = g_StoredBitsPerPixel;
  if (0 < g_StoredWindowHeight) {
    iVar1 = g_StoredWindowHeight * 4;
    iVar3 = 0;
    pvVar4 = g_StoredMappedFrameBuffer;
    do {
      *(void **)((int)g_ScreenBufferArray + iVar3) = pvVar4;
      iVar3 = iVar3 + 4;
      pvVar4 = (void *)((int)pvVar4 + g_ScreenBufferStride);
    } while (SBORROW4(iVar3,iVar1) != iVar3 + iVar2 * -4 < 0);
  }
  g_StoredWindowWidth = 0;
  return;
}


// Assembly code:
// 00403670: PUSH EBX
//   Label: engine_2d.c_unmapFrameBuffer_FUN_00403670
// 00403671: PUSH EDI
// 00403672: PUSH EBP
// 00403673: MOV EBX,dword ptr [0x00772a58]
//   XREF to: 00772a58 (READ)
// 00403679: CMP dword ptr [0x00772a38],0x0
//   XREF to: 00772a38 (READ)
// 00403680: JZ 0x00403712
//   XREF to: 00403712 (CONDITIONAL_JUMP)
// 00403686: MOV EAX,[0x00772a38]
//   Label: LAB_00403686
//   XREF to: 00772a38 (READ)
// 0040368b: MOV [0x00679394],EAX
//   XREF to: 00679394 (WRITE)
// 00403690: MOV EAX,[0x00772a3c]
//   XREF to: 00772a3c (READ)
// 00403695: MOV [0x00679398],EAX
//   XREF to: 00679398 (WRITE)
// 0040369a: MOV EAX,[0x00772a40]
//   XREF to: 00772a40 (READ)
// 0040369f: MOV [0x02d02558],EAX
//   XREF to: 02d02558 (WRITE)
// 004036a4: MOV EAX,[0x00772a44]
//   XREF to: 00772a44 (READ)
// 004036a9: MOV [0x02d0255c],EAX
//   XREF to: 02d0255c (WRITE)
// 004036ae: MOV EAX,[0x00772a48]
//   XREF to: 00772a48 (READ)
// 004036b3: MOV EDX,dword ptr [0x00772a54]
//   XREF to: 00772a54 (READ)
// 004036b9: MOV [0x02d02560],EAX
//   XREF to: 02d02560 (WRITE)
// 004036be: MOV EAX,[0x00772a4c]
//   XREF to: 00772a4c (READ)
// 004036c3: MOV EBX,dword ptr [0x00772a58]
//   XREF to: 00772a58 (READ)
// 004036c9: MOV [0x02d02564],EAX
//   XREF to: 02d02564 (WRITE)
// 004036ce: MOV EAX,[0x00772a50]
//   XREF to: 00772a50 (READ)
// 004036d3: MOV EDI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004036d9: MOV [0x0067939c],EAX
//   XREF to: 0067939c (WRITE)
// 004036de: TEST EDI,EDI
// 004036e0: JLE 0x00403700
//   XREF to: 00403700 (CONDITIONAL_JUMP)
// 004036e2: LEA ECX,[EDI*0x4 + 0x0]
// 004036e9: XOR EAX,EAX
// 004036eb: MOV dword ptr [EAX + 0x2cf6a9c],EDX
//   Label: LAB_004036eb
//   XREF to: 02cf6a9c (WRITE)
//   XREF to: 02cf6aa0 (WRITE)
// 004036f1: ADD EAX,0x4
// 004036f4: ADD EDX,EBX
// 004036f6: CMP EAX,ECX
// 004036f8: JL 0x004036eb
//   XREF to: 004036eb (CONDITIONAL_JUMP)
// 004036fa: LEA EAX,[EAX]
// 00403700: XOR EBP,EBP
//   Label: LAB_00403700
// 00403702: MOV dword ptr [0x00772a38],EBP
//   XREF to: 00772a38 (WRITE)
// 00403708: MOV dword ptr [0x00772a58],EBX
//   XREF to: 00772a58 (WRITE)
// 0040370e: POP EBP
// 0040370f: POP EDI
// 00403710: POP EBX
// 00403711: RET
// 00403712: PUSH ESI
//   Label: LAB_00403712
// 00403713: MOV ECX,0x613357
//   XREF to: 00613357 (DATA)
// 00403718: MOV ESI,0x9ea
// 0040371d: PUSH 0x613366
//   XREF to: 00613366 (DATA)
// 00403722: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00403728: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0040372e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00403733: ADD ESP,0x4
// 00403736: POP ESI
// 00403737: JMP 0x00403686
//   XREF to: 00403686 (UNCONDITIONAL_JUMP)
