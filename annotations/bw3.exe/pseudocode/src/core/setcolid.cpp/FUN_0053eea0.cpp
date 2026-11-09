// Name: core_setcolid.cpp_FUN_0053eea0
// Address: 0053eea0
// Address Range: [[0053eea0, 0053ef36]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_FUN_0053eea0(CDemonSet *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_FUN_0053eea0(CDemonSet *this_ptr,CDemonActor *actor)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_54 [3];
  CVector3f CStack_48;
  uint local_3c [6];
  CVector3f CStack_24;
  CVector3f CStack_18;
  
  bVar4 = 0;
  (**(code **)(*(int *)&actor->field_0x154 + 0x1c))(actor);
  puVar2 = local_3c;
  puVar3 = local_54;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  if (&CStack_18 != &CStack_48) {
    CStack_18._0_4_ = CStack_48._0_4_;
    CStack_18._4_4_ = CStack_48._4_4_;
    CStack_18._8_4_ = CStack_48._8_4_;
  }
  core_dtrace_cpp_CDemonRaytrace_transferShadowVoxels_FUN_004781d0
            (&g_CDemonRaytraceInstance,(CVector3f *)&actor->field_0x20,
             (CVector3f *)&actor->field_0x30,&CStack_24,&CStack_18);
  core_path_cpp_resetAllPathMaps_FUN_0050cf60();
  return;
}
