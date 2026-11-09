// Name: core_gabriela.cpp_CGabriella_renderOpaque_FUN_004c9fa0
// Address: 004c9fa0
// Address Range: [[004c9fa0, 004ca083]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_renderOpaque_FUN_004c9fa0(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gabriela_cpp_CGabriella_renderOpaque_FUN_004c9fa0(CGabriella *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_charactr_cpp_FUN_0042f240((CCharacter *)this_ptr);
  if (iVar1 != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
    core_cloth_cpp_CCloth_render_FUN_00441800
              ((CCloth *)&this_ptr->field_0x1ffec,(CDeformableModelInstance *)0x0);
    engine_matrix_c_pop_FUN_004839a0();
    iVar2 = *(int *)&this_ptr->field_0x1fe20;
    if (((iVar2 != 0) &&
        ((**(code **)(*(int *)(iVar2 + 0x154) + 0x10))(iVar2),
        (float)_DAT_005e11b4 < *(float *)&this_ptr->field_0x1ffb4)) &&
       ((iVar2 = core_actor_cpp_castToClassHash_FUN_0040c600
                           (*(uint *)&this_ptr->field_0x1fe20,g_CDynamiteClassInfo.name_hash),
        iVar2 == 0 ||
        (0.0 < SQRT(*(float *)(iVar2 + 0x584) * *(float *)(iVar2 + 0x584) +
                    *(float *)(iVar2 + 0x57c) * *(float *)(iVar2 + 0x57c) +
                    *(float *)(iVar2 + 0x580) * *(float *)(iVar2 + 0x580)))))) {
      (**(code **)(*(int *)(*(int *)&this_ptr->field_0x1fe20 + 0x154) + 0xf0))
                (*(int *)&this_ptr->field_0x1fe20);
      return iVar1;
    }
  }
  return iVar1;
}
