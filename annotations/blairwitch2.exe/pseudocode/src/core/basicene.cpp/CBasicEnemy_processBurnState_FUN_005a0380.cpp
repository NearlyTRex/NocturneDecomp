// Name: core_basicene.cpp_CBasicEnemy_processBurnState_FUN_005a0380
// Address: 005a0380
// Address Range: [[005a0380, 005a0772]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_processBurnState_FUN_005a0380(CBasicEnemy *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_basicene_cpp_CBasicEnemy_processBurnState_FUN_005a0380(CBasicEnemy *this_ptr,float delta_time)

{
  CBasicEnemy *pCVar1;
  int iVar2;
  char *pcVar3;
  CBasicEnemy *pCVar4;
  byte bVar5;
  float afStackY_10bc [990];
  uint uVar6;
  float fVar7;
  uint uVar8;
  float max_value;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float *pfVar13;
  float *pfVar14;
  byte *puVar15;
  uint uVar16;
  SDamageInfo aSStack_110 [4];
  float fStack_10c;
  uint uStack_dc;
  uint uStack_d8;
  CVector3f CStack_d4;
  float fStack_c8;
  float afStack_c4 [4];
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
  float fStack_38;
  CBasicEnemy *pCStack_28;
  int iStack_24;
  int iStack_20;
  CBasicEnemy *pCStack_1c;
  CBasicEnemy *pCStack_18;
  float fStack_14;
  
  bVar5 = 0;
  if (0.0 < *(float *)(this_ptr + 0x11430)) {
    *(float *)(this_ptr + 0x11430) = *(float *)(this_ptr + 0x11430) - delta_time;
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_110);
    fStack_10c = *(float *)(this_ptr + 0x11440) * delta_time;
    uStack_dc = *(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    uStack_d8 = uStack_dc;
    (**(code **)(*(int *)(this_ptr + 0x2b0) + 0x110))(this_ptr,aSStack_110);
    iStack_20 = 0;
    iStack_24 = 0;
    pCStack_1c = this_ptr + 0x1134;
    pCStack_18 = this_ptr + 0x11434;
    pCStack_28 = this_ptr + 0x264;
    *(uint *)(this_ptr + 0x113d0) = 0;
    pCVar4 = this_ptr + 0x11430;
    for (; iStack_20 < *(int *)(*(int *)(this_ptr + 0x113b0) + 0x1d1f8); iStack_20 = iStack_20 + 1)
    {
      iVar2 = unkaddr_005a7eb0_cpp_FUN_005a7ed0();
      if (iVar2 != 0) {
        pcVar3 = strstr
                           ((char *)(*(int *)(this_ptr + 0x113b0) + 0x1d1fc + iStack_24),
                            "Bip01");
        if (pcVar3 != (char *)0x0) {
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
          if ((float)_DAT_005efb87 < fStack_14) {
            core_xform_cpp_FUN_00591530(&DAT_0265370c,pCStack_1c);
            afStack_74[0] = (float)uStack_5c;
            afStack_88[(uint)bVar5 * -2 + 6] = afStack_88[(uint)bVar5 * -2 + 0xc];
            afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
                 afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
            core_actor_cpp_FUN_00408cf0(this_ptr,afStack_88 + 5);
            pCVar1 = pCStack_18;
            afStack_88[2] = (float)uStack_44;
            afStack_88[(uint)bVar5 * -2 + 3] = afStack_88[(uint)bVar5 * -2 + 0x12];
            afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
                 afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
            fStack_50 = *(float *)pCVar1 * *(float *)pCVar4;
            fStack_4c = *(float *)(pCVar1 + 4) * *(float *)pCVar4;
            fStack_48 = *(float *)(pCVar1 + 8) * *(float *)pCVar4;
            fStack_c8 = *(float *)pCVar1 * *(float *)pCVar4;
            afStack_c4[(uint)bVar5 * -2] = afStack_88[(uint)bVar5 * -2 + 0xf];
            afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
                 afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
            fStack_b0 = fStack_c8 * _DAT_005efb7f;
            fStack_ac = afStack_c4[0] * _DAT_005efb7f;
            fStack_a8 = afStack_c4[1] * _DAT_005efb7f;
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.8,1.5);
            afStack_c4[2] = fStack_b0;
            afStack_c4[(uint)bVar5 * -2 + 3] = afStack_c4[(uint)bVar5 * -2 + 6];
            afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
                 afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
            uVar16 = 2;
            fStack_68 = afStack_c4[2];
            puVar15 = &DAT_0265370c;
            uStack_60 = uStack_b4;
            pfVar14 = afStack_c4 + 8;
            pfVar13 = afStack_88 + 2;
            uVar12 = 0x3f800000;
            uVar11 = 0x3f800000;
            uVar10 = 0x3f800000;
            uVar9 = 0;
            max_value = 1.0;
            fStack_64 = fStack_14 + afStack_c4[3];
            fVar7 = 0.5;
            afStack_a4[0] = afStack_c4[2];
            afStack_c4[(uint)bVar5 * -2 + 9] = afStack_88[(uint)bVar5 * -2 + 9];
            afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
                 afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
            fVar7 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar7,max_value);
            uVar8 = 0;
            uVar6 = 0x3f000000;
            fStack_14 = fVar7;
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.8,1.0);
            unkafter_superopt_cpp_FUN_005a8300
                      (pCStack_28,fStack_14,uVar6,uVar8,fVar7,uVar9,uVar10,uVar11,uVar12,pfVar13,
                       pfVar14,puVar15,uVar16);
            iVar2 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,0x32);
            if (iVar2 == 0) {
              pfVar14 = afStack_88 + 2;
              fStack_8c = *(float *)pCStack_18 * *(float *)pCVar4;
              afStack_88[0] = *(float *)(pCStack_18 + 4) * *(float *)pCVar4;
              afStack_88[1] = *(float *)(pCStack_18 + 8) * *(float *)pCVar4;
              CStack_d4.x = *(float *)pCStack_18 * *(float *)pCVar4;
              *(float *)((int)&CStack_d4 + (uint)bVar5 * -8 + 4) = afStack_88[(uint)bVar5 * -2];
              *(float *)((int)&CStack_d4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
                   afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
              core_actor_cpp_FUN_00408d70(this_ptr,pfVar14);
              CStack_98.x = fStack_38;
              *(float *)((int)&CStack_98 + (uint)bVar5 * -8 + 4) =
                   afStack_88[(uint)bVar5 * -2 + 0x15];
              *(float *)((int)&CStack_98 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
                   afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16];
              core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                        (g_CGorePtr,&CStack_98,&CStack_d4,1,*(EBloodType *)(this_ptr + 0x280c));
            }
          }
        }
      }
      pCStack_1c = pCStack_1c + 0x30;
      iStack_24 = iStack_24 + 0x24;
    }
    return;
  }
  *(uint *)(this_ptr + 0x11430) = 0;
  unkaddr_0059d350_cpp_FUN_0059d880(this_ptr + 0x10af8,"BurnComplete");
  return;
}
