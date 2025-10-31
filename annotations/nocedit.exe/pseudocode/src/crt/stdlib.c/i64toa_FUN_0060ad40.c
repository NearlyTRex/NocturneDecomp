// Name: crt_stdlib.c_i64toa_FUN_0060ad40
// Address: 0060ad40
// Address Range: [[0060ad40, 0060addc]]
// Convention: __cdecl
// Signature: char * crt_stdlib.c_i64toa_FUN_0060ad40(longlong * value, char * buffer, int base)
// Cross-references:
//   crt_stdio.c_ConvertFormatSpec_FUN_00603238 (00603238) at 00603668 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060ade0 (0060ade0) at 0060ae3c [UNCONDITIONAL_CALL]
// Globals:
//   char[36] g_AlphaNumericCharacters1
// Function calls:
//   crt_math.c_UDivMod64_FUN_0060d3ed

#include "nocturne.h"

char * __cdecl crt_stdlib_c_i64toa_FUN_0060ad40(longlong *value,char *buffer,int base)

{
  char cVar1;
  int extraout_ECX;
  int extraout_EDX;
  BADSPACEBASE *in_ESP;
  char *unaff_EBP;
  char *pcVar2;
  undefined1 uVar3;
  undefined7 in_stack_ffffffad;
  ulonglong in_stack_ffffffb4;
  
  pcVar2 = &stack0xffffffad;
  uVar3 = 0;
  do {
    do {
      crt_math_c_UDivMod64_FUN_0060d3ed(CONCAT71(in_stack_ffffffad,uVar3),in_stack_ffffffb4);
      *pcVar2 = g_AlphaNumericCharacters1[extraout_ECX];
      pcVar2 = pcVar2 + 1;
    } while (extraout_EDX != 0);
  } while (buffer != (char *)0x0);
  do {
    cVar1 = pcVar2[-1];
    pcVar2 = pcVar2 + -1;
    *unaff_EBP = cVar1;
    unaff_EBP = unaff_EBP + 1;
  } while (cVar1 != '\0');
  return (char *)base;
}


// Assembly code:
// 0060ad40: PUSH EBX
//   Label: crt_stdlib.c_i64toa_FUN_0060ad40
// 0060ad41: PUSH ESI
// 0060ad42: PUSH EDI
// 0060ad43: PUSH ES
// 0060ad44: PUSH EBP
// 0060ad45: SUB ESP,0x40
// 0060ad48: MOV ESI,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 0060ad4c: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x8] (READ)
// 0060ad50: LEA EDI,[ESP + 0x34]
//   XREF to: Stack[-0x20] (DATA)
// 0060ad54: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0060ad58: MOV AX,DS
// 0060ad5a: LEA EBP,[ESP + 0x1]
//   XREF to: Stack[-0x53] (DATA)
// 0060ad5e: MOV ES,AX
// 0060ad60: XOR EDX,EDX
// 0060ad62: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0xc] (READ)
// 0060ad66: MOVSD ES:EDI,ESI
// 0060ad67: MOVSD ES:EDI,ESI
// 0060ad68: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0060ad6c: XOR AH,AH
// 0060ad6e: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0060ad72: MOV byte ptr [ESP],AH
//   XREF to: Stack[-0x54] (DATA)
// 0060ad75: LEA EDI,[ESP + 0x24]
//   Label: LAB_0060ad75
//   XREF to: Stack[-0x30] (DATA)
// 0060ad79: LEA ESI,[ESP + 0x34]
//   XREF to: Stack[-0x20] (DATA)
// 0060ad7d: LEA EBX,[ESP + 0x2c]
//   XREF to: Stack[-0x28] (DATA)
// 0060ad81: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x20] (DATA)
// 0060ad85: MOV EDX,dword ptr [EAX + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 0060ad88: MOV EAX,dword ptr [EAX]
//   XREF to: Stack[-0x20] (DATA)
// 0060ad8a: MOV ECX,dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0060ad8d: MOV EBX,dword ptr [EBX]
//   XREF to: Stack[-0x28] (DATA)
// 0060ad8f: CALL crt_math.c_UDivMod64_FUN_0060d3ed
//   XREF to: 0060d3ed (UNCONDITIONAL_CALL)
// 0060ad94: MOV dword ptr [ESI + 0x4],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0060ad97: MOV dword ptr [ESI],EAX
//   XREF to: Stack[-0x20] (DATA)
// 0060ad99: MOV dword ptr [EDI + 0x4],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 0060ad9c: MOV dword ptr [EDI],EBX
//   XREF to: Stack[-0x30] (DATA)
// 0060ad9e: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x30] (READ)
// 0060ada2: MOV AL,byte ptr [EAX + 0x685414]
//   XREF to: 00685414 (DATA)
// 0060ada8: MOV byte ptr [EBP],AL
//   XREF to: Stack[-0x53] (DATA)
// 0060adab: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x20] (READ)
// 0060adaf: INC EBP
// 0060adb0: TEST EBX,EBX
// 0060adb2: JNZ 0x0060ad75
//   XREF to: 0060ad75 (CONDITIONAL_JUMP)
// 0060adb4: CMP dword ptr [ESP + 0x38],0x0
//   XREF to: Stack[-0x1c] (READ)
// 0060adb9: JNZ 0x0060ad75
//   XREF to: 0060ad75 (CONDITIONAL_JUMP)
// 0060adbb: MOV EBX,dword ptr [ESP + 0x3c]
//   Label: LAB_0060adbb
//   XREF to: Stack[-0x18] (READ)
// 0060adbf: MOV AL,byte ptr [EBP + -0x1]
//   XREF to: Stack[-0x53] (READ)
// 0060adc2: DEC EBP
// 0060adc3: LEA ESI,[EBX + 0x1]
// 0060adc6: MOV byte ptr [EBX],AL
// 0060adc8: MOV dword ptr [ESP + 0x3c],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0060adcc: TEST AL,AL
// 0060adce: JNZ 0x0060adbb
//   XREF to: 0060adbb (CONDITIONAL_JUMP)
// 0060add0: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x8] (READ)
// 0060add4: ADD ESP,0x40
// 0060add7: POP EBP
// 0060add8: POP ES
// 0060add9: POP EDI
// 0060adda: POP ESI
// 0060addb: POP EBX
// 0060addc: RET
