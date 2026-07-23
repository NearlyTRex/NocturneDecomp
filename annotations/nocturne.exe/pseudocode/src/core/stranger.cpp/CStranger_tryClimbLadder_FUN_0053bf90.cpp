// Name: core_stranger.cpp_CStranger_tryClimbLadder_FUN_0053bf90
// Address: 0053bf90
// Address Range: [[0053bf90, 0053c3a2]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_stranger_cpp_CStranger_tryClimbLadder_FUN_0053bf90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_stranger_cpp_CStranger_tryClimbLadder_FUN_0053bf90(int param_1)

{
  byte *puVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float local_a4;
  float fStack_a0;
  float local_9c;
  byte auStack_98 [12];
  byte auStack_8c [12];
  byte auStack_80 [12];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  byte auStack_50 [12];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  *(uint *)(param_1 + 0x1fa14) = 0;
  local_14 = (float)core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0(param_1,0);
  if ((((float)0.98999999999999999 <= local_14) && (*(int *)(param_1 + 0x24ac) == 0)) &&
     (*(int *)(param_1 + 0x24f0) == 0)) {
    local_20 = param_1 + 0x20;
    local_1c = 0;
    local_18 = 0;
    while( true ) {
      if (*(int *)(0x01E57284 + 0x14cd6c) <= local_1c) break;
      iVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                        (*(uint *)(0x01E57284 + local_18 + 0x14cd70),_DAT_01cc3120);
      if ((iVar2 != 0) &&
         (ABS(*(float *)(param_1 + 0x24) - *(float *)(iVar2 + 0x24)) <= (float)2)) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(iVar2,&local_a4,local_20);
        if ((ABS(local_9c) <= (float)4) && (0.0 <= local_9c)) {
          (**(code **)(*(int *)(iVar2 + 0x14c) + 0x14))(iVar2,&local_e0);
          if (fStack_d4 < local_a4) {
            if (fStack_d4 + 1.0 < local_a4) goto LAB_0053c018;
            local_a4 = fStack_d4;
          }
          if (local_a4 < local_e0) {
            if (local_a4 < local_e0 + (float)-1) goto LAB_0053c018;
            local_a4 = local_e0;
          }
          fStack_bc = local_e0 + fStack_d4;
          fStack_c8 = fStack_bc * 0.5f;
          fStack_b4 = fStack_d8 + fStack_cc;
          fStack_b8 = fStack_dc + fStack_d0;
          fStack_c0 = fStack_b4 * 0.5f;
          fStack_c4 = fStack_b8 * 0.5f;
          local_9c = fStack_c0;
          pfVar3 = (float *)core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                      (iVar2,auStack_8c,&local_a4);
          if (&local_a4 != pfVar3) {
            local_a4 = *pfVar3;
            fStack_a0 = pfVar3[1];
            local_9c = pfVar3[2];
          }
          fStack_b0 = *(float *)(param_1 + 0x44);
          fStack_ac = *(float *)(param_1 + 0x50);
          fStack_a8 = *(float *)(param_1 + 0x5c);
          fStack_44 = *(float *)(iVar2 + 0x44);
          fStack_40 = *(float *)(iVar2 + 0x50);
          fStack_3c = *(float *)(iVar2 + 0x5c);
          fVar5 = (float10)fcos((float10)0.261799387791667);
          fStack_38 = fStack_b0;
          fStack_34 = fStack_ac;
          fStack_30 = fStack_a8;
          fStack_2c = fStack_44;
          fStack_28 = fStack_40;
          fStack_24 = fStack_3c;
          if (fVar5 <= ABS((float10)fStack_a8 * (float10)fStack_3c +
                           (float10)fStack_b0 * (float10)fStack_44 +
                           (float10)fStack_ac * (float10)fStack_40)) {
            iVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                              (param_1,auStack_98,iVar2 + 0x20);
            if (0.0 < *(float *)(iVar4 + 8)) {
              *(int *)(param_1 + 0x1fa14) = iVar2;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0x2a,1)
              ;
              *(uint *)(param_1 + 0xbca0) = 0;
              uStack_54 = 0x40000000;
              uStack_5c = 0;
              uStack_58 = 0;
              pfVar3 = (float *)core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                          (iVar2,auStack_50,&uStack_5c);
              fStack_68 = *pfVar3 - *(float *)(param_1 + 0x20);
              fStack_64 = pfVar3[1] - *(float *)(param_1 + 0x24);
              fStack_60 = pfVar3[2] - *(float *)(param_1 + 0x28);
              if ((float *)(param_1 + 0x1fcbc) != &fStack_68) {
                *(float *)(param_1 + 0x1fcbc) = fStack_68;
                *(float *)(param_1 + 0x1fcc0) = fStack_64;
                *(float *)(param_1 + 0x1fcc4) = fStack_60;
              }
              fStack_74 = local_a4 - *(float *)(param_1 + 0x20);
              fStack_70 = fStack_a0 - *(float *)(param_1 + 0x24);
              fStack_6c = local_9c - *(float *)(param_1 + 0x28);
              iVar4 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                (auStack_80,&fStack_74);
              puVar1 = PTR_DAT_005ad350;
              *(uint *)(param_1 + 0x1fcc8) = *(uint *)(iVar4 + 4);
              *(uint *)(param_1 + 0x1fccc) = 0x3f800000;
              engine_console_cpp_CConsole_printf_FUN_0043ac60
                        (puVar1,"Climbing ladder %s\n",iVar2);
              return 1;
            }
          }
        }
      }
LAB_0053c018:
      local_1c = local_1c + 1;
      local_18 = local_18 + 4;
    }
  }
  return 0;
}
