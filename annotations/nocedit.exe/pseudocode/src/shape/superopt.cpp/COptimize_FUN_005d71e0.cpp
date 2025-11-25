// Name: shape_superopt.cpp_COptimize_FUN_005d71e0
// Address: 005d71e0
// Address Range: [[005d71e0, 005d7284]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_COptimize_FUN_005d71e0(COptimize * this_ptr)
// Cross-references:
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d7ccb [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Invalid_inputs_to_setGeo_00654572
//   TerminatedCString s_Unable_to_copy_object_fo_006545a0
//   TerminatedCString s_Unable_to_copy_merge_wit_006545c3
// Function calls:
//   shape_superopt.cpp_CObj_FUN_005d2650
//   shape_superopt.cpp_CObj_FUN_005d2720
//   shape_superopt.cpp_logToFile_FUN_005c7910

#include "nocturne.h"

int __cdecl shape_superopt_cpp_COptimize_FUN_005d71e0(COptimize *this_ptr)

{
  int iVar1;
  CObj *this_ptr_00;
  ulonglong uVar2;
  int in_stack_00000008;
  uint in_stack_0000000c;
  
  if ((in_stack_00000008 != 0) && (in_stack_0000000c != 0)) {
    iVar1 = shape_superopt_cpp_CObj_FUN_005d2650(&this_ptr->base);
    if (iVar1 == 0) {
      shape_superopt_cpp_logToFile_FUN_005c7910("Unable to copy object for optimize");
      return 0;
    }
    iVar1 = 1;
    if (1 < in_stack_0000000c) {
      this_ptr_00 = (CObj *)(in_stack_0000000c + 0x1c);
      do {
        uVar2 = shape_superopt_cpp_CObj_FUN_005d2720(this_ptr_00);
        if ((int)uVar2 == 0) {
          shape_superopt_cpp_logToFile_FUN_005c7910("Unable to copy merge with object %d for optimize",iVar1);
          return 0;
        }
        this_ptr_00 = this_ptr_00 + 1;
        iVar1 = iVar1 + 1;
      } while (this_ptr_00 < (CObj *)(in_stack_0000000c * 0x1d));
    }
    return 1;
  }
  shape_superopt_cpp_logToFile_FUN_005c7910("Invalid inputs to setGeometry");
  return 0;
}


// Assembly code:
// 005d71e0: PUSH EBX
//   Label: shape_superopt.cpp_COptimize_FUN_005d71e0
// 005d71e1: PUSH ESI
// 005d71e2: PUSH EDI
// 005d71e3: PUSH EBP
// 005d71e4: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d71e8: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d71ec: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d71f0: TEST EDX,EDX
// 005d71f2: JZ 0x005d7248
//   XREF to: 005d7248 (CONDITIONAL_JUMP)
// 005d71f4: TEST EDI,EDI
// 005d71f6: JZ 0x005d7248
//   XREF to: 005d7248 (CONDITIONAL_JUMP)
// 005d71f8: PUSH EDX
// 005d71f9: PUSH EBP
// 005d71fa: CALL shape_superopt.cpp_CObj_FUN_005d2650
//   XREF to: 005d2650 (UNCONDITIONAL_CALL)
// 005d71ff: ADD ESP,0x8
// 005d7202: TEST EAX,EAX
// 005d7204: JZ 0x005d725c
//   XREF to: 005d725c (CONDITIONAL_JUMP)
// 005d7206: MOV ESI,0x1
// 005d720b: CMP EDI,ESI
// 005d720d: JBE 0x005d723e
//   XREF to: 005d723e (CONDITIONAL_JUMP)
// 005d720f: SHL EDI,0x2
// 005d7212: LEA EAX,[EDI*0x8 + 0x0]
// 005d7219: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d721d: SUB EAX,EDI
// 005d721f: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d7223: ADD EBX,0x1c
// 005d7226: ADD EDI,EAX
// 005d7228: PUSH EBX
//   Label: LAB_005d7228
// 005d7229: PUSH EBP
// 005d722a: CALL shape_superopt.cpp_CObj_FUN_005d2720
//   XREF to: 005d2720 (UNCONDITIONAL_CALL)
// 005d722f: ADD ESP,0x8
// 005d7232: TEST EAX,EAX
// 005d7234: JZ 0x005d7270
//   XREF to: 005d7270 (CONDITIONAL_JUMP)
// 005d7236: ADD EBX,0x1c
// 005d7239: INC ESI
// 005d723a: CMP EBX,EDI
// 005d723c: JC 0x005d7228
//   XREF to: 005d7228 (CONDITIONAL_JUMP)
// 005d723e: MOV EAX,0x1
//   Label: LAB_005d723e
// 005d7243: POP EBP
// 005d7244: POP EDI
// 005d7245: POP ESI
// 005d7246: POP EBX
// 005d7247: RET
// 005d7248: PUSH 0x654572
//   Label: LAB_005d7248
//   XREF to: 00654572 (DATA)
// 005d724d: CALL shape_superopt.cpp_logToFile_FUN_005c7910
//   XREF to: 005c7910 (UNCONDITIONAL_CALL)
// 005d7252: ADD ESP,0x4
// 005d7255: XOR EAX,EAX
// 005d7257: POP EBP
// 005d7258: POP EDI
// 005d7259: POP ESI
// 005d725a: POP EBX
// 005d725b: RET
// 005d725c: PUSH 0x6545a0
//   Label: LAB_005d725c
//   XREF to: 006545a0 (DATA)
// 005d7261: CALL shape_superopt.cpp_logToFile_FUN_005c7910
//   XREF to: 005c7910 (UNCONDITIONAL_CALL)
// 005d7266: ADD ESP,0x4
// 005d7269: XOR EAX,EAX
// 005d726b: POP EBP
// 005d726c: POP EDI
// 005d726d: POP ESI
// 005d726e: POP EBX
// 005d726f: RET
// 005d7270: PUSH ESI
//   Label: LAB_005d7270
// 005d7271: PUSH 0x6545c3
//   XREF to: 006545c3 (DATA)
// 005d7276: CALL shape_superopt.cpp_logToFile_FUN_005c7910
//   XREF to: 005c7910 (UNCONDITIONAL_CALL)
// 005d727b: ADD ESP,0x8
// 005d727e: XOR EAX,EAX
// 005d7280: POP EBP
// 005d7281: POP EDI
// 005d7282: POP ESI
// 005d7283: POP EBX
// 005d7284: RET
