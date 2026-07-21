// Name: FUN_00478f80
// Address: 00478f80
// Address Range: [[00478f80, 004790e6]]
// Convention: unknown
// Signature: undefined4 FUN_00478f80(int param_1)

#include "nocturne.h"

uint FUN_00478f80(int param_1)

{
  int iVar1;
  uint uVar2;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  byte local_24 [12];
  uint local_18;
  uint local_14;
  uint local_10;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (((iVar1 == 0) && (*(int *)(param_1 + 0x150) == 3)) && (*(int *)(param_1 + 0x160) != 0)) {
    core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
    core_fire_cpp_SLaserInfo_ctor_FUN_0048b6b0(&local_cc);
    local_c4 = *(uint *)(param_1 + 0x230);
    local_c0 = *(uint *)(param_1 + 0x234);
    local_bc = *(uint *)(param_1 + 0x238);
    local_b8 = *(uint *)(param_1 + 0x23c);
    local_74 = local_c8;
    local_58 = local_ac;
    local_54 = local_a8;
    local_50 = local_a4;
    local_4c = local_a0;
    local_48 = local_9c;
    local_44 = local_98;
    local_40 = local_94;
    local_3c = local_90;
    local_38 = local_8c;
    local_34 = local_88;
    local_30 = local_84;
    local_cc = 0x3f800000;
    local_2c = local_80;
    local_b4 = 0;
    local_28 = local_7c;
    local_b0 = 0;
    local_78 = 0x3f800000;
    local_60 = 0;
    local_5c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0x42c80000;
    local_70 = local_c4;
    local_6c = local_c0;
    local_68 = local_bc;
    local_64 = local_b8;
    uVar2 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                      (param_1,local_24,&local_18,&local_78,0);
    FUN_0048b6f0(0x01C08D04,param_1 + 0x20,uVar2);
    core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
    return 1;
  }
  return 0;
}
