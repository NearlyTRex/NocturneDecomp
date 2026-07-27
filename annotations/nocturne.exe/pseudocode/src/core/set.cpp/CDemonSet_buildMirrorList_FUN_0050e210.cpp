// Name: core_set.cpp_CDemonSet_buildMirrorList_FUN_0050e210
// Address: 0050e210
// Address Range: [[0050e210, 0050e2f7]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_buildMirrorList_FUN_0050e210(int param_1)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_buildMirrorList_FUN_0050e210(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte local_28 [24];
  
  *(uint *)(param_1 + 0x15a8cc) = 0;
  iVar4 = 0;
  iVar5 = param_1;
  if (0 < *(int *)(param_1 + 0x14cd6c)) {
    do {
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                        (*(uint *)(iVar5 + 0x14cd70),g_CGlassActorType_01c78c40.name_hash);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1e0) != 0)) {
        core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(iVar1);
        uVar2 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x14))(iVar1,local_28,0);
        iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar2);
        if (iVar3 != 0) {
          *(int *)(param_1 + 0x15a8d0 + *(int *)(param_1 + 0x15a8cc) * 4) = iVar1;
          iVar1 = *(int *)(param_1 + 0x15a8cc) + 1;
          *(int *)(param_1 + 0x15a8cc) = iVar1;
          if (99 < iVar1) {
            PTR_01cc4800 = "..\\core\\set.cpp";
            INT_01cc4804 = 0x1118;
            core_main_c_FUN_004c8440("CDemonSet::buildMirrorList - Too many mirrors");
          }
        }
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < *(int *)(param_1 + 0x14cd6c));
  }
  return;
}
