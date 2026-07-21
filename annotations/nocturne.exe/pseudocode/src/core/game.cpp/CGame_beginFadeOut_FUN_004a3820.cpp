// Name: core_game.cpp_CGame_beginFadeOut_FUN_004a3820
// Address: 004a3820
// Address Range: [[004a3820, 004a385f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_beginFadeOut_FUN_004a3820(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_beginFadeOut_FUN_004a3820(void)

{
  int iVar1;
  float *pfVar2;
  byte bVar3;
  int aiStackY_1018 [1000];
  byte auStack_6c [24];
  int iStack_54;
  int iStack_50;
  int iStack_4c;
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
  
  bVar3 = 0;
  _DAT_01c78b04 = 3;
  _DAT_01c78b0c = DAT_005b761c / 2;
  _DAT_01c78b10 = DAT_005b7620 / 2;
  _DAT_01c78b08 = (float)DAT_005b761c;
  iVar1 = *(int *)(0x01E56DA0 + 0xc);
  if (iVar1 != 0) {
    pfVar2 = (float *)(**(code **)(*(int *)(iVar1 + 0x14c) + 0x14))(iVar1,auStack_6c);
    fStack_18 = *pfVar2 + pfVar2[3];
    fStack_14 = pfVar2[1] + pfVar2[4];
    fStack_3c = fStack_18 * _DAT_00583afa;
    fStack_10 = pfVar2[2] + pfVar2[5];
    fStack_38 = fStack_14 * _DAT_00583afa;
    fStack_34 = fStack_10 * _DAT_00583afa;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              (*(uint *)(0x01E56DA0 + 0xc),&fStack_48,&fStack_3c);
    iStack_54 = (int)ROUND(fStack_48 * _DAT_0059de84);
    iStack_50 = (int)ROUND(fStack_44 * _DAT_0059de84);
    iStack_4c = (int)ROUND(fStack_40 * _DAT_0059de84);
    core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610(0x1fb8508,&iStack_54);
    iStack_30 = aiStack_2c[2];
    aiStack_2c[(uint)bVar3 * -2] = aiStack_2c[(uint)bVar3 * -2 + 3];
    aiStack_2c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         aiStack_2c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
    if (aiStack_2c[1] != 0) {
      _DAT_01c78b0c =
           (int)((iStack_30 + (iStack_30 >> 0x1f) * -0x10000) -
                (uint)((iStack_30 >> 0x1f) << 0xf < 0)) >> 0x10;
      _DAT_01c78b10 =
           (int)((aiStack_2c[0] + (aiStack_2c[0] >> 0x1f) * -0x10000) -
                (uint)((aiStack_2c[0] >> 0x1f) << 0xf < 0)) >> 0x10;
      if (0x1e0 < DAT_005b7620) {
        _DAT_01c78b0c = (_DAT_01c78b0c * DAT_005b761c) / 0x280;
        _DAT_01c78b10 = (_DAT_01c78b10 * DAT_005b7620) / 0x1e0;
        return;
      }
    }
  }
  return;
}
