// Name: crt_math.c_process_math_error_FUN_0060bf2d
// Address: 0060bf2d
// Address Range: [[0060bf2d, 0060c02a]]
// Convention: __cdecl
// Signature: double crt_math.c_process_math_error_FUN_0060bf2d(int errorFlags, double * value1, double * value2)
// Cross-references:
//   crt_math.c_set_math_errno_FUN_0060befa (0060befa) at 0060bf09 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00606832 (00606832) at 006068a6 [UNCONDITIONAL_CALL]
// Globals:
//   double g_PositiveInfinity = +Infinity
//   undefined4 g_PositiveInfinity+4
//   char*[24] g_MathFunctionNames
// Function calls:
//   crt_math.c_report_math_error_FUN_0060e2e5

#include "nocturne.h"

double __cdecl
crt_math_c_process_math_error_FUN_0060bf2d(int errorFlags,double *value1,double *value2)

{
  int unaff_EBX;
  BADSPACEBASE *in_ESP;
  double dVar1;
  MathErrorContext local_3c;
  
  local_3c.inputValue1._0_4_ = *(undefined4 *)value1;
  local_3c.inputValue1._4_4_ = *(undefined4 *)((int)value1 + 4);
  local_3c.inputValue2._0_4_ = *(undefined4 *)value2;
  local_3c.inputValue2._4_4_ = *(undefined4 *)((int)value2 + 4);
  if ((errorFlags & 0x40U) == 0) {
    if ((errorFlags & 0x80U) == 0) {
      if ((errorFlags & 0x100U) == 0) {
        if ((errorFlags & 0x800U) == 0) {
          if ((errorFlags & 0x200U) == 0) {
            if ((errorFlags & 0x400U) != 0) {
              unaff_EBX = 5;
            }
          }
          else {
            unaff_EBX = 6;
          }
        }
        else {
          unaff_EBX = 4;
        }
      }
      else {
        unaff_EBX = 3;
      }
    }
    else {
      unaff_EBX = 2;
    }
  }
  else {
    unaff_EBX = 1;
  }
  local_3c.errorData = g_MathFunctionNames[errorFlags & 0x1f];
  if ((errorFlags & 0x1000U) == 0) {
    if ((errorFlags & 0x2000U) == 0) {
      if ((errorFlags & 0x4000U) == 0) {
        local_3c.resultValue = g_PositiveInfinity;
        if ((errorFlags & 0x8000U) == 0) {
          local_3c.resultValue = *value2;
        }
      }
      else {
        local_3c.resultValue = 1.0;
      }
    }
    else {
      local_3c.resultValue = 0.0;
    }
  }
  else {
    local_3c.resultValue = -g_PositiveInfinity;
  }
  local_3c.errorType = unaff_EBX;
  dVar1 = crt_math_c_report_math_error_FUN_0060e2e5(&local_3c);
  return dVar1;
}


