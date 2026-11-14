// Name: core_game.cpp_captureDebugMovieFrame_FUN_004b3e50
// Address: 004b3e50
// Address Range: [[004b3e50, 004b4175]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_captureDebugMovieFrame_FUN_004b3e50(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_captureDebugMovieFrame_FUN_004b3e50(void)

{
  uint uVar1;
  _FILE *file;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char acStack_160 [200];
  char acStack_98 [100];
  int iStack_34;
  int iStack_30;
  _FILE *p_Stack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (_DAT_01d22c40 != 0) {
    iVar2 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d);
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x2f);
      if (iVar2 != 0) {
        iVar2 = _DAT_01d22c44;
        if (_DAT_01d22c44 == 0) {
          _DAT_01d22c44 = 1;
          _DAT_01d22c4c = iVar2;
        }
        else {
          _DAT_01d22c44 = 0;
        }
      }
    }
    if ((0 < _DAT_01d22c48) && (_DAT_01d22c48 <= _DAT_01d22c4c)) {
      _DAT_01d22c44 = 0;
      return;
    }
    if (_DAT_01d22c44 != 0) {
      _sprintf(acStack_98,"noc%05d.raw");
      _sprintf(acStack_160,"Movie recording active: movie\\%s");
      p_Stack_2c = engine_dosio_cpp_FUN_004659c0("movie",acStack_98,&DAT_005c21d9);
      if (p_Stack_2c != (_FILE *)0x0) {
        iStack_30 = 0;
        if (0 < 0x00000040) {
          do {
            iStack_28 = 0;
            if (0 < 0x00000040) {
              iStack_34 = iStack_30 + 1;
              do {
                file = p_Stack_2c;
                iStack_20 = (iStack_28 * DAT_005fba18) / 0x00000040;
                iStack_18 = ((iStack_28 + 1) * DAT_005fba18) / 0x00000040;
                iVar2 = (iStack_30 * DAT_005fba1c) / 0x00000040;
                iVar3 = (iStack_34 * DAT_005fba1c) / 0x00000040;
                iVar7 = 0;
                iVar5 = 0;
                iVar6 = 0;
                iStack_14 = 0;
                if (iVar2 < iVar3) {
                  iStack_1c = iVar2 * 4;
                  iStack_24 = iVar3 << 2;
                  do {
                    if (iStack_20 < iStack_18) {
                      puVar4 = (uint *)(iStack_20 * 4 + *(int *)(&DAT_01c5faec + iStack_1c));
                      iVar2 = iStack_20;
                      do {
                        uVar1 = *puVar4;
                        puVar4 = puVar4 + 1;
                        iVar5 = iVar5 + (uVar1 >> 0x10 & 0xff);
                        iVar2 = iVar2 + 1;
                        iVar7 = iVar7 + (uVar1 & 0xff);
                        iStack_14 = iStack_14 + 1;
                        iVar6 = iVar6 + (uVar1 >> 8 & 0xff);
                      } while (iVar2 < iStack_18);
                    }
                    iStack_1c = iStack_1c + 4;
                  } while (iStack_1c < iStack_24);
                }
                iVar6 = iVar6 / iStack_14;
                iVar7 = iVar7 / iStack_14;
                _fputc(iVar5 / iStack_14,p_Stack_2c);
                _fputc(iVar6,file);
                _fputc(iVar7,file);
                iStack_28 = iStack_28 + 1;
              } while (iStack_28 < 0x00000040);
            }
            iStack_30 = iStack_30 + 1;
          } while (iStack_30 < 0x00000040);
        }
        _fclose(p_Stack_2c);
        engine_2d_c_drawText_FUN_00401fe0(acStack_160,0,0);
        _DAT_01d22c4c = _DAT_01d22c4c + 1;
        return;
      }
    }
  }
  return;
}
