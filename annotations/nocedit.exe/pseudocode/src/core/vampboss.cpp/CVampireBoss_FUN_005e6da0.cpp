// Name: core_vampboss.cpp_CVampireBoss_FUN_005e6da0
// Address: 005e6da0
// Address Range: [[005e6da0, 005e6f46]]
// Convention: __cdecl
// Signature: int core_vampboss.cpp_CVampireBoss_FUN_005e6da0(CVampireBoss * this_ptr)
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02f43978
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_charactr.cpp_CCharacter_FUN_0042a420
//   core_cloth.cpp_FUN_0043bae0
//   core_morph.cpp_CMorphModel_FUN_0052bae0
//   core_morph.cpp_FUN_0052b600
//   core_morph.cpp_FUN_0052b640
//   core_motion.cpp_CMotionController_FUN_0052e700
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0150
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0

#include "nocturne.h"

int __cdecl core_vampboss_cpp_CVampireBoss_FUN_005e6da0(CVampireBoss *this_ptr)

{
  char *this_ptr_00;
  CBoundingBox3D *this_ptr_01;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CVampireBoss *pCStack00000010;
  int in_stack_0000003c;
  char *pcStack_28;
  char *pcStack_24;
  
  if (*(int *)(this_ptr->base_enemy).base_character.field2_0x240c != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
  this_ptr_01 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->getBoundingBox)
                          ((CDemonActor *)this_ptr,(CBoundingBox3D *)&pcStack_28);
  pcStack_24 = (char *)0x5e6ddd;
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_01);
  if (iVar1 == 0) goto LAB_005e6e6c;
  pCStack00000010 = (CVampireBoss *)(this_ptr->field1_0xbeb4 + 0x81f9c);
  if (this_ptr->form == 0) {
    pcStack_24 = (char *)0xffffffff;
    pcStack_28 = (char *)0xffffffff;
    core_skeleton_cpp_CDeformableModelInstance_FUN_005a0150
              (&(this_ptr->base_enemy).base_character.model);
    core_cloth_cpp_FUN_0043bae0();
LAB_005e6e2e:
    core_cloth_cpp_FUN_0043bae0();
  }
  else {
    if (this_ptr->form == 2) {
      pcStack_24 = (char *)0xffffffff;
      pcStack_28 = (char *)0xffffffff;
      core_skeleton_cpp_CDeformableModelInstance_FUN_005a0150
                ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8));
      goto LAB_005e6e2e;
    }
    pcStack_24 = (char *)0x0;
    this_ptr_00 = this_ptr->field3_0xcdcc4;
    pcStack_28 = this_ptr_00;
    core_morph_cpp_FUN_0052b600();
    pcStack_24 = (char *)0x0;
    pcStack_28 = this_ptr_00;
    core_morph_cpp_FUN_0052b640();
    pcStack_28 = (char *)0x5e6edd;
    pcStack_24 = this_ptr_00;
    core_morph_cpp_FUN_0052b640();
    pcStack_24 = (char *)0x5e6ef1;
    core_morph_cpp_FUN_0052b640();
    core_morph_cpp_FUN_0052b640();
    core_morph_cpp_FUN_0052b600();
    core_morph_cpp_FUN_0052b640();
    core_morph_cpp_FUN_0052b640();
    core_morph_cpp_CMorphModel_FUN_0052bae0((CMorphModel *)this_ptr_00);
  }
  core_charactr_cpp_CCharacter_FUN_0042a420((CCharacter *)this_ptr);
  if (DAT_02f43978 != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
    if (iVar1 == 0) {
      pCStack00000010 = this_ptr;
      core_motion_cpp_CMotionController_FUN_0052e700
                (&(this_ptr->base_enemy).base_character.model.motion_controller);
    }
  }
LAB_005e6e6c:
  pCStack00000010 = (CVampireBoss *)0x5e6e72;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
  return in_stack_0000003c;
}


