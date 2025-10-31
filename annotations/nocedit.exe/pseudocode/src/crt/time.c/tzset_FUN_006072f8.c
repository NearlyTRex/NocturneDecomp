// Name: crt_time.c_tzset_FUN_006072f8
// Address: 006072f8
// Address Range: [[006071fc, 006072f5] [006072f8, 00607316]]
// Convention: __cdecl
// Signature: void crt_time.c_tzset_FUN_006072f8(void)
// Cross-references:
//   crt_time.c_localtime_r_FUN_00600230 (00600230) at 00600236 [UNCONDITIONAL_CALL]
//   crt_time.c_mktime_FUN_00600f80 (00600f80) at 0060109b [UNCONDITIONAL_CALL]
//   crt_time.c_strftime_FUN_006002d4 (006002d4) at 006006a3 [UNCONDITIONAL_CALL]
// Globals:
//   GetTimeZoneInformation* PTR_GetTimeZoneInformation_006115c4 = 00211fb0
//   TerminatedCString s_TZ_00659058
//   TerminatedCString s_EST_006850bc
//   undefined4 DAT_0068513c
//   TerminatedCString s_EDT_0068513d
//   undefined4 DAT_006851bd
//   int g_TimezoneOffset = 0x4650
//   int g_DaylightSavingActive = 0x1
//   int g_DaylightSavingOffset = 0xe10
//   byte g_TimezoneInitFlags = 0x1
// Function calls:
//   crt_env.c_getenv_FUN_006013f0
//   crt_string.c_wcstombs_FUN_0060c0c0
//   crt_time.c_parse_tz_string_FUN_0060756c
//   GetTimeZoneInformation

#include "nocturne.h"

void __cdecl crt_time_c_tzset_FUN_006072f8(void)

{
  DWORD DVar1;
  int iVar2;
  char *tz_string;
  int unaff_EBX;
  BADSPACEBASE *in_ESP;
  int in_stack_ffffff58;
  wchar_t awStack_a4 [40];
  int iStack_54;
  wchar_t awStack_4c [34];
  LONG LStack_8;
  
  LStack_8 = 0x607302;
  tz_string = crt_env_c_getenv_FUN_006013f0("TZ");
  if (tz_string != (char *)0x0) {
    crt_time_c_parse_tz_string_FUN_0060756c(tz_string);
    return;
  }
  if (((g_TimezoneInitFlags & 1) == 0) || ((g_TimezoneInitFlags & 2) == 0)) {
    g_TimezoneInitFlags = g_TimezoneInitFlags | 2;
    DVar1 = (*PTR_GetTimeZoneInformation_006115c4)((LPTIME_ZONE_INFORMATION)&stack0xffffff50);
    if (DVar1 != 0) {
      if (DVar1 < 2) {
        g_DaylightSavingActive = 0;
      }
      else {
        if (DVar1 != 2) {
          return;
        }
        g_DaylightSavingActive = 1;
        g_DaylightSavingOffset = unaff_EBX * -0x3c;
      }
      g_TimezoneOffset = (iStack_54 + in_stack_ffffff58) * 0x3c;
      iVar2 = crt_string_c_wcstombs_FUN_0060c0c0("EST",awStack_a4,0x80);
      if (iVar2 == -1) {
        "EST"[0] = '\0';
      }
      else {
        DAT_0068513c = 0;
      }
      iVar2 = crt_string_c_wcstombs_FUN_0060c0c0("EDT",awStack_4c,0x80);
      if (iVar2 == -1) {
        "EDT"[0] = '\0';
      }
      else {
        DAT_006851bd = 0;
      }
    }
  }
  return;
}


