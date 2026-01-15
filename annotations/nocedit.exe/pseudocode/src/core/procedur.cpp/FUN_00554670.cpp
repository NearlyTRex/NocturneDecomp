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
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar5;
  float10 fVar6;
  double dVar7;
  int in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  float in_stack_00000010;
  float local_40;
  int local_30;
  int local_28;
  int iStack_24;
  byte local_18;
  
  local_40 = in_stack_00000010 + -32f;
  if (local_40 < 0.0) {
    local_40 = 0.0;
  }
  iVar5 = 0;
  crt_memory_c_memset_FUN_005fde40(&DAT_030f6158,0,0x10000);
  do {
    iVar4 = 0;
    do {
      fVar2 = (float)128 - (float)iVar4;
      fVar1 = (float)128 - (float)iVar5;
      fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
      if ((fVar1 <= in_stack_00000010 * in_stack_00000010) && (local_40 * local_40 <= fVar1)) {
        fVar6 = (float10)fsin(((float10)in_stack_00000010 - (float10)SQRT(fVar1)) *
                              (float10)0.03125f * (float10)3.1415899999999999);
        dVar7 = crt_math_c_round_FUN_005fe6b0
                          ((double)(((float10)128 - (float10)in_stack_00000010) *
                                    fVar6 * (float10)16 * (float10)0.0078125));
        local_18 = (byte)(int)ROUND(dVar7);
        (&DAT_030f6158)[extraout_ECX_00] = local_18;
        iVar4 = extraout_EDX_00;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x100);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x100);
  local_30 = in_stack_00000004;
  local_28 = 0;
  do {
    iVar4 = 0;
    iVar5 = local_30;
    do {
      fVar6 = (float10)local_28;
      crt_math_c_round_FUN_005fe6b0((double)((float)iVar4 - in_stack_00000008));
      dVar7 = crt_math_c_round_FUN_005fe6b0((double)(fVar6 - (float10)in_stack_0000000c));
      local_28 = (int)ROUND(dVar7);
      if (iStack_24 < 0) {
        iStack_24 = iStack_24 + 0x100;
      }
      if (0xff < iStack_24) {
        iStack_24 = iStack_24 + -0x100;
      }
      if (local_28 < 0) {
        local_28 = local_28 + 0x100;
      }
      if (0xff < local_28) {
        local_28 = local_28 + -0x100;
      }
      uVar3 = (uint)*(byte *)(iVar5 + 8) + (uint)(byte)(&DAT_030f6158)[local_28 * 0x100 + iStack_24]
      ;
      if (0xff < uVar3) {
        uVar3 = 0xff;
      }
      iVar5 = iVar5 + 1;
      iVar4 = extraout_EDX + 1;
      *(char *)(extraout_ECX + 8) = (char)uVar3;
    } while (iVar4 < 0x100);
    local_30 = local_30 + 1;
  } while (local_30 < 0x100);
  return;
}
