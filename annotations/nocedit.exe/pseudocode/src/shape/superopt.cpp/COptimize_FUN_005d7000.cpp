// Name: shape_superopt.cpp_COptimize_FUN_005d7000
// Address: 005d7000
// Address Range: [[005d7000, 005d70c5]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_COptimize_FUN_005d7000(COptimize *this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_COptimize_FUN_005d7000(COptimize *this_ptr)

{
  void *ptr;
  int iVar1;
  uint uVar2;
  
  shape_superopt_cpp_CObj_free_FUN_005d2600(&this_ptr->obj);
  uVar2 = 0;
  if (this_ptr->unk5 != 0) {
    iVar1 = 0;
    do {
      shape_superopt_cpp_FUN_005c79f0();
      if (*(int *)(iVar1 + (int)this_ptr->unk6) != 0) {
        ptr = (void *)shape_superopt_cpp_FUN_005c79d0();
        shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
      }
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (uVar2 < (uint)this_ptr->unk5);
  }
  if (this_ptr->unk6 != (void *)0x0) {
    free(this_ptr->unk6);
  }
  this_ptr->unk6 = (void *)0x0;
  this_ptr->unk5 = 0;
  (*this_ptr->vtable->func2)(this_ptr,0xd2f1a9fc,0x3f50624d);
  (*this_ptr->vtable->func4)(this_ptr,0xd2f1a9fc,0x3f50624d);
  (*this_ptr->vtable->func6)(this_ptr,0xd2f1a9fc,0x3f50624d);
  (*this_ptr->vtable->func8)(this_ptr,0x10);
  return;
}
