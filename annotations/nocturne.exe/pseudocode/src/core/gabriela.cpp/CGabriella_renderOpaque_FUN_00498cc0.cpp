// Name: core_gabriela.cpp_CGabriella_renderOpaque_FUN_00498cc0
// Address: 00498cc0
// Address Range: [[00498cc0, 00498da3]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_renderOpaque_FUN_00498cc0(CGabriella *this_ptr)

#include "nocturne.h"

int __cdecl core_gabriela_cpp_CGabriella_renderOpaque_FUN_00498cc0(CGabriella *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CWeapon *this_ptr_00;
  CCharacter *this_ptr_01;
  int iVar4;
  CDemonActor *pCVar5;
  
  iVar4 = core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440((CCharacter *)this_ptr);
  if (iVar4 != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20((CDemonActor *)this_ptr);
    core_cloth_cpp_CCloth_render_FUN_00437db0(&this_ptr->coat_cloth,(CDeformableModelInstance *)0x0)
    ;
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
    this_ptr_00 = (this_ptr->base).inventory.selected_weapon;
    if (((this_ptr_00 != (CWeapon *)0x0) &&
        ((*((this_ptr_00->base).vtable._ub)->renderOpaque)(&this_ptr_00->base),
        (float)0.90000000000000002 < this_ptr->draw_blend)) &&
       ((pCVar5 = core_actor_cpp_castToClassHash_FUN_0040d890
                            (&((this_ptr->base).inventory.selected_weapon)->base,
                             g_CDynamiteActorType_01bca088.name_hash), pCVar5 == (CDemonActor *)0x0
        || (fVar1 = pCVar5[4].orient.vec.z, fVar2 = pCVar5[4].orient.vec.y,
           fVar3 = pCVar5[4].orient_matrix.m[0].x,
           0.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1))))) {
      this_ptr_01 = (CCharacter *)(this_ptr->base).inventory.selected_weapon;
      (*(((this_ptr_01->base).vtable._uc)->_uc).releaseFromGrab)(this_ptr_01);
      return iVar4;
    }
  }
  return iVar4;
}
