// Name: engine_ini.cpp_getProfileInteger_FUN_004fb9a0
// Address: 004fb9a0
// Address Range: [[004fb9a0, 004fba3c]]
// Convention: __cdecl
// Signature: int engine_ini.cpp_getProfileInteger_FUN_004fb9a0(char * section, char * key, char * default_value, char * filename)
// Globals:
//   TerminatedCString s_d_0062fc6e
//   TerminatedCString s_engine_ini_cpp_0062fc71
//   TerminatedCString s_Bad_ini_read_0062fc83
//   CIni g_CIniInstance
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdlib.c_atoi_FUN_005ffef0
//   engine_ini.cpp_CIni_getProfileString_FUN_004fb250

#include "nocturne.h"

int __cdecl
engine_ini_cpp_getProfileInteger_FUN_004fb9a0
          (char *section,char *key,char *default_value,char *filename)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char *in_stack_00000014;
  char acStack_200 [244];
  char local_10c [4];
  char acStack_108 [252];
  
  crt_stdio_c_sprintf_FUN_005fdbd0(local_10c,"%d",default_value);
  iVar1 = engine_ini_cpp_CIni_getProfileString_FUN_004fb250
                    (&g_CIniInstance,key,default_value,acStack_108,&stack0xfffffdf8,0xff,
                     in_stack_00000014);
  if (iVar1 == 0) {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 0x235;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Bad ini read!");
  }
  iVar1 = crt_stdlib_c_atoi_FUN_005ffef0(acStack_200);
  return iVar1;
}


// Assembly code:
// 004fb9a0: PUSH EBX
//   Label: engine_ini.cpp_getProfileInteger_FUN_004fb9a0
// 004fb9a1: PUSH ESI
// 004fb9a2: PUSH EBP
// 004fb9a3: SUB ESP,0x200
// 004fb9a9: MOV EDX,dword ptr [ESP + 0x218]
//   XREF to: Stack[0xc] (READ)
// 004fb9b0: PUSH EDX
// 004fb9b1: PUSH 0x62fc6e
//   XREF to: 0062fc6e (DATA)
// 004fb9b6: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x10c] (DATA)
// 004fb9bd: PUSH EAX
// 004fb9be: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004fb9c3: ADD ESP,0xc
// 004fb9c6: MOV ECX,dword ptr [ESP + 0x21c]
//   XREF to: Stack[0x10] (READ)
// 004fb9cd: PUSH ECX
// 004fb9ce: PUSH 0xff
// 004fb9d3: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x20c] (DATA)
// 004fb9d7: PUSH EAX
// 004fb9d8: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0x10c] (DATA)
// 004fb9df: PUSH EAX
// 004fb9e0: MOV EBX,dword ptr [ESP + 0x224]
//   XREF to: Stack[0x8] (READ)
// 004fb9e7: PUSH EBX
// 004fb9e8: MOV ESI,dword ptr [ESP + 0x224]
//   XREF to: Stack[0x4] (READ)
// 004fb9ef: PUSH ESI
// 004fb9f0: PUSH 0x2db8a60
//   XREF to: 02db8a60 (DATA)
// 004fb9f5: CALL engine_ini.cpp_CIni_getProfileString_FUN_004fb250
//   XREF to: 004fb250 (UNCONDITIONAL_CALL)
// 004fb9fa: ADD ESP,0x1c
// 004fb9fd: TEST EAX,EAX
// 004fb9ff: JZ 0x004fba16
//   XREF to: 004fba16 (CONDITIONAL_JUMP)
// 004fba01: MOV EAX,ESP
//   Label: LAB_004fba01
// 004fba03: PUSH EAX
// 004fba04: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 004fba09: ADD ESP,0x4
// 004fba0c: ADD ESP,0x200
// 004fba12: POP EBP
// 004fba13: POP ESI
// 004fba14: POP EBX
// 004fba15: RET
// 004fba16: PUSH EDI
//   Label: LAB_004fba16
// 004fba17: MOV EDI,0x62fc71
//   XREF to: 0062fc71 (DATA)
// 004fba1c: MOV EBP,0x235
// 004fba21: PUSH 0x62fc83
//   XREF to: 0062fc83 (DATA)
// 004fba26: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 004fba2c: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 004fba32: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004fba37: ADD ESP,0x4
// 004fba3a: POP EDI
// 004fba3b: JMP 0x004fba01
//   XREF to: 004fba01 (UNCONDITIONAL_JUMP)
