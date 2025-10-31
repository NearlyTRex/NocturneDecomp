// Name: core_manpuz.cpp_FUN_005091d0
// Address: 005091d0
// Address Range: [[005091d0, 005092dd]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_005091d0()
// Globals:
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_game.cpp_CGame_FUN_004d8730
//   core_hero.cpp_FUN_004f2220
//   core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290
//   core_manpuz.cpp_FUN_00509b20
//   core_manpuz.cpp_FUN_0050a610
//   core_manpuz.cpp_FUN_0050a8d0
//   core_manpuz.cpp_FUN_0050af00
//   core_manpuz.cpp_FUN_0050af80

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_005091d0(undefined4 param_1, undefined4
   param_2) */

void core_manpuz_cpp_FUN_005091d0(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = core_hero_cpp_FUN_004f2220();
  if (iVar1 != 0) {
    iVar1 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290();
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      core_manpuz_cpp_FUN_0050af00();
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    iVar1 = 0;
    do {
      core_manpuz_cpp_FUN_0050a8d0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      core_manpuz_cpp_FUN_0050a610();
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      core_manpuz_cpp_FUN_00509b20();
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iVar1 = 0;
    do {
      core_manpuz_cpp_FUN_0050af80();
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    if ((undefined4 *)(in_stack_00000004 + 0x13c8) != (undefined4 *)(in_stack_00000004 + 0x1368)) {
      *(undefined4 *)(in_stack_00000004 + 0x13c8) = *(undefined4 *)(in_stack_00000004 + 0x1368);
      *(undefined4 *)(in_stack_00000004 + 0x13cc) = *(undefined4 *)(in_stack_00000004 + 0x136c);
      *(undefined4 *)(in_stack_00000004 + 0x13d0) = *(undefined4 *)(in_stack_00000004 + 0x1370);
    }
    *(byte *)(in_stack_00000004 + 0x13cf) = *(byte *)(in_stack_00000004 + 0x13cf) ^ 0x80;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)(in_stack_00000004 + 0x1374),(CVector3f *)(in_stack_00000004 + 0x1368)
              );
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)(in_stack_00000004 + 0x13d4),(CVector3f *)(in_stack_00000004 + 0x13c8)
              );
    core_game_cpp_CGame_FUN_004d8730(g_CGamePtr);
  }
  return;
}


