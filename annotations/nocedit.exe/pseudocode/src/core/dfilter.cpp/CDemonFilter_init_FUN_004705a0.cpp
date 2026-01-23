// Name: core_dfilter.cpp_CDemonFilter_init_FUN_004705a0
// Address: 004705a0
// Address Range: [[004705a0, 004706ba]]
// Convention: __cdecl
// Signature: void core_dfilter.cpp_CDemonFilter_init_FUN_004705a0(CDemonFilter * this_ptr, float init_value, int flags)

#include "nocturne.h"

void __cdecl
core_dfilter_cpp_CDemonFilter_init_FUN_004705a0(CDemonFilter *this_ptr,float init_value,int flags)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  float local_28;
  byte bStack_20;
  
  if (flags == 0) {
    core_dfilter_cpp_CDemonFilter_allocMemory_FUN_00470260(this_ptr);
  }
  iVar5 = 0;
  if (0 < this_ptr->count) {
    do {
      iVar4 = 0;
      if (0 < this_ptr->size) {
        do {
          iVar3 = this_ptr->size / 2;
          fVar1 = (float)(iVar3 - iVar4);
          fVar2 = (float)(this_ptr->count / 2 - iVar5);
          local_28 = SQRT(fVar2 * fVar2 + fVar1 * fVar1) / (float)iVar3;
          if (1.0 < local_28) {
            local_28 = 1.0;
          }
          fVar1 = (1.0 - local_28) * init_value;
          if (flags == 0) {
            fVar1 = fVar1 * (float)256 * (float)0.25;
          }
          else {
            fVar1 = (float)*(byte *)((int)this_ptr->data_buffer + this_ptr->size * iVar5 + iVar4) *
                    fVar1;
          }
          dVar6 = crt_math_c_round_FUN_005fe6b0((double)fVar1);
          bStack_20 = (byte)(int)ROUND(dVar6);
          if (0x3f < bStack_20) {
            bStack_20 = 0x3f;
          }
          *(byte *)(this_ptr->size * iVar5 + iVar4 + (int)this_ptr->data_buffer) = bStack_20;
          iVar4 = iVar4 + 1;
        } while (iVar4 < this_ptr->size);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < this_ptr->count);
  }
  return;
}
