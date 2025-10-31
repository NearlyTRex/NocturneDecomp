// Name: crt_time.c_parse_timezone_spec_FUN_00607348
// Address: 00607348
// Address Range: [[00607348, 00607462]]
// Convention: __cdecl
// Signature: char * crt_time.c_parse_timezone_spec_FUN_00607348(char * tz_string, char * name_buffer, int * offset_seconds)
// Cross-references:
//   crt_time.c_parse_tz_string_FUN_0060756c (0060756c) at 00607590 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_parse_uint_FUN_00607318

#include "nocturne.h"

char * __cdecl
crt_time_c_parse_timezone_spec_FUN_00607348(char *tz_string,char *name_buffer,int *offset_seconds)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  uint uVar4;
  int iVar5;
  int unaff_ESI;
  byte *pbVar6;
  int unaff_EDI;
  byte *pbVar7;
  int *in_stack_00000018;
  int local_14;
  
  pbVar6 = (byte *)tz_string;
  if (*tz_string == ':') {
    tz_string = tz_string + 1;
    pbVar6 = (byte *)tz_string;
  }
  for (; ((((bVar1 = *tz_string, bVar1 != 0 && (bVar1 != 0x2c)) && (bVar1 != 0x2d)) &&
          (bVar1 != 0x2b)) && ((bVar1 < 0x30 || (0x39 < bVar1))));
      tz_string = (char *)((byte *)tz_string + 1)) {
  }
  uVar4 = (int)tz_string - (int)pbVar6;
  if (0x80 < (int)uVar4) {
    uVar4 = 0x80;
  }
  pbVar7 = (byte *)name_buffer;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pbVar7 = *(undefined4 *)pbVar6;
    pbVar6 = pbVar6 + 4;
    pbVar7 = pbVar7 + 4;
  }
  for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pbVar7 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    pbVar7 = pbVar7 + 1;
  }
  bVar2 = false;
  name_buffer[uVar4] = '\0';
  if (bVar1 == 0x2d) {
    bVar2 = true;
  }
  else if (bVar1 != 0x2b) goto LAB_006073c8;
  tz_string = (char *)((byte *)tz_string + 1);
LAB_006073c8:
  if ((0x2f < (byte)*tz_string) && ((byte)*tz_string < 0x3a)) {
    local_14 = 0;
    tz_string = crt_string_c_parse_uint_FUN_00607318(tz_string,&local_14);
    if (*tz_string == 0x3a) {
      tz_string = crt_string_c_parse_uint_FUN_00607318((char *)((byte *)tz_string + 1),&local_14);
      if (*tz_string == 0x3a) {
        tz_string = crt_string_c_parse_uint_FUN_00607318((char *)((byte *)tz_string + 1),&local_14);
      }
    }
    iVar5 = unaff_EBP + (unaff_EDI + unaff_ESI * 0x3c) * 0x3c;
    *in_stack_00000018 = iVar5;
    if (bVar2) {
      *in_stack_00000018 = -iVar5;
    }
  }
  return (char *)(byte *)tz_string;
}