// Assembly code:
// 005091d0: PUSH EBX
//   Label: core_manpuz.cpp_FUN_005091d0
// 005091d1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005091d5: LEA EAX,[EBX + 0x20]
// 005091d8: PUSH 0x41f00000
// 005091dd: PUSH EAX
// 005091de: CALL core_hero.cpp_FUN_004f2220
//   XREF to: 004f2220 (UNCONDITIONAL_CALL)
// 005091e3: ADD ESP,0x8
// 005091e6: TEST EAX,EAX
// 005091e8: JZ 0x005092dc
//   XREF to: 005092dc (CONDITIONAL_JUMP)
// 005091ee: PUSH ESI
// 005091ef: XOR ESI,ESI
// 005091f1: PUSH dword ptr [ESP + 0x10]
//   Label: LAB_005091f1
//   XREF to: Stack[0x8] (READ)
// 005091f5: PUSH ESI
// 005091f6: PUSH EBX
// 005091f7: CALL core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290
//   XREF to: 0050a290 (UNCONDITIONAL_CALL)
// 005091fc: INC ESI
// 005091fd: ADD ESP,0xc
// 00509200: CMP ESI,0xc
// 00509203: JL 0x005091f1
//   XREF to: 005091f1 (CONDITIONAL_JUMP)
// 00509205: XOR ESI,ESI
// 00509207: PUSH dword ptr [ESP + 0x10]
//   Label: LAB_00509207
//   XREF to: Stack[0x8] (READ)
// 0050920b: PUSH ESI
// 0050920c: PUSH EBX
// 0050920d: CALL core_manpuz.cpp_FUN_0050af00
//   XREF to: 0050af00 (UNCONDITIONAL_CALL)
// 00509212: INC ESI
// 00509213: ADD ESP,0xc
// 00509216: CMP ESI,0x2
// 00509219: JL 0x00509207
//   XREF to: 00509207 (CONDITIONAL_JUMP)
// 0050921b: XOR ESI,ESI
// 0050921d: PUSH dword ptr [ESP + 0x10]
//   Label: LAB_0050921d
//   XREF to: Stack[0x8] (READ)
// 00509221: PUSH ESI
// 00509222: PUSH EBX
// 00509223: CALL core_manpuz.cpp_FUN_0050a8d0
//   XREF to: 0050a8d0 (UNCONDITIONAL_CALL)
// 00509228: INC ESI
// 00509229: ADD ESP,0xc
// 0050922c: CMP ESI,0xc
// 0050922f: JL 0x0050921d
//   XREF to: 0050921d (CONDITIONAL_JUMP)
// 00509231: XOR ESI,ESI
// 00509233: PUSH dword ptr [ESP + 0x10]
//   Label: LAB_00509233
//   XREF to: Stack[0x8] (READ)
// 00509237: PUSH ESI
// 00509238: PUSH EBX
// 00509239: CALL core_manpuz.cpp_FUN_0050a610
//   XREF to: 0050a610 (UNCONDITIONAL_CALL)
// 0050923e: INC ESI
// 0050923f: ADD ESP,0xc
// 00509242: CMP ESI,0xc
// 00509245: JL 0x00509233
//   XREF to: 00509233 (CONDITIONAL_JUMP)
// 00509247: XOR ESI,ESI
// 00509249: PUSH ESI
//   Label: LAB_00509249
// 0050924a: PUSH EBX
// 0050924b: CALL core_manpuz.cpp_FUN_00509b20
//   XREF to: 00509b20 (UNCONDITIONAL_CALL)
// 00509250: INC ESI
// 00509251: ADD ESP,0x8
// 00509254: CMP ESI,0xc
// 00509257: JL 0x00509249
//   XREF to: 00509249 (CONDITIONAL_JUMP)
// 00509259: XOR ESI,ESI
// 0050925b: PUSH ESI
//   Label: LAB_0050925b
// 0050925c: PUSH EBX
// 0050925d: CALL core_manpuz.cpp_FUN_0050af80
//   XREF to: 0050af80 (UNCONDITIONAL_CALL)
// 00509262: INC ESI
// 00509263: ADD ESP,0x8
// 00509266: CMP ESI,0x2
// 00509269: JL 0x0050925b
//   XREF to: 0050925b (CONDITIONAL_JUMP)
// 0050926b: LEA ESI,[EBX + 0x13c8]
// 00509271: LEA EAX,[EBX + 0x1368]
// 00509277: CMP ESI,EAX
// 00509279: JZ 0x0050928b
//   XREF to: 0050928b (CONDITIONAL_JUMP)
// 0050927b: MOV EDX,dword ptr [EAX]
// 0050927d: MOV dword ptr [ESI],EDX
// 0050927f: MOV EDX,dword ptr [EAX + 0x4]
// 00509282: MOV dword ptr [ESI + 0x4],EDX
// 00509285: MOV EDX,dword ptr [EAX + 0x8]
// 00509288: MOV dword ptr [ESI + 0x8],EDX
// 0050928b: MOV AH,byte ptr [EBX + 0x13cf]
//   Label: LAB_0050928b
// 00509291: LEA ESI,[EBX + 0x1368]
// 00509297: XOR AH,0x80
// 0050929a: PUSH ESI
// 0050929b: MOV byte ptr [EBX + 0x13cf],AH
// 005092a1: LEA EAX,[EBX + 0x1374]
// 005092a7: PUSH EAX
// 005092a8: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 005092ad: ADD ESP,0x8
// 005092b0: LEA EAX,[EBX + 0x13c8]
// 005092b6: PUSH EAX
// 005092b7: ADD EBX,0x13d4
// 005092bd: PUSH EBX
// 005092be: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 005092c3: ADD ESP,0x8
// 005092c6: PUSH 0x3c8efa35
// 005092cb: PUSH ESI
// 005092cc: MOV EDX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005092d2: PUSH EDX
//   XREF to: 02d81a9c (DATA)
// 005092d3: CALL core_game.cpp_CGame_FUN_004d8730
//   XREF to: 004d8730 (UNCONDITIONAL_CALL)
// 005092d8: ADD ESP,0xc
// 005092db: POP ESI
// 005092dc: POP EBX
//   Label: LAB_005092dc
// 005092dd: RET
