// Name: crt_time.c_localtime_r_FUN_00600230
// Address: 00600230
// Address Range: [[00600230, 00600285]]
// Convention: __cdecl
// Signature: tm * crt_time.c_localtime_r_FUN_00600230(time_t * timer, tm * result)
// Cross-references:
//   crt_time.c_localtime_FUN_00600288 (00600288) at 00600297 [UNCONDITIONAL_CALL]
// Globals:
//   int g_TimezoneOffset = 0x4650
//   int g_DaylightSavingOffset = 0xe10
// Function calls:
//   crt_time.c_determine_dst_status_FUN_006079b4
//   crt_time.c_gmtime_r_FUN_00607690
//   crt_time.c_tzset_FUN_006072f8

#include "nocturne.h"

tm * __cdecl crt_time_c_localtime_r_FUN_00600230(time_t *timer,tm *result)

{
  int iVar1;
  int iVar2;
  
  crt_time_c_tzset_FUN_006072f8();
  iVar1 = result->tm_sec;
  crt_time_c_gmtime_r_FUN_00607690(0x63df,iVar1,g_TimezoneOffset,result);
  iVar2 = crt_time_c_determine_dst_status_FUN_006079b4(result);
  if (iVar2 != 0) {
    crt_time_c_gmtime_r_FUN_00607690(0x63df,iVar1,g_TimezoneOffset - g_DaylightSavingOffset);
  }
  return result;
}


// Assembly code:
// 00600230: PUSH EBX
//   Label: crt_time.c_localtime_r_FUN_00600230
// 00600231: PUSH ESI
// 00600232: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00600236: CALL crt_time.c_tzset_FUN_006072f8
//   XREF to: 006072f8 (UNCONDITIONAL_CALL)
// 0060023b: PUSH EBX
// 0060023c: MOV EDX,dword ptr [0x006851c8]
//   XREF to: 006851c8 (READ)
// 00600242: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00600246: PUSH EDX
// 00600247: MOV ESI,dword ptr [ESI]
// 00600249: PUSH ESI
// 0060024a: PUSH 0x63df
// 0060024f: CALL crt_time.c_gmtime_r_FUN_00607690
//   XREF to: 00607690 (UNCONDITIONAL_CALL)
// 00600254: ADD ESP,0x10
// 00600257: PUSH EBX
// 00600258: CALL crt_time.c_determine_dst_status_FUN_006079b4
//   XREF to: 006079b4 (UNCONDITIONAL_CALL)
// 0060025d: ADD ESP,0x4
// 00600260: TEST EAX,EAX
// 00600262: JZ 0x00600281
//   XREF to: 00600281 (CONDITIONAL_JUMP)
// 00600264: MOV EAX,[0x006851c8]
//   XREF to: 006851c8 (READ)
// 00600269: MOV ECX,dword ptr [0x006851d0]
//   XREF to: 006851d0 (READ)
// 0060026f: PUSH EBX
// 00600270: SUB EAX,ECX
// 00600272: PUSH EAX
// 00600273: PUSH ESI
// 00600274: PUSH 0x63df
// 00600279: CALL crt_time.c_gmtime_r_FUN_00607690
//   XREF to: 00607690 (UNCONDITIONAL_CALL)
// 0060027e: ADD ESP,0x10
// 00600281: MOV EAX,EBX
//   Label: LAB_00600281
// 00600283: POP ESI
// 00600284: POP EBX
// 00600285: RET
