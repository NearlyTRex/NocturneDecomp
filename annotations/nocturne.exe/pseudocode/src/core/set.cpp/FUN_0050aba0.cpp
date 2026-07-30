// Name: core_set.cpp_FUN_0050aba0
// Address: 0050aba0
// Address Range: [[0050aba0, 0050ad16]]
// Convention: unknown
// Signature: int core_set_cpp_FUN_0050aba0(CDemonSet *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_set_cpp_FUN_0050aba0(CDemonSet *param_1)

{
  CVector3f *pCVar1;
  uint *puVar2;
  CDemonActor *pCVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  CVector3f local_2c [2];
  
  iVar5 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  fVar4 = *(float *)(iVar5 + 0x20) -
          *(float *)((int)&param_1->cameras[0].rotation_matrix +
                    (int)param_1->renderable_actors[0x773] * 0x1a0 + -0x18);
  local_2c[0].x =
       (*(float *)(iVar5 + 0x24) -
       *(float *)((int)&param_1->cameras[0].rotation_matrix +
                 (int)param_1->renderable_actors[0x773] * 0x1a0 + -0x14)) + (float)4;
  fVar8 = (float10)*(float *)(iVar5 + 0x28) -
          (float10)*(float *)((int)&param_1->cameras[0].rotation_matrix +
                             (int)param_1->renderable_actors[0x773] * 0x1a0 + -0x10);
  local_2c[0].y = (float)fVar8;
  atan2((float10)fVar4,fVar8);
  fVar8 = SQRT((float10)7.40862e-39 * (float10)7.40862e-39 +
               (float10)local_2c[0].x * (float10)local_2c[0].x);
  fVar9 = atan2((float10)fVar4,fVar8);
  local_2c[0].z = 0.0;
  local_2c[0].y = (float)fVar8;
  local_2c[0].x = (float)-fVar9;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
            ((CMatrix3x3f *)&DAT_01fb8618,local_2c);
  pCVar3 = param_1->renderable_actors[0x773];
  pCVar1 = (CVector3f *)((int)&param_1->cameras[0].rotation_matrix + (int)pCVar3 * 0x1a0 + -0xc);
  if (pCVar1 != local_2c) {
    pCVar1->x = local_2c[0].x;
    *(float *)((int)&param_1->cameras[0].rotation_matrix + (int)pCVar3 * 0x1a0 + -8) = local_2c[0].y
    ;
    *(float *)((int)&param_1->cameras[0].rotation_matrix + (int)pCVar3 * 0x1a0 + -4) = local_2c[0].z
    ;
  }
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290((CDemonCamera *)&DAT_01fb8508,0);
  core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(param_1,0x10);
  core_set_cpp_CDemonSet_renderOpaqueActors_FUN_0050a640(param_1);
  iVar6 = 0;
  iVar5 = core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(&DAT_01fb8508,0);
  if (0 < _DAT_01fb9b54) {
    iVar7 = 0;
    do {
      puVar2 = (uint *)(&DAT_01fb9b58 + iVar7);
      iVar7 = iVar7 + 4;
      iVar6 = iVar6 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970((CDemonLight *)*puVar2);
      iVar5 = _DAT_01fb9b54;
    } while (iVar6 < _DAT_01fb9b54);
  }
  return iVar5;
}
