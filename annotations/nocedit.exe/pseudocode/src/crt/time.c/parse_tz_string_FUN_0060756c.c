// Name: crt_time.c_parse_tz_string_FUN_0060756c
// Address: 0060756c
// Address Range: [[0060756c, 0060768a]]
// Convention: __cdecl
// Signature: void crt_time.c_parse_tz_string_FUN_0060756c(char * tz_string)
// Cross-references:
//   crt_time.c_tzset_FUN_006072f8 (006072f8) at 0060730e [UNCONDITIONAL_CALL]
// Globals:
//   dst_rule g_DstStartRule
//   int g_DstTransitionSecond = 0x0
//   int g_DstTransitionMinute = 0x0
//   int g_DstTransitionHour = 0x1
//   TerminatedCString s_EST_006850bc
//   TerminatedCString s_EDT_0068513d
//   int g_TimezoneOffset = 0x4650
//   int g_DaylightSavingActive = 0x1
//   int g_DaylightSavingOffset = 0xe10
// Function calls:
//   crt_time.c_parse_dst_rule_FUN_00607464
//   crt_time.c_parse_timezone_spec_FUN_00607348

#include "nocturne.h"

void __cdecl crt_time_c_parse_tz_string_FUN_0060756c(char *tz_string)

{
  char *pcVar1;
  BADSPACEBASE *in_ESP;
  int unaff_EDI;
  
  g_DaylightSavingActive = 0;
  pcVar1 = crt_time_c_parse_timezone_spec_FUN_00607348(tz_string,"EST",&g_TimezoneOffset);
  if (*pcVar1 == '\0') {
    "EDT"[0] = '\0';
  }
  else {
    g_DaylightSavingActive = 1;
    pcVar1 = crt_time_c_parse_timezone_spec_FUN_00607348
                       (pcVar1,"EDT",(int *)&stack0xfffffff0);
    g_DaylightSavingOffset = g_TimezoneOffset - unaff_EDI;
    if (*pcVar1 == ',') {
      pcVar1 = crt_time_c_parse_dst_rule_FUN_00607464(pcVar1 + 1,&g_DstStartRule);
    }
    if (*pcVar1 == ',') {
      crt_time_c_parse_dst_rule_FUN_00607464(pcVar1 + 1,(dst_rule *)&g_DstTransitionSecond);
      g_DstTransitionHour = g_DstTransitionHour - g_DaylightSavingOffset / 0xe10;
      g_DstTransitionMinute =
           g_DstTransitionMinute -
           (int)((longlong)
                 ((ulonglong)(uint)((int)((longlong)g_DaylightSavingOffset / 0x3c) >> 0x1f) << 0x20
                 | (longlong)g_DaylightSavingOffset / 0x3c & 0xffffffffU) % 0x3c);
      g_DstTransitionSecond = g_DstTransitionSecond - g_DaylightSavingOffset % 0x3c;
    }
  }
  return;
}


