// Name: crt_stdlib.c_strtol_internal_FUN_0060ec70
// Address: 0060ec70
// Address Range: [[0060ec70, 0060eddd]]
// Convention: __cdecl
// Signature: long crt_stdlib.c_strtol_internal_FUN_0060ec70(char * str, char * * endptr, int base, int is_signed)
// Cross-references:
//   crt_stdlib.c_strtol_FUN_0060edfc (0060edfc) at 0060ee0e [UNCONDITIONAL_CALL]
//   crt_stdlib.c_strtoul_FUN_0060ede0 (0060ede0) at 0060edf2 [UNCONDITIONAL_CALL]
// Globals:
//   char[256] g_CharacterClassificationTable
//   undefined4 DAT_006855d8
// Function calls:
//   crt_errno.c_setErrno_FUN_00602790
//   crt_stdlib.c_charToDigit_FUN_0060ee18

#include "nocturne.h"

long __cdecl
crt_stdlib_c_strtol_internal_FUN_0060ec70(char *str,char **endptr,int base,int is_signed)

{
  int iVar1;
  char unaff_BP;
  void *pvVar2;
  void *pvVar3;
  char unaff_DI;
  int iVar4;
  int in_stack_00000014;
  int in_stack_00000018;
  char **ppcVar5;
  char local_14;
  
  if (endptr != (char **)0x0) {
    *endptr = str;
  }
  while ((g_CharacterClassificationTable[(byte)(*str + 1)] & 2U) != 0) {
    str = (char *)((int)str + 1);
  }
  local_14 = *str;
  if ((local_14 == '+') || (local_14 == '-')) {
    str = (char *)((int)str + 1);
  }
  if (base == 0) {
    if ((*str != '0') || ((*(char *)((int)str + 1) != 'x' && (*(char *)((int)str + 1) != 'X')))) {
      if (*str == '0') {
        iVar4 = 8;
      }
      else {
        iVar4 = 10;
      }
      goto LAB_0060ed14;
    }
    iVar4 = 0x10;
  }
  else {
    if ((base < 2) || (0x24 < base)) {
      crt_errno_c_setErrno_FUN_00602790(0xd);
      return 0;
    }
    iVar4 = base;
    if (base != 0x10) goto LAB_0060ed14;
  }
  if ((*str == '0') && ((*(char *)((int)str + 1) == 'x' || (*(char *)((int)str + 1) == 'X')))) {
    str = (char *)((int)str + 2);
  }
LAB_0060ed14:
  pvVar3 = (void *)0x0;
  ppcVar5 = (char **)str;
  while (iVar1 = crt_stdlib_c_charToDigit_FUN_0060ee18(*str), iVar1 < iVar4) {
    if ((&PTR_crt_thread_c_exit_thread_FUN_0060fa58_00685598)[iVar4] < pvVar3) {
      local_14 = '\x01';
    }
    pvVar2 = (void *)((int)pvVar3 * iVar4 + iVar1);
    if (pvVar2 < pvVar3) {
      local_14 = '\x01';
    }
    str = (char *)((int)str + 1);
    pvVar3 = pvVar2;
  }
  if ((char **)str == ppcVar5) {
    str = (char *)endptr;
  }
  if (base != 0) {
    *(char **)base = str;
  }
  if ((((in_stack_00000014 != 1) || (pvVar3 < (void *)0x80000000)) ||
      ((pvVar3 == (void *)0x80000000 && (unaff_BP == '-')))) && (local_14 == '\0')) {
    if (unaff_BP == '-') {
      pvVar3 = (void *)-(int)pvVar3;
    }
    return (long)pvVar3;
  }
  crt_errno_c_setErrno_FUN_00602790(0xe);
  if (in_stack_00000018 == 0) {
    return -1;
  }
  if (unaff_DI == '-') {
    return -0x80000000;
  }
  return 0x7fffffff;
}


