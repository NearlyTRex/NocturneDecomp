// Name: core_menu.cpp_getSinglePressedKey_FUN_00513860
// Address: 00513860
// Address Range: [[00513860, 005138bd]]
// Convention: __cdecl
// Signature: int core_menu.cpp_getSinglePressedKey_FUN_00513860(void)
// Globals:
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.game_control
//   void* g_CKeysPtr
// Function calls:
//   core_game.cpp_CGame_resetKeyState_FUN_004dbe60

#include "nocturne.h"

int __cdecl core_menu_cpp_getSinglePressedKey_FUN_00513860(void)

{
  int iVar1;
  int keyCode;
  int iVar2;
  
  if (g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD) {
    core_game_cpp_CGame_resetKeyState_FUN_004dbe60();
  }
  iVar1 = 0;
  iVar2 = -1;
  while( true ) {
    while( true ) {
      keyCode = iVar1;
      iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,keyCode);
      if (iVar1 != 0) break;
      iVar1 = keyCode + 1;
      if (599 < keyCode + 1) {
        return iVar2;
      }
    }
    if (-1 < iVar2) break;
    iVar1 = keyCode + 1;
    iVar2 = keyCode;
    if (599 < keyCode + 1) {
      return keyCode;
    }
  }
  return -2;
}


// Assembly code:
// 00513860: PUSH EBX
//   Label: core_menu.cpp_getSinglePressedKey_FUN_00513860
// 00513861: PUSH ESI
// 00513862: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
//   XREF to: 02d81a9c (PARAM)
// 00513867: CMP dword ptr [EAX + 0xbc],0x2
//   XREF to: 02d81b58 (READ)
// 0051386e: JZ 0x00513895
//   XREF to: 00513895 (CONDITIONAL_JUMP)
// 00513870: MOV ESI,0xffffffff
//   Label: LAB_00513870
// 00513875: XOR EBX,EBX
// 00513877: PUSH EBX
//   Label: LAB_00513877
// 00513878: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0051387d: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051387e: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00513880: CALL dword ptr [EDX]
// 00513882: ADD ESP,0x8
// 00513885: TEST EAX,EAX
// 00513887: JZ 0x005138a0
//   XREF to: 005138a0 (CONDITIONAL_JUMP)
// 00513889: TEST ESI,ESI
// 0051388b: JL 0x005138ae
//   XREF to: 005138ae (CONDITIONAL_JUMP)
// 0051388d: MOV EAX,0xfffffffe
// 00513892: POP ESI
// 00513893: POP EBX
// 00513894: RET
// 00513895: PUSH EAX
//   Label: LAB_00513895
//   XREF to: 02d81a9c (DATA)
// 00513896: CALL core_game.cpp_CGame_resetKeyState_FUN_004dbe60
//   XREF to: 004dbe60 (UNCONDITIONAL_CALL)
// 0051389b: ADD ESP,0x4
// 0051389e: JMP 0x00513870
//   XREF to: 00513870 (UNCONDITIONAL_JUMP)
// 005138a0: INC EBX
//   Label: LAB_005138a0
// 005138a1: CMP EBX,0x258
// 005138a7: JL 0x00513877
//   XREF to: 00513877 (CONDITIONAL_JUMP)
// 005138a9: MOV EAX,ESI
// 005138ab: POP ESI
// 005138ac: POP EBX
// 005138ad: RET
// 005138ae: MOV ESI,EBX
//   Label: LAB_005138ae
// 005138b0: INC EBX
// 005138b1: CMP EBX,0x258
// 005138b7: JL 0x00513877
//   XREF to: 00513877 (CONDITIONAL_JUMP)
// 005138b9: MOV EAX,ESI
// 005138bb: POP ESI
// 005138bc: POP EBX
// 005138bd: RET
