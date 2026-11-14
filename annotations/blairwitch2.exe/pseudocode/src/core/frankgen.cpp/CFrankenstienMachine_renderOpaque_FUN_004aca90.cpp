// Name: core_frankgen.cpp_CFrankenstienMachine_renderOpaque_FUN_004aca90
// Address: 004aca90
// Address Range: [[004aca90, 004acc1b]]
// Convention: __cdecl
// Signature: int __cdecl core_frankgen_cpp_CFrankenstienMachine_renderOpaque_FUN_004aca90(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_frankgen_cpp_CFrankenstienMachine_renderOpaque_FUN_004aca90(CFrankenstienMachine *this_ptr)

{
  float fVar1;
  CDemonActor *pCVar2;
  int iVar3;
  uint unaff_EBP;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float10 fVar7;
  ulonglong in_stack_ffffffb0;
  uint uVar8;
  float fStack_48;
  uint auStack_44 [4];
  uint auStack_34 [2];
  byte auStack_2c [28];
  
  uVar8 = (uint)((ulonglong)in_stack_ffffffb0 >> 0x20);
  bVar6 = 0;
  stack0xffffffec = __BITCAST_DOUBLE(CONCAT44(unaff_EBP,auStack_2c._24_4_));
  if (*(int *)(0x01D182F0 + 0x1008) != 0) {
    pCVar2 = core_frankgen_cpp_findLeader_FUN_004ace60();
    this_ptr->master_frame = *(float *)(pCVar2[1].actor_name + 4);
    core_frankgen_cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004accb0(this_ptr);
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar4 = auStack_44;
  puVar5 = auStack_34;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  iVar3 = core_box_cpp_FUN_0041a840(CONCAT44(uVar8,auStack_2c));
  if (iVar3 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
              (&this_ptr->bed_model,this_ptr->part_frame,-1);
    if ((this_ptr->body_model).model_name[0] != '\0') {
      fVar1 = this_ptr->master_frame;
      if ((int)fVar1 < 0x4400c000) {
        fStack_48 = 201.0;
      }
      else if ((int)fVar1 < 0x44e10000) {
        fStack_48 = 0.0;
      }
      else if ((int)fVar1 < 0x44ed8000) {
        fStack_48 = this_ptr->master_frame + _DAT_005d6ccd;
      }
      else if ((int)fVar1 < 0x44fa0000) {
        fStack_48 = 100.0;
      }
      else {
        fVar1 = (this_ptr->master_frame + _DAT_005d6ca5) * (float)_DAT_005d6ca9;
        join_0x00000008_0x00000000_ = floor((double)(fVar1 * _DAT_005d6cb1))
        ;
        fVar7 = (float10)fVar1 - (float10)join_0x00000008_0x00000000_ * (float10)_DAT_005d6cb9;
        fStack_48 = (float)fVar7;
        if ((float10)_DAT_005d6cc1 < fVar7) {
          fStack_48 = _DAT_005d6cc5 - fStack_48;
        }
        fStack_48 = fStack_48 + _DAT_005d6cc9;
      }
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
                (&this_ptr->body_model,fStack_48,-1);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
      return iVar3;
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
  return iVar3;
}
