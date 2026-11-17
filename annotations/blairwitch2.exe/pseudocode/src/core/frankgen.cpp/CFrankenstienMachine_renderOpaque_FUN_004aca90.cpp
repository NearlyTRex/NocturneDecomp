// Name: core_frankgen.cpp_CFrankenstienMachine_renderOpaque_FUN_004aca90
// Address: 004aca90
// Address Range: [[004aca90, 004acc1b]]
// Convention: __cdecl
// Signature: int __cdecl core_frankgen_cpp_CFrankenstienMachine_renderOpaque_FUN_004aca90(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

int __cdecl core_frankgen_cpp_CFrankenstienMachine_renderOpaque_FUN_004aca90(CFrankenstienMachine *this_ptr)

{
  float fVar1;
  CDemonActor *pCVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
  double dVar9;
  ulonglong in_stack_ffffffb0;
  float fStack_48;
  uint auStack_44 [4];
  uint auStack_34 [2];
  CBoundingBox3D CStack_2c;
  
  iVar3 = (int)((ulonglong)in_stack_ffffffb0 >> 0x20);
  bVar7 = 0;
  if (g_CDemonMission_PTR_00618170->is_in_editor != 0) {
    pCVar2 = core_frankgen_cpp_findLeader_FUN_004ace60();
    this_ptr->master_frame = *(float *)(pCVar2[1].actor_name + 4);
    core_frankgen_cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004accb0(this_ptr);
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar5 = auStack_44;
  puVar6 = auStack_34;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041a840(&CStack_2c,iVar3);
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
        fStack_48 = this_ptr->master_frame + -1800.0f;
      }
      else if ((int)fVar1 < 0x44fa0000) {
        fStack_48 = 100.0;
      }
      else {
        fVar1 = (this_ptr->master_frame + -2000.0f) * (float)3;
        dVar9 = floor((double)(fVar1 * 0.005f));
        fVar8 = (float10)fVar1 - (float10)dVar9 * (float10)200;
        fStack_48 = (float)fVar8;
        if ((float10)100.0f < fVar8) {
          fStack_48 = 200.0f - fStack_48;
        }
        fStack_48 = fStack_48 + 99.0f;
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
