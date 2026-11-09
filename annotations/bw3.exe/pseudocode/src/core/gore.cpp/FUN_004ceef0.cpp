// Name: core_gore.cpp_FUN_004ceef0
// Address: 004ceef0
// Address Range: [[004ceef0, 004cf00d]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_FUN_004ceef0(CGore *this_ptr,CVector3f *position,int *out_blood_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gore_cpp_FUN_004ceef0(CGore *this_ptr,CVector3f *position,int *out_blood_type)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < _DAT_01d4a940) {
    iVar1 = 0x1d4a944;
    do {
      if ((((*(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2c) == *(int *)(iVar1 + 0x14)) &&
           (ABS(*(float *)&position->field_0x4 - *(float *)(iVar1 + 8)) <= (float)_DAT_005c4781)) &&
          (ABS(*(float *)position - *(float *)(iVar1 + 4)) <= (float)_DAT_005c4789)) &&
         (ABS(*(float *)&position->field_0x8 - *(float *)(iVar1 + 0xc)) <= (float)_DAT_005c4789)) {
        *out_blood_type = *(int *)(iVar1 + 0x10);
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x2c;
    } while (iVar2 < _DAT_01d4a940);
  }
  iVar2 = 0;
  if (0 < _DAT_01d276b8) {
    iVar1 = 0x1d276bc;
    do {
      if (((*(int *)(iVar1 + 0x14) == 0) &&
          (*(int *)(iVar1 + 0x10) == *(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2c))) &&
         ((ABS(*(float *)&position->field_0x4 - *(float *)(iVar1 + 8)) <= (float)_DAT_005c4781 &&
          ((ABS(*(float *)position - *(float *)(iVar1 + 4)) <= (float)_DAT_005c4781 &&
           (ABS(*(float *)&position->field_0x8 - *(float *)(iVar1 + 0xc)) <= (float)_DAT_005c4781)))
          ))) {
        *out_blood_type = *(int *)(iVar1 + 0x18);
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x48;
    } while (iVar2 < _DAT_01d276b8);
  }
  return 0;
}
