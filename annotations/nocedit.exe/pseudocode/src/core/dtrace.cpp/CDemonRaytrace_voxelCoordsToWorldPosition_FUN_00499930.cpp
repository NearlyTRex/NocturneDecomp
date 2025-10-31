// Name: core_dtrace.cpp_CDemonRaytrace_voxelCoordsToWorldPosition_FUN_00499930
// Address: 00499930
// Address Range: [[00499930, 00499960]]
// Convention: __cdecl
// Signature: CVector3f * core_dtrace.cpp_CDemonRaytrace_voxelCoordsToWorldPosition_FUN_00499930(CDemonRaytrace * raytrace_ptr, CVector3f * output_position, CVector3i * voxel_coords)

#include "nocturne.h"

CVector3f * __cdecl
core_dtrace_cpp_CDemonRaytrace_voxelCoordsToWorldPosition_FUN_00499930
          (CDemonRaytrace *raytrace_ptr,CVector3f *output_position,CVector3i *voxel_coords)

{
  output_position->x =
       (float)voxel_coords->x * (raytrace_ptr->adjusted_size).x + (raytrace_ptr->bbox_min).x;
  output_position->y =
       (float)voxel_coords->y * (raytrace_ptr->adjusted_size).y + (raytrace_ptr->bbox_min).y;
  output_position->z =
       (float)voxel_coords->z * (raytrace_ptr->adjusted_size).z + (raytrace_ptr->bbox_min).z;
  return output_position;
}


// Assembly code:
// 00499930: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dtrace.cpp_CDemonRaytrace_voxelCoordsToWorldPosition_FUN_00499930
//   XREF to: Stack[0x4] (READ)
// 00499934: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00499938: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0049993c: FILD dword ptr [ECX]
// 0049993e: FMUL float ptr [EAX + 0x34]
// 00499941: FADD float ptr [EAX + 0x10]
// 00499944: FSTP float ptr [EDX]
// 00499946: FILD dword ptr [ECX + 0x4]
// 00499949: FMUL float ptr [EAX + 0x38]
// 0049994c: FADD float ptr [EAX + 0x14]
// 0049994f: FSTP float ptr [EDX + 0x4]
// 00499952: FILD dword ptr [ECX + 0x8]
// 00499955: FMUL float ptr [EAX + 0x3c]
// 00499958: FADD float ptr [EAX + 0x18]
// 0049995b: MOV EAX,EDX
// 0049995d: FSTP float ptr [EDX + 0x8]
// 00499960: RET
