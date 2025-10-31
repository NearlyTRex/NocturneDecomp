// Name: core_dtrace.cpp_CDemonRaytrace_ctor_FUN_00494200
// Address: 00494200
// Address Range: [[00494200, 0049423b]]
// Convention: __cdecl
// Signature: CDemonRaytrace * core_dtrace.cpp_CDemonRaytrace_ctor_FUN_00494200(CDemonRaytrace * this_ptr)
// Cross-references:
//   core_set.cpp_staticInit_FUN_00569040 (00569040) at 00569079 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CDemonRaytrace * __cdecl core_dtrace_cpp_CDemonRaytrace_ctor_FUN_00494200(CDemonRaytrace *this_ptr)

{
  this_ptr->triangle_flags = (uchar *)0x0;
  this_ptr->triangle_count = 0;
  this_ptr->cube_list = (SVoxelCubeMetadata *)0x0;
  (this_ptr->grid_coord).x = 0;
  (this_ptr->grid_coord).y = 0;
  (this_ptr->grid_coord).z = 0;
  this_ptr->rendering_mode = 0;
  this_ptr->triangle_list = (CDemonTriangle *)0x0;
  return this_ptr;
}


// Assembly code:
// 00494200: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dtrace.cpp_CDemonRaytrace_ctor_FUN_00494200
//   XREF to: Stack[0x4] (READ)
// 00494204: MOV dword ptr [EAX + 0xc],0x0
// 0049420b: MOV dword ptr [EAX + 0x4],0x0
// 00494212: MOV dword ptr [EAX + 0x4c],0x0
// 00494219: MOV dword ptr [EAX + 0x40],0x0
// 00494220: MOV dword ptr [EAX + 0x44],0x0
// 00494227: MOV dword ptr [EAX + 0x48],0x0
// 0049422e: MOV dword ptr [EAX],0x0
// 00494234: MOV dword ptr [EAX + 0x8],0x0
// 0049423b: RET
