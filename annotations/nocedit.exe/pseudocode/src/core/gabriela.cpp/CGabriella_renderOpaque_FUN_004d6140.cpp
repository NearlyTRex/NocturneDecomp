// Name: core_gabriela.cpp_CGabriella_renderOpaque_FUN_004d6140
// Address: 004d6140
// Address Range: [[004d6140, 004d6198] [004d619e, 004d6223]]
// Convention: __cdecl
// Signature: int core_gabriela.cpp_CGabriella_renderOpaque_FUN_004d6140(CGabriella * this_ptr)

#include "nocturne.h"

int __cdecl core_gabriela_cpp_CGabriella_renderOpaque_FUN_004d6140(CGabriella *this_ptr)

{
  float fVar1;
  float fVar2;
  CWeapon *this_ptr_00;
  int iVar3;
  CDemonActor *pCVar4;
  
  iVar3 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0((CCharacter *)this_ptr);
  if (iVar3 != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    core_cloth_cpp_FUN_0043bae0();
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    this_ptr_00 = (this_ptr->base).inventory.selected_weapon;
    if (((this_ptr_00 != (CWeapon *)0x0) &&
        ((*((this_ptr_00->base).vtable._ub)->renderOpaque)(&this_ptr_00->base),
        (float)0.90000000000000002 < *(float *)(this_ptr->unk + 8))) &&
       ((pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                            (&((this_ptr->base).inventory.selected_weapon)->base,
                             g_CDynamiteClassInfo.name_hash), pCVar4 == (CDemonActor *)0x0 ||
        (fVar1 = pCVar4[4].location.position.x, fVar2 = pCVar4[4].location.position.y,
        0.0 < SQRT(fVar2 * fVar2 +
                   *(float *)(pCVar4[4].actor_name + 0x1c) * *(float *)(pCVar4[4].actor_name + 0x1c)
                   + fVar1 * fVar1))))) {
      (*(((((this_ptr->base).inventory.selected_weapon)->base).vtable._uc)->_uc).cfunc7)();
      return iVar3;
    }
  }
  return iVar3;
}
