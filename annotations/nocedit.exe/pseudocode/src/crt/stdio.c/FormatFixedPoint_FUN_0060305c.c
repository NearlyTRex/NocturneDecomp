// Name: crt_stdio.c_FormatFixedPoint_FUN_0060305c
// Address: 0060305c
// Address Range: [[0060305c, 0060315e]]
// Convention: __cdecl
// Signature: void crt_stdio.c_FormatFixedPoint_FUN_0060305c(char * buffer, int fixed_point_value, FormatSpec * spec_info)
// Cross-references:
//   crt_stdio.c_ConvertFormatSpec_FUN_00603238 (00603238) at 006034a6 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_IntegerToString_FUN_00607d18

#include "nocturne.h"

/* WARNING: Struct "FormatSpec": ignoring multiple overlapping fields */

void __cdecl
crt_stdio_c_FormatFixedPoint_FUN_0060305c(char *buffer,int fixed_point_value,FormatSpec *spec_info)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint unaff_EBP;
  uint local_14;
  
  local_14 = fixed_point_value;
  if (fixed_point_value < 0) {
    *buffer = '-';
    local_14 = -fixed_point_value;
    buffer = buffer + 1;
  }
  if (spec_info->precision == -1) {
    spec_info->precision = 4;
  }
  crt_stdio_c_IntegerToString_FUN_00607d18(local_14 >> 0x10,buffer,10);
  cVar1 = *buffer;
  pcVar3 = buffer;
  while (cVar1 != '\0') {
    pcVar4 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar4;
  }
  if (spec_info->precision != 0) {
    *pcVar3 = '.';
    iVar2 = 0;
    pcVar3 = pcVar3 + 1;
    if (0 < spec_info->precision) {
      do {
        unaff_EBP = (unaff_EBP & 0xffff) * 10;
        *pcVar3 = (char)(unaff_EBP >> 0x10) + '0';
        iVar2 = iVar2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (iVar2 < spec_info->precision);
    }
    *pcVar3 = '\0';
  }
  if ((unaff_EBP & 0x8000) != 0) {
    while (pcVar3 != buffer) {
      pcVar4 = pcVar3 + -1;
      if (pcVar3[-1] == '.') {
        pcVar4 = pcVar3 + -2;
      }
      if (*pcVar4 != '9') {
        *pcVar4 = *pcVar4 + '\x01';
        return;
      }
      *pcVar4 = '0';
      pcVar3 = pcVar4;
    }
    pcVar3 = buffer + 1;
    *buffer = '1';
    cVar1 = *pcVar3;
    while (cVar1 == '0') {
      pcVar4 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar4;
    }
    if (*pcVar3 == '.') {
      *pcVar3 = '0';
      pcVar3[1] = '.';
      pcVar4 = pcVar3 + 2;
      pcVar3 = pcVar3 + 2;
      cVar1 = *pcVar4;
      while (cVar1 == '0') {
        pcVar4 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar4;
      }
    }
    *pcVar3 = '0';
    pcVar3[1] = '\0';
  }
  return;
}


