// Name: core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_005a00f0
// Address: 005a00f0
// Address Range: [[005a00f0, 005a0144]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_005a00f0(CDeformableModelInstance * this_ptr, float scale_factor, int target_bone_index)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042af60 (0042af60) at 0042b023 [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_005a00f0
          (CDeformableModelInstance *this_ptr,float scale_factor,int target_bone_index)

{
  CSkeleton *this_ptr_00;
  int iVar1;
  int start_bone_index;
  float in_stack_00000010;
  
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  start_bone_index = 0;
  if (0 < this_ptr_00->bone_count) {
    do {
      iVar1 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                        (this_ptr_00,start_bone_index,target_bone_index);
      if (-1 < iVar1) {
        (this_ptr->bone_transform).current_pose_data[0] =
             (this_ptr->bone_transform).current_pose_data[0] * in_stack_00000010;
      }
      start_bone_index = start_bone_index + 1;
      this_ptr = (CDeformableModelInstance *)&(this_ptr->motion_controller).current_motion_index;
    } while (start_bone_index < this_ptr_00->bone_count);
  }
  return;
}


// Assembly code:
// 005a00f0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_005a00f0
// 005a00f1: PUSH ESI
// 005a00f2: PUSH EDI
// 005a00f3: PUSH EBP
// 005a00f4: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a00f8: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005a00fc: PUSH ESI
// 005a00fd: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 005a0102: XOR EBX,EBX
// 005a0104: ADD ESP,0x4
// 005a0107: MOV EDX,dword ptr [EAX + 0x28558]
// 005a010d: MOV EDI,EAX
// 005a010f: TEST EDX,EDX
// 005a0111: JLE 0x005a0140
//   XREF to: 005a0140 (CONDITIONAL_JUMP)
// 005a0113: PUSH EBP
//   Label: LAB_005a0113
// 005a0114: PUSH EBX
// 005a0115: PUSH EDI
// 005a0116: CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
//   XREF to: 0059a100 (UNCONDITIONAL_CALL)
// 005a011b: ADD ESP,0xc
// 005a011e: TEST EAX,EAX
// 005a0120: JL 0x005a0132
//   XREF to: 005a0132 (CONDITIONAL_JUMP)
// 005a0122: FLD float ptr [ESI + 0xcf0]
// 005a0128: FMUL float ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a012c: FSTP float ptr [ESI + 0xcf0]
// 005a0132: INC EBX
//   Label: LAB_005a0132
// 005a0133: MOV ECX,dword ptr [EDI + 0x28558]
// 005a0139: ADD ESI,0x4
// 005a013c: CMP EBX,ECX
// 005a013e: JL 0x005a0113
//   XREF to: 005a0113 (CONDITIONAL_JUMP)
// 005a0140: POP EBP
//   Label: LAB_005a0140
// 005a0141: POP EDI
// 005a0142: POP ESI
// 005a0143: POP EBX
// 005a0144: RET
