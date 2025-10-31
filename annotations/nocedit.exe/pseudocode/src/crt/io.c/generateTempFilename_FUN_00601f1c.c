// Name: crt_io.c_generateTempFilename_FUN_00601f1c
// Address: 00601f1c
// Address Range: [[00601f1c, 00601fcc]]
// Convention: __watcallStack
// Signature: void crt_io.c_generateTempFilename_FUN_00601f1c(char * buffer, int file_handle)
// Cross-references:
//   crt_stdio.c_fclose_FUN_00601fd0 (00601fd0) at 0060207e [UNCONDITIONAL_CALL]
// Function calls:
//   crt_io.c_getTempDirectory_FUN_00609afc
//   crt_process.c_getpid_FUN_006099c0
//   crt_string.c_hexDigitToChar_FUN_00601f0c

#include "nocturne.h"

void __watcallStack crt_io_c_generateTempFilename_FUN_00601f1c(char *buffer,int file_handle)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  int in_stack_00000014;
  uint in_stack_00000018;
  
  bVar7 = 0;
  uVar2 = crt_process_c_getpid_FUN_006099c0();
  uVar2 = uVar2 >> 0x10 | uVar2;
  pcVar3 = (char *)crt_io_c_getTempDirectory_FUN_00609afc();
  pcVar6 = buffer;
  do {
    cVar1 = *pcVar3;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  uVar4 = 0xffffffff;
  pcVar6 = buffer;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  pcVar6 = buffer + (~uVar4 - 1);
  *pcVar6 = 't';
  pcVar3 = pcVar6 + 4;
  do {
    uVar4 = uVar2 & 0xf;
    pcVar5 = pcVar3 + -1;
    uVar2 = uVar2 >> 4;
    cVar1 = crt_string_c_hexDigitToChar_FUN_00601f0c(uVar4);
    *pcVar3 = cVar1;
    pcVar3 = pcVar5;
  } while (pcVar5 != pcVar6);
  pcVar6[5] = '_';
  cVar1 = crt_string_c_hexDigitToChar_FUN_00601f0c(in_stack_00000014 >> 4 & 0xf);
  pcVar6[6] = cVar1;
  cVar1 = crt_string_c_hexDigitToChar_FUN_00601f0c(in_stack_00000018 & 0xf);
  pcVar6[8] = '.';
  pcVar6[9] = 't';
  pcVar6[10] = 'm';
  pcVar6[0xb] = 'p';
  pcVar6[0xc] = '\0';
  pcVar6[7] = cVar1;
  return;
}


// Assembly code:
// 00601f1c: PUSH EBX
//   Label: crt_io.c_generateTempFilename_FUN_00601f1c
// 00601f1d: PUSH ESI
// 00601f1e: PUSH EDI
// 00601f1f: PUSH EBP
// 00601f20: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00601f24: CALL crt_process.c_getpid_FUN_006099c0
//   XREF to: 006099c0 (UNCONDITIONAL_CALL)
// 00601f29: MOV EBP,EAX
// 00601f2b: SHR EBP,0x10
// 00601f2e: MOV EDI,EBX
// 00601f30: OR EBP,EAX
// 00601f32: CALL crt_io.c_getTempDirectory_FUN_00609afc
//   XREF to: 00609afc (UNCONDITIONAL_CALL)
// 00601f37: MOV ESI,EAX
// 00601f39: PUSH EDI
// 00601f3a: MOV AL,byte ptr [ESI]
//   Label: LAB_00601f3a
// 00601f3c: MOV byte ptr [EDI],AL
// 00601f3e: CMP AL,0x0
// 00601f40: JZ 0x00601f52
//   XREF to: 00601f52 (CONDITIONAL_JUMP)
// 00601f42: MOV AL,byte ptr [ESI + 0x1]
// 00601f45: ADD ESI,0x2
// 00601f48: MOV byte ptr [EDI + 0x1],AL
// 00601f4b: ADD EDI,0x2
// 00601f4e: CMP AL,0x0
// 00601f50: JNZ 0x00601f3a
//   XREF to: 00601f3a (CONDITIONAL_JUMP)
// 00601f52: POP EDI
//   Label: LAB_00601f52
// 00601f53: PUSH ES
// 00601f54: MOV AX,DS
// 00601f56: MOV ES,AX
// 00601f58: SUB ECX,ECX
// 00601f5a: DEC ECX
// 00601f5b: XOR EAX,EAX
// 00601f5d: SCASB.REPNE ES:EDI
// 00601f5f: NOT ECX
// 00601f61: DEC ECX
// 00601f62: POP ES
// 00601f63: LEA EDI,[EBX + ECX*0x1]
// 00601f66: LEA EBX,[EDI + 0x4]
// 00601f69: MOV byte ptr [EDI],0x74
// 00601f6c: MOV ESI,EDI
// 00601f6e: MOV EAX,EBP
//   Label: LAB_00601f6e
// 00601f70: AND EAX,0xf
// 00601f73: DEC EBX
// 00601f74: PUSH EAX
// 00601f75: SHR EBP,0x4
// 00601f78: CALL crt_string.c_hexDigitToChar_FUN_00601f0c
//   XREF to: 00601f0c (UNCONDITIONAL_CALL)
// 00601f7d: ADD ESP,0x4
// 00601f80: MOV byte ptr [EBX + 0x1],AL
// 00601f83: CMP EBX,ESI
// 00601f85: JNZ 0x00601f6e
//   XREF to: 00601f6e (CONDITIONAL_JUMP)
// 00601f87: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00601f8b: SAR EAX,0x4
// 00601f8e: AND EAX,0xf
// 00601f91: PUSH EAX
// 00601f92: MOV byte ptr [EDI + 0x5],0x5f
// 00601f96: CALL crt_string.c_hexDigitToChar_FUN_00601f0c
//   XREF to: 00601f0c (UNCONDITIONAL_CALL)
// 00601f9b: ADD ESP,0x4
// 00601f9e: MOV byte ptr [EDI + 0x6],AL
// 00601fa1: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00601fa5: AND EAX,0xf
// 00601fa8: PUSH EAX
// 00601fa9: CALL crt_string.c_hexDigitToChar_FUN_00601f0c
//   XREF to: 00601f0c (UNCONDITIONAL_CALL)
// 00601fae: MOV byte ptr [EDI + 0x8],0x2e
// 00601fb2: MOV byte ptr [EDI + 0x9],0x74
// 00601fb6: MOV byte ptr [EDI + 0xa],0x6d
// 00601fba: MOV byte ptr [EDI + 0xb],0x70
// 00601fbe: MOV byte ptr [EDI + 0xc],0x0
// 00601fc2: ADD ESP,0x4
// 00601fc5: MOV byte ptr [EDI + 0x7],AL
// 00601fc8: POP EBP
// 00601fc9: POP EDI
// 00601fca: POP ESI
// 00601fcb: POP EBX
// 00601fcc: RET
