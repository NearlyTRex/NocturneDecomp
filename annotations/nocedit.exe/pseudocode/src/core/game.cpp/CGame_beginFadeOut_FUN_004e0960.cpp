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
  int aiStackY_1010 [999];
  CVector3i *in_stack_ffffff9c;
  CVector3i CStack_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  int iStack_28;
  int aiStack_24 [5];
  float fStack_10;
  
  bVar2 = 0;
  DAT_02d831ec = 3;
  DAT_02d831f4 = g_WindowWidth / 2;
  DAT_02d831f8 = g_WindowHeight / 2;
  DAT_02d831f0 = (float)g_WindowWidth;
  this_ptr_00 = g_CScriptPtr->focus_actor;
  if (this_ptr_00 != (CDemonActor *)0x0) {
    pCVar1 = (*((this_ptr_00->vtable)._ub)->getBoundingBox)
                       (this_ptr_00,(CBoundingBox3D *)&stack0xffffff94);
    fStack_10 = (pCVar1->min).x + (pCVar1->max).x;
    CStack_34.x = fStack_10 * 0.5f;
    CStack_34.y = ((pCVar1->min).y + (pCVar1->max).y) * 0.5f;
    CStack_34.z = ((pCVar1->min).z + (pCVar1->max).z) * 0.5f;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (g_CScriptPtr->focus_actor,&CStack_40,&CStack_34);
    CStack_4c.x = (int)ROUND(CStack_40.x * 256.0f);
    CStack_4c.y = (int)ROUND(CStack_40.y * 256.0f);
    CStack_4c.z = (int)ROUND(CStack_40.z * 256.0f);
    core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
              (&g_CDemonCameraInstance,&CStack_4c,in_stack_ffffff9c);
    iStack_28 = aiStack_24[2];
    aiStack_24[(uint)bVar2 * -2] = aiStack_24[(uint)bVar2 * -2 + 3];
    aiStack_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         aiStack_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
    if (aiStack_24[1] != 0) {
      DAT_02d831f4 = (int)((iStack_28 + (iStack_28 >> 0x1f) * -0x10000) -
                          (uint)((iStack_28 >> 0x1f) << 0xf < 0)) >> 0x10;
      DAT_02d831f8 = (int)((aiStack_24[0] + (aiStack_24[0] >> 0x1f) * -0x10000) -
                          (uint)((aiStack_24[0] >> 0x1f) << 0xf < 0)) >> 0x10;
      if (0x1e0 < g_WindowHeight) {
        DAT_02d831f4 = (DAT_02d831f4 * g_WindowWidth) / 0x280;
        DAT_02d831f8 = (DAT_02d831f8 * g_WindowHeight) / 0x1e0;
        return;
      }
    }
  }
  return;
}
