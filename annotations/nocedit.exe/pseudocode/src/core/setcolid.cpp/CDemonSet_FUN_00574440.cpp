// Name: core_setcolid.cpp_CDemonSet_FUN_00574440
// Address: 00574440
// Address Range: [[00574440, 005744c1]]
// Convention: __cdecl
// Signature: void core_setcolid.cpp_CDemonSet_FUN_00574440(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_FUN_00574440(CDemonSet *this_ptr)

{
  CVector3f *pCVar1;
  int in_stack_00000008;
  CVector3f CStack_1c;
  CVector3f CStack_10;
  
  pCVar1 = (CVector3f *)(**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x14))();
  if (&CStack_1c != pCVar1) {
    CStack_1c.x = pCVar1->x;
    CStack_1c.y = pCVar1->y;
    CStack_1c.z = pCVar1->z;
  }
  if (&CStack_10 != pCVar1 + 1) {
    CStack_10.x = pCVar1[1].x;
    CStack_10.y = pCVar1[1].y;
    CStack_10.z = pCVar1[1].z;
  }
  core_dtrace_cpp_CDemonRaytrace_voxelGridSweepTest_FUN_00499c20
            (&g_CDemonRaytraceInstance,(CVector3f *)(in_stack_00000008 + 0x20),
             (CVector3f *)(in_stack_00000008 + 0x30),&CStack_1c,&CStack_10);
  core_path_cpp_GlobalPathmapListCorruption_FUN_00548590();
  return;
}
