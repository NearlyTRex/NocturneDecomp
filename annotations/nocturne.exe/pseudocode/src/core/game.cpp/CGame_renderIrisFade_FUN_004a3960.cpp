// Name: core_game.cpp_CGame_renderIrisFade_FUN_004a3960
// Address: 004a3960
// Address Range: [[004a3960, 004a3a4f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_renderIrisFade_FUN_004a3960(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_renderIrisFade_FUN_004a3960(CGame *this_ptr)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  if (_DAT_01c78b04 != 0) {
    if (((_DAT_01c78b04 < 4) && (_DAT_01c78b04 != 1)) && (0x3f7fffff < (int)_DAT_01c78b08)) {
      core_game_cpp_calculateIrisFadeCenter_FUN_004a3860();
      iVar3 = g_WindowHeight;
      if (DAT_005b7624 == 0x20) {
        iVar4 = 0;
        dVar5 = round((double)(_DAT_01c78b08 * _DAT_01c78b08));
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            puVar2 = *(uint **)(&DAT_01bd2fa0 + iVar3);
            iVar1 = 0;
            if (0 < g_WindowWidth) {
              do {
                if ((int)ROUND(dVar5) <
                    (_DAT_01c78b10 - iVar4) * (_DAT_01c78b10 - iVar4) +
                    (_DAT_01c78b0c - iVar1) * (_DAT_01c78b0c - iVar1)) {
                  *puVar2 = 0;
                }
                iVar1 = iVar1 + 1;
                puVar2 = puVar2 + 1;
              } while (iVar1 < g_WindowWidth);
            }
            iVar3 = iVar3 + 4;
            iVar4 = iVar4 + 1;
          } while (iVar4 < g_WindowHeight);
        }
      }
    }
    else {
      engine_2d_c_fillRectColor_FUN_00403e60(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0);
    }
  }
  return;
}
