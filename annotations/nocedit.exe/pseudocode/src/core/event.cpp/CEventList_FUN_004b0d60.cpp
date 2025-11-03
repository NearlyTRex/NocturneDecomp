// Name: core_event.cpp_CEventList_FUN_004b0d60
// Address: 004b0d60
// Address Range: [[004b0d60, 004b0dad]]
// Convention: __cdecl
// Signature: int core_event.cpp_CEventList_FUN_004b0d60(CEventList * this_ptr)
// Cross-references:
//   core_event.cpp_CEventList_FUN_004b0c40 (004b0c40) at 004b0c54 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_setSfxHandle_FUN_004b0c80 (004b0c80) at 004b0c97 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_FUN_004b0d60(CEventList *this_ptr)

{
  int iVar1;
  int iVar2;
  CEvent *str1;
  char *in_stack_00000008;
  
  iVar2 = 0;
  if (0 < this_ptr[1].event_count) {
    str1 = this_ptr[1].event_list + 4;
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0((char *)str1,in_stack_00000008);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x120;
    } while (iVar2 < this_ptr[1].event_count);
  }
  return -1;
}


// Assembly code:
// 004b0d60: PUSH EBX
//   Label: core_event.cpp_CEventList_FUN_004b0d60
// 004b0d61: PUSH ESI
// 004b0d62: PUSH EDI
// 004b0d63: PUSH EBP
// 004b0d64: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004b0d68: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004b0d6c: MOV EDX,dword ptr [EDI + 0x3ac8]
// 004b0d72: XOR EBX,EBX
// 004b0d74: TEST EDX,EDX
// 004b0d76: JLE 0x004b0d9d
//   XREF to: 004b0d9d (CONDITIONAL_JUMP)
// 004b0d78: LEA ESI,[EDI + 0x3ad0]
// 004b0d7e: PUSH EBP
//   Label: LAB_004b0d7e
// 004b0d7f: PUSH ESI
// 004b0d80: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b0d85: ADD ESP,0x8
// 004b0d88: TEST EAX,EAX
// 004b0d8a: JZ 0x004b0da7
//   XREF to: 004b0da7 (CONDITIONAL_JUMP)
// 004b0d8c: INC EBX
// 004b0d8d: MOV ECX,dword ptr [EDI + 0x3ac8]
// 004b0d93: ADD ESI,0x120
// 004b0d99: CMP EBX,ECX
// 004b0d9b: JL 0x004b0d7e
//   XREF to: 004b0d7e (CONDITIONAL_JUMP)
// 004b0d9d: MOV EAX,0xffffffff
//   Label: LAB_004b0d9d
// 004b0da2: POP EBP
// 004b0da3: POP EDI
// 004b0da4: POP ESI
// 004b0da5: POP EBX
// 004b0da6: RET
// 004b0da7: MOV EAX,EBX
//   Label: LAB_004b0da7
// 004b0da9: POP EBP
// 004b0daa: POP EDI
// 004b0dab: POP ESI
// 004b0dac: POP EBX
// 004b0dad: RET
