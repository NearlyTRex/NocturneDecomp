// Name: core_box.cpp_CBox_setupVelocities_FUN_00420180
// Address: 00420180
// Address Range: [[00420180, 004201fe]]
// Convention: __cdecl
// Signature: void core_box.cpp_CBox_setupVelocities_FUN_00420180(CBox * this_ptr, CVector3f * linear_velocity, CVector3f * angular_velocity)
// Cross-references:
//   core_bodypart.cpp_CBodyPart_onDropped_FUN_00419fd0 (00419fd0) at 0041a023 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_004224f0 (004224f0) at 00422539 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CToss_create_FUN_004c3ee0 (004c3ee0) at 004c3fd1 [UNCONDITIONAL_CALL]
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030

#include "nocturne.h"

void __cdecl
core_box_cpp_CBox_setupVelocities_FUN_00420180
          (CBox *this_ptr,CVector3f *linear_velocity,CVector3f *angular_velocity)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  CVector3f local_14;
  
  if (linear_velocity != (CVector3f *)0x0) {
    if (&this_ptr->linear_velocity != linear_velocity) {
      (this_ptr->linear_velocity).x = linear_velocity->x;
      (this_ptr->linear_velocity).y = linear_velocity->y;
      (this_ptr->linear_velocity).z = linear_velocity->z;
    }
    pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       (&this_ptr->rotation_matrix,&local_14,&this_ptr->linear_velocity);
    if (&this_ptr->linear_velocity_local != pCVar1) {
      (this_ptr->linear_velocity_local).x = pCVar1->x;
      (this_ptr->linear_velocity_local).y = pCVar1->y;
      (this_ptr->linear_velocity_local).z = pCVar1->z;
    }
  }
  if ((angular_velocity != (CVector3f *)0x0) && (&this_ptr->angular_velocity != angular_velocity)) {
    (this_ptr->angular_velocity).x = angular_velocity->x;
    (this_ptr->angular_velocity).y = angular_velocity->y;
    (this_ptr->angular_velocity).z = angular_velocity->z;
    return;
  }
  return;
}


// Assembly code:
// 00420180: PUSH EBX
//   Label: core_box.cpp_CBox_setupVelocities_FUN_00420180
// 00420181: PUSH ESI
// 00420182: SUB ESP,0xc
// 00420185: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00420189: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0042018d: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00420191: TEST EDX,EDX
// 00420193: JZ 0x004201d8
//   XREF to: 004201d8 (CONDITIONAL_JUMP)
// 00420195: LEA EAX,[EBX + 0x40]
// 00420198: CMP EAX,EDX
// 0042019a: JZ 0x004201ac
//   XREF to: 004201ac (CONDITIONAL_JUMP)
// 0042019c: MOV ECX,dword ptr [EDX]
// 0042019e: MOV dword ptr [EAX],ECX
// 004201a0: MOV ECX,dword ptr [EDX + 0x4]
// 004201a3: MOV dword ptr [EAX + 0x4],ECX
// 004201a6: MOV ECX,dword ptr [EDX + 0x8]
// 004201a9: MOV dword ptr [EAX + 0x8],ECX
// 004201ac: LEA EAX,[EBX + 0x40]
//   Label: LAB_004201ac
// 004201af: PUSH EAX
// 004201b0: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x14] (DATA)
// 004201b4: PUSH EAX
// 004201b5: LEA EAX,[EBX + 0x18]
// 004201b8: PUSH EAX
// 004201b9: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 004201be: LEA EDX,[EBX + 0x4c]
// 004201c1: ADD ESP,0xc
// 004201c4: CMP EDX,EAX
// 004201c6: JZ 0x004201d8
//   XREF to: 004201d8 (CONDITIONAL_JUMP)
// 004201c8: MOV ECX,dword ptr [EAX]
// 004201ca: MOV dword ptr [EDX],ECX
// 004201cc: MOV ECX,dword ptr [EAX + 0x4]
// 004201cf: MOV dword ptr [EDX + 0x4],ECX
// 004201d2: MOV ECX,dword ptr [EAX + 0x8]
// 004201d5: MOV dword ptr [EDX + 0x8],ECX
// 004201d8: TEST ESI,ESI
//   Label: LAB_004201d8
// 004201da: JZ 0x004201e3
//   XREF to: 004201e3 (CONDITIONAL_JUMP)
// 004201dc: LEA EAX,[EBX + 0x70]
// 004201df: CMP EAX,ESI
// 004201e1: JNZ 0x004201e9
//   XREF to: 004201e9 (CONDITIONAL_JUMP)
// 004201e3: ADD ESP,0xc
//   Label: LAB_004201e3
// 004201e6: POP ESI
// 004201e7: POP EBX
// 004201e8: RET
// 004201e9: MOV EDX,dword ptr [ESI]
//   Label: LAB_004201e9
// 004201eb: MOV dword ptr [EAX],EDX
// 004201ed: MOV EDX,dword ptr [ESI + 0x4]
// 004201f0: MOV dword ptr [EAX + 0x4],EDX
// 004201f3: MOV EDX,dword ptr [ESI + 0x8]
// 004201f6: MOV dword ptr [EAX + 0x8],EDX
// 004201f9: ADD ESP,0xc
// 004201fc: POP ESI
// 004201fd: POP EBX
// 004201fe: RET
