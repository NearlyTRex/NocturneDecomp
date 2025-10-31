// Name: crt_process.c_build_cmdline_FUN_00610258
// Address: 00610258
// Address Range: [[00610258, 006103a2]]
// Convention: __cdecl
// Signature: int crt_process.c_build_cmdline_FUN_00610258(int argc, char * * argv, char * program, char * * out_cmdline, char * * out_environment, char * * out_buffer, int * out_bufsize, int copy_program_flag)
// Cross-references:
//   crt_process.c_spawnvp_FUN_0060f39c (0060f39c) at 0060f4a4 [UNCONDITIONAL_CALL]
// Globals:
//   int g_HeapFlags = 0x10000
//   char** g_EnvironmentBlock
// Function calls:
//   crt_errno.c_setErrno_FUN_00602790
//   crt_errno.c_SetWindowsError_FUN_006027c8
//   crt_heap.c_InternalHeapAlloc_FUN_00601bc0
//   crt_memory.c_malloc_FUN_00601bb0
//   crt_string.c_strcpy_advance_FUN_00610240
//   crt_string.c_strcpy_FUN_00610760
//   crt_string.c_strlen_FUN_0060f870

#include "nocturne.h"

int __cdecl
crt_process_c_build_cmdline_FUN_00610258
          (int argc,char **argv,char *program,char **out_cmdline,char **out_environment,
          char **out_buffer,int *out_bufsize,int copy_program_flag)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int unaff_EBX;
  char **ppcVar4;
  int unaff_EDI;
  int iVar5;
  uint uVar6;
  int in_stack_00000024;
  
  if (argv == (char **)0x0) {
    argv = g_EnvironmentBlock;
  }
  iVar5 = 0;
  if (argv != (char **)0x0) {
    pcVar3 = *argv;
    ppcVar4 = argv;
    while (pcVar3 != (char *)0x0) {
      iVar2 = crt_string_c_strlen_FUN_0060f870(*ppcVar4);
      ppcVar4 = ppcVar4 + 1;
      iVar5 = iVar5 + iVar2 + 1;
      pcVar3 = *ppcVar4;
    }
  }
  iVar5 = iVar5 + 1;
  if (out_bufsize != (int *)0x0) {
    iVar2 = crt_string_c_strlen_FUN_0060f870(*(char **)argc);
    iVar5 = iVar5 + iVar2 + 3;
  }
  uVar6 = iVar5 + 0xf;
  g_HeapFlags = 0x10;
  pcVar3 = (char *)crt_heap_c_InternalHeapAlloc_FUN_00601bc0(uVar6);
  if ((pcVar3 == (char *)0x0) &&
     (pcVar3 = (char *)crt_memory_c_malloc_FUN_00601bb0(uVar6), pcVar3 == (char *)0x0)) {
    crt_errno_c_setErrno_FUN_00602790(5);
    crt_errno_c_SetWindowsError_FUN_006027c8(8);
    uVar6 = 0xffffffff;
    g_HeapFlags = unaff_EBX;
  }
  else {
    g_HeapFlags = unaff_EDI;
    *out_environment = pcVar3;
    *out_bufsize = 0;
    *out_buffer = pcVar3;
    if (argv != (char **)0x0) {
      pcVar1 = *argv;
      while (pcVar1 != (char *)0x0) {
        pcVar1 = *argv;
        argv = argv + 1;
        pcVar3 = crt_string_c_strcpy_advance_FUN_00610240(pcVar3,pcVar1);
        pcVar3 = pcVar3 + 1;
        pcVar1 = *argv;
      }
    }
    *pcVar3 = '\0';
    if (in_stack_00000024 != 0) {
      crt_string_c_strcpy_FUN_00610760(pcVar3 + 3,*(char **)argc);
    }
    iVar5 = 0;
    if (*(int *)argc != 0) {
      while( true ) {
        argc = argc + 4;
        if (*(char **)argc == (char *)0x0) break;
        if (iVar5 != 0) {
          iVar5 = iVar5 + 1;
        }
        iVar2 = crt_string_c_strlen_FUN_0060f870(*(char **)argc);
        iVar5 = iVar5 + iVar2;
      }
    }
    *(int *)copy_program_flag = iVar5 + 0x108;
    uVar6 = uVar6 >> 4;
  }
  return uVar6;
}


