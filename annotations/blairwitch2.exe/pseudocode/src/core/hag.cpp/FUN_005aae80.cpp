// Name: core_hag.cpp_FUN_005aae80
// Address: 005aae80
// Address Range: [[005aae80, 005ab250]]
// Convention: unknown
// Signature: void core_hag_cpp_FUN_005aae80(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hag_cpp_FUN_005aae80(int param_1,float param_2)

{
  int iVar1;
  char *pcVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_10b8 [990];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  byte *puVar13;
  uint uVar14;
  SDamageInfo aSStack_10c [4];
  float fStack_108;
  uint uStack_d8;
  uint uStack_d4;
  float fStack_d0;
  float afStack_cc [4];
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float afStack_9c [5];
  CVector3f CStack_88;
  float fStack_7c;
  float afStack_78 [5];
  float afStack_64 [3];
  uint uStack_58;
  float fStack_4c;
  float fStack_48;
  uint uStack_44;
  CVector3f CStack_40;
  float fStack_34;
  float afStack_30 [3];
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar4 = 0;
  if (0.0 < *(float *)(param_1 + 0x11430)) {
    *(float *)(param_1 + 0x11430) = *(float *)(param_1 + 0x11430) - param_2;
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_10c);
    fStack_108 = *(float *)(param_1 + 0x11440) * param_2;
    iStack_20 = 0;
    iStack_1c = 0;
    pfVar3 = (float *)(param_1 + 0x11430);
    uStack_d8 = *(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    iStack_18 = param_1 + 0x264;
    iStack_24 = param_1 + 0x1134;
    *(uint *)(param_1 + 0x113d0) = 0;
    uStack_d4 = uStack_d8;
    for (; iStack_20 < *(int *)(*(int *)(param_1 + 0x113b0) + 0x1d1f8); iStack_20 = iStack_20 + 1) {
      iVar1 = unkaddr_005a7eb0_cpp_FUN_005a7ed0();
      if (iVar1 != 0) {
        pcVar2 = strstr
                           ((char *)(*(int *)(param_1 + 0x113b0) + 0x1d1fc + iStack_1c),
                            "Bip01");
        if (pcVar2 != (char *)0x0) {
          core_xform_cpp_FUN_00591530(&DAT_0265370c,iStack_24);
          afStack_64[0] = afStack_9c[2];
          afStack_78[(uint)bVar4 * -2 + 6] = afStack_9c[(uint)bVar4 * -2 + 3];
          afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
               afStack_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
          core_actor_cpp_FUN_00408cf0(param_1,afStack_78 + 5);
          afStack_78[2] = (float)uStack_58;
          afStack_78[(uint)bVar4 * -2 + 3] = afStack_78[(uint)bVar4 * -2 + 9];
          afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
               afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
          afStack_cc[2] = *(float *)(param_1 + 0x11434) * *pfVar3;
          afStack_cc[3] = *(float *)(param_1 + 0x11438) * *pfVar3;
          fStack_bc = *(float *)(param_1 + 0x1143c) * *pfVar3;
          fStack_b8 = afStack_cc[2];
          afStack_cc[(uint)bVar4 * -2 + 6] = afStack_cc[(uint)bVar4 * -2 + 3];
          afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
               afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
          fStack_ac = fStack_b8 * _DAT_005f0c3e;
          fStack_a8 = fStack_b4 * _DAT_005f0c3e;
          fStack_a4 = fStack_b0 * _DAT_005f0c3e;
          fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x3f4ccccd,0x3fc00000);
          fStack_4c = fStack_ac;
          afStack_78[(uint)bVar4 * -2 + 0xc] = afStack_cc[(uint)bVar4 * -2 + 9];
          afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
               afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
          uVar14 = 2;
          fStack_34 = fStack_4c;
          puVar13 = &DAT_0265370c;
          afStack_30[1] = (float)uStack_44;
          pfVar12 = &fStack_7c;
          pfVar11 = afStack_78 + 2;
          uVar10 = 0x3f800000;
          uVar9 = 0x3f800000;
          uVar8 = 0x3f800000;
          uVar7 = 0;
          uVar6 = 0x3f800000;
          afStack_30[0] = fStack_14 + fStack_48;
          uVar5 = 0x3f000000;
          fStack_7c = fStack_4c;
          afStack_78[(uint)bVar4 * -2] = afStack_30[(uint)bVar4 * -2];
          afStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
               afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
          fStack_14 = (float)core_actor_cpp_FUN_0040cf60
                                       (uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,pfVar11,pfVar12,puVar13
                                        ,uVar14);
          fStack_14 = (float)core_actor_cpp_FUN_0040cf60
                                       (0x3f800000,0x3fc00000,0x3f000000,0,fStack_14);
          unkafter_superopt_cpp_FUN_005a8300(iStack_18,fStack_14);
          iVar1 = core_actor_cpp_FUN_0040cfc0(0,0x32);
          if (iVar1 == 0) {
            fStack_d0 = *(float *)(param_1 + 0x11434) * *pfVar3;
            pfVar12 = afStack_78 + 2;
            afStack_cc[0] = *(float *)(param_1 + 0x11438) * *pfVar3;
            afStack_cc[1] = *(float *)(param_1 + 0x1143c) * *pfVar3;
            fStack_a0 = fStack_d0;
            afStack_9c[(uint)bVar4 * -2] = afStack_cc[(uint)bVar4 * -2];
            afStack_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
                 afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
            core_actor_cpp_FUN_00408d70(param_1,pfVar12);
            CStack_40._0_4_ = CStack_88._0_4_;
            *(uint *)((int)&CStack_40 + (uint)bVar4 * -8 + 4) =
                 *(uint *)((int)&CStack_88 + (uint)bVar4 * -8 + 4);
            *(uint *)((int)&CStack_40 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
                 *(uint *)((int)&CStack_88 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
            core_gore_cpp_FUN_004c9850
                      (g_CGorePtr,&CStack_40,(CVector3f *)&fStack_a0,1,
                       *(EBloodType *)(param_1 + 0x280c));
          }
        }
      }
      iStack_24 = iStack_24 + 0x30;
      iStack_1c = iStack_1c + 0x24;
    }
    return;
  }
  *(uint *)(param_1 + 0x11430) = 0;
  unkaddr_0059d350_cpp_FUN_0059d880(param_1 + 0x10af8,"BurnComplete");
  return;
}
