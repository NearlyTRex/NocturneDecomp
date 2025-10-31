// Name: core_game.cpp_FUN_004d7fa0
// Address: 004d7fa0
// Address Range: [[004d7fa0, 004d8039]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004d7fa0()
// Globals:
//   double DOUBLE_0062b255 = 0.600000000000000
//   double DOUBLE_0062b25d = 0.350000000000000
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_2d.c_fillRectColor_FUN_00403170
//   engine_2d.c_fillRectWithBorder_FUN_00403200

#include "nocturne.h"

double core_game_cpp_FUN_004d7fa0(void)

{
  int iVar1;
  undefined4 extraout_EAX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int color;
  float10 fVar2;
  double dVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  float in_stack_00000014;
  float in_stack_00000018;
  
  color = 2;
  if (in_stack_00000014 < (float)DOUBLE_0062b255) {
    color = 0xfb;
  }
  if (in_stack_00000014 < (float)DOUBLE_0062b25d) {
    color = 1;
  }
  engine_2d_c_fillRectWithBorder_FUN_00403200
            (in_stack_00000004,in_stack_00000008,in_stack_0000000c,in_stack_00000010,0,0);
  iVar1 = (in_stack_00000010 - in_stack_00000004) + 1;
  fVar2 = (float10)iVar1 * (float10)in_stack_00000018;
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,iVar1));
  if ((int)ROUND(fVar2) < 1) {
    return dVar3;
  }
  engine_2d_c_fillRectColor_FUN_00403170
            (in_stack_00000004,in_stack_00000008,in_stack_00000004 + (int)ROUND(fVar2),
             (int)in_stack_00000018,color);
  return (double)CONCAT44(extraout_EDX_00,extraout_EAX);
}


// Assembly code:
// 004d7fa0: PUSH EBX
//   Label: core_game.cpp_FUN_004d7fa0
// 004d7fa1: PUSH ESI
// 004d7fa2: PUSH EDI
// 004d7fa3: PUSH EBP
// 004d7fa4: SUB ESP,0x8
// 004d7fa7: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 004d7fab: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[0x14] (READ)
// 004d7faf: MOV EBX,0x2
// 004d7fb4: FCOMP double ptr [0x0062b255]
//   XREF to: 0062b255 (READ)
// 004d7fba: FNSTSW AX
// 004d7fbc: SAHF
// 004d7fbd: JNC 0x004d7fc4
//   XREF to: 004d7fc4 (CONDITIONAL_JUMP)
// 004d7fbf: MOV EBX,0xfb
// 004d7fc4: FLD float ptr [ESP + 0x2c]
//   Label: LAB_004d7fc4
//   XREF to: Stack[0x14] (READ)
// 004d7fc8: FCOMP double ptr [0x0062b25d]
//   XREF to: 0062b25d (READ)
// 004d7fce: FNSTSW AX
// 004d7fd0: SAHF
// 004d7fd1: JNC 0x004d7fd8
//   XREF to: 004d7fd8 (CONDITIONAL_JUMP)
// 004d7fd3: MOV EBX,0x1
// 004d7fd8: PUSH 0x0
//   Label: LAB_004d7fd8
// 004d7fda: PUSH 0x0
// 004d7fdc: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x10] (READ)
// 004d7fe0: PUSH EDX
// 004d7fe1: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0xc] (READ)
// 004d7fe5: PUSH ECX
// 004d7fe6: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 004d7fea: PUSH EDI
// 004d7feb: PUSH ESI
// 004d7fec: CALL engine_2d.c_fillRectWithBorder_FUN_00403200
//   XREF to: 00403200 (UNCONDITIONAL_CALL)
// 004d7ff1: ADD ESP,0x18
// 004d7ff4: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 004d7ff8: SUB EAX,ESI
// 004d7ffa: INC EAX
// 004d7ffb: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d7fff: FILD dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 004d8003: FMUL float ptr [ESP + 0x2c]
//   XREF to: Stack[0x14] (READ)
// 004d8007: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004d800c: FISTP dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004d800f: MOV EBP,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004d8012: TEST EBP,EBP
// 004d8014: JG 0x004d801e
//   XREF to: 004d801e (CONDITIONAL_JUMP)
// 004d8016: ADD ESP,0x8
// 004d8019: POP EBP
// 004d801a: POP EDI
// 004d801b: POP ESI
// 004d801c: POP EBX
// 004d801d: RET
// 004d801e: PUSH EBX
//   Label: LAB_004d801e
// 004d801f: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x10] (READ)
// 004d8023: PUSH EAX
// 004d8024: LEA EAX,[ESI + EBP*0x1]
// 004d8027: PUSH EAX
// 004d8028: PUSH EDI
// 004d8029: PUSH ESI
// 004d802a: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 004d802f: ADD ESP,0x14
// 004d8032: ADD ESP,0x8
// 004d8035: POP EBP
// 004d8036: POP EDI
// 004d8037: POP ESI
// 004d8038: POP EBX
// 004d8039: RET
