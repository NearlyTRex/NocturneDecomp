// Name: core_stranger.cpp_CStranger_FUN_005c66a0
// Address: 005c66a0
// Address Range: [[005c66a0, 005c6742]]
// Convention: __cdecl
// Signature: int core_stranger.cpp_CStranger_FUN_005c66a0(CStranger * this_ptr)
// Function calls:
//   core_hero.cpp_CHero_FUN_004f28d0

#include "nocturne.h"

int __cdecl core_stranger_cpp_CStranger_FUN_005c66a0(CStranger *this_ptr)

{
  int iVar1;
  
  if (((*(int *)((this_ptr->base_hero).field6_0x1fb9c + 4) == 0) &&
      (*(int *)(this_ptr->base_hero).field6_0x1fb9c == 0)) &&
     ((this_ptr->action_pending == 0 || (this_ptr->action_pending == 3)))) {
    iVar1 = core_hero_cpp_CHero_FUN_004f28d0(&this_ptr->base_hero);
    if (iVar1 != 0) {
      if (*(CDemonActor **)(this_ptr->field2_0x1fbd8 + 0x54) !=
          (this_ptr->base_hero).base_character.carry_hands[0].carry_actor) {
        (*(this_ptr->base_hero).base_character.base_actor.vtable[1].renderTargetPoints)
                  ((CDemonActor *)this_ptr);
      }
      if (*(CDemonActor **)(this_ptr->field2_0x1fbd8 + 0x54) !=
          (this_ptr->base_hero).base_character.carry_hands[1].carry_actor) {
        (*(this_ptr->base_hero).base_character.base_actor.vtable[1].renderTargetPoints)
                  ((CDemonActor *)this_ptr);
      }
      this_ptr->field4_0x1fc3c[0x98] = '\0';
      this_ptr->field4_0x1fc3c[0x99] = '\0';
      this_ptr->field4_0x1fc3c[0x9a] = '\0';
      this_ptr->field4_0x1fc3c[0x9b] = '\0';
    }
    return iVar1;
  }
  return 0;
}


// Assembly code:
// 005c66a0: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c66a0
// 005c66a1: PUSH ESI
// 005c66a2: PUSH EBP
// 005c66a3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005c66a7: CMP dword ptr [EBX + 0x1fba0],0x0
// 005c66ae: JNZ 0x005c673d
//   XREF to: 005c673d (CONDITIONAL_JUMP)
// 005c66b4: CMP dword ptr [EBX + 0x1fb9c],0x0
// 005c66bb: JNZ 0x005c673d
//   XREF to: 005c673d (CONDITIONAL_JUMP)
// 005c66c1: MOV ESI,dword ptr [EBX + 0x1fc38]
// 005c66c7: TEST ESI,ESI
// 005c66c9: JZ 0x005c66d0
//   XREF to: 005c66d0 (CONDITIONAL_JUMP)
// 005c66cb: CMP ESI,0x3
// 005c66ce: JNZ 0x005c673d
//   XREF to: 005c673d (CONDITIONAL_JUMP)
// 005c66d0: MOV EBP,dword ptr [ESP + 0x18]
//   Label: LAB_005c66d0
//   XREF to: Stack[0xc] (READ)
// 005c66d4: PUSH EBP
// 005c66d5: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005c66d9: PUSH EAX
// 005c66da: PUSH EBX
// 005c66db: CALL core_hero.cpp_CHero_FUN_004f28d0
//   XREF to: 004f28d0 (UNCONDITIONAL_CALL)
// 005c66e0: ADD ESP,0xc
// 005c66e3: MOV ESI,EAX
// 005c66e5: TEST EAX,EAX
// 005c66e7: JZ 0x005c6737
//   XREF to: 005c6737 (CONDITIONAL_JUMP)
// 005c66e9: MOV EDX,dword ptr [EBX + 0x1fc2c]
// 005c66ef: CMP EDX,dword ptr [EBX + 0x24b4]
// 005c66f5: JZ 0x005c670b
//   XREF to: 005c670b (CONDITIONAL_JUMP)
// 005c66f7: PUSH 0x0
// 005c66f9: PUSH 0x0
// 005c66fb: MOV EAX,dword ptr [EBX + 0x154]
// 005c6701: PUSH EBX
// 005c6702: CALL dword ptr [EAX + 0x13c]
// 005c6708: ADD ESP,0xc
// 005c670b: MOV ECX,dword ptr [EBX + 0x1fc2c]
//   Label: LAB_005c670b
// 005c6711: CMP ECX,dword ptr [EBX + 0x24f8]
// 005c6717: JZ 0x005c672d
//   XREF to: 005c672d (CONDITIONAL_JUMP)
// 005c6719: PUSH 0x0
// 005c671b: PUSH 0x1
// 005c671d: MOV EAX,dword ptr [EBX + 0x154]
// 005c6723: PUSH EBX
// 005c6724: CALL dword ptr [EAX + 0x13c]
// 005c672a: ADD ESP,0xc
// 005c672d: MOV dword ptr [EBX + 0x1fcd4],0x0
//   Label: LAB_005c672d
// 005c6737: MOV EAX,ESI
//   Label: LAB_005c6737
// 005c6739: POP EBP
// 005c673a: POP ESI
// 005c673b: POP EBX
// 005c673c: RET
// 005c673d: XOR EAX,EAX
//   Label: LAB_005c673d
// 005c673f: POP EBP
// 005c6740: POP ESI
// 005c6741: POP EBX
// 005c6742: RET
