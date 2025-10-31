// Name: crt_stdlib.c_system_FUN_00602130
// Address: 00602130
// Address Range: [[00602130, 006021b4]]
// Convention: __watcallStack
// Signature: int crt_stdlib.c_system_FUN_00602130(char * command)
// Cross-references:
//   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 (00559f80) at 0055a244 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_ComSpec_00658fb0
//   TerminatedCString s_CMD_EXE_00658fb8
//   TerminatedCString s_CMD_00658fcc
//   TerminatedCString s_COMMAND_00658fd0
//   int g_ProcessSpawnEnabled = 0x1
// Function calls:
//   crt_env.c_getenv_FUN_006013f0
//   crt_process.c_set_shell_execute_flag_FUN_00609c80
//   crt_process.c_spawnCommand_FUN_00609c90

#include "nocturne.h"

int __watcallStack crt_stdlib_c_system_FUN_00602130(char *command)

{
  int iVar1;
  char *cmdPath;
  int iVar2;
  char *args;
  char *cmdName;
  BADSPACEBASE *in_ESP;
  void *envp;
  undefined4 in_stack_ffffffec;
  int *result;
  
  cmdPath = crt_env_c_getenv_FUN_006013f0("ComSpec");
  iVar1 = g_ProcessSpawnEnabled;
  if (command == (char *)0x0) {
    iVar2 = 1;
  }
  else {
    result = (int *)CONCAT31((int3)((uint)in_stack_ffffffec >> 8),1);
    if (cmdPath == (char *)0x0) {
      cmdPath = "CMD.EXE";
    }
    envp = (void *)0x0;
    g_ProcessSpawnEnabled = 0;
    crt_process_c_set_shell_execute_flag_FUN_00609c80(&stack0xffffffe8);
    if ((char)result == '\0') {
      cmdName = "COMMAND";
    }
    else {
      cmdName = "CMD";
    }
    iVar2 = crt_process_c_spawnCommand_FUN_00609c90(0,cmdPath,cmdName,args,envp,result);
  }
  g_ProcessSpawnEnabled = iVar1;
  return iVar2;
}


// Assembly code:
// 00602130: PUSH EBX
//   Label: crt_stdlib.c_system_FUN_00602130
// 00602131: PUSH ESI
// 00602132: PUSH EDI
// 00602133: PUSH EBP
// 00602134: MOV EBP,ESP
// 00602136: SUB ESP,0x8
// 00602139: PUSH 0x658fb0
//   XREF to: 00658fb0 (DATA)
// 0060213e: CALL crt_env.c_getenv_FUN_006013f0
//   XREF to: 006013f0 (UNCONDITIONAL_CALL)
// 00602143: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00602146: ADD ESP,0x4
// 00602149: MOV EBX,EAX
// 0060214b: TEST EDX,EDX
// 0060214d: JNZ 0x00602156
//   XREF to: 00602156 (CONDITIONAL_JUMP)
// 0060214f: MOV EAX,0x1
// 00602154: JMP 0x006021ae
//   XREF to: 006021ae (UNCONDITIONAL_JUMP)
// 00602156: MOV byte ptr [EBP + -0x4],0x1
//   Label: LAB_00602156
//   XREF to: Stack[-0x14] (WRITE)
// 0060215a: TEST EAX,EAX
// 0060215c: JNZ 0x00602163
//   XREF to: 00602163 (CONDITIONAL_JUMP)
// 0060215e: MOV EBX,0x658fb8
//   XREF to: 00658fb8 (PARAM)
// 00602163: XOR ECX,ECX
//   Label: LAB_00602163
// 00602165: PUSH ECX
// 00602166: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00602169: XOR EAX,EAX
// 0060216b: PUSH EDI
// 0060216c: MOV AL,byte ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0060216f: PUSH EAX
// 00602170: LEA EAX,[EBP + -0x8]
//   XREF to: Stack[-0x18] (DATA)
// 00602173: PUSH EAX
// 00602174: MOV ESI,dword ptr [0x006853e0]
//   XREF to: 006853e0 (READ)
// 0060217a: MOV dword ptr [0x006853e0],ECX
//   XREF to: 006853e0 (WRITE)
// 00602180: CALL crt_process.c_set_shell_execute_flag_FUN_00609c80
//   XREF to: 00609c80 (UNCONDITIONAL_CALL)
// 00602185: ADD ESP,0x8
// 00602188: MOV DH,byte ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0060218b: PUSH EAX
// 0060218c: TEST DH,DH
// 0060218e: JZ 0x00602197
//   XREF to: 00602197 (CONDITIONAL_JUMP)
// 00602190: MOV EAX,0x658fcc
//   XREF to: 00658fcc (PARAM)
// 00602195: JMP 0x0060219c
//   XREF to: 0060219c (UNCONDITIONAL_JUMP)
// 00602197: MOV EAX,0x658fd0
//   Label: LAB_00602197
//   XREF to: 00658fd0 (PARAM)
// 0060219c: PUSH EAX
//   Label: LAB_0060219c
//   XREF to: 00658fcc (DATA)
//   XREF to: 00658fd0 (DATA)
// 0060219d: PUSH EBX
//   XREF to: 00658fb8 (DATA)
// 0060219e: PUSH 0x0
// 006021a0: CALL crt_process.c_spawnCommand_FUN_00609c90
//   XREF to: 00609c90 (UNCONDITIONAL_CALL)
// 006021a5: ADD ESP,0x18
// 006021a8: MOV dword ptr [0x006853e0],ESI
//   XREF to: 006853e0 (WRITE)
// 006021ae: MOV ESP,EBP
//   Label: LAB_006021ae
// 006021b0: POP EBP
// 006021b1: POP EDI
// 006021b2: POP ESI
// 006021b3: POP EBX
// 006021b4: RET
