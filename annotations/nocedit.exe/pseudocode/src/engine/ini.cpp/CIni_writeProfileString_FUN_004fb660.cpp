// Name: engine_ini.cpp_CIni_writeProfileString_FUN_004fb660
// Address: 004fb660
// Address Range: [[004fb660, 004fb955]]
// Convention: __cdecl
// Signature: int engine_ini.cpp_CIni_writeProfileString_FUN_004fb660(CIni * this_ptr, char * section, char * key, char * value, char * filename)
// Cross-references:
//   engine_ini.cpp_writeProfileString_FUN_004fba40 (004fba40) at 004fba5b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_ini_cpp_0062fb82
//   TerminatedCString s_rt_0062fb94
//   TerminatedCString s_engine_ini_cpp_0062fb97
//   TerminatedCString s_cIni_writeProfileString__0062fba9
//   TerminatedCString s_engine_ini_cpp_0062fbd8
//   TerminatedCString s_wt_0062fbea
//   TerminatedCString s_engine_ini_cpp_0062fbed
//   TerminatedCString s_cIni_writeProfileString__0062fbff
//   TerminatedCString s_s_0062fc2f
//   TerminatedCString s_s_s_0062fc35
//   TerminatedCString s_s_s_0062fc3c
//   TerminatedCString s_s_s_0062fc43
//   TerminatedCString s_engine_ini_cpp_0062fc4a
//   TerminatedCString s_engine_ini_cpp_0062fc5c
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_io.c_deleteFile_FUN_005ff9d0
//   crt_stdio.c_fgets_FUN_005fefd0
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_rename_FUN_006015d0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_strcmp_FUN_005fef20
//   engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004fb470
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

int __cdecl
engine_ini_cpp_CIni_writeProfileString_FUN_004fb660
          (CIni *this_ptr,char *section,char *key,char *value,char *filename)

{
  char cVar1;
  int iVar2;
  FILE *stream;
  FILE *file;
  uint uVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  byte bVar5;
  char *in_stack_00000020;
  char *in_stack_00000034;
  char *in_stack_00000038;
  char *pcVar6;
  int line_number;
  char acStack_20a [26];
  char acStack_1f0 [236];
  char acStack_104 [4];
  char acStack_100 [4];
  char acStack_fc [232];
  undefined4 local_14;
  
  bVar5 = 0;
  local_14 = 0;
  iVar2 = engine_ini_cpp_CIni_findLineNumberOfVariable_FUN_004fb470
                    (this_ptr,section,key,filename,value);
  if (this_ptr->initialized == 0) {
    return 1;
  }
  stream = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (filename,(char *)0x0,"rt","..\\engine\\ini.cpp",0x182);
  if (stream == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 0x183;
    core_main_c_displayErrorAndQuit_FUN_00506f10("cIni::writeProfileString: Unable to open input");
  }
  pcVar6 = acStack_20a;
  pcVar4 = in_stack_00000020;
  do {
    pcVar6 = pcVar6 + 2;
    cVar1 = *pcVar4;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar6[1] = cVar1;
  } while (cVar1 != '\0');
  uVar3 = 0xffffffff;
  pcVar6 = in_stack_00000020;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  line_number = 0x186;
  pcVar4 = "..\\engine\\ini.cpp";
  pcVar6 = "wt";
  acStack_20a[~uVar3] = 'x';
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (acStack_20a + 2,(char *)0x0,pcVar6,pcVar4,line_number);
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 0x187;
    core_main_c_displayErrorAndQuit_FUN_00506f10("cIni::writeProfileString: Unable to open output");
  }
  if (iVar2 == 0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_100,"[%s]\n");
    bVar5 = (byte)stream->_flag;
    while ((bVar5 & 0x10) == 0) {
      pcVar6 = crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffd04,0xff,stream);
      if (pcVar6 == (char *)0x0) break;
      crt_stdio_c_fprintf_FUN_005fe6d0(file,&stack0xfffffd04);
      iVar2 = crt_string_c_strcmp_FUN_005fef20(acStack_104,&stack0xfffffcfc);
      if (iVar2 == 0) {
        crt_stdio_c_fprintf_FUN_005fe6d0(file,"%s=%s\n",in_stack_00000020);
        this_ptr = (CIni *)&DAT_00000001;
      }
      bVar5 = (byte)stream->_flag;
    }
    if (this_ptr == (CIni *)0x0) {
      crt_stdio_c_fprintf_FUN_005fe6d0(file,acStack_fc);
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%s=%s\n",in_stack_00000020);
    }
  }
  else {
    for (; -1 < iVar2; iVar2 = iVar2 + -1) {
      crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffd00,0xff,stream);
      crt_stdio_c_fprintf_FUN_005fe6d0(file,&stack0xfffffd04);
    }
    crt_stdio_c_fprintf_FUN_005fe6d0(file,"%s=%s\n","%s=%s\n",in_stack_00000020);
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffd00,0xff,stream);
    bVar5 = (byte)stream->_flag;
    while ((bVar5 & 0x10) == 0) {
      pcVar6 = crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffd04,0xff,stream);
      if (pcVar6 == (char *)0x0) break;
      crt_stdio_c_fprintf_FUN_005fe6d0(file,&stack0xfffffd04);
      bVar5 = (byte)stream->_flag;
    }
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\engine\\ini.cpp",0x1e8);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\ini.cpp",0x1e9);
  crt_io_c_deleteFile_FUN_005ff9d0(in_stack_00000034);
  crt_stdio_c_rename_FUN_006015d0(acStack_1f0,in_stack_00000038);
  return 1;
}


