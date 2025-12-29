// Name: core_boxactor.cpp_FUN_00422d60
// Address: 00422d60
// Address Range: [[00422d60, 00423067]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00422d60()

#include "nocturne.h"

void core_boxactor_cpp_FUN_00422d60(void)

{
  CKeyFramedModelInstance *this_ptr;
  uint uVar1;
  float fVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  CDemonFilter *this_ptr_00;
  int in_stack_00000004;
  char acStack_d0 [40];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int local_18;
  
  uVar1 = *(uint *)(in_stack_00000004 + 0x66c);
  if (uVar1 != 0) {
    local_18 = in_stack_00000004 + 0x670;
    this_ptr = (CKeyFramedModelInstance *)(in_stack_00000004 + 0x158);
    if (uVar1 < 2) {
      core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
                (this_ptr,"flashlit.kfm");
      core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(this_ptr);
      (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x14))();
      fVar2 = 0.5f;
      *(float *)(in_stack_00000004 + 0x361c) = (local_90 + fStack_84) * 0.5f;
      *(float *)(in_stack_00000004 + 0x3620) = (fStack_8c + fStack_80) * fVar2;
      *(float *)(in_stack_00000004 + 0x3624) = fStack_7c + (float)0.10000000000000001;
      *(uint *)(in_stack_00000004 + 0x3630) = 0;
      *(uint *)(in_stack_00000004 + 0x362c) = *(uint *)(in_stack_00000004 + 0x3630);
      *(uint *)(in_stack_00000004 + 0x3628) = *(uint *)(in_stack_00000004 + 0x362c);
      *(uint *)(in_stack_00000004 + 0x2324) = 0;
      *(uint *)(local_18 + 0x38) = 0x42600000;
      *(uint *)(in_stack_00000004 + 0x7b0) = 0x42000000;
      *(uint *)(in_stack_00000004 + 0x314) = 3;
      return;
    }
    if (uVar1 == 2) {
      core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
                (this_ptr,"lantern.kfm");
      core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(this_ptr);
      (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x14))();
      fStack_4c = 0.5f;
      fStack_48 = local_a8 + fStack_9c;
      fStack_3c = fStack_48 * 0.5f;
      fStack_44 = fStack_a4 + fStack_98;
      fStack_40 = fStack_a0 + fStack_94;
      fStack_38 = fStack_44 * 0.5f;
      fStack_34 = fStack_40 * 0.5f;
      *(float *)(in_stack_00000004 + 0x361c) = fStack_3c;
      fStack_6c = local_a8 + fStack_9c;
      fStack_54 = fStack_6c * fStack_4c;
      fStack_68 = fStack_a4 + fStack_98;
      fStack_64 = fStack_a0 + fStack_94;
      fStack_50 = fStack_68 * fStack_4c;
      fStack_4c = fStack_64 * fStack_4c;
      *(float *)(in_stack_00000004 + 0x3620) = fStack_50;
      *(float *)(in_stack_00000004 + 0x3624) = fStack_94;
      *(uint *)(in_stack_00000004 + 0x3630) = 0;
      *(uint *)(in_stack_00000004 + 0x362c) = *(uint *)(in_stack_00000004 + 0x3630);
      *(uint *)(in_stack_00000004 + 0x3628) = *(uint *)(in_stack_00000004 + 0x362c);
      *(uint *)(in_stack_00000004 + 0x3628) = 0x3e860a92;
      *(uint *)(in_stack_00000004 + 0x2324) = 0;
      *(uint *)(local_18 + 0x38) = 0x42600000;
      *(uint *)(in_stack_00000004 + 0x7b0) = 0x42000000;
      iVar3 = DAT_008229ac;
      *(uint *)(in_stack_00000004 + 0x314) = 3;
      if (iVar3 == 0) {
        this_ptr_00 = CDemonFilter_ARRAY_008229ec;
        iVar3 = 0;
        do {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_d0,"lantern%d.raw",iVar3);
          iVar3 = iVar3 + 1;
          core_dfilter_cpp_CDemonFilter_load_FUN_004702f0(this_ptr_00,acStack_d0);
          this_ptr_00 = this_ptr_00 + 1;
        } while (iVar3 < 8);
        DAT_008229ac = 1;
      }
      core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
                ((CDemonLight *)(in_stack_00000004 + 0x670),CDemonFilter_ARRAY_008229ec,0,0,0);
      return;
    }
  }
  return;
}
