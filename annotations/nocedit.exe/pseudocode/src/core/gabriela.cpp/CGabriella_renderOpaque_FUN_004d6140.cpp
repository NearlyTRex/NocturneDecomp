// Name: core_gabriela.cpp_CGabriella_renderOpaque_FUN_004d6140
// Address: 004d6140
// Address Range: [[004d6140, 004d6223]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_renderOpaque_FUN_004d6140(CGabriella *this_ptr)

#include "nocturne.h"

int __cdecl core_gabriela_cpp_CGabriella_renderOpaque_FUN_004d6140(CGabriella *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CWeapon *pCVar4;
  int iVar5;
  CDynamite *pCVar5;
  
  iVar5 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0((CCharacter *)this_ptr);
  if (iVar5 != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    core_cloth_cpp_CCloth_render_FUN_0043bae0(&this_ptr->coat_cloth,(CDeformableModelInstance *)0x0)
    ;
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
    pCVar4 = (this_ptr->base).inventory.selected_weapon;
    if (((pCVar4 != (CWeapon *)0x0) &&
        ((*((pCVar4->base).vtable._ub)->renderOpaque)(&pCVar4->base),
        (float)0.90000000000000002 < this_ptr->draw_blend)) &&
       ((pCVar5 = (CDynamite *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (&((this_ptr->base).inventory.selected_weapon)->base,
                             g_CDynamiteClassInfo.name_hash), pCVar5 == (CDynamite *)0x0 ||
        (fVar1 = (pCVar5->toss_velocity).y, fVar2 = (pCVar5->toss_velocity).x,
        fVar3 = (pCVar5->toss_velocity).z, 0.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1)
        )))) {
      pCVar4 = (this_ptr->base).inventory.selected_weapon;
      (*(((pCVar4->base).vtable._uw)->_uw).fireProjectile)(pCVar4);
      return iVar5;
    }
  }
  return iVar5;
}
