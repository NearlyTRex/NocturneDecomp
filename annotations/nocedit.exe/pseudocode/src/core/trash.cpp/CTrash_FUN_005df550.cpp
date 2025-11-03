// Name: core_trash.cpp_CTrash_FUN_005df550
// Address: 005df550
// Address Range: [[005df550, 005df5f3]]
// Convention: __cdecl
// Signature: int core_trash.cpp_CTrash_FUN_005df550(CTrash * this_ptr)
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720

#include "nocturne.h"

int __cdecl core_trash_cpp_CTrash_FUN_005df550(CTrash *this_ptr)

{
  CTrash *this_ptr_00;
  CBoundingBox3D *this_ptr_01;
  int iVar1;
  BADSPACEBASE *in_ESP;
  float fStack_34;
  
  this_ptr_00 = this_ptr;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
  this_ptr_01 = (*((this_ptr_00->base_actor).vtable)->getBoundingBox)
                          (&this_ptr_00->base_actor,(CBoundingBox3D *)&stack0xffffffc8);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_01);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr_00->base_actor);
    return 0;
  }
  fStack_34 = 8.62885e-39;
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
            (&this_ptr_00->base_actor,(CVector3f *)&this_ptr,(CVector3f *)&stack0xfffffff8);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&g_ZeroVector,(CVector3i *)&stack0x00000008);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)&this_ptr_00->model_name,0.0,-1);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr_00->base_actor);
  return iVar1;
}


// Assembly code:
// 005df550: PUSH EBX
//   Label: core_trash.cpp_CTrash_FUN_005df550
// 005df551: PUSH ESI
// 005df552: PUSH EBP
// 005df553: SUB ESP,0x30
// 005df556: MOV EBX,dword ptr [ESP + 0x40]
// 005df55a: PUSH EBX
// 005df55b: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 005df560: ADD ESP,0x4
// 005df563: MOV ESI,ESP
// 005df565: PUSH ESI
// 005df566: MOV EAX,dword ptr [EBX + 0x154]
// 005df56c: PUSH EBX
// 005df56d: CALL dword ptr [EAX + 0x14]
// 005df570: ADD ESP,0x8
// 005df573: PUSH EAX
// 005df574: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 005df579: ADD ESP,0x4
// 005df57c: MOV ESI,EAX
// 005df57e: TEST EAX,EAX
// 005df580: JNZ 0x005df594
//   XREF to: 005df594 (CONDITIONAL_JUMP)
// 005df582: PUSH EBX
// 005df583: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 005df588: ADD ESP,0x4
// 005df58b: MOV EAX,ESI
// 005df58d: ADD ESP,0x30
// 005df590: POP EBP
// 005df591: POP ESI
// 005df592: POP EBX
// 005df593: RET
// 005df594: PUSH EDI
//   Label: LAB_005df594
// 005df595: MOV EAX,dword ptr [EBX + 0x310]
// 005df59b: MOV dword ptr [ESP + 0x20],EAX
// 005df59f: LEA EAX,[ESP + 0x1c]
// 005df5a3: PUSH EAX
// 005df5a4: LEA EAX,[ESP + 0x2c]
// 005df5a8: PUSH EAX
// 005df5a9: XOR EDX,EDX
// 005df5ab: PUSH EBX
// 005df5ac: MOV dword ptr [ESP + 0x28],EDX
// 005df5b0: MOV dword ptr [ESP + 0x30],EDX
// 005df5b4: CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
//   XREF to: 00408ea0 (UNCONDITIONAL_CALL)
// 005df5b9: ADD ESP,0xc
// 005df5bc: LEA EAX,[ESP + 0x28]
// 005df5c0: PUSH EAX
// 005df5c1: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 005df5c6: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005df5cc: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 005df5cd: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 005df5d2: ADD ESP,0xc
// 005df5d5: PUSH -0x1
// 005df5d7: LEA EAX,[EBX + 0x158]
// 005df5dd: PUSH 0x0
// 005df5df: PUSH EAX
// 005df5e0: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 005df5e5: ADD ESP,0xc
// 005df5e8: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005df5ee: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 005df5ef: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
