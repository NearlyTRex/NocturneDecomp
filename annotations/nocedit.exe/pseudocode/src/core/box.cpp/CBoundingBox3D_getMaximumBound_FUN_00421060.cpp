// Name: core_box.cpp_CBoundingBox3D_getMaximumBound_FUN_00421060
// Address: 00421060
// Address Range: [[00421060, 004210a6]]
// Convention: __cdecl
// Signature: float core_box.cpp_CBoundingBox3D_getMaximumBound_FUN_00421060(CBoundingBox3D * this_ptr)
// Cross-references:
//   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 (005751d0) at 00575421 [UNCONDITIONAL_CALL]

#include "nocturne.h"

float __cdecl core_box_cpp_CBoundingBox3D_getMaximumBound_FUN_00421060(CBoundingBox3D *this_ptr)

{
  float fVar1;
  
  if (((this_ptr->max).x <= (this_ptr->max).y) || ((this_ptr->max).x <= (this_ptr->max).z)) {
    if ((this_ptr->max).y <= (this_ptr->max).z) {
      return (this_ptr->max).z;
    }
    fVar1 = (this_ptr->max).y;
  }
  else {
    fVar1 = (this_ptr->max).x;
  }
  return fVar1;
}


// Assembly code:
// 00421060: SUB ESP,0x4
//   Label: core_box.cpp_CBoundingBox3D_getMaximumBound_FUN_00421060
// 00421063: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00421067: FLD float ptr [EDX + 0xc]
// 0042106a: FCOMP float ptr [EDX + 0x10]
// 0042106d: FNSTSW AX
// 0042106f: SAHF
// 00421070: JBE 0x0042107d
//   XREF to: 0042107d (CONDITIONAL_JUMP)
// 00421072: FLD float ptr [EDX + 0xc]
// 00421075: FCOMP float ptr [EDX + 0x14]
// 00421078: FNSTSW AX
// 0042107a: SAHF
// 0042107b: JA 0x00421095
//   XREF to: 00421095 (CONDITIONAL_JUMP)
// 0042107d: FLD float ptr [EDX + 0x10]
//   Label: LAB_0042107d
// 00421080: FCOMP float ptr [EDX + 0x14]
// 00421083: FNSTSW AX
// 00421085: SAHF
// 00421086: JBE 0x0042109a
//   XREF to: 0042109a (CONDITIONAL_JUMP)
// 00421088: MOV EDX,dword ptr [EDX + 0x10]
// 0042108b: MOV dword ptr [ESP],EDX
//   Label: LAB_0042108b
//   XREF to: Stack[-0x4] (DATA)
// 0042108e: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 00421091: ADD ESP,0x4
// 00421094: RET
// 00421095: MOV EDX,dword ptr [EDX + 0xc]
//   Label: LAB_00421095
// 00421098: JMP 0x0042108b
//   XREF to: 0042108b (UNCONDITIONAL_JUMP)
// 0042109a: MOV EDX,dword ptr [EDX + 0x14]
//   Label: LAB_0042109a
// 0042109d: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x4] (DATA)
// 004210a0: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 004210a3: ADD ESP,0x4
// 004210a6: RET
