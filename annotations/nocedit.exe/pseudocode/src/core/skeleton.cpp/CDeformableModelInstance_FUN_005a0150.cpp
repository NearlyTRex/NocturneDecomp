// Name: core_skeleton.cpp_CDeformableModelInstance_FUN_005a0150
// Address: 005a0150
// Address Range: [[005a0150, 005a01cb]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_FUN_005a0150(CDeformableModelInstance * this_ptr)
// Cross-references:
//   core_baron.cpp_CBaron_FUN_00413ae0 (00413ae0) at 00413c4c [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_FUN_004173b0 (004173b0) at 0041752e [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_00429aa0 (00429aa0) at 00429b15 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ad00 (0042ad00) at 0042aec0 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 (0043c880) at 0043cae4 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00485be0 (00485be0) at 00485d6d [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_005205f0 (005205f0) at 005206f7 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_005208b0 (005208b0) at 00520907 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 005971ca [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_FUN_005c7590 (005c7590) at 005c760e [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_FUN_005e6da0 (005e6da0) at 005e6e14 [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0059ce40
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0250
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a02a0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a02f0
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_FUN_005a0150(CDeformableModelInstance *this_ptr)

{
  CDeformableModel *this_ptr_00;
  CBoundingBox3D *unaff_EDI;
  int in_stack_00000008;
  uint in_stack_00000018;
  int in_stack_0000001c;
  
  if (in_stack_00000008 < 0) {
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
    core_skeleton_cpp_CDeformableModel_selectLOD_FUN_0059ce40(this_ptr_00,unaff_EDI);
  }
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0250(this_ptr);
  if (in_stack_0000001c == 0) {
    if (((int)in_stack_00000018 < 0) || ((in_stack_00000018 & 0x100) == 0)) {
      core_skeleton_cpp_CDeformableModelInstance_FUN_005a02f0(this_ptr);
    }
  }
  else {
    core_skeleton_cpp_CDeformableModelInstance_FUN_005a02a0(this_ptr);
  }
  core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340(this_ptr);
  return;
}


// Assembly code:
// 005a0150: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_FUN_005a0150
// 005a0151: PUSH ESI
// 005a0152: PUSH EDI
// 005a0153: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005a0157: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005a015b: MOV ESI,EAX
// 005a015d: TEST EAX,EAX
// 005a015f: JL 0x005a0197
//   XREF to: 005a0197 (CONDITIONAL_JUMP)
// 005a0161: PUSH ESI
//   Label: LAB_005a0161
// 005a0162: PUSH EBX
// 005a0163: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0250
//   XREF to: 005a0250 (UNCONDITIONAL_CALL)
// 005a0168: ADD ESP,0x8
// 005a016b: CMP dword ptr [ESP + 0x1c],0x0
//   XREF to: Stack[0x10] (READ)
// 005a0170: JNZ 0x005a01b4
//   XREF to: 005a01b4 (CONDITIONAL_JUMP)
// 005a0172: CMP dword ptr [ESP + 0x18],0x0
//   XREF to: Stack[0xc] (READ)
// 005a0177: JL 0x005a01c0
//   XREF to: 005a01c0 (CONDITIONAL_JUMP)
// 005a0179: TEST byte ptr [ESP + 0x19],0x1
//   XREF to: Stack[0xd] (READ)
// 005a017e: JZ 0x005a01c0
//   XREF to: 005a01c0 (CONDITIONAL_JUMP)
// 005a0180: MOV ESI,dword ptr [ESP + 0x20]
//   Label: LAB_005a0180
//   XREF to: Stack[0x14] (READ)
// 005a0184: PUSH ESI
// 005a0185: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005a0189: PUSH EDI
// 005a018a: PUSH EBX
// 005a018b: CALL core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340
//   XREF to: 005a0340 (UNCONDITIONAL_CALL)
// 005a0190: ADD ESP,0xc
// 005a0193: POP EDI
// 005a0194: POP ESI
// 005a0195: POP EBX
// 005a0196: RET
// 005a0197: LEA EAX,[EBX + 0x2238]
//   Label: LAB_005a0197
// 005a019d: PUSH EAX
// 005a019e: PUSH EBX
// 005a019f: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 005a01a4: ADD ESP,0x4
// 005a01a7: PUSH EAX
// 005a01a8: CALL core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0059ce40
//   XREF to: 0059ce40 (UNCONDITIONAL_CALL)
// 005a01ad: ADD ESP,0x8
// 005a01b0: MOV ESI,EAX
// 005a01b2: JMP 0x005a0161
//   XREF to: 005a0161 (UNCONDITIONAL_JUMP)
// 005a01b4: PUSH ESI
//   Label: LAB_005a01b4
// 005a01b5: PUSH EBX
// 005a01b6: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a02a0
//   XREF to: 005a02a0 (UNCONDITIONAL_CALL)
// 005a01bb: ADD ESP,0x8
// 005a01be: JMP 0x005a0180
//   XREF to: 005a0180 (UNCONDITIONAL_JUMP)
// 005a01c0: PUSH ESI
//   Label: LAB_005a01c0
// 005a01c1: PUSH EBX
// 005a01c2: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a02f0
//   XREF to: 005a02f0 (UNCONDITIONAL_CALL)
// 005a01c7: ADD ESP,0x8
// 005a01ca: JMP 0x005a0180
//   XREF to: 005a0180 (UNCONDITIONAL_JUMP)
