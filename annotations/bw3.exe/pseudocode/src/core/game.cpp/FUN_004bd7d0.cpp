// Name: core_game.cpp_FUN_004bd7d0
// Address: 004bd7d0
// Address Range: [[004bd7d0, 004bd8cf]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004bd7d0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004bd7d0(CGame *this_ptr)

{
  int iVar1;
  int extraout_EDX;
  uint *puVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  if ((_DAT_01d22c84 != 0) && (*(int *)&g_CFieldNotesPtr->field_0x40 == 0)) {
    if ((_DAT_01d22c84 < 4) && ((_DAT_01d22c84 != 1 && (0x3f7fffff < (int)_DAT_01d22c88)))) {
      core_game_cpp_FUN_004bd6a0();
      if (DAT_005fba20 == 0x20) {
        fVar5 = (float10)_DAT_01d22c88 * (float10)_DAT_01d22c88;
        iVar4 = 0;
        round();
        if (0 < extraout_EDX) {
          iVar3 = 0;
          do {
            puVar2 = *(uint **)(&DAT_01c5faec + iVar3);
            iVar1 = 0;
            if (0 < DAT_005fba18) {
              do {
                if ((int)ROUND(fVar5) <
                    (_DAT_01d22c90 - iVar4) * (_DAT_01d22c90 - iVar4) +
                    (_DAT_01d22c8c - iVar1) * (_DAT_01d22c8c - iVar1)) {
                  *puVar2 = 0;
                }
                iVar1 = iVar1 + 1;
                puVar2 = puVar2 + 1;
              } while (iVar1 < DAT_005fba18);
            }
            iVar3 = iVar3 + 4;
            iVar4 = iVar4 + 1;
          } while (iVar4 < DAT_005fba1c);
        }
      }
    }
    else {
      engine_2d_c_fillRectColor_FUN_004031c0(0,0,DAT_005fba18 + -1,DAT_005fba1c + -1,0);
    }
  }
  return;
}
