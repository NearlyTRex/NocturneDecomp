// Name: core_game.cpp_CGame_renderIrisFade_FUN_004bb3d0
// Address: 004bb3d0
// Address Range: [[004bb3d0, 004bb4d4]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_renderIrisFade_FUN_004bb3d0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_renderIrisFade_FUN_004bb3d0(CGame *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  if (this_ptr->alpha_fade_alpha == 1.0) {
    engine_2d_c_fillRectColor_FUN_004031c0(0,0,g_INT_006141b8 + -1,g_INT_006141bc + -1,0);
  }
  if (((g_IrisFadeType != 0) && (g_CFieldNotesPtr->is_displayed == 0)) &&
     (core_game_cpp_calculateIrisFadeCenter_FUN_004bb2c0(), iVar3 = g_INT_006141bc,
     g_INT_006141c0 == 0x20)) {
    iVar4 = 0;
    dVar5 = round((double)(g_IrisFadeRadius * g_IrisFadeRadius));
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        iVar1 = 0;
        iVar2 = *(int *)((int)g_ScreenBufferArray + iVar3);
        if (0 < g_INT_006141b8) {
          do {
            if ((int)ROUND(dVar5) <
                (g_IrisFadeCenterX - iVar1) * (g_IrisFadeCenterX - iVar1) +
                (g_IrisFadeCenterY - iVar4) * (g_IrisFadeCenterY - iVar4)) {
              *(short *)(iVar2 + 2) = *(short *)(iVar2 + 2) + 0x10;
            }
            iVar1 = iVar1 + 1;
            iVar2 = iVar2 + 4;
          } while (iVar1 < g_INT_006141b8);
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < g_INT_006141bc);
    }
  }
  return;
}
