// Name: core_game.cpp_FUN_004dd9d0
// Address: 004dd9d0
// Address Range: [[004dd9d0, 004dda7a]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004dd9d0()
// Globals:
//   TerminatedCString s_cheat_1_wav_0062b9dd
//   CGame* g_CGamePtr = 02d81a9c
//   CSound* g_CSoundPtr = 03f6af64
//   CGame g_CGameInstance
//   undefined1 DAT_02d831d6
//   char[20] g_InputHistory
//   undefined4 CHAR_ARRAY_02d831d8
//   CSound g_CSoundInstance
// Function calls:
//   core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   core_game.cpp_giveHeroWeapon_FUN_004dd870
//   core_sound.cpp_CSound_playSfx_FUN_005b3a20
//   crt_ctype.c_toupper_FUN_005ff9e0

#include "nocturne.h"

void core_game_cpp_FUN_004dd9d0(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_00000010;
  int iVar6;
  int iVar7;
  
  uVar2 = 0xffffffff;
  pbVar5 = in_stack_00000004;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (bVar1 != 0);
  iVar3 = ~uVar2 - 1;
  iVar4 = 0;
  iVar6 = iVar3;
  if (0 < iVar3) {
    iVar7 = 0;
    do {
      bVar1 = g_InputHistory[iVar3];
      uVar2 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*in_stack_00000004);
      if (bVar1 == uVar2) {
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + -1;
      in_stack_00000004 = in_stack_00000004 + 1;
    } while (iVar7 < iVar3);
  }
  if (iVar4 != iVar6) {
    return;
  }
  g_InputHistory[1] = '\0';
  core_game_cpp_giveHeroWeapon_FUN_004dd870(in_stack_00000008);
  core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,in_stack_00000010,5.0);
  core_sound_cpp_CSound_playSfx_FUN_005b3a20(g_CSoundPtr,0,"cheat-1.wav");
  return;
}


// Assembly code:
// 004dd9d0: PUSH EBX
//   Label: core_game.cpp_FUN_004dd9d0
// 004dd9d1: PUSH ESI
// 004dd9d2: PUSH EDI
// 004dd9d3: PUSH EBP
// 004dd9d4: SUB ESP,0x8
// 004dd9d7: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 004dd9db: MOV EDI,ESI
// 004dd9dd: SUB ECX,ECX
// 004dd9df: DEC ECX
// 004dd9e0: XOR EAX,EAX
// 004dd9e2: SCASB.REPNE ES:EDI
// 004dd9e4: NOT ECX
// 004dd9e6: DEC ECX
// 004dd9e7: XOR EBP,EBP
// 004dd9e9: MOV EAX,ECX
// 004dd9eb: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x18] (DATA)
// 004dd9ee: TEST ECX,ECX
// 004dd9f0: JLE 0x004dda22
//   XREF to: 004dda22 (CONDITIONAL_JUMP)
// 004dd9f2: MOV EDI,ECX
// 004dd9f4: NEG EDI
// 004dd9f6: MOV EBX,ECX
// 004dd9f8: LEA EAX,[ECX + EDI*0x1]
// 004dd9fb: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004dd9ff: XOR EAX,EAX
//   Label: LAB_004dd9ff
// 004dda01: MOV AL,byte ptr [ESI]
// 004dda03: PUSH EAX
// 004dda04: MOVZX EDI,byte ptr [EBX + 0x2d831d7]
//   XREF to: 02d831d7 (READ)
//   XREF to: 02d831d6 (READ)
//   XREF to: 02d831d8 (READ)
// 004dda0b: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004dda10: ADD ESP,0x4
// 004dda13: CMP EDI,EAX
// 004dda15: JNZ 0x004dda18
//   XREF to: 004dda18 (CONDITIONAL_JUMP)
// 004dda17: INC EBP
// 004dda18: MOV EDX,dword ptr [ESP + 0x4]
//   Label: LAB_004dda18
//   XREF to: Stack[-0x14] (READ)
// 004dda1c: DEC EBX
// 004dda1d: INC ESI
// 004dda1e: CMP EBX,EDX
// 004dda20: JG 0x004dd9ff
//   XREF to: 004dd9ff (CONDITIONAL_JUMP)
// 004dda22: CMP EBP,dword ptr [ESP]
//   Label: LAB_004dda22
//   XREF to: Stack[-0x18] (DATA)
// 004dda25: JZ 0x004dda2f
//   XREF to: 004dda2f (CONDITIONAL_JUMP)
// 004dda27: ADD ESP,0x8
// 004dda2a: POP EBP
// 004dda2b: POP EDI
// 004dda2c: POP ESI
// 004dda2d: POP EBX
// 004dda2e: RET
// 004dda2f: MOV EBX,dword ptr [ESP + 0x20]
//   Label: LAB_004dda2f
//   XREF to: Stack[0x8] (READ)
// 004dda33: XOR AH,AH
// 004dda35: PUSH EBX
// 004dda36: MOV byte ptr [0x02d831d8],AH
//   XREF to: 02d831d8 (WRITE)
// 004dda3c: CALL core_game.cpp_giveHeroWeapon_FUN_004dd870
//   XREF to: 004dd870 (UNCONDITIONAL_CALL)
// 004dda41: ADD ESP,0x4
// 004dda44: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 004dda48: PUSH 0x40a00000
// 004dda4d: PUSH ESI
// 004dda4e: MOV EDI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 004dda54: PUSH EDI
//   XREF to: 02d81a9c (DATA)
// 004dda55: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 004dda5a: ADD ESP,0xc
// 004dda5d: PUSH 0x62b9dd
//   XREF to: 0062b9dd (DATA)
// 004dda62: PUSH 0x0
// 004dda64: MOV EBP,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 004dda6a: PUSH EBP
//   XREF to: 03f6af64 (DATA)
// 004dda6b: CALL core_sound.cpp_CSound_playSfx_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 004dda70: ADD ESP,0xc
// 004dda73: ADD ESP,0x8
// 004dda76: POP EBP
// 004dda77: POP EDI
// 004dda78: POP ESI
// 004dda79: POP EBX
// 004dda7a: RET