// Assembly code:
// 0060756c: PUSH EBX
//   Label: crt_time.c_parse_tz_string_FUN_0060756c
// 0060756d: PUSH ESI
// 0060756e: PUSH EDI
// 0060756f: PUSH EBP
// 00607570: SUB ESP,0x4
// 00607573: MOV ESI,dword ptr [0x006851d0]
//   XREF to: 006851d0 (READ)
// 00607579: PUSH 0x6851c8
//   XREF to: 006851c8 (DATA)
// 0060757e: PUSH 0x6850bc
//   XREF to: 006850bc (DATA)
// 00607583: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00607587: XOR EDX,EDX
// 00607589: PUSH EBX
// 0060758a: MOV dword ptr [0x006851cc],EDX
//   XREF to: 006851cc (WRITE)
// 00607590: CALL crt_time.c_parse_timezone_spec_FUN_00607348
//   XREF to: 00607348 (UNCONDITIONAL_CALL)
// 00607595: MOV EDX,EAX
// 00607597: MOV AH,byte ptr [EAX]
// 00607599: ADD ESP,0xc
// 0060759c: TEST AH,AH
// 0060759e: JNZ 0x006075b1
//   XREF to: 006075b1 (CONDITIONAL_JUMP)
// 006075a0: MOV ESI,dword ptr [0x006851d0]
//   XREF to: 006851d0 (READ)
// 006075a6: MOV byte ptr [0x0068513d],AH
//   XREF to: 0068513d (WRITE)
// 006075ac: JMP 0x0060767d
//   XREF to: 0060767d (UNCONDITIONAL_JUMP)
// 006075b1: MOV EAX,[0x006851c8]
//   Label: LAB_006075b1
//   XREF to: 006851c8 (READ)
// 006075b6: SUB EAX,0xe10
// 006075bb: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 006075be: MOV EAX,ESP
// 006075c0: PUSH EAX
// 006075c1: PUSH 0x68513d
//   XREF to: 0068513d (DATA)
// 006075c6: MOV ECX,0x1
// 006075cb: PUSH EDX
// 006075cc: MOV dword ptr [0x006851cc],ECX
//   XREF to: 006851cc (WRITE)
// 006075d2: CALL crt_time.c_parse_timezone_spec_FUN_00607348
//   XREF to: 00607348 (UNCONDITIONAL_CALL)
// 006075d7: ADD ESP,0xc
// 006075da: MOV EBX,dword ptr [0x006851c8]
//   XREF to: 006851c8 (READ)
// 006075e0: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 006075e3: SUB EBX,ESI
// 006075e5: MOV ESI,EBX
// 006075e7: MOV dword ptr [0x006851d0],EBX
//   XREF to: 006851d0 (WRITE)
// 006075ed: MOV BL,byte ptr [EAX]
// 006075ef: MOV EDX,EAX
// 006075f1: CMP BL,0x2c
// 006075f4: JNZ 0x00607607
//   XREF to: 00607607 (CONDITIONAL_JUMP)
// 006075f6: PUSH 0x685074
//   XREF to: 00685074 (DATA)
// 006075fb: INC EAX
// 006075fc: PUSH EAX
// 006075fd: CALL crt_time.c_parse_dst_rule_FUN_00607464
//   XREF to: 00607464 (UNCONDITIONAL_CALL)
// 00607602: ADD ESP,0x8
// 00607605: MOV EDX,EAX
// 00607607: MOV BH,byte ptr [EDX]
//   Label: LAB_00607607
// 00607609: MOV ESI,dword ptr [0x006851d0]
//   XREF to: 006851d0 (READ)
// 0060760f: CMP BH,0x2c
// 00607612: JNZ 0x0060767d
//   XREF to: 0060767d (CONDITIONAL_JUMP)
// 00607614: PUSH 0x685098
//   XREF to: 00685098 (DATA)
// 00607619: INC EDX
// 0060761a: PUSH EDX
// 0060761b: CALL crt_time.c_parse_dst_rule_FUN_00607464
//   XREF to: 00607464 (UNCONDITIONAL_CALL)
// 00607620: MOV ESI,dword ptr [0x006851d0]
//   XREF to: 006851d0 (READ)
// 00607626: MOV EBX,0xe10
// 0060762b: MOV EDX,ESI
// 0060762d: MOV EAX,ESI
// 0060762f: SAR EDX,0x1f
// 00607632: IDIV EBX
// 00607634: MOV EDI,dword ptr [0x006850a0]
//   XREF to: 006850a0 (READ)
// 0060763a: MOV EBX,0x3c
// 0060763f: MOV EDX,ESI
// 00607641: SUB EDI,EAX
// 00607643: MOV EAX,ESI
// 00607645: SAR EDX,0x1f
// 00607648: IDIV EBX
// 0060764a: MOV EDX,EAX
// 0060764c: SAR EDX,0x1f
// 0060764f: IDIV EBX
// 00607651: MOV EBP,dword ptr [0x0068509c]
//   XREF to: 0068509c (READ)
// 00607657: SUB EBP,EDX
// 00607659: MOV EDX,ESI
// 0060765b: MOV EAX,ESI
// 0060765d: SAR EDX,0x1f
// 00607660: IDIV EBX
// 00607662: ADD ESP,0x8
// 00607665: MOV EAX,[0x00685098]
//   XREF to: 00685098 (READ)
// 0060766a: MOV dword ptr [0x006850a0],EDI
//   XREF to: 006850a0 (WRITE)
// 00607670: SUB EAX,EDX
// 00607672: MOV dword ptr [0x0068509c],EBP
//   XREF to: 0068509c (WRITE)
// 00607678: MOV [0x00685098],EAX
//   XREF to: 00685098 (WRITE)
// 0060767d: MOV dword ptr [0x006851d0],ESI
//   Label: LAB_0060767d
//   XREF to: 006851d0 (WRITE)
// 00607683: ADD ESP,0x4
// 00607686: POP EBP
// 00607687: POP EDI
// 00607688: POP ESI
// 00607689: POP EBX
// 0060768a: RET
