// Name: core_fire.cpp_CGunFlame_initProcess_FUN_004c4b00
// Address: 004c4b00
// Address Range: [[004c4b00, 004c4bfa]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CGunFlame_initProcess_FUN_004c4b00(CGunFlame * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 (004c6ec0) at 004c70ad [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_fire_cpp_00629ee1
//   TerminatedCString s_CGunFlame_initProcess_to_00629ef2
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_02d13eb4
//   undefined4 DAT_02d13eb8
//   undefined4 DAT_02d13f80
//   undefined4 DAT_02d13f84
//   undefined4 g_CFlameCanClassInfo.name_hash
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
//   undefined4 g_CDemonSetInstance.damage_listener_count
//   undefined4 g_CDemonSetInstance.damage_listeners
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_hero.cpp_FUN_004f2220
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl core_fire_cpp_CGunFlame_initProcess_FUN_004c4b00(CGunFlame *this_ptr)

{
  int iVar1;
  int iVar2;
  CDemonActor *pCVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  DAT_02d13eb4 = 0;
  for (iVar5 = 0; iVar5 < g_CDemonSetPtr->damage_listener_count; iVar5 = iVar5 + 1) {
    iVar1 = *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + iVar4 + -4);
    iVar2 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x120))();
    if (iVar2 == 0) {
      iVar2 = core_hero_cpp_FUN_004f2220();
      if (iVar2 != 0) {
        if (0x31 < DAT_02d13eb4) {
          g_CurrentFilename = "..\\core\\fire.cpp";
          g_CurrentLineNumber = 0xd0f;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CGunFlame::initProcess - too many characters!");
        }
        (&DAT_02d13eb8)[DAT_02d13eb4] = iVar1;
        DAT_02d13eb4 = DAT_02d13eb4 + 1;
      }
    }
    iVar4 = iVar4 + 4;
  }
  iVar5 = 0;
  DAT_02d13f80 = 0;
  for (iVar4 = 0; iVar4 < (int)g_CDemonSetPtr->actor_list_ptr; iVar4 = iVar4 + 1) {
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar5),
                        g_CFlameCanClassInfo.name_hash);
    if ((pCVar3 != (CDemonActor *)0x0) && (DAT_02d13f80 < 0x96)) {
      (&DAT_02d13f84)[DAT_02d13f80] = pCVar3;
      DAT_02d13f80 = DAT_02d13f80 + 1;
    }
    iVar5 = iVar5 + 4;
  }
  return;
}


