// Name: core_mimic.cpp_FUN_00520500
// Address: 00520500
// Address Range: [[00520500, 005205e8]]
// Convention: unknown
// Signature: undefined core_mimic.cpp_FUN_00520500()
// Cross-references:
//   core_mimic.cpp_CMimic_setup2_FUN_0051f780 (0051f780) at 0051f8db [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_%s_attacking_hero_006387b3
//   CConsole* g_CConsolePtr = 0083b1a4
//   CConsole g_ConsolePtr
//   undefined4 g_CGabriellaClassInfo.name_hash
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_cloth.cpp_FUN_00439710
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_FUN_0052ddb0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_mimic.cpp_FUN_00520500(undefined4 param_1) */

void core_mimic_cpp_FUN_00520500(void)

{
  CDemonActor *pCVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  byte bVar6;
  int in_stack_00000004;
  
  bVar6 = 0;
  *(undefined4 *)(in_stack_00000004 + 0x4bdf4) = 2;
  core_cloth_cpp_FUN_00439710();
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],g_CGabriellaClassInfo.name_hash)
  ;
  if (pCVar1 != (CDemonActor *)0x0) {
    piVar4 = &pCVar1[0x1ba].is_transparent;
    piVar5 = (int *)(in_stack_00000004 + 0x1165c);
    for (uVar2 = *(int *)(in_stack_00000004 + 0xc088) * 0x47 & 0x3fffffff; uVar2 != 0;
        uVar2 = uVar2 - 1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
      piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(char *)piVar5 = (char)*piVar4;
      piVar4 = (int *)((int)piVar4 + (uint)bVar6 * -2 + 1);
      piVar5 = (int *)((int)piVar5 + (uint)bVar6 * -2 + 1);
    }
  }
  core_motion_cpp_CMotionController_FUN_0052dab0();
  core_motion_cpp_CMotionController_FUN_0052ddb0();
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"@@%s attacking hero\n" + 2);
  return;
}


// Assembly code:
// 00520500: PUSH EBX
//   Label: core_mimic.cpp_FUN_00520500
// 00520501: PUSH ESI
// 00520502: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00520506: LEA EAX,[EBX + 0x158]
// 0052050c: PUSH EAX
// 0052050d: LEA EAX,[EBX + 0x30]
// 00520510: PUSH EAX
// 00520511: LEA EAX,[EBX + 0x20]
// 00520514: PUSH EAX
// 00520515: LEA ESI,[EBX + 0xbf84]
// 0052051b: PUSH ESI
// 0052051c: MOV dword ptr [EBX + 0x4bdf4],0x2
// 00520526: CALL core_cloth.cpp_FUN_00439710
//   XREF to: 00439710 (UNCONDITIONAL_CALL)
// 0052052b: ADD ESP,0x10
// 0052052e: MOV EDX,dword ptr [0x02d7b8d0]
//   XREF to: 02d7b8d0 (READ)
// 00520534: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 00520539: PUSH EDX
// 0052053a: MOV ECX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 00520541: PUSH ECX
// 00520542: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00520547: MOV EDX,EAX
// 00520549: ADD ESP,0x8
// 0052054c: TEST EAX,EAX
// 0052054e: JNZ 0x005205ab
//   XREF to: 005205ab (CONDITIONAL_JUMP)
// 00520550: MOV EAX,[0x02db87d0]
//   Label: LAB_00520550
//   XREF to: 02db87d0 (READ)
// 00520555: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0052055c: SUB ESP,0x4
// 0052055f: FLD float ptr [EAX + 0x160]
// 00520565: ADD EAX,0x158
// 0052056a: FSTP float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 0052056d: PUSH EAX
// 0052056e: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00520573: ADD ESP,0x4
// 00520576: PUSH EAX
// 00520577: LEA ESI,[EBX + 0x158]
// 0052057d: PUSH ESI
// 0052057e: CALL core_motion.cpp_CMotionController_FUN_0052ddb0
//   XREF to: 0052ddb0 (UNCONDITIONAL_CALL)
// 00520583: ADD ESP,0xc
// 00520586: PUSH 0x1
// 00520588: PUSH 0x1
// 0052058a: PUSH ESI
// 0052058b: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00520590: ADD ESP,0xc
// 00520593: PUSH EBX
// 00520594: PUSH 0x6387b3
//   XREF to: 006387b3 (DATA)
// 00520599: MOV EBX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 0052059f: PUSH EBX
//   XREF to: 0083b1a4 (DATA)
// 005205a0: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005205a5: ADD ESP,0xc
// 005205a8: POP ESI
// 005205a9: POP EBX
// 005205aa: RET
// 005205ab: PUSH EDI
//   Label: LAB_005205ab
// 005205ac: MOV ECX,dword ptr [ESI + 0x104]
// 005205b2: LEA EAX,[ECX*0x8 + 0x0]
// 005205b9: ADD EAX,ECX
// 005205bb: SHL EAX,0x3
// 005205be: LEA EDI,[EBX + 0x1165c]
// 005205c4: SUB EAX,ECX
// 005205c6: LEA ESI,[EDX + 0x252ec]
// 005205cc: LEA ECX,[EAX*0x4 + 0x0]
// 005205d3: PUSH EDI
// 005205d4: MOV EAX,ECX
// 005205d6: SHR ECX,0x2
// 005205d9: MOVSD.REP ES:EDI,ESI
// 005205db: MOV CL,AL
// 005205dd: AND CL,0x3
// 005205e0: MOVSB.REP ES:EDI,ESI
// 005205e2: POP EDI
// 005205e3: POP EDI
// 005205e4: JMP 0x00520550
//   XREF to: 00520550 (UNCONDITIONAL_JUMP)
