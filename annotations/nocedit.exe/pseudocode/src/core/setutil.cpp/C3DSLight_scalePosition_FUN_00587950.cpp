// Name: core_setutil.cpp_C3DSLight_scalePosition_FUN_00587950
// Address: 00587950
// Address Range: [[00587950, 005879a2]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSLight_scalePosition_FUN_00587950(C3DSLight * this_ptr, float scale)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_scalePosition_FUN_00587950(C3DSLight *this_ptr,float scale)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this_ptr->pos).x;
  fVar2 = this_ptr->atten_start;
  fVar3 = this_ptr->atten_end;
  (this_ptr->pos).y = (this_ptr->pos).y * scale;
  (this_ptr->pos).z = (this_ptr->pos).z * scale;
  this_ptr->atten_start = fVar2 * scale;
  this_ptr->atten_end = fVar3 * scale;
  (this_ptr->pos).x = fVar1 * scale;
  return;
}


// Assembly code:
// 00587950: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_setutil.cpp_C3DSLight_scalePosition_FUN_00587950
//   XREF to: Stack[0x4] (READ)
// 00587954: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00587958: FLD float ptr [EAX + 0x104]
// 0058795e: FMUL ST1
// 00587960: FLD float ptr [EAX + 0x108]
// 00587966: FMUL ST2
// 00587968: FLD float ptr [EAX + 0x10c]
// 0058796e: FMUL ST3
// 00587970: FLD float ptr [EAX + 0x11d0]
// 00587976: FMUL ST4
// 00587978: FLD float ptr [EAX + 0x11d4]
// 0058797e: FMULP ST5
// 00587980: FXCH ST2
// 00587982: FSTP float ptr [EAX + 0x108]
// 00587988: FSTP float ptr [EAX + 0x10c]
// 0058798e: FSTP float ptr [EAX + 0x11d0]
// 00587994: FXCH
// 00587996: FSTP float ptr [EAX + 0x11d4]
// 0058799c: FSTP float ptr [EAX + 0x104]
// 005879a2: RET
