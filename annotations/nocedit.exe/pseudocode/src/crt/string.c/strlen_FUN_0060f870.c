// Name: crt_string.c_strlen_FUN_0060f870
// Address: 0060f870
// Address Range: [[0060f870, 0060f888]]
// Convention: __cdecl
// Signature: int crt_string.c_strlen_FUN_0060f870(char * str)
// Cross-references:
//   crt_process.c_build_cmdline_FUN_00610258 (00610258) at 00610283 [UNCONDITIONAL_CALL]
//   crt_process.c_spawnvp_FUN_0060f39c (0060f39c) at 0060f4e2 [UNCONDITIONAL_CALL]
//   crt_process.c_spawnvp_with_path_search_FUN_0060e6a0 (0060e6a0) at 0060e73b [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl crt_string_c_strlen_FUN_0060f870(char *str)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *str;
    str = str + 1;
  } while (cVar1 != '\0');
  return ~uVar2 - 1;
}


// Assembly code:
// 0060f870: PUSH EDI
//   Label: crt_string.c_strlen_FUN_0060f870
// 0060f871: MOV EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060f875: PUSH ES
// 0060f876: MOV AX,DS
// 0060f878: MOV ES,AX
// 0060f87a: SUB ECX,ECX
// 0060f87c: DEC ECX
// 0060f87d: XOR EAX,EAX
// 0060f87f: SCASB.REPNE ES:EDI
// 0060f881: NOT ECX
// 0060f883: DEC ECX
// 0060f884: POP ES
// 0060f885: MOV EAX,ECX
// 0060f887: POP EDI
// 0060f888: RET
