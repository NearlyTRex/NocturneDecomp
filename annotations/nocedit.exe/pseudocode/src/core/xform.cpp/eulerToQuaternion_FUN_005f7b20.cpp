// Name: core_xform.cpp_eulerToQuaternion_FUN_005f7b20
// Address: 005f7b20
// Address Range: [[005f7b20, 005f7b68]]
// Convention: __cdecl
// Signature: CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_005f7b20(CQuaternion4f * quat_out, CVector3f * euler_angles)
// Cross-references:
//   core_baron.cpp_CBaron_process_FUN_00412e80 (00412e80) at 004130f9 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041d8a0 (0041d8a0) at 0041d8d5 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_0043fa00 (0043fa00) at 0043fc64 [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_FUN_00441d60 (00441d60) at 00441d9b [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 (00443040) at 00443585 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4d80 (004d4d80) at 004d4dcb [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f0e40 (004f0e40) at 004f10b6 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f838e [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054c850 (0054c850) at 0054c92f [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054ea00 (0054ea00) at 0054eb07 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005571f0 (005571f0) at 00557578 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005be520 (005be520) at 005be809 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 (005d8ba0) at 005d8e7b [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_process_FUN_005e2430 (005e2430) at 005e2792 [UNCONDITIONAL_CALL]
// Function calls:
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_matrixToQuaternion_FUN_005f7420

#include "nocturne.h"

CQuaternion4f * __cdecl
core_xform_cpp_eulerToQuaternion_FUN_005f7b20(CQuaternion4f *quat_out,CVector3f *euler_angles)

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
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
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
// 005f7b20: PUSH EBX
//   Label: core_xform.cpp_eulerToQuaternion_FUN_005f7b20
// 005f7b21: PUSH EDI
// 005f7b22: PUSH EBP
// 005f7b23: MOV EBP,ESP
// 005f7b25: SUB ESP,0x4c
// 005f7b28: MOV EBX,ESI
// 005f7b2a: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005f7b2d: PUSH EDX
// 005f7b2e: LEA ESI,[EBP + -0xc]
//   XREF to: Stack[-0x18] (DATA)
// 005f7b31: XOR ECX,ECX
// 005f7b33: PUSH ESI
// 005f7b34: LEA ESI,[EBP + -0x4c]
//   XREF to: Stack[-0x58] (DATA)
// 005f7b37: MOV dword ptr [EBP + -0xc],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005f7b3a: PUSH ESI
// 005f7b3b: MOV dword ptr [EBP + -0x8],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005f7b3e: MOV dword ptr [EBP + -0x4],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 005f7b41: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005f7b46: ADD ESP,0xc
// 005f7b49: LEA ESI,[EBP + -0x4c]
//   XREF to: Stack[-0x58] (DATA)
// 005f7b4c: PUSH ESI
// 005f7b4d: LEA ESI,[EBP + -0x1c]
//   XREF to: Stack[-0x28] (DATA)
// 005f7b50: MOV EDI,EBX
// 005f7b52: CALL core_xform.cpp_matrixToQuaternion_FUN_005f7420
//   XREF to: 005f7420 (UNCONDITIONAL_CALL)
// 005f7b57: LEA ESI,[EBP + -0x1c]
//   XREF to: Stack[-0x28] (DATA)
// 005f7b5a: ADD ESP,0x4
// 005f7b5d: MOVSD ES:EDI,ESI
// 005f7b5e: MOVSD ES:EDI,ESI
// 005f7b5f: MOVSD ES:EDI,ESI
// 005f7b60: MOVSD ES:EDI,ESI
// 005f7b61: MOV EAX,EBX
// 005f7b63: MOV ESP,EBP
// 005f7b65: POP EBP
// 005f7b66: POP EDI
// 005f7b67: POP EBX
// 005f7b68: RET
