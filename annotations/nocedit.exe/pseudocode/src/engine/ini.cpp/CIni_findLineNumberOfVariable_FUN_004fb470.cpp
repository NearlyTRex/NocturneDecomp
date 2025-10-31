// Name: engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004fb470
// Address: 004fb470
// Address Range: [[004fb470, 004fb653]]
// Convention: __cdecl
// Signature: int engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004fb470(CIni * this_ptr, char * section, char * key, char * value, char * filename)
// Cross-references:
//   engine_ini.cpp_CIni_writeProfileString_FUN_004fb660 (004fb660) at 004fb69b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_ini_cpp_0062fb0e
//   TerminatedCString s_rt_0062fb20
//   TerminatedCString s_engine_ini_cpp_0062fb23
//   TerminatedCString s_cIni_FindLineNumberOfVar_0062fb35
//   TerminatedCString s_s_0062fb6a
//   TerminatedCString s_engine_ini_cpp_0062fb70
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fgets_FUN_005fefd0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_strcmp_FUN_005fef20
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

int __cdecl
engine_ini_cpp_CIni_findLineNumberOfVariable_FUN_004fb470
          (CIni *this_ptr,char *section,char *key,char *value,char *filename)

{
  byte bVar1;
  bool bVar2;
  FILE *stream;
  char *pcVar3;
  int iVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  int unaff_EDI;
  char *in_stack_0000001c;
  char acStack_204 [248];
  char acStack_10c [8];
  char acStack_104 [244];
  
  iVar5 = 0;
  bVar2 = false;
  this_ptr->initialized = 1;
  stream = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (value,(char *)0x0,"rt","..\\engine\\ini.cpp",0xf4);
  if (stream == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 0xf5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("cIni::FindLineNumberOfVariable: Unable to open input");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_10c,"[%s]\n",value);
  while ((stream->_flag & 0x10) == 0) {
    pcVar3 = crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffdf8,0xff,stream);
    if (pcVar3 == (char *)0x0) break;
    iVar4 = crt_string_c_strcmp_FUN_005fef20(acStack_204,acStack_104);
    if (iVar4 == 0) {
      bVar1 = (byte)stream->_flag;
      bVar2 = false;
      goto LAB_004fb4f0;
    }
    iVar5 = iVar5 + 1;
  }
LAB_004fb5ab:
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\engine\\ini.cpp",0x154);
  if (bVar2) {
    return iVar5;
  }
  return 0;
LAB_004fb4f0:
  if ((bVar1 & 0x10) != 0) goto LAB_004fb5ab;
  pcVar3 = crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffdf8,0xff,stream);
  pcVar6 = &stack0xfffffdf8;
  if (pcVar3 == (char *)0x0) goto LAB_004fb5ab;
  do {
    pcVar3 = pcVar6;
    if (*pcVar6 == '\n') goto LAB_004fb52d;
    if (*pcVar6 == '\0') break;
    pcVar3 = pcVar6 + 1;
    if (*pcVar3 == '\n') goto LAB_004fb52d;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar3 != '\0');
  pcVar3 = (char *)0x0;
LAB_004fb52d:
  pcVar6 = &stack0xfffffdf8;
  if (pcVar3 != (char *)0x0) {
    *pcVar3 = '\0';
    pcVar6 = &stack0xfffffdf8;
  }
  do {
    pcVar3 = pcVar6;
    if (*pcVar6 == '=') goto LAB_004fb550;
    if (*pcVar6 == '\0') break;
    pcVar3 = pcVar6 + 1;
    if (*pcVar3 == '=') goto LAB_004fb550;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar3 != '\0');
  pcVar3 = (char *)0x0;
LAB_004fb550:
  if (pcVar3 != (char *)0x0) {
    *pcVar3 = '\0';
  }
  iVar4 = crt_string_c_strcmp_FUN_005fef20(&stack0xfffffdf8,value);
  if (iVar4 == 0) {
    bVar2 = true;
    iVar4 = crt_string_c_strcmp_FUN_005fef20((char *)(unaff_EDI + 1),in_stack_0000001c);
    if (iVar4 == 0) {
      value[0] = '\0';
      value[1] = '\0';
      value[2] = '\0';
      value[3] = '\0';
    }
    goto LAB_004fb5ab;
  }
  bVar1 = (byte)stream->_flag;
  iVar5 = iVar5 + 1;
  goto LAB_004fb4f0;
}


