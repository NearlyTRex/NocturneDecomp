// Name: support_trisock.cpp_formatSocketAddress_FUN_005e1a30
// Address: 005e1a30
// Address Range: [[005e1a30, 005e1a7b]]
// Convention: __cdecl
// Signature: void support_trisock.cpp_formatSocketAddress_FUN_005e1a30(char * output_buffer, SNetworkAddr * network_addr)
// Globals:
//   TerminatedCString s_d_0065652e
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   support_trisock.cpp_formatIPAddress_FUN_005e17c0

#include "nocturne.h"

void __cdecl
support_trisock_cpp_formatSocketAddress_FUN_005e1a30(char *output_buffer,SNetworkAddr *network_addr)

{
  char cVar1;
  SNetworkAddr *buffer;
  
  support_trisock_cpp_formatIPAddress_FUN_005e17c0(output_buffer,(uchar *)network_addr);
  do {
    cVar1 = (char)network_addr->ip_address;
    buffer = network_addr;
    if (cVar1 == '\0') goto LAB_005e1a70;
    if (cVar1 == '\0') break;
    buffer = (SNetworkAddr *)((int)&network_addr->ip_address + 1);
    cVar1 = (char)buffer->ip_address;
    if (cVar1 == '\0') goto LAB_005e1a70;
    network_addr = (SNetworkAddr *)((int)&network_addr->ip_address + 2);
  } while (cVar1 != '\0');
  buffer = (SNetworkAddr *)0x0;
LAB_005e1a70:
  crt_stdio_c_sprintf_FUN_005fdbd0((char *)buffer,":%d",(uint)*(ushort *)(output_buffer + 4))
  ;
  return;
}


// Assembly code:
// 005e1a30: PUSH EBX
//   Label: support_trisock.cpp_formatSocketAddress_FUN_005e1a30
// 005e1a31: PUSH ESI
// 005e1a32: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005e1a36: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005e1a3a: PUSH EBX
// 005e1a3b: PUSH ESI
// 005e1a3c: CALL support_trisock.cpp_formatIPAddress_FUN_005e17c0
//   XREF to: 005e17c0 (UNCONDITIONAL_CALL)
// 005e1a41: ADD ESP,0x8
// 005e1a44: MOV SI,word ptr [ESI + 0x4]
// 005e1a48: AND ESI,0xffff
// 005e1a4e: PUSH ESI
// 005e1a4f: PUSH 0x65652e
//   XREF to: 0065652e (DATA)
// 005e1a54: XOR DL,DL
// 005e1a56: MOV ESI,EBX
// 005e1a58: MOV AL,byte ptr [ESI]
//   Label: LAB_005e1a58
// 005e1a5a: CMP AL,DL
// 005e1a5c: JZ 0x005e1a70
//   XREF to: 005e1a70 (CONDITIONAL_JUMP)
// 005e1a5e: CMP AL,0x0
// 005e1a60: JZ 0x005e1a6e
//   XREF to: 005e1a6e (CONDITIONAL_JUMP)
// 005e1a62: INC ESI
// 005e1a63: MOV AL,byte ptr [ESI]
// 005e1a65: CMP AL,DL
// 005e1a67: JZ 0x005e1a70
//   XREF to: 005e1a70 (CONDITIONAL_JUMP)
// 005e1a69: INC ESI
// 005e1a6a: CMP AL,0x0
// 005e1a6c: JNZ 0x005e1a58
//   XREF to: 005e1a58 (CONDITIONAL_JUMP)
// 005e1a6e: SUB ESI,ESI
//   Label: LAB_005e1a6e
// 005e1a70: PUSH ESI
//   Label: LAB_005e1a70
// 005e1a71: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005e1a76: ADD ESP,0xc
// 005e1a79: POP ESI
// 005e1a7a: POP EBX
// 005e1a7b: RET
