// Name: core_skeleton.cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_005a0c90
// Address: 005a0c90
// Address Range: [[005a0c90, 005a0d02]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_005a0c90(CDeformableModelInstance * this_ptr, float start_frame, float end_frame, float scale_factor)
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_005a0d10

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_005a0c90
          (CDeformableModelInstance *this_ptr,float start_frame,float end_frame,float scale_factor)

{
  float fVar1;
  float fVar2;
  CVector3f *pCVar3;
  BADSPACEBASE *in_ESP;
  float in_stack_00000014;
  CVector3f local_c;
  
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_005a0d10
                     (this_ptr,&local_c,start_frame,end_frame);
  fVar1 = pCVar3->y;
  fVar2 = pCVar3->z;
  *(float *)((int)start_frame + 0x2254) =
       *(float *)((int)start_frame + 0x2254) + pCVar3->x * in_stack_00000014;
  *(float *)((int)start_frame + 0x2258) =
       *(float *)((int)start_frame + 0x2258) + fVar1 * in_stack_00000014;
  *(float *)((int)start_frame + 0x225c) =
       *(float *)((int)start_frame + 0x225c) + in_stack_00000014 * fVar2;
  return;
}


// Assembly code:
// 005a0c90: SUB ESP,0x18
//   Label: core_skeleton.cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_005a0c90
// 005a0c93: PUSH dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 005a0c97: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0xc] (DATA)
// 005a0c9b: PUSH dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 005a0c9f: PUSH EAX
// 005a0ca0: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005a0ca4: PUSH EDX
// 005a0ca5: CALL core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_005a0d10
//   XREF to: 005a0d10 (UNCONDITIONAL_CALL)
// 005a0caa: ADD ESP,0x10
// 005a0cad: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 005a0cb1: FLD float ptr [EAX]
// 005a0cb3: FMUL ST1
// 005a0cb5: FSTP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005a0cb8: FLD float ptr [EAX + 0x4]
// 005a0cbb: FMUL ST1
// 005a0cbd: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 005a0cc1: FMUL float ptr [EAX + 0x8]
// 005a0cc4: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005a0cc8: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (WRITE)
// 005a0ccc: FLD float ptr [EAX + 0x2254]
// 005a0cd2: FADD float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005a0cd5: FLD float ptr [EAX + 0x2258]
// 005a0cdb: FXCH
// 005a0cdd: FSTP float ptr [EAX + 0x2254]
// 005a0ce3: FADD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 005a0ce7: FLD float ptr [EAX + 0x225c]
// 005a0ced: FXCH
// 005a0cef: FSTP float ptr [EAX + 0x2258]
// 005a0cf5: FADD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (READ)
// 005a0cf9: FSTP float ptr [EAX + 0x225c]
// 005a0cff: ADD ESP,0x18
// 005a0d02: RET
