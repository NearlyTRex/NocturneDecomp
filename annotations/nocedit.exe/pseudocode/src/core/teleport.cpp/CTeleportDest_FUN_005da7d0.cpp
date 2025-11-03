// Name: core_teleport.cpp_CTeleportDest_FUN_005da7d0
// Address: 005da7d0
// Address Range: [[005da7d0, 005da844]]
// Convention: __cdecl
// Signature: int core_teleport.cpp_CTeleportDest_FUN_005da7d0(CTeleportDest * this_ptr)
// Globals:
//   TerminatedCString s_CTeleport_00654c40
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f33744
//   undefined4 DAT_02f33768
// Function calls:
//   core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0

#include "nocturne.h"

int __cdecl core_teleport_cpp_CTeleportDest_FUN_005da7d0(CTeleportDest *this_ptr)

{
  int iVar1;
  uint32_t color;
  CDemonActor *in_stack_00000008;
  
  if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
    if (iVar1 == 0) {
      color = 1;
      if (*(CDemonActor **)(g_CDemonMissionPtr->field2_0xc + 0x1c) != (CDemonActor *)0x0) {
        iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0
                          (*(CDemonActor **)(g_CDemonMissionPtr->field2_0xc + 0x1c),
                           "CTeleport");
        if ((iVar1 != 0) &&
           (in_stack_00000008 ==
            *(CDemonActor **)(*(int *)(g_CDemonMissionPtr->field2_0xc + 0x1c) + 0x164))) {
          color = 0xf9;
        }
      }
      core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(in_stack_00000008,color);
      return 0;
    }
  }
  return 0;
}


// Assembly code:
// 005da7d0: PUSH EBP
//   Label: core_teleport.cpp_CTeleportDest_FUN_005da7d0
// 005da7d1: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 005da7d6: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 005da7da: JNZ 0x005da7e0
//   XREF to: 005da7e0 (CONDITIONAL_JUMP)
// 005da7dc: XOR EAX,EAX
//   Label: LAB_005da7dc
// 005da7de: POP EBP
// 005da7df: RET
// 005da7e0: MOV ECX,dword ptr [0x006703ec]
//   Label: LAB_005da7e0
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005da7e6: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005da7e7: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 005da7ec: ADD ESP,0x4
// 005da7ef: TEST EAX,EAX
// 005da7f1: JNZ 0x005da7dc
//   XREF to: 005da7dc (CONDITIONAL_JUMP)
// 005da7f3: PUSH ESI
// 005da7f4: PUSH EBX
// 005da7f5: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 005da7fa: MOV ESI,dword ptr [EAX + 0x28]
//   XREF to: 02f33768 (READ)
// 005da7fd: MOV EBX,0x1
// 005da802: TEST ESI,ESI
// 005da804: JZ 0x005da831
//   XREF to: 005da831 (CONDITIONAL_JUMP)
// 005da806: PUSH 0x654c40
//   XREF to: 00654c40 (DATA)
// 005da80b: PUSH ESI
// 005da80c: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 005da811: ADD ESP,0x8
// 005da814: TEST EAX,EAX
// 005da816: JZ 0x005da831
//   XREF to: 005da831 (CONDITIONAL_JUMP)
// 005da818: MOV EAX,[0x0067d550]
//   XREF to: 0067d550 (READ)
// 005da81d: MOV EAX,dword ptr [EAX + 0x28]
//   XREF to: 02f33768 (READ)
// 005da820: MOV EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005da824: CMP EBP,dword ptr [EAX + 0x164]
// 005da82a: JNZ 0x005da831
//   XREF to: 005da831 (CONDITIONAL_JUMP)
// 005da82c: MOV EBX,0xf9
// 005da831: PUSH EBX
//   Label: LAB_005da831
// 005da832: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005da836: PUSH EAX
// 005da837: CALL core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
//   XREF to: 0040d940 (UNCONDITIONAL_CALL)
// 005da83c: ADD ESP,0x8
// 005da83f: XOR EAX,EAX
// 005da841: POP EBX
// 005da842: POP ESI
// 005da843: POP EBP
// 005da844: RET
