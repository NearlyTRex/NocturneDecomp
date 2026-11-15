// Name: core_charactr.cpp_FUN_0042b620
// Address: 0042b620
// Address Range: [[0042b620, 0042b753]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042b620(CDemonActor *param_1)

#include "nocturne.h"

void core_charactr_cpp_FUN_0042b620(CDemonActor *param_1)

{
  int iVar1;
  CVector3f *unaff_ESI;
  int *piVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_1020 [1001];
  CDemonRenderer *this_ptr;
  CVector3f *euler_angles;
  CVector3f *translation;
  CMatrix3x4f local_68;
  float local_38;
  float afStack_34 [2];
  CVector3f local_2c;
  CVector3f local_20;
  CVector3f local_14;
  
  bVar4 = 0;
  if (param_1[0x62].previous_transform_state.orientation.vec.z == 0.0) {
    return;
  }
  piVar2 = (int *)(param_1[6].footstep_sound_code +
                  *(int *)((int)&param_1[0x62].previous_transform_state.orientation + 4) * 0x30 +
                  -0x24);
  pfVar3 = (float *)&local_68;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = (float)*piVar2;
    piVar2 = piVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&local_68,unaff_ESI);
  local_2c.x = local_38;
  *(float *)((int)&local_2c + (uint)bVar4 * -8 + 4) = afStack_34[(uint)bVar4 * -2];
  *(float *)((int)&local_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_xform_cpp_getTranslation_FUN_00592720(&local_68,&local_14);
  translation = &local_20;
  euler_angles = (CVector3f *)&DAT_0265370c;
  local_20.x = local_14.x;
  *(uint *)((int)&local_20 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&local_14 + (uint)bVar4 * -8 + 4);
  this_ptr = DAT_0060b280;
  *(uint *)((int)&local_20 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&local_14 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (this_ptr,euler_angles,translation);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&local_2c,(CVector3f *)0x0);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,(CVector3f *)&param_1[0x62].particle_systems[0].fade_current,
             (CVector3f *)&param_1[0x62].dead1);
  core_charactr_cpp_FUN_0042b760(param_1,&DAT_0265370c);
  engine_drender_cpp_pop_FUN_0046b4a0();
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,(CVector3f *)&param_1[0x62].particle_systems[0].max_particles,
             (CVector3f *)&param_1[0x62].previous_transform_state.position.y);
  core_charactr_cpp_FUN_0042b760(param_1,&DAT_0265370c);
  engine_drender_cpp_pop_FUN_0046b4a0();
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
  return;
}
