// Name: core_charactr.cpp_FUN_0042b440
// Address: 0042b440
// Address Range: [[0042b440, 0042b543]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042b440(CCharacter *param_1,char *param_2,char *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_0042b440(CCharacter *param_1,char *param_2,char *param_3)

{
  byte *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = &param_1->field_0x2b4;
  iVar3 = _strcmp(&param_1->field_0x2514,param_2);
  if (iVar3 == 0) {
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)puVar1,param_2);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)puVar1);
  core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_00547460
            ((CDeformableModelInstance *)puVar1);
  *(uint *)&param_1->field_0x109c0 = 0;
  *(uint *)&param_1->field_0x109c4 = 0;
  *(uint *)&param_1->field_0x109c8 = 0;
  *(uint *)&param_1->field_0x109d4 = 0;
  *(uint *)&param_1->field_0x109cc = 0;
  uVar2 = _DAT_005f4088;
  *(uint *)&param_1->field_0x109d8 = 0xfffffffe;
  *(uint *)&param_1->field_0x308 = *(uint *)&param_1->field_0x2824;
  *(uint *)&param_1->field_0x109d0 = uVar2;
  core_charactr_cpp_FUN_00429390(param_1);
  core_charactr_cpp_FUN_004247f0(param_1);
  if (0 < *(int *)&param_1->field_0x2d0c) {
    core_cloth_cpp_CClothList_remove_FUN_005b1640((CClothList *)&param_1->field_0x2d0c,0);
  }
  puVar1 = &param_1->field_0x2d0c;
  core_cloth_cpp_CClothList_add_FUN_005b15c0((CClothList *)puVar1,param_3);
  core_cloth_cpp_CClothList_load_FUN_005b14a0((CClothList *)puVar1);
  core_cloth_cpp_CClothList_setup_FUN_005b1740
            ((CClothList *)puVar1,(CVector3f *)&param_1->field_0x20,
             (CVector3f *)&param_1->field_0x30,(CDeformableModelInstance *)&param_1->field_0x2b4);
  return;
}
