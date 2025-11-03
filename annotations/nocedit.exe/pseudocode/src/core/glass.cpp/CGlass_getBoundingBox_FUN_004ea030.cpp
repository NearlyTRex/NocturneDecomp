// Name: core_glass.cpp_CGlass_getBoundingBox_FUN_004ea030
// Address: 004ea030
// Address Range: [[004ea030, 004ea083]]
// Convention: __cdecl
// Signature: CBoundingBox3D * core_glass.cpp_CGlass_getBoundingBox_FUN_004ea030(CGlass * this_ptr, CBoundingBox3D * out_box)
// Globals:
//   double DOUBLE_0062e059 = 0.5
//   double DOUBLE_0062e061 = 0.100000000000000

#include "nocturne.h"

CBoundingBox3D * __cdecl
core_glass_cpp_CGlass_getBoundingBox_FUN_004ea030(CGlass *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (this_ptr->glass_size).x;
  fVar2 = (float)DOUBLE_0062e059;
  (out_box->min).y = -0.1;
  (out_box->min).x = -fVar1 * fVar2;
  (out_box->min).z = -(this_ptr->glass_size).z * fVar2;
  (out_box->max).x = (this_ptr->glass_size).x * fVar2;
  (out_box->max).y = (this_ptr->glass_size).y + (float)DOUBLE_0062e061;
  (out_box->max).z = fVar2 * (this_ptr->glass_size).z;
  return out_box;
}


// Assembly code:
// 004ea030: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_glass.cpp_CGlass_getBoundingBox_FUN_004ea030
//   XREF to: Stack[0x4] (READ)
// 004ea034: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004ea038: FLD float ptr [EDX + 0x158]
// 004ea03e: FCHS
// 004ea040: FLD double ptr [0x0062e059]
//   XREF to: 0062e059 (READ)
// 004ea046: FXCH
// 004ea048: FMUL ST1
// 004ea04a: MOV dword ptr [EAX + 0x4],0xbdcccccd
// 004ea051: FSTP float ptr [EAX]
// 004ea053: FLD float ptr [EDX + 0x160]
// 004ea059: FCHS
// 004ea05b: FMUL ST1
// 004ea05d: FSTP float ptr [EAX + 0x8]
// 004ea060: FLD float ptr [EDX + 0x158]
// 004ea066: FMUL ST1
// 004ea068: FSTP float ptr [EAX + 0xc]
// 004ea06b: FLD float ptr [EDX + 0x15c]
// 004ea071: FADD double ptr [0x0062e061]
//   XREF to: 0062e061 (READ)
// 004ea077: FSTP float ptr [EAX + 0x10]
// 004ea07a: FMUL float ptr [EDX + 0x160]
// 004ea080: FSTP float ptr [EAX + 0x14]
// 004ea083: RET
