// Name: core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00585970
// Address: 00585970
// Address Range: [[00585970, 00585a36]]
// Convention: __cdecl
// Signature: int core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00585970(C3DSCamera * this_ptr, CVector3f * world_position, float radius)
// Cross-references:
//   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 (005751d0) at 005759d9 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_testCameraVisibility_FUN_005750a0 (005750a0) at 0057511d [UNCONDITIONAL_CALL]
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030

#include "nocturne.h"

int __cdecl
core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_00585970
          (C3DSCamera *this_ptr,CVector3f *world_position,float radius)

{
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  float in_stack_00000010;
  CVector3f local_1c;
  CVector3f local_10;
  
  local_1c.x = world_position->x - (this_ptr->position).x;
  local_1c.y = world_position->y - (this_ptr->position).y;
  local_1c.z = world_position->z - (this_ptr->position).z;
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
            (&this_ptr->rotation_matrix,&local_10,&local_1c);
  if (((((this_ptr->box_min).x <= local_10.y + in_stack_00000010) &&
       ((this_ptr->box_min).y <= local_10.z + in_stack_00000010)) &&
      ((this_ptr->box_min).z <= unaff_EBX + in_stack_00000010)) &&
     (((local_10.y - in_stack_00000010 <= (this_ptr->box_max).x &&
       (local_10.z - in_stack_00000010 <= (this_ptr->box_max).y)) &&
      (unaff_EBX - in_stack_00000010 <= (this_ptr->box_max).z)))) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 00585970: PUSH EBX
//   Label: core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_00585970
// 00585971: SUB ESP,0x18
// 00585974: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00585978: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 0058597c: LEA EAX,[EBX + 0x100]
// 00585982: FLD float ptr [EDX]
// 00585984: FSUB float ptr [EAX]
// 00585986: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00585989: FLD float ptr [EDX + 0x4]
// 0058598c: FSUB float ptr [EAX + 0x4]
// 0058598f: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (WRITE)
// 00585993: FLD float ptr [EDX + 0x8]
// 00585996: FSUB float ptr [EAX + 0x8]
// 00585999: MOV EAX,ESP
// 0058599b: PUSH EAX
// 0058599c: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x10] (DATA)
// 005859a0: PUSH EAX
// 005859a1: LEA EAX,[EBX + 0x118]
// 005859a7: PUSH EAX
// 005859a8: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (WRITE)
// 005859ac: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 005859b1: ADD ESP,0xc
// 005859b4: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x10] (READ)
// 005859b8: FADD float ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 005859bc: FCOMP float ptr [EBX + 0x17c]
// 005859c2: FNSTSW AX
// 005859c4: SAHF
// 005859c5: JC 0x00585a26
//   XREF to: 00585a26 (CONDITIONAL_JUMP)
// 005859c7: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0xc] (READ)
// 005859cb: FADD float ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 005859cf: FCOMP float ptr [EBX + 0x180]
// 005859d5: FNSTSW AX
// 005859d7: SAHF
// 005859d8: JC 0x00585a26
//   XREF to: 00585a26 (CONDITIONAL_JUMP)
// 005859da: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x8] (READ)
// 005859de: FADD float ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 005859e2: FCOMP float ptr [EBX + 0x184]
// 005859e8: FNSTSW AX
// 005859ea: SAHF
// 005859eb: JC 0x00585a26
//   XREF to: 00585a26 (CONDITIONAL_JUMP)
// 005859ed: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x10] (READ)
// 005859f1: FSUB float ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 005859f5: FCOMP float ptr [EBX + 0x188]
// 005859fb: FNSTSW AX
// 005859fd: SAHF
// 005859fe: JA 0x00585a26
//   XREF to: 00585a26 (CONDITIONAL_JUMP)
// 00585a00: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0xc] (READ)
// 00585a04: FSUB float ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 00585a08: FCOMP float ptr [EBX + 0x18c]
// 00585a0e: FNSTSW AX
// 00585a10: SAHF
// 00585a11: JA 0x00585a26
//   XREF to: 00585a26 (CONDITIONAL_JUMP)
// 00585a13: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x8] (READ)
// 00585a17: FSUB float ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 00585a1b: FCOMP float ptr [EBX + 0x190]
// 00585a21: FNSTSW AX
// 00585a23: SAHF
// 00585a24: JBE 0x00585a2d
//   XREF to: 00585a2d (CONDITIONAL_JUMP)
// 00585a26: XOR EAX,EAX
//   Label: LAB_00585a26
// 00585a28: ADD ESP,0x18
// 00585a2b: POP EBX
// 00585a2c: RET
// 00585a2d: MOV EAX,0x1
//   Label: LAB_00585a2d
// 00585a32: ADD ESP,0x18
// 00585a35: POP EBX
// 00585a36: RET
