// Name: core_box.cpp_CBoundingBox3D_clampPoint_FUN_00421550
// Address: 00421550
// Address Range: [[00421550, 004215e1]]
// Convention: __cdecl
// Signature: CVector3f * core_box.cpp_CBoundingBox3D_clampPoint_FUN_00421550(CBoundingBox3D * this_ptr, CVector3f * out_point, CVector3f * in_point)
// Cross-references:
//   core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0 (004215f0) at 00421603 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00422590 (00422590) at 004225dc [UNCONDITIONAL_CALL]
//   core_enemy.cpp_FUN_004a9a50 (004a9a50) at 004a9abb [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054cc30 (0054cc30) at 0054d289 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CVector3f * __cdecl
core_box_cpp_CBoundingBox3D_clampPoint_FUN_00421550
          (CBoundingBox3D *this_ptr,CVector3f *out_point,CVector3f *in_point)

{
  out_point->x = in_point->x;
  out_point->y = in_point->y;
  out_point->z = in_point->z;
  if (out_point->x < (this_ptr->min).x) {
    out_point->x = (this_ptr->min).x;
  }
  if ((this_ptr->max).x < out_point->x) {
    out_point->x = (this_ptr->max).x;
  }
  if (out_point->y < (this_ptr->min).y) {
    out_point->y = (this_ptr->min).y;
  }
  if ((this_ptr->max).y < out_point->y) {
    out_point->y = (this_ptr->max).y;
  }
  if (out_point->z < (this_ptr->min).z) {
    out_point->z = (this_ptr->min).z;
  }
  if (out_point->z <= (this_ptr->max).z) {
    return out_point;
  }
  out_point->z = (this_ptr->max).z;
  return out_point;
}


// Assembly code:
// 00421550: PUSH EBX
//   Label: core_box.cpp_CBoundingBox3D_clampPoint_FUN_00421550
// 00421551: PUSH ESI
// 00421552: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00421556: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0042155a: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0042155e: MOV EAX,dword ptr [ESI]
// 00421560: LEA EBX,[ESI + 0x4]
// 00421563: MOV dword ptr [EDX],EAX
// 00421565: LEA EAX,[EDX + 0x4]
// 00421568: MOV EBX,dword ptr [EBX]
// 0042156a: MOV dword ptr [EAX],EBX
// 0042156c: LEA EBX,[EAX + 0x4]
// 0042156f: LEA EAX,[ESI + 0x8]
// 00421572: MOV EAX,dword ptr [EAX]
// 00421574: MOV dword ptr [EBX],EAX
// 00421576: FLD float ptr [EDX]
// 00421578: FCOMP float ptr [ECX]
// 0042157a: FNSTSW AX
// 0042157c: SAHF
// 0042157d: JC 0x004215d1
//   XREF to: 004215d1 (CONDITIONAL_JUMP)
// 0042157f: FLD float ptr [EDX]
//   Label: LAB_0042157f
// 00421581: FCOMP float ptr [ECX + 0xc]
// 00421584: FNSTSW AX
// 00421586: SAHF
// 00421587: JBE 0x0042158e
//   XREF to: 0042158e (CONDITIONAL_JUMP)
// 00421589: MOV EAX,dword ptr [ECX + 0xc]
// 0042158c: MOV dword ptr [EDX],EAX
// 0042158e: FLD float ptr [EDX + 0x4]
//   Label: LAB_0042158e
// 00421591: FCOMP float ptr [ECX + 0x4]
// 00421594: FNSTSW AX
// 00421596: SAHF
// 00421597: JNC 0x0042159f
//   XREF to: 0042159f (CONDITIONAL_JUMP)
// 00421599: MOV EAX,dword ptr [ECX + 0x4]
// 0042159c: MOV dword ptr [EDX + 0x4],EAX
// 0042159f: FLD float ptr [EDX + 0x4]
//   Label: LAB_0042159f
// 004215a2: FCOMP float ptr [ECX + 0x10]
// 004215a5: FNSTSW AX
// 004215a7: SAHF
// 004215a8: JBE 0x004215b0
//   XREF to: 004215b0 (CONDITIONAL_JUMP)
// 004215aa: MOV EAX,dword ptr [ECX + 0x10]
// 004215ad: MOV dword ptr [EDX + 0x4],EAX
// 004215b0: FLD float ptr [EDX + 0x8]
//   Label: LAB_004215b0
// 004215b3: FCOMP float ptr [ECX + 0x8]
// 004215b6: FNSTSW AX
// 004215b8: SAHF
// 004215b9: JNC 0x004215c1
//   XREF to: 004215c1 (CONDITIONAL_JUMP)
// 004215bb: MOV EAX,dword ptr [ECX + 0x8]
// 004215be: MOV dword ptr [EDX + 0x8],EAX
// 004215c1: FLD float ptr [EDX + 0x8]
//   Label: LAB_004215c1
// 004215c4: FCOMP float ptr [ECX + 0x14]
// 004215c7: FNSTSW AX
// 004215c9: SAHF
// 004215ca: JA 0x004215d7
//   XREF to: 004215d7 (CONDITIONAL_JUMP)
// 004215cc: MOV EAX,EDX
// 004215ce: POP ESI
// 004215cf: POP EBX
// 004215d0: RET
// 004215d1: MOV EAX,dword ptr [ECX]
//   Label: LAB_004215d1
// 004215d3: MOV dword ptr [EDX],EAX
// 004215d5: JMP 0x0042157f
//   XREF to: 0042157f (UNCONDITIONAL_JUMP)
// 004215d7: MOV EAX,dword ptr [ECX + 0x14]
//   Label: LAB_004215d7
// 004215da: MOV dword ptr [EDX + 0x8],EAX
// 004215dd: MOV EAX,EDX
// 004215df: POP ESI
// 004215e0: POP EBX
// 004215e1: RET
