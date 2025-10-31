// Name: core_netgame.cpp_CNetGame_sendGameSetting_FUN_00542dd0
// Address: 00542dd0
// Address Range: [[00542dd0, 00542fe3]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_sendGameSetting_FUN_00542dd0()
// Cross-references:
//   core_netgame.cpp_FUN_00541390 (00541390) at 00541916 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_netgame_cpp_0063dcac
//   TerminatedCString s_CNetGame_sendGameSetting_0063dcc0
//   TerminatedCString s_core_netgame_cpp_0063dd0e
//   TerminatedCString s_CNetGame_send_invalid_pl_0063dd22
//   WatcomTypeInfo g_SPlayerTypeInfo
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_LastPingTime
//   uint g_CurrentGameTime
//   undefined4 DAT_02f7c8c4
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_netgame.cpp_CNetGame_send_FUN_005411c0
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

void core_netgame_cpp_CNetGame_sendGameSetting_FUN_00542dd0(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000014;
  int in_stack_00000018;
  char acStack_b3 [80];
  undefined4 uStack_63;
  char acStack_5f [20];
  undefined4 auStack_4b [14];
  
  bVar8 = 0;
  if ((*in_stack_00000004 != 1) || (in_stack_00000004[1] != 1)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x8a8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::sendGameSettingsPacket - should only call this in server lobby mode");
  }
  if ((in_stack_0000000c < 0) || (*(int *)(in_stack_00000008 + 0x1c) <= in_stack_0000000c)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x8ae;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::send - invalid player index");
  }
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&uStack_63,2,&g_SPlayerTypeInfo);
  pcVar7 = acStack_b3;
  uStack_63 = *(undefined4 *)(in_stack_0000000c + 0x1c);
  pcVar6 = (char *)(in_stack_0000000c + 0x118);
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  iVar4 = 0;
  if (0 < *(int *)(in_stack_0000000c + 0x1c)) {
    pcVar2 = (char *)(in_stack_0000000c + 0x20);
    pcVar7 = acStack_5f;
    pcVar6 = pcVar2;
    pcVar5 = pcVar7;
    iVar3 = in_stack_0000000c;
LAB_00542ef5:
    do {
      cVar1 = *pcVar2;
      *pcVar7 = cVar1;
      if (cVar1 != '\0') {
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
        if (cVar1 != '\0') goto LAB_00542ef5;
      }
      auStack_4b[iVar4 * 10] = *(undefined4 *)(iVar3 + 0x3c);
      auStack_4b[iVar4 * 10 + (uint)bVar8 * -2 + 1] =
           *(undefined4 *)(iVar3 + 0x40 + (uint)bVar8 * -8);
      auStack_4b[iVar4 * 10 + 4] = *(undefined4 *)(iVar3 + 100);
      auStack_4b[iVar4 * 10 + 2] = *(undefined4 *)(iVar3 + 0x34);
      pcVar7 = pcVar5 + 0x28;
      auStack_4b[iVar4 * 10 + 3] = *(undefined4 *)(iVar3 + 0x38);
      iVar4 = iVar4 + 1;
      pcVar2 = pcVar6 + 0x78;
      pcVar6 = pcVar2;
      pcVar5 = pcVar7;
      iVar3 = iVar3 + 0x78;
    } while (iVar4 < *(int *)(in_stack_0000000c + 0x1c));
  }
  core_netgame_cpp_CNetGame_send_FUN_005411c0();
  iVar4 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar3 = iVar4 / 0x12 - g_LastPingTime;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar3;
  g_LastPingTime = iVar4 / 0x12;
  *(uint *)(in_stack_00000018 * 0x78 + in_stack_00000014 + 0x58) = g_CurrentGameTime;
  return;
}


