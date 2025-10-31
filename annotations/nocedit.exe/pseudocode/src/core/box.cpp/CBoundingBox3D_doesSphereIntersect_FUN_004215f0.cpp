// Name: core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
// Address: 004215f0
// Address Range: [[004215f0, 00421647]]
// Convention: __cdecl
// Signature: int core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0(CBoundingBox3D * this_ptr, CVector3f * sphere_center, float radius)
// Cross-references:
//   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 (0040a210) at 0040a664 [UNCONDITIONAL_CALL]
// Function calls:
//   core_box.cpp_CBoundingBox3D_clampPoint_FUN_00421550

#include "nocturne.h"

int __cdecl
core_box_cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
          (CBoundingBox3D *this_ptr,CVector3f *sphere_center,float radius)

{
  BADSPACEBASE *in_ESP;
  float in_stack_00000010;
  CVector3f local_20;
  float fStack_14;
  
  core_box_cpp_CBoundingBox3D_clampPoint_FUN_00421550(this_ptr,&local_20,sphere_center);
  local_20.y = local_20.y - sphere_center->x;
  local_20.z = local_20.z - sphere_center->y;
  fStack_14 = fStack_14 - sphere_center->z;
  return (uint)(fStack_14 * fStack_14 + local_20.z * local_20.z + local_20.y * local_20.y <=
               in_stack_00000010 * in_stack_00000010);
}


// Assembly code:
// 004215f0: PUSH EBX
//   Label: core_box.cpp_CBoundingBox3D_doesSphereIntersect_FUN_004215f0
// 004215f1: SUB ESP,0x1c
// 004215f4: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 004215f8: PUSH EBX
// 004215f9: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x20] (DATA)
// 004215fd: PUSH EAX
// 004215fe: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 00421602: PUSH EDX
// 00421603: CALL core_box.cpp_CBoundingBox3D_clampPoint_FUN_00421550
//   XREF to: 00421550 (UNCONDITIONAL_CALL)
// 00421608: ADD ESP,0xc
// 0042160b: FLD float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0042160e: FSUB float ptr [EBX]
// 00421610: FMUL ST0
// 00421612: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 00421616: FSUB float ptr [EBX + 0x4]
// 00421619: FMUL ST0
// 0042161b: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 0042161f: FXCH
// 00421621: FADDP ST2,ST0
// 00421623: FSUB float ptr [EBX + 0x8]
// 00421626: FMUL ST0
// 00421628: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 0042162c: FLD ST0
// 0042162e: FXCH ST2
// 00421630: FADDP ST3,ST0
// 00421632: FMULP
// 00421634: FXCH
// 00421636: FCOMPP
// 00421638: FNSTSW AX
// 0042163a: SAHF
// 0042163b: SETBE AL
// 0042163e: AND EAX,0xff
// 00421643: ADD ESP,0x1c
// 00421646: POP EBX
// 00421647: RET
