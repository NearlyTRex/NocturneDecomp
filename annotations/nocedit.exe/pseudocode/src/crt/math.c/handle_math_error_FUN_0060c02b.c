// Name: crt_math.c_handle_math_error_FUN_0060c02b
// Address: 0060c02b
// Address Range: [[0060c02b, 0060c0ba]]
// Convention: __mathinternal
// Signature: double crt_math.c_handle_math_error_FUN_0060c02b(void)
// Cross-references:
//   crt_math.c_exp_FUN_006068e2 (006068e2) at 00606906 [UNCONDITIONAL_CALL]
//   crt_math.c_sqrt_FUN_0060710c (0060710c) at 00607130 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_math.c_set_math_errno_FUN_0060befa

#include "nocturne.h"

double __mathinternal crt_math_c_handle_math_error_FUN_0060c02b(void)

{
  uint errorFlags;
  BADSPACEBASE *in_ESP;
  double dVar1;
  double in_stack_00000004;
  byte in_stack_0000000c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (in_stack_0000000c == 0) {
LAB_0060c06b:
    errorFlags = in_stack_0000000c | 0x8100;
    if ((in_stack_0000000c == 6) && (in_stack_00000004 < 0.0)) {
      errorFlags = 0x1106;
    }
  }
  else {
    if (3 < in_stack_0000000c) {
      if ((in_stack_0000000c == 4) && (in_stack_00000004 < 0.0)) {
        local_18 = 0;
        local_14 = 0;
        goto LAB_0060c0a7;
      }
      goto LAB_0060c06b;
    }
    errorFlags = in_stack_0000000c | 0x2040;
  }
  dVar1 = crt_math_c_set_math_errno_FUN_0060befa(errorFlags,&stack0x00000004);
  local_10 = SUB84(dVar1,0);
  local_18 = local_10;
  local_c = (undefined4)((ulonglong)dVar1 >> 0x20);
  local_14 = local_c;
LAB_0060c0a7:
  return (double)CONCAT44(local_14,local_18);
}


// Assembly code:
// 0060c02b: PUSH EBP
//   Label: crt_math.c_handle_math_error_FUN_0060c02b
// 0060c02c: MOV EBP,ESP
// 0060c02e: PUSH EBX
// 0060c02f: SUB ESP,0x10
// 0060c032: MOV DL,byte ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0060c035: CMP DL,0x1
// 0060c038: JC 0x0060c06b
//   XREF to: 0060c06b (CONDITIONAL_JUMP)
// 0060c03a: CMP DL,0x3
// 0060c03d: JBE 0x0060c046
//   XREF to: 0060c046 (CONDITIONAL_JUMP)
// 0060c03f: CMP DL,0x4
// 0060c042: JZ 0x0060c057
//   XREF to: 0060c057 (CONDITIONAL_JUMP)
// 0060c044: JMP 0x0060c06b
//   XREF to: 0060c06b (UNCONDITIONAL_JUMP)
// 0060c046: LEA EBX,[EBP + 0x8]
//   Label: LAB_0060c046
//   XREF to: Stack[0x4] (DATA)
// 0060c049: OR DL,0x40
// 0060c04c: PUSH EBX
// 0060c04d: XOR EBX,EBX
// 0060c04f: MOV BL,DL
// 0060c051: OR BH,0x20
// 0060c054: PUSH EBX
// 0060c055: JMP 0x0060c08d
//   XREF to: 0060c08d (UNCONDITIONAL_JUMP)
// 0060c057: FLDZ
//   Label: LAB_0060c057
// 0060c059: FCOMP double ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060c05c: FNSTSW AX
// 0060c05e: SAHF
// 0060c05f: JBE 0x0060c06b
//   XREF to: 0060c06b (CONDITIONAL_JUMP)
// 0060c061: XOR EDX,EDX
// 0060c063: MOV dword ptr [EBP + -0x14],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0060c066: MOV dword ptr [EBP + -0x10],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0060c069: JMP 0x0060c0a7
//   XREF to: 0060c0a7 (UNCONDITIONAL_JUMP)
// 0060c06b: XOR EBX,EBX
//   Label: LAB_0060c06b
// 0060c06d: MOV BL,DL
// 0060c06f: MOV ECX,EBX
// 0060c071: OR CH,0x81
//   XREF to: register:00000004 (WRITE)
// 0060c074: CMP DL,0x6
// 0060c077: JNZ 0x0060c088
//   XREF to: 0060c088 (CONDITIONAL_JUMP)
// 0060c079: FLDZ
// 0060c07b: FCOMP double ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060c07e: FNSTSW AX
// 0060c080: SAHF
// 0060c081: JBE 0x0060c088
//   XREF to: 0060c088 (CONDITIONAL_JUMP)
// 0060c083: OR BH,0x11
// 0060c086: MOV ECX,EBX
// 0060c088: LEA EBX,[EBP + 0x8]
//   Label: LAB_0060c088
//   XREF to: Stack[0x4] (DATA)
// 0060c08b: PUSH EBX
// 0060c08c: PUSH ECX
// 0060c08d: CALL crt_math.c_set_math_errno_FUN_0060befa
//   Label: LAB_0060c08d
//   XREF to: 0060befa (UNCONDITIONAL_CALL)
// 0060c092: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0060c095: MOV dword ptr [EBP + -0x8],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 0060c098: ADD ESP,0x8
// 0060c09b: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x10] (READ)
// 0060c09e: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0060c0a1: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0xc] (READ)
// 0060c0a4: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0060c0a7: MOV EBX,dword ptr [EBP + -0x14]
//   Label: LAB_0060c0a7
//   XREF to: Stack[-0x18] (READ)
// 0060c0aa: MOV dword ptr [EBP + -0xc],EBX
//   XREF to: Stack[-0x10] (WRITE)
// 0060c0ad: MOV EBX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 0060c0b0: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x10] (READ)
// 0060c0b3: MOV EDX,EBX
// 0060c0b5: LEA ESP,[EBP + -0x4]
//   XREF to: Stack[-0x8] (DATA)
// 0060c0b8: POP EBX
// 0060c0b9: POP EBP
// 0060c0ba: RET
