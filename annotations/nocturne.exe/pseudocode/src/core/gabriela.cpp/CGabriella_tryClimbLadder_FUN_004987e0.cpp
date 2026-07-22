// Name: core_gabriela.cpp_CGabriella_tryClimbLadder_FUN_004987e0
// Address: 004987e0
// Address Range: [[004987e0, 00498ae3]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_gabriela_cpp_CGabriella_tryClimbLadder_FUN_004987e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_gabriela_cpp_CGabriella_tryClimbLadder_FUN_004987e0(int param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  uint *puVar4;
  int iVar5;
  float local_90;
  float local_8c;
  float local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  byte local_78 [12];
  byte local_6c [12];
  float local_60;
  float local_5c;
  float local_58;
  byte local_54 [12];
  float local_48;
  float local_44;
  float local_40;
  byte local_3c [12];
  byte local_30 [12];
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  iVar5 = 0;
  local_1c = 0;
  *(uint *)(param_1 + 0x1fa14) = 0;
  do {
    if (*(int *)(0x01E57284 + 0x14cd6c) <= iVar5) {
      return 0;
    }
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(0x01E57284 + local_1c + 0x14cd70),_DAT_01cc3120);
    local_24 = iVar1;
    if (iVar1 != 0) {
      local_60 = *(float *)(param_1 + 0x20) - *(float *)(iVar1 + 0x20);
      local_5c = *(float *)(param_1 + 0x24) - *(float *)(iVar1 + 0x24);
      local_58 = *(float *)(param_1 + 0x28) - *(float *)(iVar1 + 0x28);
      if ((ABS(local_5c) <= (float)5) &&
         (local_5c = 0.0, SQRT(local_58 * local_58 + local_60 * local_60) <= (float)3)
         ) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                  (param_1,&local_90,(float *)(iVar1 + 0x20));
        if ((ABS(local_90) <= (float)0.29999999999999999) &&
           (((float)0.5 <= local_88 && ((double)local_88 <= 3)))) {
          iVar2 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                            (local_54,&local_90);
          local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                      (*(uint *)(iVar2 + 4));
          if (ABS(local_18) <= (float)0.17453292519444399) {
            local_20 = 0;
            pfVar3 = (float *)core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                                        (iVar1,local_78,(float *)(param_1 + 0x20));
            if (&local_90 != pfVar3) {
              local_90 = *pfVar3;
              local_8c = pfVar3[1];
              local_88 = pfVar3[2];
            }
            if (local_88 < 0.0) {
              local_20 = 1;
              local_88 = -local_88;
            }
            if (((ABS(local_90) <= (float)0.29999999999999999) && ((float)0.5 <= local_88))
               && ((double)local_88 <= 3)) {
              iVar1 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                (local_30,&local_90);
              local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                          (*(uint *)(iVar1 + 4));
              if (ABS(local_18) <= (float)0.17453292519444399) {
                *(int *)(param_1 + 0x1fa14) = local_24;
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          (param_1 + 0x150,0x16,1);
                *(uint *)(param_1 + 0xbca0) = 0;
                local_84 = 0;
                local_80 = 0;
                local_7c = 0x40000000;
                if (local_20 != 0) {
                  local_7c = 0xc0000000;
                }
                puVar4 = (uint *)
                         core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                   (local_24,local_6c,&local_84);
                *(uint *)(param_1 + 0x20) = *puVar4;
                *(uint *)(param_1 + 0x24) = puVar4[1];
                *(uint *)(param_1 + 0x28) = puVar4[2];
                local_48 = *(float *)(local_24 + 0x20) - *(float *)(param_1 + 0x20);
                local_44 = *(float *)(local_24 + 0x24) - *(float *)(param_1 + 0x24);
                local_40 = *(float *)(local_24 + 0x28) - *(float *)(param_1 + 0x28);
                iVar5 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                  (local_3c,&local_48);
                *(uint *)(param_1 + 0x34) = *(uint *)(iVar5 + 4);
                core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
                return 1;
              }
            }
          }
        }
      }
    }
    local_1c = local_1c + 4;
    iVar5 = iVar5 + 1;
  } while( true );
}
