// Name: core_gore.cpp_CGore_findBloodTypeAtPosition_FUN_004c9d80
// Address: 004c9d80
// Address Range: [[004c9d80, 004c9e6f]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CGore_findBloodTypeAtPosition_FUN_004c9d80(CGore *this_ptr,CVector3f *position,int *out_blood_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gore_cpp_CGore_findBloodTypeAtPosition_FUN_004c9d80(CGore *this_ptr,CVector3f *position,int *out_blood_type)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < _DAT_01cdde40) {
    iVar1 = 0x1cdde44;
    do {
      if (((ABS(*(float *)&position->field_0x4 - *(float *)(iVar1 + 8)) <= (float)_DAT_005d957a) &&
          (ABS(*(float *)position - *(float *)(iVar1 + 4)) <= (float)_DAT_005d9582)) &&
         (ABS(*(float *)&position->field_0x8 - *(float *)(iVar1 + 0xc)) <= (float)_DAT_005d9582)) {
        *out_blood_type = *(int *)(iVar1 + 0x10);
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x28;
    } while (iVar2 < _DAT_01cdde40);
  }
  iVar2 = 0;
  if (0 < _DAT_01cbcaf8) {
    iVar1 = 0x1cbcafc;
    do {
      if (((*(int *)(iVar1 + 0x10) == 0) &&
          (ABS(*(float *)&position->field_0x4 - *(float *)(iVar1 + 8)) <= (float)_DAT_005d957a)) &&
         ((ABS(*(float *)position - *(float *)(iVar1 + 4)) <= (float)_DAT_005d957a &&
          (ABS(*(float *)&position->field_0x8 - *(float *)(iVar1 + 0xc)) <= (float)_DAT_005d957a))))
      {
        *out_blood_type = *(int *)(iVar1 + 0x14);
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x44;
    } while (iVar2 < _DAT_01cbcaf8);
  }
  return 0;
}
