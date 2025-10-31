// Name: crt_time.c_get_local_time_FUN_00607150
// Address: 00607150
// Address Range: [[00607150, 006071b4]]
// Convention: __watcallStack
// Signature: void crt_time.c_get_local_time_FUN_00607150(tm * tm_output)
// Cross-references:
//   crt_time.c_time_with_rounding_FUN_006001f0 (006001f0) at 006001fb [UNCONDITIONAL_CALL]
// Globals:
//   GetLocalTime* PTR_GetLocalTime_006115a8 = 00211f32
// Function calls:
//   GetLocalTime

#include "nocturne.h"

void __watcallStack crt_time_c_get_local_time_FUN_00607150(tm *tm_output)

{
  uint unaff_EBX;
  BADSPACEBASE *in_ESP;
  ushort unaff_retaddr;
  _SYSTEMTIME _Stack_14;
  
  (*PTR_GetLocalTime_006115a8)(&_Stack_14);
  tm_output->tm_year = _Stack_14.wHour - 0x76c;
  tm_output->tm_mon = _Stack_14.wMinute - 1;
  tm_output->tm_mday = (uint)_Stack_14.wMilliseconds;
  tm_output->tm_hour = unaff_EBX & 0xffff;
  tm_output->tm_min = unaff_EBX >> 0x10;
  tm_output->tm_isdst = -1;
  tm_output->tm_sec = (uint)unaff_retaddr;
  return;
}


// Assembly code:
// 00607150: PUSH EBX
//   Label: crt_time.c_get_local_time_FUN_00607150
// 00607151: SUB ESP,0x10
// 00607154: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00607158: MOV EAX,ESP
// 0060715a: PUSH EAX
// 0060715b: CALL dword ptr CS:[0x6115a8]
//   XREF to: EXTERNAL:00000075 (COMPUTED_CALL)
//   XREF to: 006115a8 (READ)
// 00607162: XOR EAX,EAX
// 00607164: MOV AX,word ptr [ESP]
// 00607168: SUB EAX,0x76c
// 0060716d: MOV dword ptr [EBX + 0x14],EAX
// 00607170: XOR EAX,EAX
// 00607172: MOV AX,word ptr [ESP + 0x2]
// 00607177: DEC EAX
// 00607178: MOV dword ptr [EBX + 0x10],EAX
// 0060717b: XOR EAX,EAX
// 0060717d: MOV AX,word ptr [ESP + 0x6]
// 00607182: MOV dword ptr [EBX + 0xc],EAX
// 00607185: XOR EAX,EAX
// 00607187: MOV AX,word ptr [ESP + 0x8]
// 0060718c: MOV dword ptr [EBX + 0x8],EAX
// 0060718f: XOR EAX,EAX
// 00607191: MOV AX,word ptr [ESP + 0xa]
// 00607196: MOV dword ptr [EBX + 0x4],EAX
// 00607199: XOR EAX,EAX
// 0060719b: MOV AX,word ptr [ESP + 0xc]
// 006071a0: MOV dword ptr [EBX + 0x20],0xffffffff
// 006071a7: MOV dword ptr [EBX],EAX
// 006071a9: XOR EAX,EAX
// 006071ab: MOV AX,word ptr [ESP + 0xe]
// 006071b0: ADD ESP,0x10
// 006071b3: POP EBX
// 006071b4: RET