// Assembly code:
// 004c4b00: PUSH EBX
//   Label: core_fire.cpp_CGunFlame_initProcess_FUN_004c4b00
// 004c4b01: PUSH ESI
// 004c4b02: PUSH EDI
// 004c4b03: PUSH EBP
// 004c4b04: XOR EDX,EDX
// 004c4b06: XOR EDI,EDI
// 004c4b08: XOR ESI,ESI
// 004c4b0a: MOV dword ptr [0x02d13eb4],EDX
//   XREF to: 02d13eb4 (WRITE)
// 004c4b10: MOV EBX,dword ptr [0x006810c8]
//   Label: LAB_004c4b10
//   XREF to: 006810c8 (READ)
// 004c4b16: CMP EDI,dword ptr [EBX + 0x14f098]
//   XREF to: 03263310 (READ)
// 004c4b1c: JL 0x004c4b3e
//   XREF to: 004c4b3e (CONDITIONAL_JUMP)
// 004c4b1e: XOR EBX,EBX
// 004c4b20: XOR ESI,ESI
// 004c4b22: MOV dword ptr [0x02d13f80],EBX
//   XREF to: 02d13f80 (WRITE)
// 004c4b28: MOV EAX,[0x006810c8]
//   Label: LAB_004c4b28
//   XREF to: 03114278 (DATA)
//   XREF to: 006810c8 (READ)
// 004c4b2d: CMP EBX,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 004c4b33: JL 0x004c4bb9
//   XREF to: 004c4bb9 (CONDITIONAL_JUMP)
// 004c4b39: POP EBP
// 004c4b3a: POP EDI
// 004c4b3b: POP ESI
// 004c4b3c: POP EBX
// 004c4b3d: RET
// 004c4b3e: MOV EBX,dword ptr [ESI + EBX*0x1 + 0x14f09c]
//   Label: LAB_004c4b3e
//   XREF to: 03263314 (READ)
// 004c4b45: PUSH EBX
// 004c4b46: MOV EAX,dword ptr [EBX + 0x154]
// 004c4b4c: CALL dword ptr [EAX + 0x120]
// 004c4b52: ADD ESP,0x4
// 004c4b55: TEST EAX,EAX
// 004c4b57: JNZ 0x004c4b8c
//   XREF to: 004c4b8c (CONDITIONAL_JUMP)
// 004c4b59: LEA EAX,[EBX + 0x20]
// 004c4b5c: PUSH 0x42480000
// 004c4b61: PUSH EAX
// 004c4b62: CALL core_hero.cpp_FUN_004f2220
//   XREF to: 004f2220 (UNCONDITIONAL_CALL)
// 004c4b67: ADD ESP,0x8
// 004c4b6a: TEST EAX,EAX
// 004c4b6c: JZ 0x004c4b8c
//   XREF to: 004c4b8c (CONDITIONAL_JUMP)
// 004c4b6e: CMP dword ptr [0x02d13eb4],0x32
//   XREF to: 02d13eb4 (READ)
// 004c4b75: JGE 0x004c4b95
//   XREF to: 004c4b95 (CONDITIONAL_JUMP)
// 004c4b77: MOV EAX,[0x02d13eb4]
//   Label: LAB_004c4b77
//   XREF to: 02d13eb4 (READ)
// 004c4b7c: LEA ECX,[EAX + 0x1]
// 004c4b7f: MOV dword ptr [EAX*0x4 + 0x2d13eb8],EBX
//   XREF to: 02d13eb8 (WRITE)
// 004c4b86: MOV dword ptr [0x02d13eb4],ECX
//   XREF to: 02d13eb4 (WRITE)
// 004c4b8c: INC EDI
//   Label: LAB_004c4b8c
// 004c4b8d: ADD ESI,0x4
// 004c4b90: JMP 0x004c4b10
//   XREF to: 004c4b10 (UNCONDITIONAL_JUMP)
// 004c4b95: MOV EAX,0x629ee1
//   Label: LAB_004c4b95
//   XREF to: 00629ee1 (PARAM)
// 004c4b9a: MOV EDX,0xd0f
// 004c4b9f: PUSH 0x629ef2
//   XREF to: 00629ef2 (DATA)
// 004c4ba4: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 004c4ba9: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 004c4baf: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004c4bb4: ADD ESP,0x4
// 004c4bb7: JMP 0x004c4b77
//   XREF to: 004c4b77 (UNCONDITIONAL_JUMP)
// 004c4bb9: MOV EBP,dword ptr [0x02d7a738]
//   Label: LAB_004c4bb9
//   XREF to: 02d7a738 (READ)
// 004c4bbf: PUSH EBP
// 004c4bc0: MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
// 004c4bc7: PUSH EDX
// 004c4bc8: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004c4bcd: ADD ESP,0x8
// 004c4bd0: TEST EAX,EAX
// 004c4bd2: JZ 0x004c4bf2
//   XREF to: 004c4bf2 (CONDITIONAL_JUMP)
// 004c4bd4: MOV ECX,dword ptr [0x02d13f80]
//   XREF to: 02d13f80 (READ)
// 004c4bda: CMP ECX,0x96
// 004c4be0: JGE 0x004c4bf2
//   XREF to: 004c4bf2 (CONDITIONAL_JUMP)
// 004c4be2: LEA EDI,[ECX + 0x1]
// 004c4be5: MOV dword ptr [ECX*0x4 + 0x2d13f84],EAX
//   XREF to: 02d13f84 (WRITE)
// 004c4bec: MOV dword ptr [0x02d13f80],EDI
//   XREF to: 02d13f80 (WRITE)
// 004c4bf2: INC EBX
//   Label: LAB_004c4bf2
// 004c4bf3: ADD ESI,0x4
// 004c4bf6: JMP 0x004c4b28
//   XREF to: 004c4b28 (UNCONDITIONAL_JUMP)
