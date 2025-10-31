// Name: core_trigger.cpp_CTrigger_FUN_005e0930
// Address: 005e0930
// Address Range: [[005e0930, 005e0977]]
// Convention: __cdecl
// Signature: int core_trigger.cpp_CTrigger_FUN_005e0930(CTrigger * this_ptr)

#include "nocturne.h"

int __cdecl core_trigger_cpp_CTrigger_FUN_005e0930(CTrigger *this_ptr)

{
  int *in_stack_00000008;
  
  if ((*in_stack_00000008 == 1) &&
     ((*(int *)(this_ptr->field1_0x158 + 0x1c) == 4 ||
      (*(int *)(this_ptr->field1_0x158 + 0x1c) == 7)))) {
    return 1;
  }
  if (((*in_stack_00000008 == 3) && (*(int *)(this_ptr->field1_0x158 + 0x1c) == 5)) &&
     (*(int *)(this_ptr->field1_0x158 + 0x19c) == in_stack_00000008[1])) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 005e0930: PUSH EBX
//   Label: core_trigger.cpp_CTrigger_FUN_005e0930
// 005e0931: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e0935: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005e0939: MOV ECX,dword ptr [EDX]
// 005e093b: CMP ECX,0x1
// 005e093e: JNZ 0x005e0950
//   XREF to: 005e0950 (CONDITIONAL_JUMP)
// 005e0940: MOV EBX,dword ptr [EAX + 0x174]
// 005e0946: CMP EBX,0x4
// 005e0949: JZ 0x005e0970
//   XREF to: 005e0970 (CONDITIONAL_JUMP)
// 005e094b: CMP EBX,0x7
// 005e094e: JZ 0x005e0970
//   XREF to: 005e0970 (CONDITIONAL_JUMP)
// 005e0950: CMP dword ptr [EDX],0x3
//   Label: LAB_005e0950
// 005e0953: JNZ 0x005e0974
//   XREF to: 005e0974 (CONDITIONAL_JUMP)
// 005e0955: CMP dword ptr [EAX + 0x174],0x5
// 005e095c: JNZ 0x005e0974
//   XREF to: 005e0974 (CONDITIONAL_JUMP)
// 005e095e: MOV ECX,dword ptr [EAX + 0x2f4]
// 005e0964: CMP ECX,dword ptr [EDX + 0x4]
// 005e0967: JNZ 0x005e0974
//   XREF to: 005e0974 (CONDITIONAL_JUMP)
// 005e0969: MOV EAX,0x1
// 005e096e: POP EBX
// 005e096f: RET
// 005e0970: MOV EAX,ECX
//   Label: LAB_005e0970
// 005e0972: POP EBX
// 005e0973: RET
// 005e0974: XOR EAX,EAX
//   Label: LAB_005e0974
// 005e0976: POP EBX
// 005e0977: RET