// Assembly code:
// 004fb470: PUSH EBX
//   Label: engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004fb470
// 004fb471: PUSH ESI
// 004fb472: PUSH EDI
// 004fb473: PUSH EBP
// 004fb474: SUB ESP,0x204
// 004fb47a: PUSH 0xf4
// 004fb47f: PUSH 0x62fb0e
//   XREF to: 0062fb0e (DATA)
// 004fb484: PUSH 0x62fb20
//   XREF to: 0062fb20 (DATA)
// 004fb489: XOR EBX,EBX
// 004fb48b: PUSH EBX
// 004fb48c: MOV EDX,dword ptr [ESP + 0x234]
//   XREF to: Stack[0x10] (READ)
// 004fb493: MOV EAX,dword ptr [ESP + 0x228]
//   XREF to: Stack[0x4] (READ)
// 004fb49a: PUSH EDX
// 004fb49b: XOR EBP,EBP
// 004fb49d: MOV dword ptr [EAX],0x1
// 004fb4a3: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004fb4a8: ADD ESP,0x14
// 004fb4ab: MOV EDI,EAX
// 004fb4ad: TEST EAX,EAX
// 004fb4af: JZ 0x004fb5d3
//   XREF to: 004fb5d3 (CONDITIONAL_JUMP)
// 004fb4b5: MOV EAX,dword ptr [ESP + 0x21c]
//   Label: LAB_004fb4b5
//   XREF to: Stack[0x8] (READ)
// 004fb4bc: PUSH EAX
// 004fb4bd: PUSH 0x62fb6a
//   XREF to: 0062fb6a (DATA)
// 004fb4c2: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x114] (DATA)
// 004fb4c9: PUSH EAX
// 004fb4ca: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004fb4cf: ADD ESP,0xc
// 004fb4d2: TEST EBP,EBP
//   Label: LAB_004fb4d2
// 004fb4d4: JNZ 0x004fb4e0
//   XREF to: 004fb4e0 (CONDITIONAL_JUMP)
// 004fb4d6: TEST byte ptr [EDI + 0xc],0x10
// 004fb4da: JZ 0x004fb5fb
//   XREF to: 004fb5fb (CONDITIONAL_JUMP)
// 004fb4e0: TEST EBP,EBP
//   Label: LAB_004fb4e0
// 004fb4e2: JZ 0x004fb5ab
//   XREF to: 004fb5ab (CONDITIONAL_JUMP)
// 004fb4e8: MOV DL,byte ptr [EDI + 0xc]
//   Label: LAB_004fb4e8
// 004fb4eb: XOR EBP,EBP
// 004fb4ed: TEST DL,0x10
// 004fb4f0: JNZ 0x004fb5ab
//   Label: LAB_004fb4f0
//   XREF to: 004fb5ab (CONDITIONAL_JUMP)
// 004fb4f6: PUSH EDI
// 004fb4f7: PUSH 0xff
// 004fb4fc: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x214] (DATA)
// 004fb500: PUSH EAX
// 004fb501: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004fb506: ADD ESP,0xc
// 004fb509: TEST EAX,EAX
// 004fb50b: JZ 0x004fb5ab
//   XREF to: 004fb5ab (CONDITIONAL_JUMP)
// 004fb511: MOV DL,0xa
// 004fb513: MOV ESI,ESP
// 004fb515: MOV AL,byte ptr [ESI]
//   Label: LAB_004fb515
//   XREF to: Stack[-0x214] (DATA)
// 004fb517: CMP AL,DL
// 004fb519: JZ 0x004fb52d
//   XREF to: 004fb52d (CONDITIONAL_JUMP)
// 004fb51b: CMP AL,0x0
// 004fb51d: JZ 0x004fb52b
//   XREF to: 004fb52b (CONDITIONAL_JUMP)
// 004fb51f: INC ESI
// 004fb520: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x213] (DATA)
// 004fb522: CMP AL,DL
// 004fb524: JZ 0x004fb52d
//   XREF to: 004fb52d (CONDITIONAL_JUMP)
// 004fb526: INC ESI
// 004fb527: CMP AL,0x0
// 004fb529: JNZ 0x004fb515
//   XREF to: 004fb515 (CONDITIONAL_JUMP)
// 004fb52b: SUB ESI,ESI
//   Label: LAB_004fb52b
// 004fb52d: TEST ESI,ESI
//   Label: LAB_004fb52d
// 004fb52f: JZ 0x004fb534
//   XREF to: 004fb534 (CONDITIONAL_JUMP)
// 004fb531: MOV byte ptr [ESI],0x0
//   XREF to: Stack[-0x211] (DATA)
// 004fb534: MOV DL,0x3d
//   Label: LAB_004fb534
// 004fb536: MOV ESI,ESP
// 004fb538: MOV AL,byte ptr [ESI]
//   Label: LAB_004fb538
//   XREF to: Stack[-0x214] (DATA)
// 004fb53a: CMP AL,DL
// 004fb53c: JZ 0x004fb550
//   XREF to: 004fb550 (CONDITIONAL_JUMP)
// 004fb53e: CMP AL,0x0
// 004fb540: JZ 0x004fb54e
//   XREF to: 004fb54e (CONDITIONAL_JUMP)
// 004fb542: INC ESI
// 004fb543: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x213] (DATA)
// 004fb545: CMP AL,DL
// 004fb547: JZ 0x004fb550
//   XREF to: 004fb550 (CONDITIONAL_JUMP)
// 004fb549: INC ESI
// 004fb54a: CMP AL,0x0
// 004fb54c: JNZ 0x004fb538
//   XREF to: 004fb538 (CONDITIONAL_JUMP)
// 004fb54e: SUB ESI,ESI
//   Label: LAB_004fb54e
// 004fb550: MOV dword ptr [ESP + 0x200],ESI
//   Label: LAB_004fb550
//   XREF to: Stack[-0x14] (WRITE)
// 004fb557: TEST ESI,ESI
// 004fb559: JZ 0x004fb55e
//   XREF to: 004fb55e (CONDITIONAL_JUMP)
// 004fb55b: MOV byte ptr [ESI],0x0
//   XREF to: Stack[-0x211] (DATA)
// 004fb55e: MOV EDX,dword ptr [ESP + 0x220]
//   Label: LAB_004fb55e
//   XREF to: Stack[0xc] (READ)
// 004fb565: PUSH EDX
// 004fb566: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x214] (DATA)
// 004fb56a: PUSH EAX
// 004fb56b: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004fb570: ADD ESP,0x8
// 004fb573: TEST EAX,EAX
// 004fb575: JNZ 0x004fb639
//   XREF to: 004fb639 (CONDITIONAL_JUMP)
// 004fb57b: MOV EBP,0x1
// 004fb580: MOV ECX,dword ptr [ESP + 0x228]
//   XREF to: Stack[0x14] (READ)
// 004fb587: MOV EAX,dword ptr [ESP + 0x200]
//   XREF to: Stack[-0x14] (READ)
// 004fb58e: PUSH ECX
// 004fb58f: ADD EAX,EBP
// 004fb591: PUSH EAX
// 004fb592: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004fb597: ADD ESP,0x8
// 004fb59a: TEST EAX,EAX
// 004fb59c: JNZ 0x004fb5ab
//   XREF to: 004fb5ab (CONDITIONAL_JUMP)
// 004fb59e: MOV EAX,dword ptr [ESP + 0x218]
//   XREF to: Stack[0x4] (READ)
// 004fb5a5: MOV dword ptr [EAX],0x0
// 004fb5ab: PUSH 0x154
//   Label: LAB_004fb5ab
// 004fb5b0: PUSH 0x62fb70
//   XREF to: 0062fb70 (DATA)
// 004fb5b5: PUSH EDI
// 004fb5b6: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004fb5bb: ADD ESP,0xc
// 004fb5be: TEST EBP,EBP
// 004fb5c0: JZ 0x004fb645
//   XREF to: 004fb645 (CONDITIONAL_JUMP)
// 004fb5c6: MOV EAX,EBX
// 004fb5c8: ADD ESP,0x204
// 004fb5ce: POP EBP
// 004fb5cf: POP EDI
// 004fb5d0: POP ESI
// 004fb5d1: POP EBX
// 004fb5d2: RET
// 004fb5d3: MOV ECX,0x62fb23
//   Label: LAB_004fb5d3
//   XREF to: 0062fb23 (PARAM)
// 004fb5d8: MOV ESI,0xf5
// 004fb5dd: PUSH 0x62fb35
//   XREF to: 0062fb35 (DATA)
// 004fb5e2: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004fb5e8: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004fb5ee: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004fb5f3: ADD ESP,0x4
// 004fb5f6: JMP 0x004fb4b5
//   XREF to: 004fb4b5 (UNCONDITIONAL_JUMP)
// 004fb5fb: PUSH EDI
//   Label: LAB_004fb5fb
// 004fb5fc: PUSH 0xff
// 004fb601: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x214] (DATA)
// 004fb605: PUSH EAX
// 004fb606: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004fb60b: ADD ESP,0xc
// 004fb60e: TEST EAX,EAX
// 004fb610: JZ 0x004fb4e0
//   XREF to: 004fb4e0 (CONDITIONAL_JUMP)
// 004fb616: LEA EAX,[ESP + 0x100]
//   XREF to: Stack[-0x114] (DATA)
// 004fb61d: PUSH EAX
// 004fb61e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x214] (DATA)
// 004fb622: PUSH EAX
// 004fb623: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004fb628: ADD ESP,0x8
// 004fb62b: TEST EAX,EAX
// 004fb62d: JZ 0x004fb4e8
//   XREF to: 004fb4e8 (CONDITIONAL_JUMP)
// 004fb633: INC EBX
// 004fb634: JMP 0x004fb4d2
//   XREF to: 004fb4d2 (UNCONDITIONAL_JUMP)
// 004fb639: MOV DH,byte ptr [EDI + 0xc]
//   Label: LAB_004fb639
// 004fb63c: INC EBX
// 004fb63d: TEST DH,0x10
// 004fb640: JMP 0x004fb4f0
//   XREF to: 004fb4f0 (UNCONDITIONAL_JUMP)
// 004fb645: XOR EBX,EBX
//   Label: LAB_004fb645
// 004fb647: MOV EAX,EBX
// 004fb649: ADD ESP,0x204
// 004fb64f: POP EBP
// 004fb650: POP EDI
// 004fb651: POP ESI
// 004fb652: POP EBX
// 004fb653: RET
