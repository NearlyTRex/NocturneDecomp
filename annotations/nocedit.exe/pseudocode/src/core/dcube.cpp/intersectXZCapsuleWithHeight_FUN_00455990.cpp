// Name: core_dcube.cpp_intersectXZCapsuleWithHeight_FUN_00455990
// Address: 00455990
// Address Range: [[00455990, 00455a2d]]
// Convention: __cdecl
// Signature: int core_dcube.cpp_intersectXZCapsuleWithHeight_FUN_00455990(SIntersectXZCylinder * cylinder, CVector3f * segment_start, CVector3f * segment_end)
// Cross-references:
//   core_dcube.cpp_intersectTriangleWithXZCapsule_FUN_00455a30 (00455a30) at 00455ea3 [UNCONDITIONAL_CALL]
// Function calls:
//   core_dcube.cpp_intersectXZCapsule_FUN_004556b0

#include "nocturne.h"

int __cdecl
core_dcube_cpp_intersectXZCapsuleWithHeight_FUN_00455990
          (SIntersectXZCylinder *cylinder,CVector3f *segment_start,CVector3f *segment_end)

{
  float fVar1;
  int iVar2;
  
  cylinder->edge_x1 = segment_start->x;
  cylinder->edge_z1 = segment_start->z;
  cylinder->edge_x2 = segment_end->x;
  cylinder->edge_z2 = segment_end->z;
  iVar2 = core_dcube_cpp_intersectXZCapsule_FUN_004556b0(cylinder);
  if (iVar2 != 0) {
    fVar1 = (segment_end->y - segment_start->y) * cylinder->param_clamped + segment_start->y;
    if ((cylinder->top_y < fVar1) && (fVar1 < cylinder->bottom_y)) {
      cylinder->flags = 0;
      cylinder->max_distance = cylinder->param_t;
      cylinder->push_x =
           (cylinder->normal_z * cylinder->param_t + cylinder->center_z) - cylinder->intersect_z;
      cylinder->push_z =
           (cylinder->normal_x * cylinder->param_t + cylinder->center_x) - cylinder->intersect_x;
      return 1;
    }
    iVar2 = 0;
  }
  return iVar2;
}


// Assembly code:
// 00455990: PUSH EBX
//   Label: core_dcube.cpp_intersectXZCapsuleWithHeight_FUN_00455990
// 00455991: PUSH ESI
// 00455992: PUSH EDI
// 00455993: SUB ESP,0x4
// 00455996: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045599a: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045599e: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004559a2: FLD float ptr [ESI]
// 004559a4: PUSH EBX
// 004559a5: FSTP float ptr [EBX + 0x3c]
// 004559a8: MOV EAX,dword ptr [ESI + 0x8]
// 004559ab: MOV dword ptr [EBX + 0x40],EAX
// 004559ae: MOV EAX,dword ptr [EDI]
// 004559b0: MOV dword ptr [EBX + 0x44],EAX
// 004559b3: MOV EAX,dword ptr [EDI + 0x8]
// 004559b6: MOV dword ptr [EBX + 0x48],EAX
// 004559b9: CALL core_dcube.cpp_intersectXZCapsule_FUN_004556b0
//   XREF to: 004556b0 (UNCONDITIONAL_CALL)
// 004559be: ADD ESP,0x4
// 004559c1: TEST EAX,EAX
// 004559c3: JZ 0x004559e9
//   XREF to: 004559e9 (CONDITIONAL_JUMP)
// 004559c5: FLD float ptr [EDI + 0x4]
// 004559c8: FSUB float ptr [ESI + 0x4]
// 004559cb: FMUL float ptr [EBX + 0x50]
// 004559ce: FADD float ptr [ESI + 0x4]
// 004559d1: FST float ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 004559d4: FCOMP float ptr [EBX + 0x28]
// 004559d7: FNSTSW AX
// 004559d9: SAHF
// 004559da: JBE 0x004559e7
//   XREF to: 004559e7 (CONDITIONAL_JUMP)
// 004559dc: FLD float ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 004559df: FCOMP float ptr [EBX + 0x24]
// 004559e2: FNSTSW AX
// 004559e4: SAHF
// 004559e5: JC 0x004559f0
//   XREF to: 004559f0 (CONDITIONAL_JUMP)
// 004559e7: XOR EAX,EAX
//   Label: LAB_004559e7
// 004559e9: ADD ESP,0x4
//   Label: LAB_004559e9
// 004559ec: POP EDI
// 004559ed: POP ESI
// 004559ee: POP EBX
// 004559ef: RET
// 004559f0: FLD float ptr [EBX + 0x18]
//   Label: LAB_004559f0
// 004559f3: FMUL float ptr [EBX + 0x4c]
// 004559f6: FLD float ptr [EBX + 0x1c]
// 004559f9: FMUL float ptr [EBX + 0x4c]
// 004559fc: FLD float ptr [EBX + 0x4c]
// 004559ff: MOV dword ptr [EBX + 0x8],0x0
// 00455a06: MOV EAX,0x1
// 00455a0b: FSTP float ptr [EBX]
// 00455a0d: FXCH
// 00455a0f: FADD float ptr [EBX + 0x10]
// 00455a12: FXCH
// 00455a14: FADD float ptr [EBX + 0x14]
// 00455a17: FLD float ptr [EBX + 0x54]
// 00455a1a: FLD float ptr [EBX + 0x58]
// 00455a1d: FSUBP ST2,ST0
// 00455a1f: FSUBP ST2,ST0
// 00455a21: FSTP float ptr [EBX + 0xc]
// 00455a24: FSTP float ptr [EBX + 0x4]
// 00455a27: ADD ESP,0x4
// 00455a2a: POP EDI
// 00455a2b: POP ESI
// 00455a2c: POP EBX
// 00455a2d: RET
