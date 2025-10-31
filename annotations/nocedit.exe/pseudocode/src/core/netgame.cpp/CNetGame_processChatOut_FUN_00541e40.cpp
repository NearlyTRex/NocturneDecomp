// Name: core_netgame.cpp_CNetGame_processChatOut_FUN_00541e40
// Address: 00541e40
// Address Range: [[00541e40, 00541fe2]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_processChatOut_FUN_00541e40()
// Cross-references:
//   core_netgame.cpp_FUN_00541390 (00541390) at 00541c6b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_netgame_cpp_0063dac5
//   TerminatedCString s_CNetGame_processChatOut__0063dad9
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_LastPingTime
//   uint g_CurrentGameTime
//   undefined4 DAT_02f98ad0
//   undefined4 DAT_02f98ad4
//   undefined4 DAT_02f98ad8
//   undefined1 DAT_02f98adc
//   undefined1 DAT_02f98add
//   undefined4 DAT_02f98ae0
//   undefined4 DAT_02f98ae4
//   undefined4 DAT_02f9c0bc
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_netgame.cpp_CNetGame_FUN_00542370
//   crt_memory.c_memset_FUN_005fde40
//   crt_string.c_strncpy_FUN_00600f40
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

void core_netgame_cpp_CNetGame_processChatOut_FUN_00541e40(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int in_stack_00000004;
  int in_stack_0000000c;
  char *in_stack_00000018;
  
  if (0x31 < DAT_02f98ad0) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x76c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::processChatOut - too many pending outgoing chat messages");
  }
  iVar4 = DAT_02f98ad0;
  iVar1 = DAT_02f98ad0 * 0x114;
  puVar7 = &DAT_02f98ad4 + DAT_02f98ad0 * 0x45;
  DAT_02f98ad0 = DAT_02f98ad0 + 1;
  iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar3 = iVar2 / 0x12 - g_LastPingTime;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar3;
  DAT_02f9c0bc = DAT_02f9c0bc + 1;
  g_LastPingTime = iVar2 / 0x12;
  (&DAT_02f98ad8)[iVar4 * 0x45] = DAT_02f9c0bc;
  *puVar7 = g_CurrentGameTime;
  crt_memory_c_memset_FUN_005fde40(&DAT_02f98adc + iVar1,1,2);
  if (in_stack_0000000c < 0) {
    iVar4 = 0;
    puVar5 = puVar7;
    puVar6 = puVar7;
    if (0 < *(int *)(in_stack_00000004 + 0x1c)) {
      do {
        *(undefined1 *)(puVar6 + 2) = 0;
        puVar5[3] = g_CurrentGameTime - 0x3c0000;
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 1;
        puVar6 = (uint *)((int)puVar6 + 1);
      } while (iVar4 < *(int *)(in_stack_00000004 + 0x1c));
    }
  }
  else {
    *(undefined1 *)((int)puVar7 + in_stack_0000000c + 8) = 0;
    *(uint *)(&DAT_02f98ae0 + in_stack_0000000c * 4 + iVar1) = g_CurrentGameTime - 0x3c0000;
  }
  *(undefined1 *)(*(int *)(in_stack_00000004 + 0x114) + 8 + (int)puVar7) = 1;
  crt_memory_c_memset_FUN_005fde40(&DAT_02f98ae8 + iVar1,0,0x100);
  crt_string_c_strncpy_FUN_00600f40(&DAT_02f98ae8 + iVar1,in_stack_00000018,0xff);
  core_netgame_cpp_CNetGame_FUN_00542370();
  return;
}


