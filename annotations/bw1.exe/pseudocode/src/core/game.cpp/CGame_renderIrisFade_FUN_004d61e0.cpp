// Name: core_game.cpp_CGame_renderIrisFade_FUN_004d61e0
// Address: 004d61e0
// Address Range: [[004d61e0, 004d62df]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_renderIrisFade_FUN_004d61e0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_renderIrisFade_FUN_004d61e0(CGame *this_ptr)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  if ((g_INT_01cd0c7c != 0) && (g_CFieldNotesPtr->is_displayed == 0)) {
    if ((g_INT_01cd0c7c < 4) && ((g_INT_01cd0c7c != 1 && (0x3f7fffff < (int)g_IrisFadeRadius)))) {
      core_game_cpp_calculateIrisFadeCenter_FUN_004d60b0();
      iVar3 = g_INT_0061b49c;
      if (g_INT_0061b4a0 == 0x20) {
        iVar4 = 0;
        dVar5 = round((double)(g_IrisFadeRadius * g_IrisFadeRadius));
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            puVar2 = *(uint **)((int)g_ScreenBufferArray + iVar3);
            iVar1 = 0;
            if (0 < g_INT_0061b498) {
              do {
                if ((int)ROUND(dVar5) <
                    (g_IrisFadeCenterY - iVar4) * (g_IrisFadeCenterY - iVar4) +
                    (g_IrisFadeCenterX - iVar1) * (g_IrisFadeCenterX - iVar1)) {
                  *puVar2 = 0;
                }
                iVar1 = iVar1 + 1;
                puVar2 = puVar2 + 1;
              } while (iVar1 < g_INT_0061b498);
            }
            iVar3 = iVar3 + 4;
            iVar4 = iVar4 + 1;
          } while (iVar4 < g_INT_0061b49c);
        }
      }
    }
    else {
      engine_2d_c_fillRectColor_FUN_004031c0(0,0,g_INT_0061b498 + -1,g_INT_0061b49c + -1,0);
    }
  }
  return;
}
