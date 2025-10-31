// Name: crt_time.c_parse_dst_rule_FUN_00607464
// Address: 00607464
// Address Range: [[00607464, 00607569]]
// Convention: __cdecl
// Signature: char * crt_time.c_parse_dst_rule_FUN_00607464(char * rule_string, dst_rule * rule)
// Cross-references:
//   crt_time.c_parse_tz_string_FUN_0060756c (0060756c) at 0060761b [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_parse_uint_FUN_00607318

#include "nocturne.h"

char * __cdecl crt_time_c_parse_dst_rule_FUN_00607464(char *rule_string,dst_rule *rule)

{
  char *pcVar1;
  int unaff_EBX;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  int iVar2;
  int unaff_retaddr;
  int local_c;
  
  iVar2 = -1;
  if (*rule_string == 'J') {
    iVar2 = 1;
    rule_string = rule_string + 1;
  }
  if (*rule_string == 'M') {
    rule_string = rule_string + 1;
    iVar2 = 0;
  }
  rule[1].seconds = iVar2;
  pcVar1 = crt_string_c_parse_uint_FUN_00607318(rule_string,&local_c);
  if (iVar2 == 0) {
    rule->month = unaff_ESI + -1;
    if (*pcVar1 == '.') {
      pcVar1 = crt_string_c_parse_uint_FUN_00607318(pcVar1 + 1,(int *)&stack0xfffffff8);
      rule->day = unaff_EBX;
      if (*pcVar1 == '.') {
        pcVar1 = crt_string_c_parse_uint_FUN_00607318(pcVar1 + 1,(int *)&stack0xfffffffc);
        rule->day_of_year = unaff_retaddr;
      }
    }
    rule->rule_type = 0;
  }
  else {
    rule->rule_type = unaff_ESI;
  }
  local_c = 0;
  if (*pcVar1 == '/') {
    pcVar1 = crt_string_c_parse_uint_FUN_00607318(pcVar1 + 1,(int *)&stack0xfffffffc);
    if (*pcVar1 == ':') {
      pcVar1 = crt_string_c_parse_uint_FUN_00607318(pcVar1 + 1,(int *)&stack0xfffffff0);
      if (*pcVar1 == ':') {
        pcVar1 = crt_string_c_parse_uint_FUN_00607318(pcVar1 + 1,&local_c);
      }
    }
  }
  rule->seconds = local_c;
  rule->minutes = 0;
  rule->hours = 2;
  return pcVar1;
}


