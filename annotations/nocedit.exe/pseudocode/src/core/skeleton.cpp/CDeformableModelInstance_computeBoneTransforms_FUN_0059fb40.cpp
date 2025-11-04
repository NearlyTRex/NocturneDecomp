// Name: core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
// Address: 0059fb40
// Address Range: [[0059fb40, 0059fd5d]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0 (0042dfc0) at 0042dfde [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042af60 (0042af60) at 0042b02c [UNCONDITIONAL_CALL]
//   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 (0043c880) at 0043c9ec [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_00439710 (00439710) at 00439af5 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_setup_FUN_0051f3e0 (0051f3e0) at 0051f700 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051fcc0 (0051fcc0) at 00520492 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052c46a [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_00545d30 (00545d30) at 00545d86 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 00596c70 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000 (0059e000) at 0059e012 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070 (0059e070) at 0059e08e [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0 (0059c2f0) at 0059c394 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460 (0059d460) at 0059d537 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bc37c [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_FUN_005c6b60 (005c6b60) at 005c6dae [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_process_FUN_005db050 (005db050) at 005db1f0 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_FUN_005e56c0 (005e56c0) at 005e5786 [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
          (CDeformableModelInstance *this_ptr)

{
  CMatrix3x4f *pCVar1;
  CDeformableModelInstance *pCVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  CDeformableModelInstance *pCVar4;
  int unaff_EDI;
  CVector3f local_34;
  CSkeleton *local_28;
  int local_24;
  CMatrix3x4f *local_20;
  CSkeleton *local_1c;
  CQuaternion4f *local_18;
  int local_14;
  
  local_28 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  iVar3 = 0;
  if (0 < local_28->bone_count) {
    pCVar1 = this_ptr->bone_world_matrices;
    local_14 = 0;
    local_34.z = (float)this_ptr->transformed_vertices;
    local_18 = this_ptr->bone_rotations;
    pCVar2 = this_ptr;
    pCVar4 = this_ptr;
    local_20 = pCVar1;
    local_1c = local_28;
    do {
      local_24 = iVar3 * 0x30;
      core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280((CMatrix3x3f *)local_20,local_18);
      if (pCVar2->current_pose_data[0] != 1.0) {
        *(float *)((int)&this_ptr->bone_world_matrices[0].m[0].w + (int)&local_20->m[0].w) =
             pCVar2->current_pose_data[0] *
             *(float *)((int)&this_ptr->bone_world_matrices[0].m[0].w + (int)&local_20->m[0].w);
        *(float *)((int)&this_ptr->bone_world_matrices[0].m[0].x + (int)local_20) =
             pCVar2->current_pose_data[0] *
             *(float *)((int)&this_ptr->bone_world_matrices[0].m[0].x + (int)local_20);
        *(float *)((int)&this_ptr->bone_world_matrices[0].m[0].y + (int)local_20) =
             pCVar2->current_pose_data[0] *
             *(float *)((int)&this_ptr->bone_world_matrices[0].m[0].y + (int)local_20);
        *(float *)((int)&local_20->m[0].w + (int)&this_ptr->bone_world_matrices[0].m[1].w) =
             pCVar2->current_pose_data[0] *
             *(float *)((int)&local_20->m[0].w + (int)&this_ptr->bone_world_matrices[0].m[1].w);
        *(float *)((int)&this_ptr->bone_world_matrices[0].m[1].x + (int)local_20) =
             pCVar2->current_pose_data[0] *
             *(float *)((int)&this_ptr->bone_world_matrices[0].m[1].x + (int)local_20);
        *(float *)((int)&this_ptr->bone_world_matrices[0].m[1].y + (int)local_20) =
             pCVar2->current_pose_data[0] *
             *(float *)((int)&this_ptr->bone_world_matrices[0].m[1].y + (int)local_20);
        *(float *)((int)&local_20->m[0].w + (int)&this_ptr->bone_world_matrices[0].m[2].w) =
             pCVar2->current_pose_data[0] *
             *(float *)((int)&local_20->m[0].w + (int)&this_ptr->bone_world_matrices[0].m[2].w);
        *(float *)((int)&this_ptr->bone_world_matrices[0].m[2].x + (int)local_20) =
             pCVar2->current_pose_data[0] *
             *(float *)((int)&this_ptr->bone_world_matrices[0].m[2].x + (int)local_20);
        *(float *)((int)&this_ptr->bone_world_matrices[0].m[2].y + (int)local_20) =
             pCVar2->current_pose_data[0] *
             *(float *)((int)&this_ptr->bone_world_matrices[0].m[2].y + (int)local_20);
      }
      if ((int)local_18[0x2857].z < 0) {
        pCVar4->bone_world_matrices[0].m[0].z =
             *(float *)((int)&pCVar1->m[0].w + (int)&this_ptr->transformed_vertices[0].x) +
             (this_ptr->root_position).x;
        pCVar4->bone_world_matrices[0].m[1].z =
             *(float *)((int)&this_ptr->transformed_vertices[0].y + (int)pCVar1) +
             (this_ptr->root_position).y;
        pCVar4->bone_world_matrices[0].m[2].z =
             *(float *)((int)&this_ptr->transformed_vertices[0].z + (int)pCVar1) +
             (this_ptr->root_position).z;
      }
      else {
        core_xform_cpp_transformVector3x4_FUN_005f4dc0
                  (&local_34,
                   (CVector3f *)
                   ((local_28->motion_list).state_names[0] + (int)(pCVar1->m + -1) + 0xc),
                   (CMatrix3x4f *)((int)local_18[0x2857].z * 0x30 + unaff_EDI));
        pCVar4->bone_world_matrices[0].m[0].z = local_34.y;
        pCVar4->bone_world_matrices[0].m[1].z = local_34.z;
        pCVar4->bone_world_matrices[0].m[2].z = (float)local_28;
      }
      pCVar2 = (CDeformableModelInstance *)&(pCVar2->motion_controller).current_motion_index;
      pCVar4 = (CDeformableModelInstance *)(pCVar4->motion_controller).current_motion_name;
      iVar3 = iVar3 + 1;
      local_20 = local_20 + 1;
      local_18 = local_18 + 1;
      local_14 = local_14 + 0xc;
      local_1c = (CSkeleton *)((local_1c->motion_list).state_names[1] + 2);
    } while (iVar3 < local_28->bone_count);
  }
  this_ptr->field13_0x2230 = -1;
  return;
}


