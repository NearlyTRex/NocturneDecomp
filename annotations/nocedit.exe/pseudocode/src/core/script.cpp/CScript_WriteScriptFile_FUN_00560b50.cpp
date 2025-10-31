// Name: core_script.cpp_CScript_WriteScriptFile_FUN_00560b50
// Address: 00560b50
// Address Range: [[00560b50, 00560d7a]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_WriteScriptFile_FUN_00560b50()
// Cross-references:
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e0e68 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CScript_version_00643501
//   TerminatedCString s_d_00643515
//   TerminatedCString s_gGame_letterboxMode_00643519
//   TerminatedCString s_d_00643532
//   TerminatedCString s_gGame_allowDamageFlag_00643536
//   TerminatedCString s_d_00643551
//   TerminatedCString s_gGame_allowEnemyAttackFl_00643555
//   TerminatedCString s_d_00643575
//   TerminatedCString s_letterBoxBlackT_00643579
//   TerminatedCString s_g_0064358d
//   TerminatedCString s_nextCmd_00643591
//   TerminatedCString s_d_0064359d
//   TerminatedCString s_currentMessage_006435a1
//   TerminatedCString s_s_006435b4
//   TerminatedCString s_cmdTimer_006435ba
//   TerminatedCString s_g_006435c7
//   TerminatedCString s_dialogWavTime_006435cb
//   TerminatedCString s_g_006435dd
//   TerminatedCString s_whoIsSpeaking_006435e1
//   TerminatedCString s_focusActor_006435f3
//   TerminatedCString s_focusActorLocked_00643602
//   TerminatedCString s_d_00643617
//   TerminatedCString s_callStack_count_list_0064361b
//   TerminatedCString s_d_00643635
//   TerminatedCString s_d_00643639
//   TerminatedCString s_CRC_0064363d
//   TerminatedCString s_u_00643645
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   undefined4 DAT_02d81cc4
//   undefined4 DAT_02d81cc8
//   undefined4 DAT_02d81ccc
//   undefined4 DAT_0310f4a0
// Function calls:
//   core_script.cpp_CalculateCRC_FUN_00560d80
//   core_script.cpp_FUN_005607e0
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: void core_script.cpp_CScript_WriteScriptFile(CScript* pScript, FILE* pFilePtr) */

void core_script_cpp_CScript_WriteScriptFile_FUN_00560b50
               (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
               int param_5,FILE *param_6)

{
  int iVar1;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// CScript version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"%d\n",6);
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// gGame->letterboxMode\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"%d\n",g_CGamePtr->letterbox_mode,unaff_EBX);
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// gGame->allowDamageFlag\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// gGame->allowEnemyAttackFlag\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// letterBoxBlackT\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"%g\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// nextCmd\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// currentMessage\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"\"%s\"\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// cmdTimer\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"%g\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// dialogWavTime\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"%g\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// whoIsSpeaking\n");
  core_script_cpp_FUN_005607e0();
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// focusActor\n");
  core_script_cpp_FUN_005607e0();
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// focusActorLocked\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// callStack count, list\n");
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"%d\n");
  if (0 < *(int *)(param_5 + 0x45c)) {
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"%d\n");
    } while (iVar1 < *(int *)(param_5 + 0x45c));
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"// CRC\n");
  core_script_cpp_CalculateCRC_FUN_00560d80();
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"%u\n");
  return;
}


