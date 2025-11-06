// Name: core_hostage.cpp_FUN_004f4b40
// Address: 004f4b40
// Address Range: [[004f4b40, 004f4b8f]]
// Convention: unknown
// Signature: undefined core_hostage.cpp_FUN_004f4b40()
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0

#include "nocturne.h"

/* Signature: undefined1 actors_npc_hostage.cpp_FUN_004f4b40(undefined4 param_1) */

int core_hostage_cpp_FUN_004f4b40(void)

{
  int iVar1;
  SMotion *pSVar2;
  CCharacter *in_stack_00000004;
  
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x53fc) != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
    if ((iVar1 != 0) && (*(int *)(in_stack_00000004[2].cloth_data + 0x53dc) == 4)) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(in_stack_00000004->model).motion_controller);
      if (pSVar2->state_index == 10) {
        return 0;
      }
    }
  }
  iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0(in_stack_00000004);
  return iVar1;
}


// Assembly code:
// 004f4b40: PUSH EBX
//   Label: core_hostage.cpp_FUN_004f4b40
// 004f4b41: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f4b45: CMP dword ptr [EBX + 0x1fadc],0x0
// 004f4b4c: JZ 0x004f4b85
//   XREF to: 004f4b85 (CONDITIONAL_JUMP)
// 004f4b4e: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004f4b54: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004f4b55: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 004f4b5a: ADD ESP,0x4
// 004f4b5d: TEST EAX,EAX
// 004f4b5f: JZ 0x004f4b85
//   XREF to: 004f4b85 (CONDITIONAL_JUMP)
// 004f4b61: CMP dword ptr [EBX + 0x1fabc],0x4
// 004f4b68: JNZ 0x004f4b85
//   XREF to: 004f4b85 (CONDITIONAL_JUMP)
// 004f4b6a: LEA EAX,[EBX + 0x158]
// 004f4b70: PUSH EAX
// 004f4b71: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004f4b76: MOV EAX,dword ptr [EAX + 0x24]
// 004f4b79: ADD ESP,0x4
// 004f4b7c: CMP EAX,0xa
// 004f4b7f: JNZ 0x004f4b85
//   XREF to: 004f4b85 (CONDITIONAL_JUMP)
// 004f4b81: XOR EAX,EAX
// 004f4b83: POP EBX
// 004f4b84: RET
// 004f4b85: PUSH EBX
//   Label: LAB_004f4b85
// 004f4b86: CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0
//   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)
// 004f4b8b: ADD ESP,0x4
// 004f4b8e: POP EBX
// 004f4b8f: RET