// Assembly code:
// 0060bf2d: PUSH EBP
//   Label: crt_math.c_process_math_error_FUN_0060bf2d
// 0060bf2e: MOV EBP,ESP
// 0060bf30: PUSH EBX
// 0060bf31: PUSH ESI
// 0060bf32: SUB ESP,0x30
// 0060bf35: MOV EDX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060bf38: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0060bf3b: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0060bf3e: MOV EAX,dword ptr [ESI]
// 0060bf40: MOV dword ptr [EBP + -0x30],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0060bf43: MOV EAX,dword ptr [ESI + 0x4]
// 0060bf46: MOV dword ptr [EBP + -0x2c],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0060bf49: MOV EAX,dword ptr [ECX]
// 0060bf4b: MOV dword ptr [EBP + -0x28],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0060bf4e: MOV EAX,dword ptr [ECX + 0x4]
// 0060bf51: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0060bf54: TEST DL,0x40
// 0060bf57: JZ 0x0060bf60
//   XREF to: 0060bf60 (CONDITIONAL_JUMP)
// 0060bf59: MOV EBX,0x1
// 0060bf5e: JMP 0x0060bf9a
//   XREF to: 0060bf9a (UNCONDITIONAL_JUMP)
// 0060bf60: TEST DL,0x80
//   Label: LAB_0060bf60
// 0060bf63: JZ 0x0060bf6c
//   XREF to: 0060bf6c (CONDITIONAL_JUMP)
// 0060bf65: MOV EBX,0x2
// 0060bf6a: JMP 0x0060bf9a
//   XREF to: 0060bf9a (UNCONDITIONAL_JUMP)
// 0060bf6c: TEST DH,0x1
//   Label: LAB_0060bf6c
// 0060bf6f: JZ 0x0060bf78
//   XREF to: 0060bf78 (CONDITIONAL_JUMP)
// 0060bf71: MOV EBX,0x3
// 0060bf76: JMP 0x0060bf9a
//   XREF to: 0060bf9a (UNCONDITIONAL_JUMP)
// 0060bf78: TEST DH,0x8
//   Label: LAB_0060bf78
// 0060bf7b: JZ 0x0060bf84
//   XREF to: 0060bf84 (CONDITIONAL_JUMP)
// 0060bf7d: MOV EBX,0x4
// 0060bf82: JMP 0x0060bf9a
//   XREF to: 0060bf9a (UNCONDITIONAL_JUMP)
// 0060bf84: TEST DH,0x2
//   Label: LAB_0060bf84
// 0060bf87: JZ 0x0060bf90
//   XREF to: 0060bf90 (CONDITIONAL_JUMP)
// 0060bf89: MOV EBX,0x6
// 0060bf8e: JMP 0x0060bf9a
//   XREF to: 0060bf9a (UNCONDITIONAL_JUMP)
// 0060bf90: TEST DH,0x4
//   Label: LAB_0060bf90
// 0060bf93: JZ 0x0060bf9a
//   XREF to: 0060bf9a (CONDITIONAL_JUMP)
// 0060bf95: MOV EBX,0x5
// 0060bf9a: MOV EAX,EDX
//   Label: LAB_0060bf9a
// 0060bf9c: AND EAX,0x1f
// 0060bf9f: MOV EAX,dword ptr [EAX*0x4 + 0x68548c]
//   XREF to: 0068548c (DATA)
// 0060bfa6: MOV dword ptr [EBP + -0x38],EBX
//   XREF to: Stack[-0x3c] (WRITE)
// 0060bfa9: MOV dword ptr [EBP + -0x34],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0060bfac: TEST DH,0x10
// 0060bfaf: JZ 0x0060bfbe
//   XREF to: 0060bfbe (CONDITIONAL_JUMP)
// 0060bfb1: FLD double ptr [0x00665f30]
//   XREF to: 00665f30 (READ)
// 0060bfb7: FCHS
// 0060bfb9: FSTP double ptr [EBP + -0x20]
//   XREF to: Stack[-0x24] (WRITE)
// 0060bfbc: JMP 0x0060c000
//   XREF to: 0060c000 (UNCONDITIONAL_JUMP)
// 0060bfbe: TEST DH,0x20
//   Label: LAB_0060bfbe
// 0060bfc1: JZ 0x0060bfcd
//   XREF to: 0060bfcd (CONDITIONAL_JUMP)
// 0060bfc3: XOR ECX,ECX
// 0060bfc5: MOV dword ptr [EBP + -0x20],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 0060bfc8: MOV dword ptr [EBP + -0x1c],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0060bfcb: JMP 0x0060c000
//   XREF to: 0060c000 (UNCONDITIONAL_JUMP)
// 0060bfcd: TEST DH,0x40
//   Label: LAB_0060bfcd
// 0060bfd0: JZ 0x0060bfe1
//   XREF to: 0060bfe1 (CONDITIONAL_JUMP)
// 0060bfd2: XOR EDX,EDX
// 0060bfd4: MOV EBX,0x3ff00000
// 0060bfd9: MOV dword ptr [EBP + -0x20],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0060bfdc: MOV dword ptr [EBP + -0x1c],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0060bfdf: JMP 0x0060c000
//   XREF to: 0060c000 (UNCONDITIONAL_JUMP)
// 0060bfe1: TEST DH,0x80
//   Label: LAB_0060bfe1
// 0060bfe4: JZ 0x0060bff5
//   XREF to: 0060bff5 (CONDITIONAL_JUMP)
// 0060bfe6: MOV EAX,[0x00665f30]
//   XREF to: 00665f30 (READ)
// 0060bfeb: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0060bfee: MOV EAX,[0x00665f34]
//   XREF to: 00665f34 (READ)
// 0060bff3: JMP 0x0060bffd
//   XREF to: 0060bffd (UNCONDITIONAL_JUMP)
// 0060bff5: MOV EAX,dword ptr [ECX]
//   Label: LAB_0060bff5
// 0060bff7: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0060bffa: MOV EAX,dword ptr [ECX + 0x4]
// 0060bffd: MOV dword ptr [EBP + -0x1c],EAX
//   Label: LAB_0060bffd
//   XREF to: Stack[-0x20] (WRITE)
// 0060c000: LEA EAX,[EBP + -0x38]
//   Label: LAB_0060c000
//   XREF to: Stack[-0x3c] (DATA)
// 0060c003: PUSH EAX
// 0060c004: CALL crt_math.c_report_math_error_FUN_0060e2e5
//   XREF to: 0060e2e5 (UNCONDITIONAL_CALL)
// 0060c009: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0060c00c: MOV dword ptr [EBP + -0x14],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0060c00f: ADD ESP,0x4
// 0060c012: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x1c] (READ)
// 0060c015: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0060c018: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x18] (READ)
// 0060c01b: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0060c01e: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 0060c021: MOV EDX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x10] (READ)
// 0060c024: LEA ESP,[EBP + -0x8]
//   XREF to: Stack[-0xc] (DATA)
// 0060c027: POP ESI
// 0060c028: POP EBX
// 0060c029: POP EBP
// 0060c02a: RET
