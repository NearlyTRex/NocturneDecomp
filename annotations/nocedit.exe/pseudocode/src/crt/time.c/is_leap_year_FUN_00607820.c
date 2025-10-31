// Name: crt_time.c_is_leap_year_FUN_00607820
// Address: 00607820
// Address Range: [[00607820, 00607857]]
// Convention: __cdecl
// Signature: int crt_time.c_is_leap_year_FUN_00607820(int year)
// Cross-references:
//   crt_time.c_determine_dst_status_FUN_006079b4 (006079b4) at 00607a14 [UNCONDITIONAL_CALL]
//   crt_time.c_gmtime_r_FUN_00607690 (00607690) at 00607748 [UNCONDITIONAL_CALL]
//   crt_time.c_mktime_FUN_00600f80 (00600f80) at 00600feb [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00607858 (00607858) at 00607879 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl crt_time_c_is_leap_year_FUN_00607820(int year)

{
  if ((year & 3U) == 0) {
    if ((int)((ulonglong)(uint)year % 100) != 0) {
      return 1;
    }
    if ((int)(((ulonglong)(uint)year % 100 << 0x20 | (ulonglong)(uint)year) % 400) == 0) {
      return 1;
    }
  }
  return 0;
}


// Assembly code:
// 00607820: PUSH EBX
//   Label: crt_time.c_is_leap_year_FUN_00607820
// 00607821: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00607825: TEST BL,0x3
// 00607828: JNZ 0x00607854
//   XREF to: 00607854 (CONDITIONAL_JUMP)
// 0060782a: MOV ECX,0x64
// 0060782f: MOV EAX,EBX
// 00607831: XOR EDX,EDX
// 00607833: DIV ECX
// 00607835: TEST EDX,EDX
// 00607837: JZ 0x00607840
//   XREF to: 00607840 (CONDITIONAL_JUMP)
// 00607839: MOV EAX,0x1
// 0060783e: POP EBX
// 0060783f: RET
// 00607840: MOV ECX,0x190
//   Label: LAB_00607840
// 00607845: MOV EAX,EBX
// 00607847: DIV ECX
// 00607849: TEST EDX,EDX
// 0060784b: JNZ 0x00607854
//   XREF to: 00607854 (CONDITIONAL_JUMP)
// 0060784d: MOV EAX,0x1
// 00607852: POP EBX
// 00607853: RET
// 00607854: XOR EAX,EAX
//   Label: LAB_00607854
// 00607856: POP EBX
// 00607857: RET
