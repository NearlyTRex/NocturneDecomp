// Name: core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70
// Address: 00499b70
// Address Range: [[00499b70, 00499b93]]
// Convention: __cdecl
// Signature: CVector3f * core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70(CDemonRaytrace * this_ptr, CVector3f * output_vector)
// Cross-references:
//   core_dskybox.cpp_renderSkyDome_FUN_004901f0 (004901f0) at 0049024b [UNCONDITIONAL_CALL]
//   core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70 (005e9e70) at 005e9eed [UNCONDITIONAL_CALL]

#include "nocturne.h"

CVector3f * __cdecl
core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70
          (CDemonRaytrace *this_ptr,CVector3f *output_vector)

{
  output_vector->x = (this_ptr->bbox_max).x;
  output_vector->y = (this_ptr->bbox_max).y;
  output_vector->z = (this_ptr->bbox_max).z;
  return output_vector;
}


// Assembly code:
// 00499b70: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70
// 00499b71: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00499b75: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00499b79: ADD EAX,0x1c
// 00499b7c: MOV EDX,dword ptr [EAX]
// 00499b7e: LEA EBX,[EAX + 0x4]
// 00499b81: MOV dword ptr [ECX],EDX
// 00499b83: LEA EDX,[ECX + 0x4]
// 00499b86: MOV EBX,dword ptr [EBX]
// 00499b88: MOV dword ptr [EDX],EBX
// 00499b8a: MOV EAX,dword ptr [EAX + 0x8]
// 00499b8d: MOV dword ptr [EDX + 0x4],EAX
// 00499b90: MOV EAX,ECX
// 00499b92: POP EBX
// 00499b93: RET
