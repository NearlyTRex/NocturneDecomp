// Name: core_motion.cpp_FUN_00503e60
// Address: 00503e60
// Address Range: [[00503e60, 00503f4e]]
// Convention: __cdecl
// Signature: float __cdecl core_motion_cpp_FUN_00503e60(CMotionController *this_ptr)

#include "nocturne.h"

float __cdecl core_motion_cpp_FUN_00503e60(CMotionController *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_1c;
  
  iVar3 = *(int *)&this_ptr->field_0x4 * 0x118 + *(int *)this_ptr + 0x1c28;
  if (*(float *)&this_ptr->field_0x8 <= 0.0) {
    local_1c = 0.0;
  }
  else if ((float)*(int *)(iVar3 + 100) <= *(float *)&this_ptr->field_0x8) {
    local_1c = (float)(*(int *)(iVar3 + 0xec) + 1);
  }
  else {
    iVar1 = 0;
    iVar4 = 0;
    iVar2 = iVar3;
    if (0 < *(int *)(iVar3 + 0xec)) {
      do {
        if (*(float *)&this_ptr->field_0x8 < (float)*(int *)(iVar2 + 0xf0)) {
          return (float)iVar1 +
                 (*(float *)&this_ptr->field_0x8 - (float)iVar4) /
                 (float)(*(int *)(iVar2 + 0xf0) - iVar4);
        }
        iVar1 = iVar1 + 1;
        iVar4 = *(int *)(iVar2 + 0xf0);
        iVar2 = iVar2 + 4;
      } while (iVar1 < *(int *)(iVar3 + 0xec));
    }
    local_1c = (float)*(int *)(iVar3 + 0xec) +
               (*(float *)&this_ptr->field_0x8 - (float)iVar4) /
               (float)(*(int *)(iVar3 + 100) - iVar4);
  }
  return local_1c;
}
