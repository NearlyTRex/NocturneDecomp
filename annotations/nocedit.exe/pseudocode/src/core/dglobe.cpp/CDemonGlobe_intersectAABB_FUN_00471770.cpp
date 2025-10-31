// Name: core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_00471770
// Address: 00471770
// Address Range: [[00471770, 00471842]]
// Convention: __cdecl
// Signature: int core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_00471770(CDemonGlobe * this_ptr, CVector3f * reference_position, CMatrix3x3f * rotation_matrix, CVector3f * aabb_min, CVector3f * aabb_max)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056d4a0 (0056d4a0) at 0056d807 [UNCONDITIONAL_CALL]
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030

#include "nocturne.h"

int __cdecl
core_dglobe_cpp_CDemonGlobe_intersectAABB_FUN_00471770
          (CDemonGlobe *this_ptr,CVector3f *reference_position,CMatrix3x3f *rotation_matrix,
          CVector3f *aabb_min,CVector3f *aabb_max)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  undefined1 local_24 [8];
  float local_1c;
  CVector3f local_18;
  
  local_24._0_4_ = (this_ptr->position).x - reference_position->x;
  local_24._4_4_ = (this_ptr->position).y - reference_position->y;
  local_1c = (this_ptr->position).z - reference_position->z;
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                     (rotation_matrix,&local_18,(CVector3f *)local_24);
  if ((CVector3f *)(local_24 + 4) != pCVar1) {
    local_24._4_4_ = pCVar1->x;
    local_1c = pCVar1->y;
    local_18.x = pCVar1->z;
  }
  if ((((aabb_min->x <= (float)local_24._4_4_ + this_ptr->radius) &&
       (aabb_min->y <= local_1c + this_ptr->radius)) &&
      (aabb_min->z <= local_18.x + this_ptr->radius)) &&
     ((((float)local_24._4_4_ - this_ptr->radius <= aabb_max->x &&
       (local_1c - this_ptr->radius <= aabb_max->y)) &&
      (local_18.x - this_ptr->radius <= aabb_max->z)))) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 00471770: PUSH EBX
//   Label: core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_00471770
// 00471771: PUSH ESI
// 00471772: PUSH EDI
// 00471773: SUB ESP,0x18
// 00471776: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0047177a: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 0047177e: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x10] (READ)
// 00471782: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x14] (READ)
// 00471786: LEA EAX,[EBX + 0x24]
// 00471789: FLD float ptr [EAX]
// 0047178b: FSUB float ptr [EDX]
// 0047178d: FSTP float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00471790: FLD float ptr [EAX + 0x4]
// 00471793: FSUB float ptr [EDX + 0x4]
// 00471796: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (WRITE)
// 0047179a: FLD float ptr [EAX + 0x8]
// 0047179d: MOV EAX,ESP
// 0047179f: PUSH EAX
// 004717a0: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x18] (DATA)
// 004717a4: PUSH EAX
// 004717a5: FSUB float ptr [EDX + 0x8]
// 004717a8: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 004717ac: PUSH EDX
// 004717ad: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (WRITE)
// 004717b1: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 004717b6: MOV EDX,EAX
// 004717b8: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x24] (DATA)
// 004717bc: ADD ESP,0xc
// 004717bf: CMP EAX,EDX
// 004717c1: JNZ 0x00471822
//   XREF to: 00471822 (CONDITIONAL_JUMP)
// 004717c3: FLD float ptr [ESP]
//   Label: LAB_004717c3
//   XREF to: Stack[-0x24] (DATA)
// 004717c6: FADD float ptr [EBX + 0x30]
// 004717c9: FCOMP float ptr [ESI]
// 004717cb: FNSTSW AX
// 004717cd: SAHF
// 004717ce: JC 0x00471819
//   XREF to: 00471819 (CONDITIONAL_JUMP)
// 004717d0: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 004717d4: FADD float ptr [EBX + 0x30]
// 004717d7: FCOMP float ptr [ESI + 0x4]
// 004717da: FNSTSW AX
// 004717dc: SAHF
// 004717dd: JC 0x00471819
//   XREF to: 00471819 (CONDITIONAL_JUMP)
// 004717df: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 004717e3: FADD float ptr [EBX + 0x30]
// 004717e6: FCOMP float ptr [ESI + 0x8]
// 004717e9: FNSTSW AX
// 004717eb: SAHF
// 004717ec: JC 0x00471819
//   XREF to: 00471819 (CONDITIONAL_JUMP)
// 004717ee: FLD float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 004717f1: FSUB float ptr [EBX + 0x30]
// 004717f4: FCOMP float ptr [EDI]
// 004717f6: FNSTSW AX
// 004717f8: SAHF
// 004717f9: JA 0x00471819
//   XREF to: 00471819 (CONDITIONAL_JUMP)
// 004717fb: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 004717ff: FSUB float ptr [EBX + 0x30]
// 00471802: FCOMP float ptr [EDI + 0x4]
// 00471805: FNSTSW AX
// 00471807: SAHF
// 00471808: JA 0x00471819
//   XREF to: 00471819 (CONDITIONAL_JUMP)
// 0047180a: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0047180e: FSUB float ptr [EBX + 0x30]
// 00471811: FCOMP float ptr [EDI + 0x8]
// 00471814: FNSTSW AX
// 00471816: SAHF
// 00471817: JBE 0x00471837
//   XREF to: 00471837 (CONDITIONAL_JUMP)
// 00471819: XOR EAX,EAX
//   Label: LAB_00471819
// 0047181b: ADD ESP,0x18
// 0047181e: POP EDI
// 0047181f: POP ESI
// 00471820: POP EBX
// 00471821: RET
// 00471822: MOV EAX,dword ptr [EDX]
//   Label: LAB_00471822
// 00471824: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 00471827: MOV EAX,dword ptr [EDX + 0x4]
// 0047182a: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0047182e: MOV EAX,dword ptr [EDX + 0x8]
// 00471831: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00471835: JMP 0x004717c3
//   XREF to: 004717c3 (UNCONDITIONAL_JUMP)
// 00471837: MOV EAX,0x1
//   Label: LAB_00471837
// 0047183c: ADD ESP,0x18
// 0047183f: POP EDI
// 00471840: POP ESI
// 00471841: POP EBX
// 00471842: RET
