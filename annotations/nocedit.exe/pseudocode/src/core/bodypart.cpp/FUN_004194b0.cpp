// Name: core_bodypart.cpp_FUN_004194b0
// Address: 004194b0
// Address Range: [[004194b0, 004195a3] [004195c0, 004195cb] [004195ec, 00419607]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_004194b0()
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_0326ef00
// Function calls:
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_bodypart.cpp_FUN_00419340
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720

#include "nocturne.h"

/* Signature: undefined1 actors_other_bodypart.cpp_FUN_004194b0(undefined4 param_1) */

int core_bodypart_cpp_FUN_004194b0(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CKeyFramedModelInstance *this_ptr_00;
  CVector3i *position;
  CDemonActor *in_stack_00000004;
  
  if (*(int *)in_stack_00000004[1].actor_name < 2) {
    g_CDemonSetPtr->unk_lighting_param2 = *(int *)(in_stack_00000004[9].create_event + 0x20);
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
    this_ptr = (*in_stack_00000004->vtable->getBoundingBox)
                         (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffe4);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
    in_stack_00000004[0xb].health = iVar1;
    if (iVar1 != 0) {
      if ((*(int *)(in_stack_00000004[9].create_event + 0x24) == 0) ||
         (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
         iVar1 != 0)) {
        core_bodypart_cpp_FUN_00419340();
      }
      iVar1 = 0;
      if (0 < (int)in_stack_00000004[1].previous_transform_state.orientation.x) {
        this_ptr_00 = (CKeyFramedModelInstance *)&in_stack_00000004[1].field28_0x150;
        position = (CVector3i *)&in_stack_00000004[1].field25_0x144;
        do {
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                    (g_CDemonRendererPtr,position,
                     (CVector3i *)((int)in_stack_00000004 + iVar1 * 0x194 + 0x290));
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                    (this_ptr_00,0.0,-1);
          iVar1 = iVar1 + 1;
          position = (CVector3i *)&position[0x21].z;
          this_ptr_00 = (CKeyFramedModelInstance *)(this_ptr_00[1].part_visibility_flags + 6);
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        } while (iVar1 < (int)in_stack_00000004[1].previous_transform_state.orientation.x);
      }
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    g_CDemonSetPtr->unk_lighting_param2 = 0;
    return in_stack_00000004[0xb].health;
  }
  if ((in_stack_00000004[0xb].health != 0) &&
     (0 < *(int *)(in_stack_00000004[5].create_event + 0x1c))) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 004194b0: PUSH EBP
//   Label: core_bodypart.cpp_FUN_004194b0
// 004194b1: SUB ESP,0x1c
// 004194b4: MOV EBP,dword ptr [ESP + 0x24]
// 004194b8: CMP dword ptr [EBP + 0x158],0x1
// 004194bf: JLE 0x004194e4
//   XREF to: 004194e4 (CONDITIONAL_JUMP)
// 004194c1: CMP dword ptr [EBP + 0xf2c],0x0
// 004194c8: JZ 0x004194dd
//   XREF to: 004194dd (CONDITIONAL_JUMP)
// 004194ca: CMP dword ptr [EBP + 0x74c],0x0
// 004194d1: JLE 0x004194dd
//   XREF to: 004194dd (CONDITIONAL_JUMP)
// 004194d3: MOV EAX,0x1
// 004194d8: ADD ESP,0x1c
// 004194db: POP EBP
// 004194dc: RET
// 004194dd: XOR EAX,EAX
//   Label: LAB_004194dd
// 004194df: ADD ESP,0x1c
// 004194e2: POP EBP
// 004194e3: RET
// 004194e4: PUSH EDI
//   Label: LAB_004194e4
// 004194e5: PUSH ESI
// 004194e6: PUSH EBX
// 004194e7: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 004194ec: MOV EBX,dword ptr [EBP + 0xcb0]
// 004194f2: PUSH EBP
// 004194f3: MOV dword ptr [EAX + 0x15ac88],EBX
//   XREF to: 0326ef00 (WRITE)
// 004194f9: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 004194fe: ADD ESP,0x4
// 00419501: LEA EAX,[ESP + 0xc]
// 00419505: PUSH EAX
// 00419506: MOV EBX,dword ptr [EBP + 0x154]
// 0041950c: PUSH EBP
// 0041950d: CALL dword ptr [EBX + 0x14]
// 00419510: ADD ESP,0x8
// 00419513: PUSH EAX
// 00419514: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 00419519: ADD ESP,0x4
// 0041951c: MOV dword ptr [EBP + 0xf2c],EAX
// 00419522: TEST EAX,EAX
// 00419524: JZ 0x004195c0
//   XREF to: 004195c0 (CONDITIONAL_JUMP)
// 0041952a: CMP dword ptr [EBP + 0xcb4],0x0
// 00419531: JNZ 0x004195ec
//   XREF to: 004195ec (CONDITIONAL_JUMP)
// 00419537: PUSH -0x1
//   Label: LAB_00419537
// 00419539: PUSH EBP
// 0041953a: CALL core_bodypart.cpp_FUN_00419340
//   XREF to: 00419340 (UNCONDITIONAL_CALL)
// 0041953f: ADD ESP,0x8
// 00419542: MOV EDI,dword ptr [EBP + 0x28c]
//   Label: LAB_00419542
// 00419548: XOR EBX,EBX
// 0041954a: TEST EDI,EDI
// 0041954c: JLE 0x004195c0
//   XREF to: 004195c0 (CONDITIONAL_JUMP)
// 0041954e: LEA EAX,[EBP + 0x290]
// 00419554: LEA ESI,[EBP + 0x2a8]
// 0041955a: MOV dword ptr [ESP + 0x24],EAX
// 0041955e: LEA EDI,[EBP + 0x29c]
// 00419564: IMUL EAX,EBX,0x194
//   Label: LAB_00419564
// 0041956a: ADD EAX,dword ptr [ESP + 0x24]
// 0041956e: PUSH EAX
// 0041956f: PUSH EDI
// 00419570: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00419575: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00419576: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 0041957b: ADD ESP,0xc
// 0041957e: PUSH -0x1
// 00419580: PUSH 0x0
// 00419582: PUSH ESI
// 00419583: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 00419588: ADD ESP,0xc
// 0041958b: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00419591: INC EBX
// 00419592: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00419593: ADD EDI,0x194
// 00419599: ADD ESI,0x194
// 0041959f: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 004195c0: MOV EBX,dword ptr [0x006703ec]
//   Label: LAB_004195c0
//   XREF to: 006703ec (READ)
// 004195c6: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004195c7: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 004195ec: MOV ESI,dword ptr [0x006703ec]
//   Label: LAB_004195ec
//   XREF to: 006703ec (READ)
// 004195f2: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 004195f3: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 004195f8: ADD ESP,0x4
// 004195fb: TEST EAX,EAX
// 004195fd: JNZ 0x00419537
//   XREF to: 00419537 (CONDITIONAL_JUMP)
// 00419603: JMP 0x00419542
//   XREF to: 00419542 (UNCONDITIONAL_JUMP)
