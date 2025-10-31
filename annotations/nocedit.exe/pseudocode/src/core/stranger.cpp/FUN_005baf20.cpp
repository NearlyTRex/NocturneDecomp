// Name: core_stranger.cpp_FUN_005baf20
// Address: 005baf20
// Address Range: [[005baf20, 005baf3c] [005baf40, 005baf6f]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_FUN_005baf20()
// Globals:
//   undefined4 g_CMeleeClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790

#include "nocturne.h"

undefined4 core_stranger_cpp_FUN_005baf20(void)

{
  float fVar1;
  CDemonActor *pCVar2;
  CDemonActor *in_stack_00000004;
  
  if (in_stack_00000004 == (CDemonActor *)0x0) {
    return 0;
  }
  fVar1 = in_stack_00000004[2].orient.pitch;
  if ((uint)fVar1 < 7) {
    if (fVar1 == 0.0) {
      return 1;
    }
  }
  else if (((uint)fVar1 < 8) || (fVar1 == 1.12104e-44)) {
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (in_stack_00000004,g_CMeleeClassInfo.name_hash);
    if (pCVar2 == (CDemonActor *)0x0) {
      return 0;
    }
    if (pCVar2[4].location.position.z == 0.0) {
      return 0;
    }
    return 3;
  }
  return 3;
}


// Assembly code:
// 005baf20: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_stranger.cpp_FUN_005baf20
//   XREF to: Stack[0x4] (READ)
// 005baf24: TEST EDX,EDX
// 005baf26: JZ 0x005baf3d
//   XREF to: 005baf3d (CONDITIONAL_JUMP)
// 005baf28: MOV EAX,dword ptr [EDX + 0x2e0]
// 005baf2e: CMP EAX,0x7
// 005baf31: JNC 0x005baf63
//   XREF to: 005baf63 (CONDITIONAL_JUMP)
// 005baf33: TEST EAX,EAX
// 005baf35: JNZ 0x005baf6a
//   XREF to: 005baf6a (CONDITIONAL_JUMP)
// 005baf37: MOV EAX,0x1
// 005baf3c: RET
// 005baf40: MOV ECX,dword ptr [0x02f0d928]
//   Label: LAB_005baf40
//   XREF to: 02f0d928 (READ)
// 005baf46: PUSH ECX
// 005baf47: PUSH EDX
// 005baf48: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005baf4d: ADD ESP,0x8
// 005baf50: TEST EAX,EAX
// 005baf52: JZ 0x005baf3d
//   XREF to: 005baf3d (CONDITIONAL_JUMP)
// 005baf54: CMP dword ptr [EAX + 0x588],0x0
// 005baf5b: JZ 0x005baf3d
//   XREF to: 005baf3d (CONDITIONAL_JUMP)
// 005baf5d: MOV EAX,0x3
// 005baf62: RET
// 005baf63: JBE 0x005baf40
//   Label: LAB_005baf63
//   XREF to: 005baf40 (CONDITIONAL_JUMP)
// 005baf65: CMP EAX,0x8
// 005baf68: JZ 0x005baf40
//   XREF to: 005baf40 (CONDITIONAL_JUMP)
// 005baf6a: MOV EAX,0x3
//   Label: LAB_005baf6a
// 005baf6f: RET