// Assembly code:
// 0059fb40: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
// 0059fb41: PUSH ESI
// 0059fb42: PUSH EDI
// 0059fb43: PUSH EBP
// 0059fb44: SUB ESP,0x2c
// 0059fb47: MOV EDI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 0059fb4b: PUSH EDI
// 0059fb4c: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0059fb51: XOR EBP,EBP
// 0059fb53: ADD ESP,0x4
// 0059fb56: MOV EDX,dword ptr [EAX + 0x28558]
// 0059fb5c: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0059fb60: TEST EDX,EDX
// 0059fb62: JLE 0x0059fc56
//   XREF to: 0059fc56 (CONDITIONAL_JUMP)
// 0059fb68: LEA EBX,[EDI + 0xe80]
// 0059fb6e: MOV dword ptr [ESP + 0x24],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 0059fb72: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0059fb76: MOV dword ptr [ESP + 0x28],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0059fb7a: LEA EBX,[EDI + 0x58]
// 0059fb7d: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 0059fb81: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 0059fb85: LEA ESI,[EDI + 0x6b0]
// 0059fb8b: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0059fb8f: MOV EBX,EDI
// 0059fb91: MOV dword ptr [ESP + 0x20],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 0059fb95: MOV ESI,EDI
// 0059fb97: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_0059fb97
//   XREF to: Stack[-0x1c] (READ)
// 0059fb9b: PUSH EAX
// 0059fb9c: IMUL EAX,EBP,0x30
// 0059fb9f: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 0059fba3: PUSH EDX
// 0059fba4: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0059fba8: CALL core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280
//   XREF to: 005f7280 (UNCONDITIONAL_CALL)
// 0059fbad: MOV ECX,dword ptr [EBX + 0xcf0]
// 0059fbb3: ADD ESP,0x8
// 0059fbb6: CMP ECX,0x3f800000
// 0059fbbc: JNZ 0x0059fc68
//   XREF to: 0059fc68 (CONDITIONAL_JUMP)
// 0059fbc2: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0059fbc2
//   XREF to: Stack[-0x20] (READ)
// 0059fbc6: MOV EAX,dword ptr [EAX + 0x2857c]
// 0059fbcc: TEST EAX,EAX
// 0059fbce: JL 0x0059fd25
//   XREF to: 0059fd25 (CONDITIONAL_JUMP)
// 0059fbd4: IMUL EAX,EAX,0x30
// 0059fbd7: ADD EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 0059fbdb: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (READ)
// 0059fbdf: PUSH EAX
// 0059fbe0: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 0059fbe4: ADD EAX,ECX
// 0059fbe6: PUSH EAX
// 0059fbe7: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x3c] (DATA)
// 0059fbeb: PUSH EAX
// 0059fbec: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0059fbf1: ADD ESP,0xc
// 0059fbf4: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x3c] (DATA)
// 0059fbf7: MOV dword ptr [ESI + 0xe8c],EAX
// 0059fbfd: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x38] (READ)
// 0059fc01: MOV dword ptr [ESI + 0xe9c],EAX
// 0059fc07: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x34] (READ)
// 0059fc0b: MOV dword ptr [ESI + 0xeac],EAX
// 0059fc11: MOV ECX,dword ptr [ESP + 0x18]
//   Label: LAB_0059fc11
//   XREF to: Stack[-0x24] (READ)
// 0059fc15: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (READ)
// 0059fc19: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (READ)
// 0059fc1d: ADD EBX,0x4
// 0059fc20: ADD ESI,0x30
// 0059fc23: INC EBP
// 0059fc24: ADD ECX,0x30
// 0059fc27: ADD EAX,0x10
// 0059fc2a: ADD EDX,0xc
// 0059fc2d: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 0059fc31: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0059fc35: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x20] (READ)
// 0059fc39: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x2c] (READ)
// 0059fc3d: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0059fc41: ADD ECX,0x24
// 0059fc44: MOV EDX,dword ptr [EAX + 0x28558]
// 0059fc4a: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0059fc4e: CMP EBP,EDX
// 0059fc50: JL 0x0059fb97
//   XREF to: 0059fb97 (CONDITIONAL_JUMP)
// 0059fc56: MOV dword ptr [EDI + 0x2230],0xffffffff
//   Label: LAB_0059fc56
// 0059fc60: ADD ESP,0x2c
// 0059fc63: POP EBP
// 0059fc64: POP EDI
// 0059fc65: POP ESI
// 0059fc66: POP EBX
// 0059fc67: RET
// 0059fc68: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0059fc68
//   XREF to: Stack[-0x28] (READ)
// 0059fc6c: FLD float ptr [EBX + 0xcf0]
// 0059fc72: FMUL float ptr [EDI + EAX*0x1 + 0xe80]
// 0059fc79: FSTP float ptr [EDI + EAX*0x1 + 0xe80]
// 0059fc80: FLD float ptr [EBX + 0xcf0]
// 0059fc86: FMUL float ptr [EDI + EAX*0x1 + 0xe84]
// 0059fc8d: FSTP float ptr [EDI + EAX*0x1 + 0xe84]
// 0059fc94: FLD float ptr [EBX + 0xcf0]
// 0059fc9a: FMUL float ptr [EDI + EAX*0x1 + 0xe88]
// 0059fca1: FSTP float ptr [EDI + EAX*0x1 + 0xe88]
// 0059fca8: FLD float ptr [EBX + 0xcf0]
// 0059fcae: FMUL float ptr [EDI + EAX*0x1 + 0xe90]
// 0059fcb5: FSTP float ptr [EDI + EAX*0x1 + 0xe90]
// 0059fcbc: FLD float ptr [EBX + 0xcf0]
// 0059fcc2: FMUL float ptr [EDI + EAX*0x1 + 0xe94]
// 0059fcc9: FSTP float ptr [EDI + EAX*0x1 + 0xe94]
// 0059fcd0: FLD float ptr [EBX + 0xcf0]
// 0059fcd6: FMUL float ptr [EDI + EAX*0x1 + 0xe98]
// 0059fcdd: FSTP float ptr [EDI + EAX*0x1 + 0xe98]
// 0059fce4: FLD float ptr [EBX + 0xcf0]
// 0059fcea: FMUL float ptr [EDI + EAX*0x1 + 0xea0]
// 0059fcf1: FSTP float ptr [EDI + EAX*0x1 + 0xea0]
// 0059fcf8: FLD float ptr [EBX + 0xcf0]
// 0059fcfe: FMUL float ptr [EDI + EAX*0x1 + 0xea4]
// 0059fd05: FSTP float ptr [EDI + EAX*0x1 + 0xea4]
// 0059fd0c: FLD float ptr [EBX + 0xcf0]
// 0059fd12: FMUL float ptr [EDI + EAX*0x1 + 0xea8]
// 0059fd19: FSTP float ptr [EDI + EAX*0x1 + 0xea8]
// 0059fd20: JMP 0x0059fbc2
//   XREF to: 0059fbc2 (UNCONDITIONAL_JUMP)
// 0059fd25: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_0059fd25
//   XREF to: Stack[-0x18] (READ)
// 0059fd29: FLD float ptr [EDI + EAX*0x1 + 0x58]
// 0059fd2d: FADD float ptr [EDI + 0x6a4]
// 0059fd33: FSTP float ptr [ESI + 0xe8c]
// 0059fd39: FLD float ptr [EDI + EAX*0x1 + 0x5c]
// 0059fd3d: FADD float ptr [EDI + 0x6a8]
// 0059fd43: FSTP float ptr [ESI + 0xe9c]
// 0059fd49: FLD float ptr [EDI + EAX*0x1 + 0x60]
// 0059fd4d: FADD float ptr [EDI + 0x6ac]
// 0059fd53: FSTP float ptr [ESI + 0xeac]
// 0059fd59: JMP 0x0059fc11
//   XREF to: 0059fc11 (UNCONDITIONAL_JUMP)
