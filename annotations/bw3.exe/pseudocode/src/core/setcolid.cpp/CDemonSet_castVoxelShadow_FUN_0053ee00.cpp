// Name: core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_0053ee00
// Address: 0053ee00
// Address Range: [[0053ee00, 0053ee96]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_castVoxelShadow_FUN_0053ee00(CDemonSet *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_castVoxelShadow_FUN_0053ee00(CDemonSet *this_ptr,CDemonActor *actor)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  CBoundingBox3D *in_stack_ffffffac;
  float afStack_40 [3];
  uint auStack_34 [6];
  CVector3f CStack_1c;
  float fStack_10;
  
  bVar4 = 0;
  (*((actor->vtable)._ub)->getBoundingBox)(actor,in_stack_ffffffac);
  puVar2 = auStack_34;
  puVar3 = (uint *)&stack0xffffffac;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  if (&fStack_10 != afStack_40) {
    fStack_10 = afStack_40[0];
  }
  core_dtrace_cpp_FUN_00477e60
            (&g_CDemonRaytraceInstance,&(actor->location).position,&(actor->orient).vec,&CStack_1c,
             (CVector3f *)&fStack_10);
  core_path_cpp_resetAllPathMaps_FUN_0050cf60();
  return;
}
