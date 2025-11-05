// Name: core_succubus.cpp_CSuccubus_FUN_005c7590
// Address: 005c7590
// Address Range: [[005c7590, 005c7709]]
// Convention: __cdecl
// Signature: int core_succubus.cpp_CSuccubus_FUN_005c7590(CSuccubus * this_ptr)
// Globals:
//   undefined4 DAT_00663938
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02f43978
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_charactr.cpp_CCharacter_FUN_00429aa0
//   core_cloth.cpp_MultipleCallSaveJoinedLight_FUN_0043c320
//   core_morph.cpp_CMorphModel_FUN_0052bae0
//   core_morph.cpp_FUN_0052b600
//   core_morph.cpp_FUN_0052b640
//   core_motion.cpp_CMotionController_FUN_0052e700
//   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
//   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_succubus_cpp_CSuccubus_FUN_005c7590(CSuccubus *this_ptr)

{
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  BADSPACEBASE *in_ESP;
  int iStack00000014;
  int in_stack_0000001c;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(g_CDemonRendererPtr);
  if (iVar1 == 0) {
    (this_ptr->base_enemy).base_character.field13_0x2620[0] = '\0';
    (this_ptr->base_enemy).base_character.field13_0x2620[1] = '\0';
    (this_ptr->base_enemy).base_character.field13_0x2620[2] = '\0';
    (this_ptr->base_enemy).base_character.field13_0x2620[3] = '\0';
  }
  if (*(int *)(this_ptr->base_enemy).base_character.field2_0x240c == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    this_ptr_00 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->getBoundingBox)
                            ((CDemonActor *)this_ptr,(CBoundingBox3D *)&stack0xffffffe4);
    iStack00000014 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    if (iStack00000014 != 0) {
      (this_ptr->base_enemy).base_character.field13_0x2620[0] = '\x01';
      (this_ptr->base_enemy).base_character.field13_0x2620[1] = '\0';
      (this_ptr->base_enemy).base_character.field13_0x2620[2] = '\0';
      (this_ptr->base_enemy).base_character.field13_0x2620[3] = '\0';
      if (iVar1 == 0) {
        if (*(int *)(this_ptr->field1_0xbeb4 + 0x2480) == 0) {
          core_charactr_cpp_CCharacter_FUN_00429aa0((CCharacter *)this_ptr);
        }
        else {
          core_morph_cpp_FUN_0052b600();
          core_morph_cpp_FUN_0052b600();
          core_morph_cpp_FUN_0052b640();
          core_morph_cpp_FUN_0052b640();
          core_morph_cpp_CMorphModel_FUN_0052bae0((CMorphModel *)(this_ptr->field1_0xbeb4 + 0x2488))
          ;
        }
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                  ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8),-1,0xffffffff,1,0);
        core_cloth_cpp_MultipleCallSaveJoinedLight_FUN_0043c320();
      }
      if ((DAT_02f43978 != 0) &&
         (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
         iVar1 == 0)) {
        core_motion_cpp_CMotionController_FUN_0052e700
                  (&(this_ptr->base_enemy).base_character.model.motion_controller);
        (*((this_ptr->base_enemy).base_character.base_actor.vtable)->renderTargetPoints)
                  ((CDemonActor *)this_ptr);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
    return in_stack_0000001c;
  }
  return 0;
}


