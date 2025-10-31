// Name: core_game.cpp_CGame_beginFadeOut_FUN_004e0960
// Address: 004e0960
// Address Range: [[004e0960, 004e099f]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_beginFadeOut_FUN_004e0960(CGame * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004dbb2f [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055c0db [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   undefined4 DAT_02d831ec
//   undefined4 DAT_02d831f0
//   undefined4 DAT_02d831f4
//   undefined4 DAT_02d831f8

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_game.cpp_CGame_beginFadeOut_FUN_004e0960() */

void __cdecl core_game_cpp_CGame_beginFadeOut_FUN_004e0960(CGame *this_ptr)

{
  float *pfVar1;
  BADSPACEBASE *in_ESP;
  byte bVar2;
  int aiStackY_1018 [1000];
  CVector3i *in_stack_ffffff94;
  CVector3i CStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
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
  if (g_CScriptPtr->focusActor != 0) {
    pfVar1 = (float *)(**(code **)(*(int *)(g_CScriptPtr->focusActor + 0x154) + 0x14))();
    fStack_18 = *pfVar1 + pfVar1[3];
    fStack_14 = pfVar1[1] + pfVar1[4];
    fStack_3c = fStack_18 * _DAT_0062c92d;
    fStack_10 = pfVar1[2] + pfVar1[5];
    fStack_38 = fStack_14 * _DAT_0062c92d;
    fStack_34 = fStack_10 * _DAT_0062c92d;
    core_actor_cpp_CDemonActor_FUN_00408ec0((CDemonActor *)g_CScriptPtr->focusActor);
    CStack_54.x = (int)ROUND(fStack_48 * FLOAT_0065e9b4);
    CStack_54.y = (int)ROUND(fStack_44 * FLOAT_0065e9b4);
    CStack_54.z = (int)ROUND(fStack_40 * FLOAT_0065e9b4);
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


// Assembly code:
// 004e0960: MOV dword ptr [0x02d831ec],0x3
//   Label: core_game.cpp_CGame_beginFadeOut_FUN_004e0960
//   XREF to: 02d831ec (WRITE)
// 004e096a: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004e0970: MOV EAX,EDX
// 004e0972: SAR EDX,0x1f
// 004e0975: SUB EAX,EDX
// 004e0977: SAR EAX,0x1
// 004e0979: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004e097f: MOV [0x02d831f4],EAX
//   XREF to: 02d831f4 (WRITE)
// 004e0984: MOV EAX,EDX
// 004e0986: SAR EDX,0x1f
// 004e0989: SUB EAX,EDX
// 004e098b: SAR EAX,0x1
// 004e098d: FILD dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004e0993: FSTP float ptr [0x02d831f0]
//   XREF to: 02d831f0 (WRITE)
// 004e0999: MOV [0x02d831f8],EAX
//   XREF to: 02d831f8 (WRITE)
// 004e099e: MOV EAX,EAX
