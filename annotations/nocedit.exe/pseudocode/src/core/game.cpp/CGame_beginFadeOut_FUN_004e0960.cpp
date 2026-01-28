// Name: core_game.cpp_CGame_beginFadeOut_FUN_004e0960
// Address: 004e0960
// Address Range: [[004e0960, 004e099f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_beginFadeOut_FUN_004e0960(CGame *this_ptr)

#include "nocturne.h"

/* Signature: byte core_game.cpp_CGame_beginFadeOut_FUN_004e0960() */

void __cdecl core_game_cpp_CGame_beginFadeOut_FUN_004e0960(CGame *this_ptr)

{
  float *pfVar1;
  byte bVar2;
  int aiStackY_1018 [1000];
  CVector3i *in_stack_ffffff94;
  CVector3i CStack_54;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  int iStack_30;
  int aiStack_2c [5];
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  bVar2 = 0;
  DAT_02d831ec = 3;
  DAT_02d831f4 = g_WindowWidth / 2;
  DAT_02d831f8 = g_WindowHeight / 2;
  DAT_02d831f0 = (float)g_WindowWidth;
  if (g_CScriptPtr->focus_actor != 0) {
    pfVar1 = (float *)(**(code **)(*(int *)(g_CScriptPtr->focus_actor + 0x154) + 0x14))();
    fStack_18 = *pfVar1 + pfVar1[3];
    fStack_14 = pfVar1[1] + pfVar1[4];
    CStack_3c.x = fStack_18 * 0.5f;
    fStack_10 = pfVar1[2] + pfVar1[5];
    CStack_3c.y = fStack_14 * 0.5f;
    CStack_3c.z = fStack_10 * 0.5f;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)g_CScriptPtr->focus_actor,&CStack_48,&CStack_3c);
    CStack_54.x = (int)ROUND(CStack_48.x * 256.0f);
    CStack_54.y = (int)ROUND(CStack_48.y * 256.0f);
    CStack_54.z = (int)ROUND(CStack_48.z * 256.0f);
    core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
              (&g_CDemonCameraInstance,&CStack_54,in_stack_ffffff94);
    iStack_30 = aiStack_2c[2];
    aiStack_2c[(uint)bVar2 * -2] = aiStack_2c[(uint)bVar2 * -2 + 3];
    aiStack_2c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         aiStack_2c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
    if (aiStack_2c[1] != 0) {
      DAT_02d831f4 = (int)((iStack_30 + (iStack_30 >> 0x1f) * -0x10000) -
                          (uint)((iStack_30 >> 0x1f) << 0xf < 0)) >> 0x10;
      DAT_02d831f8 = (int)((aiStack_2c[0] + (aiStack_2c[0] >> 0x1f) * -0x10000) -
                          (uint)((aiStack_2c[0] >> 0x1f) << 0xf < 0)) >> 0x10;
      if (0x1e0 < g_WindowHeight) {
        DAT_02d831f4 = (DAT_02d831f4 * g_WindowWidth) / 0x280;
        DAT_02d831f8 = (DAT_02d831f8 * g_WindowHeight) / 0x1e0;
        return;
      }
    }
  }
  return;
}
