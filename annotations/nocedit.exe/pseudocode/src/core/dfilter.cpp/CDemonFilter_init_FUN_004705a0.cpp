// Name: core_dfilter.cpp_CDemonFilter_init_FUN_004705a0
// Address: 004705a0
// Address Range: [[004705a0, 004706ba]]
// Convention: __cdecl
// Signature: void core_dfilter.cpp_CDemonFilter_init_FUN_004705a0(CDemonFilter * this_ptr, float init_value, int flags)

#include "nocturne.h"

void __cdecl
core_dfilter_cpp_CDemonFilter_init_FUN_004705a0(CDemonFilter *this_ptr,float init_value,int flags)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int extraout_ECX;
  int iVar8;
  float10 fVar9;
  float fStack_24;
  byte bStack_14;
  
  if (flags == 0) {
    core_dfilter_cpp_CDemonFilter_allocMemory_FUN_00470260(this_ptr);
  }
  iVar8 = 0;
  if (0 < this_ptr->count) {
    do {
      iVar7 = 0;
      if (0 < this_ptr->size) {
        do {
          iVar4 = this_ptr->size / 2;
          fVar2 = (float)(iVar4 - iVar7);
          iVar5 = this_ptr->count / 2 - iVar8;
          fVar3 = (float)iVar5;
          fStack_24 = SQRT(fVar3 * fVar3 + fVar2 * fVar2) / (float)iVar4;
          uVar6 = CONCAT22 /* combine 2-byte values */((short)((uint)iVar5 >> 0x10),
                           (ushort)(1.0 < fStack_24) << 8 | (ushort)NAN(fStack_24) << 10 |
                           (ushort)(fStack_24 == 1.0) << 0xe);
          if (1.0 < fStack_24) {
            fStack_24 = 1.0;
          }
          fVar2 = (1.0 - fStack_24) * init_value;
          if (flags == 0) {
            fVar9 = (float10)fVar2 * (float10)256 *
                    (float10)0.25;
          }
          else {
            bVar1 = *(byte *)((int)this_ptr->data_buffer + this_ptr->size * iVar8 + iVar7);
            uVar6 = (uint)bVar1;
            fVar9 = (float10)bVar1 * (float10)fVar2;
          }
          crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(flags,uVar6));
          bStack_14 = (byte)(int)ROUND(fVar9);
          if (0x3f < bStack_14) {
            bStack_14 = 0x3f;
          }
          *(byte *)(this_ptr->size * iVar8 + extraout_ECX + (int)this_ptr->data_buffer) = bStack_14;
          iVar7 = extraout_ECX + 1;
        } while (iVar7 < this_ptr->size);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < this_ptr->count);
  }
  return;
}
