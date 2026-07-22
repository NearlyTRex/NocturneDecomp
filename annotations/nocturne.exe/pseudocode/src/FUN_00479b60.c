// Name: FUN_00479b60
// Address: 00479b60
// Address Range: [[00479b60, 00479f4a]]
// Convention: unknown
// Signature: void FUN_00479b60(int param_1,float param_2)

#include "nocturne.h"

void FUN_00479b60(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte auStack_48 [12];
  int local_3c;
  float local_38;
  int local_34;
  float fStack_30;
  int local_2c;
  float *local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  uint local_14;
  
  fVar1 = *(float *)(param_1 + 0xbd18);
  iVar6 = *(int *)(param_1 + 0xbd1c);
  if (iVar6 == 0) {
    if (((*(int *)(0x01C775EC + 0x1d4) != 0) || (*(int *)(0x01C775EC + 0x230) == 0)) ||
       (iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                          (0x01C03A10,"Capture"), iVar6 != 0)) {
      *(uint *)(param_1 + 0xbc98) = 0;
      *(uint *)(param_1 + 0xbca8) = 0;
      *(uint *)(param_1 + 0xbca4) = 0;
      return;
    }
    param_2 = *(float *)(param_1 + 0xbca8) - param_2;
    *(float *)(param_1 + 0xbca8) = param_2;
    if (param_2 <= 0.0) {
      *(uint *)(param_1 + 0xbc98) = 0;
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f000000,0x3fc00000);
      local_38 = *(float *)(param_1 + 0xbcac) * *(float *)(param_1 + 0xbcac);
      iVar6 = 0;
      *(uint *)(param_1 + 0xbca8) = local_14;
      if ((*(int *)(param_1 + 0xbca4) == 0) &&
         (*(float *)(param_1 + 0xbc9c) < *(float *)(param_1 + 0xbcac))) {
        local_38 = *(float *)(param_1 + 0xbc9c) * *(float *)(param_1 + 0xbc9c);
      }
      local_28 = (float *)(param_1 + 0x20);
      local_2c = 0;
      local_20 = 0;
      for (local_24 = 0; local_24 < *(int *)(0x01E57284 + 0x14ecb0); local_24 = local_24 + 1) {
        iVar9 = *(int *)(0x01E57284 + local_2c + 0x14ecb4);
        iVar8 = (**(code **)(*(int *)(iVar9 + 0x14c) + 0xdc))(iVar9,param_1);
        if (((iVar8 != 0) &&
            (iVar8 = (**(code **)(*(int *)(iVar9 + 0x14c) + 0x104))(iVar9), iVar8 == 0)) &&
           ((iVar8 = (**(code **)(*(int *)(iVar9 + 0x14c) + 0x68))(iVar9), iVar8 == 0 &&
            (*(float *)(iVar9 + 0x2610) <= 0.0)))) {
          fVar2 = *(float *)(iVar9 + 0x20) - *local_28;
          fVar3 = *(float *)(iVar9 + 0x24) - local_28[1];
          fVar4 = *(float *)(iVar9 + 0x28) - local_28[2];
          if ((ABS(fVar3) <= fVar1) &&
             (fVar3 = fVar3 * 3.0f,
             fStack_30 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3, fStack_30 <= local_38)) {
            *(int *)(&DAT_01bcdef8 + local_20) = iVar9;
            *(float *)(local_20 + 0x1bcfe38) = fStack_30;
            local_20 = local_20 + 4;
            iVar6 = iVar6 + 1;
          }
        }
        local_2c = local_2c + 4;
      }
      local_34 = *(int *)(param_1 + 0xbca4);
      local_3c = param_1 + 0x20;
      *(uint *)(param_1 + 0xbca4) = 0;
      while( true ) {
        iVar8 = 0;
        local_18 = 1e+20;
        iVar9 = -1;
        if (0 < iVar6) {
          iVar7 = 0;
          do {
            if (*(float *)(iVar7 + 0x1bcfe38) < local_18) {
              local_18 = *(float *)(iVar7 + 0x1bcfe38);
              iVar9 = iVar8;
            }
            iVar8 = iVar8 + 1;
            iVar7 = iVar7 + 4;
          } while (iVar8 < iVar6);
        }
        if (iVar9 < 0) break;
        local_1c = *(int *)(&DAT_01bcdef8 + iVar9 * 4);
        iVar8 = core_enemy_cpp_CEnemy_canSeeTarget_FUN_00479ab0(param_1,local_1c);
        puVar5 = PTR_DAT_005ad350;
        if (iVar8 != 0) {
          *(int *)(param_1 + 0xbca4) = local_1c;
          engine_console_cpp_CConsole_printf_FUN_0043ac60(puVar5,"%s can see hero\n",param_1)
          ;
          return;
        }
        if ((((*(int *)(param_1 + 0xbd20) != 0) ||
             ((*(int *)(param_1 + 0xbd20) == 0 && (local_1c == local_34)))) &&
            (iVar8 = (**(code **)(*(int *)(local_1c + 0x14c) + 0xbc))(local_1c), iVar8 != 0)) &&
           (iVar8 = core_path_cpp_CPathMap_findPathWithRetry_FUN_004f1600
                              (iVar8,local_3c,auStack_48,*(uint *)(param_1 + 0x6c)),
           iVar8 == 1)) {
          *(int *)(param_1 + 0xbca4) = local_1c;
          return;
        }
        *(uint *)(iVar9 * 4 + 0x1bcfe38) = 0x7149f2ca;
        if (local_34 == local_1c) {
          *(int *)(param_1 + 0xbca4) = local_1c;
        }
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0xbca4);
      if ((iVar6 != 0) &&
         (iVar6 = (**(code **)(*(int *)(iVar6 + 0x14c) + 0x104))(iVar6), iVar6 != 0)) {
        *(uint *)(param_1 + 0xbca8) = 0;
        *(uint *)(param_1 + 0xbc98) = 0;
        *(uint *)(param_1 + 0xbca4) = 0;
        return;
      }
    }
  }
  else {
    if (iVar6 == 0xFFFFFFFF) {
      *(uint *)(param_1 + 0xbca4) = 0;
    }
    else {
      *(int *)(param_1 + 0xbca4) = iVar6;
    }
    *(uint *)(param_1 + 0xbc98) = 0;
    *(uint *)(param_1 + 0xbca8) = 0;
  }
  return;
}
