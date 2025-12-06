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
  void *pvVar3;
  ushort uVar5;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar6;
  int iVar7;
  float10 fVar8;
  double dVar9;
  int in_stack_00000004;
  float in_stack_0000000c;
  float in_stack_00000010;
  float local_38;
  float local_28;
  int iStack_24;
  int local_1c;
  int local_14;
  
  iVar7 = 0;
  pvVar3 = crt_memory_c_memset_FUN_005fde40(&DAT_030f6158,0,0x10000);
  do {
    iVar6 = 0;
    do {
      fVar2 = (float)128 - (float)iVar6;
      fVar1 = (float)128 - (float)iVar7;
      fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
      uVar5 = (ushort)((uint)pvVar3 >> 0x10);
      pvVar3 = (void *)((uint)uVar5 << 0x10);
      if ((fVar1 <= local_28) &&
         (pvVar3 = (void *)CONCAT22 /* combine 2-byte values */(uVar5,(ushort)(fVar1 < in_stack_00000010) << 8 |
                                          (ushort)(NAN(fVar1) || NAN(in_stack_00000010)) << 10 |
                                          (ushort)(fVar1 == in_stack_00000010) << 0xe),
         fVar1 >= in_stack_00000010)) {
        fVar8 = (float10)fsin(((float10)local_38 - (float10)SQRT(fVar1)) * (float10)0.03125f *
                              (float10)3.1415899999999999);
        fVar8 = ((float10)128 - (float10)local_38) * fVar8 * (float10)16 *
                (float10)0.0078125;
        dVar9 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar6,pvVar3));
        iVar6 = (int)((ulonglong)dVar9 >> 0x20);
        pvVar3 = (void *)CONCAT31 /* combine 2-byte values */((int3)((ulonglong)dVar9 >> 8),(char)(int)ROUND(fVar8));
        (&DAT_030f6158)[extraout_ECX_00] = (char)(int)ROUND(fVar8);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x100);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x100);
  iStack_24 = 0;
  do {
    iVar6 = 0;
    iVar7 = in_stack_00000004;
    do {
      fVar8 = (float10)iStack_24;
      dVar9 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar6,iStack_24));
      fVar8 = fVar8 - (float10)in_stack_0000000c;
      dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
      local_14 = (int)ROUND(fVar8);
      iVar6 = iStack_24;
      if (iStack_24 < 0) {
        iVar6 = iStack_24 + 0x100;
      }
      if (0xff < iVar6) {
        iVar6 = iVar6 + -0x100;
      }
      if (local_14 < 0) {
        local_14 = local_14 + 0x100;
      }
      if (0xff < local_14) {
        local_14 = local_14 + -0x100;
      }
      uVar4 = (uint)*(byte *)(iVar7 + 8) + (uint)(byte)(&DAT_030f6158)[local_14 * 0x100 + iVar6];
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      iVar7 = iVar7 + 1;
      iVar6 = (int)((ulonglong)dVar9 >> 0x20) + 1;
      *(char *)(extraout_ECX + 8) = (char)uVar4;
    } while (iVar6 < 0x100);
    local_1c = local_1c + 1;
    iStack_24 = iStack_24 + 0x100;
  } while (local_1c < 0x100);
  return;
}
