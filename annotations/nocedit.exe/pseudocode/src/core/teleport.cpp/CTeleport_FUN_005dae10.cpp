// Name: core_teleport.cpp_CTeleport_FUN_005dae10
// Address: 005dae10
// Address Range: [[005dae10, 005dae47]]
// Convention: __cdecl
// Signature: int core_teleport.cpp_CTeleport_FUN_005dae10(CTeleport * this_ptr)
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f33744
// Function calls:
//   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0

#include "nocturne.h"

int __cdecl core_teleport_cpp_CTeleport_FUN_005dae10(CTeleport *this_ptr)

{
  int iVar1;
  CDemonActor *in_stack_00000008;
  
  if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(in_stack_00000008,0xfb);
      return 0;
    }
  }
  return 0;
}


// Assembly code:
// 005dae10: MOV EAX,[0x0067d550]
//   Label: core_teleport.cpp_CTeleport_FUN_005dae10
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 005dae15: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 005dae19: JNZ 0x005dae1e
//   XREF to: 005dae1e (CONDITIONAL_JUMP)
// 005dae1b: XOR EAX,EAX
//   Label: LAB_005dae1b
// 005dae1d: RET
// 005dae1e: MOV ECX,dword ptr [0x006703ec]
//   Label: LAB_005dae1e
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005dae24: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005dae25: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 005dae2a: ADD ESP,0x4
// 005dae2d: TEST EAX,EAX
// 005dae2f: JNZ 0x005dae1b
//   XREF to: 005dae1b (CONDITIONAL_JUMP)
// 005dae31: PUSH EBX
// 005dae32: PUSH 0xfb
// 005dae37: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005dae3b: PUSH EBX
// 005dae3c: CALL core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
//   XREF to: 0040d940 (UNCONDITIONAL_CALL)
// 005dae41: ADD ESP,0x8
// 005dae44: XOR EAX,EAX
// 005dae46: POP EBX
// 005dae47: RET
