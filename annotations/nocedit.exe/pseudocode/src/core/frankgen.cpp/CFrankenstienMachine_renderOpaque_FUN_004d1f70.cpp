// Name: core_frankgen.cpp_CFrankenstienMachine_renderOpaque_FUN_004d1f70
// Address: 004d1f70
// Address Range: [[004d1f70, 004d20e4]]
// Convention: __cdecl
// Signature: int __cdecl core_frankgen_cpp_CFrankenstienMachine_renderOpaque_FUN_004d1f70(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

int __cdecl
core_frankgen_cpp_CFrankenstienMachine_renderOpaque_FUN_004d1f70(CFrankenstienMachine *this_ptr)

{
  float fVar1;
  CDemonActor *pCVar2;
  CBoundingBox3D *this_ptr_00;
  int iVar3;
  CFrankenstienMachine *extraout_EBX;
  float10 fVar4;
  double dVar5;
  CFrankenstienMachine *in_stack_ffffffc8;
  float fVar6;
  double input_value;
  
  if (g_CDemonMissionPtr->is_in_editor != 0) {
    pCVar2 = core_frankgen_cpp_CFrankenstienMachine_findLeader_FUN_004d2330(in_stack_ffffffc8);
    this_ptr->master_frame = *(float *)(pCVar2[1].actor_name + 4);
    core_frankgen_cpp_CFrankenstienMachine_FUN_004d2190(this_ptr);
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                          (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffcc);
  iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar3 != 0) {
    fVar6 = -NAN;
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&this_ptr->bed_model,this_ptr->unk1,-1);
    if ((this_ptr->body_model).model_name[0] != '\0') {
      fVar1 = this_ptr->master_frame;
      if ((((0x4400bfff < (int)fVar1) && (0x44e0ffff < (int)fVar1)) && (0x44ed7fff < (int)fVar1)) &&
         (0x44f9ffff < (int)fVar1)) {
        input_value = (double)((this_ptr->master_frame + -2000.0f) * (float)3 *
                              0.005f);
        dVar5 = floor(input_value);
        fVar4 = (float10)(float)((ulonglong)input_value >> 0x20) -
                (float10)dVar5 * (float10)200;
        fVar6 = (float)fVar4;
        if ((float10)100.0f < fVar4) {
          fVar6 = 200.0f - fVar6;
        }
        fVar6 = fVar6 + 99.0f;
        this_ptr = extraout_EBX;
      }
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                (&this_ptr->body_model,fVar6,-1);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
      return iVar3;
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  return iVar3;
}
