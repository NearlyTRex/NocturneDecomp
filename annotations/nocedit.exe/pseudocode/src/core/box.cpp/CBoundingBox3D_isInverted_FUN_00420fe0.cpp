// Name: core_box.cpp_CBoundingBox3D_isInverted_FUN_00420fe0
// Address: 00420fe0
// Address Range: [[00420fe0, 0042100c]]
// Convention: __cdecl
// Signature: int core_box.cpp_CBoundingBox3D_isInverted_FUN_00420fe0(CBoundingBox3D * this_ptr)

#include "nocturne.h"

int __cdecl core_box_cpp_CBoundingBox3D_isInverted_FUN_00420fe0(CBoundingBox3D *this_ptr)

{
  if ((((this_ptr->min).x <= (this_ptr->max).x) && ((this_ptr->min).y <= (this_ptr->max).y)) &&
     ((this_ptr->min).z <= (this_ptr->max).z)) {
    return 0;
  }
  return 1;
}


// Assembly code:
// 00420fe0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_box.cpp_CBoundingBox3D_isInverted_FUN_00420fe0
//   XREF to: Stack[0x4] (READ)
// 00420fe4: FLD float ptr [EDX]
// 00420fe6: FCOMP float ptr [EDX + 0xc]
// 00420fe9: FNSTSW AX
// 00420feb: SAHF
// 00420fec: JA 0x00421004
//   XREF to: 00421004 (CONDITIONAL_JUMP)
// 00420fee: FLD float ptr [EDX + 0x4]
// 00420ff1: FCOMP float ptr [EDX + 0x10]
// 00420ff4: FNSTSW AX
// 00420ff6: SAHF
// 00420ff7: JA 0x00421004
//   XREF to: 00421004 (CONDITIONAL_JUMP)
// 00420ff9: FLD float ptr [EDX + 0x8]
// 00420ffc: FCOMP float ptr [EDX + 0x14]
// 00420fff: FNSTSW AX
// 00421001: SAHF
// 00421002: JBE 0x0042100a
//   XREF to: 0042100a (CONDITIONAL_JUMP)
// 00421004: MOV EAX,0x1
//   Label: LAB_00421004
// 00421009: RET
// 0042100a: XOR EAX,EAX
//   Label: LAB_0042100a
// 0042100c: RET
