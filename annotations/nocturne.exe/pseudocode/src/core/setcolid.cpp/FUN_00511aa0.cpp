// Name: core_setcolid.cpp_FUN_00511aa0
// Address: 00511aa0
// Address Range: [[00511aa0, 00511b21]]
// Convention: unknown
// Signature: void core_setcolid_cpp_FUN_00511aa0(undefined4 param_1,int param_2)

#include "nocturne.h"

void core_setcolid_cpp_FUN_00511aa0(uint param_1,int param_2)

{
  CVector3f *pCVar1;
  byte auStack_34 [24];
  CVector3f CStack_1c;
  CVector3f CStack_10;
  
  pCVar1 = (CVector3f *)(**(code **)(*(int *)(param_2 + 0x14c) + 0x14))(param_2,auStack_34);
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
  core_dtrace_cpp_CDemonRaytrace_transferShadowVoxels_FUN_0046bd90
            ((CDemonRaytrace *)&DAT_01fba938,(CVector3f *)(param_2 + 0x20),
             (CVector3f *)(param_2 + 0x30),&CStack_1c,&CStack_10);
  core_path_cpp_resetAllPathMaps_FUN_004f1e90();
  return;
}
