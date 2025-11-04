// Name: core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
// Address: 0059a050
// Address Range: [[0059a050, 0059a06e]]
// Convention: __cdecl
// Signature: CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050(CSkeleton * this_ptr, int bone_index, int frame_index)
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0 (0059e0a0) at 0059e6ad [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070 (0059a070) at 0059a0e4 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CQuaternion4f * __cdecl
core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
          (CSkeleton *this_ptr,int bone_index,int frame_index)

{
  return this_ptr->bone_angle_frames + frame_index * this_ptr->bone_count + bone_index;
}


// Assembly code:
// 0059a050: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
//   XREF to: Stack[0x4] (READ)
// 0059a054: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0059a058: IMUL EAX,dword ptr [EDX + 0x28558]
// 0059a05f: ADD EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0059a063: MOV EDX,dword ptr [EDX + 0x29370]
// 0059a069: SHL EAX,0x4
// 0059a06c: ADD EAX,EDX
// 0059a06e: RET
