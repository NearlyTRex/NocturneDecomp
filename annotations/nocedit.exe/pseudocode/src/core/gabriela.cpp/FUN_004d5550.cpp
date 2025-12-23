// Name: core_gabriela.cpp_FUN_004d5550
// Address: 004d5550
// Address Range: [[004d5550, 004d586b]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d5550()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_hero_gabriella.cpp_FUN_004d5550(uint param_1, uint
   param_2) */

void core_gabriela_cpp_FUN_004d5550(void)

{
  float fVar1;
  uint *extraout_EAX;
  CVector3f *pCVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  float *pfVar4;
  CMatrix3x4f *pCVar5;
  CMatrix3x4f *pCVar6;
  CMatrix3x4f *pCVar7;
  byte bVar8;
  CCharacter *in_stack_00000004;
  CMatrix3x4f *matrix_b;
  CMatrix3x4f *in_stack_fffffbd6;
  float local_3ac [12];
  float local_37c [12];
  CMatrix3x4f local_34c;
  CVector3f local_31c [4];
  CMatrix3x4f local_2ec;
  CMatrix3x4f local_2bc;
  CMatrix3x4f local_28c;
  CMatrix3x4f local_25c;
  CMatrix3x4f local_22c;
  CMatrix3x4f local_1fc;
  float local_1cc [12];
  CMatrix3x4f local_19c;
  float local_16c [12];
  CMatrix3x4f local_13c;
  float local_10c [12];
  float local_dc [12];
  float local_ac [12];
  float local_7c [12];
  byte local_4c [24];
  CMatrix3x3f local_34;
  
  bVar8 = 0;
  core_charactr_cpp_CCharacter_FUN_0042d090(in_stack_00000004);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_34c,&(in_stack_00000004->base_actor).location.position,
             (CVector3f *)&(in_stack_00000004->base_actor).orient);
  local_34.m[2].z = (float)(in_stack_00000004[2].cloth_data + 0x5058);
  if (*(float *)(in_stack_00000004[2].cloth_data + 0x54fc) < _DAT_0065e7b4) {
    (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5388) + 0x154) + 0xf0))();
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_22c,(CVector3f *)&DAT_02d7b820,(CVector3f *)&DAT_02d7b82c);
    pCVar7 = &local_34c;
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              (&local_22c,
               (in_stack_00000004->model).bone_transform.bone_world_matrices + DAT_02d7b870,pCVar7);
    pfVar4 = local_1cc;
    pCVar6 = &local_1fc;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar6->m[0].w = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar8 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_1fc,pCVar7,in_stack_fffffbd6);
    pfVar4 = local_dc;
  }
  else {
    (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5388) + 0x154) + 0xf0))();
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_13c,(CVector3f *)&DAT_02d7b814,&g_ZeroVector);
    matrix_b = (in_stack_00000004->model).bone_transform.bone_world_matrices + DAT_02d7b88c;
    pCVar7 = &local_13c;
    core_xform_cpp_buildRotationX_FUN_005f6c40((CMatrix3x4f *)0x3fc90fdb,(float)pCVar7);
    pCVar6 = &local_28c;
    pfVar4 = local_16c;
    pCVar5 = &local_28c;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar5->m[0].w = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar8 * -2 + 1) * 4);
    }
    core_xform_cpp_buildRotationY_FUN_005f6cc0((CMatrix3x4f *)0x3fc90fdb,(float)pCVar6);
    pfVar4 = local_3ac;
    pCVar5 = &local_2bc;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar5->m[0].w = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar8 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_2bc,pCVar6,pCVar7);
    pfVar4 = local_37c;
    pCVar6 = &local_25c;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar6->m[0].w = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar8 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_25c,pCVar7,matrix_b);
    pfVar4 = local_ac;
    pCVar7 = &local_19c;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar7->m[0].w = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar8 * -2 + 1) * 4);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_19c,matrix_b,in_stack_fffffbd6);
    fVar1 = local_34.m[2].z;
    pfVar4 = local_7c;
    pCVar7 = &local_2ec;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar7->m[0].w = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
      pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar8 * -2 + 1) * 4);
    }
    iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0
                      (*(CDemonActor **)((int)fVar1 + 0x330),"CCrossbow");
    if (iVar3 != 0) {
      core_xform_cpp_getTranslation_FUN_005f6110
                ((CVector3f *)&local_2ec,(CMatrix3x4f *)(local_4c + 0xc));
      core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CVector3f *)&local_2ec,&local_34);
      local_34.m[0].z =
           (1.0 - *(float *)(in_stack_00000004[2].cloth_data + 0x5530)) * local_34.m[0].z;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&local_2ec,(CVector3f *)(local_4c + 0xc),local_34.m);
    }
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_2ec,&local_34c,in_stack_fffffbd6);
    pfVar4 = local_10c;
  }
  pCVar2 = local_31c;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar2->x = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
    pCVar2 = (CVector3f *)((int)pCVar2 + ((uint)bVar8 * -2 + 1) * 4);
  }
  core_xform_cpp_getTranslation_FUN_005f6110(local_31c,(CMatrix3x4f *)(local_34.m + 1));
  iVar3 = *(int *)(in_stack_00000004[2].cloth_data + 0x5388);
  *(uint *)(iVar3 + 0x20) = *extraout_EAX;
  *(uint *)(iVar3 + 0x24) = extraout_EAX[1];
  *(uint *)(iVar3 + 0x28) = extraout_EAX[2];
  pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(local_31c,(CMatrix3x3f *)local_4c);
  iVar3 = *(int *)(in_stack_00000004[2].cloth_data + 0x5388);
  if ((CVector3f *)(iVar3 + 0x30) != pCVar2) {
    ((CVector3f *)(iVar3 + 0x30))->x = pCVar2->x;
    *(float *)(iVar3 + 0x34) = pCVar2->y;
    *(float *)(iVar3 + 0x38) = pCVar2->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
            (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x5388));
  return;
}
