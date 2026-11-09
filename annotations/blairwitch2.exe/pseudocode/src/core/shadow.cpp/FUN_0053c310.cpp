// Name: core_shadow.cpp_FUN_0053c310
// Address: 0053c310
// Address Range: [[0053c310, 0053c49c]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_0053c310(CEnemy *param_1)

#include "nocturne.h"

void core_shadow_cpp_FUN_0053c310(CEnemy *param_1)

{
  int iVar1;
  CSkeleton *this_ptr;
  uint uVar2;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  *(uint *)&param_1[1].field_0x50 = 0;
  *(uint *)&param_1[1].field_0x78 = 0;
  iVar1 = _stricmp(&param_1->field_0x2514,"SHADOWBEAST.DFM");
  if ((iVar1 == 0) ||
     (iVar1 = _stricmp
                        (&param_1->field_0x2514,"WERE_HEADLESS.DFM"), iVar1 == 0)) {
    *(uint *)&param_1[1].field_0x50 = 1;
  }
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       ((CDeformableModelInstance *)&param_1->field_0x2b4);
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Pelvis",1);
  *(int *)&param_1[1].field_0x14 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Spine2",1);
  *(int *)&param_1[1].field_0x18 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Head",1);
  *(int *)&param_1[1].field_0x1c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Spine2",1);
  *(int *)&param_1[1].field_0x4 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Finger1",1);
  *(int *)&param_1[1].field_0x8 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Finger1",1);
  *(int *)&param_1[1].field_0xc = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Head",1);
  *(int *)&param_1[1].field_0x10 = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(param_1);
  *(uint *)&param_1->field_0xfc = 1;
  *(uint *)&param_1->field_0xf8 = 0;
  if (*(int *)(param_1 + 1) == 0) {
    *(uint *)&param_1->field_0x3434 = 0x3fc00000;
  }
  *(uint *)&param_1[1].field_0x24 = 0;
  uVar2 = core_actor_cpp_FUN_0040cf60(0x41200000,0x41f00000);
  *(uint *)&param_1[1].field_0x2c = 0;
  *(uint *)&param_1[1].field_0x30 = 0;
  *(uint *)&param_1[1].field_0x28 = uVar2;
  return;
}
