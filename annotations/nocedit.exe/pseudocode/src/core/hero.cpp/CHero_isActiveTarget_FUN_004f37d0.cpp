// Name: core_hero.cpp_CHero_isActiveTarget_FUN_004f37d0
// Address: 004f37d0
// Address Range: [[004f37d0, 004f388b]]
// Convention: __cdecl
// Signature: int core_hero.cpp_CHero_isActiveTarget_FUN_004f37d0(CHero * this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_isActiveTarget_FUN_004f37d0(CHero *this_ptr)

{
  int iVar1;
  
  iVar1 = (*(((this_ptr->base).base.vtable._uc)->_uc).isDamageable)(&this_ptr->base);
  if (iVar1 < 2) {
    if (iVar1 == 1) {
      return 1;
    }
    if ((((((*(int *)this_ptr->unk2 != 0) || (*(int *)(this_ptr->unk2 + 4) != 0)) ||
          (*(int *)(this_ptr->unk2 + 0xc) != 0)) ||
         ((*(int *)(this_ptr->unk2 + 0x10) != 0 || (*(int *)(this_ptr->unk2 + 0x14) != 0)))) ||
        ((*(int *)(this_ptr->unk2 + 0x18) != 0 ||
         ((*(int *)(this_ptr->unk2 + 0x1c) != 0 ||
          ((float)0.10000000000000001 < ABS(*(float *)(this_ptr->unk2 + 0x20)))))))) ||
       (((float)0.10000000000000001 < ABS(*(float *)(this_ptr->unk2 + 0x24)) ||
        (((float)0.10000000000000001 < ABS(*(float *)(this_ptr->unk2 + 0x28)) ||
         (*(int *)((this_ptr->base).unk1 + 4) == 0)))))) {
      return 1;
    }
  }
  return 0;
}
