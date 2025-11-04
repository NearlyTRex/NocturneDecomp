// Name: core_bride.cpp_FUN_00424aa0
// Address: 00424aa0
// Address Range: [[00424aa0, 00424b02]]
// Convention: unknown
// Signature: undefined core_bride.cpp_FUN_00424aa0()
// Globals:
//   undefined4 DAT_00822cdc
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_bride.cpp_FUN_00424aa0(undefined4 param_1, undefined4 param_2)
    */

CVector3f * core_bride_cpp_FUN_00424aa0(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  CMatrix3x4f *in_stack_ffffff84;
  undefined4 local_4c [12];
  CVector3f local_1c;
  
  bVar4 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
            ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),DAT_00822cdc,in_stack_ffffff84)
  ;
  puVar2 = local_4c;
  puVar3 = (undefined4 *)&stack0xffffff84;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  local_1c.y = 0.7;
  local_1c.x = 0.0;
  local_1c.z = 0.3;
  core_xform_cpp_transformVector3x4_FUN_005f4dc0
            (in_stack_00000008,&local_1c,(CMatrix3x4f *)&stack0xffffff84);
  return in_stack_00000008;
}


// Assembly code:
// 00424aa0: PUSH EBX
//   Label: core_bride.cpp_FUN_00424aa0
// 00424aa1: PUSH ESI
// 00424aa2: PUSH EDI
// 00424aa3: PUSH EBP
// 00424aa4: MOV EBP,ESP
// 00424aa6: SUB ESP,0x6c
// 00424aa9: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00424aac: MOV EDX,dword ptr [0x00822cdc]
//   XREF to: 00822cdc (READ)
// 00424ab2: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00424ab5: PUSH EDX
// 00424ab6: ADD ESI,0x158
// 00424abc: PUSH ESI
// 00424abd: LEA ESI,[EBP + -0x3c]
//   XREF to: Stack[-0x4c] (DATA)
// 00424ac0: LEA EDI,[EBP + -0x6c]
//   XREF to: Stack[-0x7c] (DATA)
// 00424ac3: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
//   XREF to: 0059f820 (UNCONDITIONAL_CALL)
// 00424ac8: MOV ECX,0xc
// 00424acd: LEA ESI,[EBP + -0x3c]
//   XREF to: Stack[-0x4c] (DATA)
// 00424ad0: MOVSD.REP ES:EDI,ESI
// 00424ad2: ADD ESP,0x8
// 00424ad5: LEA ESI,[EBP + -0x6c]
//   XREF to: Stack[-0x7c] (DATA)
// 00424ad8: PUSH ESI
// 00424ad9: MOV dword ptr [EBP + -0x8],0x3f333333
//   XREF to: Stack[-0x18] (WRITE)
// 00424ae0: LEA ESI,[EBP + -0xc]
//   XREF to: Stack[-0x1c] (DATA)
// 00424ae3: PUSH ESI
// 00424ae4: MOV EDI,0x3e99999a
// 00424ae9: XOR ECX,ECX
// 00424aeb: PUSH EBX
// 00424aec: MOV dword ptr [EBP + -0xc],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00424aef: MOV dword ptr [EBP + -0x4],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 00424af2: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 00424af7: ADD ESP,0xc
// 00424afa: MOV EAX,EBX
// 00424afc: MOV ESP,EBP
// 00424afe: POP EBP
// 00424aff: POP EDI
// 00424b00: POP ESI
// 00424b01: POP EBX
// 00424b02: RET
