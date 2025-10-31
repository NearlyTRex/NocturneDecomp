// Name: core_bodypart.cpp_FUN_00419740
// Address: 00419740
// Address Range: [[00419740, 00419804]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_00419740()
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_0326ef00
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_bodypart.cpp_FUN_00419340
//   core_flame.cpp_FUN_004ca110
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60

#include "nocturne.h"

/* Signature: undefined1 actors_other_bodypart.cpp_FUN_00419740(undefined4 param_1) */

undefined4 core_bodypart_cpp_FUN_00419740(void)

{
  CDemonSet *pCVar1;
  int iVar2;
  CDemonActor *in_stack_00000004;
  
  if ((in_stack_00000004[0xb].health != 0) &&
     ((*(int *)in_stack_00000004[1].actor_name < 2 ||
      (*(int *)(in_stack_00000004[5].create_event + 0x1c) != 0)))) {
    if (*(int *)(in_stack_00000004[9].create_event + 0x24) != 0) {
      *(undefined4 *)(g_CDemonSetPtr->field22_0x15ac80 + 8) =
           *(undefined4 *)(in_stack_00000004[9].create_event + 0x20);
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
                (g_CDemonRendererPtr,*(int *)(in_stack_00000004[9].create_event + 0x30));
      core_bodypart_cpp_FUN_00419340();
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
      pCVar1 = g_CDemonSetPtr;
      pCVar1->field22_0x15ac80[8] = '\0';
      pCVar1->field22_0x15ac80[9] = '\0';
      pCVar1->field22_0x15ac80[10] = '\0';
      pCVar1->field22_0x15ac80[0xb] = '\0';
    }
    iVar2 = 0;
    if (0 < *(int *)(in_stack_00000004[5].create_event + 0x1c)) {
      do {
        core_flame_cpp_FUN_004ca110();
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(in_stack_00000004[5].create_event + 0x1c));
    }
    return 1;
  }
  return 0;
}


// Assembly code:
// 00419740: PUSH EDI
//   Label: core_bodypart.cpp_FUN_00419740
// 00419741: PUSH EBP
// 00419742: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00419746: CMP dword ptr [EDI + 0xf2c],0x0
// 0041974d: JZ 0x00419800
//   XREF to: 00419800 (CONDITIONAL_JUMP)
// 00419753: CMP dword ptr [EDI + 0x158],0x1
// 0041975a: JLE 0x00419769
//   XREF to: 00419769 (CONDITIONAL_JUMP)
// 0041975c: CMP dword ptr [EDI + 0x74c],0x0
// 00419763: JZ 0x00419800
//   XREF to: 00419800 (CONDITIONAL_JUMP)
// 00419769: PUSH EBX
//   Label: LAB_00419769
// 0041976a: CMP dword ptr [EDI + 0xcb4],0x0
// 00419771: JZ 0x004197c9
//   XREF to: 004197c9 (CONDITIONAL_JUMP)
// 00419773: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00419779: MOV EAX,dword ptr [EDI + 0xcb0]
// 0041977f: PUSH EDI
// 00419780: MOV dword ptr [EBX + 0x15ac88],EAX
//   XREF to: 0326ef00 (WRITE)
// 00419786: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 0041978b: ADD ESP,0x4
// 0041978e: MOV EBP,dword ptr [EDI + 0xcc0]
// 00419794: PUSH EBP
// 00419795: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0041979a: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0041979b: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 004197a0: ADD ESP,0x8
// 004197a3: PUSH 0x2e7
// 004197a8: PUSH EDI
// 004197a9: CALL core_bodypart.cpp_FUN_00419340
//   XREF to: 00419340 (UNCONDITIONAL_CALL)
// 004197ae: ADD ESP,0x8
// 004197b1: PUSH EDI
// 004197b2: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 004197b7: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004197bc: ADD ESP,0x4
// 004197bf: MOV dword ptr [EAX + 0x15ac88],0x0
//   XREF to: 0326ef00 (WRITE)
// 004197c9: MOV EDX,dword ptr [EDI + 0x74c]
//   Label: LAB_004197c9
// 004197cf: XOR EBX,EBX
// 004197d1: TEST EDX,EDX
// 004197d3: JLE 0x004197f7
//   XREF to: 004197f7 (CONDITIONAL_JUMP)
// 004197d5: PUSH ESI
// 004197d6: LEA ESI,[EDI + 0x75c]
// 004197dc: PUSH ESI
//   Label: LAB_004197dc
// 004197dd: CALL core_flame.cpp_FUN_004ca110
//   XREF to: 004ca110 (UNCONDITIONAL_CALL)
// 004197e2: INC EBX
// 004197e3: ADD ESP,0x4
// 004197e6: MOV ECX,dword ptr [EDI + 0x74c]
// 004197ec: ADD ESI,0x2b0
// 004197f2: CMP EBX,ECX
// 004197f4: JL 0x004197dc
//   XREF to: 004197dc (CONDITIONAL_JUMP)
// 004197f6: POP ESI
// 004197f7: MOV EAX,0x1
//   Label: LAB_004197f7
// 004197fc: POP EBX
// 004197fd: POP EBP
// 004197fe: POP EDI
// 004197ff: RET
// 00419800: XOR EAX,EAX
//   Label: LAB_00419800
// 00419802: POP EBP
// 00419803: POP EDI
// 00419804: RET