// Assembly code:
// 004fb660: PUSH EBX
//   Label: engine_ini.cpp_CIni_writeProfileString_FUN_004fb660
// 004fb661: PUSH ESI
// 004fb662: PUSH EDI
// 004fb663: PUSH EBP
// 004fb664: SUB ESP,0x304
// 004fb66a: MOV EBX,dword ptr [ESP + 0x318]
//   XREF to: Stack[0x4] (READ)
// 004fb671: MOV ECX,dword ptr [ESP + 0x324]
//   XREF to: Stack[0x10] (READ)
// 004fb678: PUSH ECX
// 004fb679: MOV ESI,dword ptr [ESP + 0x32c]
//   XREF to: Stack[0x14] (READ)
// 004fb680: PUSH ESI
// 004fb681: MOV EDI,dword ptr [ESP + 0x328]
//   XREF to: Stack[0xc] (READ)
// 004fb688: PUSH EDI
// 004fb689: MOV EBP,dword ptr [ESP + 0x328]
//   XREF to: Stack[0x8] (READ)
// 004fb690: PUSH EBP
// 004fb691: XOR EDX,EDX
// 004fb693: PUSH EBX
// 004fb694: MOV dword ptr [ESP + 0x314],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004fb69b: CALL engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004fb470
//   XREF to: 004fb470 (UNCONDITIONAL_CALL)
// 004fb6a0: MOV EBP,EAX
// 004fb6a2: MOV EAX,dword ptr [EBX]
// 004fb6a4: ADD ESP,0x14
// 004fb6a7: TEST EAX,EAX
// 004fb6a9: JNZ 0x004fb6bb
//   XREF to: 004fb6bb (CONDITIONAL_JUMP)
// 004fb6ab: MOV EAX,0x1
// 004fb6b0: ADD ESP,0x304
// 004fb6b6: POP EBP
// 004fb6b7: POP EDI
// 004fb6b8: POP ESI
// 004fb6b9: POP EBX
// 004fb6ba: RET
// 004fb6bb: PUSH 0x182
//   Label: LAB_004fb6bb
// 004fb6c0: PUSH 0x62fb82
//   XREF to: 0062fb82 (DATA)
// 004fb6c5: PUSH 0x62fb94
//   XREF to: 0062fb94 (DATA)
// 004fb6ca: PUSH 0x0
// 004fb6cc: PUSH ESI
// 004fb6cd: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004fb6d2: ADD ESP,0x14
// 004fb6d5: MOV EBX,EAX
// 004fb6d7: TEST EAX,EAX
// 004fb6d9: JNZ 0x004fb6fe
//   XREF to: 004fb6fe (CONDITIONAL_JUMP)
// 004fb6db: MOV ECX,0x62fb97
//   XREF to: 0062fb97 (PARAM)
// 004fb6e0: MOV ESI,0x183
// 004fb6e5: PUSH 0x62fba9
//   XREF to: 0062fba9 (DATA)
// 004fb6ea: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004fb6f0: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004fb6f6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004fb6fb: ADD ESP,0x4
// 004fb6fe: MOV ESI,dword ptr [ESP + 0x328]
//   Label: LAB_004fb6fe
//   XREF to: Stack[0x14] (READ)
// 004fb705: LEA EDI,[ESP + 0x100]
//   XREF to: Stack[-0x214] (DATA)
// 004fb70c: PUSH EDI
// 004fb70d: MOV AL,byte ptr [ESI]
//   Label: LAB_004fb70d
// 004fb70f: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x214] (DATA)
// 004fb711: CMP AL,0x0
// 004fb713: JZ 0x004fb725
//   XREF to: 004fb725 (CONDITIONAL_JUMP)
// 004fb715: MOV AL,byte ptr [ESI + 0x1]
// 004fb718: ADD ESI,0x2
// 004fb71b: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x213] (WRITE)
// 004fb71e: ADD EDI,0x2
// 004fb721: CMP AL,0x0
// 004fb723: JNZ 0x004fb70d
//   XREF to: 004fb70d (CONDITIONAL_JUMP)
// 004fb725: POP EDI
//   Label: LAB_004fb725
// 004fb726: MOV EDI,dword ptr [ESP + 0x328]
//   XREF to: Stack[0x14] (READ)
// 004fb72d: SUB ECX,ECX
// 004fb72f: DEC ECX
// 004fb730: XOR EAX,EAX
// 004fb732: SCASB.REPNE ES:EDI
// 004fb734: NOT ECX
// 004fb736: DEC ECX
// 004fb737: PUSH 0x186
// 004fb73c: PUSH 0x62fbd8
//   XREF to: 0062fbd8 (DATA)
// 004fb741: PUSH 0x62fbea
//   XREF to: 0062fbea (DATA)
// 004fb746: MOV AH,0x78
// 004fb748: PUSH 0x0
// 004fb74a: MOV byte ptr [ESP + ECX*0x1 + 0x10f],AH
//   XREF to: Stack[-0x214] (DATA)
// 004fb751: LEA EAX,[ESP + 0x110]
//   XREF to: Stack[-0x214] (DATA)
// 004fb758: PUSH EAX
// 004fb759: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004fb75e: ADD ESP,0x14
// 004fb761: MOV ESI,EAX
// 004fb763: TEST EAX,EAX
// 004fb765: JNZ 0x004fb789
//   XREF to: 004fb789 (CONDITIONAL_JUMP)
// 004fb767: MOV EDI,0x62fbed
//   XREF to: 0062fbed (DATA)
// 004fb76c: MOV EAX,0x187
// 004fb771: PUSH 0x62fbff
//   XREF to: 0062fbff (DATA)
// 004fb776: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 004fb77c: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004fb781: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004fb786: ADD ESP,0x4
// 004fb789: TEST EBP,EBP
//   Label: LAB_004fb789
// 004fb78b: JZ 0x004fb7b7
//   XREF to: 004fb7b7 (CONDITIONAL_JUMP)
// 004fb78d: TEST EBP,EBP
//   Label: LAB_004fb78d
// 004fb78f: JL 0x004fb8ea
//   XREF to: 004fb8ea (CONDITIONAL_JUMP)
// 004fb795: PUSH EBX
// 004fb796: PUSH 0xff
// 004fb79b: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x314] (DATA)
// 004fb79f: PUSH EAX
// 004fb7a0: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004fb7a5: ADD ESP,0xc
// 004fb7a8: MOV EAX,ESP
// 004fb7aa: PUSH EAX
// 004fb7ab: PUSH ESI
// 004fb7ac: DEC EBP
// 004fb7ad: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004fb7b2: ADD ESP,0x8
// 004fb7b5: JMP 0x004fb78d
//   XREF to: 004fb78d (UNCONDITIONAL_JUMP)
// 004fb7b7: MOV EDX,dword ptr [ESP + 0x31c]
//   Label: LAB_004fb7b7
//   XREF to: Stack[0x8] (READ)
// 004fb7be: PUSH EDX
// 004fb7bf: PUSH 0x62fc2f
//   XREF to: 0062fc2f (DATA)
// 004fb7c4: LEA EAX,[ESP + 0x208]
//   XREF to: Stack[-0x114] (DATA)
// 004fb7cb: PUSH EAX
// 004fb7cc: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004fb7d1: MOV DL,byte ptr [EBX + 0xc]
// 004fb7d4: ADD ESP,0xc
// 004fb7d7: TEST DL,0x10
// 004fb7da: JNZ 0x004fb7fe
//   XREF to: 004fb7fe (CONDITIONAL_JUMP)
// 004fb7dc: MOV EBP,dword ptr [ESP + 0x324]
//   XREF to: Stack[0x10] (READ)
// 004fb7e3: PUSH EBX
//   Label: LAB_004fb7e3
// 004fb7e4: PUSH 0xff
// 004fb7e9: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x314] (DATA)
// 004fb7ed: PUSH EAX
// 004fb7ee: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004fb7f3: ADD ESP,0xc
// 004fb7f6: TEST EAX,EAX
// 004fb7f8: JNZ 0x004fb895
//   XREF to: 004fb895 (CONDITIONAL_JUMP)
// 004fb7fe: CMP dword ptr [ESP + 0x300],0x0
//   Label: LAB_004fb7fe
//   XREF to: Stack[-0x14] (READ)
// 004fb806: JNZ 0x004fb837
//   XREF to: 004fb837 (CONDITIONAL_JUMP)
// 004fb808: LEA EAX,[ESP + 0x200]
//   XREF to: Stack[-0x114] (DATA)
// 004fb80f: PUSH EAX
// 004fb810: PUSH ESI
// 004fb811: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004fb816: ADD ESP,0x8
// 004fb819: MOV EDI,dword ptr [ESP + 0x324]
//   XREF to: Stack[0x10] (READ)
// 004fb820: PUSH EDI
// 004fb821: MOV EBP,dword ptr [ESP + 0x324]
//   XREF to: Stack[0xc] (READ)
// 004fb828: PUSH EBP
// 004fb829: PUSH 0x62fc3c
//   XREF to: 0062fc3c (DATA)
// 004fb82e: PUSH ESI
// 004fb82f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004fb834: ADD ESP,0x10
// 004fb837: PUSH 0x1e8
//   Label: LAB_004fb837
// 004fb83c: PUSH 0x62fc4a
//   XREF to: 0062fc4a (DATA)
// 004fb841: PUSH EBX
// 004fb842: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004fb847: ADD ESP,0xc
// 004fb84a: PUSH 0x1e9
// 004fb84f: PUSH 0x62fc5c
//   XREF to: 0062fc5c (DATA)
// 004fb854: PUSH ESI
// 004fb855: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004fb85a: ADD ESP,0xc
// 004fb85d: MOV EAX,dword ptr [ESP + 0x328]
//   XREF to: Stack[0x14] (READ)
// 004fb864: PUSH EAX
// 004fb865: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 004fb86a: ADD ESP,0x4
// 004fb86d: MOV EDX,dword ptr [ESP + 0x328]
//   XREF to: Stack[0x14] (READ)
// 004fb874: PUSH EDX
// 004fb875: LEA EAX,[ESP + 0x104]
//   XREF to: Stack[-0x214] (DATA)
// 004fb87c: PUSH EAX
// 004fb87d: CALL crt_stdio.c_rename_FUN_006015d0
//   XREF to: 006015d0 (UNCONDITIONAL_CALL)
// 004fb882: MOV EAX,0x1
// 004fb887: ADD ESP,0x8
// 004fb88a: ADD ESP,0x304
// 004fb890: POP EBP
// 004fb891: POP EDI
// 004fb892: POP ESI
// 004fb893: POP EBX
// 004fb894: RET
// 004fb895: MOV EAX,ESP
//   Label: LAB_004fb895
// 004fb897: PUSH EAX
// 004fb898: PUSH ESI
// 004fb899: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004fb89e: ADD ESP,0x8
// 004fb8a1: MOV EAX,ESP
// 004fb8a3: PUSH EAX
// 004fb8a4: LEA EAX,[ESP + 0x204]
//   XREF to: Stack[-0x114] (DATA)
// 004fb8ab: PUSH EAX
// 004fb8ac: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004fb8b1: ADD ESP,0x8
// 004fb8b4: TEST EAX,EAX
// 004fb8b6: JNZ 0x004fb8db
//   XREF to: 004fb8db (CONDITIONAL_JUMP)
// 004fb8b8: PUSH EBP
// 004fb8b9: MOV EAX,dword ptr [ESP + 0x324]
//   XREF to: Stack[0xc] (READ)
// 004fb8c0: PUSH EAX
// 004fb8c1: PUSH 0x62fc35
//   XREF to: 0062fc35 (DATA)
// 004fb8c6: PUSH ESI
// 004fb8c7: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004fb8cc: MOV EDX,0x1
// 004fb8d1: ADD ESP,0x10
// 004fb8d4: MOV dword ptr [ESP + 0x300],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004fb8db: TEST byte ptr [EBX + 0xc],0x10
//   Label: LAB_004fb8db
// 004fb8df: JNZ 0x004fb7fe
//   XREF to: 004fb7fe (CONDITIONAL_JUMP)
// 004fb8e5: JMP 0x004fb7e3
//   XREF to: 004fb7e3 (UNCONDITIONAL_JUMP)
// 004fb8ea: MOV ECX,dword ptr [ESP + 0x324]
//   Label: LAB_004fb8ea
//   XREF to: Stack[0x10] (READ)
// 004fb8f1: PUSH ECX
// 004fb8f2: MOV EDI,dword ptr [ESP + 0x324]
//   XREF to: Stack[0xc] (READ)
// 004fb8f9: PUSH EDI
// 004fb8fa: PUSH 0x62fc43
//   XREF to: 0062fc43 (DATA)
// 004fb8ff: PUSH ESI
// 004fb900: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004fb905: ADD ESP,0x10
// 004fb908: PUSH EBX
// 004fb909: PUSH 0xff
// 004fb90e: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x314] (DATA)
// 004fb912: PUSH EAX
// 004fb913: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004fb918: MOV DH,byte ptr [EBX + 0xc]
// 004fb91b: ADD ESP,0xc
// 004fb91e: TEST DH,0x10
// 004fb921: JNZ 0x004fb837
//   Label: LAB_004fb921
//   XREF to: 004fb837 (CONDITIONAL_JUMP)
// 004fb927: PUSH EBX
// 004fb928: PUSH 0xff
// 004fb92d: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x314] (DATA)
// 004fb931: PUSH EAX
// 004fb932: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004fb937: ADD ESP,0xc
// 004fb93a: TEST EAX,EAX
// 004fb93c: JZ 0x004fb837
//   XREF to: 004fb837 (CONDITIONAL_JUMP)
// 004fb942: MOV EAX,ESP
// 004fb944: PUSH EAX
// 004fb945: PUSH ESI
// 004fb946: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004fb94b: MOV CL,byte ptr [EBX + 0xc]
// 004fb94e: ADD ESP,0x8
// 004fb951: TEST CL,0x10
// 004fb954: JMP 0x004fb921
//   XREF to: 004fb921 (UNCONDITIONAL_JUMP)
