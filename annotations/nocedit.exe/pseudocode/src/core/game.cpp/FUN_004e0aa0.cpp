// Name: core_game.cpp_FUN_004e0aa0
// Address: 004e0aa0
// Address Range: [[004e0aa0, 004e0b8f]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004e0aa0()

#include "nocturne.h"

/* Signature: byte core_game.cpp_FUN_004e0aa0() */

void core_game_cpp_FUN_004e0aa0(void)

{
  int iVar1;
  uint extraout_EDX;
  uint *puVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  double dVar6;
  
  if (DAT_02d831ec != 0) {
    if (((DAT_02d831ec < 4) && (DAT_02d831ec != 1)) && (0x3f7fffff < (int)DAT_02d831f0)) {
      core_game_cpp_FUN_004e09a0();
      if (g_BitsPerPixel == 0x20) {
        fVar5 = (float10)DAT_02d831f0 * (float10)DAT_02d831f0;
        iVar4 = 0;
        dVar6 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,g_WindowHeight));
        if (0 < SUB84 /* extract 2-byte value */(dVar6,0)) {
          iVar3 = 0;
          do {
            puVar2 = *(uint **)((int)g_ScreenBufferArray + iVar3);
            iVar1 = 0;
            if (0 < g_WindowWidth) {
              do {
                if ((int)ROUND(fVar5) <
                    (DAT_02d831f8 - iVar4) * (DAT_02d831f8 - iVar4) +
                    (DAT_02d831f4 - iVar1) * (DAT_02d831f4 - iVar1)) {
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
      engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0);
    }
  }
  return;
}
