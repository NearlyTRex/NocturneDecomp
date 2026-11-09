// Name: unkafter_basicene.cpp_FUN_005a0380
// Address: 005a0380
// Address Range: [[005a0380, 005a0772]]
// Convention: unknown
// Signature: void unkafter_basicene_cpp_FUN_005a0380(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_basicene_cpp_FUN_005a0380(int param_1,float param_2)

{
  int iVar1;
  char *pcVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_10bc [990];
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
  SDamageInfo aSStack_110 [4];
  float fStack_10c;
  uint uStack_dc;
  uint uStack_d8;
  float fStack_d4;
  float afStack_d0 [4];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  uint uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float afStack_a4 [3];
  CVector3f CStack_98;
  float fStack_8c;
  float afStack_88 [5];
  float afStack_74 [3];
  float fStack_68;
  float fStack_64;
  uint uStack_60;
  uint uStack_5c;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  uint uStack_44;
  CVector3f CStack_38;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float *pfStack_18;
  float fStack_14;
  
  bVar4 = 0;
  if (0.0 < *(float *)(param_1 + 0x11430)) {
    *(float *)(param_1 + 0x11430) = *(float *)(param_1 + 0x11430) - param_2;
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_110);
    fStack_10c = *(float *)(param_1 + 0x11440) * param_2;
    uStack_dc = *(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    uStack_d8 = uStack_dc;
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x110))(param_1,aSStack_110);
    iStack_20 = 0;
    iStack_24 = 0;
    iStack_1c = param_1 + 0x1134;
    pfStack_18 = (float *)(param_1 + 0x11434);
    iStack_28 = param_1 + 0x264;
    *(uint *)(param_1 + 0x113d0) = 0;
    pfVar3 = (float *)(param_1 + 0x11430);
    for (; iStack_20 < *(int *)(*(int *)(param_1 + 0x113b0) + 0x1d1f8); iStack_20 = iStack_20 + 1) {
      iVar1 = unkaddr_005a7eb0_cpp_FUN_005a7ed0();
      if (iVar1 != 0) {
        pcVar2 = strstr
                           ((char *)(*(int *)(param_1 + 0x113b0) + 0x1d1fc + iStack_24),
                            "Bip01");
        if (pcVar2 != (char *)0x0) {
          fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0,0x3f800000);
          if ((float)_DAT_005efb87 < fStack_14) {
            core_xform_cpp_FUN_00591530(&DAT_0265370c,iStack_1c);
            afStack_74[0] = (float)uStack_5c;
            afStack_88[(uint)bVar4 * -2 + 6] = afStack_88[(uint)bVar4 * -2 + 0xc];
            afStack_88[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
                 afStack_88[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
            core_actor_cpp_FUN_00408cf0(param_1,afStack_88 + 5);
            pfVar12 = pfStack_18;
            afStack_88[2] = (float)uStack_44;
            afStack_88[(uint)bVar4 * -2 + 3] = afStack_88[(uint)bVar4 * -2 + 0x12];
            afStack_88[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
                 afStack_88[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13];
            fStack_50 = *pfVar12 * *pfVar3;
            fStack_4c = pfVar12[1] * *pfVar3;
            fStack_48 = pfVar12[2] * *pfVar3;
            afStack_d0[2] = *pfVar12 * *pfVar3;
            afStack_d0[(uint)bVar4 * -2 + 3] = afStack_88[(uint)bVar4 * -2 + 0xf];
            afStack_d0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
                 afStack_88[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
            fStack_b0 = afStack_d0[2] * _DAT_005efb7f;
            fStack_ac = afStack_d0[3] * _DAT_005efb7f;
            fStack_a8 = fStack_c0 * _DAT_005efb7f;
            fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x3f4ccccd,0x3fc00000);
            fStack_bc = fStack_b0;
            afStack_d0[(uint)bVar4 * -2 + 6] = afStack_d0[(uint)bVar4 * -2 + 9];
            afStack_d0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
                 afStack_d0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
            uVar14 = 2;
            fStack_68 = fStack_bc;
            puVar13 = &DAT_0265370c;
            uStack_60 = uStack_b4;
            pfVar12 = afStack_d0 + 0xb;
            pfVar11 = afStack_88 + 2;
            uVar10 = 0x3f800000;
            uVar9 = 0x3f800000;
            uVar8 = 0x3f800000;
            uVar7 = 0;
            uVar6 = 0x3f800000;
            fStack_64 = fStack_14 + fStack_b8;
            uVar5 = 0x3f000000;
            afStack_a4[0] = fStack_bc;
            afStack_d0[(uint)bVar4 * -2 + 0xc] = afStack_88[(uint)bVar4 * -2 + 9];
            afStack_d0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
                 afStack_88[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
            fStack_14 = (float)core_actor_cpp_FUN_0040cf60
                                         (uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,pfVar11,pfVar12,
                                          puVar13,uVar14);
            fStack_14 = (float)core_actor_cpp_FUN_0040cf60
                                         (0x3f4ccccd,0x3f800000,0x3f000000,0,fStack_14);
            unkafter_superopt_cpp_FUN_005a8300(iStack_28,fStack_14);
            iVar1 = core_actor_cpp_FUN_0040cfc0(0,0x32);
            if (iVar1 == 0) {
              pfVar12 = afStack_88 + 2;
              fStack_8c = *pfStack_18 * *pfVar3;
              afStack_88[0] = pfStack_18[1] * *pfVar3;
              afStack_88[1] = pfStack_18[2] * *pfVar3;
              fStack_d4 = *pfStack_18 * *pfVar3;
              afStack_d0[(uint)bVar4 * -2] = afStack_88[(uint)bVar4 * -2];
              afStack_d0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
                   afStack_88[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
              core_actor_cpp_FUN_00408d70(param_1,pfVar12);
              CStack_98._0_4_ = CStack_38._0_4_;
              *(uint *)((int)&CStack_98 + (uint)bVar4 * -8 + 4) =
                   *(uint *)((int)&CStack_38 + (uint)bVar4 * -8 + 4);
              *(uint *)((int)&CStack_98 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
                   *(uint *)((int)&CStack_38 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
              core_gore_cpp_FUN_004c9850
                        (g_CGorePtr,&CStack_98,(CVector3f *)&fStack_d4,1,
                         *(EBloodType *)(param_1 + 0x280c));
            }
          }
        }
      }
      iStack_1c = iStack_1c + 0x30;
      iStack_24 = iStack_24 + 0x24;
    }
    return;
  }
  *(uint *)(param_1 + 0x11430) = 0;
  unkaddr_0059d350_cpp_FUN_0059d880(param_1 + 0x10af8,"BurnComplete");
  return;
}
