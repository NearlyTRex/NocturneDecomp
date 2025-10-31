// Name: core_xform.cpp_eulerToQuaternionIndirect_FUN_005f7b70
// Address: 005f7b70
// Address Range: [[005f7b70, 005f7bb8]]
// Convention: __cdecl
// Signature: CQuaternion4f * core_xform.cpp_eulerToQuaternionIndirect_FUN_005f7b70(CQuaternion4f * quat_out, CVector3f * euler_angles)
// Function calls:
//   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   core_xform.cpp_matrixToQuaternion_FUN_005f7420

#include "nocturne.h"

CQuaternion4f * __cdecl
core_xform_cpp_eulerToQuaternionIndirect_FUN_005f7b70
          (CQuaternion4f *quat_out,CVector3f *euler_angles)

{
  BADSPACEBASE *in_ESP;
  CQuaternion4f *unaff_ESI;
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  float afStackY_1804 [1512];
  CMatrix3x3f *in_stack_ffffffac;
  float local_28;
  CVector3f local_18;
  
  bVar3 = 0;
  local_18.x = 0.0;
  local_18.y = 0.0;
  local_18.z = 0.0;
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            ((CMatrix3x4f *)&stack0xffffffa8,&local_18,(CVector3f *)quat_out);
  core_xform_cpp_matrixToQuaternion_FUN_005f7420
            ((CQuaternion4f *)&stack0xffffffa8,in_stack_ffffffac);
  puVar1 = (undefined4 *)((int)unaff_ESI + (uint)bVar3 * -8 + 4);
  unaff_ESI->w = local_28;
  puVar2 = puVar1 + (uint)bVar3 * -2 + 1;
  *puVar1 = *(undefined4 *)(&stack0xffffffdc + (uint)bVar3 * -8);
  *puVar2 = *(undefined4 *)(&stack0xffffffe0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  puVar2[(uint)bVar3 * -2 + 1] =
       *(undefined4 *)
        ((int)(&stack0xffffffe0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
  ;
  return unaff_ESI;
}


// Assembly code:
// 005f7b70: PUSH EBX
//   Label: core_xform.cpp_eulerToQuaternionIndirect_FUN_005f7b70
// 005f7b71: PUSH EDI
// 005f7b72: PUSH EBP
// 005f7b73: MOV EBP,ESP
// 005f7b75: SUB ESP,0x4c
// 005f7b78: MOV EBX,ESI
// 005f7b7a: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005f7b7d: PUSH EDX
// 005f7b7e: LEA ESI,[EBP + -0xc]
//   XREF to: Stack[-0x18] (DATA)
// 005f7b81: XOR ECX,ECX
// 005f7b83: PUSH ESI
// 005f7b84: LEA ESI,[EBP + -0x4c]
//   XREF to: Stack[-0x58] (DATA)
// 005f7b87: MOV dword ptr [EBP + -0xc],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005f7b8a: PUSH ESI
// 005f7b8b: MOV dword ptr [EBP + -0x8],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005f7b8e: MOV dword ptr [EBP + -0x4],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 005f7b91: CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   XREF to: 005f5390 (UNCONDITIONAL_CALL)
// 005f7b96: ADD ESP,0xc
// 005f7b99: LEA ESI,[EBP + -0x4c]
//   XREF to: Stack[-0x58] (DATA)
// 005f7b9c: PUSH ESI
// 005f7b9d: LEA ESI,[EBP + -0x1c]
//   XREF to: Stack[-0x28] (DATA)
// 005f7ba0: MOV EDI,EBX
// 005f7ba2: CALL core_xform.cpp_matrixToQuaternion_FUN_005f7420
//   XREF to: 005f7420 (UNCONDITIONAL_CALL)
// 005f7ba7: LEA ESI,[EBP + -0x1c]
//   XREF to: Stack[-0x28] (DATA)
// 005f7baa: ADD ESP,0x4
// 005f7bad: MOVSD ES:EDI,ESI
// 005f7bae: MOVSD ES:EDI,ESI
// 005f7baf: MOVSD ES:EDI,ESI
// 005f7bb0: MOVSD ES:EDI,ESI
// 005f7bb1: MOV EAX,EBX
// 005f7bb3: MOV ESP,EBP
// 005f7bb5: POP EBP
// 005f7bb6: POP EDI
// 005f7bb7: POP EBX
// 005f7bb8: RET
