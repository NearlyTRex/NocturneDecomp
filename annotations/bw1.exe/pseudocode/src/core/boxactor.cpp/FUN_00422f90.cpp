// Name: core_boxactor.cpp_FUN_00422f90
// Address: 00422f90
// Address Range: [[00422f90, 004231d3]]
// Convention: unknown
// Signature: void core_boxactor_cpp_FUN_00422f90(CBoxActor *param_1,float param_2,undefined4 param_3,float param_4)

#include "nocturne.h"

void core_boxactor_cpp_FUN_00422f90(CBoxActor *param_1,float param_2,uint param_3,float param_4)

{
  CDemonSet *this_ptr;
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte *this_ptr_00;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStackY_101c [965];
  int filter_index;
  int filter_pos_x;
  int filter_pos_y;
  CMatrix3x4f aCStack_94 [48];
  CMatrix3x4f aCStack_64 [48];
  CVector3f CStack_34;
  CVector3f CStack_28;
  uint uStack_1c;
  uint auStack_18 [4];
  
  bVar6 = 0;
  core_boxactor_cpp_FUN_00422000(param_1,param_2);
  if ((*(int *)(param_1 + 1) == 2) &&
     (param_4 = *(float *)&param_1[8].field_0x280 - param_4,
     *(float *)&param_1[8].field_0x280 = param_4, param_4 <= 0.0)) {
    filter_pos_y = 0;
    filter_pos_x = 0;
    filter_index = 0;
    iVar3 = core_actor_cpp_FUN_0040cc60(0,7);
    core_dlight_cpp_CDemonLight_applyFilter_FUN_00463e30
              ((CDemonLight *)&param_1[1].field_0x4,CDemonFilter_ARRAY_007c5098 + iVar3,filter_index
               ,filter_pos_x,filter_pos_y);
    uVar1 = core_actor_cpp_FUN_0040cc00(0,0x3e19999a);
    *(uint *)&param_1[8].field_0x280 = uVar1;
  }
  if (*(int *)(param_1 + 1) != 3) {
    if (*(int *)&param_1[5].field_0x2d8 == 0) {
      return;
    }
    core_actor_cpp_FUN_00408b40(param_1,&param_1[8].field_0x268);
    uStack_1c = auStack_18[2];
    auStack_18[(uint)bVar6 * -2] = auStack_18[(uint)bVar6 * -2 + 3];
    auStack_18[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         *(uint *)(&stack0xfffffff8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    if ((uint *)&param_1[1].field_0x8 != &uStack_1c) {
      *(uint *)&param_1[1].field_0x8 = uStack_1c;
      *(uint *)&param_1[1].field_0xc = auStack_18[0];
      *(uint *)&param_1[1].field_0x10 = auStack_18[1];
    }
    core_xform_cpp_FUN_005b5760
              (aCStack_94,(CVector3f *)&DAT_02c8af28,(CVector3f *)&param_1[8].field_0x274);
    core_xform_cpp_FUN_005b5760
              (aCStack_64,(CVector3f *)&DAT_02c8af28,(CVector3f *)&param_1->field_0x30);
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(aCStack_94,aCStack_64);
    puVar4 = (uint *)&stack0xffffff0c;
    puVar5 = (uint *)&stack0xffffff3c;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    core_xform_cpp_FUN_005b5930(&stack0xffffff3c);
    CStack_28._0_4_ = CStack_34._0_4_;
    *(uint *)((int)&CStack_28 + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&CStack_34 + (uint)bVar6 * -8 + 4);
    *(uint *)((int)&CStack_28 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         *(uint *)((int)&CStack_34 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    core_dirmat_cpp_FUN_0045f3e0((CMatrix3x3f *)&param_1[1].field_0x14,&CStack_28);
    core_set_cpp_FUN_005518e0(g_CDemonSetPtr,(CDemonLight *)&param_1[1].field_0x4);
    return;
  }
  this_ptr_00 = &param_1[8].field_0x284;
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045e970
            ((CDemonGlobe *)this_ptr_00,(CVector3f *)&param_1->field_0x20);
  uVar2 = rand();
  *(uint *)&param_1[8].field_0x2c0 = uVar2 & 0x7fff;
  param_1[8].field_0x2a0 = (char)((int)(uVar2 & 0x7fff) >> 10);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0((CDemonGlobe *)this_ptr_00,2.0);
  this_ptr = g_CDemonSetPtr;
  *(uint *)&param_1[8].field_0x2a4 = 0;
  core_set_cpp_CDemonSet_addCoronaGlobe_FUN_00551960(this_ptr,(CDemonGlobe *)this_ptr_00);
  return;
}
