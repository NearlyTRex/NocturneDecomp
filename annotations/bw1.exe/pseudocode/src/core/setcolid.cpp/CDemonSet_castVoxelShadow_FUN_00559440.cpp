// Name: core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_00559440
// Address: 00559440
// Address Range: [[00559440, 005594d6]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_castVoxelShadow_FUN_00559440(CDemonSet *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_castVoxelShadow_FUN_00559440(CDemonSet *this_ptr,CDemonActor *actor)

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
  core_dtrace_cpp_FUN_0048f2e0
            (&g_CDemonRaytraceInstance,(CVector3f *)&actor->field_0x20,
             (CVector3f *)&actor->field_0x30,&CStack_24,&CStack_18);
  core_path_cpp_resetAllPathMaps_FUN_00535280();
  return;
}
