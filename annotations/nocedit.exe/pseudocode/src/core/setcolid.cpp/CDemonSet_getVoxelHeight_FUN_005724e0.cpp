// Name: core_setcolid.cpp_CDemonSet_getVoxelHeight_FUN_005724e0
// Address: 005724e0
// Address Range: [[005724e0, 00572506]]
// Convention: __cdecl
// Signature: float core_setcolid.cpp_CDemonSet_getVoxelHeight_FUN_005724e0(CDemonSet * this_ptr, CVector3f * world_position)
// Globals:
//   CDemonRaytrace g_CDemonRaytraceInstance
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170

#include "nocturne.h"

float __cdecl
core_setcolid_cpp_CDemonSet_getVoxelHeight_FUN_005724e0
          (CDemonSet *this_ptr,CVector3f *world_position)

{
  float fVar1;
  
  fVar1 = core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170
                    (&g_CDemonRaytraceInstance,world_position);
  return fVar1;
}


// Assembly code:
// 005724e0: SUB ESP,0x8
//   Label: core_setcolid.cpp_CDemonSet_getVoxelHeight_FUN_005724e0
// 005724e3: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005724e7: PUSH EDX
// 005724e8: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 005724ed: CALL core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170
//   XREF to: 00499170 (UNCONDITIONAL_CALL)
// 005724f2: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 005724f6: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x4] (READ)
// 005724fa: ADD ESP,0x8
// 005724fd: FSTP float ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 00572500: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 00572503: ADD ESP,0x8
// 00572506: RET
