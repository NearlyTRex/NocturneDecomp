// Name: core_gabriela.cpp_CGabriella_renderOpaque_FUN_004b1060
// Address: 004b1060
// Address Range: [[004b1060, 004b1152]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_renderOpaque_FUN_004b1060(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gabriela_cpp_CGabriella_renderOpaque_FUN_004b1060(CGabriella *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_004254b0((CCharacter *)this_ptr);
  if (iVar1 != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
    core_cloth_cpp_CCloth_render_FUN_005b0fe0
              ((CCloth *)&this_ptr->field_0x25680,(CDeformableModelInstance *)0x0);
    engine_matrix_c_pop_FUN_0046b4a0();
    iVar2 = *(int *)(&this_ptr->field_0x2498c + *(int *)&this_ptr->field_0x247e4 * 4);
    if (((iVar2 != 0) &&
        ((**(code **)(*(int *)(iVar2 + 0x2b0) + 0x18))(iVar2),
        (float)_DAT_005d713b < this_ptr->draw_blend)) &&
       ((iVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (*(uint *)
                             (&this_ptr->field_0x2498c + *(int *)&this_ptr->field_0x247e4 * 4),
                            g_CDynamiteClassInfo.name_hash), iVar2 == 0 ||
        (0.0 < SQRT(*(float *)(iVar2 + 0x6e0) * *(float *)(iVar2 + 0x6e0) +
                    *(float *)(iVar2 + 0x6d8) * *(float *)(iVar2 + 0x6d8) +
                    *(float *)(iVar2 + 0x6dc) * *(float *)(iVar2 + 0x6dc)))))) {
      (**(code **)(*(int *)(*(int *)(&this_ptr->field_0x2498c + *(int *)&this_ptr->field_0x247e4 * 4
                                    ) + 0x2b0) + 0xf8))
                (*(int *)(&this_ptr->field_0x2498c + *(int *)&this_ptr->field_0x247e4 * 4));
      return iVar1;
    }
  }
  return iVar1;
}
