// Name: FUN_004afa20
// Address: 004afa20
// Address Range: [[004afa20, 004b0207]]
// Convention: unknown
// Signature: void FUN_004afa20(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004afa20(int param_1)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  float afStackY_19e8 [1521];
  uint *puVar4;
  float fVar5;
  uint uVar6;
  byte *puVar7;
  uint local_20c;
  uint local_1fc;
  uint local_1ec;
  uint local_1dc;
  uint local_1cc;
  uint local_1bc;
  uint local_1ac;
  uint local_19c;
  uint local_18c;
  uint local_17c;
  uint local_16c;
  uint local_15c;
  uint local_14c;
  uint local_13c;
  uint local_12c;
  uint local_11c;
  uint local_10c;
  uint local_fc;
  uint local_ec;
  uint local_dc;
  uint local_cc;
  uint local_bc;
  uint local_ac;
  float local_9c;
  float local_98;
  uint local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_6c;
  float local_68;
  float local_64;
  double local_58;
  int local_50;
  float local_48;
  int local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  float local_14;
  
  bVar3 = 0;
  FUN_00544f00(param_1 + 0x2b4);
  local_9c = *(float *)(param_1 + 0x25670);
  local_94 = 0;
  local_98 = *(float *)(param_1 + 0x25674);
  FUN_00594380(&stack0xffffff64);
  local_1bc = local_13c;
  *(uint *)((int)&stack0xfffffe48 + (uint)bVar3 * 0xfffffffe * 4) =
       *(uint *)(&stack0xfffffec8 + (uint)bVar3 * -8);
  *(uint *)(&stack0xfffffe4c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xfffffecc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  *(uint *)
   ((int)(&stack0xfffffe4c + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xfffffecc + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
  ;
  if (0.0 < *(float *)(param_1 + 0x25648)) {
    local_24 = *(float *)(param_1 + 0x25648) / _DAT_005f7330;
    if (1.0 < local_24) {
      local_24 = 1.0;
    }
    if (0x3F51EB85 < *(float *)(param_1 + 0x25648)) {
      local_24 = (1.0 - (1.0 - *(float *)(param_1 + 0x2567c)) *
                        ((*(float *)(param_1 + 0x25648) - 0x3F51EB85) / (1.0 - 0x3F51EB85))) *
                 local_24;
    }
    iVar1 = FUN_0040c840(*(uint *)(param_1 + 0x2498c + *(int *)(param_1 + 0x247e4) * 4),
                         &DAT_005d7037);
    if (iVar1 == 0) {
      if ((float)_DAT_005d7043 < local_24) {
        local_1c = *(float *)(param_1 + 0x25648);
        if (0x3F51EB85 < local_1c) {
          local_1c = 0x3F51EB85;
        }
        local_1c = (local_1c - _DAT_005f7330) / (1.0 - _DAT_005f7330);
        if (local_1c < 0.0) {
          local_1c = 0.0;
        }
        if (1.0 < local_1c) {
          local_1c = 1.0;
        }
        local_18 = FUN_00503f50(param_1 + 0x2b4,_DAT_01cb06ac,local_1c);
        local_14 = (float)local_18;
        FUN_00545a60(param_1 + 0x2b4,_DAT_01cb06ac,local_18,local_24,_DAT_01cb0688,&LAB_00544cc0);
        if (0x3F51EB85 <= *(float *)(param_1 + 0x25648)) {
          local_28 = ((*(float *)(param_1 + 0x25648) - 0x3F51EB85) / (1.0 - 0x3F51EB85)) *
                     *(float *)(param_1 + 0x2567c);
          if (local_28 < *(float *)(param_1 + 0x25678)) {
            local_28 = *(float *)(param_1 + 0x25678);
          }
          if ((float)_DAT_005d7043 < local_28) {
            local_58 = (double)*(float *)(param_1 + 0x25678);
            local_2c = 0.0;
            if (0.0 < local_58) {
              local_2c = 1.0 - *(float *)(param_1 + 0x25678);
            }
            local_14 = (float)(param_1 + 0x2b4);
            FUN_00545a60(local_14,_DAT_01cb06b0,local_2c,local_28 * (float)_DAT_005d704b,
                         _DAT_01cb06c0,&LAB_00544cc0);
            local_90 = _DAT_01cb0668 * _DAT_005d7053;
            local_8c = _DAT_01cb066c * _DAT_005d7053;
            local_88 = _DAT_01cb0670 * _DAT_005d7053;
            local_6c = _DAT_01cb0668 * _DAT_005d7053;
            *(float *)((int)&stack0xffffff98 + (uint)bVar3 * -8) =
                 (&stack0xffffff74)[(uint)bVar3 * 0xfffffffe];
            *(uint *)((int)&stack0xffffff9c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                 *(uint *)((int)&stack0xffffff78 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
            puVar4 = &stack0xfffffe44;
            local_84 = local_6c * _DAT_005d7057;
            local_80 = local_68 * _DAT_005d7057;
            local_7c = local_64 * _DAT_005d7057;
            local_78 = local_6c * _DAT_005d7057;
            *(uint *)((int)&stack0xffffff8c + (uint)bVar3 * 0xfffffffe * 4) =
                 *(uint *)((int)&stack0xffffff80 + (uint)bVar3 * -8);
            *(uint *)(&stack0xffffff90 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                 *(uint *)((int)&stack0xffffff84 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
            FUN_00594380(&stack0xffffff88,puVar4);
            local_10c = local_19c;
            *(uint *)((int)&stack0xfffffef8 + (uint)bVar3 * 0xfffffffe * 4) =
                 *(uint *)(&stack0xfffffe68 + (uint)bVar3 * -8);
            *(uint *)(&stack0xfffffefc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                 *(uint *)(&stack0xfffffe6c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
            *(uint *)
             ((int)(&stack0xfffffefc + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
             ((uint)bVar3 * -2 + 1) * 4) =
                 *(uint *)
                  ((int)(&stack0xfffffe6c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                  ((uint)bVar3 * -2 + 1) * 4);
            FUN_00593c60(&stack0xfffffef4);
            fVar5 = local_28;
            puVar7 = &LAB_004ad230;
            local_12c = local_18c;
            *(uint *)((int)&stack0xfffffed8 + (uint)bVar3 * 0xfffffffe * 4) =
                 *(uint *)(&stack0xfffffe78 + (uint)bVar3 * -8);
            uVar6 = _DAT_01cb06c4;
            *(uint *)(&stack0xfffffedc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                 *(uint *)(&stack0xfffffe7c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
            *(uint *)
             ((int)(&stack0xfffffedc + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
             ((uint)bVar3 * -2 + 1) * 4) =
                 *(uint *)
                  ((int)(&stack0xfffffe7c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                  ((uint)bVar3 * -2 + 1) * 4);
            FUN_00546f40(local_14,&stack0xfffffed4,fVar5,uVar6,puVar7);
          }
        }
      }
      FUN_00593df0(param_1 + 0x964 + _DAT_01cb06bc * 0x10,_DAT_01cb0690 * 0x10 + param_1 + 0x964,
                   *(float *)(param_1 + 0x25648) / _DAT_005f7334);
      puVar4 = (uint *)(_DAT_01cb06bc * 0x10 + 0x964 + param_1);
      puVar2 = puVar4 + (uint)bVar3 * -2 + 1;
      *puVar4 = local_14c;
      *puVar2 = *(uint *)(&stack0xfffffeb8 + (uint)bVar3 * -8);
      puVar2[(uint)bVar3 * -2 + 1] =
           *(uint *)(&stack0xfffffebc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      (puVar2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xfffffebc + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
            ((uint)bVar3 * -2 + 1) * 4);
      uVar6 = _DAT_01cb06b0;
      if (0.0 < *(float *)(param_1 + 0x25678)) {
        *(uint *)(param_1 + 0x2504) = 2;
        local_44 = FUN_00503f50(param_1 + 0x2b4,uVar6,*(uint *)(param_1 + 0x25678));
        local_14 = (float)local_44;
        FUN_00544f80(param_1 + 0x2b4,_DAT_01cb06b0,local_44,0);
        *(uint *)(param_1 + 0x2504) = 0;
      }
    }
    else {
      FUN_00593df0(param_1 + 0x964 + _DAT_01cb06bc * 0x10,_DAT_01cb0690 * 0x10 + param_1 + 0x964,
                   *(float *)(param_1 + 0x25648) / _DAT_005f7334);
      puVar4 = (uint *)(param_1 + 0x964 + _DAT_01cb06bc * 0x10);
      puVar2 = puVar4 + (uint)bVar3 * -2 + 1;
      *puVar4 = local_dc;
      *puVar2 = *(uint *)(&stack0xffffff28 + (uint)bVar3 * -8);
      puVar2[(uint)bVar3 * -2 + 1] =
           *(uint *)(&stack0xffffff2c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      (puVar2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffff2c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
            ((uint)bVar3 * -2 + 1) * 4);
      if ((float)_DAT_005d7043 < local_24) {
        local_20 = *(float *)(param_1 + 0x25648);
        if (0x3F51EB85 < local_20) {
          local_20 = 0x3F51EB85;
        }
        local_20 = (local_20 - _DAT_005f7330) / (1.0 - _DAT_005f7330);
        if (local_20 < 0.0) {
          local_20 = 0.0;
        }
        if (1.0 < local_20) {
          local_20 = 1.0;
        }
        local_50 = FUN_00503f50(param_1 + 0x2b4,_DAT_01cb06ac,local_20);
        local_14 = (float)local_50;
        FUN_00545a60(param_1 + 0x2b4,_DAT_01cb06ac,local_50,local_24,_DAT_01cb0688,&LAB_00544cc0);
        if ((0x3F51EB85 <= *(float *)(param_1 + 0x25648)) &&
           (local_30 = ((*(float *)(param_1 + 0x25648) - 0x3F51EB85) / (1.0 - 0x3F51EB85)) *
                       *(float *)(param_1 + 0x2567c), (float)_DAT_005d7043 < local_30)) {
          if ((DAT_01cb0634 & 1) == 0) {
            DAT_01cb0634 = DAT_01cb0634 | 1;
            FUN_00594020(0xbfc90fdb);
            puVar4 = &stack0xffffff34;
            local_cc = local_11c;
            *(uint *)((int)&stack0xffffff38 + (uint)bVar3 * 0xfffffffe * 4) =
                 *(uint *)(&stack0xfffffee8 + (uint)bVar3 * -8);
            *(uint *)(&stack0xffffff3c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                 *(uint *)(&stack0xfffffeec + (uint)bVar3 * -8 + (uint)bVar3 * -8);
            *(uint *)
             ((int)(&stack0xffffff3c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
             ((uint)bVar3 * -2 + 1) * 4) =
                 *(uint *)
                  ((int)(&stack0xfffffeec + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                  ((uint)bVar3 * -2 + 1) * 4);
            FUN_00593fe0(0xbfc90fdb,puVar4);
            local_bc = local_20c;
            *(uint *)((int)&stack0xffffff48 + (uint)bVar3 * 0xfffffffe * 4) =
                 *(uint *)(&stack0xfffffdf8 + (uint)bVar3 * -8);
            *(uint *)(&stack0xffffff4c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                 *(uint *)(&stack0xfffffdfc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
            *(uint *)
             ((int)(&stack0xffffff4c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
             ((uint)bVar3 * -2 + 1) * 4) =
                 *(uint *)
                  ((int)(&stack0xfffffdfc + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                  ((uint)bVar3 * -2 + 1) * 4);
            FUN_00593c60(&stack0xffffff44);
            _DAT_01cb0624 = local_1fc;
            *(uint *)(&DAT_01cb0628 + (uint)bVar3 * -8) =
                 *(uint *)(&stack0xfffffe08 + (uint)bVar3 * -8);
            *(uint *)(&DAT_01cb062c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                 *(uint *)(&stack0xfffffe0c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
            *(uint *)
             ((int)(&DAT_01cb062c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
             ((uint)bVar3 * -2 + 1) * 4) =
                 *(uint *)
                  ((int)(&stack0xfffffe0c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                  ((uint)bVar3 * -2 + 1) * 4);
          }
          FUN_00593c60(&DAT_01cb0624,&stack0xfffffe44);
          fVar5 = local_30;
          puVar7 = &LAB_004ad1a0;
          puVar4 = &stack0xffffff54;
          iVar1 = param_1 + 0x2b4;
          local_ac = local_ec;
          *(uint *)((int)&stack0xffffff58 + (uint)bVar3 * 0xfffffffe * 4) =
               *(uint *)(&stack0xffffff18 + (uint)bVar3 * -8);
          uVar6 = _DAT_01cb0688;
          *(uint *)(&stack0xffffff5c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
               *(uint *)(&stack0xffffff1c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          *(uint *)
           ((int)(&stack0xffffff5c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
           ((uint)bVar3 * -2 + 1) * 4) =
               *(uint *)
                ((int)(&stack0xffffff1c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                ((uint)bVar3 * -2 + 1) * 4);
          FUN_005466c0(iVar1,puVar4,fVar5,uVar6,puVar7);
        }
      }
      if (0.0 < *(float *)(param_1 + 0x25678)) {
        fVar5 = (float)_DAT_005d704b;
        *(uint *)(param_1 + 0x2504) = 2;
        local_40 = FUN_00503f50(param_1 + 0x2b4,_DAT_01cb06b4,
                                1.0 - *(float *)(param_1 + 0x25678) * fVar5);
        local_14 = (float)local_40;
        FUN_00544f80(param_1 + 0x2b4,_DAT_01cb06b4,local_40,_DAT_01cb0690);
        *(uint *)(param_1 + 0x2504) = 0;
      }
    }
  }
  local_3c = 0x3f490fdb;
  local_38 = 0xbfdf66f3;
  local_34 = 0x3fdf66f3;
  if (local_9c < _DAT_005d705b) {
    local_9c = -1.2217305;
  }
  if (0.7853982 < local_9c) {
    local_9c = 0.7853982;
  }
  if (local_98 < -1.7453293) {
    local_98 = -1.7453293;
  }
  if (1.7453293 < local_98) {
    local_98 = 1.7453293;
  }
  FUN_00594380(&stack0xffffff64,*(float *)(param_1 + 0x2564c) * *(float *)(param_1 + 0x2567c),
               _DAT_01cb0678,&LAB_00544cc0);
  puVar4 = &stack0xfffffe54;
  iVar1 = param_1 + 0x2b4;
  local_1ac = local_fc;
  *(uint *)((int)&stack0xfffffe58 + (uint)bVar3 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff08 + (uint)bVar3 * -8);
  *(uint *)(&stack0xfffffe5c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffff0c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  *(uint *)
   ((int)(&stack0xfffffe5c + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xffffff0c + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
  ;
  FUN_005466c0(iVar1,puVar4);
  local_48 = (float)FUN_004af900(param_1);
  local_14 = local_48;
  local_14 = (float)FUN_004af950(param_1);
  _DAT_01cb0674 =
       (1.0 - (*(float *)(param_1 + 0x25654) - local_48) / (local_14 - local_48)) *
       (float)_DAT_005d7063;
  if (1.0 < _DAT_01cb0674) {
    _DAT_01cb0674 = 1.0;
  }
  FUN_00593fa0(*(uint *)(param_1 + 0x25654),*(uint *)(param_1 + 0x25650),_DAT_01cb067c,
               &LAB_004ad1e0);
  puVar4 = &stack0xfffffe94;
  local_16c = local_1ec;
  *(uint *)((int)&stack0xfffffe98 + (uint)bVar3 * 0xfffffffe * 4) =
       *(uint *)(&stack0xfffffe18 + (uint)bVar3 * -8);
  *(uint *)(&stack0xfffffe9c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xfffffe1c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  *(uint *)
   ((int)(&stack0xfffffe9c + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xfffffe1c + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
  ;
  FUN_00593fe0(0x3fc90fdb,puVar4);
  local_17c = local_1dc;
  *(uint *)((int)&stack0xfffffe88 + (uint)bVar3 * 0xfffffffe * 4) =
       *(uint *)(&stack0xfffffe28 + (uint)bVar3 * -8);
  *(uint *)(&stack0xfffffe8c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xfffffe2c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  *(uint *)
   ((int)(&stack0xfffffe8c + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xfffffe2c + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
  ;
  FUN_00593c60(&stack0xfffffe84);
  puVar4 = &stack0xfffffea4;
  param_1 = param_1 + 0x2b4;
  local_15c = local_1cc;
  *(uint *)((int)&stack0xfffffea8 + (uint)bVar3 * 0xfffffffe * 4) =
       *(uint *)(&stack0xfffffe38 + (uint)bVar3 * -8);
  *(uint *)(&stack0xfffffeac + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xfffffe3c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  *(uint *)
   ((int)(&stack0xfffffeac + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xfffffe3c + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
  ;
  FUN_005466c0(param_1,puVar4);
  return;
}
