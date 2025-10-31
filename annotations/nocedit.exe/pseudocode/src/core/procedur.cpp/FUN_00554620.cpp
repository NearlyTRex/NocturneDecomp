// Name: core_procedur.cpp_FUN_00554620
// Address: 00554620
// Address Range: [[00554620, 00554660]]
// Convention: unknown
// Signature: undefined core_procedur.cpp_FUN_00554620()
// Cross-references:
//   core_procedur.cpp_CreateProceduralWaterFrame_FUN_005542b0 (005542b0) at 005543e5 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_006409f8 = 128
//   double DOUBLE_00640a00 = 0.0625
//   float FLOAT_00640a08 = -128

#include "nocturne.h"

float core_procedur_cpp_FUN_00554620(void)

{
  float in_stack_00000008;
  float in_stack_0000000c;
  
  in_stack_00000008 =
       in_stack_0000000c * (float)DOUBLE_006409f8 * (float)DOUBLE_00640a00 + in_stack_00000008;
  if (in_stack_00000008 <= (float)DOUBLE_006409f8) {
    return in_stack_00000008;
  }
  return in_stack_00000008 + FLOAT_00640a08;
}


// Assembly code:
// 00554620: PUSH EBP
//   Label: core_procedur.cpp_FUN_00554620
// 00554621: MOV EBP,ESP
// 00554623: SUB ESP,0x4
// 00554626: AND ESP,0xfffffff8
// 00554629: FLD double ptr [0x006409f8]
//   XREF to: 006409f8 (READ)
// 0055462f: FLD float ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00554632: FMUL ST1
// 00554634: FMUL double ptr [0x00640a00]
//   XREF to: 00640a00 (READ)
// 0055463a: FADD float ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0055463d: FST float ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 00554640: FCOMPP
// 00554642: FNSTSW AX
// 00554644: SAHF
// 00554645: JA 0x0055464e
//   XREF to: 0055464e (CONDITIONAL_JUMP)
// 00554647: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 0055464a: MOV ESP,EBP
// 0055464c: POP EBP
// 0055464d: RET
// 0055464e: FLD float ptr [ESP]
//   Label: LAB_0055464e
//   XREF to: Stack[-0x8] (DATA)
// 00554651: FADD float ptr [0x00640a08]
//   XREF to: 00640a08 (READ)
// 00554657: FSTP float ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 0055465a: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 0055465d: MOV ESP,EBP
// 0055465f: POP EBP
// 00554660: RET
