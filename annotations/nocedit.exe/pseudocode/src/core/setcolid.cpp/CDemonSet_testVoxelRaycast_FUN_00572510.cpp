// Name: core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_00572510
// Address: 00572510
// Address Range: [[00572510, 00572527]]
// Convention: __cdecl
// Signature: int core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_00572510(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
// Cross-references:
//   core_enemy.cpp_FUN_004a9a50 (004a9a50) at 004a9ae3 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051fcc0 (0051fcc0) at 0051ffc2 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRaytrace g_CDemonRaytraceInstance
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330

#include "nocturne.h"

int __cdecl
core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_00572510
          (CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

{
  int iVar1;
  
  iVar1 = core_dtrace_cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330
                    (&g_CDemonRaytraceInstance,start_pos,end_pos);
  return iVar1;
}


// Assembly code:
// 00572510: MOV EDX,dword ptr [ESP + 0xc]
//   Label: core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_00572510
//   XREF to: Stack[0xc] (READ)
// 00572514: PUSH EDX
// 00572515: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00572519: PUSH ECX
// 0057251a: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 0057251f: CALL core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_00499330
//   XREF to: 00499330 (UNCONDITIONAL_CALL)
// 00572524: ADD ESP,0xc
// 00572527: RET
