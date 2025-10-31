// Name: core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510
// Address: 005e7510
// Address Range: [[005e7510, 005e75ec]]
// Convention: unknown
// Signature: undefined core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510()
// Cross-references:
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e5a26 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_vampboss_cpp_00656d01
//   TerminatedCString s_CVampireBoss_chooseDestW_00656d16
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* Signature: undefined1 actors_enemy_vampboss.cpp_CVampireBoss_chooseDestWayPoint(CVampireBoss*
   param_1) */

void core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510(void)

{
  CHero *pCVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int in_stack_00000004;
  float local_20;
  
  *(undefined4 *)(in_stack_00000004 + 0xce908) = 0;
  iVar9 = 0;
  local_20 = -8675309.0;
  iVar10 = in_stack_00000004;
  do {
    if (*(int *)(iVar10 + 0xce90c) == 0) {
      g_CurrentFilename = "..\\core\\vampboss.cpp";
      g_CurrentLineNumber = 0x423;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CVampireBoss::chooseDestWayPoint - wayPoint[%d] == NULL",iVar9);
    }
    pCVar1 = g_HeroActors[g_LocalHeroIndex];
    iVar2 = *(int *)(iVar10 + 0xce90c);
    fVar3 = *(float *)(iVar2 + 0x20) - (pCVar1->base_character).base_actor.location.position.x;
    fVar4 = *(float *)(iVar2 + 0x20) - *(float *)(in_stack_00000004 + 0x20);
    fVar8 = *(float *)(iVar2 + 0x24) - (pCVar1->base_character).base_actor.location.position.y;
    fVar5 = *(float *)(iVar2 + 0x24) - *(float *)(in_stack_00000004 + 0x24);
    fVar6 = *(float *)(iVar2 + 0x28) - *(float *)(in_stack_00000004 + 0x28);
    fVar7 = *(float *)(iVar2 + 0x28) - (pCVar1->base_character).base_actor.location.position.z;
    fVar3 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4 +
            fVar7 * fVar7 + fVar8 * fVar8 + fVar3 * fVar3;
    if (local_20 < fVar3) {
      *(int *)(in_stack_00000004 + 0xce908) = iVar9;
      local_20 = fVar3;
    }
    iVar9 = iVar9 + 1;
    iVar10 = iVar10 + 4;
  } while (iVar9 < 4);
  return;
}


// Assembly code:
// 005e7510: PUSH EBX
//   Label: core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510
// 005e7511: PUSH ESI
// 005e7512: PUSH EDI
// 005e7513: PUSH EBP
// 005e7514: SUB ESP,0x24
// 005e7517: MOV EBP,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 005e751b: MOV EDX,0xcb045fed
// 005e7520: LEA EDI,[EBP + 0x20]
// 005e7523: MOV dword ptr [EBP + 0xce908],0x0
// 005e752d: XOR EBX,EBX
// 005e752f: MOV ESI,EBP
// 005e7531: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005e7535: CMP dword ptr [ESI + 0xce90c],0x0
//   Label: LAB_005e7535
// 005e753c: JZ 0x005e75c5
//   XREF to: 005e75c5 (CONDITIONAL_JUMP)
// 005e7542: MOV EAX,[0x02db87d0]
//   Label: LAB_005e7542
//   XREF to: 02db87d0 (READ)
// 005e7547: MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005e754e: MOV EAX,dword ptr [ESI + 0xce90c]
// 005e7554: FLD float ptr [EAX + 0x20]
// 005e7557: FSUB float ptr [EDX + 0x20]
// 005e755a: FMUL ST0
// 005e755c: FLD float ptr [EAX + 0x20]
// 005e755f: FSUB float ptr [EDI]
// 005e7561: FMUL ST0
// 005e7563: FLD float ptr [EAX + 0x24]
// 005e7566: FSUB float ptr [EDX + 0x24]
// 005e7569: FMUL ST0
// 005e756b: FLD float ptr [EAX + 0x24]
// 005e756e: FSUB float ptr [EDI + 0x4]
// 005e7571: FMUL ST0
// 005e7573: FLD float ptr [EAX + 0x28]
// 005e7576: FXCH
// 005e7578: FADDP ST3,ST0
// 005e757a: FSUB float ptr [EDI + 0x8]
// 005e757d: FMUL ST0
// 005e757f: FLD float ptr [EAX + 0x28]
// 005e7582: FXCH ST2
// 005e7584: FADDP ST4,ST0
// 005e7586: FXCH
// 005e7588: FSUB float ptr [EDX + 0x28]
// 005e758b: FMUL ST0
// 005e758d: FXCH
// 005e758f: FADDP ST2,ST0
// 005e7591: FADDP ST2,ST0
// 005e7593: FADDP
// 005e7595: FST float ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (WRITE)
// 005e7599: FCOMP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 005e759d: FNSTSW AX
// 005e759f: SAHF
// 005e75a0: JBE 0x005e75b0
//   XREF to: 005e75b0 (CONDITIONAL_JUMP)
// 005e75a2: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (READ)
// 005e75a6: MOV dword ptr [EBP + 0xce908],EBX
// 005e75ac: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005e75b0: INC EBX
//   Label: LAB_005e75b0
// 005e75b1: ADD ESI,0x4
// 005e75b4: CMP EBX,0x4
// 005e75b7: JL 0x005e7535
//   XREF to: 005e7535 (CONDITIONAL_JUMP)
// 005e75bd: ADD ESP,0x24
// 005e75c0: POP EBP
// 005e75c1: POP EDI
// 005e75c2: POP ESI
// 005e75c3: POP EBX
// 005e75c4: RET
// 005e75c5: PUSH EBX
//   Label: LAB_005e75c5
// 005e75c6: MOV EAX,0x656d01
//   XREF to: 00656d01 (PARAM)
// 005e75cb: MOV EDX,0x423
// 005e75d0: PUSH 0x656d16
//   XREF to: 00656d16 (DATA)
// 005e75d5: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005e75da: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005e75e0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005e75e5: ADD ESP,0x8
// 005e75e8: JMP 0x005e7542
//   XREF to: 005e7542 (UNCONDITIONAL_JUMP)
