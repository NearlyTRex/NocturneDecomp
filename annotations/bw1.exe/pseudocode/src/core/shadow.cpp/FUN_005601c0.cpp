// Name: core_shadow.cpp_FUN_005601c0
// Address: 005601c0
// Address Range: [[005601c0, 005603a3]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_005601c0(void)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_shadow_cpp_FUN_005601c0(void)

{
  float fVar1;
  byte bVar2;
  CCharacter *in_stack_00000004;
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
  CVector3f CStack_54;
  float fStack_48;
  float afStack_44 [2];
  CVector3f CStack_3c;
  double dStack_30;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar2 = 0;
  if ((in_stack_00000004[1].base.platform_position_delta.z != 0.0) &&
     (*(int *)(in_stack_00000004[1].base.actor_name + 0x18) != 0)) {
    uStack_78 = 0;
    uStack_74 = 0xbe99999a;
    uStack_70 = 0;
    core_xform_cpp_FUN_005b5080(&stack0xffffff88);
    fStack_60 = fStack_84;
    *(uint *)((int)&stack0xffffffa4 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffff80 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffffa8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffff84 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    core_actor_cpp_FUN_00408bb0();
    fStack_9c = fStack_90;
    *(uint *)((int)&stack0xffffff68 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffff74 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffff6c + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffff78 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    if (fStack_98 < (float)_DAT_005f17c5) {
      CStack_3c.x = fStack_90;
      *(uint *)((int)&CStack_3c + (uint)bVar2 * -8 + 4) =
           *(uint *)(&stack0xffffff74 + (uint)bVar2 * -8);
      *(uint *)((int)&CStack_3c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           *(uint *)(&stack0xffffff78 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      CStack_3c.y = 0.0;
      core_charactr_cpp_FUN_0042d750(in_stack_00000004,&CStack_3c);
      return;
    }
    fStack_6c = fStack_9c - fStack_60;
    fStack_68 = fStack_98 - fStack_5c;
    fStack_64 = fStack_94 - fStack_58;
    fStack_48 = fStack_9c - fStack_60;
    afStack_44[(uint)bVar2 * -2] = (&stack0xffffff98)[(uint)bVar2 * 0xfffffffe];
    afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + -8];
    fStack_20 = afStack_44[0] * afStack_44[0];
    fStack_28 = SQRT(afStack_44[1] * afStack_44[1] + fStack_48 * fStack_48 + fStack_20);
    engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"Chain stretched to %f\n");
    if ((in_stack_00000004[1].base.platform_orientation_delta.x < fStack_28) &&
       (fVar1 = in_stack_00000004[1].base.platform_orientation_delta.x,
       fVar1 = fVar1 * fVar1 - fStack_20, dStack_30 = (double)fVar1, 0.0 <= dStack_30)) {
      fVar1 = SQRT(fVar1);
      CStack_54.x = fStack_6c;
      *(float *)((int)&CStack_54 + (uint)bVar2 * -8 + 4) =
           (&stack0xffffff98)[(uint)bVar2 * 0xfffffffe];
      *(float *)((int)&CStack_54 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + -8];
      fStack_1c = SQRT(CStack_54.z * CStack_54.z + CStack_54.x * CStack_54.x);
      if ((0.0 < fStack_1c) && (fStack_24 = fStack_1c - fVar1, 0.0 < fStack_24)) {
        fStack_18 = fStack_24 / fStack_1c;
        CStack_54.x = CStack_54.x * fStack_18;
        CStack_54.y = fStack_18 * 0.0;
        CStack_54.z = CStack_54.z * fStack_18;
        fStack_14 = fVar1;
        core_charactr_cpp_FUN_0042d750(in_stack_00000004,&CStack_54);
        return;
      }
    }
  }
  return;
}
