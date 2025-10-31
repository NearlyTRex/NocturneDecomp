// Name: core_platfrm.cpp_FUN_0054e760
// Address: 0054e760
// Address Range: [[0054e760, 0054e7c8]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054e760()
// Cross-references:
//   core_platfrm.cpp_FUN_0054e7d0 (0054e7d0) at 0054e8fd [DATA]
// Globals:
//   undefined4 g_CPlatformClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_platfrm.cpp_FUN_0054cab0

#include "nocturne.h"

/* Signature: undefined1 actors_other_platform.cpp_FUN_0054e760(undefined4 param_1) */

undefined4 core_platfrm_cpp_FUN_0054e760(void)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000004;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CPlatformClassInfo.name_hash);
  if (pCVar1[2].location.position.y == 0.0) {
    pCVar1[2].location.area_id = 0x3f800000;
    pCVar1[2].location.position.y = 1.4013e-45;
    core_platfrm_cpp_FUN_0054cab0();
    return 1;
  }
  pCVar1[2].location.area_id = 0;
  pCVar1[2].location.position.y = 0.0;
  core_platfrm_cpp_FUN_0054cab0();
  return 1;
}


// Assembly code:
// 0054e760: PUSH EBX
//   Label: core_platfrm.cpp_FUN_0054e760
// 0054e761: MOV EDX,dword ptr [0x030d508c]
//   XREF to: 030d508c (READ)
// 0054e767: PUSH EDX
// 0054e768: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0054e76c: PUSH ECX
// 0054e76d: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0054e772: ADD ESP,0x8
// 0054e775: MOV EBX,dword ptr [EAX + 0x2d4]
// 0054e77b: MOV EDX,EAX
// 0054e77d: TEST EBX,EBX
// 0054e77f: JNZ 0x0054e7a5
//   XREF to: 0054e7a5 (CONDITIONAL_JUMP)
// 0054e781: MOV dword ptr [EAX + 0x2dc],0x3f800000
// 0054e78b: MOV dword ptr [EAX + 0x2d4],0x1
// 0054e795: PUSH EDX
// 0054e796: CALL core_platfrm.cpp_FUN_0054cab0
//   XREF to: 0054cab0 (UNCONDITIONAL_CALL)
// 0054e79b: MOV EAX,0x1
// 0054e7a0: ADD ESP,0x4
// 0054e7a3: POP EBX
// 0054e7a4: RET
// 0054e7a5: MOV dword ptr [EAX + 0x2dc],0x0
//   Label: LAB_0054e7a5
// 0054e7af: MOV dword ptr [EAX + 0x2d4],0x0
// 0054e7b9: PUSH EDX
// 0054e7ba: CALL core_platfrm.cpp_FUN_0054cab0
//   XREF to: 0054cab0 (UNCONDITIONAL_CALL)
// 0054e7bf: MOV EAX,0x1
// 0054e7c4: ADD ESP,0x4
// 0054e7c7: POP EBX
// 0054e7c8: RET
