// Name: core_charactr.cpp_FUN_0042b620
// Address: 0042b620
// Address Range: [[0042b620, 0042b753]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042b620(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_charactr_cpp_FUN_0042b620(CDemonActor *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1020 [1001];
  CDemonRenderer *this_ptr;
  CVector3f *euler_angles;
  CVector3f *translation;
  float local_38;
  CVector3f local_2c;
  CVector3f local_20;
  float local_14;
  uint auStack_10 [2];
  
  bVar4 = 0;
  if (*(int *)&param_1[0x62].field_0x140 == 0) {
    return;
  }
  puVar2 = (uint *)(&param_1[6].field_0xfc + *(int *)&param_1[0x62].field_0x13c * 0x30);
  puVar3 = (uint *)&stack0xffffff98;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&stack0xffffff98);
  local_2c.x = local_38;
  *(uint *)((int)&local_2c + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&stack0xffffffcc + (uint)bVar4 * 0xfffffffe * 4);
  *(uint *)((int)&local_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       auStack_10[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -8];
  core_xform_cpp_FUN_00592720(&stack0xffffff98);
  translation = &local_20;
  euler_angles = (CVector3f *)&DAT_0265370c;
  local_20.x = local_14;
  *(uint *)((int)&local_20 + (uint)bVar4 * -8 + 4) = auStack_10[(uint)bVar4 * -2];
  this_ptr = DAT_0060b280;
  *(uint *)((int)&local_20 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       auStack_10[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (this_ptr,euler_angles,translation);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&local_2c,(CVector3f *)0x0);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,(CVector3f *)&param_1[0x62].field_0x160,
             (CVector3f *)&param_1[0x62].field_0x124);
  core_charactr_cpp_FUN_0042b760(param_1,&DAT_0265370c);
  engine_matrix_c_pop_FUN_0046b4a0();
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,(CVector3f *)&param_1[0x62].field_0x16c,
             (CVector3f *)&param_1[0x62].field_0x130);
  core_charactr_cpp_FUN_0042b760(param_1,&DAT_0265370c);
  engine_matrix_c_pop_FUN_0046b4a0();
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
  return;
}
