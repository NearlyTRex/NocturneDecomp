// Name: core_emitter.cpp_CEmitter_renderBackground_FUN_004a8a80
// Address: 004a8a80
// Address Range: [[004a8a80, 004a8ac9]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_renderBackground_FUN_004a8a80(CEmitter *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl
core_emitter_cpp_CEmitter_renderBackground_FUN_004a8a80(CEmitter *this_ptr,int layer_flag)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  float fStack_1c;
  
  if (layer_flag == 0) {
    return;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                          (&this_ptr->base,(CBoundingBox3D *)&fStack_1c);
  fStack_1c = 6.845583e-39;
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  *(int *)(this_ptr->unk6 + 0x44) = iVar1;
  fStack_1c = 6.845604e-39;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  return;
}
