// Name: support_trisock.cpp_formatIPAddress_FUN_005e17c0
// Address: 005e17c0
// Address Range: [[005e17c0, 005e17f0]]
// Convention: __cdecl
// Signature: void support_trisock.cpp_formatIPAddress_FUN_005e17c0(char * output_buffer, uchar * ip_bytes)
// Cross-references:
//   core_netgame.cpp_FUN_00541390 (00541390) at 00541704 [UNCONDITIONAL_CALL]
//   support_trisock.cpp_formatSocketAddress_FUN_005e1a30 (005e1a30) at 005e1a3c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_d_d_d_006564dc
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

void __cdecl support_trisock_cpp_formatIPAddress_FUN_005e17c0(char *output_buffer,uchar *ip_bytes)

{
  crt_stdio_c_sprintf_FUN_005fdbd0
            ((char *)ip_bytes,"%d.%d.%d.%d",(uint)(byte)*output_buffer,
             (uint)(byte)output_buffer[1],(uint)(byte)output_buffer[2],(uint)(byte)output_buffer[3])
  ;
  return;
}


// Assembly code:
// 005e17c0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: support_trisock.cpp_formatIPAddress_FUN_005e17c0
//   XREF to: Stack[0x4] (READ)
// 005e17c4: XOR EDX,EDX
// 005e17c6: MOV DL,byte ptr [EAX + 0x3]
// 005e17c9: PUSH EDX
// 005e17ca: XOR EDX,EDX
// 005e17cc: MOV DL,byte ptr [EAX + 0x2]
// 005e17cf: PUSH EDX
// 005e17d0: XOR EDX,EDX
// 005e17d2: MOV DL,byte ptr [EAX + 0x1]
// 005e17d5: PUSH EDX
// 005e17d6: MOV AL,byte ptr [EAX]
// 005e17d8: AND EAX,0xff
// 005e17dd: PUSH EAX
// 005e17de: PUSH 0x6564dc
//   XREF to: 006564dc (DATA)
// 005e17e3: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005e17e7: PUSH EDX
// 005e17e8: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005e17ed: ADD ESP,0x18
// 005e17f0: RET
