// Name: core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004509b0
// Address: 004509b0
// Address Range: [[004509b0, 00450a85]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004509b0(CDemonCamera * this_ptr)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270 (00453270) at 004532db [UNCONDITIONAL_CALL]
// Globals:
//   char[241][320] g_CoronaBlurOutputBuffer
//   undefined4 DAT_00ba8db8
//   undefined4 DAT_00bbb9b7
//   char[241][320] g_CoronaBlurWorkBuffer
//   undefined4 DAT_00bbb9b9
//   undefined4 DAT_00bbbaf7
//   undefined4 DAT_00bbbaf8
//   undefined4 DAT_00bbbc38
// Function calls:
//   core_dstrender.cpp_verticalBlur3TapMMXStride320_FUN_00492042

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004509b0(CDemonCamera *this_ptr)

{
  char (*output_buffer) [320];
  int iVar1;
  char (*input_buffer) [320];
  int iVar2;
  
  output_buffer = g_CoronaBlurWorkBuffer;
  input_buffer = g_CoronaBlurOutputBuffer;
  iVar2 = 1;
  while( true ) {
    output_buffer = output_buffer + 1;
    input_buffer = input_buffer + 1;
    if (this_ptr->display_height + -1 <= iVar2) break;
    core_dstrender_cpp_verticalBlur3TapMMXStride320_FUN_00492042
              ((ulonglong *)output_buffer,(ulonglong *)input_buffer,this_ptr->display_width);
    iVar2 = iVar2 + 1;
  }
  iVar2 = 0;
  if (0 < this_ptr->display_height) {
    iVar1 = 0;
    do {
      g_CoronaBlurWorkBuffer[0][iVar1] = '\0';
      *(undefined1 *)(this_ptr->display_width + 0xbbb9b7 + iVar1) = 0;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x140;
    } while (iVar2 < this_ptr->display_height);
  }
  iVar2 = 0;
  if (0 < this_ptr->display_width) {
    do {
      g_CoronaBlurWorkBuffer[0][iVar2] = '\0';
      g_CoronaBlurWorkBuffer[this_ptr->display_height + -1][iVar2] = '\0';
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->display_width);
  }
  return;
}


// Assembly code:
// 004509b0: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004509b0
// 004509b1: PUSH ESI
// 004509b2: PUSH EDI
// 004509b3: PUSH EBP
// 004509b4: SUB ESP,0x4
// 004509b7: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004509bb: MOV EAX,0xbbb9b8
//   XREF to: 00bbb9b8 (DATA)
// 004509c0: MOV EBP,0xba8c78
//   XREF to: 00ba8c78 (DATA)
// 004509c5: MOV EDI,0x1
// 004509ca: ADD EAX,0x140
//   Label: LAB_004509ca
// 004509cf: ADD EBP,0x140
// 004509d5: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
//   XREF to: 00bbbaf8 (DATA)
//   XREF to: 00bbbc38 (DATA)
// 004509d8: MOV EAX,dword ptr [ESI + 0x154]
// 004509de: DEC EAX
// 004509df: CMP EDI,EAX
// 004509e1: JL 0x00450a68
//   XREF to: 00450a68 (CONDITIONAL_JUMP)
// 004509e7: MOV ECX,dword ptr [ESI + 0x154]
// 004509ed: XOR EDX,EDX
// 004509ef: TEST ECX,ECX
// 004509f1: JLE 0x00450a20
//   XREF to: 00450a20 (CONDITIONAL_JUMP)
// 004509f3: XOR EAX,EAX
// 004509f5: XOR BL,BL
//   Label: LAB_004509f5
// 004509f7: MOV byte ptr [EAX + 0xbbb9b8],BL
//   XREF to: 00bbb9b8 (WRITE)
//   XREF to: 00bbbaf8 (WRITE)
// 004509fd: MOV EDI,dword ptr [ESI + 0x150]
// 00450a03: MOV byte ptr [EDI + EAX*0x1 + 0xbbb9b7],BL
//   XREF to: 00bbb9b7 (DATA)
//   XREF to: 00bbbaf7 (DATA)
// 00450a0a: INC EDX
// 00450a0b: MOV ECX,dword ptr [ESI + 0x154]
// 00450a11: ADD EAX,0x140
// 00450a16: CMP EDX,ECX
// 00450a18: JL 0x004509f5
//   XREF to: 004509f5 (CONDITIONAL_JUMP)
// 00450a1a: LEA EAX,[EAX]
// 00450a20: MOV EBX,dword ptr [ESI + 0x150]
//   Label: LAB_00450a20
// 00450a26: XOR EAX,EAX
// 00450a28: TEST EBX,EBX
// 00450a2a: JLE 0x00450a60
//   XREF to: 00450a60 (CONDITIONAL_JUMP)
// 00450a2c: XOR CL,CL
//   Label: LAB_00450a2c
// 00450a2e: MOV byte ptr [EAX + 0xbbb9b8],CL
//   XREF to: 00bbb9b8 (WRITE)
//   XREF to: 00bbb9b9 (WRITE)
// 00450a34: MOV EDX,dword ptr [ESI + 0x154]
// 00450a3a: DEC EDX
// 00450a3b: IMUL EDX,EDX,0x140
// 00450a41: MOV byte ptr [EDX + EAX*0x1 + 0xbbb9b8],CL
//   XREF to: 00bbb9b8 (DATA)
//   XREF to: 00bbb9b9 (DATA)
// 00450a48: INC EAX
// 00450a49: CMP EAX,dword ptr [ESI + 0x150]
// 00450a4f: JL 0x00450a2c
//   XREF to: 00450a2c (CONDITIONAL_JUMP)
// 00450a51: LEA EAX,[EAX]
// 00450a57: LEA EDX,[EDX]
// 00450a5d: LEA EAX,[EAX]
// 00450a60: ADD ESP,0x4
//   Label: LAB_00450a60
// 00450a63: POP EBP
// 00450a64: POP EDI
// 00450a65: POP ESI
// 00450a66: POP EBX
// 00450a67: RET
// 00450a68: MOV EAX,dword ptr [ESI + 0x150]
//   Label: LAB_00450a68
// 00450a6e: PUSH EAX
// 00450a6f: PUSH EBP
//   XREF to: 00ba8db8 (DATA)
// 00450a70: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
//   XREF to: 00bbbaf8 (PARAM)
// 00450a74: PUSH EBX
//   XREF to: 00bbbaf8 (DATA)
// 00450a75: CALL core_dstrender.cpp_verticalBlur3TapMMXStride320_FUN_00492042
//   XREF to: 00492042 (UNCONDITIONAL_CALL)
// 00450a7a: ADD ESP,0xc
// 00450a7d: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00450a80: INC EDI
// 00450a81: JMP 0x004509ca
//   XREF to: 004509ca (UNCONDITIONAL_JUMP)
