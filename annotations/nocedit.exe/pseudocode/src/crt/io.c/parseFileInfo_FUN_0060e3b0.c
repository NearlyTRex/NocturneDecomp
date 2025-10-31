// Name: crt_io.c_parseFileInfo_FUN_0060e3b0
// Address: 0060e3b0
// Address Range: [[0060e3b0, 0060e4ed]]
// Convention: __cdecl
// Signature: void crt_io.c_parseFileInfo_FUN_0060e3b0(void)
// Cross-references:
//   crt_unknown.c_staticInit_FUN_0060c650 (0060c650) at 0060c729 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_C_FILE_INFO_00659734
//   TerminatedCString s_C_FILE_INFO_00659740
// Function calls:
//   crt_env.c_getenv_FUN_006013f0
//   crt_env.c_putenv_internal_FUN_0060ee80
//   crt_io.c_setFileDescriptorFlags_FUN_00608908
//   crt_stdlib.c_strtol_FUN_0060edfc
//   crt_string.c_strncpy_FUN_00600f40
//   crt_unknown.c_SetStdHandleToSomething_FUN_00608a1c

#include "nocturne.h"

void __cdecl crt_io_c_parseFileInfo_FUN_0060e3b0(void)

{
  char *pcVar1;
  long file_handle_index;
  uint flags;
  BADSPACEBASE *in_ESP;
  char *pcVar2;
  char *pcVar3;
  
  pcVar1 = crt_env_c_getenv_FUN_006013f0("C_FILE_INFO");
  if (pcVar1 != (char *)0x0) {
    for (; pcVar3 = pcVar1, *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
      do {
        pcVar2 = pcVar3;
        if (*pcVar3 == ':') goto LAB_0060e3f3;
        if (*pcVar3 == '\0') break;
        pcVar2 = pcVar3 + 1;
        if (*pcVar2 == ':') goto LAB_0060e3f3;
        pcVar3 = pcVar3 + 2;
      } while (*pcVar2 != '\0');
      pcVar2 = (char *)0x0;
LAB_0060e3f3:
      crt_string_c_strncpy_FUN_00600f40(&stack0xffffffe4,pcVar1,(int)pcVar2 - (int)pcVar1);
      (&stack0xffffffe8)[(int)pcVar2 - (int)pcVar1] = 0;
      pcVar2 = pcVar2 + 1;
      file_handle_index = crt_stdlib_c_strtol_FUN_0060edfc(&stack0xffffffe8,(char **)0x0,0x10);
      pcVar1 = pcVar2;
      do {
        pcVar3 = pcVar1;
        if (*pcVar1 == ':') goto LAB_0060e43e;
        if (*pcVar1 == '\0') break;
        pcVar3 = pcVar1 + 1;
        if (*pcVar3 == ':') goto LAB_0060e43e;
        pcVar1 = pcVar1 + 2;
      } while (*pcVar3 != '\0');
      pcVar3 = (char *)0x0;
LAB_0060e43e:
      crt_string_c_strncpy_FUN_00600f40(&stack0xffffffec,pcVar2,(int)pcVar3 - (int)pcVar2);
      (&stack0xfffffff0)[(int)pcVar3 - (int)pcVar2] = 0;
      pcVar3 = pcVar3 + 1;
      crt_stdlib_c_strtol_FUN_0060edfc(&stack0xfffffff0,(char **)0x0,0x10);
      pcVar2 = pcVar3;
      do {
        pcVar1 = pcVar2;
        if (*pcVar2 == '*') goto LAB_0060e48b;
        if (*pcVar2 == '\0') break;
        pcVar1 = pcVar2 + 1;
        if (*pcVar1 == '*') goto LAB_0060e48b;
        pcVar2 = pcVar2 + 2;
      } while (*pcVar1 != '\0');
      pcVar1 = (char *)0x0;
LAB_0060e48b:
      crt_string_c_strncpy_FUN_00600f40(&stack0xfffffff4,pcVar3,(int)pcVar1 - (int)pcVar3);
      (&stack0xfffffff8)[(int)pcVar1 - (int)pcVar3] = 0;
      flags = crt_stdlib_c_strtol_FUN_0060edfc(&stack0xfffffff8,(char **)0x0,0x10);
      crt_unknown_c_SetStdHandleToSomething_FUN_00608a1c();
      crt_io_c_setFileDescriptorFlags_FUN_00608908(file_handle_index,flags);
    }
    crt_env_c_putenv_internal_FUN_0060ee80("C_FILE_INFO=");
  }
  return;
}


