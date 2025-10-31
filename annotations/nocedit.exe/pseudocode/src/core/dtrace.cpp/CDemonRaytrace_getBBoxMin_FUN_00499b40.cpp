// Name: core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40
// Address: 00499b40
// Address Range: [[00499b40, 00499b63]]
// Convention: __cdecl
// Signature: CVector3f * core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40(CDemonRaytrace * this_ptr, CVector3f * output_vector)
// Cross-references:
//   core_dskybox.cpp_renderSkyDome_FUN_004901f0 (004901f0) at 00490239 [UNCONDITIONAL_CALL]
//   core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70 (005e9e70) at 005e9edb [UNCONDITIONAL_CALL]

#include "nocturne.h"

CVector3f * __cdecl
core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40
          (CDemonRaytrace *this_ptr,CVector3f *output_vector)

{
  output_vector->x = (this_ptr->bbox_min).x;
  output_vector->y = (this_ptr->bbox_min).y;
  output_vector->z = (this_ptr->bbox_min).z;
  return output_vector;
}


// Assembly code:
// 00499b40: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40
// 00499b41: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00499b45: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00499b49: ADD EAX,0x10
// 00499b4c: MOV EDX,dword ptr [EAX]
// 00499b4e: LEA EBX,[EAX + 0x4]
// 00499b51: MOV dword ptr [ECX],EDX
// 00499b53: LEA EDX,[ECX + 0x4]
// 00499b56: MOV EBX,dword ptr [EBX]
// 00499b58: MOV dword ptr [EDX],EBX
// 00499b5a: MOV EAX,dword ptr [EAX + 0x8]
// 00499b5d: MOV dword ptr [EDX + 0x4],EAX
// 00499b60: MOV EAX,ECX
// 00499b62: POP EBX
// 00499b63: RET
