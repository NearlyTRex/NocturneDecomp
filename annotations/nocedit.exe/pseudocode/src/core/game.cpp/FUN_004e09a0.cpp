// Name: core_game.cpp_FUN_004e09a0
// Address: 004e09a0
// Address Range: [[004e09a0, 004e09bc]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004e09a0()
// Cross-references:
//   core_game.cpp_CGame_beginFadeIn_FUN_004e0920 (004e0920) at 004e095a [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004e0aa0 (004e0aa0) at 004e0add [UNCONDITIONAL_CALL]
// Globals:
//   CScript* g_CScriptPtr = 0310f858
//   CScript g_CScriptInstance
//   undefined4 DAT_0310f864

#include "nocturne.h"

/* Signature: undefined1 core_game.cpp_FUN_004e09a0() */

void core_game_cpp_FUN_004e09a0(void)

{
  float *pfVar1;
  BADSPACEBASE *in_ESP;
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
  if (g_CScriptPtr->focusActor != 0) {
    pfVar1 = (float *)(**(code **)(*(int *)(g_CScriptPtr->focusActor + 0x154) + 0x14))();
    fStack_18 = *pfVar1 + pfVar1[3];
    fStack_14 = pfVar1[1] + pfVar1[4];
    CStack_3c.x = fStack_18 * FLOAT_0062c92d;
    fStack_10 = pfVar1[2] + pfVar1[5];
    CStack_3c.y = fStack_14 * FLOAT_0062c92d;
    CStack_3c.z = fStack_10 * FLOAT_0062c92d;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)g_CScriptPtr->focusActor,&CStack_48,&CStack_3c);
    CStack_54.x = (int)ROUND(CStack_48.x * FLOAT_0065e9b4);
    CStack_54.y = (int)ROUND(CStack_48.y * FLOAT_0065e9b4);
    CStack_54.z = (int)ROUND(CStack_48.z * FLOAT_0065e9b4);
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
// 004e09a0: PUSH EBX
//   Label: core_game.cpp_FUN_004e09a0
// 004e09a1: PUSH ESI
// 004e09a2: PUSH EDI
// 004e09a3: SUB ESP,0x60
// 004e09a6: MOV EAX,[0x00680d50]
//   XREF to: 0310f858 (DATA)
//   XREF to: 00680d50 (READ)
// 004e09ab: MOV EDX,dword ptr [EAX + 0xc]
//   XREF to: 0310f864 (READ)
// 004e09ae: TEST EDX,EDX
// 004e09b0: JNZ 0x004e07d5
//   XREF to: 004e07d5 (CONDITIONAL_JUMP)
// 004e09b6: ADD ESP,0x60
//   Label: LAB_004e09b6
// 004e09b9: POP EDI
// 004e09ba: POP ESI
// 004e09bb: POP EBX
// 004e09bc: RET
