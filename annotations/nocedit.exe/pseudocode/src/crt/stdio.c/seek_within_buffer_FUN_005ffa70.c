// Name: crt_stdio.c_seek_within_buffer_FUN_005ffa70
// Address: 005ffab4
// Address Range: [[005ffab4, 005ffacb]]
// Convention: __cdecl
// Signature: int crt_stdio.c_seek_within_buffer_FUN_005ffa70(FILE * file)
// Cross-references:
//   crt_stdio.c_fseek_FUN_005ffacc (005ffacc) at 005ffbdf [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl crt_stdio_c_seek_within_buffer_FUN_005ffa70(FILE *file)

{
  char *pcVar1;
  
  *(byte *)&file->_flag = (byte)file->_flag & 0xef;
  pcVar1 = file->_link->__reserve_end;
  file->_cnt = 0;
  file->_ptr = pcVar1;
  return (int)file;
}


// Assembly code:
// 005ffab4: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_stdio.c_seek_within_buffer_FUN_005ffa70
//   XREF to: Stack[0x4] (READ)
// 005ffab8: AND byte ptr [EAX + 0xc],0xef
// 005ffabc: MOV EDX,dword ptr [EAX + 0x8]
// 005ffabf: MOV EDX,dword ptr [EDX + 0x8]
// 005ffac2: MOV dword ptr [EAX + 0x4],0x0
// 005ffac9: MOV dword ptr [EAX],EDX
// 005ffacb: RET
