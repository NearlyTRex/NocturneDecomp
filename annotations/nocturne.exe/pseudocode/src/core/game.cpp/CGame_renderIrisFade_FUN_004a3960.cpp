// Name: core_game.cpp_CGame_renderIrisFade_FUN_004a3960
// Address: 004a3960
// Address Range: [[004a3960, 004a3a4f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_renderIrisFade_FUN_004a3960(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_renderIrisFade_FUN_004a3960(void)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  if (_DAT_01c78b04 != 0) {
    if (((_DAT_01c78b04 < 4) && (_DAT_01c78b04 != 1)) && (0x3f7fffff < (int)_DAT_01c78b08)) {
      core_game_cpp_calculateIrisFadeCenter_FUN_004a3860();
      iVar3 = DAT_005b7620;
      if (DAT_005b7624 == 0x20) {
        iVar4 = 0;
        fVar5 = (float10)round
                                   ((float10)_DAT_01c78b08 * (float10)_DAT_01c78b08);
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            puVar2 = *(uint **)(&DAT_01bd2fa0 + iVar3);
            iVar1 = 0;
            if (0 < DAT_005b761c) {
              do {
                if ((int)ROUND(fVar5) <
                    (_DAT_01c78b10 - iVar4) * (_DAT_01c78b10 - iVar4) +
                    (_DAT_01c78b0c - iVar1) * (_DAT_01c78b0c - iVar1)) {
                  *puVar2 = 0;
                }
                iVar1 = iVar1 + 1;
                puVar2 = puVar2 + 1;
              } while (iVar1 < DAT_005b761c);
            }
            iVar3 = iVar3 + 4;
            iVar4 = iVar4 + 1;
          } while (iVar4 < DAT_005b7620);
        }
      }
    }
    else {
      engine_2d_c_fillRectColor_FUN_00403e60(0,0,DAT_005b761c + -1,DAT_005b7620 + -1,0);
    }
  }
  return;
}
