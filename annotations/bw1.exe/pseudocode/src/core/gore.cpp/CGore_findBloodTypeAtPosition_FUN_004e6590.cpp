// Name: core_gore.cpp_CGore_findBloodTypeAtPosition_FUN_004e6590
// Address: 004e6590
// Address Range: [[004e6590, 004e667f]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CGore_findBloodTypeAtPosition_FUN_004e6590(CGore *this_ptr,CVector3f *position,int *out_blood_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gore_cpp_CGore_findBloodTypeAtPosition_FUN_004e6590(CGore *this_ptr,CVector3f *position,int *out_blood_type)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < _DAT_01cf69f8) {
    iVar1 = 0x1cf69fc;
    do {
      if (((ABS(*(float *)&position->field_0x4 - *(float *)(iVar1 + 8)) <= (float)_DAT_005e415d) &&
          (ABS(*(float *)position - *(float *)(iVar1 + 4)) <= (float)_DAT_005e4165)) &&
         (ABS(*(float *)&position->field_0x8 - *(float *)(iVar1 + 0xc)) <= (float)_DAT_005e4165)) {
        *out_blood_type = *(int *)(iVar1 + 0x10);
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x28;
    } while (iVar2 < _DAT_01cf69f8);
  }
  iVar2 = 0;
  if (0 < _DAT_01cd56b0) {
    iVar1 = 0x1cd56b4;
    do {
      if (((*(int *)(iVar1 + 0x10) == 0) &&
          (ABS(*(float *)&position->field_0x4 - *(float *)(iVar1 + 8)) <= (float)_DAT_005e415d)) &&
         ((ABS(*(float *)position - *(float *)(iVar1 + 4)) <= (float)_DAT_005e415d &&
          (ABS(*(float *)&position->field_0x8 - *(float *)(iVar1 + 0xc)) <= (float)_DAT_005e415d))))
      {
        *out_blood_type = *(int *)(iVar1 + 0x14);
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x44;
    } while (iVar2 < _DAT_01cd56b0);
  }
  return 0;
}
