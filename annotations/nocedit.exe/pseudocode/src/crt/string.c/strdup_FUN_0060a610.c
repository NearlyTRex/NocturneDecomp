// Name: crt_string.c_strdup_FUN_0060a610
// Address: 0060a610
// Address Range: [[0060a610, 0060a65a]]
// Convention: __cdecl
// Signature: char * crt_string.c_strdup_FUN_0060a610(char * str)
// Cross-references:
//   crt_startup.c_initialize_runtime_FUN_0060245c (0060245c) at 00602556 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_malloc_FUN_00601bb0

#include "nocturne.h"

char * __cdecl crt_string_c_strdup_FUN_0060a610(char *str)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  uVar3 = 0xffffffff;
  pcVar2 = str;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar2 = (char *)crt_memory_c_malloc_FUN_00601bb0(uVar3);
  if (pcVar2 != (char *)0x0) {
    pcVar5 = pcVar2;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)str;
      str = str + (uint)bVar6 * -8 + 4;
      pcVar5 = pcVar5 + (uint)bVar6 * -8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *str;
      str = str + (uint)bVar6 * -2 + 1;
      pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
    }
  }
  return pcVar2;
}


// Assembly code:
// 0060a610: PUSH EBX
//   Label: crt_string.c_strdup_FUN_0060a610
// 0060a611: PUSH ESI
// 0060a612: PUSH EDI
// 0060a613: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0060a617: MOV EDI,ESI
// 0060a619: PUSH ES
// 0060a61a: MOV AX,DS
// 0060a61c: MOV ES,AX
// 0060a61e: SUB ECX,ECX
// 0060a620: DEC ECX
// 0060a621: XOR EAX,EAX
// 0060a623: SCASB.REPNE ES:EDI
// 0060a625: NOT ECX
// 0060a627: DEC ECX
// 0060a628: POP ES
// 0060a629: LEA EBX,[ECX + 0x1]
// 0060a62c: PUSH EBX
// 0060a62d: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 0060a632: ADD ESP,0x4
// 0060a635: MOV EDX,EAX
// 0060a637: TEST EAX,EAX
// 0060a639: JZ 0x0060a655
//   XREF to: 0060a655 (CONDITIONAL_JUMP)
// 0060a63b: MOV ECX,EBX
// 0060a63d: MOV EDI,EAX
// 0060a63f: PUSH ES
// 0060a640: MOV AX,DS
// 0060a642: MOV ES,AX
// 0060a644: PUSH EDI
// 0060a645: MOV EAX,ECX
// 0060a647: SHR ECX,0x2
// 0060a64a: MOVSD.REP ES:EDI,ESI
// 0060a64c: MOV CL,AL
// 0060a64e: AND CL,0x3
// 0060a651: MOVSB.REP ES:EDI,ESI
// 0060a653: POP EDI
// 0060a654: POP ES
// 0060a655: MOV EAX,EDX
//   Label: LAB_0060a655
// 0060a657: POP EDI
// 0060a658: POP ESI
// 0060a659: POP EBX
// 0060a65a: RET
