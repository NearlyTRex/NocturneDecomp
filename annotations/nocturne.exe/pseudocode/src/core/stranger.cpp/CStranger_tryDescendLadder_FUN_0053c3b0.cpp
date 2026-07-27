// Name: core_stranger.cpp_CStranger_tryDescendLadder_FUN_0053c3b0
// Address: 0053c3b0
// Address Range: [[0053c3b0, 0053c7f6]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_stranger_cpp_CStranger_tryDescendLadder_FUN_0053c3b0(int param_1)

#include "nocturne.h"

uint __cdecl core_stranger_cpp_CStranger_tryDescendLadder_FUN_0053c3b0(int param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  byte auStack_c4 [12];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  byte auStack_88 [12];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  byte auStack_70 [12];
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  byte auStack_58 [12];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  uint uStack_2c;
  int local_28;
  float fStack_24;
  int local_20;
  int local_1c;
  float local_18;
  
  *(uint *)(param_1 + 0x1fa90) = 0;
  local_18 = (float)core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0(param_1,0);
  if ((((float)0.98999999999999999 <= local_18) && (*(int *)(param_1 + 0x24ac) == 0)) &&
     (*(int *)(param_1 + 0x24f0) == 0)) {
    local_28 = param_1 + 0x20;
    local_20 = 0;
    for (local_1c = 0; local_1c < *(int *)(0x01E57284 + 0x14cd6c); local_1c = local_1c + 1) {
      iVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                        (*(uint *)(0x01E57284 + local_20 + 0x14cd70),
                         g_CLadderActorType_01cc30e8.name_hash);
      if ((iVar2 != 0) &&
         (ABS(*(float *)(param_1 + 0x24) - (*(float *)(iVar2 + 0x24) + *(float *)(iVar2 + 0x2d0)))
          <= (float)2)) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(iVar2,&local_d0,local_28);
        if ((ABS(local_c8) <= (float)4) && (local_c8 <= 0.0)) {
          (**(code **)(*(int *)(iVar2 + 0x14c) + 0x14))(iVar2,&local_e8);
          if (fStack_dc < local_d0) {
            if (fStack_dc + 1.0 < local_d0) goto LAB_0053c438;
            local_d0 = fStack_dc;
          }
          if (local_d0 < local_e8) {
            if (local_d0 < local_e8 + (float)-1) goto LAB_0053c438;
            local_d0 = local_e8;
          }
          fStack_7c = local_e8 + fStack_dc;
          fStack_94 = fStack_7c * 0.5f;
          fStack_74 = fStack_e0 + fStack_d4;
          fStack_78 = fStack_e4 + fStack_d8;
          local_c8 = fStack_74 * 0.5f;
          fStack_90 = fStack_78 * 0.5f;
          fStack_8c = local_c8;
          pfVar3 = (float *)core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                      (iVar2,auStack_88,&local_d0);
          if (&local_d0 != pfVar3) {
            local_d0 = *pfVar3;
            fStack_cc = pfVar3[1];
            local_c8 = pfVar3[2];
          }
          fStack_cc = fStack_cc + *(float *)(iVar2 + 0x2d0);
          fStack_ac = *(float *)(param_1 + 0x44);
          fStack_a8 = *(float *)(param_1 + 0x50);
          fStack_a4 = *(float *)(param_1 + 0x5c);
          fStack_b8 = *(float *)(iVar2 + 0x44);
          fStack_b4 = *(float *)(iVar2 + 0x50);
          fStack_b0 = *(float *)(iVar2 + 0x5c);
          fVar5 = (float10)fcos((float10)0.261799387791667);
          fVar1 = ABS(fStack_a4 * fStack_b0 + fStack_ac * fStack_b8 + fStack_a8 * fStack_b4);
          fStack_40 = fStack_a8;
          fStack_3c = fStack_b8;
          fStack_38 = fStack_b4;
          fStack_34 = fStack_b0;
          fStack_30 = fStack_a4;
          fStack_24 = fStack_ac;
          if (fVar5 <= (float10)fVar1) {
            iVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                              (param_1,auStack_70,iVar2 + 0x20);
            if (0.0 < *(float *)(iVar4 + 8)) {
              engine_console_cpp_CConsole_printf_FUN_0043ac60
                        (PTR_DAT_005ad350,"Ladder dot : %f\n",(double)fVar1);
              *(int *)(param_1 + 0x1fa90) = iVar2;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0x2b,1)
              ;
              *(uint *)(param_1 + 0xbca0) = 0;
              uStack_9c = *(uint *)(iVar2 + 0x2d0);
              uStack_a0 = 0;
              uStack_98 = 0xbfc00000;
              uStack_2c = uStack_9c;
              pfVar3 = (float *)core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                          (iVar2,auStack_58,&uStack_a0);
              fStack_64 = *pfVar3 - *(float *)(param_1 + 0x20);
              fStack_60 = pfVar3[1] - *(float *)(param_1 + 0x24);
              fStack_5c = pfVar3[2] - *(float *)(param_1 + 0x28);
              if ((float *)(param_1 + 0x1fcbc) != &fStack_64) {
                *(float *)(param_1 + 0x1fcbc) = fStack_64;
                *(float *)(param_1 + 0x1fcc0) = fStack_60;
                *(float *)(param_1 + 0x1fcc4) = fStack_5c;
              }
              fStack_4c = local_d0 - *(float *)(param_1 + 0x20);
              fStack_48 = fStack_cc - *(float *)(param_1 + 0x24);
              fStack_44 = local_c8 - *(float *)(param_1 + 0x28);
              iVar2 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                (auStack_c4,&fStack_4c);
              *(uint *)(param_1 + 0x1fcc8) = *(uint *)(iVar2 + 4);
              *(uint *)(param_1 + 0x1fccc) = 0x3f800000;
              return 1;
            }
          }
        }
      }
LAB_0053c438:
      local_20 = local_20 + 4;
    }
  }
  return 0;
}
