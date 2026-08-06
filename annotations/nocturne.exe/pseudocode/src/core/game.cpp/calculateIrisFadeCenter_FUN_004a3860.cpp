// Name: core_game.cpp_calculateIrisFadeCenter_FUN_004a3860
// Address: 004a3860
// Address Range: [[004a3860, 004a387c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_calculateIrisFadeCenter_FUN_004a3860(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_calculateIrisFadeCenter_FUN_004a3860(void)

{
  int iVar1;
  float *pfVar2;
  byte bVar3;
  int aiStackY_1018 [1000];
  byte auStack_6c [24];
  CVector3i CStack_54;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  int iStack_30;
  int aiStack_2c [2];
  CVector3i CStack_24;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  bVar3 = 0;
  iVar1 = *(int *)(0x01E56DA0 + 0xc);
  if (iVar1 != 0) {
    pfVar2 = (float *)(**(code **)(*(int *)(iVar1 + 0x14c) + 0x14))(iVar1,auStack_6c);
    fStack_18 = *pfVar2 + pfVar2[3];
    fStack_14 = pfVar2[1] + pfVar2[4];
    CStack_3c.x = fStack_18 * 0.5f;
    fStack_10 = pfVar2[2] + pfVar2[5];
    CStack_3c.y = fStack_14 * 0.5f;
    CStack_3c.z = fStack_10 * 0.5f;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              (*(CDemonActor **)(0x01E56DA0 + 0xc),&CStack_48,&CStack_3c);
    CStack_54.x = (int)ROUND(CStack_48.x * _DAT_0059de84);
    CStack_54.y = (int)ROUND(CStack_48.y * _DAT_0059de84);
    CStack_54.z = (int)ROUND(CStack_48.z * _DAT_0059de84);
    core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610
              (&g_CDemonCamera_01fb8508,&CStack_54,&CStack_24);
    iStack_30 = CStack_24.x;
    aiStack_2c[(uint)bVar3 * -2] = *(int *)((int)&CStack_24 + (uint)bVar3 * -8 + 4);
    aiStack_2c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         *(int *)((int)&CStack_24 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    if (aiStack_2c[1] != 0) {
      _DAT_01c78b0c =
           (int)((iStack_30 + (iStack_30 >> 0x1f) * -0x10000) -
                (uint)((iStack_30 >> 0x1f) << 0xf < 0)) >> 0x10;
      _DAT_01c78b10 =
           (int)((aiStack_2c[0] + (aiStack_2c[0] >> 0x1f) * -0x10000) -
                (uint)((aiStack_2c[0] >> 0x1f) << 0xf < 0)) >> 0x10;
      if (0x1e0 < g_WindowHeight) {
        _DAT_01c78b0c = (_DAT_01c78b0c * g_WindowWidth) / 0x280;
        _DAT_01c78b10 = (_DAT_01c78b10 * g_WindowHeight) / 0x1e0;
        return;
      }
    }
  }
  return;
}
