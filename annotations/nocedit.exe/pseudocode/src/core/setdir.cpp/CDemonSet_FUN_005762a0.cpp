// Name: core_setdir.cpp_CDemonSet_FUN_005762a0
// Address: 005762a0
// Address Range: [[005762a0, 00576336]]
// Convention: __cdecl
// Signature: int core_setdir.cpp_CDemonSet_FUN_005762a0(CDemonSet * this_ptr)
// Cross-references:
//   core_setdir.cpp_CDemonSet_FUN_00576340 (00576340) at 00576389 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CDemonSet_FUN_00576870 (00576870) at 0057688a [UNCONDITIONAL_CALL]
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030

#include "nocturne.h"

int __cdecl core_setdir_cpp_CDemonSet_FUN_005762a0(CDemonSet *this_ptr)

{
  SVDBox *pSVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000008;
  float *in_stack_0000000c;
  CVector3f local_20;
  CVector3f local_14;
  
  pSVar1 = this_ptr->vdir_boxes + in_stack_00000008;
  local_14.x = *in_stack_0000000c - (pSVar1->position).x;
  local_14.y = in_stack_0000000c[1] - (pSVar1->position).y;
  local_14.z = in_stack_0000000c[2] - (pSVar1->position).z;
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
            (&pSVar1->rotation_matrix,&local_20,&local_14);
  if (((ABS(local_20.y) <= (pSVar1->extents).x) && (ABS(local_20.z) <= (pSVar1->extents).y)) &&
     (ABS(local_14.x) <= (pSVar1->extents).z)) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 005762a0: PUSH EBX
//   Label: core_setdir.cpp_CDemonSet_FUN_005762a0
// 005762a1: PUSH EBP
// 005762a2: MOV EBP,ESP
// 005762a4: SUB ESP,0x18
// 005762a7: AND ESP,0xfffffff8
// 005762aa: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 005762ad: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005762b0: MOV EAX,EBX
// 005762b2: SHL EAX,0x4
// 005762b5: ADD EAX,EBX
// 005762b7: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005762ba: SHL EAX,0x2
// 005762bd: ADD EBX,0x15b414
// 005762c3: ADD EBX,EAX
// 005762c5: FLD float ptr [EDX]
// 005762c7: FSUB float ptr [EBX]
// 005762c9: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x14] (DATA)
// 005762cd: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (WRITE)
// 005762d1: PUSH EAX
// 005762d2: FLD float ptr [EDX + 0x4]
// 005762d5: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x20] (DATA)
// 005762d9: FSUB float ptr [EBX + 0x4]
// 005762dc: PUSH EAX
// 005762dd: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x10] (WRITE)
// 005762e1: LEA EAX,[EBX + 0x18]
// 005762e4: FLD float ptr [EDX + 0x8]
// 005762e7: FSUB float ptr [EBX + 0x8]
// 005762ea: PUSH EAX
// 005762eb: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0xc] (WRITE)
// 005762ef: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 005762f4: ADD ESP,0xc
// 005762f7: FLD float ptr [EBX + 0xc]
// 005762fa: FLD float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005762fd: FABS
// 005762ff: FCOMPP
// 00576301: FNSTSW AX
// 00576303: SAHF
// 00576304: JA 0x00576326
//   XREF to: 00576326 (CONDITIONAL_JUMP)
// 00576306: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 0057630a: FABS
// 0057630c: FLD float ptr [EBX + 0x10]
// 0057630f: FCOMPP
// 00576311: FNSTSW AX
// 00576313: SAHF
// 00576314: JC 0x00576326
//   XREF to: 00576326 (CONDITIONAL_JUMP)
// 00576316: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 0057631a: FABS
// 0057631c: FLD float ptr [EBX + 0x14]
// 0057631f: FCOMPP
// 00576321: FNSTSW AX
// 00576323: SAHF
// 00576324: JNC 0x0057632d
//   XREF to: 0057632d (CONDITIONAL_JUMP)
// 00576326: XOR EAX,EAX
//   Label: LAB_00576326
// 00576328: MOV ESP,EBP
// 0057632a: POP EBP
// 0057632b: POP EBX
// 0057632c: RET
// 0057632d: MOV EAX,0x1
//   Label: LAB_0057632d
// 00576332: MOV ESP,EBP
// 00576334: POP EBP
// 00576335: POP EBX
// 00576336: RET
