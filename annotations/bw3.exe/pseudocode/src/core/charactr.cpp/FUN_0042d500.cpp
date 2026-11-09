// Name: core_charactr.cpp_FUN_0042d500
// Address: 0042d500
// Address Range: [[0042d500, 0042d85f]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042d500(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_0042d500(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  CDeformableModel *this_ptr;
  uint uVar4;
  uint uVar5;
  
  iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  if ((iVar3 != 0) || (*(int *)(param_1 + 0xcd90) == -1)) {
    return;
  }
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                       ((CDeformableModelInstance *)(param_1 + 0x158));
  if (*(int *)(param_1 + 0xcd90) == -2) {
    iVar3 = core_skeleton_cpp_FUN_0054a310(this_ptr,&DAT_005b8276,0);
    *(int *)(param_1 + 0xcd90) = iVar3;
    if (iVar3 == -1) {
      return;
    }
    iVar3 = core_skeleton_cpp_FUN_0054a310(this_ptr,&DAT_005b827b,0);
    *(int *)(param_1 + 0xcdb4) = iVar3;
    if (iVar3 == -1) {
      *(uint *)(param_1 + 0xcd90) = 0xffffffff;
      return;
    }
    iVar3 = core_skeleton_cpp_FUN_0054a310(this_ptr,&DAT_005b827e,1);
    *(int *)(param_1 + 0xcdb8) = iVar3;
    iVar3 = core_skeleton_cpp_FUN_0054a310(this_ptr,&DAT_005b8281,1);
    *(int *)(param_1 + 0xcdbc) = iVar3;
    iVar3 = core_skeleton_cpp_FUN_0054a310(this_ptr,&DAT_005b8284,1);
    *(int *)(param_1 + 0xcdc0) = iVar3;
    iVar3 = core_skeleton_cpp_FUN_0054a310(this_ptr,"e1_left",0);
    *(int *)(param_1 + 0xcd94) = iVar3;
    iVar3 = core_skeleton_cpp_FUN_0054a310(this_ptr,"e2_left",0);
    *(int *)(param_1 + 0xcd98) = iVar3;
    iVar3 = core_skeleton_cpp_FUN_0054a310(this_ptr,"e3_left",0);
    *(int *)(param_1 + 0xcd9c) = iVar3;
    iVar3 = core_skeleton_cpp_FUN_0054a310(this_ptr,"e4_left",0);
    *(int *)(param_1 + 0xcda0) = iVar3;
    iVar3 = core_skeleton_cpp_FUN_0054a310(this_ptr,"e1_right",0);
    *(int *)(param_1 + 0xcda4) = iVar3;
    iVar3 = core_skeleton_cpp_FUN_0054a310(this_ptr,"e2_right",0);
    *(int *)(param_1 + 0xcda8) = iVar3;
    iVar3 = core_skeleton_cpp_FUN_0054a310(this_ptr,"e3_right",0);
    *(int *)(param_1 + 0xcdac) = iVar3;
    iVar3 = core_skeleton_cpp_FUN_0054a310(this_ptr,"e4_right",0);
    *(int *)(param_1 + 0xcdb0) = iVar3;
  }
  iVar3 = param_1;
  do {
    if (*(int *)(iVar3 + 0xcd94) != -1) {
      *(uint *)(param_1 + 0x2298 + *(int *)(iVar3 + 0xcd94) * 4) = 0;
    }
    if (*(int *)(iVar3 + 0xcda4) != -1) {
      *(uint *)(param_1 + 0x2298 + *(int *)(iVar3 + 0xcda4) * 4) = 0;
    }
    piVar1 = (int *)(iVar3 + 0xcdb4);
    iVar3 = iVar3 + 4;
    *(uint *)(param_1 + 0x2298 + *piVar1 * 4) = 0;
  } while (iVar3 != param_1 + 0x10);
  fVar2 = (float)_DAT_01c5fad0 * _DAT_005b82ce;
  *(float *)(param_1 + 0xcd88) = *(float *)(param_1 + 0xcd88) - fVar2;
  if (*(int *)(param_1 + 0xcd84) == 1) {
    if (*(float *)(param_1 + 0xcd88) <= 0.0) {
      uVar4 = core_actor_cpp_FUN_0040ce40(0x40a00000,0x41000000);
      *(uint *)(param_1 + 0xcd78) = 0;
      *(uint *)(param_1 + 0xcd7c) = 0;
      *(uint *)(param_1 + 0xcd84) = 0;
      *(uint *)(param_1 + 0xcd88) = uVar4;
    }
  }
  else if (*(float *)(param_1 + 0xcd88) <= 0.0) {
    *(uint *)(param_1 + 0xcd7c) = 3;
    *(uint *)(param_1 + 0xcd84) = 1;
    *(uint *)(param_1 + 0xcd88) = 0x3d4ccccd;
    *(uint *)(param_1 + 0xcd78) = 3;
  }
  *(float *)(param_1 + 0xcd8c) = *(float *)(param_1 + 0xcd8c) - fVar2;
  if (*(float *)(param_1 + 0xcd8c) <= 0.0) {
    iVar3 = *(int *)&g_CScriptPtr->field_0x4;
    if (param_1 == iVar3) {
      *(uint *)(iVar3 + 0xcd8c) = 0x3e19999a;
      uVar5 = rand();
      *(uint *)(iVar3 + 0xcd80) = uVar5 & 3;
    }
    else {
      *(uint *)(param_1 + 0xcd80) = 0;
      *(uint *)(param_1 + 0xcd8c) = 0;
    }
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0xcd78) * 4 + param_1 + 0xcd94);
  if (iVar3 != -1) {
    core_charactr_cpp_FUN_0042d390(this_ptr,*(uint *)(param_1 + 0xcd90),iVar3);
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0xcd7c) * 4 + param_1 + 0xcda4);
  if (iVar3 != -1) {
    core_charactr_cpp_FUN_0042d390(this_ptr,*(uint *)(param_1 + 0xcd90),iVar3);
  }
  core_charactr_cpp_FUN_0042d390
            (this_ptr,*(uint *)(param_1 + 0xcd90),
             *(uint *)(param_1 + 0xcdb4 + *(int *)(param_1 + 0xcd80) * 4));
  return;
}
