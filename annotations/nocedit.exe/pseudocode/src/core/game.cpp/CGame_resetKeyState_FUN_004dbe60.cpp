// Name: core_game.cpp_CGame_resetKeyState_FUN_004dbe60
// Address: 004dbe60
// Address Range: [[004dbe60, 004dc22d]]
// Convention: unknown
// Signature: undefined core_game.cpp_CGame_resetKeyState_FUN_004dbe60()
// Cross-references:
//   core_game.cpp_CGame_openSomething_FUN_004e2910 (004e2910) at 004e2ef3 [UNCONDITIONAL_CALL]
//   core_game.cpp_CallToJoystickStuff_FUN_004dc230 (004dc230) at 004dc236 [UNCONDITIONAL_CALL]
//   core_menu.cpp_FUN_00513860 (00513860) at 00513896 [UNCONDITIONAL_CALL]
//   core_menu.cpp_SetUpGamepadControls_FUN_005104d0 (005104d0) at 005105a8 [UNCONDITIONAL_CALL]
//   core_menu.cpp_SettingCustomKeys_FUN_005138e0 (005138e0) at 00514ac4 [UNCONDITIONAL_CALL]
// Globals:
//   CKeys* g_CKeysPtr = 02dcd7d4
//   DWORD g_JoyXPos
//   DWORD g_JoyYPos
//   DWORD g_JoyButtons
//   undefined4 g_JoyButtons+1
//   int g_JoystickPresent
//   void* g_CKeysPtr
// Function calls:
//   engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0
//   engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490
//   wincore_winrun.cpp_getJoystickState_FUN_005f43a0

#include "nocturne.h"

/* Signature: undefined1 core_game.cpp_CGame_resetKeyState(CGame* pGame) */

void core_game_cpp_CGame_resetKeyState_FUN_004dbe60(void)

{
  uint unaff_EBP;
  uint unaff_EDI;
  int in_stack_00000004;
  
  g_JoystickPresent = 2;
  wincore_winrun_cpp_getJoystickState_FUN_005f43a0();
  if ((g_JoyButtons & 1) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x202);
  }
  else if ((unaff_EBP & 1) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x202);
  }
  if ((g_JoyButtons & 2) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x203);
  }
  else if ((unaff_EDI & 2) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x203);
  }
  if ((g_JoyButtons & 4) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x204);
  }
  else if ((unaff_EDI & 4) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x204);
  }
  if ((g_JoyButtons & 8) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x205);
  }
  else if ((unaff_EDI & 8) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x205);
  }
  if ((g_JoyButtons & 0x10) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x206);
  }
  else if ((unaff_EDI & 0x10) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x206);
  }
  if ((g_JoyButtons & 0x20) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x207);
  }
  else if ((unaff_EDI & 0x20) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x207);
  }
  if ((g_JoyButtons & 0x40) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x208);
  }
  else if ((unaff_EDI & 0x40) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x208);
  }
  if ((g_JoyButtons & 0x80) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x209);
  }
  else if ((unaff_EDI & 0x80) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x209);
  }
  if ((g_JoyButtons & 0x100) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x20a);
  }
  else if ((unaff_EDI & 0x100) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x20a);
  }
  if ((g_JoyButtons & 0x200) == 0) {
    engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x20b);
  }
  else if ((unaff_EDI & 0x200) == 0) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x20b);
  }
  engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x251);
  engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x252);
  engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x253);
  engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(g_CKeysPtr,0x254);
  if ((int)g_JoyXPos <
      *(int *)(in_stack_00000004 + 0xa4) -
      (*(int *)(in_stack_00000004 + 0xa4) - *(int *)(in_stack_00000004 + 0xac)) / 2) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x251);
  }
  if ((*(int *)(in_stack_00000004 + 0xb0) - *(int *)(in_stack_00000004 + 0xa4)) / 2 +
      *(int *)(in_stack_00000004 + 0xa4) < (int)g_JoyXPos) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x252);
  }
  if ((int)g_JoyYPos <
      *(int *)(in_stack_00000004 + 0xa8) -
      (*(int *)(in_stack_00000004 + 0xa8) - *(int *)(in_stack_00000004 + 0xb4)) / 2) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x253);
  }
  if ((*(int *)(in_stack_00000004 + 0xb8) - *(int *)(in_stack_00000004 + 0xa8)) / 2 +
      *(int *)(in_stack_00000004 + 0xa8) < (int)g_JoyYPos) {
    engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(g_CKeysPtr,0x254);
    return;
  }
  return;
}


