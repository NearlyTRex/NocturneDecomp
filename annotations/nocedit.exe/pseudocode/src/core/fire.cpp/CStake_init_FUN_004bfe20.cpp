// Name: core_fire.cpp_CStake_init_FUN_004bfe20
// Address: 004bfe20
// Address Range: [[004bfe20, 004bfe80]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CStake_init_FUN_004bfe20(CStake * this_ptr, CVector3f * position, CVector3f * orientation)
// Cross-references:
//   core_fire.cpp_CFireEffect_createStake_FUN_004c7bb0 (004c7bb0) at 004c7cde [UNCONDITIONAL_CALL]
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30

#include "nocturne.h"

void __cdecl
core_fire_cpp_CStake_init_FUN_004bfe20(CStake *this_ptr,CVector3f *position,CVector3f *orientation)

{
  CVector3f *pCVar1;
  
  if (&this_ptr->box != (CBox *)position) {
    (this_ptr->box).position.x = position->x;
    (this_ptr->box).position.y = position->y;
    (this_ptr->box).position.z = position->z;
  }
  pCVar1 = &(this_ptr->box).orientation;
  if (pCVar1 != orientation) {
    pCVar1->x = orientation->x;
    (this_ptr->box).orientation.y = orientation->y;
    (this_ptr->box).orientation.z = orientation->z;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&(this_ptr->box).rotation_matrix,&(this_ptr->box).orientation);
  this_ptr->active = 0;
  (this_ptr->box).is_valid = 0;
  return;
}


// Assembly code:
// 004bfe20: PUSH EBX
//   Label: core_fire.cpp_CStake_init_FUN_004bfe20
// 004bfe21: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004bfe25: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004bfe29: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004bfe2d: LEA EAX,[EBX + 0x4]
// 004bfe30: CMP EAX,EDX
// 004bfe32: JNZ 0x004bfe6d
//   XREF to: 004bfe6d (CONDITIONAL_JUMP)
// 004bfe34: LEA EAX,[EBX + 0x10]
//   Label: LAB_004bfe34
// 004bfe37: CMP EAX,ECX
// 004bfe39: JZ 0x004bfe4b
//   XREF to: 004bfe4b (CONDITIONAL_JUMP)
// 004bfe3b: MOV EDX,dword ptr [ECX]
// 004bfe3d: MOV dword ptr [EAX],EDX
// 004bfe3f: MOV EDX,dword ptr [ECX + 0x4]
// 004bfe42: MOV dword ptr [EAX + 0x4],EDX
// 004bfe45: MOV EDX,dword ptr [ECX + 0x8]
// 004bfe48: MOV dword ptr [EAX + 0x8],EDX
// 004bfe4b: LEA EAX,[EBX + 0x10]
//   Label: LAB_004bfe4b
// 004bfe4e: PUSH EAX
// 004bfe4f: LEA EAX,[EBX + 0x1c]
// 004bfe52: PUSH EAX
// 004bfe53: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 004bfe58: MOV dword ptr [EBX],0x0
// 004bfe5e: ADD ESP,0x8
// 004bfe61: MOV dword ptr [EBX + 0x258],0x0
// 004bfe6b: POP EBX
// 004bfe6c: RET
// 004bfe6d: PUSH ESI
//   Label: LAB_004bfe6d
// 004bfe6e: MOV ESI,dword ptr [EDX]
// 004bfe70: MOV dword ptr [EAX],ESI
// 004bfe72: MOV ESI,dword ptr [EDX + 0x4]
// 004bfe75: MOV dword ptr [EAX + 0x4],ESI
// 004bfe78: MOV ESI,dword ptr [EDX + 0x8]
// 004bfe7b: MOV dword ptr [EAX + 0x8],ESI
// 004bfe7e: POP ESI
// 004bfe7f: JMP 0x004bfe34
//   XREF to: 004bfe34 (UNCONDITIONAL_JUMP)
