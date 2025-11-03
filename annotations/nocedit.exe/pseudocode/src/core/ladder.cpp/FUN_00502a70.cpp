// Name: core_ladder.cpp_FUN_00502a70
// Address: 00502a70
// Address Range: [[00502a70, 00502b74]]
// Convention: unknown
// Signature: undefined core_ladder.cpp_FUN_00502a70()
// Cross-references:
//   core_ladder.cpp_FUN_00502610 (00502610) at 00502615 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10

#include "nocturne.h"

/* Signature: undefined1 actors_other_ladder.cpp_FUN_00502a70(undefined4 param_1) */

void core_ladder_cpp_FUN_00502a70(void)

{
  float fVar1;
  CVector3f *pCVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  CDemonActor *in_stack_00000004;
  CMatrix3x4f *in_stack_ffffff24;
  undefined1 auStack_d4 [48];
  CMatrix3x4f CStack_a4;
  undefined4 uStack_74;
  CVector3f local_70;
  float fStack_64;
  float fStack_54;
  float fStack_44;
  undefined4 auStack_40 [12];
  float local_10;
  float fStack_c;
  float fStack_8;
  
  bVar6 = 0;
  if (in_stack_00000004[2].orient.pitch == 0.0) {
    return;
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)&stack0xffffff24,(CVector3f *)&in_stack_00000004[2].orient.bank,
             (CVector3f *)&in_stack_00000004[2].orient_matrix.m[0].y);
  fVar1 = in_stack_00000004[2].orient.pitch;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)(auStack_d4 + 0x2c),(CVector3f *)((int)fVar1 + 0x20),
             (CVector3f *)((int)fVar1 + 0x30));
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)auStack_d4,&CStack_a4,in_stack_ffffff24);
  puVar4 = auStack_40;
  puVar5 = &uStack_74;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  local_10 = fStack_64;
  fStack_c = fStack_54;
  fStack_8 = fStack_44;
  (in_stack_00000004->location).position.x = fStack_64;
  (in_stack_00000004->location).position.y = fStack_54;
  (in_stack_00000004->location).position.z = fStack_44;
  pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                     (&local_70,(CMatrix3x3f *)&stack0xfffffffc);
  if (&in_stack_00000004->orient != (COrientation *)pCVar2) {
    (in_stack_00000004->orient).pitch = pCVar2->x;
    (in_stack_00000004->orient).bank = pCVar2->y;
    (in_stack_00000004->orient).heading = pCVar2->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
  return;
}


// Assembly code:
// 00502a70: PUSH EBX
//   Label: core_ladder.cpp_FUN_00502a70
// 00502a71: SUB ESP,0xd8
// 00502a77: MOV EBX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[0x4] (READ)
// 00502a7e: CMP dword ptr [EBX + 0x2e0],0x0
// 00502a85: JNZ 0x00502a8f
//   XREF to: 00502a8f (CONDITIONAL_JUMP)
// 00502a87: ADD ESP,0xd8
// 00502a8d: POP EBX
// 00502a8e: RET
// 00502a8f: PUSH EDI
//   Label: LAB_00502a8f
// 00502a90: PUSH ESI
// 00502a91: LEA EAX,[EBX + 0x2f0]
// 00502a97: PUSH EAX
// 00502a98: LEA EAX,[EBX + 0x2e4]
// 00502a9e: PUSH EAX
// 00502a9f: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0xdc] (DATA)
// 00502aa3: PUSH EAX
// 00502aa4: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 00502aa9: MOV EAX,dword ptr [EBX + 0x2e0]
// 00502aaf: ADD ESP,0xc
// 00502ab2: LEA EDX,[EAX + 0x30]
// 00502ab5: PUSH EDX
// 00502ab6: ADD EAX,0x20
// 00502ab9: PUSH EAX
// 00502aba: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0xac] (DATA)
// 00502abe: PUSH EAX
// 00502abf: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 00502ac4: ADD ESP,0xc
// 00502ac7: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0xac] (DATA)
// 00502acb: PUSH EAX
// 00502acc: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xdc] (DATA)
// 00502ad0: PUSH EAX
// 00502ad1: LEA ESI,[ESP + 0xa0]
//   XREF to: Stack[-0x4c] (DATA)
// 00502ad8: LEA EDI,[ESP + 0x70]
//   XREF to: Stack[-0x7c] (DATA)
// 00502adc: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 00502ae1: MOV ECX,0xc
// 00502ae6: LEA ESI,[ESP + 0xa0]
//   XREF to: Stack[-0x4c] (DATA)
// 00502aed: ADD ESP,0x8
// 00502af0: MOVSD.REP ES:EDI,ESI
// 00502af2: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x70] (READ)
// 00502af6: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00502afd: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x60] (READ)
// 00502b04: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00502b0b: MOV EAX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x50] (READ)
// 00502b12: LEA EDX,[EBX + 0x20]
// 00502b15: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00502b1c: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x70] (READ)
// 00502b20: MOV dword ptr [EDX],EAX
// 00502b22: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x18] (READ)
// 00502b29: MOV dword ptr [EDX + 0x4],EAX
// 00502b2c: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x14] (READ)
// 00502b33: MOV dword ptr [EDX + 0x8],EAX
// 00502b36: LEA EAX,[ESP + 0xd4]
//   XREF to: Stack[-0x10] (DATA)
// 00502b3d: PUSH EAX
// 00502b3e: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x7c] (DATA)
// 00502b42: PUSH EAX
// 00502b43: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 00502b48: LEA EDX,[EBX + 0x30]
// 00502b4b: ADD ESP,0x8
// 00502b4e: CMP EDX,EAX
// 00502b50: JZ 0x00502b62
//   XREF to: 00502b62 (CONDITIONAL_JUMP)
// 00502b52: MOV ECX,dword ptr [EAX]
// 00502b54: MOV dword ptr [EDX],ECX
// 00502b56: MOV ECX,dword ptr [EAX + 0x4]
// 00502b59: MOV dword ptr [EDX + 0x4],ECX
// 00502b5c: MOV ECX,dword ptr [EAX + 0x8]
// 00502b5f: MOV dword ptr [EDX + 0x8],ECX
// 00502b62: PUSH EBX
//   Label: LAB_00502b62
// 00502b63: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 00502b68: ADD ESP,0x4
// 00502b6b: POP ESI
// 00502b6c: POP EDI
// 00502b6d: ADD ESP,0xd8
// 00502b73: POP EBX
// 00502b74: RET
