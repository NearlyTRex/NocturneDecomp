// Name: core_moloch.cpp_CMoloch_renderOpaque_FUN_00521070
// Address: 00521070
// Address Range: [[00521070, 005211a7]]
// Convention: __cdecl
// Signature: int __cdecl core_moloch_cpp_CMoloch_renderOpaque_FUN_00521070(CMoloch *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_moloch_cpp_CMoloch_renderOpaque_FUN_00521070(CMoloch *this_ptr)

{
  byte *this_ptr_00;
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar5 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_00484180(DAT_00612560);
  if (iVar1 == 0) {
    *(uint *)&this_ptr->field_0x27bc = 0;
  }
  if (*(int *)&this_ptr->field_0x24fc == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr,0);
    puVar3 = auStack_34;
    puVar4 = auStack_1c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_004207b0(auStack_1c);
    if (iVar1 != 0) {
      *(uint *)&this_ptr->field_0x27bc = 1;
      if (this_ptr->morphing == 0) {
        core_charactr_cpp_CCharacter_renderCharacter_FUN_0042e960((CCharacter *)this_ptr);
      }
      else {
        this_ptr_00 = &this_ptr->field_0x22424;
        core_morph_cpp_CMorph_updateModelFromDeformable_FUN_00523290
                  ((CMorph *)this_ptr_00,0,(CDeformableModelInstance *)&this_ptr->field_0x158,0);
        core_morph_cpp_CMorph_updateModelFromDeformable_FUN_00523290
                  ((CMorph *)this_ptr_00,1,(CDeformableModelInstance *)&this_ptr->field_0x1ffac,0);
        core_morph_cpp_CMorph_render_FUN_005237e0
                  ((CMorph *)this_ptr_00,this_ptr->morph_timer / _DAT_00603ef8);
      }
      if (_DAT_01d39d34 != 0) {
        iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
        if (iVar2 == 0) {
          core_motion_cpp_FUN_005254b0
                    ((CMotionController *)&this_ptr->field_0x158,(CDemonActor *)this_ptr);
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0x58))(this_ptr);
        }
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
    return iVar1;
  }
  return 0;
}
