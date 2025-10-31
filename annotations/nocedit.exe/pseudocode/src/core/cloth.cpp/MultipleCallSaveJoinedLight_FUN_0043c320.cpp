// Name: core_cloth.cpp_MultipleCallSaveJoinedLight_FUN_0043c320
// Address: 0043c320
// Address Range: [[0043c320, 0043c394]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_MultipleCallSaveJoinedLight_FUN_0043c320()
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_00429aa0 (00429aa0) at 00429b25 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_FUN_005c7590 (005c7590) at 005c761e [UNCONDITIONAL_CALL]
// Function calls:
//   core_cloth.cpp_CCloth_saveJoinedLight_FUN_0043b9f0
//   core_cloth.cpp_FUN_0043bae0

#include "nocturne.h"

/* Signature: undefined1 core_cloth.cpp_MultipleCallSaveJoinedLight(undefined4 param_1, undefined4
   param_2) */

int core_cloth_cpp_MultipleCallSaveJoinedLight_FUN_0043c320(int param_1)

{
  int *piVar1;
  int iVar2;
  int *in_stack_00000004;
  int in_stack_00000008;
  
  if ((in_stack_00000008 != 0) && (iVar2 = 0, piVar1 = in_stack_00000004, 0 < *in_stack_00000004)) {
    do {
      iVar2 = iVar2 + 1;
      core_cloth_cpp_CCloth_saveJoinedLight_FUN_0043b9f0((CCloth *)piVar1[0x65]);
      param_1 = *in_stack_00000004;
      piVar1 = piVar1 + 1;
    } while (iVar2 < param_1);
  }
  iVar2 = 0;
  if (0 < *in_stack_00000004) {
    do {
      iVar2 = iVar2 + 1;
      core_cloth_cpp_FUN_0043bae0(param_1);
      param_1 = *in_stack_00000004;
    } while (iVar2 < param_1);
  }
  return param_1;
}


// Assembly code:
// 0043c320: PUSH EBX
//   Label: core_cloth.cpp_MultipleCallSaveJoinedLight_FUN_0043c320
// 0043c321: PUSH ESI
// 0043c322: PUSH EDI
// 0043c323: PUSH EBP
// 0043c324: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0043c328: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0043c32c: TEST EBP,EBP
// 0043c32e: JZ 0x0043c360
//   XREF to: 0043c360 (CONDITIONAL_JUMP)
// 0043c330: MOV EDX,dword ptr [EDI]
// 0043c332: XOR ESI,ESI
// 0043c334: TEST EDX,EDX
// 0043c336: JLE 0x0043c360
//   XREF to: 0043c360 (CONDITIONAL_JUMP)
// 0043c338: MOV EBX,EDI
// 0043c33a: PUSH EBP
//   Label: LAB_0043c33a
// 0043c33b: MOV ECX,dword ptr [EBX + 0x194]
// 0043c341: PUSH ECX
// 0043c342: ADD EBX,0x4
// 0043c345: INC ESI
// 0043c346: CALL core_cloth.cpp_CCloth_saveJoinedLight_FUN_0043b9f0
//   XREF to: 0043b9f0 (UNCONDITIONAL_CALL)
// 0043c34b: MOV EAX,dword ptr [EDI]
// 0043c34d: ADD ESP,0x8
// 0043c350: CMP ESI,EAX
// 0043c352: JL 0x0043c33a
//   XREF to: 0043c33a (CONDITIONAL_JUMP)
// 0043c354: LEA EAX,[EAX]
// 0043c35a: LEA EDX,[EDX]
// 0043c360: MOV EDX,dword ptr [EDI]
//   Label: LAB_0043c360
// 0043c362: XOR ESI,ESI
// 0043c364: TEST EDX,EDX
// 0043c366: JLE 0x0043c390
//   XREF to: 0043c390 (CONDITIONAL_JUMP)
// 0043c368: MOV EBX,EDI
// 0043c36a: PUSH EBP
//   Label: LAB_0043c36a
// 0043c36b: MOV ECX,dword ptr [EBX + 0x194]
// 0043c371: PUSH ECX
// 0043c372: ADD EBX,0x4
// 0043c375: INC ESI
// 0043c376: CALL core_cloth.cpp_FUN_0043bae0
//   XREF to: 0043bae0 (UNCONDITIONAL_CALL)
// 0043c37b: MOV EAX,dword ptr [EDI]
// 0043c37d: ADD ESP,0x8
// 0043c380: CMP ESI,EAX
// 0043c382: JL 0x0043c36a
//   XREF to: 0043c36a (CONDITIONAL_JUMP)
// 0043c384: LEA EAX,[EAX]
// 0043c38a: LEA EDX,[EDX]
// 0043c390: POP EBP
//   Label: LAB_0043c390
// 0043c391: POP EDI
// 0043c392: POP ESI
// 0043c393: POP EBX
// 0043c394: RET
