// Name: FUN_00455d10
// Address: 00455d10
// Address Range: [[00455d10, 0045629e]]
// Convention: unknown
// Signature: void FUN_00455d10(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00455d10(int param_1,float param_2)

{
  float fVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  byte bVar6;
  int aiStackY_1a0c [1486];
  int *piVar7;
  byte local_290 [48];
  byte local_260 [48];
  uint local_230;
  int aiStack_22c [7];
  int local_210 [4];
  int local_200 [4];
  int local_1f0 [4];
  int local_1e0 [4];
  int local_1d0 [4];
  int local_1c0 [4];
  int local_1b0 [4];
  int local_1a0 [4];
  int local_190 [4];
  int local_180 [4];
  uint local_170;
  uint local_160;
  uint local_150;
  uint local_140;
  uint local_130;
  int local_120 [4];
  uint local_110;
  int aiStack_10c [7];
  uint local_f0;
  int aiStack_ec [7];
  int local_d0 [4];
  uint local_c0;
  uint local_b0;
  uint local_a0;
  uint local_90;
  uint local_80;
  uint local_70;
  uint local_6c;
  uint local_68;
  int local_64 [4];
  int local_54 [5];
  int local_40 [4];
  int aiStack_30 [4];
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar6 = 0;
  local_14 = param_2 * _DAT_005d0277;
  if (*(int *)(param_1 + 0x25758) == 0) {
    if (*(float *)(param_1 + 0x259b0) <= 0.0) {
      *(uint *)(param_1 + 0x259b0) = 0;
      goto LAB_00455d67;
    }
    fVar1 = *(float *)(param_1 + 0x259b0) - local_14;
  }
  else {
    if (1.0 <= *(float *)(param_1 + 0x259b0)) {
      *(uint *)(param_1 + 0x259b0) = 0x3f800000;
      goto LAB_00455d67;
    }
    fVar1 = *(float *)(param_1 + 0x259b0) + local_14;
  }
  *(float *)(param_1 + 0x259b0) = fVar1;
LAB_00455d67:
  if (*(float *)(param_1 + 0x259b0) < 0.0) {
    *(uint *)(param_1 + 0x259b0) = 0;
  }
  if (*(float *)(param_1 + 0x259b0) <= 1.0) {
    if ((*(uint *)(param_1 + 0x259b0) & 0x7fffffff) == 0) {
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x259b0) = 0x3f800000;
  }
  local_20 = _DAT_01b4d268;
  local_18 = _DAT_01b4d270;
  aiStack_30[3] = _DAT_01b4d290;
  FUN_00593fe0(0xbf860a92);
  piVar2 = aiStack_22c + 0xf;
  local_1f0[0] = local_f0;
  aiStack_22c[(uint)bVar6 * -2 + 0x10] = aiStack_ec[(uint)bVar6 * -2];
  aiStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11] =
       aiStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  (aiStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11)[(uint)bVar6 * -2 + 1] =
       (aiStack_ec + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  FUN_00594020(0xbf490fdb,piVar2);
  local_d0[0] = local_170;
  aiStack_ec[(uint)bVar6 * -2 + 8] = aiStack_22c[(uint)bVar6 * -2 + 0x30];
  aiStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9] =
       aiStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x31];
  (aiStack_ec + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1] =
       (aiStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x31)[(uint)bVar6 * -2 + 1];
  FUN_00593c60(aiStack_ec + 7);
  local_230 = local_90;
  aiStack_22c[(uint)bVar6 * -2] = aiStack_ec[(uint)bVar6 * -2 + 0x18];
  aiStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       aiStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
  (aiStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
       (aiStack_ec + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19)[(uint)bVar6 * -2 + 1];
  FUN_00593fa0(0xbf060a92);
  piVar2 = aiStack_22c + 0x17;
  local_1d0[0] = local_150;
  aiStack_22c[(uint)bVar6 * -2 + 0x18] = aiStack_22c[(uint)bVar6 * -2 + 0x38];
  aiStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
       aiStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x39];
  (aiStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19)[(uint)bVar6 * -2 + 1] =
       (aiStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x39)[(uint)bVar6 * -2 + 1];
  FUN_00593fe0(0xbfc90fdb,piVar2);
  local_1e0[0] = local_140;
  aiStack_22c[(uint)bVar6 * -2 + 0x14] = aiStack_22c[(uint)bVar6 * -2 + 0x3c];
  aiStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15] =
       aiStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3d];
  (aiStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15)[(uint)bVar6 * -2 + 1] =
       (aiStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x3d)[(uint)bVar6 * -2 + 1];
  FUN_00593c60(aiStack_22c + 0x13);
  local_200[0] = local_80;
  aiStack_22c[(uint)bVar6 * -2 + 0xc] = aiStack_ec[(uint)bVar6 * -2 + 0x1c];
  aiStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
       aiStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1d];
  (aiStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd)[(uint)bVar6 * -2 + 1] =
       (aiStack_ec + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1d)[(uint)bVar6 * -2 + 1];
  FUN_00593fe0(0xbfc90fdb);
  local_180[0] = aiStack_22c[3];
  aiStack_22c[(uint)bVar6 * -2 + 0x2c] = aiStack_22c[(uint)bVar6 * -2 + 4];
  aiStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2d] =
       aiStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
  (aiStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2d)[(uint)bVar6 * -2 + 1] =
       (aiStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
  local_1c = param_1 + 0x25674;
  if (*(float *)(param_1 + 0x256b8) <= 0.0) {
    FUN_00593fe0(0);
    piVar2 = aiStack_10c + 3;
  }
  else {
    FUN_00593fe0(*(uint *)(param_1 + 0x256b8));
    piVar2 = aiStack_22c + 0x43;
  }
  piVar7 = piVar2 + (uint)bVar6 * -2 + 1;
  local_210[0] = *piVar2;
  aiStack_22c[(uint)bVar6 * -2 + 8] = *piVar7;
  aiStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9] = piVar7[(uint)bVar6 * -2 + 1];
  (aiStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1] =
       (piVar7 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  FUN_00593fa0(*(float *)(local_1c + 8) * (float)_DAT_005d027f);
  piVar2 = aiStack_22c + 0x1b;
  piVar7 = aiStack_22c + 7;
  local_1c0[0] = local_c0;
  aiStack_22c[(uint)bVar6 * -2 + 0x1c] = aiStack_ec[(uint)bVar6 * -2 + 0xc];
  aiStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1d] =
       aiStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
  (aiStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1d)[(uint)bVar6 * -2 + 1] =
       (aiStack_ec + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd)[(uint)bVar6 * -2 + 1];
  FUN_00593d20(piVar7,piVar2);
  FUN_00593df0(&DAT_005fe2f0,&local_230,*(uint *)(param_1 + 0x259b0));
  local_230 = local_b0;
  aiStack_22c[(uint)bVar6 * -2] = aiStack_ec[(uint)bVar6 * -2 + 0x10];
  aiStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       aiStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11];
  (aiStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
       (aiStack_ec + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11)[(uint)bVar6 * -2 + 1];
  FUN_00593c60(&local_230,aiStack_22c + 7,*(uint *)(param_1 + 0x259b0));
  local_1b0[0] = local_a0;
  aiStack_22c[(uint)bVar6 * -2 + 0x20] = aiStack_ec[(uint)bVar6 * -2 + 0x14];
  aiStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x21] =
       aiStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15];
  (aiStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x21)[(uint)bVar6 * -2 + 1] =
       (aiStack_ec + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15)[(uint)bVar6 * -2 + 1];
  aiStack_30[2] = param_1 + 0x964;
  iVar4 = local_20 * 0x10;
  FUN_00593df0(aiStack_30[2] + iVar4,aiStack_22c + 0x1f);
  puVar3 = (uint *)(iVar4 + 0x964 + param_1);
  piVar2 = puVar3 + (uint)bVar6 * -2 + 1;
  *puVar3 = local_110;
  *piVar2 = aiStack_10c[(uint)bVar6 * -2];
  piVar2[(uint)bVar6 * -2 + 1] = aiStack_10c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  (piVar2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
       (aiStack_10c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  FUN_00593c60(aiStack_22c + 0xb,aiStack_22c + 7,*(uint *)(param_1 + 0x259b0));
  local_1a0[0] = aiStack_ec[3];
  aiStack_22c[(uint)bVar6 * -2 + 0x24] = aiStack_ec[(uint)bVar6 * -2 + 4];
  aiStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25] =
       aiStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
  (aiStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25)[(uint)bVar6 * -2 + 1] =
       (aiStack_ec + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
  iVar4 = local_18 * 0x10;
  FUN_00593df0(aiStack_30[2] + iVar4,aiStack_22c + 0x23);
  puVar3 = (uint *)(iVar4 + 0x964 + param_1);
  piVar2 = puVar3 + (uint)bVar6 * -2 + 1;
  *puVar3 = local_160;
  *piVar2 = aiStack_22c[(uint)bVar6 * -2 + 0x34];
  piVar2[(uint)bVar6 * -2 + 1] = aiStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x35];
  (piVar2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
       (aiStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x35)[(uint)bVar6 * -2 + 1];
  FUN_00593c60(aiStack_22c + 0x2b,aiStack_22c + 7,*(uint *)(param_1 + 0x259b0),aiStack_30[3],
               &LAB_00544cc0);
  local_190[0] = local_130;
  aiStack_22c[(uint)bVar6 * -2 + 0x28] = aiStack_22c[(uint)bVar6 * -2 + 0x40];
  aiStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x29] =
       aiStack_22c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x41];
  (aiStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x29)[(uint)bVar6 * -2 + 1] =
       (aiStack_22c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x41)[(uint)bVar6 * -2 + 1];
  FUN_005466c0(param_1 + 0x2b4,aiStack_22c + 0x27);
  FUN_00546ae0(param_1 + 0x2b4);
  local_70 = 0;
  local_68 = 0;
  FUN_00408ae0(param_1);
  piVar2 = local_54 + 2;
  local_6c = 0x3fc90fdb;
  local_64[0] = 0x3e800000;
  local_54[2] = local_70;
  local_54[(uint)bVar6 * -2 + 3] = aiStack_ec[(uint)bVar6 * -2 + 0x20];
  local_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
       aiStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x21];
  local_64[1] = 0xbe051eb8;
  local_64[2] = 0;
  FUN_00591c10(local_260,aiStack_ec + 0x22,piVar2);
  FUN_00591860(local_260,_DAT_01b4d290 * 0x30 + param_1 + 0x1134);
  FUN_00591c10(local_290,param_1 + 0x20,param_1 + 0x30);
  FUN_005916b0(local_260,local_290);
  puVar3 = (uint *)&stack0xfffffd40;
  puVar5 = (uint *)(param_1 + 0x2575c);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  local_40[0] = 0x3dcccccd;
  local_40[1] = 0xbf800000;
  local_40[2] = 0x3f19999a;
  if ((int *)(param_1 + 0x25790) != local_54 + 5) {
    *(int *)(param_1 + 0x25790) = 0x3dcccccd;
    *(uint *)(param_1 + 0x25794) = 0xbf800000;
    *(uint *)(param_1 + 0x25798) = 0x3f19999a;
  }
  FUN_00591de0(param_1 + 0x2575c);
  local_64[3] = local_40[3];
  local_54[(uint)bVar6 * -2] = aiStack_30[(uint)bVar6 * -2];
  local_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       aiStack_30[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  if ((int *)(param_1 + 0x2579c) != aiStack_ec + 0x25) {
    *(int *)(param_1 + 0x2579c) = local_64[3];
    *(int *)(param_1 + 0x257a0) = local_54[0];
    *(int *)(param_1 + 0x257a4) = local_54[1];
  }
  puVar3 = (uint *)(param_1 + 0x25790);
  FUN_005915b0(puVar3,param_1 + 0x2575c);
  FUN_0044d570(0x1cb3950,*(uint *)(param_1 + 0x259b0));
  _DAT_01cb5604 = 1;
  _DAT_01cb560c = 1;
  if (puVar3 != (uint *)&DAT_01cb3954) {
    _DAT_01cb3954 = *puVar3;
    _DAT_01cb395c = *(uint *)(param_1 + 0x25798);
    _DAT_01cb3958 = *(uint *)(param_1 + 0x25794);
  }
  FUN_00449280(&DAT_01cb3960,param_1 + 0x2579c);
  _DAT_01cb5620 = 1;
  _DAT_01cb3a90 = 0x41800000;
  _DAT_01cb3988 = 0x42000000;
  FUN_00530630(0x01E661B8,0x1cb3950);
  return;
}
