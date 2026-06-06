// Name: core_game.cpp_calculateIrisFadeCenter_FUN_004e09a0
// Address: 004e09a0
// MANUAL RECONSTRUCTION
// Address Range: [[004e09a0, 004e09bc]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_calculateIrisFadeCenter_FUN_004e09a0(void)

#include "nocturne.h"

void __cdecl core_game_cpp_calculateIrisFadeCenter_FUN_004e09a0(void)

{
  CDemonActor *this_ptr;
  CBoundingBox3D *pCVar1;
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

  this_ptr = g_CScriptPtr->focus_actor;
  if (this_ptr != (CDemonActor *)0x0) {
    pCVar1 = (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,&CStack_6c);
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
    aiStack_2c[0] = CStack_24.y;
    aiStack_2c[1] = CStack_24.z;
    if (aiStack_2c[1] != 0) {
      g_IrisFadeCenterX = iStack_30 / 0x10000;
      g_IrisFadeCenterY = aiStack_2c[0] / 0x10000;
      if (0x1e0 < g_WindowHeight) {
        g_IrisFadeCenterX = (g_IrisFadeCenterX * g_WindowWidth) / 0x280;
        g_IrisFadeCenterY = (g_IrisFadeCenterY * g_WindowHeight) / 0x1e0;
        return;
      }
    }
  }
  return;
}