// Assembly code:
// 0060ec70: PUSH EBX
//   Label: crt_stdlib.c_strtol_internal_FUN_0060ec70
// 0060ec71: PUSH ESI
// 0060ec72: PUSH EDI
// 0060ec73: PUSH EBP
// 0060ec74: SUB ESP,0xc
// 0060ec77: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 0060ec7b: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 0060ec7f: TEST EDX,EDX
// 0060ec81: JZ 0x0060ec89
//   XREF to: 0060ec89 (CONDITIONAL_JUMP)
// 0060ec83: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0060ec87: MOV dword ptr [EDX],EAX
// 0060ec89: MOV EBX,dword ptr [ESP + 0x20]
//   Label: LAB_0060ec89
//   XREF to: Stack[0x4] (READ)
// 0060ec8d: MOV AL,byte ptr [EBX]
//   Label: LAB_0060ec8d
// 0060ec8f: INC AL
// 0060ec91: AND EAX,0xff
// 0060ec96: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 0060ec9d: JZ 0x0060eca2
//   XREF to: 0060eca2 (CONDITIONAL_JUMP)
// 0060ec9f: INC EBX
// 0060eca0: JMP 0x0060ec8d
//   XREF to: 0060ec8d (UNCONDITIONAL_JUMP)
// 0060eca2: MOV AL,byte ptr [EBX]
//   Label: LAB_0060eca2
// 0060eca4: MOV byte ptr [ESP + 0x8],AL
//   XREF to: Stack[-0x14] (WRITE)
// 0060eca8: CMP AL,0x2b
// 0060ecaa: JZ 0x0060ecb0
//   XREF to: 0060ecb0 (CONDITIONAL_JUMP)
// 0060ecac: CMP AL,0x2d
// 0060ecae: JNZ 0x0060ecb1
//   XREF to: 0060ecb1 (CONDITIONAL_JUMP)
// 0060ecb0: INC EBX
//   Label: LAB_0060ecb0
// 0060ecb1: TEST EDI,EDI
//   Label: LAB_0060ecb1
// 0060ecb3: JNZ 0x0060ecdf
//   XREF to: 0060ecdf (CONDITIONAL_JUMP)
// 0060ecb5: CMP byte ptr [EBX],0x30
// 0060ecb8: JNZ 0x0060eccc
//   XREF to: 0060eccc (CONDITIONAL_JUMP)
// 0060ecba: MOV AL,byte ptr [EBX + 0x1]
// 0060ecbd: CMP AL,0x78
// 0060ecbf: JZ 0x0060ecc5
//   XREF to: 0060ecc5 (CONDITIONAL_JUMP)
// 0060ecc1: CMP AL,0x58
// 0060ecc3: JNZ 0x0060eccc
//   XREF to: 0060eccc (CONDITIONAL_JUMP)
// 0060ecc5: MOV EDI,0x10
//   Label: LAB_0060ecc5
// 0060ecca: JMP 0x0060ecff
//   XREF to: 0060ecff (UNCONDITIONAL_JUMP)
// 0060eccc: CMP byte ptr [EBX],0x30
//   Label: LAB_0060eccc
// 0060eccf: JNZ 0x0060ecd8
//   XREF to: 0060ecd8 (CONDITIONAL_JUMP)
// 0060ecd1: MOV EDI,0x8
// 0060ecd6: JMP 0x0060ed14
//   XREF to: 0060ed14 (UNCONDITIONAL_JUMP)
// 0060ecd8: MOV EDI,0xa
//   Label: LAB_0060ecd8
// 0060ecdd: JMP 0x0060ed14
//   XREF to: 0060ed14 (UNCONDITIONAL_JUMP)
// 0060ecdf: CMP EDI,0x2
//   Label: LAB_0060ecdf
// 0060ece2: JL 0x0060ece9
//   XREF to: 0060ece9 (CONDITIONAL_JUMP)
// 0060ece4: CMP EDI,0x24
// 0060ece7: JLE 0x0060ecfa
//   XREF to: 0060ecfa (CONDITIONAL_JUMP)
// 0060ece9: PUSH 0xd
//   Label: LAB_0060ece9
// 0060eceb: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 0060ecf0: ADD ESP,0x4
// 0060ecf3: XOR EAX,EAX
// 0060ecf5: JMP 0x0060edd6
//   XREF to: 0060edd6 (UNCONDITIONAL_JUMP)
// 0060ecfa: CMP EDI,0x10
//   Label: LAB_0060ecfa
// 0060ecfd: JNZ 0x0060ed14
//   XREF to: 0060ed14 (CONDITIONAL_JUMP)
// 0060ecff: CMP byte ptr [EBX],0x30
//   Label: LAB_0060ecff
// 0060ed02: JNZ 0x0060ed14
//   XREF to: 0060ed14 (CONDITIONAL_JUMP)
// 0060ed04: MOV CL,byte ptr [EBX + 0x1]
// 0060ed07: CMP CL,0x78
// 0060ed0a: JZ 0x0060ed11
//   XREF to: 0060ed11 (CONDITIONAL_JUMP)
// 0060ed0c: CMP CL,0x58
// 0060ed0f: JNZ 0x0060ed14
//   XREF to: 0060ed14 (CONDITIONAL_JUMP)
// 0060ed11: ADD EBX,0x2
//   Label: LAB_0060ed11
// 0060ed14: MOV dword ptr [ESP],EBX
//   Label: LAB_0060ed14
//   XREF to: Stack[-0x1c] (DATA)
// 0060ed17: LEA EBP,[EDI*0x4 + 0x0]
// 0060ed1e: XOR AL,AL
// 0060ed20: XOR ESI,ESI
// 0060ed22: MOV byte ptr [ESP + 0x4],AL
//   XREF to: Stack[-0x18] (WRITE)
// 0060ed26: XOR EAX,EAX
//   Label: LAB_0060ed26
// 0060ed28: MOV AL,byte ptr [EBX]
// 0060ed2a: PUSH EAX
// 0060ed2b: CALL crt_stdlib.c_charToDigit_FUN_0060ee18
//   XREF to: 0060ee18 (UNCONDITIONAL_CALL)
// 0060ed30: ADD ESP,0x4
// 0060ed33: MOV EDX,EAX
// 0060ed35: CMP EAX,EDI
// 0060ed37: JGE 0x0060ed59
//   XREF to: 0060ed59 (CONDITIONAL_JUMP)
// 0060ed39: CMP ESI,dword ptr [EBP + 0x685598]
//   XREF to: 006855d8 (READ)
// 0060ed3f: JBE 0x0060ed46
//   XREF to: 0060ed46 (CONDITIONAL_JUMP)
// 0060ed41: MOV byte ptr [ESP + 0x4],0x1
//   XREF to: Stack[-0x18] (WRITE)
// 0060ed46: MOV EAX,ESI
//   Label: LAB_0060ed46
// 0060ed48: IMUL ESI,EDI
// 0060ed4b: ADD ESI,EDX
// 0060ed4d: CMP ESI,EAX
// 0060ed4f: JNC 0x0060ed56
//   XREF to: 0060ed56 (CONDITIONAL_JUMP)
// 0060ed51: MOV byte ptr [ESP + 0x4],0x1
//   XREF to: Stack[-0x18] (WRITE)
// 0060ed56: INC EBX
//   Label: LAB_0060ed56
// 0060ed57: JMP 0x0060ed26
//   XREF to: 0060ed26 (UNCONDITIONAL_JUMP)
// 0060ed59: CMP EBX,dword ptr [ESP]
//   Label: LAB_0060ed59
//   XREF to: Stack[-0x1c] (DATA)
// 0060ed5c: JNZ 0x0060ed62
//   XREF to: 0060ed62 (CONDITIONAL_JUMP)
// 0060ed5e: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0060ed62: MOV EBP,dword ptr [ESP + 0x24]
//   Label: LAB_0060ed62
//   XREF to: Stack[0x8] (READ)
// 0060ed66: TEST EBP,EBP
// 0060ed68: JZ 0x0060ed6d
//   XREF to: 0060ed6d (CONDITIONAL_JUMP)
// 0060ed6a: MOV dword ptr [EBP],EBX
// 0060ed6d: CMP dword ptr [ESP + 0x2c],0x1
//   Label: LAB_0060ed6d
//   XREF to: Stack[0x10] (READ)
// 0060ed72: JNZ 0x0060ed85
//   XREF to: 0060ed85 (CONDITIONAL_JUMP)
// 0060ed74: CMP ESI,0x80000000
// 0060ed7a: JC 0x0060ed85
//   XREF to: 0060ed85 (CONDITIONAL_JUMP)
// 0060ed7c: JNZ 0x0060ed8c
//   XREF to: 0060ed8c (CONDITIONAL_JUMP)
// 0060ed7e: CMP byte ptr [ESP + 0x8],0x2d
//   XREF to: Stack[-0x14] (READ)
// 0060ed83: JNZ 0x0060ed8c
//   XREF to: 0060ed8c (CONDITIONAL_JUMP)
// 0060ed85: CMP byte ptr [ESP + 0x4],0x0
//   Label: LAB_0060ed85
//   XREF to: Stack[-0x18] (READ)
// 0060ed8a: JZ 0x0060edcb
//   XREF to: 0060edcb (CONDITIONAL_JUMP)
// 0060ed8c: PUSH 0xe
//   Label: LAB_0060ed8c
// 0060ed8e: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 0060ed93: ADD ESP,0x4
// 0060ed96: CMP dword ptr [ESP + 0x2c],0x0
//   XREF to: Stack[0x10] (READ)
// 0060ed9b: JNZ 0x0060edaa
//   XREF to: 0060edaa (CONDITIONAL_JUMP)
// 0060ed9d: MOV EAX,0xffffffff
// 0060eda2: ADD ESP,0xc
// 0060eda5: POP EBP
// 0060eda6: POP EDI
// 0060eda7: POP ESI
// 0060eda8: POP EBX
// 0060eda9: RET
// 0060edaa: CMP byte ptr [ESP + 0x8],0x2d
//   Label: LAB_0060edaa
//   XREF to: Stack[-0x14] (READ)
// 0060edaf: JNZ 0x0060edbe
//   XREF to: 0060edbe (CONDITIONAL_JUMP)
// 0060edb1: MOV EAX,0x80000000
// 0060edb6: ADD ESP,0xc
// 0060edb9: POP EBP
// 0060edba: POP EDI
// 0060edbb: POP ESI
// 0060edbc: POP EBX
// 0060edbd: RET
// 0060edbe: MOV EAX,0x7fffffff
//   Label: LAB_0060edbe
// 0060edc3: ADD ESP,0xc
// 0060edc6: POP EBP
// 0060edc7: POP EDI
// 0060edc8: POP ESI
// 0060edc9: POP EBX
// 0060edca: RET
// 0060edcb: CMP byte ptr [ESP + 0x8],0x2d
//   Label: LAB_0060edcb
//   XREF to: Stack[-0x14] (READ)
// 0060edd0: JNZ 0x0060edd4
//   XREF to: 0060edd4 (CONDITIONAL_JUMP)
// 0060edd2: NEG ESI
// 0060edd4: MOV EAX,ESI
//   Label: LAB_0060edd4
// 0060edd6: ADD ESP,0xc
//   Label: LAB_0060edd6
// 0060edd9: POP EBP
// 0060edda: POP EDI
// 0060eddb: POP ESI
// 0060eddc: POP EBX
// 0060eddd: RET