// Assembly code:
// 004dbe60: PUSH EBX
//   Label: core_game.cpp_CGame_resetKeyState_FUN_004dbe60
// 004dbe61: PUSH ESI
// 004dbe62: PUSH EDI
// 004dbe63: PUSH EBP
// 004dbe64: SUB ESP,0x4
// 004dbe67: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004dbe6b: MOV EAX,[0x02d05208]
//   XREF to: 02d05208 (READ)
// 004dbe70: MOV EDX,0x2
// 004dbe75: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 004dbe78: MOV dword ptr [0x02d0520c],EDX
//   XREF to: 02d0520c (WRITE)
// 004dbe7e: CALL wincore_winrun.cpp_getJoystickState_FUN_005f43a0
//   XREF to: 005f43a0 (UNCONDITIONAL_CALL)
// 004dbe83: TEST byte ptr [0x02d05208],0x1
//   XREF to: 02d05208 (READ)
// 004dbe8a: JZ 0x004dc139
//   XREF to: 004dc139 (CONDITIONAL_JUMP)
// 004dbe90: TEST byte ptr [ESP],0x1
//   XREF to: Stack[-0x14] (DATA)
// 004dbe94: JNZ 0x004dbeaa
//   XREF to: 004dbeaa (CONDITIONAL_JUMP)
// 004dbe96: PUSH 0x202
// 004dbe9b: MOV ESI,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dbea1: PUSH ESI
//   XREF to: 02dcd7d4 (DATA)
// 004dbea2: CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490
//   XREF to: 00502490 (UNCONDITIONAL_CALL)
// 004dbea7: ADD ESP,0x8
//   Label: LAB_004dbea7
// 004dbeaa: TEST byte ptr [0x02d05208],0x2
//   Label: LAB_004dbeaa
//   XREF to: 02d05208 (READ)
// 004dbeb1: JZ 0x004dc14f
//   XREF to: 004dc14f (CONDITIONAL_JUMP)
// 004dbeb7: TEST byte ptr [ESP],0x2
//   XREF to: Stack[-0x14] (DATA)
// 004dbebb: JNZ 0x004dbed1
//   XREF to: 004dbed1 (CONDITIONAL_JUMP)
// 004dbebd: PUSH 0x203
// 004dbec2: MOV EBP,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dbec8: PUSH EBP
//   XREF to: 02dcd7d4 (DATA)
// 004dbec9: CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490
//   XREF to: 00502490 (UNCONDITIONAL_CALL)
// 004dbece: ADD ESP,0x8
//   Label: LAB_004dbece
// 004dbed1: TEST byte ptr [0x02d05208],0x4
//   Label: LAB_004dbed1
//   XREF to: 02d05208 (READ)
// 004dbed8: JZ 0x004dc165
//   XREF to: 004dc165 (CONDITIONAL_JUMP)
// 004dbede: TEST byte ptr [ESP],0x4
//   XREF to: Stack[-0x14] (DATA)
// 004dbee2: JNZ 0x004dbef8
//   XREF to: 004dbef8 (CONDITIONAL_JUMP)
// 004dbee4: PUSH 0x204
// 004dbee9: MOV EDX,dword ptr [0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 004dbeef: PUSH EDX
//   XREF to: 02dcd7d4 (DATA)
// 004dbef0: CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490
//   XREF to: 00502490 (UNCONDITIONAL_CALL)
// 004dbef5: ADD ESP,0x8
//   Label: LAB_004dbef5
// 004dbef8: TEST byte ptr [0x02d05208],0x8
//   Label: LAB_004dbef8
//   XREF to: 02d05208 (READ)
// 004dbeff: JZ 0x004dc17a
//   XREF to: 004dc17a (CONDITIONAL_JUMP)
// 004dbf05: TEST byte ptr [ESP],0x8
//   XREF to: Stack[-0x14] (DATA)
// 004dbf09: JNZ 0x004dbf1f
//   XREF to: 004dbf1f (CONDITIONAL_JUMP)
// 004dbf0b: PUSH 0x205
// 004dbf10: MOV ESI,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dbf16: PUSH ESI
//   XREF to: 02dcd7d4 (DATA)
// 004dbf17: CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490
//   XREF to: 00502490 (UNCONDITIONAL_CALL)
// 004dbf1c: ADD ESP,0x8
//   Label: LAB_004dbf1c
// 004dbf1f: TEST byte ptr [0x02d05208],0x10
//   Label: LAB_004dbf1f
//   XREF to: 02d05208 (READ)
// 004dbf26: JZ 0x004dc190
//   XREF to: 004dc190 (CONDITIONAL_JUMP)
// 004dbf2c: TEST byte ptr [ESP],0x10
//   XREF to: Stack[-0x14] (DATA)
// 004dbf30: JNZ 0x004dbf46
//   XREF to: 004dbf46 (CONDITIONAL_JUMP)
// 004dbf32: PUSH 0x206
// 004dbf37: MOV EBP,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dbf3d: PUSH EBP
//   XREF to: 02dcd7d4 (DATA)
// 004dbf3e: CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490
//   XREF to: 00502490 (UNCONDITIONAL_CALL)
// 004dbf43: ADD ESP,0x8
//   Label: LAB_004dbf43
// 004dbf46: TEST byte ptr [0x02d05208],0x20
//   Label: LAB_004dbf46
//   XREF to: 02d05208 (READ)
// 004dbf4d: JZ 0x004dc1a6
//   XREF to: 004dc1a6 (CONDITIONAL_JUMP)
// 004dbf53: TEST byte ptr [ESP],0x20
//   XREF to: Stack[-0x14] (DATA)
// 004dbf57: JNZ 0x004dbf6d
//   XREF to: 004dbf6d (CONDITIONAL_JUMP)
// 004dbf59: PUSH 0x207
// 004dbf5e: MOV EDX,dword ptr [0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 004dbf64: PUSH EDX
//   XREF to: 02dcd7d4 (DATA)
// 004dbf65: CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490
//   XREF to: 00502490 (UNCONDITIONAL_CALL)
// 004dbf6a: ADD ESP,0x8
//   Label: LAB_004dbf6a
// 004dbf6d: TEST byte ptr [0x02d05208],0x40
//   Label: LAB_004dbf6d
//   XREF to: 02d05208 (READ)
// 004dbf74: JZ 0x004dc1bb
//   XREF to: 004dc1bb (CONDITIONAL_JUMP)
// 004dbf7a: TEST byte ptr [ESP],0x40
//   XREF to: Stack[-0x14] (DATA)
// 004dbf7e: JNZ 0x004dbf94
//   XREF to: 004dbf94 (CONDITIONAL_JUMP)
// 004dbf80: PUSH 0x208
// 004dbf85: MOV ESI,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dbf8b: PUSH ESI
//   XREF to: 02dcd7d4 (DATA)
// 004dbf8c: CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490
//   XREF to: 00502490 (UNCONDITIONAL_CALL)
// 004dbf91: ADD ESP,0x8
//   Label: LAB_004dbf91
// 004dbf94: TEST byte ptr [0x02d05208],0x80
//   Label: LAB_004dbf94
//   XREF to: 02d05208 (READ)
// 004dbf9b: JZ 0x004dc1d1
//   XREF to: 004dc1d1 (CONDITIONAL_JUMP)
// 004dbfa1: TEST byte ptr [ESP],0x80
//   XREF to: Stack[-0x14] (DATA)
// 004dbfa5: JNZ 0x004dbfbb
//   XREF to: 004dbfbb (CONDITIONAL_JUMP)
// 004dbfa7: PUSH 0x209
// 004dbfac: MOV EBP,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dbfb2: PUSH EBP
//   XREF to: 02dcd7d4 (DATA)
// 004dbfb3: CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490
//   XREF to: 00502490 (UNCONDITIONAL_CALL)
// 004dbfb8: ADD ESP,0x8
//   Label: LAB_004dbfb8
// 004dbfbb: TEST byte ptr [0x02d05209],0x1
//   Label: LAB_004dbfbb
//   XREF to: 02d05209 (READ)
// 004dbfc2: JZ 0x004dc1e7
//   XREF to: 004dc1e7 (CONDITIONAL_JUMP)
// 004dbfc8: TEST byte ptr [ESP + 0x1],0x1
//   XREF to: Stack[-0x13] (READ)
// 004dbfcd: JNZ 0x004dbfe3
//   XREF to: 004dbfe3 (CONDITIONAL_JUMP)
// 004dbfcf: PUSH 0x20a
// 004dbfd4: MOV EDX,dword ptr [0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 004dbfda: PUSH EDX
//   XREF to: 02dcd7d4 (DATA)
// 004dbfdb: CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490
//   XREF to: 00502490 (UNCONDITIONAL_CALL)
// 004dbfe0: ADD ESP,0x8
//   Label: LAB_004dbfe0
// 004dbfe3: TEST byte ptr [0x02d05209],0x2
//   Label: LAB_004dbfe3
//   XREF to: 02d05209 (READ)
// 004dbfea: JZ 0x004dc1fc
//   XREF to: 004dc1fc (CONDITIONAL_JUMP)
// 004dbff0: TEST byte ptr [ESP + 0x1],0x2
//   XREF to: Stack[-0x13] (READ)
// 004dbff5: JNZ 0x004dc00b
//   XREF to: 004dc00b (CONDITIONAL_JUMP)
// 004dbff7: PUSH 0x20b
// 004dbffc: MOV ESI,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dc002: PUSH ESI
//   XREF to: 02dcd7d4 (DATA)
// 004dc003: CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490
//   XREF to: 00502490 (UNCONDITIONAL_CALL)
// 004dc008: ADD ESP,0x8
//   Label: LAB_004dc008
// 004dc00b: PUSH 0x251
//   Label: LAB_004dc00b
// 004dc010: MOV EDI,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dc016: PUSH EDI
//   XREF to: 02dcd7d4 (DATA)
// 004dc017: CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0
//   XREF to: 005024a0 (UNCONDITIONAL_CALL)
// 004dc01c: ADD ESP,0x8
// 004dc01f: PUSH 0x252
// 004dc024: MOV EBP,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dc02a: PUSH EBP
//   XREF to: 02dcd7d4 (DATA)
// 004dc02b: CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0
//   XREF to: 005024a0 (UNCONDITIONAL_CALL)
// 004dc030: ADD ESP,0x8
// 004dc033: PUSH 0x253
// 004dc038: MOV EAX,[0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 004dc03d: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dc03e: CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0
//   XREF to: 005024a0 (UNCONDITIONAL_CALL)
// 004dc043: ADD ESP,0x8
// 004dc046: PUSH 0x254
// 004dc04b: MOV EDX,dword ptr [0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 004dc051: PUSH EDX
//   XREF to: 02dcd7d4 (DATA)
// 004dc052: CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0
//   XREF to: 005024a0 (UNCONDITIONAL_CALL)
// 004dc057: MOV EDX,dword ptr [EBX + 0xa4]
// 004dc05d: MOV ECX,dword ptr [EBX + 0xac]
// 004dc063: SUB EDX,ECX
// 004dc065: MOV EAX,EDX
// 004dc067: SAR EDX,0x1f
// 004dc06a: SUB EAX,EDX
// 004dc06c: SAR EAX,0x1
// 004dc06e: MOV EDX,dword ptr [EBX + 0xa4]
// 004dc074: MOV ESI,dword ptr [0x02d051f8]
//   XREF to: 02d051f8 (READ)
// 004dc07a: SUB EDX,EAX
// 004dc07c: ADD ESP,0x8
// 004dc07f: CMP EDX,ESI
// 004dc081: JLE 0x004dc097
//   XREF to: 004dc097 (CONDITIONAL_JUMP)
// 004dc083: PUSH 0x251
// 004dc088: MOV EDI,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dc08e: PUSH EDI
//   XREF to: 02dcd7d4 (DATA)
// 004dc08f: CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490
//   XREF to: 00502490 (UNCONDITIONAL_CALL)
// 004dc094: ADD ESP,0x8
// 004dc097: MOV EBP,dword ptr [EBX + 0xa4]
//   Label: LAB_004dc097
// 004dc09d: MOV EDX,dword ptr [EBX + 0xb0]
// 004dc0a3: SUB EDX,EBP
// 004dc0a5: MOV EAX,EDX
// 004dc0a7: SAR EDX,0x1f
// 004dc0aa: SUB EAX,EDX
// 004dc0ac: SAR EAX,0x1
// 004dc0ae: MOV ECX,dword ptr [0x02d051f8]
//   XREF to: 02d051f8 (READ)
// 004dc0b4: ADD EAX,EBP
// 004dc0b6: CMP EAX,ECX
// 004dc0b8: JGE 0x004dc0ce
//   XREF to: 004dc0ce (CONDITIONAL_JUMP)
// 004dc0ba: PUSH 0x252
// 004dc0bf: MOV ESI,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dc0c5: PUSH ESI
//   XREF to: 02dcd7d4 (DATA)
// 004dc0c6: CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490
//   XREF to: 00502490 (UNCONDITIONAL_CALL)
// 004dc0cb: ADD ESP,0x8
// 004dc0ce: MOV EDI,dword ptr [EBX + 0xb4]
//   Label: LAB_004dc0ce
// 004dc0d4: MOV EDX,dword ptr [EBX + 0xa8]
// 004dc0da: SUB EDX,EDI
// 004dc0dc: MOV EAX,EDX
// 004dc0de: SAR EDX,0x1f
// 004dc0e1: SUB EAX,EDX
// 004dc0e3: SAR EAX,0x1
// 004dc0e5: MOV EDX,dword ptr [EBX + 0xa8]
// 004dc0eb: MOV EBP,dword ptr [0x02d051fc]
//   XREF to: 02d051fc (READ)
// 004dc0f1: SUB EDX,EAX
// 004dc0f3: CMP EDX,EBP
// 004dc0f5: JLE 0x004dc10a
//   XREF to: 004dc10a (CONDITIONAL_JUMP)
// 004dc0f7: PUSH 0x253
// 004dc0fc: MOV EAX,[0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 004dc101: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dc102: CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490
//   XREF to: 00502490 (UNCONDITIONAL_CALL)
// 004dc107: ADD ESP,0x8
// 004dc10a: MOV ECX,dword ptr [EBX + 0xa8]
//   Label: LAB_004dc10a
// 004dc110: MOV EDX,dword ptr [EBX + 0xb8]
// 004dc116: SUB EDX,ECX
// 004dc118: MOV EAX,EDX
// 004dc11a: SAR EDX,0x1f
// 004dc11d: SUB EAX,EDX
// 004dc11f: SAR EAX,0x1
// 004dc121: MOV EDI,dword ptr [0x02d051fc]
//   XREF to: 02d051fc (READ)
// 004dc127: ADD EAX,ECX
// 004dc129: CMP EAX,EDI
// 004dc12b: JL 0x004dc212
//   XREF to: 004dc212 (CONDITIONAL_JUMP)
// 004dc131: ADD ESP,0x4
// 004dc134: POP EBP
// 004dc135: POP EDI
// 004dc136: POP ESI
// 004dc137: POP EBX
// 004dc138: RET
// 004dc139: PUSH 0x202
//   Label: LAB_004dc139
// 004dc13e: MOV ECX,dword ptr [0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 004dc144: PUSH ECX
//   XREF to: 02dcd7d4 (DATA)
// 004dc145: CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0
//   XREF to: 005024a0 (UNCONDITIONAL_CALL)
// 004dc14a: JMP 0x004dbea7
//   XREF to: 004dbea7 (UNCONDITIONAL_JUMP)
// 004dc14f: PUSH 0x203
//   Label: LAB_004dc14f
// 004dc154: MOV EDI,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dc15a: PUSH EDI
//   XREF to: 02dcd7d4 (DATA)
// 004dc15b: CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0
//   XREF to: 005024a0 (UNCONDITIONAL_CALL)
// 004dc160: JMP 0x004dbece
//   XREF to: 004dbece (UNCONDITIONAL_JUMP)
// 004dc165: PUSH 0x204
//   Label: LAB_004dc165
// 004dc16a: MOV EAX,[0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 004dc16f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dc170: CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0
//   XREF to: 005024a0 (UNCONDITIONAL_CALL)
// 004dc175: JMP 0x004dbef5
//   XREF to: 004dbef5 (UNCONDITIONAL_JUMP)
// 004dc17a: PUSH 0x205
//   Label: LAB_004dc17a
// 004dc17f: MOV ECX,dword ptr [0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 004dc185: PUSH ECX
//   XREF to: 02dcd7d4 (DATA)
// 004dc186: CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0
//   XREF to: 005024a0 (UNCONDITIONAL_CALL)
// 004dc18b: JMP 0x004dbf1c
//   XREF to: 004dbf1c (UNCONDITIONAL_JUMP)
// 004dc190: PUSH 0x206
//   Label: LAB_004dc190
// 004dc195: MOV EDI,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dc19b: PUSH EDI
//   XREF to: 02dcd7d4 (DATA)
// 004dc19c: CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0
//   XREF to: 005024a0 (UNCONDITIONAL_CALL)
// 004dc1a1: JMP 0x004dbf43
//   XREF to: 004dbf43 (UNCONDITIONAL_JUMP)
// 004dc1a6: PUSH 0x207
//   Label: LAB_004dc1a6
// 004dc1ab: MOV EAX,[0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 004dc1b0: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dc1b1: CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0
//   XREF to: 005024a0 (UNCONDITIONAL_CALL)
// 004dc1b6: JMP 0x004dbf6a
//   XREF to: 004dbf6a (UNCONDITIONAL_JUMP)
// 004dc1bb: PUSH 0x208
//   Label: LAB_004dc1bb
// 004dc1c0: MOV ECX,dword ptr [0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 004dc1c6: PUSH ECX
//   XREF to: 02dcd7d4 (DATA)
// 004dc1c7: CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0
//   XREF to: 005024a0 (UNCONDITIONAL_CALL)
// 004dc1cc: JMP 0x004dbf91
//   XREF to: 004dbf91 (UNCONDITIONAL_JUMP)
// 004dc1d1: PUSH 0x209
//   Label: LAB_004dc1d1
// 004dc1d6: MOV EDI,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dc1dc: PUSH EDI
//   XREF to: 02dcd7d4 (DATA)
// 004dc1dd: CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0
//   XREF to: 005024a0 (UNCONDITIONAL_CALL)
// 004dc1e2: JMP 0x004dbfb8
//   XREF to: 004dbfb8 (UNCONDITIONAL_JUMP)
// 004dc1e7: PUSH 0x20a
//   Label: LAB_004dc1e7
// 004dc1ec: MOV EAX,[0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 004dc1f1: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004dc1f2: CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0
//   XREF to: 005024a0 (UNCONDITIONAL_CALL)
// 004dc1f7: JMP 0x004dbfe0
//   XREF to: 004dbfe0 (UNCONDITIONAL_JUMP)
// 004dc1fc: PUSH 0x20b
//   Label: LAB_004dc1fc
// 004dc201: MOV ECX,dword ptr [0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 004dc207: PUSH ECX
//   XREF to: 02dcd7d4 (DATA)
// 004dc208: CALL engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0
//   XREF to: 005024a0 (UNCONDITIONAL_CALL)
// 004dc20d: JMP 0x004dc008
//   XREF to: 004dc008 (UNCONDITIONAL_JUMP)
// 004dc212: PUSH 0x254
//   Label: LAB_004dc212
// 004dc217: MOV EBP,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004dc21d: PUSH EBP
//   XREF to: 02dcd7d4 (DATA)
// 004dc21e: CALL engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490
//   XREF to: 00502490 (UNCONDITIONAL_CALL)
// 004dc223: ADD ESP,0x8
// 004dc226: ADD ESP,0x4
// 004dc229: POP EBP
// 004dc22a: POP EDI
// 004dc22b: POP ESI
// 004dc22c: POP EBX
// 004dc22d: RET
