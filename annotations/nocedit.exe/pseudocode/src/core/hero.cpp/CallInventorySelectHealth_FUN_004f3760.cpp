// Name: core_hero.cpp_CallInventorySelectHealth_FUN_004f3760
// Address: 004f3760
// Address Range: [[004f3760, 004f37ce]]
// Convention: unknown
// Signature: undefined core_hero.cpp_CallInventorySelectHealth_FUN_004f3760()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bd421 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CHealthItem_0062ecb6
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_hero.cpp_FUN_004f35b0
//   core_inv.cpp_CInventory_select_FUN_004ff800

#include "nocturne.h"

CDemonActor * core_hero_cpp_CallInventorySelectHealth_FUN_004f3760(void)

{
  int iVar1;
  CDemonActor *pCVar2;
  int in_stack_00000004;
  
  pCVar2 = *(CDemonActor **)(in_stack_00000004 + 0x1fa6c);
  if (pCVar2 == (CDemonActor *)0x0) {
    return pCVar2;
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CHealthItem");
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x15c))();
    if (iVar1 != 0) {
      return (CDemonActor *)0x0;
    }
    iVar1 = core_hero_cpp_FUN_004f35b0();
    if (iVar1 != 0) {
      return (CDemonActor *)0x0;
    }
  }
  pCVar2 = (CDemonActor *)
           core_inv_cpp_CInventory_select_FUN_004ff800
                     ((CInventory *)(in_stack_00000004 + 0x1f738),
                      *(CDemonActor **)(in_stack_00000004 + 0x1fa6c));
  return pCVar2;
}


// Assembly code:
// 004f3760: PUSH EBX
//   Label: core_hero.cpp_CallInventorySelectHealth_FUN_004f3760
// 004f3761: PUSH ESI
// 004f3762: PUSH EBP
// 004f3763: MOV EBP,ESP
// 004f3765: MOV ESI,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004f3768: LEA EBX,[ESI + 0x1f738]
// 004f376e: MOV EAX,dword ptr [EBX + 0x334]
// 004f3774: TEST EAX,EAX
// 004f3776: JNZ 0x004f377c
//   XREF to: 004f377c (CONDITIONAL_JUMP)
// 004f3778: POP EBP
// 004f3779: POP ESI
// 004f377a: POP EBX
// 004f377b: RET
// 004f377c: PUSH 0x62ecb6
//   Label: LAB_004f377c
//   XREF to: 0062ecb6 (DATA)
// 004f3781: PUSH EAX
// 004f3782: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004f3787: ADD ESP,0x8
// 004f378a: TEST EAX,EAX
// 004f378c: JNZ 0x004f37a8
//   XREF to: 004f37a8 (CONDITIONAL_JUMP)
// 004f378e: PUSH ESI
// 004f378f: MOV EAX,dword ptr [ESI + 0x154]
// 004f3795: CALL dword ptr [EAX + 0x15c]
// 004f379b: ADD ESP,0x4
// 004f379e: TEST EAX,EAX
// 004f37a0: JZ 0x004f37bc
//   XREF to: 004f37bc (CONDITIONAL_JUMP)
// 004f37a2: XOR EAX,EAX
// 004f37a4: POP EBP
// 004f37a5: POP ESI
// 004f37a6: POP EBX
// 004f37a7: RET
// 004f37a8: MOV EAX,dword ptr [EBX + 0x334]
//   Label: LAB_004f37a8
// 004f37ae: PUSH EAX
// 004f37af: PUSH EBX
// 004f37b0: CALL core_inv.cpp_CInventory_select_FUN_004ff800
//   XREF to: 004ff800 (UNCONDITIONAL_CALL)
// 004f37b5: ADD ESP,0x8
// 004f37b8: POP EBP
// 004f37b9: POP ESI
// 004f37ba: POP EBX
// 004f37bb: RET
// 004f37bc: PUSH ESI
//   Label: LAB_004f37bc
// 004f37bd: CALL core_hero.cpp_FUN_004f35b0
//   XREF to: 004f35b0 (UNCONDITIONAL_CALL)
// 004f37c2: ADD ESP,0x4
// 004f37c5: TEST EAX,EAX
// 004f37c7: JZ 0x004f37a8
//   XREF to: 004f37a8 (CONDITIONAL_JUMP)
// 004f37c9: XOR EAX,EAX
// 004f37cb: POP EBP
// 004f37cc: POP ESI
// 004f37cd: POP EBX
// 004f37ce: RET