// Assembly code:
// 005c7590: PUSH EBX
//   Label: core_succubus.cpp_CSuccubus_FUN_005c7590
// 005c7591: PUSH EBP
// 005c7592: SUB ESP,0x1c
// 005c7595: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005c7599: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005c759f: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005c75a0: CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
//   XREF to: 0048ce00 (UNCONDITIONAL_CALL)
// 005c75a5: ADD ESP,0x4
// 005c75a8: MOV EBP,EAX
// 005c75aa: TEST EAX,EAX
// 005c75ac: JZ 0x005c7674
//   XREF to: 005c7674 (CONDITIONAL_JUMP)
// 005c75b2: CMP dword ptr [EBX + 0x240c],0x0
//   Label: LAB_005c75b2
// 005c75b9: JNZ 0x005c767f
//   XREF to: 005c767f (CONDITIONAL_JUMP)
// 005c75bf: PUSH EDI
// 005c75c0: PUSH ESI
// 005c75c1: PUSH EBX
// 005c75c2: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 005c75c7: ADD ESP,0x4
// 005c75ca: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x24] (DATA)
// 005c75ce: PUSH EAX
// 005c75cf: MOV ESI,dword ptr [EBX + 0x154]
// 005c75d5: PUSH EBX
// 005c75d6: CALL dword ptr [ESI + 0x14]
// 005c75d9: ADD ESP,0x8
// 005c75dc: PUSH EAX
// 005c75dd: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 005c75e2: ADD ESP,0x4
// 005c75e5: MOV dword ptr [ESP + 0x20],EAX
// 005c75e9: TEST EAX,EAX
// 005c75eb: JZ 0x005c765f
//   XREF to: 005c765f (CONDITIONAL_JUMP)
// 005c75ed: LEA EDI,[EBX + 0xbebc]
// 005c75f3: MOV dword ptr [EBX + 0x2620],0x1
// 005c75fd: TEST EBP,EBP
// 005c75ff: JZ 0x005c7687
//   XREF to: 005c7687 (CONDITIONAL_JUMP)
// 005c7605: PUSH 0x0
// 005c7607: PUSH 0x1
// 005c7609: PUSH -0x1
// 005c760b: PUSH -0x1
// 005c760d: PUSH EDI
// 005c760e: CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
//   XREF to: 005a0150 (UNCONDITIONAL_CALL)
// 005c7613: ADD ESP,0x14
// 005c7616: PUSH EDI
// 005c7617: LEA EAX,[EBX + 0xe170]
// 005c761d: PUSH EAX
// 005c761e: CALL core_cloth.cpp_MultipleCallSaveJoinedLight_FUN_0043c320
//   XREF to: 0043c320 (UNCONDITIONAL_CALL)
// 005c7623: ADD ESP,0x8
//   Label: LAB_005c7623
// 005c7626: CMP dword ptr [0x02f43978],0x0
//   Label: LAB_005c7626
//   XREF to: 02f43978 (READ)
// 005c762d: JZ 0x005c765f
//   XREF to: 005c765f (CONDITIONAL_JUMP)
// 005c762f: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005c7635: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005c7636: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 005c763b: ADD ESP,0x4
// 005c763e: TEST EAX,EAX
// 005c7640: JNZ 0x005c765f
//   XREF to: 005c765f (CONDITIONAL_JUMP)
// 005c7642: PUSH EBX
// 005c7643: LEA EAX,[EBX + 0x158]
// 005c7649: PUSH EAX
// 005c764a: CALL core_motion.cpp_CMotionController_FUN_0052e700
//   XREF to: 0052e700 (UNCONDITIONAL_CALL)
// 005c764f: ADD ESP,0x8
// 005c7652: MOV EAX,dword ptr [EBX + 0x154]
// 005c7658: PUSH EBX
// 005c7659: CALL dword ptr [EAX + 0x50]
// 005c765c: ADD ESP,0x4
// 005c765f: PUSH EBX
//   Label: LAB_005c765f
// 005c7660: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 005c7665: ADD ESP,0x4
// 005c7668: MOV EAX,dword ptr [ESP + 0x20]
// 005c766c: POP ESI
// 005c766d: POP EDI
// 005c766e: ADD ESP,0x1c
// 005c7671: POP EBP
// 005c7672: POP EBX
// 005c7673: RET
// 005c7674: MOV dword ptr [EBX + 0x2620],EAX
//   Label: LAB_005c7674
// 005c767a: JMP 0x005c75b2
//   XREF to: 005c75b2 (UNCONDITIONAL_JUMP)
// 005c767f: XOR EAX,EAX
//   Label: LAB_005c767f
// 005c7681: ADD ESP,0x1c
// 005c7684: POP EBP
// 005c7685: POP EBX
// 005c7686: RET
// 005c7687: CMP dword ptr [EBX + 0xe334],0x0
//   Label: LAB_005c7687
// 005c768e: JZ 0x005c76fc
//   XREF to: 005c76fc (CONDITIONAL_JUMP)
// 005c7690: PUSH EBP
// 005c7691: LEA EAX,[EBX + 0x158]
// 005c7697: PUSH EAX
// 005c7698: PUSH EBP
// 005c7699: LEA ESI,[EBX + 0xe33c]
// 005c769f: PUSH ESI
// 005c76a0: CALL core_morph.cpp_FUN_0052b600
//   XREF to: 0052b600 (UNCONDITIONAL_CALL)
// 005c76a5: ADD ESP,0x10
// 005c76a8: PUSH EBP
// 005c76a9: PUSH EDI
// 005c76aa: PUSH 0x1
// 005c76ac: PUSH ESI
// 005c76ad: CALL core_morph.cpp_FUN_0052b600
//   XREF to: 0052b600 (UNCONDITIONAL_CALL)
// 005c76b2: ADD ESP,0x10
// 005c76b5: PUSH 0x1
// 005c76b7: PUSH EBP
// 005c76b8: MOV EDI,dword ptr [EBX + 0xe304]
// 005c76be: PUSH EDI
// 005c76bf: PUSH 0x1
// 005c76c1: PUSH ESI
// 005c76c2: CALL core_morph.cpp_FUN_0052b640
//   XREF to: 0052b640 (UNCONDITIONAL_CALL)
// 005c76c7: ADD ESP,0x14
// 005c76ca: PUSH 0x2
// 005c76cc: PUSH EBP
// 005c76cd: MOV EBP,dword ptr [EBX + 0xe304]
// 005c76d3: PUSH EBP
// 005c76d4: PUSH 0x1
// 005c76d6: PUSH ESI
// 005c76d7: CALL core_morph.cpp_FUN_0052b640
//   XREF to: 0052b640 (UNCONDITIONAL_CALL)
// 005c76dc: FLD float ptr [EBX + 0xe338]
// 005c76e2: FDIV float ptr [0x00663938]
//   XREF to: 00663938 (READ)
// 005c76e8: ADD ESP,0x14
// 005c76eb: SUB ESP,0x4
// 005c76ee: FSTP float ptr [ESP]
// 005c76f1: PUSH ESI
// 005c76f2: CALL core_morph.cpp_CMorphModel_FUN_0052bae0
//   XREF to: 0052bae0 (UNCONDITIONAL_CALL)
// 005c76f7: JMP 0x005c7623
//   XREF to: 005c7623 (UNCONDITIONAL_JUMP)
// 005c76fc: PUSH EBX
//   Label: LAB_005c76fc
// 005c76fd: CALL core_charactr.cpp_CCharacter_FUN_00429aa0
//   XREF to: 00429aa0 (UNCONDITIONAL_CALL)
// 005c7702: ADD ESP,0x4
// 005c7705: JMP 0x005c7626
//   XREF to: 005c7626 (UNCONDITIONAL_JUMP)
