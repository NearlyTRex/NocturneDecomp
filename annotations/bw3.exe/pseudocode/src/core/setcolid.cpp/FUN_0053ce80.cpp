// Name: core_setcolid.cpp_FUN_0053ce80
// Address: 0053ce80
// Address Range: [[0053ce80, 0053cfec]]
// Convention: unknown
// Signature: undefined4 core_setcolid_cpp_FUN_0053ce80(int param_1)

#include "nocturne.h"

uint core_setcolid_cpp_FUN_0053ce80(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  byte bVar3;
  float afStackY_1040 [1011];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint uStack_48;
  uint uStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  uint uStack_c;
  
  bVar3 = 0;
  if (*(float *)(param_1 + 0x15f6dc) < *(float *)(param_1 + 0x15f6e0)) {
    if ((uint *)(param_1 + 0x14d128) != (uint *)(param_1 + 0x15f6e4)) {
      *(uint *)(param_1 + 0x14d128) = *(uint *)(param_1 + 0x15f6e4);
      *(uint *)(param_1 + 0x14d12c) = *(uint *)(param_1 + 0x15f6e8);
      *(uint *)(param_1 + 0x14d130) = *(uint *)(param_1 + 0x15f6ec);
    }
    pfVar1 = (float *)(param_1 + 0x14d110);
    *(uint *)(param_1 + 0x14d134) = *(uint *)(param_1 + 0x15f6f0);
    uStack_c = core_setcolid_cpp_FUN_0053d270
                         (param_1,*(uint *)(param_1 + 0x15f6dc),pfVar1,
                          (float *)(param_1 + 0x14d11c),*(uint *)(param_1 + 0x15f6e0));
    *(uint *)(param_1 + 0x15f6dc) = uStack_c;
    if (*(float *)(param_1 + 0x15f6dc) <= 1.0) {
      fStack_40 = *(float *)(param_1 + 0x14d11c) - *pfVar1;
      fStack_3c = *(float *)(param_1 + 0x14d120) - *(float *)(param_1 + 0x14d114);
      fStack_38 = *(float *)(param_1 + 0x14d124) - *(float *)(param_1 + 0x14d118);
      fStack_1c = fStack_40;
      *(uint *)((int)&stack0xffffffe8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffec + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      pfVar2 = (float *)(param_1 + 0x15f6dc);
      fStack_28 = fStack_1c * *pfVar2;
      fStack_24 = fStack_18 * *pfVar2;
      fStack_20 = fStack_14 * *pfVar2;
      fStack_34 = fStack_1c * *pfVar2;
      *(uint *)((int)&stack0xffffffd0 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffffe0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      fStack_58 = *pfVar1 + fStack_34;
      fStack_54 = *(float *)(param_1 + 0x14d114) + fStack_30;
      fStack_50 = *(float *)(param_1 + 0x14d118) + fStack_2c;
      fStack_4c = *pfVar1 + fStack_34;
      *(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffffac + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffbc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffffb0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if ((float *)(param_1 + 0x14d138) != &stack0xffffffb4) {
        *(float *)(param_1 + 0x14d138) = fStack_4c;
        *(uint *)(param_1 + 0x14d13c) = uStack_48;
        *(uint *)(param_1 + 0x14d140) = uStack_44;
      }
    }
    return *(uint *)(param_1 + 0x15f6dc);
  }
  return 0x40000000;
}
