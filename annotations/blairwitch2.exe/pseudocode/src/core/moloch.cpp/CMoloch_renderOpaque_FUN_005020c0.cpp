// Name: core_moloch.cpp_CMoloch_renderOpaque_FUN_005020c0
// Address: 005020c0
// Address Range: [[005020c0, 005021f7]]
// Convention: __cdecl
// Signature: int __cdecl core_moloch_cpp_CMoloch_renderOpaque_FUN_005020c0(CMoloch *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_moloch_cpp_CMoloch_renderOpaque_FUN_005020c0(CMoloch *this_ptr)

{
  CMorph *this_ptr_00;
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar5 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80(DAT_0060b280);
  if (iVar1 == 0) {
    *(uint *)&this_ptr->field_0x2828 = 0;
  }
  if (*(int *)&this_ptr->field_0x2568 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
    (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x24))(this_ptr,0);
    puVar3 = auStack_34;
    puVar4 = auStack_1c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_0041a840(auStack_1c);
    if (iVar1 != 0) {
      *(uint *)&this_ptr->field_0x2828 = 1;
      if (this_ptr->morphing == 0) {
        core_charactr_cpp_CCharacter_renderCharacter_FUN_00424bd0((CCharacter *)this_ptr);
      }
      else {
        this_ptr_00 = &this_ptr->morph;
        core_morph_cpp_CMorph_updateModelFromDeformable_FUN_005b7150
                  (this_ptr_00,0,(CDeformableModelInstance *)&this_ptr->field_0x2b4,0);
        core_morph_cpp_CMorph_updateModelFromDeformable_FUN_005b7150
                  (this_ptr_00,1,&this_ptr->model,0);
        core_morph_cpp_CMorph_render_FUN_005b76a0(this_ptr_00,this_ptr->morph_timer / _DAT_005fa3d8)
        ;
      }
      if (_DAT_01d1cdc8 != 0) {
        iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
        if (iVar2 == 0) {
          core_motion_cpp_FUN_005042e0
                    ((CMotionController *)&this_ptr->field_0x2b4,(CDemonActor *)this_ptr);
          (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x60))(this_ptr);
        }
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
    return iVar1;
  }
  return 0;
}
