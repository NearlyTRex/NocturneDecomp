// Name: FUN_005342b0
// Address: 005342b0
// Address Range: [[005342b0, 0053458c]]
// Convention: unknown
// Signature: void FUN_005342b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_005342b0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int in_stack_00000004;
  uint in_stack_00000008;
  uint local_20;
  uint uStack_1c;
  uint uStack_c;
  
  local_20 = 1.0;
  iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x38);
  if (iVar4 == 0) {
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x2a);
    if (iVar4 != 0) {
      local_20 = 4.0;
    }
  }
  else {
    local_20 = 0.05;
  }
  fVar3 = (float)_DAT_00595122;
  fVar1 = *(float *)(0x01C775EC + 0x264) * local_20;
  uStack_1c = *(float *)(in_stack_00000004 + 0x2c) * (float)_DAT_0059512a;
  fVar2 = fVar1 * (float)_DAT_0059511a;
  if (uStack_1c < 1.0) {
    uStack_1c = 1.0;
  }
  uStack_c = *(float *)(in_stack_00000004 + 0x2c);
  if (*(float *)(in_stack_00000004 + 0x2c) < 1.0) {
    uStack_c = 1.0;
  }
  uStack_c = uStack_c * fVar1;
  if ((in_stack_00000008 & 2) != 0) {
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x52);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x28) = *(float *)(in_stack_00000004 + 0x28) + fVar2;
    }
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x53);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x28) = *(float *)(in_stack_00000004 + 0x28) - fVar2;
    }
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x35);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x28) = *(float *)(in_stack_00000004 + 0x28) + fVar2;
    }
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x37);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x28) = *(float *)(in_stack_00000004 + 0x28) - fVar2;
    }
  }
  if ((in_stack_00000008 & 1) != 0) {
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x4a);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x24) = *(float *)(in_stack_00000004 + 0x24) + fVar2;
    }
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x4e);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x24) = *(float *)(in_stack_00000004 + 0x24) - fVar2;
    }
  }
  if ((in_stack_00000008 & 8) != 0) {
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x4b);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x30) = *(float *)(in_stack_00000004 + 0x30) - uStack_c;
    }
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x4d);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x30) = *(float *)(in_stack_00000004 + 0x30) + uStack_c;
    }
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x10);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x34) = *(float *)(in_stack_00000004 + 0x34) + uStack_c;
    }
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x1e);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x34) = *(float *)(in_stack_00000004 + 0x34) - uStack_c;
    }
  }
  if ((in_stack_00000008 & 4) != 0) {
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x48);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x2c) =
           *(float *)(in_stack_00000004 + 0x2c) - uStack_1c * fVar1;
    }
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x50);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x2c) =
           *(float *)(in_stack_00000004 + 0x2c) + uStack_1c * fVar1;
    }
  }
  if ((in_stack_00000008 & 0x10) != 0) {
    iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0xd);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x38) =
           *(float *)(in_stack_00000004 + 0x38) / (local_20 * fVar3);
    }
    iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0xc);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x38) = *(float *)(in_stack_00000004 + 0x38) * local_20 * fVar3
      ;
    }
  }
  iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x4c);
  if (iVar4 == 0) {
    FUN_00534590();
    return;
  }
  shape_spotview_cpp_CSpotView_reset_FUN_00534260();
  FUN_00534590();
  return;
}
