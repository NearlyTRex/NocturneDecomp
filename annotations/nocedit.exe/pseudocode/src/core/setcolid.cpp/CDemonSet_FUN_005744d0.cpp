// Name: core_setcolid.cpp_CDemonSet_FUN_005744d0
// Address: 005744d0
// Address Range: [[005744d0, 00574551]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_FUN_005744d0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_FUN_005744d0(CDemonSet *this_ptr)

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
  core_dtrace_cpp_CDemonRaytrace_voxelGridSweepTest2_FUN_00499f10
            (&g_CDemonRaytraceInstance,(CVector3f *)(in_stack_00000008 + 0x20),
             (void *)(in_stack_00000008 + 0x30),&CStack_1c,&CStack_10);
  core_path_cpp_FUN_00548590();
  return;
}