// Assembly code:
// 00560b50: PUSH EBX
//   Label: core_script.cpp_CScript_WriteScriptFile_FUN_00560b50
// 00560b51: PUSH ESI
// 00560b52: PUSH EDI
// 00560b53: PUSH EBP
// 00560b54: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00560b58: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00560b5c: PUSH 0x643501
//   XREF to: 00643501 (DATA)
// 00560b61: PUSH EDI
// 00560b62: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560b67: ADD ESP,0x8
// 00560b6a: PUSH 0x6
// 00560b6c: PUSH 0x643515
//   XREF to: 00643515 (DATA)
// 00560b71: PUSH EDI
// 00560b72: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560b77: ADD ESP,0xc
// 00560b7a: PUSH 0x643519
//   XREF to: 00643519 (DATA)
// 00560b7f: PUSH EDI
// 00560b80: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560b85: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00560b8a: ADD ESP,0x8
// 00560b8d: MOV EDX,dword ptr [EAX + 0x228]
//   XREF to: 02d81cc4 (READ)
// 00560b93: PUSH EDX
// 00560b94: PUSH 0x643532
//   XREF to: 00643532 (DATA)
// 00560b99: PUSH EDI
// 00560b9a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560b9f: ADD ESP,0xc
// 00560ba2: PUSH 0x643536
//   XREF to: 00643536 (DATA)
// 00560ba7: PUSH EDI
// 00560ba8: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560bad: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00560bb2: ADD ESP,0x8
// 00560bb5: MOV ECX,dword ptr [EAX + 0x22c]
//   XREF to: 02d81cc8 (READ)
// 00560bbb: PUSH ECX
// 00560bbc: PUSH 0x643551
//   XREF to: 00643551 (DATA)
// 00560bc1: PUSH EDI
// 00560bc2: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560bc7: ADD ESP,0xc
// 00560bca: PUSH 0x643555
//   XREF to: 00643555 (DATA)
// 00560bcf: PUSH EDI
// 00560bd0: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560bd5: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00560bda: ADD ESP,0x8
// 00560bdd: MOV EBX,dword ptr [EAX + 0x230]
//   XREF to: 02d81ccc (READ)
// 00560be3: PUSH EBX
// 00560be4: PUSH 0x643575
//   XREF to: 00643575 (DATA)
// 00560be9: PUSH EDI
// 00560bea: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560bef: ADD ESP,0xc
// 00560bf2: PUSH 0x643579
//   XREF to: 00643579 (DATA)
// 00560bf7: PUSH EDI
// 00560bf8: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560bfd: ADD ESP,0x8
// 00560c00: SUB ESP,0x8
// 00560c03: FLD float ptr [0x0310f4a0]
//   XREF to: 0310f4a0 (READ)
// 00560c09: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00560c0c: PUSH 0x64358d
//   XREF to: 0064358d (DATA)
// 00560c11: PUSH EDI
// 00560c12: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560c17: ADD ESP,0x10
// 00560c1a: PUSH 0x643591
//   XREF to: 00643591 (DATA)
// 00560c1f: PUSH EDI
// 00560c20: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560c25: ADD ESP,0x8
// 00560c28: MOV ESI,dword ptr [EBP + 0x48]
// 00560c2b: PUSH ESI
// 00560c2c: PUSH 0x64359d
//   XREF to: 0064359d (DATA)
// 00560c31: PUSH EDI
// 00560c32: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560c37: ADD ESP,0xc
// 00560c3a: PUSH 0x6435a1
//   XREF to: 006435a1 (DATA)
// 00560c3f: PUSH EDI
// 00560c40: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560c45: ADD ESP,0x8
// 00560c48: LEA EAX,[EBP + 0x54]
// 00560c4b: PUSH EAX
// 00560c4c: PUSH 0x6435b4
//   XREF to: 006435b4 (DATA)
// 00560c51: PUSH EDI
// 00560c52: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560c57: ADD ESP,0xc
// 00560c5a: PUSH 0x6435ba
//   XREF to: 006435ba (DATA)
// 00560c5f: PUSH EDI
// 00560c60: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560c65: ADD ESP,0x8
// 00560c68: SUB ESP,0x8
// 00560c6b: FLD float ptr [EBP + 0x4c]
// 00560c6e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00560c71: PUSH 0x6435c7
//   XREF to: 006435c7 (DATA)
// 00560c76: PUSH EDI
// 00560c77: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560c7c: ADD ESP,0x10
// 00560c7f: PUSH 0x6435cb
//   XREF to: 006435cb (DATA)
// 00560c84: PUSH EDI
// 00560c85: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560c8a: ADD ESP,0x8
// 00560c8d: SUB ESP,0x8
// 00560c90: FLD float ptr [EBP + 0x50]
// 00560c93: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00560c96: PUSH 0x6435dd
//   XREF to: 006435dd (DATA)
// 00560c9b: PUSH EDI
// 00560c9c: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560ca1: ADD ESP,0x10
// 00560ca4: PUSH 0x6435e1
//   XREF to: 006435e1 (DATA)
// 00560ca9: PUSH EDI
// 00560caa: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560caf: ADD ESP,0x8
// 00560cb2: LEA EAX,[EBP + 0x4]
// 00560cb5: PUSH EAX
// 00560cb6: PUSH EDI
// 00560cb7: CALL core_script.cpp_FUN_005607e0
//   XREF to: 005607e0 (UNCONDITIONAL_CALL)
// 00560cbc: ADD ESP,0x8
// 00560cbf: PUSH 0x6435f3
//   XREF to: 006435f3 (DATA)
// 00560cc4: PUSH EDI
// 00560cc5: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560cca: ADD ESP,0x8
// 00560ccd: LEA EAX,[EBP + 0xc]
// 00560cd0: PUSH EAX
// 00560cd1: PUSH EDI
// 00560cd2: CALL core_script.cpp_FUN_005607e0
//   XREF to: 005607e0 (UNCONDITIONAL_CALL)
// 00560cd7: ADD ESP,0x8
// 00560cda: PUSH 0x643602
//   XREF to: 00643602 (DATA)
// 00560cdf: PUSH EDI
// 00560ce0: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560ce5: ADD ESP,0x8
// 00560ce8: MOV EAX,dword ptr [EBP + 0x14]
// 00560ceb: PUSH EAX
// 00560cec: PUSH 0x643617
//   XREF to: 00643617 (DATA)
// 00560cf1: PUSH EDI
// 00560cf2: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560cf7: ADD ESP,0xc
// 00560cfa: PUSH 0x64361b
//   XREF to: 0064361b (DATA)
// 00560cff: PUSH EDI
// 00560d00: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560d05: ADD ESP,0x8
// 00560d08: MOV EDX,dword ptr [EBP + 0x45c]
// 00560d0e: PUSH EDX
// 00560d0f: PUSH 0x643635
//   XREF to: 00643635 (DATA)
// 00560d14: PUSH EDI
// 00560d15: XOR ESI,ESI
// 00560d17: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560d1c: MOV ECX,dword ptr [EBP + 0x45c]
// 00560d22: ADD ESP,0xc
// 00560d25: TEST ECX,ECX
// 00560d27: JLE 0x00560d50
//   XREF to: 00560d50 (CONDITIONAL_JUMP)
// 00560d29: MOV EBX,EBP
// 00560d2b: MOV EAX,dword ptr [EBX + 0x460]
//   Label: LAB_00560d2b
// 00560d31: PUSH EAX
// 00560d32: PUSH 0x643639
//   XREF to: 00643639 (DATA)
// 00560d37: PUSH EDI
// 00560d38: ADD EBX,0x4
// 00560d3b: INC ESI
// 00560d3c: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560d41: MOV EDX,dword ptr [EBP + 0x45c]
// 00560d47: ADD ESP,0xc
// 00560d4a: CMP ESI,EDX
// 00560d4c: JL 0x00560d2b
//   XREF to: 00560d2b (CONDITIONAL_JUMP)
// 00560d4e: MOV EAX,EAX
// 00560d50: PUSH 0x64363d
//   Label: LAB_00560d50
//   XREF to: 0064363d (DATA)
// 00560d55: PUSH EDI
// 00560d56: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560d5b: ADD ESP,0x8
// 00560d5e: PUSH EBP
// 00560d5f: CALL core_script.cpp_CalculateCRC_FUN_00560d80
//   XREF to: 00560d80 (UNCONDITIONAL_CALL)
// 00560d64: ADD ESP,0x4
// 00560d67: PUSH EAX
// 00560d68: PUSH 0x643645
//   XREF to: 00643645 (DATA)
// 00560d6d: PUSH EDI
// 00560d6e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00560d73: ADD ESP,0xc
// 00560d76: POP EBP
// 00560d77: POP EDI
// 00560d78: POP ESI
// 00560d79: POP EBX
// 00560d7a: RET
