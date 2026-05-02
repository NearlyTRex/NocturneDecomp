// Name: core_game.cpp_CGame_renderIrisFade_FUN_004e0aa0
// Address: 004e0aa0
// MANUAL RECONSTRUCTION
// Address Range: [[004e0aa0, 004e0b8f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_renderIrisFade_FUN_004e0aa0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_renderIrisFade_FUN_004e0aa0(CGame *this_ptr)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  if (g_IrisFadeType != 0) {
    if (((g_IrisFadeType < 4) && (g_IrisFadeType != 1)) && (0x3f7fffff < (int)g_IrisFadeRadius)) {
      core_game_cpp_calculateIrisFadeCenter_FUN_004e09a0();
      if (g_BitsPerPixel == 0x20) {
        fVar1 = g_IrisFadeRadius * g_IrisFadeRadius;
        iVar5 = 0;
        if (0 < g_WindowHeight) {
          iVar4 = 0;
          do {
            puVar3 = *(uint **)((int)g_ScreenBufferArray + iVar4);
            iVar2 = 0;
            if (0 < g_WindowWidth) {
              do {
                if ((int)ROUND(ROUND(fVar1)) <
                    (g_IrisFadeCenterY - iVar5) * (g_IrisFadeCenterY - iVar5) +
                    (g_IrisFadeCenterX - iVar2) * (g_IrisFadeCenterX - iVar2)) {
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
