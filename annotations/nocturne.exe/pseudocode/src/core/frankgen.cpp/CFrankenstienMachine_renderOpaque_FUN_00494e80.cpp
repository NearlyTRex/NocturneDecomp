// Name: core_frankgen.cpp_CFrankenstienMachine_renderOpaque_FUN_00494e80
// Address: 00494e80
// Address Range: [[00494e80, 00494ff6]]
// Convention: __cdecl
// Signature: int __cdecl core_frankgen_cpp_CFrankenstienMachine_renderOpaque_FUN_00494e80(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

int __cdecl core_frankgen_cpp_CFrankenstienMachine_renderOpaque_FUN_00494e80(CFrankenstienMachine *this_ptr)

{
  float fVar1;
  CDemonActor *pCVar2;
  CBoundingBox3D *this_ptr_00;
  int iVar3;
  float10 fVar4;
  float fStack_38;
  CBoundingBox3D local_34;
  double dStack_1c;
  
  if (g_CDemonMission_PTR_005baf90->is_in_editor != 0) {
    pCVar2 = core_frankgen_cpp_findLeader_FUN_00495240();
    this_ptr->master_frame = *(float *)(pCVar2[1].actor_name + 4);
    core_frankgen_cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004950a0(this_ptr);
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_34);
  iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
  if (iVar3 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              (&this_ptr->bed_model,this_ptr->part_frame,-1);
    if ((this_ptr->body_model).model_name[0] != '\0') {
      fVar1 = this_ptr->master_frame;
      if ((int)fVar1 < 0x4400c000) {
        fStack_38 = 201.0;
      }
      else if ((int)fVar1 < 0x44e10000) {
        fStack_38 = 0.0;
      }
      else if ((int)fVar1 < 0x44ed8000) {
        fStack_38 = this_ptr->master_frame + -1800.0f;
      }
      else if ((int)fVar1 < 0x44fa0000) {
        fStack_38 = 100.0;
      }
      else {
        fVar1 = (this_ptr->master_frame + -2000.0f) * (float)3;
        dStack_1c = floor((double)(fVar1 * 0.005f));
        fVar4 = (float10)fVar1 - (float10)dStack_1c * (float10)200;
        fStack_38 = (float)fVar4;
        if ((float10)100.0f < fVar4) {
          fStack_38 = 200.0f - fStack_38;
        }
        fStack_38 = fStack_38 + 99.0f;
      }
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                (&this_ptr->body_model,fStack_38,-1);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
      return iVar3;
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
  return iVar3;
}