// Assembly code:
// 006071fc: PUSH EBX
//   Label: LAB_006071fc
// 006071fd: PUSH ESI
// 006071fe: SUB ESP,0xac
// 00607204: MOV AH,byte ptr [0x006851d4]
//   XREF to: 006851d4 (READ)
// 0060720a: TEST AH,0x1
// 0060720d: JZ 0x00607218
//   XREF to: 00607218 (CONDITIONAL_JUMP)
// 0060720f: TEST AH,0x2
// 00607212: JNZ 0x006072ed
//   XREF to: 006072ed (CONDITIONAL_JUMP)
// 00607218: MOV DH,byte ptr [0x006851d4]
//   Label: LAB_00607218
//   XREF to: 006851d4 (READ)
// 0060721e: MOV EAX,ESP
// 00607220: OR DH,0x2
// 00607223: PUSH EAX
// 00607224: MOV byte ptr [0x006851d4],DH
//   XREF to: 006851d4 (WRITE)
// 0060722a: CALL dword ptr CS:[0x6115c4]
//   XREF to: EXTERNAL:0000007c (COMPUTED_CALL)
//   XREF to: 006115c4 (READ)
// 00607231: CMP EAX,0x1
// 00607234: JC 0x006072ed
//   XREF to: 006072ed (CONDITIONAL_JUMP)
// 0060723a: JBE 0x00607271
//   XREF to: 00607271 (CONDITIONAL_JUMP)
// 0060723c: CMP EAX,0x2
// 0060723f: JNZ 0x006072ed
//   XREF to: 006072ed (CONDITIONAL_JUMP)
// 00607245: MOV dword ptr [0x006851cc],0x1
//   XREF to: 006851cc (WRITE)
// 0060724f: MOV EDX,dword ptr [ESP + 0xa8]
// 00607256: MOV EAX,EDX
// 00607258: SHL EAX,0x4
// 0060725b: SUB EAX,EDX
// 0060725d: SHL EAX,0x2
// 00607260: MOV EBX,EAX
// 00607262: MOV [0x006851d0],EAX
//   XREF to: 006851d0 (WRITE)
// 00607267: NEG EBX
// 00607269: MOV dword ptr [0x006851d0],EBX
//   XREF to: 006851d0 (WRITE)
// 0060726f: JMP 0x00607279
//   XREF to: 00607279 (UNCONDITIONAL_JUMP)
// 00607271: XOR ECX,ECX
//   Label: LAB_00607271
// 00607273: MOV dword ptr [0x006851cc],ECX
//   XREF to: 006851cc (WRITE)
// 00607279: MOV EDX,dword ptr [ESP + 0x54]
//   Label: LAB_00607279
// 0060727d: MOV ESI,dword ptr [ESP]
// 00607280: ADD EDX,ESI
// 00607282: MOV EAX,EDX
// 00607284: SHL EAX,0x4
// 00607287: SUB EAX,EDX
// 00607289: SHL EAX,0x2
// 0060728c: PUSH 0x80
// 00607291: MOV [0x006851c8],EAX
//   XREF to: 006851c8 (WRITE)
// 00607296: LEA EAX,[ESP + 0x8]
// 0060729a: PUSH EAX
// 0060729b: PUSH 0x6850bc
//   XREF to: 006850bc (DATA)
// 006072a0: CALL crt_string.c_wcstombs_FUN_0060c0c0
//   XREF to: 0060c0c0 (UNCONDITIONAL_CALL)
// 006072a5: ADD ESP,0xc
// 006072a8: CMP EAX,-0x1
// 006072ab: JNZ 0x006072b7
//   XREF to: 006072b7 (CONDITIONAL_JUMP)
// 006072ad: XOR BH,BH
// 006072af: MOV byte ptr [0x006850bc],BH
//   XREF to: 006850bc (WRITE)
// 006072b5: JMP 0x006072bf
//   XREF to: 006072bf (UNCONDITIONAL_JUMP)
// 006072b7: XOR BL,BL
//   Label: LAB_006072b7
// 006072b9: MOV byte ptr [0x0068513c],BL
//   XREF to: 0068513c (WRITE)
// 006072bf: PUSH 0x80
//   Label: LAB_006072bf
// 006072c4: LEA EAX,[ESP + 0x5c]
// 006072c8: PUSH EAX
// 006072c9: PUSH 0x68513d
//   XREF to: 0068513d (DATA)
// 006072ce: CALL crt_string.c_wcstombs_FUN_0060c0c0
//   XREF to: 0060c0c0 (UNCONDITIONAL_CALL)
// 006072d3: ADD ESP,0xc
// 006072d6: CMP EAX,-0x1
// 006072d9: JNZ 0x006072e5
//   XREF to: 006072e5 (CONDITIONAL_JUMP)
// 006072db: XOR CH,CH
// 006072dd: MOV byte ptr [0x0068513d],CH
//   XREF to: 0068513d (WRITE)
// 006072e3: JMP 0x006072ed
//   XREF to: 006072ed (UNCONDITIONAL_JUMP)
// 006072e5: XOR CL,CL
//   Label: LAB_006072e5
// 006072e7: MOV byte ptr [0x006851bd],CL
//   XREF to: 006851bd (WRITE)
// 006072ed: ADD ESP,0xac
//   Label: LAB_006072ed
// 006072f3: POP ESI
// 006072f4: POP EBX
// 006072f5: RET
// 006072f8: PUSH 0x659058
//   Label: crt_time.c_tzset_FUN_006072f8
//   XREF to: 00659058 (DATA)
// 006072fd: CALL crt_env.c_getenv_FUN_006013f0
//   XREF to: 006013f0 (UNCONDITIONAL_CALL)
// 00607302: ADD ESP,0x4
// 00607305: TEST EAX,EAX
// 00607307: JZ 0x006071fc
//   XREF to: 006071fc (CONDITIONAL_JUMP)
// 0060730d: PUSH EAX
// 0060730e: CALL crt_time.c_parse_tz_string_FUN_0060756c
//   XREF to: 0060756c (UNCONDITIONAL_CALL)
// 00607313: ADD ESP,0x4
// 00607316: RET
