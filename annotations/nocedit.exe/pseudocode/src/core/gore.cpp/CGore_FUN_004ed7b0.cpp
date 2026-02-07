// Name: core_gore.cpp_CGore_FUN_004ed7b0
// Address: 004ed7b0
// Address Range: [[004ed7b0, 004ed826]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_FUN_004ed7b0(CGore *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_FUN_004ed7b0(CGore *this_ptr)

{
  int iVar1;
  CBloodParticle *this_ptr_00;
  
  if ((g_CGamePtr->blood_flag != 0) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar1 == 0)) {
    core_set_cpp_CDemonSet_FUN_0056d380(g_CDemonSetPtr);
    this_ptr_00 = DAT_02d833d4;
    core_gore_cpp_FUN_004eb9d0();
    do {
      if (0.0 < (this_ptr_00->base).lifetime_remaining) {
        (*((this_ptr_00->base).vtable)->render)(&this_ptr_00->base);
      }
      this_ptr_00 = this_ptr_00 + 1;
    } while (this_ptr_00 != (CBloodParticle *)&DAT_02d873d4);
  }
  return;
}
