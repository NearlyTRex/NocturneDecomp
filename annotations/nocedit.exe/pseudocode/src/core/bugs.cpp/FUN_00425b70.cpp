// Name: core_bugs.cpp_FUN_00425b70
// Address: 00425b70
// Address Range: [[00425b70, 00425cbc]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00425b70()
// Cross-references:
//   core_bugs.cpp_FUN_00426420 (00426420) at 0042649b [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0065b5c8
// Function calls:
//   core_bugs.cpp_FUN_00427ba0
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_bugs.cpp_FUN_00425b70(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

undefined4
core_bugs_cpp_FUN_00425b70
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
          undefined4 param_6,float param_7)

{
  undefined4 uVar1;
  float10 fVar2;
  double value;
  
  fVar2 = ((float10)param_7 - (float10)*(float *)(param_5 + 0x199f0)) *
          ((float10)1 / (float10)_DAT_0065b5c8);
  value = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(param_2,param_1));
  crt_math_c_round_FUN_005fe6b0(value);
  if ((-1 < (int)ROUND(fVar2)) && ((int)ROUND(fVar2) < 0xb)) {
    core_bugs_cpp_FUN_00427ba0();
    core_bugs_cpp_FUN_00427ba0();
    uVar1 = core_bugs_cpp_FUN_00427ba0();
    return uVar1;
  }
  uVar1 = core_bugs_cpp_FUN_00427ba0();
  return uVar1;
}


// Assembly code:
// 00425b70: PUSH EBX
//   Label: core_bugs.cpp_FUN_00425b70
// 00425b71: PUSH ESI
// 00425b72: SUB ESP,0x14
// 00425b75: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00425b79: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00425b7d: FSUB float ptr [ESI + 0x199ec]
// 00425b83: FLD1
// 00425b85: FDIV float ptr [0x0065b5c8]
//   XREF to: 0065b5c8 (READ)
// 00425b8b: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 00425b8f: FSUB float ptr [ESI + 0x199f0]
// 00425b95: FXCH ST2
// 00425b97: FMUL ST1
// 00425b99: FXCH ST2
// 00425b9b: FMULP
// 00425b9d: FXCH
// 00425b9f: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (WRITE)
// 00425ba3: FST float ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (WRITE)
// 00425ba7: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00425bab: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00425bb0: FXCH
// 00425bb2: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00425bb7: FXCH
// 00425bb9: FISTP dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x10] (WRITE)
// 00425bbd: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x10] (READ)
// 00425bc1: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (WRITE)
// 00425bc5: TEST EDX,EDX
// 00425bc7: JL 0x00425c2b
//   XREF to: 00425c2b (CONDITIONAL_JUMP)
// 00425bc9: CMP EDX,0xb
// 00425bcc: JGE 0x00425c33
//   XREF to: 00425c33 (CONDITIONAL_JUMP)
// 00425bce: LEA EBX,[EDX + 0x1]
// 00425bd1: MOV EDX,dword ptr [ESP + 0xc]
//   Label: LAB_00425bd1
//   XREF to: Stack[-0x10] (READ)
// 00425bd5: LEA EAX,[EDX*0x4 + 0x0]
// 00425bdc: SUB EAX,EDX
// 00425bde: MOV EDX,EAX
// 00425be0: LEA EAX,[EBX*0x4 + 0x0]
// 00425be7: SUB EAX,EBX
// 00425be9: SHL EDX,0x4
// 00425bec: SHL EAX,0x4
// 00425bef: LEA EBX,[ESI + EDX*0x1]
// 00425bf2: ADD ESI,EAX
// 00425bf4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 00425bf8: TEST EAX,EAX
// 00425bfa: JL 0x00425c3e
//   XREF to: 00425c3e (CONDITIONAL_JUMP)
// 00425bfc: CMP EAX,0xb
// 00425bff: JL 0x00425c4c
//   XREF to: 00425c4c (CONDITIONAL_JUMP)
// 00425c01: PUSH dword ptr [ESI + 0x128e4]
// 00425c07: PUSH dword ptr [EBX + 0x128e4]
// 00425c0d: CALL core_bugs.cpp_FUN_00427ba0
//   Label: LAB_00425c0d
//   XREF to: 00427ba0 (UNCONDITIONAL_CALL)
// 00425c12: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00425c16: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0xc] (READ)
// 00425c1a: ADD ESP,0x8
// 00425c1d: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (WRITE)
// 00425c21: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 00425c25: ADD ESP,0x14
// 00425c28: POP ESI
// 00425c29: POP EBX
// 00425c2a: RET
// 00425c2b: XOR EBX,EBX
//   Label: LAB_00425c2b
// 00425c2d: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x10] (WRITE)
// 00425c31: JMP 0x00425bd1
//   XREF to: 00425bd1 (UNCONDITIONAL_JUMP)
// 00425c33: MOV EBX,0xb
//   Label: LAB_00425c33
// 00425c38: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x10] (WRITE)
// 00425c3c: JMP 0x00425bd1
//   XREF to: 00425bd1 (UNCONDITIONAL_JUMP)
// 00425c3e: PUSH dword ptr [ESI + 0x128b8]
//   Label: LAB_00425c3e
// 00425c44: PUSH dword ptr [EBX + 0x128b8]
// 00425c4a: JMP 0x00425c0d
//   XREF to: 00425c0d (UNCONDITIONAL_JUMP)
// 00425c4c: PUSH EDI
//   Label: LAB_00425c4c
// 00425c4d: MOV EDI,EAX
// 00425c4f: SHL EAX,0x2
// 00425c52: LEA EDX,[ESI + EAX*0x1]
// 00425c55: PUSH dword ptr [EDX + 0x128b8]
// 00425c5b: PUSH dword ptr [EBX + EAX*0x1 + 0x128b8]
// 00425c62: CALL core_bugs.cpp_FUN_00427ba0
//   XREF to: 00427ba0 (UNCONDITIONAL_CALL)
// 00425c67: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00425c6b: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xc] (READ)
// 00425c6f: ADD ESP,0x8
// 00425c72: PUSH dword ptr [ESI + EDI*0x4 + 0x128bc]
// 00425c79: PUSH dword ptr [EBX + EDI*0x4 + 0x128bc]
// 00425c80: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 00425c84: CALL core_bugs.cpp_FUN_00427ba0
//   XREF to: 00427ba0 (UNCONDITIONAL_CALL)
// 00425c89: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00425c8d: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xc] (READ)
// 00425c91: ADD ESP,0x8
// 00425c94: SUB ESP,0x4
// 00425c97: FSTP float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00425c9a: PUSH dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 00425c9e: CALL core_bugs.cpp_FUN_00427ba0
//   XREF to: 00427ba0 (UNCONDITIONAL_CALL)
// 00425ca3: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00425ca7: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xc] (READ)
// 00425cab: ADD ESP,0x8
// 00425cae: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 00425cb2: POP EDI
// 00425cb3: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 00425cb7: ADD ESP,0x14
// 00425cba: POP ESI
// 00425cbb: POP EBX
// 00425cbc: RET
