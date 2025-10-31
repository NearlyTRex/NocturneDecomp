// Name: core_dcube.cpp_CDemonCube_ctor_FUN_00456750
// Address: 00456750
// Address Range: [[00456750, 00456784]]
// Convention: __cdecl
// Signature: CDemonCube * core_dcube.cpp_CDemonCube_ctor_FUN_00456750(CDemonCube * this_ptr)

#include "nocturne.h"

CDemonCube * __cdecl core_dcube_cpp_CDemonCube_ctor_FUN_00456750(CDemonCube *this_ptr)

{
  this_ptr->vertex_buffer = (CVector3f *)0x0;
  this_ptr->triangle_count = 0;
  this_ptr->triangle_buffer = (CDemonCubeTriangle *)0x0;
  this_ptr->ground_type_memory = (void *)0x0;
  this_ptr->voxel_buffer1 = (SVoxelGrid *)0x0;
  this_ptr->voxel_buffer2 = (SVoxelGrid *)0x0;
  this_ptr->vertex_count = 0;
  return this_ptr;
}


// Assembly code:
// 00456750: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dcube.cpp_CDemonCube_ctor_FUN_00456750
//   XREF to: Stack[0x4] (READ)
// 00456754: MOV dword ptr [EAX + 0x24],0x0
// 0045675b: MOV dword ptr [EAX + 0x28],0x0
// 00456762: MOV dword ptr [EAX + 0x2c],0x0
// 00456769: MOV dword ptr [EAX + 0x30],0x0
// 00456770: MOV dword ptr [EAX],0x0
// 00456776: MOV dword ptr [EAX + 0x4],0x0
// 0045677d: MOV dword ptr [EAX + 0x20],0x0
// 00456784: RET
