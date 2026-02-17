// Name: core_game.cpp_CGame_renderIrisFade_FUN_004e0aa0
// Address: 004e0aa0
// Address Range: [[004e0aa0, 004e0b8f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_renderIrisFade_FUN_004e0aa0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_game_cpp_CGame_renderIrisFade_FUN_004e0aa0(CGame *this_ptr)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  CGame *in_stack_ffffffec;
  
  if (DAT_02d831ec != 0) {
    if (((DAT_02d831ec < 4) && (DAT_02d831ec != 1)) && (0x3f7fffff < (int)DAT_02d831f0)) {
      core_game_cpp_CGame_calculateIrisFadeCenter_FUN_004e09a0(in_stack_ffffffec);
      if (g_BitsPerPixel == 0x20) {
        fVar1 = DAT_02d831f0 * DAT_02d831f0;
        iVar5 = 0;
        if (0 < g_WindowHeight) {
          iVar4 = 0;
          do {
            puVar3 = *(uint **)((int)g_ScreenBufferArray + iVar4);
            iVar2 = 0;
            if (0 < g_WindowWidth) {
              do {
                if ((int)ROUND(ROUND(fVar1)) <
                    (DAT_02d831f8 - iVar5) * (DAT_02d831f8 - iVar5) +
                    (DAT_02d831f4 - iVar2) * (DAT_02d831f4 - iVar2)) {
                  *puVar3 = 0;
                }
                iVar2 = iVar2 + 1;
                puVar3 = puVar3 + 1;
              } while (iVar2 < g_WindowWidth);
            }
            iVar4 = iVar4 + 4;
            iVar5 = iVar5 + 1;
          } while (iVar5 < g_WindowHeight);
        }
      }
    }
    else {
      engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0);
    }
  }
  return;
}