// Assembly code:
// 00541e40: PUSH EBX
//   Label: core_netgame.cpp_CNetGame_processChatOut_FUN_00541e40
// 00541e41: PUSH ESI
// 00541e42: PUSH EDI
// 00541e43: PUSH EBP
// 00541e44: MOV EDI,dword ptr [0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 00541e4a: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00541e4e: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00541e52: CMP dword ptr [0x02f98ad0],0x32
//   XREF to: 02f98ad0 (READ)
// 00541e59: JGE 0x00541f7f
//   XREF to: 00541f7f (CONDITIONAL_JUMP)
// 00541e5f: MOV EDX,dword ptr [0x02f98ad0]
//   Label: LAB_00541e5f
//   XREF to: 02f98ad0 (READ)
// 00541e65: MOV EAX,EDX
// 00541e67: SHL EAX,0x4
// 00541e6a: ADD EAX,EDX
// 00541e6c: SHL EAX,0x2
// 00541e6f: ADD EAX,EDX
// 00541e71: MOV EBP,0x2f98ad4
//   XREF to: 02f98ad4 (DATA)
// 00541e76: SHL EAX,0x2
// 00541e79: ADD EBP,EAX
// 00541e7b: LEA EAX,[EDX + 0x1]
// 00541e7e: MOV [0x02f98ad0],EAX
//   XREF to: 02f98ad0 (WRITE)
// 00541e83: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 00541e88: MOV EDX,EAX
// 00541e8a: MOV ECX,0x12
// 00541e8f: SAR EDX,0x1f
// 00541e92: IDIV ECX
// 00541e94: MOV ECX,dword ptr [0x02f7c8b4]
//   XREF to: 02f7c8b4 (READ)
// 00541e9a: MOV EDX,EAX
// 00541e9c: SUB EAX,ECX
// 00541e9e: MOV dword ptr [0x02f7c8b4],EDX
//   XREF to: 02f7c8b4 (WRITE)
// 00541ea4: TEST EAX,EAX
// 00541ea6: JL 0x00541fa7
//   XREF to: 00541fa7 (CONDITIONAL_JUMP)
// 00541eac: MOV EDI,dword ptr [0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 00541eb2: CMP EAX,0x20000
// 00541eb7: JLE 0x00541ebe
//   XREF to: 00541ebe (CONDITIONAL_JUMP)
// 00541eb9: MOV EAX,0x20000
// 00541ebe: ADD EDI,EAX
//   Label: LAB_00541ebe
// 00541ec0: MOV EAX,[0x02f9c0bc]
//   XREF to: 02f9c0bc (READ)
// 00541ec5: PUSH 0x2
// 00541ec7: INC EAX
// 00541ec8: PUSH 0x1
// 00541eca: MOV [0x02f9c0bc],EAX
//   XREF to: 02f9c0bc (WRITE)
// 00541ecf: MOV dword ptr [EBP + 0x4],EAX
//   XREF to: 02f98ad8 (DATA)
// 00541ed2: LEA EAX,[EBP + 0x8]
// 00541ed5: PUSH EAX
// 00541ed6: MOV dword ptr [0x02f7c8b8],EDI
//   XREF to: 02f7c8b8 (WRITE)
// 00541edc: MOV dword ptr [EBP],EDI
//   XREF to: 02f98ad4 (DATA)
// 00541edf: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00541ee4: MOV EDI,dword ptr [0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 00541eea: ADD ESP,0xc
// 00541eed: TEST EBX,EBX
// 00541eef: JL 0x00541fb4
//   XREF to: 00541fb4 (CONDITIONAL_JUMP)
// 00541ef5: LEA EAX,[EBX + EBP*0x1]
// 00541ef8: MOV byte ptr [EAX + 0x8],0x0
// 00541efc: LEA EAX,[EDI + 0xffc40000]
// 00541f02: MOV dword ptr [EBP + EBX*0x4 + 0xc],EAX
// 00541f06: LEA EAX,[EAX]
// 00541f0c: LEA EDX,[EDX]
// 00541f10: PUSH 0x100
//   Label: LAB_00541f10
// 00541f15: PUSH 0x0
// 00541f17: LEA EBX,[EBP + 0x14]
// 00541f1a: MOV EAX,dword ptr [ESI + 0x114]
// 00541f20: PUSH EBX
// 00541f21: MOV dword ptr [0x02f7c8b8],EDI
//   XREF to: 02f7c8b8 (WRITE)
// 00541f27: MOV byte ptr [EAX + EBP*0x1 + 0x8],0x1
// 00541f2c: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00541f31: ADD ESP,0xc
// 00541f34: PUSH 0xff
// 00541f39: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00541f3d: PUSH EAX
// 00541f3e: PUSH EBX
// 00541f3f: CALL crt_string.c_strncpy_FUN_00600f40
//   XREF to: 00600f40 (UNCONDITIONAL_CALL)
// 00541f44: ADD ESP,0xc
// 00541f47: PUSH EBX
// 00541f48: LEA EAX,[ESI + 0x8]
// 00541f4b: PUSH EAX
// 00541f4c: MOV EAX,dword ptr [ESI + 0x114]
// 00541f52: MOV EDX,dword ptr [EBP + 0x4]
//   XREF to: 02f98ad8 (DATA)
// 00541f55: SHL EAX,0x3
// 00541f58: PUSH EDX
// 00541f59: MOV EDX,EAX
// 00541f5b: SHL EAX,0x4
// 00541f5e: SUB EAX,EDX
// 00541f60: MOV EDX,EAX
// 00541f62: LEA EAX,[ESI + 0x20]
// 00541f65: ADD EAX,EDX
// 00541f67: ADD EAX,0x1c
// 00541f6a: PUSH EAX
// 00541f6b: PUSH ESI
// 00541f6c: CALL core_netgame.cpp_CNetGame_FUN_00542370
//   XREF to: 00542370 (UNCONDITIONAL_CALL)
// 00541f71: MOV EDI,dword ptr [0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 00541f77: ADD ESP,0x14
// 00541f7a: POP EBP
// 00541f7b: POP EDI
// 00541f7c: POP ESI
// 00541f7d: POP EBX
// 00541f7e: RET
// 00541f7f: MOV ECX,0x63dac5
//   Label: LAB_00541f7f
//   XREF to: 0063dac5 (DATA)
// 00541f84: MOV EBP,0x76c
// 00541f89: PUSH 0x63dad9
//   XREF to: 0063dad9 (DATA)
// 00541f8e: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00541f94: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 00541f9a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00541f9f: ADD ESP,0x4
// 00541fa2: JMP 0x00541e5f
//   XREF to: 00541e5f (UNCONDITIONAL_JUMP)
// 00541fa7: MOV EDI,dword ptr [0x02f7c8b8]
//   Label: LAB_00541fa7
//   XREF to: 02f7c8b8 (READ)
// 00541fad: XOR EAX,EAX
// 00541faf: JMP 0x00541ebe
//   XREF to: 00541ebe (UNCONDITIONAL_JUMP)
// 00541fb4: MOV EDX,dword ptr [ESI + 0x1c]
//   Label: LAB_00541fb4
// 00541fb7: XOR EAX,EAX
// 00541fb9: TEST EDX,EDX
// 00541fbb: JLE 0x00541f10
//   XREF to: 00541f10 (CONDITIONAL_JUMP)
// 00541fc1: MOV EDX,EBP
// 00541fc3: MOV ECX,EBP
// 00541fc5: ADD ECX,0x4
//   Label: LAB_00541fc5
// 00541fc8: LEA EBX,[EDI + 0xffc40000]
// 00541fce: MOV byte ptr [EDX + 0x8],0x0
//   XREF to: 02f98adc (DATA)
//   XREF to: 02f98add (DATA)
// 00541fd2: MOV dword ptr [ECX + 0x8],EBX
//   XREF to: 02f98ae0 (DATA)
//   XREF to: 02f98ae4 (DATA)
// 00541fd5: INC EAX
// 00541fd6: MOV EBX,dword ptr [ESI + 0x1c]
// 00541fd9: INC EDX
// 00541fda: CMP EAX,EBX
// 00541fdc: JL 0x00541fc5
//   XREF to: 00541fc5 (CONDITIONAL_JUMP)
// 00541fde: JMP 0x00541f10
//   XREF to: 00541f10 (UNCONDITIONAL_JUMP)
