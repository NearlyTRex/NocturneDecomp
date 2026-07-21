// Name: FUN_0053c800
// Address: 0053c800
// Address Range: [[0053c800, 0053cf8b]]
// Convention: unknown
// Signature: undefined4 FUN_0053c800(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0053c800(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  int iVar6;
  uint *puVar7;
  float fVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  int iVar13;
  uint local_80;
  uint local_78;
  int iStack_2c;
  int local_28;
  
  if ((((*(int *)(param_1 + 0x1fa08) == 0) && (*(int *)(param_1 + 0x24f0) != 0)) &&
      ((*(int *)(param_1 + 0x2a84) == 0xe ||
       (fVar5 = (float)core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                                 (param_1,0), (float)_DAT_00595bd7 <= fVar5)))) &&
     (fVar5 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                               (param_1 + 0x150,0), 1.0 <= fVar5)) {
    iVar6 = *(int *)(param_1 + 0x24f0);
    if ((iVar6 == 0) ||
       (iVar6 = (**(code **)(*(int *)(iVar6 + 0x14c) + 0x7c))(iVar6,param_1), iVar6 != 4)) {
      for (local_28 = 0; local_28 < *(int *)(0x01E57284 + 0x14cd6c); local_28 = local_28 + 1) {
        iVar6 = core_actor_cpp_castToClassHash_FUN_0040d890();
        if ((iVar6 != 0) &&
           (iVar9 = core_dest_cpp_CActorDestination_acceptsActor_FUN_0044bab0(), iVar9 != 0)) {
          pfVar10 = (float *)core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290();
          pfVar11 = (float *)core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290();
          fVar5 = *pfVar11;
          fVar1 = *pfVar10;
          fVar8 = pfVar11[1];
          fVar12 = pfVar10[1];
          fVar2 = pfVar11[2];
          fVar3 = pfVar10[2];
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"Delta to dest : %3.2f,%3.2f,%3.2f\n",
                     (double)(fVar5 - fVar1),(double)(fVar8 - fVar12));
          if ((((0.0 < fVar2 - fVar3) &&
               ((fVar2 - fVar3 < (float)_DAT_00595bdf && (ABS(fVar5 - fVar1) < (float)_DAT_00595be7)
                ))) && (dVar4 = (double)(fVar8 - fVar12), 0.0 < dVar4)) && (dVar4 < _DAT_00595bef))
          {
            *(uint *)(param_1 + 0x1faa0) = 2;
            if ((uint *)(param_1 + 0x1fa20) != (uint *)(iVar6 + 0x20)) {
              *(uint *)(param_1 + 0x1fa20) = *(uint *)(iVar6 + 0x20);
              *(uint *)(param_1 + 0x1fa24) = *(uint *)(iVar6 + 0x24);
              *(uint *)(param_1 + 0x1fa28) = *(uint *)(iVar6 + 0x28);
            }
            if ((uint *)(param_1 + 0x1fa2c) != (uint *)(iVar6 + 0x30)) {
              *(uint *)(param_1 + 0x1fa2c) = *(uint *)(iVar6 + 0x30);
              *(uint *)(param_1 + 0x1fa30) = *(uint *)(iVar6 + 0x34);
              *(uint *)(param_1 + 0x1fa34) = *(uint *)(iVar6 + 0x38);
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0();
            return 1;
          }
        }
      }
    }
    else {
      iVar6 = 0;
      for (iStack_2c = 0; iStack_2c < *(int *)(0x01E57284 + 0x14cd6c); iStack_2c = iStack_2c + 1)
      {
        iVar9 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(0x01E57284 + iVar6 + 0x14cd70),_DAT_014b8a54);
        if ((iVar9 != 0) &&
           (iVar13 = core_dest_cpp_CActorDestination_acceptsActor_FUN_0044bab0(), iVar13 != 0)) {
          pfVar10 = (float *)core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290();
          pfVar11 = (float *)core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290();
          if ((0.0 < pfVar11[2] - pfVar10[2]) &&
             ((((pfVar11[2] - pfVar10[2] < (float)_DAT_00595bdf &&
                (ABS(*pfVar11 - *pfVar10) < (float)_DAT_00595be7)) &&
               (0.0 < (double)(pfVar11[1] - pfVar10[1]))) &&
              ((double)(pfVar11[1] - pfVar10[1]) < _DAT_00595bef)))) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0();
            puVar7 = (uint *)core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290();
            if ((uint *)(param_1 + 0x1fb00) != puVar7) {
              *(uint *)(param_1 + 0x1fb00) = *puVar7;
              *(uint *)(param_1 + 0x1fb04) = puVar7[1];
              *(uint *)(param_1 + 0x1fb08) = puVar7[2];
            }
            fVar5 = *(float *)(param_1 + 0x1fb1c);
            fVar1 = *(float *)(param_1 + 0x1fb10);
            fVar8 = (float)core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_00534fc0();
            *(float *)(param_1 + 0x1fb04) =
                 ((fVar5 - fVar1) - fVar8) + *(float *)(param_1 + 0x1fb04);
            if (*(int *)(param_1 + 0x1faa0) != 0) {
              FUN_0046fb40(0x01BCD074,"?actionPending = %d\nstranger.cpp line %d" + 1,
                           *(int *)(param_1 + 0x1faa0),0xe6f);
            }
            *(uint *)(param_1 + 0x1faa0) = 2;
            if ((uint *)(param_1 + 0x1fa20) != (uint *)(iVar9 + 0x20)) {
              *(uint *)(param_1 + 0x1fa20) = *(uint *)(iVar9 + 0x20);
              *(uint *)(param_1 + 0x1fa24) = *(uint *)(iVar9 + 0x24);
              *(uint *)(param_1 + 0x1fa28) = *(uint *)(iVar9 + 0x28);
            }
            if ((uint *)(param_1 + 0x1fa2c) != (uint *)(iVar9 + 0x30)) {
              *(uint *)(param_1 + 0x1fa2c) = *(uint *)(iVar9 + 0x30);
              *(uint *)(param_1 + 0x1fa30) = *(uint *)(iVar9 + 0x34);
              *(uint *)(param_1 + 0x1fa34) = *(uint *)(iVar9 + 0x38);
            }
            return 1;
          }
        }
        iVar6 = iVar6 + 4;
      }
    }
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,*(uint *)(param_1 + 0x24f0));
    fVar5 = *(float *)(*(int *)(param_1 + 0x24f0) + 0x20);
    fVar1 = *(float *)(*(int *)(param_1 + 0x24f0) + 0x28);
    pfVar10 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200();
    fVar5 = fVar5 + *pfVar10;
    fVar1 = fVar1 + pfVar10[2];
    fVar8 = *(float *)(param_1 + 0x24);
    core_actor_cpp_CDemonActor_transformVector_FUN_0040a200();
    fVar12 = (float)FUN_00510a40(0x01E57284,fVar5,fVar1,local_80,local_78,0x3f800000,0x3dcccccd,
                                 0x40400000);
    if (fVar12 < 1.0) {
      core_setcolid_cpp_CDemonSet_init_FUN_00511750();
    }
    else {
      fVar12 = (float)core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80();
      core_setcolid_cpp_CDemonSet_init_FUN_00511750();
      if (ABS(fVar12 - *(float *)(param_1 + 0x24)) <= 1.0) {
        iVar6 = 0;
        iVar9 = 0;
        while( true ) {
          if (*(int *)(0x01E57284 + 0x14cd6c) <= iVar6) {
            iVar6 = *(int *)(param_1 + 0x24f0);
            *(uint *)(param_1 + 0x1faa0) = 6;
            if (iVar6 != 0) {
              (**(code **)(*(int *)(iVar6 + 0x14c) + 0x7c))(iVar6,param_1);
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0();
            *(uint *)(param_1 + 0x1faa8) = 0x40800000;
            return 1;
          }
          iVar13 = core_actor_cpp_castToClassHash_FUN_0040d890
                             (*(uint *)(iVar9 + 0x14cd70 + 0x01E57284),DAT_0077bd78);
          if ((iVar13 != 0) &&
             (fVar12 = *(float *)(iVar13 + 0x20) - fVar5, fVar2 = *(float *)(iVar13 + 0x24) - fVar8,
             fVar3 = *(float *)(iVar13 + 0x28) - fVar1,
             SQRT(fVar3 * fVar3 + fVar12 * fVar12 + fVar2 * fVar2) < (float)_DAT_00595be7)) break;
          iVar6 = iVar6 + 1;
          iVar9 = iVar9 + 4;
        }
      }
    }
  }
  return 0;
}
