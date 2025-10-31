// Name: core_event.cpp_FUN_004aa270
// Address: 004aa270
// Address Range: [[004aa270, 004aa29c]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004aa270()
// Globals:
//   undefined1 DAT_02d0a460
//   undefined1 DAT_02d0a461
//   undefined1 DAT_02d0a462
//   undefined1 DAT_02d0a463

#include "nocturne.h"

undefined4 core_event_cpp_FUN_004aa270(void)

{
  char cVar1;
  char *pcVar2;
  char *in_stack_0000000c;
  
  pcVar2 = &DAT_02d0a460;
  do {
    cVar1 = *in_stack_0000000c;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
    cVar1 = in_stack_0000000c[1];
    in_stack_0000000c = in_stack_0000000c + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  return 0xffffffff;
}


// Assembly code:
// 004aa270: PUSH ESI
//   Label: core_event.cpp_FUN_004aa270
// 004aa271: PUSH EDI
// 004aa272: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 004aa276: MOV EDI,0x2d0a460
//   XREF to: 02d0a460 (DATA)
// 004aa27b: PUSH EDI
//   XREF to: 02d0a460 (DATA)
// 004aa27c: MOV AL,byte ptr [ESI]
//   Label: LAB_004aa27c
// 004aa27e: MOV byte ptr [EDI],AL
//   XREF to: 02d0a460 (WRITE)
//   XREF to: 02d0a462 (WRITE)
// 004aa280: CMP AL,0x0
// 004aa282: JZ 0x004aa294
//   XREF to: 004aa294 (CONDITIONAL_JUMP)
// 004aa284: MOV AL,byte ptr [ESI + 0x1]
// 004aa287: ADD ESI,0x2
// 004aa28a: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02d0a461 (WRITE)
//   XREF to: 02d0a463 (WRITE)
// 004aa28d: ADD EDI,0x2
// 004aa290: CMP AL,0x0
// 004aa292: JNZ 0x004aa27c
//   XREF to: 004aa27c (CONDITIONAL_JUMP)
// 004aa294: POP EDI
//   Label: LAB_004aa294
// 004aa295: MOV EAX,0xffffffff
// 004aa29a: POP EDI
// 004aa29b: POP ESI
// 004aa29c: RET
