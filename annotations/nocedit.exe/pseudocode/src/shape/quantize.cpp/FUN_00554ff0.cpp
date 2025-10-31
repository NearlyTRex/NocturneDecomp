// Name: shape_quantize.cpp_FUN_00554ff0
// Address: 00554ff0
// Address Range: [[00554ff0, 0055508c]]
// Convention: unknown
// Signature: undefined shape_quantize.cpp_FUN_00554ff0()
// Cross-references:
//   shape_quantize.cpp_FUN_00554e70 (00554e70) at 00554f04 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00640c2b = 0.300000000000000
//   double DOUBLE_00640c33 = 0.590000000000000
//   double DOUBLE_00640c3b = 0.110000000000000
//   double DOUBLE_00640c43 = 0.700000000000000

#include "nocturne.h"

/* Signature: undefined1 shape_quantize.cpp_FUN_00554ff0(undefined1 param_1, undefined4 param_2,
   undefined4 param_3) */

float shape_quantize_cpp_FUN_00554ff0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *in_stack_00000008;
  byte *in_stack_0000000c;
  
  fVar1 = (float)(int)((uint)*in_stack_0000000c - (int)(short)*in_stack_00000008);
  fVar2 = (float)(int)((uint)in_stack_0000000c[1] - (*in_stack_00000008 >> 0x10));
  fVar3 = (float)(int)((uint)in_stack_0000000c[2] - (*(int *)((int)in_stack_00000008 + 2) >> 0x10));
  fVar4 = (float)(int)((uint)in_stack_0000000c[3] - (in_stack_00000008[1] >> 0x10));
  return fVar4 * fVar4 * (float)DOUBLE_00640c43 +
         fVar3 * fVar3 * (float)DOUBLE_00640c3b +
         fVar2 * fVar2 * (float)DOUBLE_00640c33 + fVar1 * fVar1 * (float)DOUBLE_00640c2b;
}


// Assembly code:
// 00554ff0: PUSH EBX
//   Label: shape_quantize.cpp_FUN_00554ff0
// 00554ff1: SUB ESP,0x1c
// 00554ff4: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00554ff8: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 00554ffc: XOR ECX,ECX
// 00554ffe: MOVSX EBX,word ptr [EDX]
// 00555001: MOV CL,byte ptr [EAX]
// 00555003: SUB ECX,EBX
// 00555005: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0xc] (WRITE)
// 00555009: XOR EBX,EBX
// 0055500b: MOV ECX,dword ptr [EDX]
// 0055500d: MOV BL,byte ptr [EAX + 0x1]
// 00555010: SAR ECX,0x10
// 00555013: SUB EBX,ECX
// 00555015: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x8] (WRITE)
// 00555019: MOV ECX,dword ptr [EDX + 0x2]
// 0055501c: XOR EBX,EBX
// 0055501e: SAR ECX,0x10
// 00555021: MOV BL,byte ptr [EAX + 0x2]
// 00555024: FILD dword ptr [ESP + 0x14]
//   XREF to: Stack[-0xc] (READ)
// 00555028: SUB EBX,ECX
// 0055502a: FILD dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x8] (READ)
// 0055502e: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x8] (WRITE)
// 00555032: MOV AL,byte ptr [EAX + 0x3]
// 00555035: FILD dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x8] (READ)
// 00555039: FLD ST2
// 0055503b: FMULP ST3
// 0055503d: FXCH ST2
// 0055503f: FMUL double ptr [0x00640c2b]
//   XREF to: 00640c2b (READ)
// 00555045: FLD ST1
// 00555047: FMULP ST2
// 00555049: FXCH
// 0055504b: FMUL double ptr [0x00640c33]
//   XREF to: 00640c33 (READ)
// 00555051: AND EAX,0xff
// 00555056: MOV EDX,dword ptr [EDX + 0x4]
// 00555059: FADDP
// 0055505b: SAR EDX,0x10
// 0055505e: FLD ST1
// 00555060: FMULP ST2
// 00555062: SUB EAX,EDX
// 00555064: FXCH
// 00555066: FMUL double ptr [0x00640c3b]
//   XREF to: 00640c3b (READ)
// 0055506c: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 00555070: FADDP
// 00555072: FILD dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x8] (READ)
// 00555076: FMUL ST0
// 00555078: FMUL double ptr [0x00640c43]
//   XREF to: 00640c43 (READ)
// 0055507e: FADDP
// 00555080: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (WRITE)
// 00555084: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 00555088: ADD ESP,0x1c
// 0055508b: POP EBX
// 0055508c: RET
