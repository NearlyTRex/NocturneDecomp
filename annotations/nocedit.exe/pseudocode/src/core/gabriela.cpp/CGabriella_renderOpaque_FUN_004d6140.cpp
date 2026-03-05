// Name: core_gabriela.cpp_CGabriella_renderOpaque_FUN_004d6140
// Address: 004d6140
// Address Range: [[004d6140, 004d6198] [004d619e, 004d6223]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_renderOpaque_FUN_004d6140(CGabriella *this_ptr)

#include "nocturne.h"

int __cdecl core_gabriela_cpp_CGabriella_renderOpaque_FUN_004d6140(CGabriella *this_ptr)

{
  float fVar1;
  float fVar2;
  CWeapon *pCVar3;
  int iVar4;
  CDemonActor *pCVar5;
  
  iVar4 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0((CCharacter *)this_ptr);
  if (iVar4 != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    core_cloth_cpp_CCloth_render_FUN_0043bae0(&this_ptr->coat_cloth,0);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    pCVar3 = (this_ptr->base).inventory.selected_weapon;
    if (((pCVar3 != (CWeapon *)0x0) &&
        ((*((pCVar3->base).vtable._ub)->renderOpaque)(&pCVar3->base),
        (float)0.90000000000000002 < this_ptr->draw_blend)) &&
       ((pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                            (&((this_ptr->base).inventory.selected_weapon)->base,
                             g_CDynamiteClassInfo.name_hash), pCVar5 == (CDemonActor *)0x0 ||
        (fVar1 = pCVar5[4].location.position.x, fVar2 = pCVar5[4].location.position.y,
        0.0 < SQRT(fVar2 * fVar2 +
                   *(float *)(pCVar5[4].actor_name + 0x1c) * *(float *)(pCVar5[4].actor_name + 0x1c)
                   + fVar1 * fVar1))))) {
      pCVar3 = (this_ptr->base).inventory.selected_weapon;
      (*(((pCVar3->base).vtable._uw)->_uw).fireProjectile)(pCVar3);
      return iVar4;
    }
  }
  return iVar4;
}
