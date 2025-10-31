// Name: core_setutil.cpp_C3DSCamera_getAmbientValue_FUN_00585200
// Address: 00585200
// Address Range: [[00585200, 0058520a]]
// Convention: __cdecl
// Signature: float core_setutil.cpp_C3DSCamera_getAmbientValue_FUN_00585200(C3DSCamera * this_ptr)

#include "nocturne.h"

float __cdecl core_setutil_cpp_C3DSCamera_getAmbientValue_FUN_00585200(C3DSCamera *this_ptr)

{
  return this_ptr->ambient_value;
}


// Assembly code:
// 00585200: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_setutil.cpp_C3DSCamera_getAmbientValue_FUN_00585200
//   XREF to: Stack[0x4] (READ)
// 00585204: MOV EAX,dword ptr [EAX + 0x148]
// 0058520a: RET
