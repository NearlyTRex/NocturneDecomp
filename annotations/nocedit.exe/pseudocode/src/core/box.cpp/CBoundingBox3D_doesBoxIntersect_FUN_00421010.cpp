// Name: core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010
// Address: 00421010
// Address Range: [[00421010, 0042105a]]
// Convention: __cdecl
// Signature: int core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010(CBoundingBox3D * this_ptr, CBoundingBox3D * other)
// Cross-references:
//   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 (00409470) at 0040966c [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 (005716b0) at 005719d6 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470 (00573470) at 00573787 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl
core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010
          (CBoundingBox3D *this_ptr,CBoundingBox3D *other)

{
  if (((((this_ptr->min).x <= (other->max).x) && ((other->min).x <= (this_ptr->max).x)) &&
      ((this_ptr->min).y <= (other->max).y)) &&
     ((((other->min).y <= (this_ptr->max).y && ((this_ptr->min).z <= (other->max).z)) &&
      ((other->min).z <= (this_ptr->max).z)))) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 00421010: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010
//   XREF to: Stack[0x4] (READ)
// 00421014: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00421018: FLD float ptr [EDX]
// 0042101a: FCOMP float ptr [ECX + 0xc]
// 0042101d: FNSTSW AX
// 0042101f: SAHF
// 00421020: JA 0x00421058
//   XREF to: 00421058 (CONDITIONAL_JUMP)
// 00421022: FLD float ptr [EDX + 0xc]
// 00421025: FCOMP float ptr [ECX]
// 00421027: FNSTSW AX
// 00421029: SAHF
// 0042102a: JC 0x00421058
//   XREF to: 00421058 (CONDITIONAL_JUMP)
// 0042102c: FLD float ptr [EDX + 0x4]
// 0042102f: FCOMP float ptr [ECX + 0x10]
// 00421032: FNSTSW AX
// 00421034: SAHF
// 00421035: JA 0x00421058
//   XREF to: 00421058 (CONDITIONAL_JUMP)
// 00421037: FLD float ptr [EDX + 0x10]
// 0042103a: FCOMP float ptr [ECX + 0x4]
// 0042103d: FNSTSW AX
// 0042103f: SAHF
// 00421040: JC 0x00421058
//   XREF to: 00421058 (CONDITIONAL_JUMP)
// 00421042: FLD float ptr [EDX + 0x8]
// 00421045: FCOMP float ptr [ECX + 0x14]
// 00421048: FNSTSW AX
// 0042104a: SAHF
// 0042104b: JA 0x00421058
//   XREF to: 00421058 (CONDITIONAL_JUMP)
// 0042104d: FLD float ptr [EDX + 0x14]
// 00421050: FCOMP float ptr [ECX + 0x8]
// 00421053: FNSTSW AX
// 00421055: SAHF
// 00421056: JNC 0x00421004
//   XREF to: 00421004 (CONDITIONAL_JUMP)
// 00421058: XOR EAX,EAX
//   Label: LAB_00421058
// 0042105a: RET
