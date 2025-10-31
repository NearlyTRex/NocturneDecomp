// Name: shape_design.c_calculateSamplingWeight_FUN_0046adc0
// Address: 0046adc0
// Address Range: [[0046adc0, 0046ae1c]]
// Convention: __cdecl
// Signature: double shape_design.c_calculateSamplingWeight_FUN_0046adc0(double current_pos, double start_coord, double end_coord)
// Cross-references:
//   shape_design.c_sampleAndFilterPixel_FUN_0046ae20 (0046ae20) at 0046af2c [UNCONDITIONAL_CALL]

#include "nocturne.h"

double __cdecl
shape_design_c_calculateSamplingWeight_FUN_0046adc0
          (double current_pos,double start_coord,double end_coord)

{
  undefined4 in_stack_00000004;
  undefined8 local_18;
  
  local_18 = (double)CONCAT44(end_coord._0_4_,start_coord._4_4_) -
             (double)CONCAT44(current_pos._0_4_,in_stack_00000004);
  if (1.0 < local_18) {
    local_18 = 1.0;
  }
  if ((double)CONCAT44(current_pos._0_4_,in_stack_00000004) <
      (double)CONCAT44(start_coord._0_4_,current_pos._4_4_)) {
    local_18 = ((double)CONCAT44(start_coord._0_4_,current_pos._4_4_) -
               (double)CONCAT44(current_pos._0_4_,in_stack_00000004)) * local_18;
  }
  return local_18;
}


// Assembly code:
// 0046adc0: PUSH EBX
//   Label: shape_design.c_calculateSamplingWeight_FUN_0046adc0
// 0046adc1: PUSH ESI
// 0046adc2: PUSH EDI
// 0046adc3: PUSH EBP
// 0046adc4: MOV EBP,ESP
// 0046adc6: SUB ESP,0x10
// 0046adcc: FLD double ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0046adcf: FSUB double ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046add2: FSTP double ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 0046add5: FLD1
// 0046add7: FCOMP double ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046adda: FNSTSW AX
// 0046addc: SAHF
// 0046addd: JNC 0x0046aded
//   XREF to: 0046aded (CONDITIONAL_JUMP)
// 0046addf: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 0046ade6: MOV dword ptr [EBP + -0x4],0x3ff00000
//   XREF to: Stack[-0x14] (WRITE)
// 0046aded: FLD double ptr [EBP + 0x1c]
//   Label: LAB_0046aded
//   XREF to: Stack[0xc] (READ)
// 0046adf0: FCOMP double ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046adf3: FNSTSW AX
// 0046adf5: SAHF
// 0046adf6: JBE 0x0046ae04
//   XREF to: 0046ae04 (CONDITIONAL_JUMP)
// 0046adf8: FLD double ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0046adfb: FSUB double ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046adfe: FMUL double ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046ae01: FSTP double ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 0046ae04: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0046ae04
//   XREF to: Stack[-0x18] (READ)
// 0046ae07: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0046ae0a: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046ae0d: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0046ae10: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046ae13: MOV EDX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046ae16: MOV ESP,EBP
// 0046ae18: POP EBP
// 0046ae19: POP EDI
// 0046ae1a: POP ESI
// 0046ae1b: POP EBX
// 0046ae1c: RET