// Assembly code:
// 00607464: PUSH EBX
//   Label: crt_time.c_parse_dst_rule_FUN_00607464
// 00607465: PUSH ESI
// 00607466: SUB ESP,0x10
// 00607469: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0060746d: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00607471: MOV AH,byte ptr [EDX]
// 00607473: MOV ESI,0xffffffff
// 00607478: CMP AH,0x4a
// 0060747b: JNZ 0x00607484
//   XREF to: 00607484 (CONDITIONAL_JUMP)
// 0060747d: MOV ESI,0x1
// 00607482: ADD EDX,ESI
// 00607484: CMP byte ptr [EDX],0x4d
//   Label: LAB_00607484
// 00607487: JNZ 0x0060748c
//   XREF to: 0060748c (CONDITIONAL_JUMP)
// 00607489: INC EDX
// 0060748a: XOR ESI,ESI
// 0060748c: LEA EAX,[ESP + 0xc]
//   Label: LAB_0060748c
//   XREF to: Stack[-0xc] (DATA)
// 00607490: PUSH EAX
// 00607491: PUSH EDX
// 00607492: MOV dword ptr [EBX + 0x20],ESI
// 00607495: CALL crt_string.c_parse_uint_FUN_00607318
//   XREF to: 00607318 (UNCONDITIONAL_CALL)
// 0060749a: MOV ECX,EAX
// 0060749c: ADD ESP,0x8
// 0060749f: MOV EDX,EAX
// 006074a1: TEST ESI,ESI
// 006074a3: JZ 0x006074ae
//   XREF to: 006074ae (CONDITIONAL_JUMP)
// 006074a5: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xc] (READ)
// 006074a9: MOV dword ptr [EBX + 0x1c],EAX
// 006074ac: JMP 0x006074f9
//   XREF to: 006074f9 (UNCONDITIONAL_JUMP)
// 006074ae: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_006074ae
//   XREF to: Stack[-0xc] (READ)
// 006074b2: DEC EAX
// 006074b3: MOV dword ptr [EBX + 0x10],EAX
// 006074b6: CMP byte ptr [ECX],0x2e
// 006074b9: JNZ 0x006074f2
//   XREF to: 006074f2 (CONDITIONAL_JUMP)
// 006074bb: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xc] (DATA)
// 006074bf: PUSH EAX
// 006074c0: INC ECX
// 006074c1: PUSH ECX
// 006074c2: CALL crt_string.c_parse_uint_FUN_00607318
//   XREF to: 00607318 (UNCONDITIONAL_CALL)
// 006074c7: MOV ECX,EAX
// 006074c9: ADD ESP,0x8
// 006074cc: MOV EDX,EAX
// 006074ce: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xc] (READ)
// 006074d2: MOV dword ptr [EBX + 0xc],EAX
// 006074d5: CMP byte ptr [ECX],0x2e
// 006074d8: JNZ 0x006074f2
//   XREF to: 006074f2 (CONDITIONAL_JUMP)
// 006074da: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xc] (DATA)
// 006074de: PUSH EAX
// 006074df: INC ECX
// 006074e0: PUSH ECX
// 006074e1: CALL crt_string.c_parse_uint_FUN_00607318
//   XREF to: 00607318 (UNCONDITIONAL_CALL)
// 006074e6: ADD ESP,0x8
// 006074e9: MOV EDX,EAX
// 006074eb: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xc] (READ)
// 006074ef: MOV dword ptr [EBX + 0x18],EAX
// 006074f2: MOV dword ptr [EBX + 0x1c],0x0
//   Label: LAB_006074f2
// 006074f9: MOV ECX,0x2
//   Label: LAB_006074f9
// 006074fe: XOR ESI,ESI
// 00607500: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 00607504: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x18] (DATA)
// 00607507: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0060750b: CMP byte ptr [EDX],0x2f
// 0060750e: JNZ 0x0060754f
//   XREF to: 0060754f (CONDITIONAL_JUMP)
// 00607510: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x10] (DATA)
// 00607514: PUSH EAX
// 00607515: INC EDX
// 00607516: PUSH EDX
// 00607517: CALL crt_string.c_parse_uint_FUN_00607318
//   XREF to: 00607318 (UNCONDITIONAL_CALL)
// 0060751c: ADD ESP,0x8
// 0060751f: MOV CH,byte ptr [EAX]
// 00607521: MOV EDX,EAX
// 00607523: CMP CH,0x3a
// 00607526: JNZ 0x0060754f
//   XREF to: 0060754f (CONDITIONAL_JUMP)
// 00607528: LEA EDX,[ESP + 0x4]
//   XREF to: Stack[-0x14] (DATA)
// 0060752c: PUSH EDX
// 0060752d: INC EAX
// 0060752e: PUSH EAX
// 0060752f: CALL crt_string.c_parse_uint_FUN_00607318
//   XREF to: 00607318 (UNCONDITIONAL_CALL)
// 00607534: ADD ESP,0x8
// 00607537: MOV CL,byte ptr [EAX]
// 00607539: MOV EDX,EAX
// 0060753b: CMP CL,0x3a
// 0060753e: JNZ 0x0060754f
//   XREF to: 0060754f (CONDITIONAL_JUMP)
// 00607540: MOV EDX,ESP
// 00607542: PUSH EDX
// 00607543: INC EAX
// 00607544: PUSH EAX
// 00607545: CALL crt_string.c_parse_uint_FUN_00607318
//   XREF to: 00607318 (UNCONDITIONAL_CALL)
// 0060754a: ADD ESP,0x8
// 0060754d: MOV EDX,EAX
// 0060754f: MOV EAX,dword ptr [ESP]
//   Label: LAB_0060754f
//   XREF to: Stack[-0x18] (DATA)
// 00607552: MOV dword ptr [EBX],EAX
// 00607554: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00607558: MOV dword ptr [EBX + 0x4],EAX
// 0060755b: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (READ)
// 0060755f: MOV dword ptr [EBX + 0x8],EAX
// 00607562: MOV EAX,EDX
// 00607564: ADD ESP,0x10
// 00607567: POP ESI
// 00607568: POP EBX
// 00607569: RET
