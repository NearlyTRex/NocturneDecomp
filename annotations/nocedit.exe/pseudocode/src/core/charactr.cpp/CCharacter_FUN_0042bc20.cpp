// Name: core_charactr.cpp_CCharacter_FUN_0042bc20
// Address: 0042bc20
// Address Range: [[0042bc20, 0042bcb0]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042bc20(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042bc20(CCharacter *this_ptr)

{
  int iVar1;
  SCollisionInfo *unaff_ESI;
  int *in_stack_00000008;
  
  if (*in_stack_00000008 != 2) {
    iVar1 = (*(this_ptr->base_actor).vtable[1].hasCollision)(&this_ptr->base_actor,unaff_ESI);
    if (iVar1 < 2) {
      if ((*in_stack_00000008 != 1) && (*in_stack_00000008 != 3)) {
        in_stack_00000008[6] =
             (int)(*(float *)(this_ptr->cloth_data + 0x358) * this_ptr->size_scale);
        in_stack_00000008[5] =
             (int)(*(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale);
        if ((float)in_stack_00000008[6] < (float)in_stack_00000008[5]) {
          in_stack_00000008[6] = (int)(this_ptr->model).bounding_box.max.y;
        }
        in_stack_00000008[7] =
             (int)(*(float *)(this_ptr->cloth_data + 0x348) * this_ptr->size_scale);
        return 2;
      }
      in_stack_00000008[8] = (int)&this_ptr->model;
      return 1;
    }
  }
  return 0;
}
