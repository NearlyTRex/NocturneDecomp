// Name: core_setutil.cpp_C3DSCamera_scalePosition_FUN_00586150
// Address: 00586150
// Address Range: [[00586150, 00586184]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSCamera_scalePosition_FUN_00586150(C3DSCamera * this_ptr, float scale)

#include "nocturne.h"

void __cdecl
core_setutil_cpp_C3DSCamera_scalePosition_FUN_00586150(C3DSCamera *this_ptr,float scale)

{
  (this_ptr->position).y = (this_ptr->position).y * scale;
  (this_ptr->position).z = (this_ptr->position).z * scale;
  (this_ptr->position).x = (this_ptr->position).x * scale;
  return;
}


// Assembly code:
// 00586150: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_setutil.cpp_C3DSCamera_scalePosition_FUN_00586150
//   XREF to: Stack[0x4] (READ)
// 00586154: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00586158: FLD float ptr [EAX + 0x100]
// 0058615e: FMUL ST1
// 00586160: FLD float ptr [EAX + 0x104]
// 00586166: FMUL ST2
// 00586168: FLD float ptr [EAX + 0x108]
// 0058616e: FMULP ST3
// 00586170: FSTP float ptr [EAX + 0x104]
// 00586176: FXCH
// 00586178: FSTP float ptr [EAX + 0x108]
// 0058617e: FSTP float ptr [EAX + 0x100]
// 00586184: RET
