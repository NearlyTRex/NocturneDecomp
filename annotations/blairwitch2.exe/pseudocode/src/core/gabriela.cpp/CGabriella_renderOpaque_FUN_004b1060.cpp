// Name: core_gabriela.cpp_CGabriella_renderOpaque_FUN_004b1060
// Address: 004b1060
// Address Range: [[004b1060, 004b1152]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_renderOpaque_FUN_004b1060(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gabriela_cpp_CGabriella_renderOpaque_FUN_004b1060(CGabriella *this_ptr)

{
  CWeapon *this_ptr_00;
  CCharacter *this_ptr_01;
  int iVar1;
  int iVar2;
  
  iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_004254b0((CCharacter *)this_ptr);
  if (iVar1 != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
    core_cloth_cpp_CCloth_render_FUN_005b0fe0(&this_ptr->coat_cloth,(CDeformableModelInstance *)0x0)
    ;
    engine_drender_cpp_pop_FUN_0046b4a0();
    this_ptr_00 = (this_ptr->base).inventories[0].selected_weapons
                  [(this_ptr->base).inventories[0].current_group];
    if (((this_ptr_00 != (CWeapon *)0x0) &&
        ((*((this_ptr_00->base).vtable._ub)->renderOpaque)(&this_ptr_00->base),
        (float)_DAT_005d713b < this_ptr->draw_blend)) &&
       ((iVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                           ((this_ptr->base).inventories[0].selected_weapons
                            [(this_ptr->base).inventories[0].current_group],
                            g_CDynamiteClassInfo.name_hash), iVar2 == 0 ||
        (0.0 < SQRT(*(float *)(iVar2 + 0x6e0) * *(float *)(iVar2 + 0x6e0) +
                    *(float *)(iVar2 + 0x6d8) * *(float *)(iVar2 + 0x6d8) +
                    *(float *)(iVar2 + 0x6dc) * *(float *)(iVar2 + 0x6dc)))))) {
      this_ptr_01 = (CCharacter *)
                    (this_ptr->base).inventories[0].selected_weapons
                    [(this_ptr->base).inventories[0].current_group];
      (*(((this_ptr_01->base).vtable._uc)->_uc).releaseFromGrab)(this_ptr_01);
      return iVar1;
    }
  }
  return iVar1;
}