// Assembly code:
// 00542dd0: PUSH EBX
//   Label: core_netgame.cpp_CNetGame_sendGameSetting_FUN_00542dd0
// 00542dd1: PUSH ESI
// 00542dd2: PUSH EDI
// 00542dd3: PUSH EBP
// 00542dd4: SUB ESP,0xb8
// 00542dda: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[0x4] (READ)
// 00542de1: MOV EDX,dword ptr [EAX]
// 00542de3: CMP EDX,0x1
// 00542de6: JNZ 0x00542ded
//   XREF to: 00542ded (CONDITIONAL_JUMP)
// 00542de8: CMP EDX,dword ptr [EAX + 0x4]
// 00542deb: JZ 0x00542e10
//   XREF to: 00542e10 (CONDITIONAL_JUMP)
// 00542ded: MOV EBX,0x63dcac
//   Label: LAB_00542ded
//   XREF to: 0063dcac (DATA)
// 00542df2: MOV ESI,0x8a8
// 00542df7: PUSH 0x63dcc0
//   XREF to: 0063dcc0 (DATA)
// 00542dfc: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 00542e02: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00542e08: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00542e0d: ADD ESP,0x4
// 00542e10: MOV EDI,dword ptr [ESP + 0xd0]
//   Label: LAB_00542e10
//   XREF to: Stack[0x8] (READ)
// 00542e17: TEST EDI,EDI
// 00542e19: JL 0x00542e27
//   XREF to: 00542e27 (CONDITIONAL_JUMP)
// 00542e1b: MOV EDX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[0x4] (READ)
// 00542e22: CMP EDI,dword ptr [EDX + 0x1c]
// 00542e25: JL 0x00542e49
//   XREF to: 00542e49 (CONDITIONAL_JUMP)
// 00542e27: MOV EAX,0x63dd0e
//   Label: LAB_00542e27
//   XREF to: 0063dd0e (DATA)
// 00542e2c: MOV EDX,0x8ae
// 00542e31: PUSH 0x63dd22
//   XREF to: 0063dd22 (DATA)
// 00542e36: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00542e3b: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00542e41: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00542e46: ADD ESP,0x4
// 00542e49: PUSH 0x661ce0
//   Label: LAB_00542e49
//   XREF to: 00661ce0 (DATA)
// 00542e4e: MOV AH,0xb
// 00542e50: PUSH 0x2
// 00542e52: MOV byte ptr [ESP + 0xc],AH
//   XREF to: Stack[-0xc4] (WRITE)
// 00542e56: LEA EAX,[ESP + 0x69]
//   XREF to: Stack[-0x67] (DATA)
// 00542e5a: MOV ECX,0xb1
// 00542e5f: PUSH EAX
// 00542e60: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0xc8] (WRITE)
// 00542e64: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00542e69: ADD ESP,0xc
// 00542e6c: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[0x4] (READ)
// 00542e73: MOV EAX,dword ptr [EAX + 0x16c]
// 00542e79: MOV dword ptr [ESP + 0x9],EAX
//   XREF to: Stack[-0xbf] (WRITE)
// 00542e7d: MOV EAX,[0x02f7c8c4]
//   XREF to: 02f7c8c4 (READ)
// 00542e82: MOV dword ptr [ESP + 0x5],EAX
//   XREF to: Stack[-0xc3] (WRITE)
// 00542e86: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[0x4] (READ)
// 00542e8d: LEA EDI,[ESP + 0xd]
//   XREF to: Stack[-0xbb] (DATA)
// 00542e91: MOV ESI,dword ptr [ESP + 0xcc]
//   XREF to: Stack[0x4] (READ)
// 00542e98: MOV EAX,dword ptr [EAX + 0x1c]
// 00542e9b: ADD ESI,0x118
// 00542ea1: MOV dword ptr [ESP + 0x5d],EAX
//   XREF to: Stack[-0x6b] (WRITE)
// 00542ea5: PUSH EDI
// 00542ea6: MOV AL,byte ptr [ESI]
//   Label: LAB_00542ea6
// 00542ea8: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xbb] (DATA)
// 00542eaa: CMP AL,0x0
// 00542eac: JZ 0x00542ebe
//   XREF to: 00542ebe (CONDITIONAL_JUMP)
// 00542eae: MOV AL,byte ptr [ESI + 0x1]
// 00542eb1: ADD ESI,0x2
// 00542eb4: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xba] (WRITE)
// 00542eb7: ADD EDI,0x2
// 00542eba: CMP AL,0x0
// 00542ebc: JNZ 0x00542ea6
//   XREF to: 00542ea6 (CONDITIONAL_JUMP)
// 00542ebe: POP EDI
//   Label: LAB_00542ebe
// 00542ebf: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[0x4] (READ)
// 00542ec6: MOV ESI,dword ptr [EAX + 0x1c]
// 00542ec9: XOR EBX,EBX
// 00542ecb: TEST ESI,ESI
// 00542ecd: JLE 0x00542f60
//   XREF to: 00542f60 (CONDITIONAL_JUMP)
// 00542ed3: MOV EDX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[0x4] (READ)
// 00542eda: ADD EAX,0x20
// 00542edd: LEA EBP,[ESP + 0x61]
//   XREF to: Stack[-0x67] (DATA)
// 00542ee1: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00542ee8: IMUL ECX,EBX,0x28
//   Label: LAB_00542ee8
// 00542eeb: MOV ESI,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x14] (READ)
// 00542ef2: MOV EDI,EBP
// 00542ef4: PUSH EDI
// 00542ef5: MOV AL,byte ptr [ESI]
//   Label: LAB_00542ef5
// 00542ef7: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x67] (DATA)
// 00542ef9: CMP AL,0x0
// 00542efb: JZ 0x00542f0d
//   XREF to: 00542f0d (CONDITIONAL_JUMP)
// 00542efd: MOV AL,byte ptr [ESI + 0x1]
// 00542f00: ADD ESI,0x2
// 00542f03: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x66] (WRITE)
// 00542f06: ADD EDI,0x2
// 00542f09: CMP AL,0x0
// 00542f0b: JNZ 0x00542ef5
//   XREF to: 00542ef5 (CONDITIONAL_JUMP)
// 00542f0d: POP EDI
//   Label: LAB_00542f0d
// 00542f0e: LEA ESI,[EDX + 0x3c]
// 00542f11: LEA EDI,[ESP + ECX*0x1 + 0x75]
//   XREF to: Stack[-0x53] (DATA)
// 00542f15: MOVSD ES:EDI,ESI
// 00542f16: MOVSD ES:EDI,ESI
// 00542f17: MOV EAX,dword ptr [EDX + 0x64]
// 00542f1a: MOV dword ptr [ESP + ECX*0x1 + 0x85],EAX
// 00542f21: MOV EAX,dword ptr [EDX + 0x34]
// 00542f24: ADD EDX,0x78
// 00542f27: MOV dword ptr [ESP + ECX*0x1 + 0x7d],EAX
// 00542f2b: ADD EBP,0x28
// 00542f2e: MOV EAX,dword ptr [EDX + -0x40]
// 00542f31: MOV EDI,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x14] (READ)
// 00542f38: MOV dword ptr [ESP + ECX*0x1 + 0x81],EAX
// 00542f3f: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[0x4] (READ)
// 00542f46: INC EBX
// 00542f47: ADD EDI,0x78
// 00542f4a: MOV ECX,dword ptr [EAX + 0x1c]
// 00542f4d: MOV dword ptr [ESP + 0xb4],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 00542f54: CMP EBX,ECX
// 00542f56: JL 0x00542ee8
//   XREF to: 00542ee8 (CONDITIONAL_JUMP)
// 00542f58: LEA EAX,[EAX]
// 00542f5e: MOV EDX,EDX
// 00542f60: MOV EAX,ESP
//   Label: LAB_00542f60
// 00542f62: PUSH EAX
// 00542f63: MOV EBX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[0x8] (READ)
// 00542f6a: PUSH EBX
// 00542f6b: MOV ESI,dword ptr [ESP + 0xd4]
//   XREF to: Stack[0x4] (READ)
// 00542f72: PUSH ESI
// 00542f73: CALL core_netgame.cpp_CNetGame_send_FUN_005411c0
//   XREF to: 005411c0 (UNCONDITIONAL_CALL)
// 00542f78: ADD ESP,0xc
// 00542f7b: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 00542f80: MOV EDX,EAX
// 00542f82: MOV ECX,0x12
// 00542f87: SAR EDX,0x1f
// 00542f8a: IDIV ECX
// 00542f8c: MOV EDI,dword ptr [0x02f7c8b4]
//   XREF to: 02f7c8b4 (READ)
// 00542f92: MOV EDX,EAX
// 00542f94: SUB EDX,EDI
// 00542f96: MOV [0x02f7c8b4],EAX
//   XREF to: 02f7c8b4 (WRITE)
// 00542f9b: TEST EDX,EDX
// 00542f9d: JL 0x00542fe0
//   XREF to: 00542fe0 (CONDITIONAL_JUMP)
// 00542f9f: CMP EDX,0x20000
// 00542fa5: JLE 0x00542fac
//   XREF to: 00542fac (CONDITIONAL_JUMP)
// 00542fa7: MOV EDX,0x20000
// 00542fac: MOV EAX,dword ptr [ESP + 0xd0]
//   Label: LAB_00542fac
//   XREF to: Stack[0x8] (READ)
// 00542fb3: MOV EBP,dword ptr [0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 00542fb9: SHL EAX,0x3
// 00542fbc: ADD EBP,EDX
// 00542fbe: MOV EDX,EAX
// 00542fc0: SHL EAX,0x4
// 00542fc3: SUB EAX,EDX
// 00542fc5: ADD EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[0x4] (READ)
// 00542fcc: MOV dword ptr [0x02f7c8b8],EBP
//   XREF to: 02f7c8b8 (WRITE)
// 00542fd2: MOV dword ptr [EAX + 0x58],EBP
// 00542fd5: ADD ESP,0xb8
// 00542fdb: POP EBP
// 00542fdc: POP EDI
// 00542fdd: POP ESI
// 00542fde: POP EBX
// 00542fdf: RET
// 00542fe0: XOR EDX,EDX
//   Label: LAB_00542fe0
// 00542fe2: JMP 0x00542fac
//   XREF to: 00542fac (UNCONDITIONAL_JUMP)
