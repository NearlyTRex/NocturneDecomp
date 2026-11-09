// Name: core_dfilter.cpp_CDemonFilter_init_FUN_00447ad0
// Address: 00447ad0
// Address Range: [[00447ad0, 00447bea]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CDemonFilter_init_FUN_00447ad0(CDemonFilter *this_ptr,float init_value,int flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dfilter_cpp_CDemonFilter_init_FUN_00447ad0(CDemonFilter *this_ptr,float init_value,int flags)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int extraout_ECX;
  int iVar4;
  float10 fVar5;
  float local_28;
  byte local_1c;
  
  if (flags == 0) {
    core_dfilter_cpp_CDemonFilter_allocMemory_FUN_00447860(this_ptr);
  }
  iVar4 = 0;
  if (0 < *(int *)&this_ptr->field_0x4) {
    do {
      iVar3 = 0;
      if (0 < *(int *)this_ptr) {
        do {
          fVar1 = (float)(*(int *)this_ptr / 2 - iVar3);
          fVar2 = (float)(*(int *)&this_ptr->field_0x4 / 2 - iVar4);
          local_28 = SQRT(fVar2 * fVar2 + fVar1 * fVar1) / (float)(*(int *)this_ptr / 2);
          if (1.0 < local_28) {
            local_28 = 1.0;
          }
          fVar1 = (1.0 - local_28) * init_value;
          if (flags == 0) {
            fVar5 = (float10)fVar1 * (float10)_DAT_005ceca8 * (float10)_DAT_005cecb0;
          }
          else {
            fVar5 = (float10)*(byte *)(*(int *)&this_ptr->field_0x48 +
                                      *(int *)this_ptr * iVar4 + iVar3) * (float10)fVar1;
          }
          round();
          local_1c = (byte)(int)ROUND(fVar5);
          if (0x3f < local_1c) {
            local_1c = 0x3f;
          }
          *(byte *)(*(int *)this_ptr * iVar4 + extraout_ECX + *(int *)&this_ptr->field_0x48) =
               local_1c;
          iVar3 = extraout_ECX + 1;
        } while (iVar3 < *(int *)this_ptr);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)&this_ptr->field_0x4);
  }
  return;
}
