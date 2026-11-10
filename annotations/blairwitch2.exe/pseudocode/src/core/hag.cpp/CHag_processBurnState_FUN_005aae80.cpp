// Name: core_hag.cpp_CHag_processBurnState_FUN_005aae80
// Address: 005aae80
// Address Range: [[005aae80, 005ab250]]
// Convention: __cdecl
// Signature: void __cdecl core_hag_cpp_CHag_processBurnState_FUN_005aae80(CHag *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hag_cpp_CHag_processBurnState_FUN_005aae80(CHag *this_ptr,float delta_time)

{
  int iVar1;
  char *pcVar2;
  byte *puVar3;
  byte bVar4;
  float afStackY_10b8 [990];
  uint uVar5;
  float fVar6;
  uint uVar7;
  float max_value;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  float *pfVar13;
  byte *puVar14;
  uint uVar15;
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
  CVector3f CStack_a0;
  uint uStack_94;
  float afStack_90 [5];
  float afStack_7c [3];
  float afStack_70 [3];
  float afStack_64 [3];
  uint uStack_58;
  float fStack_4c;
  float fStack_48;
  uint uStack_44;
  CVector3f CStack_40;
  float fStack_34;
  float afStack_30 [3];
  byte *puStack_24;
  int iStack_20;
  int iStack_1c;
  byte *puStack_18;
  float fStack_14;
  
  bVar4 = 0;
  if (0.0 < *(float *)&this_ptr->field_0x11430) {
    *(float *)&this_ptr->field_0x11430 = *(float *)&this_ptr->field_0x11430 - delta_time;
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_10c);
    fStack_108 = *(float *)&this_ptr->field_0x11440 * delta_time;
    iStack_20 = 0;
    iStack_1c = 0;
    puVar3 = &this_ptr->field_0x11430;
    uStack_d8 = *(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    puStack_18 = &this_ptr->field_0x264;
    puStack_24 = &this_ptr->field_0x1134;
    *(uint *)&this_ptr->field_0x113d0 = 0;
    uStack_d4 = uStack_d8;
    for (; iStack_20 < *(int *)(*(int *)&this_ptr->field_0x113b0 + 0x1d1f8);
        iStack_20 = iStack_20 + 1) {
      iVar1 = unkaddr_005a7eb0_cpp_FUN_005a7ed0();
      if (iVar1 != 0) {
        pcVar2 = strstr
                           ((char *)(*(int *)&this_ptr->field_0x113b0 + 0x1d1fc + iStack_1c),
                            "Bip01");
        if (pcVar2 != (char *)0x0) {
          core_xform_cpp_FUN_00591530(&DAT_0265370c,puStack_24);
          afStack_64[0] = (float)uStack_94;
          afStack_90[(uint)bVar4 * -2 + 0xc] = afStack_90[(uint)bVar4 * -2];
          afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
               afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
          core_actor_cpp_FUN_00408cf0(this_ptr,afStack_90 + 0xb);
          afStack_70[0] = (float)uStack_58;
          afStack_90[(uint)bVar4 * -2 + 9] = afStack_90[(uint)bVar4 * -2 + 0xf];
          afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
               afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
          afStack_cc[2] = *(float *)&this_ptr->field_0x11434 * *(float *)puVar3;
          afStack_cc[3] = *(float *)&this_ptr->field_0x11438 * *(float *)puVar3;
          fStack_bc = *(float *)&this_ptr->field_0x1143c * *(float *)puVar3;
          fStack_b8 = afStack_cc[2];
          afStack_cc[(uint)bVar4 * -2 + 6] = afStack_cc[(uint)bVar4 * -2 + 3];
          afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
               afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
          fStack_ac = fStack_b8 * _DAT_005f0c3e;
          fStack_a8 = fStack_b4 * _DAT_005f0c3e;
          fStack_a4 = fStack_b0 * _DAT_005f0c3e;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.8,1.5);
          fStack_4c = fStack_ac;
          afStack_90[(uint)bVar4 * -2 + 0x12] = afStack_cc[(uint)bVar4 * -2 + 9];
          afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13] =
               afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
          uVar15 = 2;
          fStack_34 = fStack_4c;
          puVar14 = &DAT_0265370c;
          afStack_30[1] = (float)uStack_44;
          pfVar13 = afStack_90 + 5;
          pfVar12 = afStack_90 + 8;
          uVar11 = 0x3f800000;
          uVar10 = 0x3f800000;
          uVar9 = 0x3f800000;
          uVar8 = 0;
          max_value = 1.0;
          afStack_30[0] = fStack_14 + fStack_48;
          fVar6 = 0.5;
          afStack_7c[0] = fStack_4c;
          afStack_90[(uint)bVar4 * -2 + 6] = afStack_30[(uint)bVar4 * -2];
          afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
               afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
          fVar6 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar6,max_value);
          uVar7 = 0;
          uVar5 = 0x3f000000;
          fStack_14 = fVar6;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,1.5);
          unkafter_superopt_cpp_FUN_005a8300
                    (puStack_18,fStack_14,uVar5,uVar7,fVar6,uVar8,uVar9,uVar10,uVar11,pfVar12,
                     pfVar13,puVar14,uVar15);
          iVar1 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,0x32);
          if (iVar1 == 0) {
            fStack_d0 = *(float *)&this_ptr->field_0x11434 * *(float *)puVar3;
            pfVar13 = afStack_90 + 8;
            afStack_cc[0] = *(float *)&this_ptr->field_0x11438 * *(float *)puVar3;
            afStack_cc[1] = *(float *)&this_ptr->field_0x1143c * *(float *)puVar3;
            CStack_a0.x = fStack_d0;
            *(float *)((int)&CStack_a0 + (uint)bVar4 * -8 + 4) = afStack_cc[(uint)bVar4 * -2];
            *(float *)((int)&CStack_a0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
                 afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
            core_actor_cpp_FUN_00408d70(this_ptr,pfVar13);
            CStack_40.x = afStack_90[2];
            *(float *)((int)&CStack_40 + (uint)bVar4 * -8 + 4) = afStack_90[(uint)bVar4 * -2 + 3];
            *(float *)((int)&CStack_40 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
                 afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                      (g_CGorePtr,&CStack_40,&CStack_a0,1,*(EBloodType *)&this_ptr->field_0x280c);
          }
        }
      }
      puStack_24 = puStack_24 + 0x30;
      iStack_1c = iStack_1c + 0x24;
    }
    return;
  }
  *(uint *)&this_ptr->field_0x11430 = 0;
  unkaddr_0059d350_cpp_FUN_0059d880(&this_ptr->field_0x10af8,"BurnComplete");
  return;
}
