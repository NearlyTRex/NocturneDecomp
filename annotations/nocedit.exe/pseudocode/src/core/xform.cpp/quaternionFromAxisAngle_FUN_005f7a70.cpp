// Name: core_xform.cpp_quaternionFromAxisAngle_FUN_005f7a70
// Address: 005f7a70
// Address Range: [[005f7a70, 005f7ab9]]
// Convention: __cdecl
// Signature: void core_xform.cpp_quaternionFromAxisAngle_FUN_005f7a70(CQuaternion4f * quat_ptr, float angle_radians, CVector3f * axis_ptr)
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 (0059ff20) at 005a0032 [UNCONDITIONAL_CALL]
// Globals:
//   double g_QuaternionHalfAngleFactor4 = 0.5

#include "nocturne.h"

void __cdecl
core_xform_cpp_quaternionFromAxisAngle_FUN_005f7a70
          (CQuaternion4f *quat_ptr,float angle_radians,CVector3f *axis_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *unaff_ESI;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)fsin((float10)(float)quat_ptr * (float10)g_QuaternionHalfAngleFactor4);
  fVar5 = (float10)fcos((float10)(float)quat_ptr * (float10)g_QuaternionHalfAngleFactor4);
  fVar1 = *(float *)angle_radians;
  fVar2 = *(float *)((int)angle_radians + 4);
  fVar3 = *(float *)((int)angle_radians + 8);
  *unaff_ESI = (float)fVar5;
  unaff_ESI[1] = (float)((float10)fVar1 * fVar4);
  unaff_ESI[2] = (float)((float10)fVar2 * fVar4);
  unaff_ESI[3] = (float)((float10)fVar3 * fVar4);
  return;
}


// Assembly code:
// 005f7a70: PUSH EDI
//   Label: core_xform.cpp_quaternionFromAxisAngle_FUN_005f7a70
// 005f7a71: SUB ESP,0x20
// 005f7a74: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 005f7a78: MOV EDX,ESI
// 005f7a7a: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005f7a7e: FMUL double ptr [0x0065841d]
//   XREF to: 0065841d (READ)
// 005f7a84: FLD ST0
// 005f7a86: FSIN
// 005f7a88: FXCH
// 005f7a8a: FCOS
// 005f7a8c: FLD float ptr [ECX]
// 005f7a8e: FMUL ST2
// 005f7a90: FLD float ptr [ECX + 0x4]
// 005f7a93: FMUL ST3
// 005f7a95: FLD float ptr [ECX + 0x8]
// 005f7a98: FMULP ST4
// 005f7a9a: MOV EDI,ESI
// 005f7a9c: MOV ESI,ESP
// 005f7a9e: FXCH ST2
// 005f7aa0: FSTP float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 005f7aa3: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (WRITE)
// 005f7aa7: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (WRITE)
// 005f7aab: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (WRITE)
// 005f7aaf: MOVSD ES:EDI,ESI
// 005f7ab0: MOVSD ES:EDI,ESI
// 005f7ab1: MOVSD ES:EDI,ESI
// 005f7ab2: MOVSD ES:EDI,ESI
// 005f7ab3: MOV EAX,EDX
// 005f7ab5: ADD ESP,0x20
// 005f7ab8: POP EDI
// 005f7ab9: RET
