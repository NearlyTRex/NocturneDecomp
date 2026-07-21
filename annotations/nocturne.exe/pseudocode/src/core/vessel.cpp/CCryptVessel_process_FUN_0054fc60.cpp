// Name: core_vessel.cpp_CCryptVessel_process_FUN_0054fc60
// Address: 0054fc60
// Address Range: [[0054fc60, 0055020d]]
// Convention: unknown
// Signature: void core_vessel_cpp_CCryptVessel_process_FUN_0054fc60(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_vessel_cpp_CCryptVessel_process_FUN_0054fc60(int param_1,float param_2)

{
  uint *puVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float local_18;
  float local_14;
  
  if (*(int *)(param_1 + 0x3ac) == 1) {
    *(uint *)(param_1 + 0x3dc) = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x3e0) = *(uint *)(param_1 + 0x24);
    *(uint *)(param_1 + 0x3e4) = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 1000) = *(uint *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x3e0) = *(float *)(param_1 + 0x3e0) + _DAT_0059749b;
    if ((uint *)(param_1 + 0x3ec) != (uint *)(param_1 + 0x30)) {
      *(uint *)(param_1 + 0x3ec) = *(uint *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x3f0) = *(uint *)(param_1 + 0x34);
      *(uint *)(param_1 + 0x3f4) = *(uint *)(param_1 + 0x38);
    }
    core_flame_cpp_CFlame_process_FUN_0048d0c0(param_1 + 0x3bc,param_2);
  }
  else if (*(int *)(param_1 + 0x3ac) == 0) {
    *(float *)(param_1 + 0x658) = param_2 * (float)_DAT_00597493 + *(float *)(param_1 + 0x658);
  }
  else {
    fVar3 = param_2 * (float)ram0x0059747b + *(float *)(param_1 + 0x7dc);
    *(float *)(param_1 + 0x7dc) = fVar3;
    if ((float)_DAT_00597483 <= fVar3) {
      *(float *)(param_1 + 0x7dc) = *(float *)(param_1 + 0x7dc) + _DAT_0059748b;
    }
  }
  if (*(int *)(param_1 + 0x2cc) == 0) {
    if (*(int *)(param_1 + 0x3b8) != 0) {
      *(uint *)(param_1 + 0x3b8) = 0;
      return;
    }
    puVar1 = (uint *)(param_1 + 0x30);
    iVar9 = *(int *)(param_1 + 0x3b0);
    puVar2 = (uint *)(param_1 + 0x20);
    if (iVar9 == 1) {
      param_2 = *(float *)(param_1 + 0x3b4) + param_2;
      *(float *)(param_1 + 0x3b4) = param_2;
      if (param_2 <= 1.0) {
        return;
      }
      *(uint *)(param_1 + 0x3b4) = 0x3f800000;
      if (*(int *)(param_1 + 0x2d0) == 0) {
        iVar9 = FUN_0054fc40(*(uint *)(param_1 + 0x2d4));
        if (iVar9 != 0) {
          iVar9 = *(int *)(param_1 + 0x3a0);
          *(uint *)(param_1 + 0x3b0) = 2;
          *puVar2 = *(uint *)(iVar9 + 0x20);
          *(uint *)(param_1 + 0x24) = *(uint *)(iVar9 + 0x24);
          *(uint *)(param_1 + 0x28) = *(uint *)(iVar9 + 0x28);
          *(uint *)(param_1 + 0x2c) = *(uint *)(iVar9 + 0x2c);
          iVar9 = *(int *)(param_1 + 0x3a0);
          if (puVar1 != (uint *)(iVar9 + 0x30)) {
            *puVar1 = *(uint *)(iVar9 + 0x30);
            *(uint *)(param_1 + 0x34) = *(uint *)(iVar9 + 0x34);
            *(uint *)(param_1 + 0x38) = *(uint *)(iVar9 + 0x38);
          }
        }
      }
      else {
        iVar9 = FUN_0054fc40(*(int *)(param_1 + 0x2d0));
        if (((iVar9 == 0) || (iVar9 = FUN_0054fc40(*(uint *)(param_1 + 0x2d4)), iVar9 == 0))
           && ((iVar9 = FUN_0054fc40(*(uint *)(param_1 + 0x2d0)), iVar9 != 0 ||
               (iVar9 = FUN_0054fc40(*(uint *)(param_1 + 0x2d4)), iVar9 != 0)))) {
          *(uint *)(param_1 + 0x24) = 0x461c3f9a;
          *(uint *)(param_1 + 0x28) = 0x461c3f9a;
          *(uint *)(param_1 + 0x20) = 0x461c3f9a;
        }
        else {
          iVar9 = *(int *)(param_1 + 0x3a0);
          *(uint *)(param_1 + 0x3b0) = 2;
          *(uint *)(param_1 + 0x20) = *(uint *)(iVar9 + 0x20);
          *(uint *)(param_1 + 0x24) = *(uint *)(iVar9 + 0x24);
          *(uint *)(param_1 + 0x28) = *(uint *)(iVar9 + 0x28);
          *(uint *)(param_1 + 0x2c) = *(uint *)(iVar9 + 0x2c);
          iVar9 = *(int *)(param_1 + 0x3a0);
          if ((uint *)(param_1 + 0x30) != (uint *)(iVar9 + 0x30)) {
            *(uint *)(param_1 + 0x30) = *(uint *)(iVar9 + 0x30);
            *(uint *)(param_1 + 0x34) = *(uint *)(iVar9 + 0x34);
            *(uint *)(param_1 + 0x38) = *(uint *)(iVar9 + 0x38);
          }
        }
      }
    }
    else if (iVar9 == 2) {
      param_2 = *(float *)(param_1 + 0x3b4) - param_2;
      *(float *)(param_1 + 0x3b4) = param_2;
      if (0.0 <= param_2) {
        return;
      }
      *(uint *)(param_1 + 0x3b0) = 0;
      *(uint *)(param_1 + 0x3b4) = 0;
    }
    else if (iVar9 == 3) {
      if ((*(int *)(*(int *)(param_1 + 0x3a0) + 0x17c) == 0) &&
         (*(int *)(*(int *)(param_1 + 0x3a4) + 0x17c) == 0)) {
        param_2 = *(float *)(param_1 + 0x3b4) - param_2;
        *(float *)(param_1 + 0x3b4) = param_2;
        if (0.0 <= param_2) {
          return;
        }
        FUN_0048c0d0(0x01C08D04,puVar2,0x41000000,0x44bb8000,0x40800000);
        iVar9 = *(int *)(param_1 + 0x3a0);
        *(uint *)(param_1 + 0x3b4) = 0x3f800000;
        *puVar2 = *(uint *)(iVar9 + 0x20);
        *(uint *)(param_1 + 0x24) = *(uint *)(iVar9 + 0x24);
        *(uint *)(param_1 + 0x28) = *(uint *)(iVar9 + 0x28);
        *(uint *)(param_1 + 0x2c) = *(uint *)(iVar9 + 0x2c);
        iVar9 = *(int *)(param_1 + 0x3a0);
        if (puVar1 == (uint *)(iVar9 + 0x30)) {
          *(uint *)(param_1 + 0x3b0) = 2;
        }
        else {
          *puVar1 = *(uint *)(iVar9 + 0x30);
          *(uint *)(param_1 + 0x34) = *(uint *)(iVar9 + 0x34);
          *(uint *)(param_1 + 0x38) = *(uint *)(iVar9 + 0x38);
          *(uint *)(param_1 + 0x3b0) = 2;
        }
      }
      else {
        *(uint *)(param_1 + 0x3b4) = 0;
        *(uint *)(param_1 + 0x3b0) = 0;
      }
    }
    if ((*(int *)(*(int *)(param_1 + 0x3a0) + 0x17c) == 0) &&
       (*(int *)(*(int *)(param_1 + 0x3a4) + 0x17c) == 0)) {
      if (*(int *)(param_1 + 0x3b0) == 0) {
        *(uint *)(param_1 + 0x3b4) = 0x40400000;
        *(uint *)(param_1 + 0x3b0) = 3;
        return;
      }
    }
    else {
      iVar9 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
      fVar3 = *(float *)(iVar9 + 0x20) - *(float *)(param_1 + 0x20);
      fVar4 = *(float *)(iVar9 + 0x24) - *(float *)(param_1 + 0x24);
      fVar5 = *(float *)(iVar9 + 0x28) - *(float *)(param_1 + 0x28);
      local_18 = 999.9;
      local_14 = 0.0;
      iVar9 = *(int *)(param_1 + 0x2d0);
      if (iVar9 != 0) {
        fVar6 = *(float *)(param_1 + 0x20) - *(float *)(iVar9 + 0x20);
        fVar7 = *(float *)(param_1 + 0x24) - *(float *)(iVar9 + 0x24);
        fVar8 = *(float *)(param_1 + 0x28) - *(float *)(iVar9 + 0x28);
        local_18 = SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7);
      }
      iVar9 = *(int *)(param_1 + 0x2d4);
      if (iVar9 != 0) {
        fVar6 = *(float *)(iVar9 + 0x20) - *(float *)(param_1 + 0x20);
        fVar7 = *(float *)(iVar9 + 0x24) - *(float *)(param_1 + 0x24);
        fVar8 = *(float *)(iVar9 + 0x28) - *(float *)(param_1 + 0x28);
        local_14 = SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7);
      }
      if ((((local_18 < *(float *)(param_1 + 0x3a8)) &&
           (*(float *)(param_1 + 0x3a8) < SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4))) &&
          (*(float *)(param_1 + 0x3a8) < local_14)) &&
         ((iVar9 = *(int *)(param_1 + 0x2d0), *(int *)(iVar9 + 0x2cc) == 0 &&
          (*(int *)(iVar9 + 0x3b0) == 0)))) {
        *(uint *)(iVar9 + 0x3b0) = 1;
        *(uint *)(*(int *)(param_1 + 0x2d0) + 0x3b4) = 0;
        core_event_cpp_CEventList_executeCommands_FUN_0047ab70
                  (0x01C03A10,*(int *)(param_1 + 0x2d0) + 0x2d8);
      }
      if (((*(int *)(param_1 + 0x2d0) != 0) && (*(int *)(param_1 + 0x2d4) != 0)) &&
         ((*(int *)(*(int *)(param_1 + 0x3a4) + 0x17c) != 0 &&
          ((*(int *)(*(int *)(*(int *)(param_1 + 0x2d0) + 0x3a4) + 0x17c) != 0 &&
           (*(int *)(*(int *)(*(int *)(param_1 + 0x2d4) + 0x3a4) + 0x17c) != 0)))))) {
        core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,param_1 + 0x33c);
        *(uint *)(*(int *)(param_1 + 0x2d0) + 0x7e0) = 1;
        *(uint *)(*(int *)(param_1 + 0x2d4) + 0x7e0) = 1;
        *(uint *)(param_1 + 0x7e0) = 1;
        return;
      }
    }
  }
  return;
}
