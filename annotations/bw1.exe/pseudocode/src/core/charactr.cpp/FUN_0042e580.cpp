// Name: core_charactr.cpp_FUN_0042e580
// Address: 0042e580
// Address Range: [[0042e580, 0042e8df]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042e580(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_0042e580(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  CDeformableModel *this_ptr;
  uint uVar4;
  uint uVar5;
  
  iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if ((iVar3 != 0) || (*(int *)(param_1 + 0xc19c) == -1)) {
    return;
  }
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                       ((CDeformableModelInstance *)(param_1 + 0x158));
  if (*(int *)(param_1 + 0xc19c) == -2) {
    iVar3 = core_skeleton_cpp_FUN_00565780(this_ptr,&DAT_005d5937,0);
    *(int *)(param_1 + 0xc19c) = iVar3;
    if (iVar3 == -1) {
      return;
    }
    iVar3 = core_skeleton_cpp_FUN_00565780(this_ptr,&DAT_005d593c,0);
    *(int *)(param_1 + 0xc1c0) = iVar3;
    if (iVar3 == -1) {
      *(uint *)(param_1 + 0xc19c) = 0xffffffff;
      return;
    }
    iVar3 = core_skeleton_cpp_FUN_00565780(this_ptr,&DAT_005d593f,1);
    *(int *)(param_1 + 0xc1c4) = iVar3;
    iVar3 = core_skeleton_cpp_FUN_00565780(this_ptr,&DAT_005d5942,1);
    *(int *)(param_1 + 0xc1c8) = iVar3;
    iVar3 = core_skeleton_cpp_FUN_00565780(this_ptr,&DAT_005d5945,1);
    *(int *)(param_1 + 0xc1cc) = iVar3;
    iVar3 = core_skeleton_cpp_FUN_00565780(this_ptr,"e1_left",0);
    *(int *)(param_1 + 0xc1a0) = iVar3;
    iVar3 = core_skeleton_cpp_FUN_00565780(this_ptr,"e2_left",0);
    *(int *)(param_1 + 0xc1a4) = iVar3;
    iVar3 = core_skeleton_cpp_FUN_00565780(this_ptr,"e3_left",0);
    *(int *)(param_1 + 0xc1a8) = iVar3;
    iVar3 = core_skeleton_cpp_FUN_00565780(this_ptr,"e4_left",0);
    *(int *)(param_1 + 0xc1ac) = iVar3;
    iVar3 = core_skeleton_cpp_FUN_00565780(this_ptr,"e1_right",0);
    *(int *)(param_1 + 0xc1b0) = iVar3;
    iVar3 = core_skeleton_cpp_FUN_00565780(this_ptr,"e2_right",0);
    *(int *)(param_1 + 0xc1b4) = iVar3;
    iVar3 = core_skeleton_cpp_FUN_00565780(this_ptr,"e3_right",0);
    *(int *)(param_1 + 0xc1b8) = iVar3;
    iVar3 = core_skeleton_cpp_FUN_00565780(this_ptr,"e4_right",0);
    *(int *)(param_1 + 0xc1bc) = iVar3;
  }
  iVar3 = param_1;
  do {
    if (*(int *)(iVar3 + 0xc1a0) != -1) {
      *(uint *)(param_1 + 0x2298 + *(int *)(iVar3 + 0xc1a0) * 4) = 0;
    }
    if (*(int *)(iVar3 + 0xc1b0) != -1) {
      *(uint *)(param_1 + 0x2298 + *(int *)(iVar3 + 0xc1b0) * 4) = 0;
    }
    piVar1 = (int *)(iVar3 + 0xc1c0);
    iVar3 = iVar3 + 4;
    *(uint *)(param_1 + 0x2298 + *piVar1 * 4) = 0;
  } while (iVar3 != param_1 + 0x10);
  fVar2 = (float)_DAT_01c43530 * _DAT_005d598f;
  *(float *)(param_1 + 0xc194) = *(float *)(param_1 + 0xc194) - fVar2;
  if (*(int *)(param_1 + 0xc190) == 1) {
    if (*(float *)(param_1 + 0xc194) <= 0.0) {
      uVar4 = core_actor_cpp_FUN_0040cc00(0x40a00000,0x41000000);
      *(uint *)(param_1 + 0xc184) = 0;
      *(uint *)(param_1 + 0xc188) = 0;
      *(uint *)(param_1 + 0xc190) = 0;
      *(uint *)(param_1 + 0xc194) = uVar4;
    }
  }
  else if (*(float *)(param_1 + 0xc194) <= 0.0) {
    *(uint *)(param_1 + 0xc188) = 3;
    *(uint *)(param_1 + 0xc190) = 1;
    *(uint *)(param_1 + 0xc194) = 0x3d4ccccd;
    *(uint *)(param_1 + 0xc184) = 3;
  }
  *(float *)(param_1 + 0xc198) = *(float *)(param_1 + 0xc198) - fVar2;
  if (*(float *)(param_1 + 0xc198) <= 0.0) {
    iVar3 = *(int *)&g_CScriptPtr->field_0x4;
    if (param_1 == iVar3) {
      *(uint *)(iVar3 + 0xc198) = 0x3e19999a;
      uVar5 = rand();
      *(uint *)(iVar3 + 0xc18c) = uVar5 & 3;
    }
    else {
      *(uint *)(param_1 + 0xc18c) = 0;
      *(uint *)(param_1 + 0xc198) = 0;
    }
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0xc184) * 4 + param_1 + 0xc1a0);
  if (iVar3 != -1) {
    core_charactr_cpp_FUN_0042e410(this_ptr,*(uint *)(param_1 + 0xc19c),iVar3);
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0xc188) * 4 + param_1 + 0xc1b0);
  if (iVar3 != -1) {
    core_charactr_cpp_FUN_0042e410(this_ptr,*(uint *)(param_1 + 0xc19c),iVar3);
  }
  core_charactr_cpp_FUN_0042e410
            (this_ptr,*(uint *)(param_1 + 0xc19c),
             *(uint *)(param_1 + 0xc1c0 + *(int *)(param_1 + 0xc18c) * 4));
  return;
}
