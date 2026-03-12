// Name: core_frankgen.cpp_CFrankenstienMachine_renderOpaque_FUN_004d1f70
// Address: 004d1f70
// Address Range: [[004d1f70, 004d20e4]]
// Convention: __cdecl
// Signature: int __cdecl core_frankgen_cpp_CFrankenstienMachine_renderOpaque_FUN_004d1f70(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

int __cdecl core_frankgen_cpp_CFrankenstienMachine_renderOpaque_FUN_004d1f70(CFrankenstienMachine *this_ptr)

{
  float fVar2;
  CDemonActor *pCVar2;
  CBoundingBox3D *this_ptr_00;
  int iVar3;
  float10 fVar4;
  double dVar5;
  float fStack_30;
  float fVar1;
  
  if (g_CDemonMissionPtr->is_in_editor != 0) {
    pCVar2 = core_frankgen_cpp_findLeader_FUN_004d2330();
    this_ptr->master_frame = *(float *)(pCVar2[1].actor_name + 4);
    core_frankgen_cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004d2190(this_ptr);
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                          (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffcc);
  iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar3 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&this_ptr->bed_model,this_ptr->part_frame,-1);
    if ((this_ptr->body_model).model_name[0] != '\0') {
      fVar1 = this_ptr->master_frame;
      if ((int)fVar1 < 0x4400c000) {
        fStack_30 = 201.0;
      }
      else if ((int)fVar1 < 0x44e10000) {
        fStack_30 = 0.0;
      }
      else if ((int)fVar1 < 0x44ed8000) {
        fStack_30 = this_ptr->master_frame + -1800.0f;
      }
      else if ((int)fVar1 < 0x44fa0000) {
        fStack_30 = 100.0;
      }
      else {
        fVar2 = (this_ptr->master_frame + -2000.0f) * (float)3;
        dVar5 = floor((double)(fVar2 * 0.005f));
        fVar4 = (float10)fVar2 - (float10)dVar5 * (float10)200;
        fStack_30 = (float)fVar4;
        if ((float10)100.0f < fVar4) {
          fStack_30 = 200.0f - fStack_30;
        }
        fStack_30 = fStack_30 + 99.0f;
      }
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                (&this_ptr->body_model,fStack_30,-1);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
      return iVar3;
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  return iVar3;
}
