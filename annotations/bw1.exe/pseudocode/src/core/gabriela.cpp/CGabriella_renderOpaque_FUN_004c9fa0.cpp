// Name: core_gabriela.cpp_CGabriella_renderOpaque_FUN_004c9fa0
// Address: 004c9fa0
// Address Range: [[004c9fa0, 004ca083]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_renderOpaque_FUN_004c9fa0(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gabriela_cpp_CGabriella_renderOpaque_FUN_004c9fa0(CGabriella *this_ptr)

{
  CWeapon *this_ptr_00;
  CCharacter *this_ptr_01;
  int iVar1;
  int iVar2;
  
  iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042f240((CCharacter *)this_ptr);
  if (iVar1 != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
    core_cloth_cpp_CCloth_render_FUN_00441800(&this_ptr->coat_cloth,(CDeformableModelInstance *)0x0)
    ;
    engine_drender_cpp_pop_FUN_004839a0();
    this_ptr_00 = (this_ptr->base).inventory.selected_weapon;
    if (((this_ptr_00 != (CWeapon *)0x0) &&
        ((*((this_ptr_00->base).vtable._ub)->renderOpaque)(&this_ptr_00->base),
        (float)_DAT_005e11b4 < this_ptr->draw_blend)) &&
       ((iVar2 = core_actor_cpp_castToClassHash_FUN_0040c600
                           ((this_ptr->base).inventory.selected_weapon,
                            g_CDynamiteClassInfo.name_hash), iVar2 == 0 ||
        (0.0 < SQRT(*(float *)(iVar2 + 0x584) * *(float *)(iVar2 + 0x584) +
                    *(float *)(iVar2 + 0x57c) * *(float *)(iVar2 + 0x57c) +
                    *(float *)(iVar2 + 0x580) * *(float *)(iVar2 + 0x580)))))) {
      this_ptr_01 = (CCharacter *)(this_ptr->base).inventory.selected_weapon;
      (*(((this_ptr_01->base).vtable._uc)->_uc).releaseFromGrab)(this_ptr_01);
      return iVar1;
    }
  }
  return iVar1;
}
