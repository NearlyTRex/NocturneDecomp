// Name: core_game.cpp_CGame_beginFadeOut_FUN_004e0960
// Address: 004e0960
// Address Range: [[004e0960, 004e099f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_beginFadeOut_FUN_004e0960(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_beginFadeOut_FUN_004e0960(CGame *this_ptr)

{
  CDemonActor *this_ptr_00;
  CBoundingBox3D *pCVar1;
  byte bVar2;
  int aiStackY_1018 [1000];
  CBoundingBox3D CStack_6c;
  CVector3i CStack_54;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  int iStack_30;
  int aiStack_2c [2];
  CVector3i CStack_24;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  bVar2 = 0;
  g_IrisFadeType = 3;
  g_IrisFadeCenterX = g_WindowWidth / 2;
  g_IrisFadeCenterY = g_WindowHeight / 2;
  g_IrisFadeRadius = (float)g_WindowWidth;
  this_ptr_00 = g_CScriptPtr->focus_actor;
  if (this_ptr_00 != (CDemonActor *)0x0) {
    pCVar1 = (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,&CStack_6c);
    fStack_18 = (pCVar1->min).x + (pCVar1->max).x;
    fStack_14 = (pCVar1->min).y + (pCVar1->max).y;
    CStack_3c.x = fStack_18 * 0.5f;
    fStack_10 = (pCVar1->min).z + (pCVar1->max).z;
    CStack_3c.y = fStack_14 * 0.5f;
    CStack_3c.z = fStack_10 * 0.5f;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (g_CScriptPtr->focus_actor,&CStack_48,&CStack_3c);
    CStack_54.x = (int)ROUND(CStack_48.x * 256.0f);
    CStack_54.y = (int)ROUND(CStack_48.y * 256.0f);
    CStack_54.z = (int)ROUND(CStack_48.z * 256.0f);
    core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
              (&g_CDemonCameraInstance,&CStack_54,&CStack_24);
    iStack_30 = CStack_24.x;
    aiStack_2c[(uint)bVar2 * -2] = *(int *)((int)&CStack_24 + (uint)bVar2 * -8 + 4);
    aiStack_2c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         *(int *)((int)&CStack_24 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    if (aiStack_2c[1] != 0) {
      g_IrisFadeCenterX =
           (int)((iStack_30 + (iStack_30 >> 0x1f) * -0x10000) -
                (uint)((iStack_30 >> 0x1f) << 0xf < 0)) >> 0x10;
      g_IrisFadeCenterY =
           (int)((aiStack_2c[0] + (aiStack_2c[0] >> 0x1f) * -0x10000) -
                (uint)((aiStack_2c[0] >> 0x1f) << 0xf < 0)) >> 0x10;
      if (0x1e0 < g_WindowHeight) {
        g_IrisFadeCenterX = (g_IrisFadeCenterX * g_WindowWidth) / 0x280;
        g_IrisFadeCenterY = (g_IrisFadeCenterY * g_WindowHeight) / 0x1e0;
        return;
      }
    }
  }
  return;
}
