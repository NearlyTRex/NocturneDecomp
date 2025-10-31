// Name: core_mirror.cpp_applyMirrorTransform_FUN_005222f0
// Address: 005222f0
// Address Range: [[005222f0, 0052230e]]
// Convention: __cdecl
// Signature: CVector3f * core_mirror.cpp_applyMirrorTransform_FUN_005222f0(SMirrorReflection * reflection, CVector3f * output_buffer, CVector3f * input_vector)
// Cross-references:
//   core_mirror.cpp_transformMirrorEdgeToIntegerSpace_FUN_00522a50 (00522a50) at 00522b0b [UNCONDITIONAL_CALL]
//   core_mirror.cpp_transformMirrorVertex_FUN_005229b0 (005229b0) at 005229ed [UNCONDITIONAL_CALL]
// Function calls:
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0

#include "nocturne.h"

CVector3f * __cdecl
core_mirror_cpp_applyMirrorTransform_FUN_005222f0
          (SMirrorReflection *reflection,CVector3f *output_buffer,CVector3f *input_vector)

{
  core_xform_cpp_transformVector3x4_FUN_005f4dc0
            (output_buffer,input_vector,&reflection->mirror_transform_matrix);
  return output_buffer;
}


// Assembly code:
// 005222f0: PUSH EBX
//   Label: core_mirror.cpp_applyMirrorTransform_FUN_005222f0
// 005222f1: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005222f5: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005222f9: ADD EAX,0x30
// 005222fc: PUSH EAX
// 005222fd: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 00522301: PUSH EDX
// 00522302: PUSH EBX
// 00522303: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 00522308: ADD ESP,0xc
// 0052230b: MOV EAX,EBX
// 0052230d: POP EBX
// 0052230e: RET
