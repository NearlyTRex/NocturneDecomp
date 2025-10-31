// Name: crt_time.c_dos_datetime_to_time_t_FUN_0060c1e0
// Address: 0060c1e0
// Address Range: [[0060c1e0, 0060c251]]
// Convention: __cdecl
// Signature: time_t crt_time.c_dos_datetime_to_time_t_FUN_0060c1e0(WORD dos_date, WORD dos_time)
// Cross-references:
//   crt_io.c_stat_FUN_00607e64 (00607e64) at 00608100 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_time.c_mktime_FUN_00600f80

#include "nocturne.h"

time_t __cdecl crt_time_c_dos_datetime_to_time_t_FUN_0060c1e0(WORD dos_date,WORD dos_time)

{
  time_t tVar1;
  BADSPACEBASE *in_ESP;
  tm local_28;
  
  local_28.tm_year = (dos_date >> 9) + 0x50;
  local_28.tm_mon = ((dos_date & 0x1e0) >> 5) - 1;
  local_28.tm_hour = (int)(dos_time >> 0xb);
  local_28.tm_min = (dos_time & 0x7e0) >> 5;
  local_28.tm_sec = (dos_time & 0x1f) * 2;
  local_28.tm_mday = dos_date & 0x1f;
  local_28.tm_isdst = -1;
  tVar1 = crt_time_c_mktime_FUN_00600f80(&local_28);
  return tVar1;
}


// Assembly code:
// 0060c1e0: PUSH EBX
//   Label: crt_time.c_dos_datetime_to_time_t_FUN_0060c1e0
// 0060c1e1: SUB ESP,0x24
// 0060c1e4: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0060c1e8: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 0060c1ec: MOV EAX,EBX
// 0060c1ee: AND EAX,0xfe00
// 0060c1f3: SHR EAX,0x9
// 0060c1f6: ADD EAX,0x50
// 0060c1f9: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0060c1fd: MOV EAX,EBX
// 0060c1ff: AND EAX,0x1e0
// 0060c204: SHR EAX,0x5
// 0060c207: DEC EAX
// 0060c208: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0060c20c: MOV EAX,EDX
// 0060c20e: AND EAX,0xf800
// 0060c213: SHR EAX,0xb
// 0060c216: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0060c21a: MOV EAX,EDX
// 0060c21c: AND EAX,0x7e0
// 0060c221: SHR EAX,0x5
// 0060c224: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0060c228: MOV EAX,EDX
// 0060c22a: AND EAX,0x1f
// 0060c22d: ADD EAX,EAX
// 0060c22f: AND EBX,0x1f
// 0060c232: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x28] (DATA)
// 0060c235: MOV EAX,ESP
// 0060c237: MOV EDX,0xffffffff
// 0060c23c: PUSH EAX
// 0060c23d: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0060c241: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x8] (WRITE)
// 0060c245: CALL crt_time.c_mktime_FUN_00600f80
//   XREF to: 00600f80 (UNCONDITIONAL_CALL)
// 0060c24a: ADD ESP,0x4
// 0060c24d: ADD ESP,0x24
// 0060c250: POP EBX
// 0060c251: RET
