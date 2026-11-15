// Name: core_shadow.cpp_FUN_00545710
// Address: 00545710
// Address Range: [[00545710, 00545906]]
// Convention: unknown
// Signature: int core_shadow_cpp_FUN_00545710(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_shadow_cpp_FUN_00545710(CCharacter *param_1)

{
  float render_alpha;
  CDemonRenderer *this_ptr;
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  double dVar7;
  float afStackY_101c [1000];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&(param_1->model).base);
  iVar1 = _DAT_01d1a0a4;
  iVar2 = _DAT_01d5ba14 * 4;
  iVar3 = *(int *)(iVar2 + 0x1d5ba04);
  if (iVar3 != 0) {
    fStack_34 = (param_1->base).location.position.x - *(float *)(iVar3 + 0x20);
    fStack_30 = (param_1->base).location.position.y - *(float *)(iVar3 + 0x24);
    fStack_2c = (param_1->base).location.position.z - *(float *)(iVar3 + 0x28);
    fStack_28 = fStack_34;
    *(uint *)((int)&stack0xffffffdc + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffd0 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffd4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    fStack_14 = fStack_20 * fStack_20 + fStack_28 * fStack_28 + fStack_24 * fStack_24;
    param_1->was_rendered_opaque = 0;
    fStack_1c = (float)(((int)fStack_14 >> 1) + iVar1);
    fStack_18 = *(float *)(*(int *)(iVar2 + 0x1d5ba04) + 0x20b88);
    if (fStack_18 < fStack_1c) {
      param_1[1].model.bone_origins[0x1d].x = 0.0;
    }
    else {
      dVar7 = round
                        ((double)(((fStack_18 - fStack_1c) / fStack_18) * (float)_DAT_005d1366));
      param_1[1].model.bone_origins[0x1d].x = (float)(int)ROUND(dVar7);
    }
    if (*(int *)(param_1[1].base.actor_name + 4) == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(&param_1->base);
      (*((param_1->base).vtable._ub)->getBoundingBox)(&param_1->base,(CBoundingBox3D *)0x0);
      puVar4 = (uint *)&stack0xffffffb0;
      puVar5 = (uint *)&stack0xffffff98;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      iVar3 = core_box_cpp_FUN_0041daf0(&stack0xffffff98);
      this_ptr = DAT_005f2afc;
      if (iVar3 != 0) {
        render_alpha = param_1[1].model.bone_origins[0x1d].x;
        param_1->was_rendered_opaque = 1;
        engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(this_ptr,(int)render_alpha);
        engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
        engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(DAT_005f2afc,1);
        core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0
                  (&param_1->model,-1,0x2e7,1,0);
        engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(DAT_005f2afc);
        if (_DAT_01d8e40c != 0) {
          core_motion_cpp_CMotionController_render_FUN_004fcdc0
                    (&(param_1->model).base,&param_1->base);
        }
        if (0.0 < param_1->bind_time) {
          core_charactr_cpp_CCharacter_renderEthereal_FUN_0042f310(param_1);
        }
        core_charactr_cpp_CCharacter_renderFlames_FUN_0042f6f0(param_1);
      }
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(&param_1->base);
      return param_1->was_rendered_opaque;
    }
  }
  return 0;
}
