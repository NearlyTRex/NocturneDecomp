// Name: FUN_00519120
// Address: 00519120
// Address Range: [[00519120, 005191ef]]
// Convention: unknown
// Signature: void FUN_00519120(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00519120(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  iVar3 = 0;
  local_14 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(param_1);
  if (0 < *(int *)(local_14 + 0x28558)) {
    iVar2 = local_14 + 0x2855c;
    do {
      core_xform_cpp_getTranslation_FUN_0055bc00(param_2,&local_20);
      local_2c = (int)ROUND(local_20 * _DAT_005a1ea8);
      local_28 = (int)ROUND(local_1c * _DAT_005a1ea8);
      local_24 = (int)ROUND(local_18 * _DAT_005a1ea8);
      wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0xea5d0,&local_2c);
      iVar1 = *DAT_005ae704;
      if ((*(byte *)(iVar1 + 0xea5e3) & 0x80) == 0) {
        engine_2d_c_drawText_FUN_00402600
                  (iVar2,*(int *)(iVar1 + 0xea5e0) >> 0x10,*(int *)(iVar1 + 0xea5e4) >> 0x10);
      }
      param_2 = param_2 + 0x30;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x24;
    } while (iVar3 < *(int *)(local_14 + 0x28558));
  }
  return;
}
