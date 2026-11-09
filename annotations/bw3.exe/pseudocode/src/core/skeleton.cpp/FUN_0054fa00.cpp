// Name: core_skeleton.cpp_FUN_0054fa00
// Address: 0054fa00
// Address Range: [[0054fa00, 0054fb19]]
// Convention: unknown
// Signature: undefined4 * core_skeleton_cpp_FUN_0054fa00(CDeformableModelInstance *param_1)

#include "nocturne.h"

uint * core_skeleton_cpp_FUN_0054fa00(CDeformableModelInstance *param_1)

{
  CSkeleton *pCVar1;
  int iVar2;
  int iVar3;
  uint *unaff_ESI;
  CBoundingBox3D *pCVar4;
  uint *puVar5;
  byte bVar6;
  uint auStackY_1040 [1009];
  CBoundingBox3D local_70;
  CVector3f local_58;
  uint local_4c;
  uint auStack_48 [5];
  CVector3f local_34;
  CDeformableModel *local_20;
  byte *local_1c;
  byte *local_18;
  int local_14;
  
  bVar6 = 0;
  local_20 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(param_1);
  pCVar1 = core_skeleton_cpp_FUN_005487e0(local_20);
  iVar2 = *(int *)&pCVar1->field_0x1de78;
  core_box_cpp_CBoundingBox3D_reset_FUN_0041e8b0(&local_70);
  local_14 = 0;
  if (0 < iVar2) {
    local_18 = &local_20->field_0x274c;
    local_1c = &param_1->field_0xe80;
    do {
      if (*(int *)&local_20->field_0x30ac == 2) {
        iVar3 = 0;
        do {
          core_box_cpp_FUN_0041d8b0(local_18,iVar3,local_1c);
          auStack_48[2] = local_4c;
          auStack_48[(uint)bVar6 * -2 + 3] = auStack_48[(uint)bVar6 * -2];
          auStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
               auStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          core_xform_cpp_FUN_00583260(auStack_48 + 2);
          local_58._0_4_ = local_34._0_4_;
          *(uint *)((int)&local_58 + (uint)bVar6 * -8 + 4) =
               *(uint *)((int)&local_34 + (uint)bVar6 * -8 + 4);
          *(uint *)((int)&local_58 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
               *(uint *)((int)&local_34 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          iVar3 = iVar3 + 1;
          core_box_cpp_CBoundingBox3D_expand_FUN_0041d840(&local_70,&local_58);
        } while (iVar3 < 8);
      }
      local_20 = (CDeformableModel *)&local_20->field_0x4;
      local_18 = local_18 + 0x18;
      local_1c = local_1c + 0x30;
      local_14 = local_14 + 1;
    } while (local_14 < iVar2);
  }
  pCVar4 = &local_70;
  puVar5 = unaff_ESI;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *(uint *)pCVar4;
    pCVar4 = (CBoundingBox3D *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  return unaff_ESI;
}
