// Name: core_game.cpp_calculateIrisFadeCenter_FUN_004bb2c0
// Address: 004bb2c0
// Address Range: [[004bb2c0, 004bb2e5]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_calculateIrisFadeCenter_FUN_004bb2c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_calculateIrisFadeCenter_FUN_004bb2c0(void)

{
  CDemonActor *this_ptr;
  int iVar1;
  float unaff_EBP;
  uint *puVar2;
  uint *puVar3;
  float unaff_EDI;
  byte bVar4;
  float afStackY_1050 [3];
  int aiStackY_1044 [3];
  float afStackY_1038 [12];
  int aiStackY_1008 [3];
  float afStackY_ffc [979];
  CBoundingBox3D *in_stack_ffffff54;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  CVector3i CStack_74;
  float fStack_68;
  float afStack_64 [2];
  int iStack_5c;
  int aiStack_58 [2];
  float fStack_50;
  float afStack_4c [5];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CVector3i CStack_20;
  float fStack_14;
  
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
    fStack_14 = fStack_a4 + fStack_98;
    *(float *)(&stack0xfffffff0 + (uint)bVar4 * -8) = afStack_4c[(uint)bVar4 * -2 + 6];
    *(float *)(&stack0xfffffff4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         afStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
    fStack_50 = fStack_14 * _DAT_005d83eb;
    afStack_4c[0] = unaff_EBP * _DAT_005d83eb;
    afStack_4c[1] = unaff_EDI * _DAT_005d83eb;
    afStack_4c[2] = fStack_14 * _DAT_005d83eb;
    afStack_4c[(uint)bVar4 * -2 + 3] = afStack_4c[(uint)bVar4 * -2];
    afStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_actor_cpp_FUN_00408d70();
    fStack_68 = fStack_2c;
    afStack_64[(uint)bVar4 * -2] = afStack_4c[(uint)bVar4 * -2 + 9];
    afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
    CStack_74.x = (int)ROUND(fStack_68 * _DAT_005f7550);
    CStack_74.y = (int)ROUND(afStack_64[0] * _DAT_005f7550);
    CStack_74.z = (int)ROUND(afStack_64[1] * _DAT_005f7550);
    core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0043cbe0
              (&g_CDemonCameraInstance,&CStack_74,&CStack_20);
    iStack_5c = CStack_20.x;
    aiStack_58[(uint)bVar4 * -2] = *(int *)((int)&CStack_20 + (uint)bVar4 * -8 + 4);
    aiStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         *(int *)((int)&CStack_20 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (aiStack_58[1] != 0) {
      _DAT_01cb8110 =
           (int)((iStack_5c + (iStack_5c >> 0x1f) * -0x10000) -
                (uint)((iStack_5c >> 0x1f) << 0xf < 0)) >> 0x10;
      _DAT_01cb8114 =
           (int)((aiStack_58[0] + (aiStack_58[0] >> 0x1f) * -0x10000) -
                (uint)((aiStack_58[0] >> 0x1f) << 0xf < 0)) >> 0x10;
      if (0x1e0 < DAT_006141bc) {
        _DAT_01cb8110 = (_DAT_01cb8110 * DAT_006141b8) / 0x280;
        _DAT_01cb8114 = (_DAT_01cb8114 * DAT_006141bc) / 0x1e0;
        return;
      }
    }
  }
  return;
}
