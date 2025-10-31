// Name: engine_pod.cpp_CPod_remount_FUN_00550af0
// Address: 00550af0
// Address Range: [[00550af0, 00550b82]]
// Convention: __cdecl
// Signature: void engine_pod.cpp_CPod_remount_FUN_00550af0(CPod * this_ptr)
// Globals:
//   TerminatedCString s_engine_pod_cpp_00640722
//   TerminatedCString s_Can_t_re_mount_s_00640734
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_remount_FUN_00550af0(CPod *this_ptr)

{
  char cVar1;
  int iVar2;
  CPod *pCVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 local_110;
  undefined1 auStack_10c [252];
  
  iVar4 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->pod_file_count) {
    do {
      pcVar6 = (char *)&local_110;
      pcVar5 = pCVar3->pod_files[0]->filename;
      do {
        cVar1 = *pcVar5;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      iVar2 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650
                        (pCVar3->pod_files[0],(char *)&local_110);
      if (iVar2 == 0) {
        g_CurrentLineNumber = 0x3b3;
        g_CurrentFilename = "..\\engine\\pod.cpp";
        local_110 = auStack_10c;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Can't re-mount %s");
      }
      iVar4 = iVar4 + 1;
      pCVar3 = (CPod *)pCVar3->pod_files;
    } while (iVar4 < this_ptr->pod_file_count);
  }
  return;
}


// Assembly code:
// 00550af0: PUSH EBX
//   Label: engine_pod.cpp_CPod_remount_FUN_00550af0
// 00550af1: PUSH ESI
// 00550af2: PUSH EDI
// 00550af3: PUSH EBP
// 00550af4: SUB ESP,0x100
// 00550afa: MOV EAX,dword ptr [ESP + 0x114]
//   XREF to: Stack[0x4] (READ)
// 00550b01: MOV EDX,dword ptr [EAX]
// 00550b03: XOR EBP,EBP
// 00550b05: TEST EDX,EDX
// 00550b07: JLE 0x00550b51
//   XREF to: 00550b51 (CONDITIONAL_JUMP)
// 00550b09: MOV EBX,EAX
// 00550b0b: MOV ESI,dword ptr [EBX + 0x4]
//   Label: LAB_00550b0b
// 00550b0e: MOV EDI,ESP
// 00550b10: ADD ESI,0x4
// 00550b13: PUSH EDI
// 00550b14: MOV AL,byte ptr [ESI]
//   Label: LAB_00550b14
// 00550b16: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x110] (DATA)
// 00550b18: CMP AL,0x0
// 00550b1a: JZ 0x00550b2c
//   XREF to: 00550b2c (CONDITIONAL_JUMP)
// 00550b1c: MOV AL,byte ptr [ESI + 0x1]
// 00550b1f: ADD ESI,0x2
// 00550b22: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x10f] (WRITE)
// 00550b25: ADD EDI,0x2
// 00550b28: CMP AL,0x0
// 00550b2a: JNZ 0x00550b14
//   XREF to: 00550b14 (CONDITIONAL_JUMP)
// 00550b2c: POP EDI
//   Label: LAB_00550b2c
// 00550b2d: MOV EAX,ESP
// 00550b2f: PUSH EAX
// 00550b30: MOV ESI,dword ptr [EBX + 0x4]
// 00550b33: PUSH ESI
// 00550b34: CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
//   XREF to: 0054f650 (UNCONDITIONAL_CALL)
// 00550b39: ADD ESP,0x8
// 00550b3c: TEST EAX,EAX
// 00550b3e: JZ 0x00550b5c
//   XREF to: 00550b5c (CONDITIONAL_JUMP)
// 00550b40: MOV EAX,dword ptr [ESP + 0x114]
//   Label: LAB_00550b40
//   XREF to: Stack[0x4] (READ)
// 00550b47: INC EBP
// 00550b48: MOV ECX,dword ptr [EAX]
// 00550b4a: ADD EBX,0x4
// 00550b4d: CMP EBP,ECX
// 00550b4f: JL 0x00550b0b
//   XREF to: 00550b0b (CONDITIONAL_JUMP)
// 00550b51: ADD ESP,0x100
//   Label: LAB_00550b51
// 00550b57: POP EBP
// 00550b58: POP EDI
// 00550b59: POP ESI
// 00550b5a: POP EBX
// 00550b5b: RET
// 00550b5c: MOV dword ptr [0x02f0ca4c],0x3b3
//   Label: LAB_00550b5c
//   XREF to: 02f0ca4c (WRITE)
// 00550b66: MOV EAX,ESP
// 00550b68: PUSH EAX
// 00550b69: MOV EDI,0x640722
//   XREF to: 00640722 (DATA)
// 00550b6e: PUSH 0x640734
//   XREF to: 00640734 (DATA)
// 00550b73: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 00550b79: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00550b7e: ADD ESP,0x8
// 00550b81: JMP 0x00550b40
//   XREF to: 00550b40 (UNCONDITIONAL_JUMP)
