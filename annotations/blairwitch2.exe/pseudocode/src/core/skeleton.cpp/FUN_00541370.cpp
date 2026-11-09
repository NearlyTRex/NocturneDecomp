// Name: core_skeleton.cpp_FUN_00541370
// Address: 00541370
// Address Range: [[00541370, 005414f9]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_00541370(CDeformableModel *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_skeleton_cpp_FUN_00541370(CDeformableModel *param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  
  if ((param_2 < 0) || (*(int *)param_1 <= param_2)) {
    _DAT_01d046a0 = "..\\core\\skeleton.cpp";
    _DAT_01d046a4 = 0x299;
    core_main_c_FUN_004e4500("CDeformableModel::allocLOD - invalid lod number %d",param_2);
  }
  FUN_005b7fce(*(void **)(&param_1->field_0x40 + param_2 * 4));
  FUN_005b7fce(*(void **)(&param_1->field_0x7c + param_2 * 4));
  FUN_005b7fce(*(void **)(&param_1->field_0x90 + param_2 * 4));
  FUN_005b7fce(*(void **)(&param_1->field_0xa4 + param_2 * 4));
  *(uint *)(&param_1->field_0x2c + param_2 * 4) = param_3;
  *(uint *)(&param_1->field_0x54 + param_2 * 4) = param_4;
  *(uint *)(&param_1->field_0x68 + param_2 * 4) = param_5;
  uVar1 = FUN_005b8df8
                    (*(int *)(&param_1->field_0x2c + param_2 * 4) * 0x34,
                     *(int *)(&param_1->field_0x2c + param_2 * 4),&g_SVertTypeInfo);
  uVar1 = FUN_005ba29a(uVar1);
  *(uint *)(&param_1->field_0x40 + param_2 * 4) = uVar1;
  uVar1 = FUN_005b8df8
                    ((*(int *)(&param_1->field_0x54 + param_2 * 4) +
                     *(int *)(&param_1->field_0x68 + param_2 * 4)) * 0x12);
  *(uint *)(&param_1->field_0x7c + param_2 * 4) = uVar1;
  uVar1 = FUN_005b8df8
                    ((*(int *)(&param_1->field_0x54 + param_2 * 4) +
                     *(int *)(&param_1->field_0x68 + param_2 * 4)) * 4);
  *(uint *)(&param_1->field_0x90 + param_2 * 4) = uVar1;
  if (*(int *)(&param_1->field_0x68 + param_2 * 4) < 1) {
    *(uint *)(&param_1->field_0xa4 + param_2 * 4) = 0;
  }
  else {
    uVar1 = FUN_005b8df8(*(int *)(&param_1->field_0x68 + param_2 * 4) * 4);
    *(uint *)(&param_1->field_0xa4 + param_2 * 4) = uVar1;
  }
  if ((((*(int *)(&param_1->field_0x40 + param_2 * 4) != 0) &&
       (*(int *)(&param_1->field_0x7c + param_2 * 4) != 0)) &&
      (*(int *)(&param_1->field_0x90 + param_2 * 4) != 0)) &&
     ((*(int *)(&param_1->field_0x68 + param_2 * 4) < 1 ||
      (*(int *)(&param_1->field_0xa4 + param_2 * 4) != 0)))) {
    return;
  }
  core_skeleton_cpp_CDeformableModel_free_FUN_00541160(param_1);
  _DAT_01d046a0 = "..\\core\\skeleton.cpp";
  _DAT_01d046a4 = 0x2bd;
  core_main_c_FUN_004e4500
            ("Out of hunk in CDeformableModel::allocMemory.  vertexCount=%d, triCount=%d, capTriCount=%d",&param_1->field_0x2c,&param_1->field_0x54,
             &param_1->field_0x68);
  return;
}
