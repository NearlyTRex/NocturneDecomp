// Name: core_gore.cpp_CGore_findBloodTypeAtPosition_FUN_004b0730
// Address: 004b0730
// Address Range: [[004b0730, 004b081f]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CGore_findBloodTypeAtPosition_FUN_004b0730(CGore *this_ptr,CVector3f *position,int *out_blood_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gore_cpp_CGore_findBloodTypeAtPosition_FUN_004b0730(CGore *this_ptr,CVector3f *position,int *out_blood_type)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < _DAT_01c9e038) {
    iVar1 = 0x1c9e03c;
    do {
      if (((ABS(position->y - *(float *)(iVar1 + 8)) <= (float)0.5) &&
          (ABS(position->x - *(float *)(iVar1 + 4)) <= (float)1.333)) &&
         (ABS(position->z - *(float *)(iVar1 + 0xc)) <= (float)1.333)) {
        *out_blood_type = *(int *)(iVar1 + 0x10);
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x28;
    } while (iVar2 < _DAT_01c9e038);
  }
  iVar2 = 0;
  if (0 < _DAT_01c7ccf0) {
    iVar1 = 0x1c7ccf4;
    do {
      if (((*(int *)(iVar1 + 0x10) == 0) &&
          (ABS(position->y - *(float *)(iVar1 + 8)) <= (float)0.5)) &&
         ((ABS(position->x - *(float *)(iVar1 + 4)) <= (float)0.5 &&
          (ABS(position->z - *(float *)(iVar1 + 0xc)) <= (float)0.5)))) {
        *out_blood_type = *(int *)(iVar1 + 0x14);
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x44;
    } while (iVar2 < _DAT_01c7ccf0);
  }
  return 0;
}