// Assembly code:
// 0060e3b0: PUSH EBX
//   Label: crt_io.c_parseFileInfo_FUN_0060e3b0
// 0060e3b1: PUSH ESI
// 0060e3b2: PUSH EDI
// 0060e3b3: PUSH EBP
// 0060e3b4: SUB ESP,0x10
// 0060e3b7: PUSH 0x659734
//   XREF to: 00659734 (DATA)
// 0060e3bc: CALL crt_env.c_getenv_FUN_006013f0
//   XREF to: 006013f0 (UNCONDITIONAL_CALL)
// 0060e3c1: ADD ESP,0x4
// 0060e3c4: MOV EBX,EAX
// 0060e3c6: TEST EAX,EAX
// 0060e3c8: JZ 0x0060e4e6
//   XREF to: 0060e4e6 (CONDITIONAL_JUMP)
// 0060e3ce: CMP byte ptr [EBX],0x0
//   Label: LAB_0060e3ce
// 0060e3d1: JZ 0x0060e4d9
//   XREF to: 0060e4d9 (CONDITIONAL_JUMP)
// 0060e3d7: MOV DL,0x3a
// 0060e3d9: MOV ESI,EBX
// 0060e3db: MOV AL,byte ptr [ESI]
//   Label: LAB_0060e3db
// 0060e3dd: CMP AL,DL
// 0060e3df: JZ 0x0060e3f3
//   XREF to: 0060e3f3 (CONDITIONAL_JUMP)
// 0060e3e1: CMP AL,0x0
// 0060e3e3: JZ 0x0060e3f1
//   XREF to: 0060e3f1 (CONDITIONAL_JUMP)
// 0060e3e5: INC ESI
// 0060e3e6: MOV AL,byte ptr [ESI]
// 0060e3e8: CMP AL,DL
// 0060e3ea: JZ 0x0060e3f3
//   XREF to: 0060e3f3 (CONDITIONAL_JUMP)
// 0060e3ec: INC ESI
// 0060e3ed: CMP AL,0x0
// 0060e3ef: JNZ 0x0060e3db
//   XREF to: 0060e3db (CONDITIONAL_JUMP)
// 0060e3f1: SUB ESI,ESI
//   Label: LAB_0060e3f1
// 0060e3f3: MOV EDI,ESI
//   Label: LAB_0060e3f3
// 0060e3f5: SUB ESI,EBX
// 0060e3f7: PUSH ESI
// 0060e3f8: PUSH EBX
// 0060e3f9: LEA EBX,[ESP + 0x8]
//   XREF to: Stack[-0x20] (DATA)
// 0060e3fd: PUSH EBX
// 0060e3fe: CALL crt_string.c_strncpy_FUN_00600f40
//   XREF to: 00600f40 (UNCONDITIONAL_CALL)
// 0060e403: ADD ESP,0xc
// 0060e406: PUSH 0x10
// 0060e408: PUSH 0x0
// 0060e40a: LEA EBX,[ESP + 0x8]
//   XREF to: Stack[-0x20] (DATA)
// 0060e40e: XOR DL,DL
// 0060e410: PUSH EBX
// 0060e411: MOV byte ptr [ESP + ESI*0x1 + 0xc],DL
// 0060e415: LEA ESI,[EDI + 0x1]
// 0060e418: CALL crt_stdlib.c_strtol_FUN_0060edfc
//   XREF to: 0060edfc (UNCONDITIONAL_CALL)
// 0060e41d: MOV DL,0x3a
// 0060e41f: ADD ESP,0xc
// 0060e422: MOV EBP,EAX
// 0060e424: MOV EBX,ESI
// 0060e426: MOV AL,byte ptr [ESI]
//   Label: LAB_0060e426
// 0060e428: CMP AL,DL
// 0060e42a: JZ 0x0060e43e
//   XREF to: 0060e43e (CONDITIONAL_JUMP)
// 0060e42c: CMP AL,0x0
// 0060e42e: JZ 0x0060e43c
//   XREF to: 0060e43c (CONDITIONAL_JUMP)
// 0060e430: INC ESI
// 0060e431: MOV AL,byte ptr [ESI]
// 0060e433: CMP AL,DL
// 0060e435: JZ 0x0060e43e
//   XREF to: 0060e43e (CONDITIONAL_JUMP)
// 0060e437: INC ESI
// 0060e438: CMP AL,0x0
// 0060e43a: JNZ 0x0060e426
//   XREF to: 0060e426 (CONDITIONAL_JUMP)
// 0060e43c: SUB ESI,ESI
//   Label: LAB_0060e43c
// 0060e43e: MOV EDI,ESI
//   Label: LAB_0060e43e
// 0060e440: SUB ESI,EBX
// 0060e442: PUSH ESI
// 0060e443: PUSH EBX
// 0060e444: LEA EBX,[ESP + 0x8]
//   XREF to: Stack[-0x20] (DATA)
// 0060e448: PUSH EBX
// 0060e449: CALL crt_string.c_strncpy_FUN_00600f40
//   XREF to: 00600f40 (UNCONDITIONAL_CALL)
// 0060e44e: ADD ESP,0xc
// 0060e451: PUSH 0x10
// 0060e453: PUSH 0x0
// 0060e455: LEA EBX,[ESP + 0x8]
//   XREF to: Stack[-0x20] (DATA)
// 0060e459: XOR DH,DH
// 0060e45b: PUSH EBX
// 0060e45c: MOV byte ptr [ESP + ESI*0x1 + 0xc],DH
// 0060e460: LEA ESI,[EDI + 0x1]
// 0060e463: CALL crt_stdlib.c_strtol_FUN_0060edfc
//   XREF to: 0060edfc (UNCONDITIONAL_CALL)
// 0060e468: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0060e46c: ADD ESP,0xc
// 0060e46f: MOV DL,0x2a
// 0060e471: MOV EBX,ESI
// 0060e473: MOV AL,byte ptr [ESI]
//   Label: LAB_0060e473
// 0060e475: CMP AL,DL
// 0060e477: JZ 0x0060e48b
//   XREF to: 0060e48b (CONDITIONAL_JUMP)
// 0060e479: CMP AL,0x0
// 0060e47b: JZ 0x0060e489
//   XREF to: 0060e489 (CONDITIONAL_JUMP)
// 0060e47d: INC ESI
// 0060e47e: MOV AL,byte ptr [ESI]
// 0060e480: CMP AL,DL
// 0060e482: JZ 0x0060e48b
//   XREF to: 0060e48b (CONDITIONAL_JUMP)
// 0060e484: INC ESI
// 0060e485: CMP AL,0x0
// 0060e487: JNZ 0x0060e473
//   XREF to: 0060e473 (CONDITIONAL_JUMP)
// 0060e489: SUB ESI,ESI
//   Label: LAB_0060e489
// 0060e48b: MOV EDI,ESI
//   Label: LAB_0060e48b
// 0060e48d: SUB ESI,EBX
// 0060e48f: PUSH ESI
// 0060e490: PUSH EBX
// 0060e491: LEA EBX,[ESP + 0x8]
//   XREF to: Stack[-0x20] (DATA)
// 0060e495: PUSH EBX
// 0060e496: CALL crt_string.c_strncpy_FUN_00600f40
//   XREF to: 00600f40 (UNCONDITIONAL_CALL)
// 0060e49b: ADD ESP,0xc
// 0060e49e: PUSH 0x10
// 0060e4a0: XOR BL,BL
// 0060e4a2: PUSH 0x0
// 0060e4a4: MOV byte ptr [ESP + ESI*0x1 + 0x8],BL
// 0060e4a8: LEA EBX,[ESP + 0x8]
//   XREF to: Stack[-0x20] (DATA)
// 0060e4ac: PUSH EBX
// 0060e4ad: CALL crt_stdlib.c_strtol_FUN_0060edfc
//   XREF to: 0060edfc (UNCONDITIONAL_CALL)
// 0060e4b2: ADD ESP,0xc
// 0060e4b5: PUSH EBP
// 0060e4b6: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 0060e4ba: PUSH EDX
// 0060e4bb: MOV EBX,EAX
// 0060e4bd: CALL crt_unknown.c_SetStdHandleToSomething_FUN_00608a1c
//   XREF to: 00608a1c (UNCONDITIONAL_CALL)
// 0060e4c2: ADD ESP,0x8
// 0060e4c5: PUSH EBX
// 0060e4c6: PUSH EBP
// 0060e4c7: LEA ESI,[EDI + 0x1]
// 0060e4ca: CALL crt_io.c_setFileDescriptorFlags_FUN_00608908
//   XREF to: 00608908 (UNCONDITIONAL_CALL)
// 0060e4cf: MOV EBX,ESI
// 0060e4d1: ADD ESP,0x8
// 0060e4d4: JMP 0x0060e3ce
//   XREF to: 0060e3ce (UNCONDITIONAL_JUMP)
// 0060e4d9: PUSH 0x659740
//   Label: LAB_0060e4d9
//   XREF to: 00659740 (DATA)
// 0060e4de: CALL crt_env.c_putenv_internal_FUN_0060ee80
//   XREF to: 0060ee80 (UNCONDITIONAL_CALL)
// 0060e4e3: ADD ESP,0x4
// 0060e4e6: ADD ESP,0x10
//   Label: LAB_0060e4e6
// 0060e4e9: POP EBP
// 0060e4ea: POP EDI
// 0060e4eb: POP ESI
// 0060e4ec: POP EBX
// 0060e4ed: RET
