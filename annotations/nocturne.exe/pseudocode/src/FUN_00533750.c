// Name: FUN_00533750
// Address: 00533750
// Address Range: [[00533750, 00533c8b]]
// Convention: unknown
// Signature: void FUN_00533750(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00533750(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint auStack_1cc [24];
  byte auStack_16c [4];
  uint uStack_168;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_13c;
  int iStack_138;
  int iStack_134;
  uint auStack_130 [5];
  uint uStack_11c;
  byte auStack_108 [28];
  float local_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  byte auStack_d4 [24];
  uint uStack_bc;
  uint uStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  byte auStack_74 [12];
  float fStack_68;
  float fStack_64;
  uint uStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  byte auStack_50 [12];
  float fStack_44;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  int iStack_24;
  float *pfStack_20;
  int iStack_1c;
  float fStack_18;
  
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,&local_ec);
  uStack_8c = 0x3dcccccd;
  uStack_88 = 0x3dcccccd;
  uStack_84 = 0;
  local_ec = local_ec + _DAT_005950ee;
  fStack_e8 = fStack_e8 + _DAT_005950ee;
  fStack_e0 = fStack_e0 + _DAT_005950f2;
  fStack_dc = fStack_dc + _DAT_005950f2;
  core_box_cpp_CBoundingBox3D_reset_FUN_0041dbc0(auStack_d4);
  iVar7 = 0;
  puVar6 = auStack_1cc;
  __arrinit(auStack_1cc,8,&DAT_005993b0);
  do {
    uVar4 = core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70(&local_ec,auStack_50,iVar7);
    puVar5 = (uint *)
             core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,auStack_74,uVar4);
    if (puVar6 != puVar5) {
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      puVar6[2] = puVar5[2];
    }
    iVar7 = iVar7 + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(auStack_d4,puVar6);
    puVar6 = puVar6 + 3;
  } while (iVar7 < 8);
  fStack_44 = SQRT(fStack_e4 * fStack_e4 + local_ec * local_ec + fStack_e8 * fStack_e8);
  fStack_34 = SQRT(fStack_dc * fStack_dc + fStack_e0 * fStack_e0 + fStack_d8 * fStack_d8);
  fStack_30 = fStack_44;
  if (fStack_44 < fStack_34) {
    fStack_30 = fStack_34;
  }
  fStack_b4 = fStack_d8 - fStack_e4;
  fStack_30 = fStack_30 * _DAT_005950f6 + _DAT_005950fa;
  fStack_2c = fStack_30 * fStack_30;
  uStack_bc = 0;
  uStack_b8 = 0;
  fStack_18 = fStack_b4;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,&fStack_98,&uStack_bc);
  pfStack_20 = (float *)(param_1 + 0x20);
  iStack_24 = 0;
  for (iStack_1c = 0; iStack_1c < *(int *)(0x01E57284 + 0x14ecb0); iStack_1c = iStack_1c + 1) {
    iVar7 = *(int *)(0x01E57284 + iStack_24 + 0x14ecb4);
    fVar1 = *pfStack_20 - *(float *)(iVar7 + 0x20);
    fVar3 = pfStack_20[1] - *(float *)(iVar7 + 0x24);
    fVar2 = pfStack_20[2] - *(float *)(iVar7 + 0x28);
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <= fStack_2c) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(auStack_130);
      auStack_130[0] = 0;
      iStack_28 = (**(code **)(*(int *)(iVar7 + 0x14c) + 0x34))(iVar7,auStack_130);
      if (iStack_28 != 0) {
        uStack_11c = 0;
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                  (param_1,&fStack_68,(float *)(iVar7 + 0x20));
        if (fStack_68 < local_ec) {
          fStack_68 = local_ec;
        }
        if (fStack_e0 < fStack_68) {
          fStack_68 = fStack_e0;
        }
        if (fStack_64 < fStack_e8) {
          fStack_64 = fStack_e8;
        }
        if (fStack_dc < fStack_64) {
          fStack_64 = fStack_dc;
        }
        uStack_60 = 0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&fStack_80,&fStack_68);
        fStack_18 = (float)core_actor_cpp_CDemonActor_rayIntersect_FUN_0040a740
                                     (iVar7,&fStack_80,&fStack_98,auStack_108,auStack_130,iStack_28,
                                      auStack_d4);
        if ((0.0 <= fStack_18) && (fStack_18 <= 1.0)) {
          fStack_5c = fStack_98 * fStack_18;
          fStack_58 = fStack_94 * fStack_18;
          fStack_54 = fStack_90 * fStack_18;
          fStack_b0 = fStack_80 + fStack_5c;
          fStack_ac = fStack_7c + fStack_58;
          fStack_a8 = fStack_78 + fStack_54;
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(iVar7,&uStack_a4,&fStack_b0);
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(auStack_16c);
          uStack_168 = *(uint *)(param_1 + 0x550);
          uStack_13c = 0x67;
          if (&uStack_150 != &uStack_a4) {
            uStack_150 = uStack_a4;
            uStack_14c = uStack_a0;
            uStack_148 = uStack_9c;
          }
          iStack_138 = param_1;
          iStack_134 = param_1;
          (**(code **)(*(int *)(iVar7 + 0x14c) + 0x100))(iVar7,auStack_16c);
        }
      }
    }
    iStack_24 = iStack_24 + 4;
  }
  return;
}
