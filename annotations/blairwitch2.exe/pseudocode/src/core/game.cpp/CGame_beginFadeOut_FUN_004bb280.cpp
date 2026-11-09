// Name: core_game.cpp_CGame_beginFadeOut_FUN_004bb280
// Address: 004bb280
// Address Range: [[004bb280, 004bb2bf]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_beginFadeOut_FUN_004bb280(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_beginFadeOut_FUN_004bb280(CGame *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1058 [1001];
  float *pfVar5;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  float fStack_70;
  float afStack_6c [2];
  int iStack_64;
  float fStack_60;
  int iStack_5c;
  float fStack_58;
  float afStack_54 [5];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_28;
  float afStack_24 [4];
  float fStack_14;
  
  bVar4 = 0;
  _DAT_01cb80e0 = 3;
  _DAT_01cb8110 = DAT_006141b8 / 2;
  _DAT_01cb8114 = DAT_006141bc / 2;
  _DAT_01cb810c = (float)DAT_006141b8;
  iVar1 = *(int *)&g_CScriptPtr->field_0xc;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x24))(iVar1);
    puVar2 = (uint *)&stack0xffffff6c;
    puVar3 = &stack0xffffff54;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    fStack_40 = fStack_ac + fStack_a0;
    fStack_3c = fStack_a8 + fStack_9c;
    fStack_38 = fStack_a4 + fStack_98;
    afStack_24[2] = fStack_ac + fStack_a0;
    afStack_24[(uint)bVar4 * -2 + 3] = afStack_54[(uint)bVar4 * -2 + 6];
    afStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    pfVar5 = afStack_54 + 2;
    fStack_58 = afStack_24[2] * _DAT_005d83eb;
    afStack_54[0] = afStack_24[3] * _DAT_005d83eb;
    afStack_54[1] = fStack_14 * _DAT_005d83eb;
    afStack_54[2] = afStack_24[2] * _DAT_005d83eb;
    afStack_54[(uint)bVar4 * -2 + 3] = afStack_54[(uint)bVar4 * -2];
    afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_actor_cpp_FUN_00408d70(*(uint *)&g_CScriptPtr->field_0xc,pfVar5);
    fStack_70 = fStack_34;
    afStack_6c[(uint)bVar4 * -2] = afStack_54[(uint)bVar4 * -2 + 9];
    afStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
    iStack_7c = (int)ROUND(fStack_70 * _DAT_005f7550);
    iStack_78 = (int)ROUND(afStack_6c[0] * _DAT_005f7550);
    iStack_74 = (int)ROUND(afStack_6c[1] * _DAT_005f7550);
    core_dcamera_cpp_FUN_0043cbe0(&g_CDemonCameraInstance,&iStack_7c);
    iStack_64 = iStack_28;
    (&fStack_60)[(uint)bVar4 * -2] = afStack_24[(uint)bVar4 * -2];
    (&fStack_60)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (iStack_5c != 0) {
      _DAT_01cb8110 =
           (int)((iStack_64 + (iStack_64 >> 0x1f) * -0x10000) -
                (uint)((iStack_64 >> 0x1f) << 0xf < 0)) >> 0x10;
      _DAT_01cb8114 =
           (int)(((int)fStack_60 + ((int)fStack_60 >> 0x1f) * -0x10000) -
                (uint)(((int)fStack_60 >> 0x1f) << 0xf < 0)) >> 0x10;
      if (0x1e0 < DAT_006141bc) {
        _DAT_01cb8110 = (_DAT_01cb8110 * DAT_006141b8) / 0x280;
        _DAT_01cb8114 = (_DAT_01cb8114 * DAT_006141bc) / 0x1e0;
        return;
      }
    }
  }
  return;
}
