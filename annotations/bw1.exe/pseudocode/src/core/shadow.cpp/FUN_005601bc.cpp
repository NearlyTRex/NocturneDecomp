// Name: core_shadow.cpp_FUN_005601bc
// Address: 005601bc
// Address Range: [[005601bc, 005603a3]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_005601bc(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_shadow_cpp_FUN_005601bc(CCharacter *param_1)

{
  float fVar1;
  byte bVar2;
  float afStackY_1084 [1014];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_84;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  byte auStack_54 [4];
  float afStack_50 [4];
  float fStack_40;
  CVector3f CStack_3c;
  double dStack_30;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar2 = 0;
  if ((*(int *)&param_1[1].field_0xe8 != 0) && (*(int *)&param_1[1].field_0x18 != 0)) {
    uStack_78 = 0;
    uStack_74 = 0xbe99999a;
    uStack_70 = 0;
    core_xform_cpp_FUN_005b5080(&stack0xffffff88);
    fStack_60 = fStack_84;
    *(uint *)((int)&stack0xffffffa4 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffff80 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffffa8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffff84 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    core_actor_cpp_FUN_00408bb0(param_1);
    fStack_9c = fStack_90;
    *(uint *)((int)&stack0xffffff68 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffff74 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffff6c + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffff78 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    if (fStack_98 < (float)_DAT_005f17c5) {
      CStack_3c._0_4_ = fStack_90;
      *(uint *)((int)&CStack_3c + ((uint)bVar2 * -2 + 1) * 4) =
           *(uint *)(&stack0xffffff74 + (uint)bVar2 * -8);
      *(uint *)((int)&CStack_3c + ((uint)bVar2 * -2 + (uint)bVar2 * -2 + 2) * 4) =
           *(uint *)(&stack0xffffff78 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      CStack_3c._4_4_ = 0;
      core_charactr_cpp_FUN_0042d750(param_1,&CStack_3c);
      return;
    }
    fStack_6c = fStack_9c - fStack_60;
    fStack_68 = fStack_98 - fStack_5c;
    fStack_64 = fStack_94 - fStack_58;
    afStack_50[2] = fStack_9c - fStack_60;
    afStack_50[(uint)bVar2 * -2 + 3] = (&stack0xffffff98)[(uint)bVar2 * 0xfffffffe];
    afStack_50[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
         afStack_50[(uint)bVar2 * -2 + (uint)bVar2 * -2 + -5];
    fStack_20 = afStack_50[3] * afStack_50[3];
    fStack_28 = SQRT(fStack_40 * fStack_40 + afStack_50[2] * afStack_50[2] + fStack_20);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"Chain stretched to %f\n",(double)fStack_28)
    ;
    if ((*(float *)&param_1[1].field_0xec < fStack_28) &&
       (fVar1 = *(float *)&param_1[1].field_0xec * *(float *)&param_1[1].field_0xec - fStack_20,
       dStack_30 = (double)fVar1, 0.0 <= dStack_30)) {
      fVar1 = SQRT(fVar1);
      auStack_54 = (byte  [4])fStack_6c;
      afStack_50[(uint)bVar2 * -2] = (&stack0xffffff98)[(uint)bVar2 * 0xfffffffe];
      afStack_50[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
           afStack_50[(uint)bVar2 * -2 + (uint)bVar2 * -2 + -5];
      fStack_1c = SQRT(afStack_50[1] * afStack_50[1] + (float)auStack_54 * (float)auStack_54);
      if ((0.0 < fStack_1c) && (fStack_24 = fStack_1c - fVar1, 0.0 < fStack_24)) {
        fStack_18 = fStack_24 / fStack_1c;
        auStack_54 = (byte  [4])((float)auStack_54 * fStack_18);
        afStack_50[0] = fStack_18 * 0.0;
        afStack_50[1] = afStack_50[1] * fStack_18;
        fStack_14 = fVar1;
        core_charactr_cpp_FUN_0042d750(param_1,(CVector3f *)auStack_54);
        return;
      }
    }
  }
  return;
}