// Assembly code:
// 00610258: PUSH EBX
//   Label: crt_process.c_build_cmdline_FUN_00610258
// 00610259: PUSH ESI
// 0061025a: PUSH EDI
// 0061025b: PUSH EBP
// 0061025c: SUB ESP,0x4
// 0061025f: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00610263: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00610267: TEST EBP,EBP
// 00610269: JNZ 0x00610271
//   XREF to: 00610271 (CONDITIONAL_JUMP)
// 0061026b: MOV EBP,dword ptr [0x03f9b864]
//   XREF to: 03f9b864 (READ)
// 00610271: XOR EDI,EDI
//   Label: LAB_00610271
// 00610273: TEST EBP,EBP
// 00610275: JZ 0x00610297
//   XREF to: 00610297 (CONDITIONAL_JUMP)
// 00610277: MOV EDX,dword ptr [EBP]
// 0061027a: MOV EBX,EBP
// 0061027c: TEST EDX,EDX
// 0061027e: JZ 0x00610297
//   XREF to: 00610297 (CONDITIONAL_JUMP)
// 00610280: MOV ECX,dword ptr [EBX]
//   Label: LAB_00610280
// 00610282: PUSH ECX
// 00610283: CALL crt_string.c_strlen_FUN_0060f870
//   XREF to: 0060f870 (UNCONDITIONAL_CALL)
// 00610288: INC EAX
// 00610289: ADD EBX,0x4
// 0061028c: ADD EDI,EAX
// 0061028e: MOV EAX,dword ptr [EBX]
// 00610290: ADD ESP,0x4
// 00610293: TEST EAX,EAX
// 00610295: JNZ 0x00610280
//   XREF to: 00610280 (CONDITIONAL_JUMP)
// 00610297: MOV EDX,dword ptr [ESP + 0x30]
//   Label: LAB_00610297
//   XREF to: Stack[0x1c] (READ)
// 0061029b: INC EDI
// 0061029c: TEST EDX,EDX
// 0061029e: JZ 0x006102b0
//   XREF to: 006102b0 (CONDITIONAL_JUMP)
// 006102a0: MOV EBX,dword ptr [ESI]
// 006102a2: PUSH EBX
// 006102a3: CALL crt_string.c_strlen_FUN_0060f870
//   XREF to: 0060f870 (UNCONDITIONAL_CALL)
// 006102a8: ADD EAX,0x3
// 006102ab: ADD ESP,0x4
// 006102ae: ADD EDI,EAX
// 006102b0: MOV ECX,0x10
//   Label: LAB_006102b0
// 006102b5: ADD EDI,0xf
// 006102b8: MOV EAX,[0x006854f4]
//   XREF to: 006854f4 (READ)
// 006102bd: PUSH EDI
// 006102be: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 006102c2: MOV dword ptr [0x006854f4],ECX
//   XREF to: 006854f4 (WRITE)
// 006102c8: CALL crt_heap.c_InternalHeapAlloc_FUN_00601bc0
//   XREF to: 00601bc0 (UNCONDITIONAL_CALL)
// 006102cd: ADD ESP,0x4
// 006102d0: TEST EAX,EAX
// 006102d2: JNZ 0x00610307
//   XREF to: 00610307 (CONDITIONAL_JUMP)
// 006102d4: PUSH EDI
// 006102d5: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 006102da: ADD ESP,0x4
// 006102dd: TEST EAX,EAX
// 006102df: JNZ 0x00610307
//   XREF to: 00610307 (CONDITIONAL_JUMP)
// 006102e1: PUSH 0x5
// 006102e3: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 006102e8: ADD ESP,0x4
// 006102eb: PUSH 0x8
// 006102ed: CALL crt_errno.c_SetWindowsError_FUN_006027c8
//   XREF to: 006027c8 (UNCONDITIONAL_CALL)
// 006102f2: ADD ESP,0x4
// 006102f5: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 006102f8: MOV [0x006854f4],EAX
//   XREF to: 006854f4 (WRITE)
// 006102fd: MOV EAX,0xffffffff
// 00610302: JMP 0x0061039b
//   XREF to: 0061039b (UNCONDITIONAL_JUMP)
// 00610307: MOV EBX,dword ptr [ESP]
//   Label: LAB_00610307
//   XREF to: Stack[-0x14] (DATA)
// 0061030a: MOV dword ptr [0x006854f4],EBX
//   XREF to: 006854f4 (WRITE)
// 00610310: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00610314: MOV dword ptr [EBX],EAX
// 00610316: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 0061031a: MOV dword ptr [EBX],0x0
// 00610320: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 00610324: MOV dword ptr [EBX],EAX
// 00610326: TEST EBP,EBP
// 00610328: JZ 0x00610349
//   XREF to: 00610349 (CONDITIONAL_JUMP)
// 0061032a: MOV EDX,dword ptr [EBP]
// 0061032d: MOV EBX,EBP
// 0061032f: TEST EDX,EDX
// 00610331: JZ 0x00610349
//   XREF to: 00610349 (CONDITIONAL_JUMP)
// 00610333: MOV ECX,dword ptr [EBX]
//   Label: LAB_00610333
// 00610335: PUSH ECX
// 00610336: PUSH EAX
// 00610337: ADD EBX,0x4
// 0061033a: CALL crt_string.c_strcpy_advance_FUN_00610240
//   XREF to: 00610240 (UNCONDITIONAL_CALL)
// 0061033f: ADD ESP,0x8
// 00610342: MOV EBP,dword ptr [EBX]
// 00610344: INC EAX
// 00610345: TEST EBP,EBP
// 00610347: JNZ 0x00610333
//   XREF to: 00610333 (CONDITIONAL_JUMP)
// 00610349: MOV EDX,dword ptr [ESP + 0x30]
//   Label: LAB_00610349
//   XREF to: Stack[0x1c] (READ)
// 0061034d: MOV byte ptr [EAX],0x0
// 00610350: INC EAX
// 00610351: TEST EDX,EDX
// 00610353: JZ 0x00610364
//   XREF to: 00610364 (CONDITIONAL_JUMP)
// 00610355: MOV EBX,dword ptr [ESI]
// 00610357: PUSH EBX
// 00610358: ADD EAX,0x2
// 0061035b: PUSH EAX
// 0061035c: CALL crt_string.c_strcpy_FUN_00610760
//   XREF to: 00610760 (UNCONDITIONAL_CALL)
// 00610361: ADD ESP,0x8
// 00610364: MOV ECX,dword ptr [ESI]
//   Label: LAB_00610364
// 00610366: XOR EBX,EBX
// 00610368: TEST ECX,ECX
// 0061036a: JZ 0x0061038a
//   XREF to: 0061038a (CONDITIONAL_JUMP)
// 0061036c: ADD ESI,0x4
// 0061036f: JMP 0x00610384
//   XREF to: 00610384 (UNCONDITIONAL_JUMP)
// 00610371: TEST EBX,EBX
//   Label: LAB_00610371
// 00610373: JZ 0x00610376
//   XREF to: 00610376 (CONDITIONAL_JUMP)
// 00610375: INC EBX
// 00610376: PUSH EAX
//   Label: LAB_00610376
// 00610377: CALL crt_string.c_strlen_FUN_0060f870
//   XREF to: 0060f870 (UNCONDITIONAL_CALL)
// 0061037c: ADD ESI,0x4
// 0061037f: ADD ESP,0x4
// 00610382: ADD EBX,EAX
// 00610384: MOV EAX,dword ptr [ESI]
//   Label: LAB_00610384
// 00610386: TEST EAX,EAX
// 00610388: JNZ 0x00610371
//   XREF to: 00610371 (CONDITIONAL_JUMP)
// 0061038a: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_0061038a
//   XREF to: Stack[0x18] (READ)
// 0061038e: ADD EBX,0x108
// 00610394: MOV dword ptr [EAX],EBX
// 00610396: MOV EAX,EDI
// 00610398: SHR EAX,0x4
// 0061039b: ADD ESP,0x4
//   Label: LAB_0061039b
// 0061039e: POP EBP
// 0061039f: POP EDI
// 006103a0: POP ESI
// 006103a1: POP EBX
// 006103a2: RET
