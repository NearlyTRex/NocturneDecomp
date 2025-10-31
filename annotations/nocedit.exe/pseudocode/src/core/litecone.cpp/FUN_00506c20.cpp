// Name: core_litecone.cpp_FUN_00506c20
// Address: 00506c20
// Address Range: [[00506c20, 00506ca6]]
// Convention: unknown
// Signature: undefined core_litecone.cpp_FUN_00506c20()
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dlight.cpp_renderConeLightGeometry_FUN_004760d0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0

#include "nocturne.h"

int core_litecone_cpp_FUN_00506c20(void)

{
  int iVar1;
  CBoundingBox3D *this_ptr;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float fStack_14;
  
  if (*(int *)(in_stack_00000004[1].actor_name + 8) != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
      this_ptr = (*((in_stack_00000004->metadata).vtable)->getBoundingBox)
                           (in_stack_00000004,(CBoundingBox3D *)&fStack_14);
      iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
      if (iVar1 != 0) {
        fStack_14 = 7.3858e-39;
        core_dlight_cpp_renderConeLightGeometry_FUN_004760d0
                  (&(in_stack_00000004->location).position,(CVector3i *)&in_stack_00000004->orient,
                   *(float *)in_stack_00000004[1].actor_name,
                   *(float *)(in_stack_00000004[1].actor_name + 4));
      }
      return iVar1;
    }
  }
  return 0;
}


// Assembly code:
// 00506c20: PUSH EBX
//   Label: core_litecone.cpp_FUN_00506c20
// 00506c21: SUB ESP,0x18
// 00506c24: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00506c28: CMP dword ptr [EBX + 0x160],0x0
// 00506c2f: JNZ 0x00506c38
//   XREF to: 00506c38 (CONDITIONAL_JUMP)
// 00506c31: XOR EAX,EAX
//   Label: LAB_00506c31
// 00506c33: ADD ESP,0x18
// 00506c36: POP EBX
// 00506c37: RET
// 00506c38: MOV ECX,dword ptr [0x006703ec]
//   Label: LAB_00506c38
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00506c3e: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00506c3f: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 00506c44: ADD ESP,0x4
// 00506c47: TEST EAX,EAX
// 00506c49: JNZ 0x00506c31
//   XREF to: 00506c31 (CONDITIONAL_JUMP)
// 00506c4b: PUSH EDI
// 00506c4c: PUSH ESI
// 00506c4d: PUSH EBX
// 00506c4e: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 00506c53: ADD ESP,0x4
// 00506c56: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1c] (DATA)
// 00506c5a: PUSH EAX
// 00506c5b: MOV ESI,dword ptr [EBX + 0x154]
// 00506c61: PUSH EBX
// 00506c62: CALL dword ptr [ESI + 0x14]
// 00506c65: ADD ESP,0x8
// 00506c68: PUSH EAX
// 00506c69: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 00506c6e: ADD ESP,0x4
// 00506c71: PUSH EBX
// 00506c72: MOV ESI,EAX
// 00506c74: MOV EDI,EAX
// 00506c76: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 00506c7b: ADD ESP,0x4
// 00506c7e: TEST ESI,ESI
// 00506c80: JZ 0x00506c9e
//   XREF to: 00506c9e (CONDITIONAL_JUMP)
// 00506c82: PUSH dword ptr [EBX + 0x15c]
// 00506c88: LEA EAX,[EBX + 0x30]
// 00506c8b: PUSH dword ptr [EBX + 0x158]
// 00506c91: PUSH EAX
// 00506c92: ADD EBX,0x20
// 00506c95: PUSH EBX
// 00506c96: CALL core_dlight.cpp_renderConeLightGeometry_FUN_004760d0
//   XREF to: 004760d0 (UNCONDITIONAL_CALL)
// 00506c9b: ADD ESP,0x10
// 00506c9e: MOV EAX,EDI
//   Label: LAB_00506c9e
// 00506ca0: POP ESI
// 00506ca1: POP EDI
// 00506ca2: ADD ESP,0x18
// 00506ca5: POP EBX
// 00506ca6: RET
