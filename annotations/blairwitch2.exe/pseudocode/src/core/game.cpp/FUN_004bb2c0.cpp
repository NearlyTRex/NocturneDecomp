// Name: core_game.cpp_FUN_004bb2c0
// Address: 004bb2c0
// Address Range: [[004bb2c0, 004bb2e5]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004bb2c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004bb2c0(void)

{
  CDemonActor *this_ptr;
  int iVar1;
  float unaff_EBP;
  uint *puVar2;
  uint *puVar3;
  float unaff_EDI;
  byte bVar4;
  float afStackY_1050 [1000];
  CBoundingBox3D *in_stack_ffffff54;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  float fStack_68;
  float afStack_64 [2];
  int iStack_5c;
  float fStack_58;
  int iStack_54;
  float fStack_50;
  float afStack_4c [5];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_20;
  float afStack_1c [3];
  
  bVar4 = 0;
  this_ptr = g_CScriptPtr->focus_actor;
  if (this_ptr != (CDemonActor *)0x0) {
    (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,in_stack_ffffff54);
    puVar2 = (uint *)&stack0xffffff74;
    puVar3 = (uint *)&stack0xffffff54;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    fStack_38 = fStack_a4 + fStack_98;
    fStack_34 = fStack_a0 + fStack_94;
    fStack_30 = fStack_9c + fStack_90;
    afStack_1c[2] = fStack_a4 + fStack_98;
    *(float *)(&stack0xfffffff0 + (uint)bVar4 * -8) = afStack_4c[(uint)bVar4 * -2 + 6];
    *(float *)(&stack0xfffffff4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         afStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    fStack_50 = afStack_1c[2] * _DAT_005d83eb;
    afStack_4c[0] = unaff_EBP * _DAT_005d83eb;
    afStack_4c[1] = unaff_EDI * _DAT_005d83eb;
    afStack_4c[2] = afStack_1c[2] * _DAT_005d83eb;
    afStack_4c[(uint)bVar4 * -2 + 3] = afStack_4c[(uint)bVar4 * -2];
    afStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_actor_cpp_FUN_00408d70();
    fStack_68 = fStack_2c;
    afStack_64[(uint)bVar4 * -2] = afStack_4c[(uint)bVar4 * -2 + 9];
    afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
    iStack_74 = (int)ROUND(fStack_68 * _DAT_005f7550);
    iStack_70 = (int)ROUND(afStack_64[0] * _DAT_005f7550);
    iStack_6c = (int)ROUND(afStack_64[1] * _DAT_005f7550);
    core_dcamera_cpp_FUN_0043cbe0();
    iStack_5c = iStack_20;
    (&fStack_58)[(uint)bVar4 * -2] = afStack_1c[(uint)bVar4 * -2];
    (&fStack_58)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (iStack_54 != 0) {
      _DAT_01cb8110 =
           (int)((iStack_5c + (iStack_5c >> 0x1f) * -0x10000) -
                (uint)((iStack_5c >> 0x1f) << 0xf < 0)) >> 0x10;
      _DAT_01cb8114 =
           (int)(((int)fStack_58 + ((int)fStack_58 >> 0x1f) * -0x10000) -
                (uint)(((int)fStack_58 >> 0x1f) << 0xf < 0)) >> 0x10;
      if (0x1e0 < DAT_006141bc) {
        _DAT_01cb8110 = (_DAT_01cb8110 * DAT_006141b8) / 0x280;
        _DAT_01cb8114 = (_DAT_01cb8114 * DAT_006141bc) / 0x1e0;
        return;
      }
    }
  }
  return;
}
