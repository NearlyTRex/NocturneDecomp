// Name: engine_colquant.c_FUN_00441790
// Address: 00441790
// Address Range: [[00441790, 004417d6]]
// Convention: unknown
// Signature: undefined engine_colquant.c_FUN_00441790()
// Cross-references:
//   engine_colquant.c_FUN_00441260 (00441260) at 00441526 [UNCONDITIONAL_CALL]

#include "nocturne.h"

undefined8 engine_colquant_c_FUN_00441790(void)

{
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 local_18;
  
  if ((double)CONCAT44(in_stack_00000008,in_stack_00000004) <=
      (double)CONCAT44(in_stack_00000010,in_stack_0000000c)) {
    local_18 = in_stack_0000000c;
    in_stack_00000008 = in_stack_00000010;
  }
  else {
    local_18 = in_stack_00000004;
  }
  return CONCAT44(in_stack_00000008,local_18);
}


// Assembly code:
// 00441790: PUSH EBP
//   Label: engine_colquant.c_FUN_00441790
// 00441791: MOV EBP,ESP
// 00441793: SUB ESP,0x10
// 00441796: AND ESP,0xfffffff8
// 00441799: FLD double ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0044179c: FCOMP double ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0044179f: FNSTSW AX
// 004417a1: SAHF
// 004417a2: JBE 0x004417cc
//   XREF to: 004417cc (CONDITIONAL_JUMP)
// 004417a4: MOV EAX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004417a7: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 004417aa: MOV EAX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004417ad: MOV dword ptr [ESP + 0x4],EAX
//   Label: LAB_004417ad
//   XREF to: Stack[-0x14] (WRITE)
// 004417b1: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004417b4: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 004417b8: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 004417bc: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 004417c0: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (READ)
// 004417c4: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xc] (READ)
// 004417c8: MOV ESP,EBP
// 004417ca: POP EBP
// 004417cb: RET
// 004417cc: MOV EAX,dword ptr [EBP + 0x10]
//   Label: LAB_004417cc
//   XREF to: Stack[0xc] (READ)
// 004417cf: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 004417d2: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 004417d5: JMP 0x004417ad
//   XREF to: 004417ad (UNCONDITIONAL_JUMP)
