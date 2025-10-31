// Name: crt_time.c_filetime_to_dos_datetime_FUN_00609cb0
// Address: 00609cb0
// Address Range: [[00609cb0, 00609cdd]]
// Convention: __cdecl
// Signature: void crt_time.c_filetime_to_dos_datetime_FUN_00609cb0(FILETIME * filetime, WORD * dos_date, WORD * dos_time)
// Cross-references:
//   crt_io.c_stat_FUN_00607e64 (00607e64) at 00608056 [UNCONDITIONAL_CALL]
// Globals:
//   FileTimeToDosDateTime* PTR_FileTimeToDosDateTime_0061153c = 00211d2e
//   FileTimeToLocalFileTime* PTR_FileTimeToLocalFileTime_00611540 = 00211d46
// Function calls:
//   FileTimeToDosDateTime
//   FileTimeToLocalFileTime

#include "nocturne.h"

void __cdecl
crt_time_c_filetime_to_dos_datetime_FUN_00609cb0(FILETIME *filetime,WORD *dos_date,WORD *dos_time)

{
  BADSPACEBASE *in_ESP;
  LPWORD in_stack_00000014;
  
  (*PTR_FileTimeToLocalFileTime_00611540)(filetime,(LPFILETIME)&stack0xfffffff4);
  (*PTR_FileTimeToDosDateTime_0061153c)((FILETIME *)&stack0x00000000,in_stack_00000014,dos_time);
  return;
}


// Assembly code:
// 00609cb0: PUSH EBX
//   Label: crt_time.c_filetime_to_dos_datetime_FUN_00609cb0
// 00609cb1: SUB ESP,0x8
// 00609cb4: MOV EAX,ESP
// 00609cb6: PUSH EAX
// 00609cb7: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00609cbb: PUSH EDX
// 00609cbc: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00609cc0: CALL dword ptr CS:[0x611540]
//   XREF to: EXTERNAL:0000005b (COMPUTED_CALL)
//   XREF to: 00611540 (READ)
// 00609cc7: PUSH EBX
// 00609cc8: MOV ECX,dword ptr [ESP + 0x18]
// 00609ccc: PUSH ECX
// 00609ccd: LEA EAX,[ESP + 0x8]
// 00609cd1: PUSH EAX
// 00609cd2: CALL dword ptr CS:[0x61153c]
//   XREF to: EXTERNAL:0000005a (COMPUTED_CALL)
//   XREF to: 0061153c (READ)
// 00609cd9: ADD ESP,0x8
// 00609cdc: POP EBX
// 00609cdd: RET
