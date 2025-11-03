// Name: core_stranger.cpp_CStranger_FUN_005c6590
// Address: 005c6590
// Address Range: [[005c6590, 005c664d]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c6590()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bc51a [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00663744
//   undefined4 g_CDynamiteClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_dynamite.cpp_FUN_0049cf90

#include "nocturne.h"

/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_FUN_005c6590(undefined4 param_1,
   undefined4 param_2) */

void core_stranger_cpp_CStranger_FUN_005c6590(void)

{
  undefined4 uVar1;
  CDemonActor *this_ptr;
  int iVar2;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x1fc2c) != 0) {
    (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x1fc2c) + 0x154) + 4))();
    this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(in_stack_00000004 + 0x1fc2c),
                          g_CDynamiteClassInfo.name_hash);
    if (this_ptr != (CDemonActor *)0x0) {
      iVar2 = core_dynamite_cpp_FUN_0049cf90();
      if (iVar2 != 0) {
        this_ptr[4].location.position.y = 0.0;
        this_ptr[4].location.position.x = this_ptr[4].location.position.y;
        *(float *)(this_ptr[4].actor_name + 0x1c) = this_ptr[4].location.position.x;
        (*this_ptr->vtable[1].renderTransparent)(this_ptr);
        *(undefined4 *)(in_stack_00000004 + 0x1fc2c) = 0;
        *(undefined4 *)(in_stack_00000004 + 0x2a8c) = 0;
        uVar1 = DAT_00663744;
        *(undefined4 *)(in_stack_00000004 + 0x2a90) = 0;
        *(undefined4 *)(in_stack_00000004 + 0x1fbe4) = uVar1;
        if (*(int *)(in_stack_00000004 + 0x1fc38) == 3) {
          *(undefined4 *)(in_stack_00000004 + 0x1fc38) = 0;
          return;
        }
      }
    }
  }
  return;
}


// Assembly code:
// 005c6590: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c6590
// 005c6591: PUSH ESI
// 005c6592: PUSH EDI
// 005c6593: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005c6597: MOV EDX,dword ptr [EBX + 0x1fc2c]
// 005c659d: TEST EDX,EDX
// 005c659f: JNZ 0x005c65a5
//   XREF to: 005c65a5 (CONDITIONAL_JUMP)
// 005c65a1: POP EDI
//   Label: LAB_005c65a1
// 005c65a2: POP ESI
// 005c65a3: POP EBX
// 005c65a4: RET
// 005c65a5: PUSH dword ptr [ESP + 0x14]
//   Label: LAB_005c65a5
//   XREF to: Stack[0x8] (READ)
// 005c65a9: MOV ESI,dword ptr [EDX + 0x154]
// 005c65af: PUSH EDX
// 005c65b0: CALL dword ptr [ESI + 0x4]
// 005c65b3: ADD ESP,0x8
// 005c65b6: MOV ECX,dword ptr [0x02ceed20]
//   XREF to: 02ceed20 (READ)
// 005c65bc: PUSH ECX
// 005c65bd: MOV ESI,dword ptr [EBX + 0x1fc2c]
// 005c65c3: PUSH ESI
// 005c65c4: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005c65c9: MOV ESI,EAX
// 005c65cb: ADD ESP,0x8
// 005c65ce: TEST EAX,EAX
// 005c65d0: JZ 0x005c65a1
//   XREF to: 005c65a1 (CONDITIONAL_JUMP)
// 005c65d2: PUSH EAX
// 005c65d3: CALL core_dynamite.cpp_FUN_0049cf90
//   XREF to: 0049cf90 (UNCONDITIONAL_CALL)
// 005c65d8: ADD ESP,0x4
// 005c65db: TEST EAX,EAX
// 005c65dd: JZ 0x005c65a1
//   XREF to: 005c65a1 (CONDITIONAL_JUMP)
// 005c65df: LEA EAX,[ESI + 0x57c]
// 005c65e5: MOV dword ptr [EAX + 0x8],0x0
// 005c65ec: PUSH ESI
// 005c65ed: MOV EDX,dword ptr [EAX + 0x8]
// 005c65f0: MOV dword ptr [EAX + 0x4],EDX
// 005c65f3: MOV EDX,dword ptr [EAX + 0x4]
// 005c65f6: MOV dword ptr [EAX],EDX
// 005c65f8: MOV EAX,dword ptr [ESI + 0x154]
// 005c65fe: CALL dword ptr [EAX + 0xf8]
// 005c6604: MOV dword ptr [EBX + 0x1fc2c],0x0
// 005c660e: MOV dword ptr [EBX + 0x2a8c],0x0
// 005c6618: FLD float ptr [0x00663744]
//   XREF to: 00663744 (READ)
// 005c661e: MOV dword ptr [EBX + 0x2a90],0x0
// 005c6628: ADD ESP,0x4
// 005c662b: MOV EDI,dword ptr [EBX + 0x1fc38]
// 005c6631: FSTP float ptr [EBX + 0x1fbe4]
// 005c6637: CMP EDI,0x3
// 005c663a: JNZ 0x005c65a1
//   XREF to: 005c65a1 (CONDITIONAL_JUMP)
// 005c6640: MOV dword ptr [EBX + 0x1fc38],0x0
// 005c664a: POP EDI
// 005c664b: POP ESI
// 005c664c: POP EBX
// 005c664d: RET
