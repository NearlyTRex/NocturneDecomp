// Name: core_event.cpp_CEventList_FUN_004b0860
// Address: 004b0860
// Address Range: [[004b0860, 004b08aa]]
// Convention: __cdecl
// Signature: int core_event.cpp_CEventList_FUN_004b0860(CEventList * this_ptr)
// Cross-references:
//   core_event.cpp_CEventList_FUN_004adc10 (004adc10) at 004adc5e [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004b0330 (004b0330) at 004b034a [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_FUN_004b0860(CEventList *this_ptr)

{
  int iVar1;
  int iVar2;
  CEvent *str1;
  char *in_stack_00000008;
  
  iVar2 = 0;
  if (0 < this_ptr->persistent_event_count) {
    str1 = this_ptr->persistent_event_list;
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0((char *)str1,in_stack_00000008);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x20;
    } while (iVar2 < this_ptr->persistent_event_count);
  }
  return -1;
}


// Assembly code:
// 004b0860: PUSH EBX
//   Label: core_event.cpp_CEventList_FUN_004b0860
// 004b0861: PUSH ESI
// 004b0862: PUSH EDI
// 004b0863: PUSH EBP
// 004b0864: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004b0868: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004b086c: MOV EDX,dword ptr [EDI + 0x258c]
// 004b0872: XOR EBX,EBX
// 004b0874: TEST EDX,EDX
// 004b0876: JLE 0x004b089a
//   XREF to: 004b089a (CONDITIONAL_JUMP)
// 004b0878: LEA ESI,[EDI + 0x2590]
// 004b087e: PUSH EBP
//   Label: LAB_004b087e
// 004b087f: PUSH ESI
// 004b0880: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b0885: ADD ESP,0x8
// 004b0888: TEST EAX,EAX
// 004b088a: JZ 0x004b08a4
//   XREF to: 004b08a4 (CONDITIONAL_JUMP)
// 004b088c: INC EBX
// 004b088d: MOV ECX,dword ptr [EDI + 0x258c]
// 004b0893: ADD ESI,0x20
// 004b0896: CMP EBX,ECX
// 004b0898: JL 0x004b087e
//   XREF to: 004b087e (CONDITIONAL_JUMP)
// 004b089a: MOV EAX,0xffffffff
//   Label: LAB_004b089a
// 004b089f: POP EBP
// 004b08a0: POP EDI
// 004b08a1: POP ESI
// 004b08a2: POP EBX
// 004b08a3: RET
// 004b08a4: MOV EAX,EBX
//   Label: LAB_004b08a4
// 004b08a6: POP EBP
// 004b08a7: POP EDI
// 004b08a8: POP ESI
// 004b08a9: POP EBX
// 004b08aa: RET