// Assembly code:
// 00607348: PUSH EBX
//   Label: crt_time.c_parse_timezone_spec_FUN_00607348
// 00607349: PUSH ESI
// 0060734a: PUSH EDI
// 0060734b: PUSH EBP
// 0060734c: SUB ESP,0xc
// 0060734f: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00607353: CMP byte ptr [EBX],0x3a
// 00607356: JNZ 0x00607359
//   XREF to: 00607359 (CONDITIONAL_JUMP)
// 00607358: INC EBX
// 00607359: MOV ESI,EBX
//   Label: LAB_00607359
// 0060735b: MOV DL,byte ptr [EBX]
//   Label: LAB_0060735b
// 0060735d: TEST DL,DL
// 0060735f: JZ 0x0060737d
//   XREF to: 0060737d (CONDITIONAL_JUMP)
// 00607361: CMP DL,0x2c
// 00607364: JZ 0x0060737d
//   XREF to: 0060737d (CONDITIONAL_JUMP)
// 00607366: CMP DL,0x2d
// 00607369: JZ 0x0060737d
//   XREF to: 0060737d (CONDITIONAL_JUMP)
// 0060736b: CMP DL,0x2b
// 0060736e: JZ 0x0060737d
//   XREF to: 0060737d (CONDITIONAL_JUMP)
// 00607370: CMP DL,0x30
// 00607373: JC 0x0060737a
//   XREF to: 0060737a (CONDITIONAL_JUMP)
// 00607375: CMP DL,0x39
// 00607378: JBE 0x0060737d
//   XREF to: 0060737d (CONDITIONAL_JUMP)
// 0060737a: INC EBX
//   Label: LAB_0060737a
// 0060737b: JMP 0x0060735b
//   XREF to: 0060735b (UNCONDITIONAL_JUMP)
// 0060737d: MOV EBP,EBX
//   Label: LAB_0060737d
// 0060737f: SUB EBP,ESI
// 00607381: CMP EBP,0x80
// 00607387: JLE 0x0060738e
//   XREF to: 0060738e (CONDITIONAL_JUMP)
// 00607389: MOV EBP,0x80
// 0060738e: MOV EDI,dword ptr [ESP + 0x24]
//   Label: LAB_0060738e
//   XREF to: Stack[0x8] (READ)
// 00607392: MOV ECX,EBP
// 00607394: PUSH ES
// 00607395: MOV AX,DS
// 00607397: MOV ES,AX
// 00607399: PUSH EDI
// 0060739a: MOV EAX,ECX
// 0060739c: SHR ECX,0x2
// 0060739f: MOVSD.REP ES:EDI,ESI
// 006073a1: MOV CL,AL
// 006073a3: AND CL,0x3
// 006073a6: MOVSB.REP ES:EDI,ESI
// 006073a8: POP EDI
// 006073a9: POP ES
// 006073aa: ADD EBP,EDI
// 006073ac: LEA EAX,[EBX + 0x1]
// 006073af: XOR ESI,ESI
// 006073b1: MOV byte ptr [EBP],0x0
// 006073b5: CMP DL,0x2d
// 006073b8: JNZ 0x006073c1
//   XREF to: 006073c1 (CONDITIONAL_JUMP)
// 006073ba: MOV ESI,0x1
// 006073bf: JMP 0x006073c6
//   XREF to: 006073c6 (UNCONDITIONAL_JUMP)
// 006073c1: CMP DL,0x2b
//   Label: LAB_006073c1
// 006073c4: JNZ 0x006073c8
//   XREF to: 006073c8 (CONDITIONAL_JUMP)
// 006073c6: MOV EBX,EAX
//   Label: LAB_006073c6
// 006073c8: MOV AL,byte ptr [EBX]
//   Label: LAB_006073c8
// 006073ca: CMP AL,0x30
// 006073cc: JC 0x00607459
//   XREF to: 00607459 (CONDITIONAL_JUMP)
// 006073d2: CMP AL,0x39
// 006073d4: JA 0x00607459
//   XREF to: 00607459 (CONDITIONAL_JUMP)
// 006073da: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x14] (DATA)
// 006073de: XOR EDI,EDI
// 006073e0: PUSH EAX
// 006073e1: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 006073e5: PUSH EBX
// 006073e6: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 006073ea: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 006073ee: CALL crt_string.c_parse_uint_FUN_00607318
//   XREF to: 00607318 (UNCONDITIONAL_CALL)
// 006073f3: ADD ESP,0x8
// 006073f6: MOV DL,byte ptr [EAX]
// 006073f8: MOV EBX,EAX
// 006073fa: CMP DL,0x3a
// 006073fd: JNZ 0x00607426
//   XREF to: 00607426 (CONDITIONAL_JUMP)
// 006073ff: LEA EBX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 00607403: PUSH EBX
// 00607404: INC EAX
// 00607405: PUSH EAX
// 00607406: CALL crt_string.c_parse_uint_FUN_00607318
//   XREF to: 00607318 (UNCONDITIONAL_CALL)
// 0060740b: ADD ESP,0x8
// 0060740e: MOV DH,byte ptr [EAX]
// 00607410: MOV EBX,EAX
// 00607412: CMP DH,0x3a
// 00607415: JNZ 0x00607426
//   XREF to: 00607426 (CONDITIONAL_JUMP)
// 00607417: MOV EBX,ESP
// 00607419: PUSH EBX
// 0060741a: INC EAX
// 0060741b: PUSH EAX
// 0060741c: CALL crt_string.c_parse_uint_FUN_00607318
//   XREF to: 00607318 (UNCONDITIONAL_CALL)
// 00607421: ADD ESP,0x8
// 00607424: MOV EBX,EAX
// 00607426: MOV EBP,dword ptr [ESP + 0x8]
//   Label: LAB_00607426
//   XREF to: Stack[-0x14] (READ)
// 0060742a: MOV EAX,EBP
// 0060742c: SHL EAX,0x4
// 0060742f: SUB EAX,EBP
// 00607431: MOV EBP,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 00607435: SHL EAX,0x2
// 00607438: ADD EBP,EAX
// 0060743a: MOV EAX,EBP
// 0060743c: SHL EAX,0x4
// 0060743f: SUB EAX,EBP
// 00607441: MOV EBP,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00607444: SHL EAX,0x2
// 00607447: ADD EBP,EAX
// 00607449: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 0060744d: MOV dword ptr [EAX],EBP
// 0060744f: TEST ESI,ESI
// 00607451: JZ 0x00607459
//   XREF to: 00607459 (CONDITIONAL_JUMP)
// 00607453: MOV EDX,EBP
// 00607455: NEG EDX
// 00607457: MOV dword ptr [EAX],EDX
// 00607459: MOV EAX,EBX
//   Label: LAB_00607459
// 0060745b: ADD ESP,0xc
// 0060745e: POP EBP
// 0060745f: POP EDI
// 00607460: POP ESI
// 00607461: POP EBX
// 00607462: RET