// Assembly code:
// 005e6da0: PUSH EBX
//   Label: core_vampboss.cpp_CVampireBoss_FUN_005e6da0
// 005e6da1: PUSH EBP
// 005e6da2: SUB ESP,0x24
// 005e6da5: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 005e6da9: CMP dword ptr [EBX + 0x240c],0x0
// 005e6db0: JZ 0x005e6dba
//   XREF to: 005e6dba (CONDITIONAL_JUMP)
// 005e6db2: XOR EAX,EAX
// 005e6db4: ADD ESP,0x24
// 005e6db7: POP EBP
// 005e6db8: POP EBX
// 005e6db9: RET
// 005e6dba: PUSH EDI
//   Label: LAB_005e6dba
// 005e6dbb: PUSH ESI
// 005e6dbc: PUSH EBX
// 005e6dbd: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 005e6dc2: ADD ESP,0x4
// 005e6dc5: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x2c] (DATA)
// 005e6dc9: PUSH EAX
// 005e6dca: MOV ESI,dword ptr [EBX + 0x154]
// 005e6dd0: PUSH EBX
// 005e6dd1: CALL dword ptr [ESI + 0x14]
// 005e6dd4: ADD ESP,0x8
// 005e6dd7: PUSH EAX
// 005e6dd8: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 005e6ddd: ADD ESP,0x4
// 005e6de0: MOV dword ptr [ESP + 0x20],EAX
// 005e6de4: TEST EAX,EAX
// 005e6de6: JZ 0x005e6e6c
//   XREF to: 005e6e6c (CONDITIONAL_JUMP)
// 005e6dec: LEA EAX,[EBX + 0x8de50]
// 005e6df2: MOV ECX,dword ptr [EBX + 0xcdcc0]
// 005e6df8: LEA EDI,[EBX + 0x4dfe0]
// 005e6dfe: MOV dword ptr [ESP + 0x28],EAX
// 005e6e02: LEA EAX,[EBX + 0x158]
// 005e6e08: TEST ECX,ECX
// 005e6e0a: JNZ 0x005e6e81
//   XREF to: 005e6e81 (CONDITIONAL_JUMP)
// 005e6e0c: PUSH ECX
// 005e6e0d: PUSH 0x1
// 005e6e0f: PUSH -0x1
// 005e6e11: PUSH -0x1
// 005e6e13: PUSH EAX
// 005e6e14: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0150
//   XREF to: 005a0150 (UNCONDITIONAL_CALL)
// 005e6e19: ADD ESP,0x14
// 005e6e1c: PUSH 0x0
// 005e6e1e: PUSH EDI
// 005e6e1f: CALL core_cloth.cpp_FUN_0043bae0
//   XREF to: 0043bae0 (UNCONDITIONAL_CALL)
// 005e6e24: ADD ESP,0x8
// 005e6e27: PUSH 0x0
// 005e6e29: MOV ESI,dword ptr [ESP + 0x2c]
// 005e6e2d: PUSH ESI
// 005e6e2e: CALL core_cloth.cpp_FUN_0043bae0
//   Label: LAB_005e6e2e
//   XREF to: 0043bae0 (UNCONDITIONAL_CALL)
// 005e6e33: ADD ESP,0x8
//   Label: LAB_005e6e33
// 005e6e36: PUSH EBX
// 005e6e37: CALL core_charactr.cpp_CCharacter_FUN_0042a420
//   XREF to: 0042a420 (UNCONDITIONAL_CALL)
// 005e6e3c: MOV EDI,dword ptr [0x02f43978]
//   XREF to: 02f43978 (READ)
// 005e6e42: ADD ESP,0x4
// 005e6e45: TEST EDI,EDI
// 005e6e47: JZ 0x005e6e6c
//   XREF to: 005e6e6c (CONDITIONAL_JUMP)
// 005e6e49: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005e6e4f: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 005e6e50: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 005e6e55: ADD ESP,0x4
// 005e6e58: TEST EAX,EAX
// 005e6e5a: JNZ 0x005e6e6c
//   XREF to: 005e6e6c (CONDITIONAL_JUMP)
// 005e6e5c: PUSH EBX
// 005e6e5d: LEA EAX,[EBX + 0x158]
// 005e6e63: PUSH EAX
// 005e6e64: CALL core_motion.cpp_CMotionController_FUN_0052e700
//   XREF to: 0052e700 (UNCONDITIONAL_CALL)
// 005e6e69: ADD ESP,0x8
// 005e6e6c: PUSH EBX
//   Label: LAB_005e6e6c
// 005e6e6d: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 005e6e72: ADD ESP,0x4
// 005e6e75: MOV EAX,dword ptr [ESP + 0x20]
// 005e6e79: POP ESI
// 005e6e7a: POP EDI
// 005e6e7b: ADD ESP,0x24
// 005e6e7e: POP EBP
// 005e6e7f: POP EBX
// 005e6e80: RET
// 005e6e81: LEA EBP,[EBX + 0xe170]
//   Label: LAB_005e6e81
// 005e6e87: LEA ESI,[EBX + 0xbebc]
// 005e6e8d: MOV dword ptr [ESP + 0x24],ESI
// 005e6e91: CMP ECX,0x2
// 005e6e94: JNZ 0x005e6eac
//   XREF to: 005e6eac (CONDITIONAL_JUMP)
// 005e6e96: PUSH 0x0
// 005e6e98: PUSH 0x1
// 005e6e9a: PUSH -0x1
// 005e6e9c: PUSH -0x1
// 005e6e9e: PUSH ESI
// 005e6e9f: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0150
//   XREF to: 005a0150 (UNCONDITIONAL_CALL)
// 005e6ea4: ADD ESP,0x14
// 005e6ea7: PUSH 0x0
// 005e6ea9: PUSH EBP
// 005e6eaa: JMP 0x005e6e2e
//   XREF to: 005e6e2e (UNCONDITIONAL_JUMP)
// 005e6eac: PUSH 0x0
//   Label: LAB_005e6eac
// 005e6eae: PUSH EAX
// 005e6eaf: PUSH 0x0
// 005e6eb1: LEA ESI,[EBX + 0xcdcc4]
// 005e6eb7: PUSH ESI
// 005e6eb8: CALL core_morph.cpp_FUN_0052b600
//   XREF to: 0052b600 (UNCONDITIONAL_CALL)
// 005e6ebd: ADD ESP,0x10
// 005e6ec0: PUSH 0x1
// 005e6ec2: PUSH 0x0
// 005e6ec4: PUSH EDI
// 005e6ec5: PUSH 0x0
// 005e6ec7: PUSH ESI
// 005e6ec8: CALL core_morph.cpp_FUN_0052b640
//   XREF to: 0052b640 (UNCONDITIONAL_CALL)
// 005e6ecd: ADD ESP,0x14
// 005e6ed0: PUSH 0x2
// 005e6ed2: PUSH 0x0
// 005e6ed4: PUSH EDI
// 005e6ed5: PUSH 0x0
// 005e6ed7: PUSH ESI
// 005e6ed8: CALL core_morph.cpp_FUN_0052b640
//   XREF to: 0052b640 (UNCONDITIONAL_CALL)
// 005e6edd: ADD ESP,0x14
// 005e6ee0: PUSH 0x3
// 005e6ee2: PUSH 0x0
// 005e6ee4: MOV EDI,dword ptr [ESP + 0x30]
// 005e6ee8: PUSH EDI
// 005e6ee9: PUSH 0x0
// 005e6eeb: PUSH ESI
// 005e6eec: CALL core_morph.cpp_FUN_0052b640
//   XREF to: 0052b640 (UNCONDITIONAL_CALL)
// 005e6ef1: ADD ESP,0x14
// 005e6ef4: PUSH 0x4
// 005e6ef6: PUSH 0x0
// 005e6ef8: PUSH EDI
// 005e6ef9: PUSH 0x0
// 005e6efb: PUSH ESI
// 005e6efc: CALL core_morph.cpp_FUN_0052b640
//   XREF to: 0052b640 (UNCONDITIONAL_CALL)
// 005e6f01: ADD ESP,0x14
// 005e6f04: PUSH 0x0
// 005e6f06: MOV EDX,dword ptr [ESP + 0x28]
// 005e6f0a: PUSH EDX
// 005e6f0b: PUSH 0x1
// 005e6f0d: PUSH ESI
// 005e6f0e: CALL core_morph.cpp_FUN_0052b600
//   XREF to: 0052b600 (UNCONDITIONAL_CALL)
// 005e6f13: ADD ESP,0x10
// 005e6f16: PUSH 0x1
// 005e6f18: PUSH 0x0
// 005e6f1a: PUSH EBP
// 005e6f1b: PUSH 0x1
// 005e6f1d: PUSH ESI
// 005e6f1e: CALL core_morph.cpp_FUN_0052b640
//   XREF to: 0052b640 (UNCONDITIONAL_CALL)
// 005e6f23: ADD ESP,0x14
// 005e6f26: PUSH 0x2
// 005e6f28: PUSH 0x0
// 005e6f2a: PUSH EBP
// 005e6f2b: PUSH 0x1
// 005e6f2d: PUSH ESI
// 005e6f2e: CALL core_morph.cpp_FUN_0052b640
//   XREF to: 0052b640 (UNCONDITIONAL_CALL)
// 005e6f33: ADD ESP,0x14
// 005e6f36: PUSH dword ptr [EBX + 0xce8f0]
// 005e6f3c: PUSH ESI
// 005e6f3d: CALL core_morph.cpp_CMorphModel_FUN_0052bae0
//   XREF to: 0052bae0 (UNCONDITIONAL_CALL)
// 005e6f42: JMP 0x005e6e33
//   XREF to: 005e6e33 (UNCONDITIONAL_JUMP)
