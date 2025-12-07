// Name: core_procedur.cpp_FUN_00554670
// Address: 00554670
// Address Range: [[00554670, 0055487b]]
// Convention: unknown
// Signature: undefined core_procedur.cpp_FUN_00554670()

#include "nocturne.h"

void core_procedur_cpp_FUN_00554670(void)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  double dVar9;
  int in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  float in_stack_00000010;
  float local_38;
  int local_2c;
  float local_28;
  int iStack_24;
  int local_1c;
  int local_18;
  byte local_14;
  
  iVar6 = 0;
  iVar7 = 0;
  crt_memory_c_memset_FUN_005fde40(&DAT_030f6158,0,0x10000);
  do {
    iVar5 = 0;
    iVar4 = iVar7;
    do {
      fVar2 = (float)128 - (float)iVar5;
      fVar1 = (float)128 - (float)iVar6;
      fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
      if ((fVar1 <= local_28) && (in_stack_00000010 <= fVar1)) {
        fVar8 = (float10)fsin(((float10)local_38 - (float10)SQRT(fVar1)) * (float10)0.03125f *
                              (float10)3.1415899999999999);
        dVar9 = crt_math_c_round_FUN_005fe6b0
                          ((double)(((float10)128 - (float10)local_38) *
                                    fVar8 * (float10)16 * (float10)0.0078125));
        local_14 = (byte)(int)ROUND(dVar9);
        (&DAT_030f6158)[iVar4] = local_14;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar5 < 0x100);
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + 0x100;
  } while (iVar6 < 0x100);
  local_2c = in_stack_00000004;
  iStack_24 = 0;
  do {
    iVar4 = 0;
    iVar6 = local_2c;
    iVar7 = local_2c;
    do {
      crt_math_c_round_FUN_005fe6b0((double)((float)iVar4 - in_stack_00000008));
      dVar9 = crt_math_c_round_FUN_005fe6b0((double)((float)iStack_24 - in_stack_0000000c));
      local_1c = (int)ROUND(dVar9);
      if (local_18 < 0) {
        local_18 = local_18 + 0x100;
      }
      if (0xff < local_18) {
        local_18 = local_18 + -0x100;
      }
      if (local_1c < 0) {
        local_1c = local_1c + 0x100;
      }
      if (0xff < local_1c) {
        local_1c = local_1c + -0x100;
      }
      uVar3 = (uint)*(byte *)(iVar7 + 8) + (uint)(byte)(&DAT_030f6158)[local_1c * 0x100 + local_18];
      if (0xff < uVar3) {
        uVar3 = 0xff;
      }
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + 1;
      *(char *)(iVar6 + 8) = (char)uVar3;
      iVar6 = iVar6 + 1;
    } while (iVar4 < 0x100);
    iStack_24 = iStack_24 + 1;
    local_2c = local_2c + 0x100;
  } while (iStack_24 < 0x100);
  return;
}
