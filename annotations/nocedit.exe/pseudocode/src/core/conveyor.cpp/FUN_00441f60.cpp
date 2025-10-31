// Name: core_conveyor.cpp_FUN_00441f60
// Address: 00441f60
// Address Range: [[00441f60, 00442018]]
// Convention: unknown
// Signature: undefined core_conveyor.cpp_FUN_00441f60()
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02d01f4e
//   undefined4 DAT_02d01f4f
//   undefined4 DAT_02d01f50
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f33744
//   undefined4 DAT_02f33768
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_actor.cpp_FUN_0040dec0
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0

#include "nocturne.h"

/* Signature: undefined1 actors_other_conveyor.cpp_FUN_00441f60(undefined4 param_1) */

undefined4 core_conveyor_cpp_FUN_00441f60(void)

{
  int iVar1;
  CBoundingBox3D *this_ptr;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float fStack_18;
  
  if ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     iVar1 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
    this_ptr = (*((in_stack_00000004->metadata).vtable)->getBoundingBox)
                         (in_stack_00000004,(CBoundingBox3D *)&fStack_18);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
    if (iVar1 != 0) {
      fStack_18 = 6.256297e-39;
      core_actor_cpp_FUN_0040dec0(in_stack_00000004);
      return 1;
    }
  }
  return 0;
}


// Assembly code:
// 00441f60: PUSH EBX
//   Label: core_conveyor.cpp_FUN_00441f60
// 00441f61: PUSH ESI
// 00441f62: SUB ESP,0x18
// 00441f65: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00441f69: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 00441f6e: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 00441f72: JNZ 0x00441f7c
//   XREF to: 00441f7c (CONDITIONAL_JUMP)
// 00441f74: XOR EAX,EAX
//   Label: LAB_00441f74
// 00441f76: ADD ESP,0x18
// 00441f79: POP ESI
// 00441f7a: POP EBX
// 00441f7b: RET
// 00441f7c: MOV ECX,dword ptr [0x006703ec]
//   Label: LAB_00441f7c
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00441f82: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00441f83: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 00441f88: ADD ESP,0x4
// 00441f8b: TEST EAX,EAX
// 00441f8d: JNZ 0x00441f74
//   XREF to: 00441f74 (CONDITIONAL_JUMP)
// 00441f8f: PUSH EBX
// 00441f90: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 00441f95: ADD ESP,0x4
// 00441f98: MOV EAX,ESP
// 00441f9a: PUSH EAX
// 00441f9b: MOV ESI,dword ptr [EBX + 0x154]
// 00441fa1: PUSH EBX
// 00441fa2: CALL dword ptr [ESI + 0x14]
// 00441fa5: ADD ESP,0x8
// 00441fa8: PUSH EAX
// 00441fa9: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 00441fae: ADD ESP,0x4
// 00441fb1: PUSH EBX
// 00441fb2: MOV ESI,EAX
// 00441fb4: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 00441fb9: ADD ESP,0x4
// 00441fbc: TEST ESI,ESI
// 00441fbe: JZ 0x00441f74
//   XREF to: 00441f74 (CONDITIONAL_JUMP)
// 00441fc0: PUSH EDI
// 00441fc1: MOV EAX,[0x0067d550]
//   XREF to: 0067d550 (READ)
// 00441fc6: MOV EDI,dword ptr [EAX + 0x28]
//   XREF to: 02f33768 (READ)
// 00441fc9: MOV ESI,0x2
// 00441fce: CMP EBX,EDI
// 00441fd0: JNZ 0x00442012
//   XREF to: 00442012 (CONDITIONAL_JUMP)
// 00441fd2: MOV EAX,0x80
// 00441fd7: PUSH EAX
//   Label: LAB_00441fd7
// 00441fd8: LEA EAX,[ESI*0x4 + 0x0]
// 00441fdf: SUB EAX,ESI
// 00441fe1: MOVZX ESI,byte ptr [EAX + 0x2d01f4a]
//   XREF to: 02d01f50 (READ)
// 00441fe8: PUSH ESI
// 00441fe9: MOVZX ESI,byte ptr [EAX + 0x2d01f49]
//   XREF to: 02d01f4f (READ)
// 00441ff0: PUSH ESI
// 00441ff1: MOV AL,byte ptr [EAX + 0x2d01f48]
//   XREF to: 02d01f4e (READ)
// 00441ff7: AND EAX,0xff
// 00441ffc: PUSH EAX
// 00441ffd: PUSH EBX
// 00441ffe: CALL core_actor.cpp_FUN_0040dec0
//   XREF to: 0040dec0 (UNCONDITIONAL_CALL)
// 00442003: MOV EAX,0x1
// 00442008: ADD ESP,0x14
// 0044200b: POP EDI
// 0044200c: ADD ESP,0x18
// 0044200f: POP ESI
// 00442010: POP EBX
// 00442011: RET
// 00442012: MOV EAX,0x40
//   Label: LAB_00442012
// 00442017: JMP 0x00441fd7
//   XREF to: 00441fd7 (UNCONDITIONAL_JUMP)
