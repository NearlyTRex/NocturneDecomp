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
  CVector3f *position;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float local_18;
  float local_14;
  
  if (*(int *)(param_1 + 0x3ac) == 1) {
    *(uint *)(param_1 + 0x3dc) = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x3e0) = *(uint *)(param_1 + 0x24);
    *(uint *)(param_1 + 0x3e4) = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 1000) = *(uint *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x3e0) = *(float *)(param_1 + 0x3e0) + 1.7f;
    if ((uint *)(param_1 + 0x3ec) != (uint *)(param_1 + 0x30)) {
      *(uint *)(param_1 + 0x3ec) = *(uint *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x3f0) = *(uint *)(param_1 + 0x34);
      *(uint *)(param_1 + 0x3f4) = *(uint *)(param_1 + 0x38);
    }
    core_flame_cpp_CFlame_process_FUN_0048d0c0((CFlame *)(param_1 + 0x3bc),param_2);
  }
  else if (*(int *)(param_1 + 0x3ac) == 0) {
    *(float *)(param_1 + 0x658) = param_2 * (float)3.1415926535000001 + *(float *)(param_1 + 0x658);
  }
  else {
    fVar2 = param_2 * (float)8 + *(float *)(param_1 + 0x7dc);
    *(float *)(param_1 + 0x7dc) = fVar2;
    if ((float)16 <= fVar2) {
      *(float *)(param_1 + 0x7dc) = *(float *)(param_1 + 0x7dc) + -16.0f;
    }
  }
  if (*(int *)(param_1 + 0x2cc) == 0) {
    if (*(int *)(param_1 + 0x3b8) != 0) {
      *(uint *)(param_1 + 0x3b8) = 0;
      return;
    }
    puVar1 = (uint *)(param_1 + 0x30);
    iVar8 = *(int *)(param_1 + 0x3b0);
    position = (CVector3f *)(param_1 + 0x20);
    if (iVar8 == 1) {
      param_2 = *(float *)(param_1 + 0x3b4) + param_2;
      *(float *)(param_1 + 0x3b4) = param_2;
      if (param_2 <= 1.0) {
        return;
      }
      *(uint *)(param_1 + 0x3b4) = 0x3f800000;
      if (*(CCryptVessel **)(param_1 + 0x2d0) == (CCryptVessel *)0x0) {
        iVar8 = core_vessel_cpp_FUN_0054fc40(*(CCryptVessel **)(param_1 + 0x2d4));
        if (iVar8 != 0) {
          iVar8 = *(int *)(param_1 + 0x3a0);
          *(uint *)(param_1 + 0x3b0) = 2;
          position->x = *(float *)(iVar8 + 0x20);
          *(uint *)(param_1 + 0x24) = *(uint *)(iVar8 + 0x24);
          *(uint *)(param_1 + 0x28) = *(uint *)(iVar8 + 0x28);
          *(uint *)(param_1 + 0x2c) = *(uint *)(iVar8 + 0x2c);
          iVar8 = *(int *)(param_1 + 0x3a0);
          if (puVar1 != (uint *)(iVar8 + 0x30)) {
            *puVar1 = *(uint *)(iVar8 + 0x30);
            *(uint *)(param_1 + 0x34) = *(uint *)(iVar8 + 0x34);
            *(uint *)(param_1 + 0x38) = *(uint *)(iVar8 + 0x38);
          }
        }
      }
      else {
        iVar8 = core_vessel_cpp_FUN_0054fc40(*(CCryptVessel **)(param_1 + 0x2d0));
        if (((iVar8 == 0) ||
            (iVar8 = core_vessel_cpp_FUN_0054fc40(*(CCryptVessel **)(param_1 + 0x2d4)), iVar8 == 0))
           && ((iVar8 = core_vessel_cpp_FUN_0054fc40(*(CCryptVessel **)(param_1 + 0x2d0)),
               iVar8 != 0 ||
               (iVar8 = core_vessel_cpp_FUN_0054fc40(*(CCryptVessel **)(param_1 + 0x2d4)),
               iVar8 != 0)))) {
          *(uint *)(param_1 + 0x24) = 0x461c3f9a;
          *(uint *)(param_1 + 0x28) = 0x461c3f9a;
          *(uint *)(param_1 + 0x20) = 0x461c3f9a;
        }
        else {
          iVar8 = *(int *)(param_1 + 0x3a0);
          *(uint *)(param_1 + 0x3b0) = 2;
          *(uint *)(param_1 + 0x20) = *(uint *)(iVar8 + 0x20);
          *(uint *)(param_1 + 0x24) = *(uint *)(iVar8 + 0x24);
          *(uint *)(param_1 + 0x28) = *(uint *)(iVar8 + 0x28);
          *(uint *)(param_1 + 0x2c) = *(uint *)(iVar8 + 0x2c);
          iVar8 = *(int *)(param_1 + 0x3a0);
          if ((uint *)(param_1 + 0x30) != (uint *)(iVar8 + 0x30)) {
            *(uint *)(param_1 + 0x30) = *(uint *)(iVar8 + 0x30);
            *(uint *)(param_1 + 0x34) = *(uint *)(iVar8 + 0x34);
            *(uint *)(param_1 + 0x38) = *(uint *)(iVar8 + 0x38);
          }
        }
      }
    }
    else if (iVar8 == 2) {
      param_2 = *(float *)(param_1 + 0x3b4) - param_2;
      *(float *)(param_1 + 0x3b4) = param_2;
      if (0.0 <= param_2) {
        return;
      }
      *(uint *)(param_1 + 0x3b0) = 0;
      *(uint *)(param_1 + 0x3b4) = 0;
    }
    else if (iVar8 == 3) {
      if ((*(int *)(*(int *)(param_1 + 0x3a0) + 0x17c) == 0) &&
         (*(int *)(*(int *)(param_1 + 0x3a4) + 0x17c) == 0)) {
        param_2 = *(float *)(param_1 + 0x3b4) - param_2;
        *(float *)(param_1 + 0x3b4) = param_2;
        if (0.0 <= param_2) {
          return;
        }
        core_fire_cpp_FUN_0048c0d0(g_CFireEffect_PTR_005b80f0,position,8.0,1500.0,4.0);
        iVar8 = *(int *)(param_1 + 0x3a0);
        *(uint *)(param_1 + 0x3b4) = 0x3f800000;
        position->x = *(float *)(iVar8 + 0x20);
        *(uint *)(param_1 + 0x24) = *(uint *)(iVar8 + 0x24);
        *(uint *)(param_1 + 0x28) = *(uint *)(iVar8 + 0x28);
        *(uint *)(param_1 + 0x2c) = *(uint *)(iVar8 + 0x2c);
        iVar8 = *(int *)(param_1 + 0x3a0);
        if (puVar1 == (uint *)(iVar8 + 0x30)) {
          *(uint *)(param_1 + 0x3b0) = 2;
        }
        else {
          *puVar1 = *(uint *)(iVar8 + 0x30);
          *(uint *)(param_1 + 0x34) = *(uint *)(iVar8 + 0x34);
          *(uint *)(param_1 + 0x38) = *(uint *)(iVar8 + 0x38);
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
      iVar8 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
      fVar2 = *(float *)(iVar8 + 0x20) - *(float *)(param_1 + 0x20);
      fVar3 = *(float *)(iVar8 + 0x24) - *(float *)(param_1 + 0x24);
      fVar4 = *(float *)(iVar8 + 0x28) - *(float *)(param_1 + 0x28);
      local_18 = 999.9;
      local_14 = 0.0;
      iVar8 = *(int *)(param_1 + 0x2d0);
      if (iVar8 != 0) {
        fVar5 = *(float *)(param_1 + 0x20) - *(float *)(iVar8 + 0x20);
        fVar6 = *(float *)(param_1 + 0x24) - *(float *)(iVar8 + 0x24);
        fVar7 = *(float *)(param_1 + 0x28) - *(float *)(iVar8 + 0x28);
        local_18 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
      }
      iVar8 = *(int *)(param_1 + 0x2d4);
      if (iVar8 != 0) {
        fVar5 = *(float *)(iVar8 + 0x20) - *(float *)(param_1 + 0x20);
        fVar6 = *(float *)(iVar8 + 0x24) - *(float *)(param_1 + 0x24);
        fVar7 = *(float *)(iVar8 + 0x28) - *(float *)(param_1 + 0x28);
        local_14 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
      }
      if ((((local_18 < *(float *)(param_1 + 0x3a8)) &&
           (*(float *)(param_1 + 0x3a8) < SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3))) &&
          (*(float *)(param_1 + 0x3a8) < local_14)) &&
         ((iVar8 = *(int *)(param_1 + 0x2d0), *(int *)(iVar8 + 0x2cc) == 0 &&
          (*(int *)(iVar8 + 0x3b0) == 0)))) {
        *(uint *)(iVar8 + 0x3b0) = 1;
        *(uint *)(*(int *)(param_1 + 0x2d0) + 0x3b4) = 0;
        core_event_cpp_CEventList_executeCommands_FUN_0047ab70
                  (0x01C03A10,(char *)(*(int *)(param_1 + 0x2d0) + 0x2d8));
      }
      if (((*(int *)(param_1 + 0x2d0) != 0) && (*(int *)(param_1 + 0x2d4) != 0)) &&
         ((*(int *)(*(int *)(param_1 + 0x3a4) + 0x17c) != 0 &&
          ((*(int *)(*(int *)(*(int *)(param_1 + 0x2d0) + 0x3a4) + 0x17c) != 0 &&
           (*(int *)(*(int *)(*(int *)(param_1 + 0x2d4) + 0x3a4) + 0x17c) != 0)))))) {
        core_event_cpp_CEventList_executeCommands_FUN_0047ab70
                  (0x01C03A10,(char *)(param_1 + 0x33c));
        *(uint *)(*(int *)(param_1 + 0x2d0) + 0x7e0) = 1;
        *(uint *)(*(int *)(param_1 + 0x2d4) + 0x7e0) = 1;
        *(uint *)(param_1 + 0x7e0) = 1;
        return;
      }
    }
  }
  return;
}
