// Name: core_event.cpp_CEventList_FUN_004b0950
// Address: 004b0950
// Address Range: [[004b0950, 004b099a]]
// Convention: __cdecl
// Signature: int core_event.cpp_CEventList_FUN_004b0950(CEventList * this_ptr)
// Cross-references:
//   core_event.cpp_CEventList_FUN_004b0830 (004b0830) at 004b083a [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_setCounter_FUN_004b0720 (004b0720) at 004b0732 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_FUN_004b0950(CEventList *this_ptr)

{
  int iVar1;
  int iVar2;
  char *str1;
  char *in_stack_00000008;
  
  iVar2 = 0;
  if (0 < this_ptr->counter_count) {
    str1 = this_ptr->field16_0x3380;
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,in_stack_00000008);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x20;
    } while (iVar2 < this_ptr->counter_count);
  }
  return -1;
}


// Assembly code:
// 004b0950: PUSH EBX
//   Label: core_event.cpp_CEventList_FUN_004b0950
// 004b0951: PUSH ESI
// 004b0952: PUSH EDI
// 004b0953: PUSH EBP
// 004b0954: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004b0958: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004b095c: MOV EDX,dword ptr [EDI + 0x337c]
// 004b0962: XOR EBX,EBX
// 004b0964: TEST EDX,EDX
// 004b0966: JLE 0x004b098a
//   XREF to: 004b098a (CONDITIONAL_JUMP)
// 004b0968: LEA ESI,[EDI + 0x3380]
// 004b096e: PUSH EBP
//   Label: LAB_004b096e
// 004b096f: PUSH ESI
// 004b0970: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b0975: ADD ESP,0x8
// 004b0978: TEST EAX,EAX
// 004b097a: JZ 0x004b0994
//   XREF to: 004b0994 (CONDITIONAL_JUMP)
// 004b097c: INC EBX
// 004b097d: MOV ECX,dword ptr [EDI + 0x337c]
// 004b0983: ADD ESI,0x20
// 004b0986: CMP EBX,ECX
// 004b0988: JL 0x004b096e
//   XREF to: 004b096e (CONDITIONAL_JUMP)
// 004b098a: MOV EAX,0xffffffff
//   Label: LAB_004b098a
// 004b098f: POP EBP
// 004b0990: POP EDI
// 004b0991: POP ESI
// 004b0992: POP EBX
// 004b0993: RET
// 004b0994: MOV EAX,EBX
//   Label: LAB_004b0994
// 004b0996: POP EBP
// 004b0997: POP EDI
// 004b0998: POP ESI
// 004b0999: POP EBX
// 004b099a: RET
