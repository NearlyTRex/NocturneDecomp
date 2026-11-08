// Name: FUN_004c89c0
// Address: 004c89c0
// Address Range: [[004c89c0, 004c91a0]]
// Convention: unknown
// Signature: void FUN_004c89c0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c89c0(int param_1)

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
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_78;
  float local_74;
  uint local_70;
  float local_6c;
  float local_68;
  float local_64;
  double local_60;
  int local_50;
  int local_4c;
  float local_48;
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
  FUN_005675a0(param_1 + 0x158);
  local_78 = *(float *)(param_1 + 0x1ffdc);
  local_70 = 0;
  local_74 = *(float *)(param_1 + 0x1ffe0);
  FUN_005b7ed0(&stack0xffffff88);
  local_1bc = local_18c;
  *(uint *)((int)&stack0xfffffe48 + (uint)bVar3 * 0xfffffffe * 4) =
       *(uint *)(&stack0xfffffe78 + (uint)bVar3 * -8);
  *(uint *)(&stack0xfffffe4c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xfffffe7c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  *(uint *)
   ((int)(&stack0xfffffe4c + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xfffffe7c + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
  ;
  if (0.0 < *(float *)(param_1 + 0x1ffb4)) {
    local_24 = *(float *)(param_1 + 0x1ffb4) / _DAT_00600d50;
    if (1.0 < local_24) {
      local_24 = 1.0;
    }
    if (0x3F51EB85 < *(float *)(param_1 + 0x1ffb4)) {
      local_24 = (1.0 - (1.0 - *(float *)(param_1 + 0x1ffe8)) *
                        ((*(float *)(param_1 + 0x1ffb4) - 0x3F51EB85) / (1.0 - 0x3F51EB85))) *
                 local_24;
    }
    iVar1 = FUN_0040c550(*(uint *)(param_1 + 0x1fe20),&DAT_005e10b0);
    if (iVar1 == 0) {
      if ((float)_DAT_005e10bc < local_24) {
        local_1c = *(float *)(param_1 + 0x1ffb4);
        if (0x3F51EB85 < local_1c) {
          local_1c = 0x3F51EB85;
        }
        local_1c = (local_1c - _DAT_00600d50) / (1.0 - _DAT_00600d50);
        if (local_1c < 0.0) {
          local_1c = 0.0;
        }
        if (1.0 < local_1c) {
          local_1c = 1.0;
        }
        local_4c = FUN_00525110(param_1 + 0x158,_DAT_01cc913c,local_1c);
        local_14 = (float)local_4c;
        FUN_00568100(param_1 + 0x158,_DAT_01cc913c,local_4c,local_24,_DAT_01cc9118,&LAB_00567360);
        if (0x3F51EB85 <= *(float *)(param_1 + 0x1ffb4)) {
          local_28 = ((*(float *)(param_1 + 0x1ffb4) - 0x3F51EB85) / (1.0 - 0x3F51EB85)) *
                     *(float *)(param_1 + 0x1ffe8);
          if (local_28 < *(float *)(param_1 + 0x1ffe4)) {
            local_28 = *(float *)(param_1 + 0x1ffe4);
          }
          if ((float)_DAT_005e10bc < local_28) {
            local_60 = (double)*(float *)(param_1 + 0x1ffe4);
            local_30 = 0.0;
            if (0.0 < local_60) {
              local_30 = 1.0 - *(float *)(param_1 + 0x1ffe4);
            }
            local_14 = (float)(param_1 + 0x158);
            FUN_00568100(local_14,_DAT_01cc9140,local_30,local_28 * (float)_DAT_005e10c4,
                         _DAT_01cc9150,&LAB_00567360);
            local_90 = _DAT_01cc90f8 * _DAT_005e10cc;
            local_8c = _DAT_01cc90fc * _DAT_005e10cc;
            local_88 = _DAT_01cc9100 * _DAT_005e10cc;
            local_9c = _DAT_01cc90f8 * _DAT_005e10cc;
            *(uint *)((int)&stack0xffffff68 + (uint)bVar3 * -8) =
                 *(uint *)((int)&stack0xffffff74 + (uint)bVar3 * -8);
            *(uint *)((int)&stack0xffffff6c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                 *(uint *)((int)&stack0xffffff78 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
            puVar4 = &stack0xfffffe44;
            local_6c = local_9c * _DAT_005e10d0;
            local_68 = local_98 * _DAT_005e10d0;
            local_64 = local_94 * _DAT_005e10d0;
            local_84 = local_9c * _DAT_005e10d0;
            *(float *)((int)&stack0xffffff80 + (uint)bVar3 * 0xfffffffe * 4) =
                 (&stack0xffffff98)[(uint)bVar3 * 0xfffffffe];
            *(uint *)(&stack0xffffff84 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                 *(uint *)((int)&stack0xffffff9c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
            FUN_005b7ed0(&stack0xffffff7c,puVar4);
            local_11c = local_bc;
            *(uint *)((int)&stack0xfffffee8 + (uint)bVar3 * 0xfffffffe * 4) =
                 *(uint *)(&stack0xffffff48 + (uint)bVar3 * -8);
            *(uint *)(&stack0xfffffeec + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                 *(uint *)(&stack0xffffff4c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
            *(uint *)
             ((int)(&stack0xfffffeec + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
             ((uint)bVar3 * -2 + 1) * 4) =
                 *(uint *)
                  ((int)(&stack0xffffff4c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                  ((uint)bVar3 * -2 + 1) * 4);
            FUN_005b77b0(&stack0xfffffee4);
            fVar5 = local_28;
            puVar7 = &LAB_004c61e0;
            local_cc = local_19c;
            *(uint *)((int)&stack0xffffff38 + (uint)bVar3 * 0xfffffffe * 4) =
                 *(uint *)(&stack0xfffffe68 + (uint)bVar3 * -8);
            uVar6 = _DAT_01cc9154;
            *(uint *)(&stack0xffffff3c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                 *(uint *)(&stack0xfffffe6c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
            *(uint *)
             ((int)(&stack0xffffff3c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
             ((uint)bVar3 * -2 + 1) * 4) =
                 *(uint *)
                  ((int)(&stack0xfffffe6c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                  ((uint)bVar3 * -2 + 1) * 4);
            FUN_005695e0(local_14,&stack0xffffff34,fVar5,uVar6,puVar7);
          }
        }
      }
      FUN_005b7940(param_1 + 0x808 + _DAT_01cc914c * 0x10,_DAT_01cc9120 * 0x10 + param_1 + 0x808,
                   *(float *)(param_1 + 0x1ffb4) / _DAT_00600d54);
      puVar4 = (uint *)(_DAT_01cc914c * 0x10 + 0x808 + param_1);
      puVar2 = puVar4 + (uint)bVar3 * -2 + 1;
      *puVar4 = local_13c;
      *puVar2 = *(uint *)(&stack0xfffffec8 + (uint)bVar3 * -8);
      puVar2[(uint)bVar3 * -2 + 1] =
           *(uint *)(&stack0xfffffecc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      (puVar2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xfffffecc + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
            ((uint)bVar3 * -2 + 1) * 4);
      uVar6 = _DAT_01cc9140;
      if (0.0 < *(float *)(param_1 + 0x1ffe4)) {
        *(uint *)(param_1 + 0x2498) = 2;
        local_40 = FUN_00525110(param_1 + 0x158,uVar6,*(uint *)(param_1 + 0x1ffe4));
        local_14 = (float)local_40;
        FUN_00567620(param_1 + 0x158,_DAT_01cc9140,local_40,0);
        *(uint *)(param_1 + 0x2498) = 0;
      }
    }
    else {
      FUN_005b7940(param_1 + 0x808 + _DAT_01cc914c * 0x10,_DAT_01cc9120 * 0x10 + param_1 + 0x808,
                   *(float *)(param_1 + 0x1ffb4) / _DAT_00600d54);
      puVar4 = (uint *)(param_1 + 0x808 + _DAT_01cc914c * 0x10);
      puVar2 = puVar4 + (uint)bVar3 * -2 + 1;
      *puVar4 = local_fc;
      *puVar2 = *(uint *)(&stack0xffffff08 + (uint)bVar3 * -8);
      puVar2[(uint)bVar3 * -2 + 1] =
           *(uint *)(&stack0xffffff0c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      (puVar2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffff0c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
            ((uint)bVar3 * -2 + 1) * 4);
      if ((float)_DAT_005e10bc < local_24) {
        local_20 = *(float *)(param_1 + 0x1ffb4);
        if (0x3F51EB85 < local_20) {
          local_20 = 0x3F51EB85;
        }
        local_20 = (local_20 - _DAT_00600d50) / (1.0 - _DAT_00600d50);
        if (local_20 < 0.0) {
          local_20 = 0.0;
        }
        if (1.0 < local_20) {
          local_20 = 1.0;
        }
        local_50 = FUN_00525110(param_1 + 0x158,_DAT_01cc913c,local_20);
        local_14 = (float)local_50;
        FUN_00568100(param_1 + 0x158,_DAT_01cc913c,local_50,local_24,_DAT_01cc9118,&LAB_00567360);
        if ((0x3F51EB85 <= *(float *)(param_1 + 0x1ffb4)) &&
           (local_2c = ((*(float *)(param_1 + 0x1ffb4) - 0x3F51EB85) / (1.0 - 0x3F51EB85)) *
                       *(float *)(param_1 + 0x1ffe8), (float)_DAT_005e10bc < local_2c)) {
          if ((DAT_01cc90c4 & 1) == 0) {
            DAT_01cc90c4 = DAT_01cc90c4 | 1;
            FUN_005b7b70(0xbfc90fdb);
            puVar4 = &stack0xffffff14;
            local_ec = local_ac;
            *(uint *)((int)&stack0xffffff18 + (uint)bVar3 * 0xfffffffe * 4) =
                 *(uint *)(&stack0xffffff58 + (uint)bVar3 * -8);
            *(uint *)(&stack0xffffff1c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                 *(uint *)(&stack0xffffff5c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
            *(uint *)
             ((int)(&stack0xffffff1c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
             ((uint)bVar3 * -2 + 1) * 4) =
                 *(uint *)
                  ((int)(&stack0xffffff5c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                  ((uint)bVar3 * -2 + 1) * 4);
            FUN_005b7b30(0xbfc90fdb,puVar4);
            local_dc = local_12c;
            *(uint *)((int)&stack0xffffff28 + (uint)bVar3 * 0xfffffffe * 4) =
                 *(uint *)(&stack0xfffffed8 + (uint)bVar3 * -8);
            *(uint *)(&stack0xffffff2c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                 *(uint *)(&stack0xfffffedc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
            *(uint *)
             ((int)(&stack0xffffff2c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
             ((uint)bVar3 * -2 + 1) * 4) =
                 *(uint *)
                  ((int)(&stack0xfffffedc + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                  ((uint)bVar3 * -2 + 1) * 4);
            FUN_005b77b0(&stack0xffffff24);
            _DAT_01cc90b4 = local_20c;
            *(uint *)(&DAT_01cc90b8 + (uint)bVar3 * -8) =
                 *(uint *)(&stack0xfffffdf8 + (uint)bVar3 * -8);
            *(uint *)(&DAT_01cc90bc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                 *(uint *)(&stack0xfffffdfc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
            *(uint *)
             ((int)(&DAT_01cc90bc + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
             ((uint)bVar3 * -2 + 1) * 4) =
                 *(uint *)
                  ((int)(&stack0xfffffdfc + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                  ((uint)bVar3 * -2 + 1) * 4);
          }
          FUN_005b77b0(&DAT_01cc90b4,&stack0xfffffe44);
          fVar5 = local_2c;
          puVar7 = &LAB_004c6150;
          puVar4 = &stack0xfffffeb4;
          iVar1 = param_1 + 0x158;
          local_14c = local_1fc;
          *(uint *)((int)&stack0xfffffeb8 + (uint)bVar3 * 0xfffffffe * 4) =
               *(uint *)(&stack0xfffffe08 + (uint)bVar3 * -8);
          uVar6 = _DAT_01cc9118;
          *(uint *)(&stack0xfffffebc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
               *(uint *)(&stack0xfffffe0c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          *(uint *)
           ((int)(&stack0xfffffebc + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
           ((uint)bVar3 * -2 + 1) * 4) =
               *(uint *)
                ((int)(&stack0xfffffe0c + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                ((uint)bVar3 * -2 + 1) * 4);
          FUN_00568d60(iVar1,puVar4,fVar5,uVar6,puVar7);
        }
      }
      if (0.0 < *(float *)(param_1 + 0x1ffe4)) {
        fVar5 = (float)_DAT_005e10c4;
        *(uint *)(param_1 + 0x2498) = 2;
        local_18 = FUN_00525110(param_1 + 0x158,_DAT_01cc9144,
                                1.0 - *(float *)(param_1 + 0x1ffe4) * fVar5);
        local_14 = (float)local_18;
        FUN_00567620(param_1 + 0x158,_DAT_01cc9144,local_18,_DAT_01cc9120);
        *(uint *)(param_1 + 0x2498) = 0;
      }
    }
  }
  local_34 = 0x3f490fdb;
  local_3c = 0xbfdf66f3;
  local_38 = 0x3fdf66f3;
  if (local_78 < _DAT_005e10d4) {
    local_78 = -1.2217305;
  }
  if (0.7853982 < local_78) {
    local_78 = 0.7853982;
  }
  if (local_74 < -1.7453293) {
    local_74 = -1.7453293;
  }
  if (1.7453293 < local_74) {
    local_74 = 1.7453293;
  }
  FUN_005b7ed0(&stack0xffffff88,*(float *)(param_1 + 0x1ffb8) * *(float *)(param_1 + 0x1ffe8),
               _DAT_01cc9108,&LAB_00567360);
  puVar4 = &stack0xfffffe54;
  iVar1 = param_1 + 0x158;
  local_1ac = local_10c;
  *(uint *)((int)&stack0xfffffe58 + (uint)bVar3 * 0xfffffffe * 4) =
       *(uint *)(&stack0xfffffef8 + (uint)bVar3 * -8);
  *(uint *)(&stack0xfffffe5c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xfffffefc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  *(uint *)
   ((int)(&stack0xfffffe5c + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xfffffefc + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
  ;
  FUN_00568d60(iVar1,puVar4);
  local_48 = (float)FUN_004c88a0(param_1);
  local_14 = local_48;
  local_14 = (float)FUN_004c88f0(param_1);
  _DAT_01cc9104 =
       (1.0 - (*(float *)(param_1 + 0x1ffc0) - local_48) / (local_14 - local_48)) *
       (float)_DAT_005e10dc;
  if (1.0 < _DAT_01cc9104) {
    _DAT_01cc9104 = 1.0;
  }
  FUN_005b7af0(*(uint *)(param_1 + 0x1ffc0),*(uint *)(param_1 + 0x1ffbc),_DAT_01cc910c,
               &LAB_004c6190);
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
  FUN_005b7b30(0x3fc90fdb,puVar4);
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
  FUN_005b77b0(&stack0xfffffe84);
  puVar4 = &stack0xfffffea4;
  param_1 = param_1 + 0x158;
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
  FUN_00568d60(param_1,puVar4);
  return;
}
