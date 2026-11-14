// Name: core_dfilter.cpp_CDemonFilter_init_FUN_0045dc30
// Address: 0045dc30
// Address Range: [[0045dc30, 0045dd4a]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CDemonFilter_init_FUN_0045dc30(CDemonFilter *this_ptr,float init_value,int flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dfilter_cpp_CDemonFilter_init_FUN_0045dc30(CDemonFilter *this_ptr,float init_value,int flags)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int iVar5;
  float10 fVar6;
  float local_28;
  byte local_1c;
  
  if (flags == 0) {
    core_dfilter_cpp_CDemonFilter_allocMemory_FUN_0045d9c0(this_ptr);
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
            fVar6 = (float10)fVar1 * (float10)_DAT_005d85a1 * (float10)_DAT_005d85a9;
          }
          else {
            fVar6 = (float10)this_ptr->data_buffer[this_ptr->size * iVar5 + iVar4] * (float10)fVar1;
          }
          round();
          local_1c = (byte)(int)ROUND(fVar6);
          if (0x3f < local_1c) {
            local_1c = 0x3f;
          }
          this_ptr->data_buffer[this_ptr->size * iVar5 + extraout_ECX] = local_1c;
          iVar4 = extraout_ECX + 1;
        } while (iVar4 < this_ptr->size);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < this_ptr->count);
  }
  return;
}