// Assembly code:
// 0060305c: PUSH EBX
//   Label: crt_stdio.c_FormatFixedPoint_FUN_0060305c
// 0060305d: PUSH ESI
// 0060305e: PUSH EDI
// 0060305f: PUSH EBP
// 00603060: SUB ESP,0x4
// 00603063: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00603067: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0060306b: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0060306f: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00603072: TEST EAX,EAX
// 00603074: JGE 0x00603081
//   XREF to: 00603081 (CONDITIONAL_JUMP)
// 00603076: MOV EDX,EAX
// 00603078: MOV byte ptr [EBX],0x2d
// 0060307b: NEG EDX
// 0060307d: INC EBX
// 0060307e: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 00603081: CMP dword ptr [ESI + 0x8],-0x1
//   Label: LAB_00603081
// 00603085: JNZ 0x0060308e
//   XREF to: 0060308e (CONDITIONAL_JUMP)
// 00603087: MOV dword ptr [ESI + 0x8],0x4
// 0060308e: PUSH 0xa
//   Label: LAB_0060308e
// 00603090: XOR EAX,EAX
// 00603092: PUSH EBX
// 00603093: MOV AX,word ptr [ESP + 0xa]
//   XREF to: Stack[-0x12] (READ)
// 00603098: PUSH EAX
// 00603099: CALL crt_stdio.c_IntegerToString_FUN_00607d18
//   XREF to: 00607d18 (UNCONDITIONAL_CALL)
// 0060309e: ADD ESP,0xc
// 006030a1: MOV AH,byte ptr [EBX]
// 006030a3: MOV ECX,EBX
// 006030a5: TEST AH,AH
// 006030a7: JZ 0x006030b1
//   XREF to: 006030b1 (CONDITIONAL_JUMP)
// 006030a9: MOV DL,byte ptr [EBX + 0x1]
//   Label: LAB_006030a9
// 006030ac: INC EBX
// 006030ad: TEST DL,DL
// 006030af: JNZ 0x006030a9
//   XREF to: 006030a9 (CONDITIONAL_JUMP)
// 006030b1: CMP dword ptr [ESI + 0x8],0x0
//   Label: LAB_006030b1
// 006030b5: JZ 0x006030e9
//   XREF to: 006030e9 (CONDITIONAL_JUMP)
// 006030b7: MOV byte ptr [EBX],0x2e
// 006030ba: XOR EAX,EAX
// 006030bc: MOV EBP,dword ptr [ESI + 0x8]
// 006030bf: INC EBX
// 006030c0: TEST EBP,EBP
// 006030c2: JLE 0x006030e6
//   XREF to: 006030e6 (CONDITIONAL_JUMP)
// 006030c4: XOR EDX,EDX
//   Label: LAB_006030c4
// 006030c6: MOV word ptr [ESP + 0x2],DX
//   XREF to: Stack[-0x12] (WRITE)
// 006030cb: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 006030ce: IMUL EDX,EDI,0xa
// 006030d1: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 006030d4: MOV DL,byte ptr [ESP + 0x2]
//   XREF to: Stack[-0x12] (READ)
// 006030d8: ADD DL,0x30
// 006030db: MOV byte ptr [EBX],DL
// 006030dd: INC EAX
// 006030de: MOV EBP,dword ptr [ESI + 0x8]
// 006030e1: INC EBX
// 006030e2: CMP EAX,EBP
// 006030e4: JL 0x006030c4
//   XREF to: 006030c4 (CONDITIONAL_JUMP)
// 006030e6: MOV byte ptr [EBX],0x0
//   Label: LAB_006030e6
// 006030e9: TEST byte ptr [ESP + 0x1],0x80
//   Label: LAB_006030e9
//   XREF to: Stack[-0x13] (READ)
// 006030ee: JZ 0x00603157
//   XREF to: 00603157 (CONDITIONAL_JUMP)
// 006030f4: CMP EBX,ECX
//   Label: LAB_006030f4
// 006030f6: JNZ 0x00603133
//   XREF to: 00603133 (CONDITIONAL_JUMP)
// 006030f8: LEA EBX,[ECX + 0x1]
// 006030fb: MOV byte ptr [ECX],0x31
// 006030fe: CMP byte ptr [EBX],0x30
// 00603101: JNZ 0x0060310b
//   XREF to: 0060310b (CONDITIONAL_JUMP)
// 00603103: MOV AL,byte ptr [EBX + 0x1]
//   Label: LAB_00603103
// 00603106: INC EBX
// 00603107: CMP AL,0x30
// 00603109: JZ 0x00603103
//   XREF to: 00603103 (CONDITIONAL_JUMP)
// 0060310b: MOV AH,byte ptr [EBX]
//   Label: LAB_0060310b
// 0060310d: CMP AH,0x2e
// 00603110: JNZ 0x0060312a
//   XREF to: 0060312a (CONDITIONAL_JUMP)
// 00603112: MOV byte ptr [EBX],0x30
// 00603115: INC EBX
// 00603116: MOV byte ptr [EBX],AH
// 00603118: MOV DL,byte ptr [EBX + 0x1]
// 0060311b: INC EBX
// 0060311c: CMP DL,0x30
// 0060311f: JNZ 0x0060312a
//   XREF to: 0060312a (CONDITIONAL_JUMP)
// 00603121: MOV DH,byte ptr [EBX + 0x1]
//   Label: LAB_00603121
// 00603124: INC EBX
// 00603125: CMP DH,0x30
// 00603128: JZ 0x00603121
//   XREF to: 00603121 (CONDITIONAL_JUMP)
// 0060312a: MOV byte ptr [EBX],0x30
//   Label: LAB_0060312a
// 0060312d: INC EBX
// 0060312e: MOV byte ptr [EBX],0x0
// 00603131: JMP 0x00603157
//   XREF to: 00603157 (UNCONDITIONAL_JUMP)
// 00603133: MOV DL,byte ptr [EBX + -0x1]
//   Label: LAB_00603133
// 00603136: DEC EBX
// 00603137: CMP DL,0x2e
// 0060313a: JNZ 0x0060313d
//   XREF to: 0060313d (CONDITIONAL_JUMP)
// 0060313c: DEC EBX
// 0060313d: MOV DH,byte ptr [EBX]
//   Label: LAB_0060313d
// 0060313f: CMP DH,0x39
// 00603142: JZ 0x00603152
//   XREF to: 00603152 (CONDITIONAL_JUMP)
// 00603144: MOV CL,DH
// 00603146: INC CL
// 00603148: MOV byte ptr [EBX],CL
// 0060314a: ADD ESP,0x4
// 0060314d: POP EBP
// 0060314e: POP EDI
// 0060314f: POP ESI
// 00603150: POP EBX
// 00603151: RET
// 00603152: MOV byte ptr [EBX],0x30
//   Label: LAB_00603152
// 00603155: JMP 0x006030f4
//   XREF to: 006030f4 (UNCONDITIONAL_JUMP)
// 00603157: ADD ESP,0x4
//   Label: LAB_00603157
// 0060315a: POP EBP
// 0060315b: POP EDI
// 0060315c: POP ESI
// 0060315d: POP EBX
// 0060315e: RET
