// Name: engine_fileio.cpp_buildFilePath_FUN_004b1de0
// Address: 004b1de0
// Address Range: [[004b1de0, 004b1e55]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_buildFilePath_FUN_004b1de0(char * base_dir, char * filename, char * dest_path)
// Function calls:
//   engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   engine_dosio.c_makePath_FUN_00481f50

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_buildFilePath_FUN_004b1de0(char *base_dir,char *filename,char *dest_path)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  byte bVar4;
  char *in_stack_00000010;
  char acStack_108 [252];
  char local_c [4];
  
  bVar4 = 0;
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(base_dir,local_c,&stack0xfffffef4);
  engine_dosio_c_makePath_FUN_00481f50
            (dest_path,&stack0xfffffff8,acStack_108,(char *)0x0,(char *)0x0);
  iVar2 = -1;
  do {
    pcVar3 = dest_path;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = dest_path + (uint)bVar4 * -2 + 1;
    cVar1 = *dest_path;
    dest_path = pcVar3;
  } while (cVar1 != '\0');
  pcVar3 = pcVar3 + -1;
  do {
    cVar1 = *in_stack_00000010;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = in_stack_00000010[1];
    in_stack_00000010 = in_stack_00000010 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 004b1de0: PUSH ESI
//   Label: engine_fileio.cpp_buildFilePath_FUN_004b1de0
// 004b1de1: PUSH EDI
// 004b1de2: SUB ESP,0x104
// 004b1de8: MOV EDI,dword ptr [ESP + 0x118]
//   XREF to: Stack[0xc] (READ)
// 004b1def: MOV EAX,ESP
// 004b1df1: PUSH EAX
// 004b1df2: LEA EAX,[ESP + 0x104]
//   XREF to: Stack[-0xc] (DATA)
// 004b1df9: PUSH EAX
// 004b1dfa: MOV EDX,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x4] (READ)
// 004b1e01: PUSH EDX
// 004b1e02: CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   XREF to: 00481f80 (UNCONDITIONAL_CALL)
// 004b1e07: ADD ESP,0xc
// 004b1e0a: PUSH 0x0
// 004b1e0c: PUSH 0x0
// 004b1e0e: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x10c] (DATA)
// 004b1e12: PUSH EAX
// 004b1e13: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0xc] (DATA)
// 004b1e1a: PUSH EAX
// 004b1e1b: PUSH EDI
// 004b1e1c: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004b1e21: ADD ESP,0x14
// 004b1e24: MOV ESI,dword ptr [ESP + 0x114]
//   XREF to: Stack[0x8] (READ)
// 004b1e2b: PUSH EDI
// 004b1e2c: SUB ECX,ECX
// 004b1e2e: DEC ECX
// 004b1e2f: MOV AL,0x0
// 004b1e31: SCASB.REPNE ES:EDI
// 004b1e33: DEC EDI
// 004b1e34: MOV AL,byte ptr [ESI]
//   Label: LAB_004b1e34
// 004b1e36: MOV byte ptr [EDI],AL
// 004b1e38: CMP AL,0x0
// 004b1e3a: JZ 0x004b1e4c
//   XREF to: 004b1e4c (CONDITIONAL_JUMP)
// 004b1e3c: MOV AL,byte ptr [ESI + 0x1]
// 004b1e3f: ADD ESI,0x2
// 004b1e42: MOV byte ptr [EDI + 0x1],AL
// 004b1e45: ADD EDI,0x2
// 004b1e48: CMP AL,0x0
// 004b1e4a: JNZ 0x004b1e34
//   XREF to: 004b1e34 (CONDITIONAL_JUMP)
// 004b1e4c: POP EDI
//   Label: LAB_004b1e4c
// 004b1e4d: ADD ESP,0x104
// 004b1e53: POP EDI
// 004b1e54: POP ESI
// 004b1e55: RET
