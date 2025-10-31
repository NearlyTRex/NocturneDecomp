// Name: core_setutil.cpp_C3DSCamera_getProjectionScale_FUN_005851f0
// Address: 005851f0
// Address Range: [[005851f0, 005851fa]]
// Convention: __cdecl
// Signature: float core_setutil.cpp_C3DSCamera_getProjectionScale_FUN_005851f0(C3DSCamera * this_ptr)

#include "nocturne.h"

float __cdecl core_setutil_cpp_C3DSCamera_getProjectionScale_FUN_005851f0(C3DSCamera *this_ptr)

{
  return this_ptr->projection_scale;
}


// Assembly code:
// 005851f0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_setutil.cpp_C3DSCamera_getProjectionScale_FUN_005851f0
//   XREF to: Stack[0x4] (READ)
// 005851f4: MOV EAX,dword ptr [EAX + 0x144]
// 005851fa: RET
