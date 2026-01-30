// Name: shape_superopt.cpp_COptimize_FUN_005d76e0
// Address: 005d76e0
// Address Range: [[005d76e0, 005d7743]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_COptimize_FUN_005d76e0(COptimize *this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_COptimize_FUN_005d76e0(COptimize *this_ptr)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  int extraout_EAX;
  int in_stack_00000008;
  
  pvVar2 = realloc(this_ptr->unk6,(this_ptr->unk5 + 1) * 4);
  if (pvVar2 != (void *)0x0) {
    if (in_stack_00000008 == 0) {
      pvVar3 = shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(0x34);
      in_stack_00000008 = 0;
      if (pvVar3 != (void *)0x0) {
        shape_superopt_cpp_FUN_005c79a0();
        in_stack_00000008 = extraout_EAX;
      }
      if (in_stack_00000008 == 0) {
        return;
      }
    }
    iVar1 = this_ptr->unk5;
    this_ptr->unk6 = pvVar2;
    this_ptr->unk5 = iVar1 + 1;
    *(int *)((int)this_ptr->unk6 + iVar1 * 4) = in_stack_00000008;
  }
  return;
}
