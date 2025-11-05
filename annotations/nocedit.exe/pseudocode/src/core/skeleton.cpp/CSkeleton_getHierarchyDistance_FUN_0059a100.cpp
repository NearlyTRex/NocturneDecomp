// Name: core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
// Address: 0059a100
// Address Range: [[0059a100, 0059a136]]
// Convention: __cdecl
// Signature: int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 (0059ff20) at 0059ff92 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750 (0059f750) at 0059f7a8 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 (0059eb50) at 0059ef33 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260 (0059f260) at 0059f582 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_copyBoneRotations_FUN_0059f6e0 (0059f6e0) at 0059f70e [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_005a00f0 (005a00f0) at 005a0116 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0 (0059e0a0) at 0059e682 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl
core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
          (CSkeleton *this_ptr,int start_bone_index,int target_bone_index)

{
  int iVar1;
  
  iVar1 = 0;
  if (start_bone_index != target_bone_index) {
    do {
      start_bone_index = this_ptr->bone_list[start_bone_index].parent_index;
      iVar1 = iVar1 + 1;
      if (start_bone_index < 0) {
        if (target_bone_index < 0) {
          return iVar1;
        }
        return -1;
      }
    } while (start_bone_index != target_bone_index);
  }
  return iVar1;
}


// Assembly code:
// 0059a100: PUSH EBX
//   Label: core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
// 0059a101: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0059a105: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0059a109: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0059a10d: XOR EDX,EDX
// 0059a10f: CMP EAX,ECX
// 0059a111: JZ 0x0059a126
//   XREF to: 0059a126 (CONDITIONAL_JUMP)
// 0059a113: IMUL EAX,EAX,0x24
//   Label: LAB_0059a113
// 0059a116: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x2857c]
// 0059a11d: INC EDX
// 0059a11e: TEST EAX,EAX
// 0059a120: JL 0x0059a12a
//   XREF to: 0059a12a (CONDITIONAL_JUMP)
// 0059a122: CMP EAX,ECX
// 0059a124: JNZ 0x0059a113
//   XREF to: 0059a113 (CONDITIONAL_JUMP)
// 0059a126: MOV EAX,EDX
//   Label: LAB_0059a126
// 0059a128: POP EBX
// 0059a129: RET
// 0059a12a: TEST ECX,ECX
//   Label: LAB_0059a12a
// 0059a12c: JL 0x0059a126
//   XREF to: 0059a126 (CONDITIONAL_JUMP)
// 0059a12e: MOV EDX,0xffffffff
// 0059a133: MOV EAX,EDX
// 0059a135: POP EBX
// 0059a136: RET
