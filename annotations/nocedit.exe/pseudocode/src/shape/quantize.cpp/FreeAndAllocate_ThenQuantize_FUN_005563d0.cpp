// Name: shape_quantize.cpp_FreeAndAllocate_ThenQuantize_FUN_005563d0
// Address: 005563d0
// Address Range: [[005563d0, 00556461]]
// Convention: unknown
// Signature: undefined shape_quantize.cpp_FreeAndAllocate_ThenQuantize_FUN_005563d0()
// Cross-references:
//   shape_quantize.cpp_CallFreeAndAllocateThenQuantize_FUN_00556470 (00556470) at 0055647c [UNCONDITIONAL_CALL]
// Function calls:
//   shape_quantize.cpp_AllocateMemoryForSomething_FUN_00554a50
//   shape_quantize.cpp_FreeSomething2_FUN_00554d40
//   shape_quantize.cpp_FUN_00556180
//   shape_quantize.cpp_QuantizeSomething_FUN_00554cc0

#include "nocturne.h"

/* Signature: undefined1 shape_quantize.cpp_FreeAndAllocate_ThenQuantize(undefined4 param_1,
   undefined4 param_2, undefined4 param_3) */

int shape_quantize_cpp_FreeAndAllocate_ThenQuantize_FUN_005563d0(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000008;
  int *in_stack_00000010;
  int *in_stack_00000014;
  
  shape_quantize_cpp_FreeSomething2_FUN_00554d40();
  iVar2 = 0;
  if (0 < in_stack_00000008) {
    do {
      if ((*(char *)(*in_stack_00000010 + 0x1a) == '\x18') &&
         (iVar1 = shape_quantize_cpp_AllocateMemoryForSomething_FUN_00554a50(), iVar1 == 0)) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      in_stack_00000010 = in_stack_00000010 + 1;
    } while (iVar2 < in_stack_00000008);
  }
  iVar2 = shape_quantize_cpp_QuantizeSomething_FUN_00554cc0();
  if (iVar2 != 0) {
    iVar2 = 0;
    if (0 < in_stack_00000008) {
      do {
        if ((*(char *)(*in_stack_00000014 + 0x1a) == '\x18') &&
           (iVar1 = shape_quantize_cpp_FUN_00556180(), iVar1 == 0)) {
          return 0;
        }
        iVar2 = iVar2 + 1;
        in_stack_00000014 = in_stack_00000014 + 1;
      } while (iVar2 < in_stack_00000008);
    }
    shape_quantize_cpp_FreeSomething2_FUN_00554d40();
    iVar2 = 1;
  }
  return iVar2;
}


// Assembly code:
// 005563d0: PUSH EBX
//   Label: shape_quantize.cpp_FreeAndAllocate_ThenQuantize_FUN_005563d0
// 005563d1: PUSH ESI
// 005563d2: PUSH EDI
// 005563d3: PUSH EBP
// 005563d4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005563d8: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005563dc: PUSH EDI
// 005563dd: CALL shape_quantize.cpp_FreeSomething2_FUN_00554d40
//   XREF to: 00554d40 (UNCONDITIONAL_CALL)
// 005563e2: XOR ESI,ESI
// 005563e4: ADD ESP,0x4
// 005563e7: TEST EBP,EBP
// 005563e9: JLE 0x00556401
//   XREF to: 00556401 (CONDITIONAL_JUMP)
// 005563eb: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005563ef: MOV EAX,dword ptr [EBX]
//   Label: LAB_005563ef
// 005563f1: MOV DL,byte ptr [EAX + 0x1a]
// 005563f4: CMP DL,0x18
// 005563f7: JZ 0x0055643c
//   XREF to: 0055643c (CONDITIONAL_JUMP)
// 005563f9: INC ESI
//   Label: LAB_005563f9
// 005563fa: ADD EBX,0x4
// 005563fd: CMP ESI,EBP
// 005563ff: JL 0x005563ef
//   XREF to: 005563ef (CONDITIONAL_JUMP)
// 00556401: PUSH EDI
//   Label: LAB_00556401
// 00556402: CALL shape_quantize.cpp_QuantizeSomething_FUN_00554cc0
//   XREF to: 00554cc0 (UNCONDITIONAL_CALL)
// 00556407: ADD ESP,0x4
// 0055640a: TEST EAX,EAX
// 0055640c: JZ 0x00556437
//   XREF to: 00556437 (CONDITIONAL_JUMP)
// 0055640e: XOR ESI,ESI
// 00556410: TEST EBP,EBP
// 00556412: JLE 0x00556429
//   XREF to: 00556429 (CONDITIONAL_JUMP)
// 00556414: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00556418: MOV EAX,dword ptr [EBX]
//   Label: LAB_00556418
// 0055641a: MOV AL,byte ptr [EAX + 0x1a]
// 0055641d: CMP AL,0x18
// 0055641f: JZ 0x0055644f
//   XREF to: 0055644f (CONDITIONAL_JUMP)
// 00556421: INC ESI
//   Label: LAB_00556421
// 00556422: ADD EBX,0x4
// 00556425: CMP ESI,EBP
// 00556427: JL 0x00556418
//   XREF to: 00556418 (CONDITIONAL_JUMP)
// 00556429: PUSH EDI
//   Label: LAB_00556429
// 0055642a: CALL shape_quantize.cpp_FreeSomething2_FUN_00554d40
//   XREF to: 00554d40 (UNCONDITIONAL_CALL)
// 0055642f: MOV EAX,0x1
// 00556434: ADD ESP,0x4
// 00556437: POP EBP
//   Label: LAB_00556437
// 00556438: POP EDI
// 00556439: POP ESI
// 0055643a: POP EBX
// 0055643b: RET
// 0055643c: PUSH EAX
//   Label: LAB_0055643c
// 0055643d: PUSH EDI
// 0055643e: CALL shape_quantize.cpp_AllocateMemoryForSomething_FUN_00554a50
//   XREF to: 00554a50 (UNCONDITIONAL_CALL)
// 00556443: ADD ESP,0x8
// 00556446: TEST EAX,EAX
// 00556448: JNZ 0x005563f9
//   XREF to: 005563f9 (CONDITIONAL_JUMP)
// 0055644a: POP EBP
// 0055644b: POP EDI
// 0055644c: POP ESI
// 0055644d: POP EBX
// 0055644e: RET
// 0055644f: PUSH EBX
//   Label: LAB_0055644f
// 00556450: PUSH EDI
// 00556451: CALL shape_quantize.cpp_FUN_00556180
//   XREF to: 00556180 (UNCONDITIONAL_CALL)
// 00556456: ADD ESP,0x8
// 00556459: TEST EAX,EAX
// 0055645b: JNZ 0x00556421
//   XREF to: 00556421 (CONDITIONAL_JUMP)
// 0055645d: POP EBP
// 0055645e: POP EDI
// 0055645f: POP ESI
// 00556460: POP EBX
// 00556461: RET
