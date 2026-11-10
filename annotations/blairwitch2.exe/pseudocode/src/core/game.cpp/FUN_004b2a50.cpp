// Name: core_game.cpp_FUN_004b2a50
// Address: 004b2a50
// Address Range: [[004b2a50, 004b2d75]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004b2a50(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004b2a50(void)

{
  uint uVar1;
  _FILE *p_Var2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
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
  
  if (_DAT_01cb80d0 != 0) {
    iVar3 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d);
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x2f);
      if (iVar3 != 0) {
        iVar3 = _DAT_01cb80d4;
        if (_DAT_01cb80d4 == 0) {
          _DAT_01cb80d4 = 1;
          _DAT_01cb80dc = iVar3;
        }
        else {
          _DAT_01cb80d4 = 0;
        }
      }
    }
    if ((0 < _DAT_01cb80d8) && (_DAT_01cb80d8 <= _DAT_01cb80dc)) {
      _DAT_01cb80d4 = 0;
      return;
    }
    if (_DAT_01cb80d4 != 0) {
      _sprintf(acStack_98,"noc%05d.raw");
      _sprintf(acStack_160,"Movie recording active: movie\\%s");
      p_Stack_2c = engine_dosio_cpp_FUN_00460c70("movie",acStack_98,&DAT_005d72e4);
      if (p_Stack_2c != (_FILE *)0x0) {
        iStack_30 = 0;
        if (0 < 0x00000040) {
          do {
            iStack_28 = 0;
            if (0 < 0x00000040) {
              iStack_34 = iStack_30 + 1;
              do {
                p_Var2 = p_Stack_2c;
                iStack_20 = (iStack_28 * DAT_006141b8) / 0x00000040;
                iStack_18 = ((iStack_28 + 1) * DAT_006141b8) / 0x00000040;
                iVar3 = (iStack_30 * DAT_006141bc) / 0x00000040;
                iVar4 = (iStack_34 * DAT_006141bc) / 0x00000040;
                iVar8 = 0;
                iVar6 = 0;
                iVar7 = 0;
                iStack_14 = 0;
                if (iVar3 < iVar4) {
                  iStack_1c = iVar3 * 4;
                  iStack_24 = iVar4 << 2;
                  do {
                    if (iStack_20 < iStack_18) {
                      puVar5 = (uint *)(iStack_20 * 4 + *(int *)(&DAT_01c2a38c + iStack_1c));
                      iVar3 = iStack_20;
                      do {
                        uVar1 = *puVar5;
                        puVar5 = puVar5 + 1;
                        iVar6 = iVar6 + (uVar1 >> 0x10 & 0xff);
                        iVar3 = iVar3 + 1;
                        iVar8 = iVar8 + (uVar1 & 0xff);
                        iStack_14 = iStack_14 + 1;
                        iVar7 = iVar7 + (uVar1 >> 8 & 0xff);
                      } while (iVar3 < iStack_18);
                    }
                    iStack_1c = iStack_1c + 4;
                  } while (iStack_1c < iStack_24);
                }
                iVar7 = iVar7 / iStack_14;
                iVar8 = iVar8 / iStack_14;
                _fputc(iVar6 / iStack_14,p_Stack_2c);
                _fputc(iVar7,p_Var2);
                _fputc(iVar8,p_Var2);
                iStack_28 = iStack_28 + 1;
              } while (iStack_28 < 0x00000040);
            }
            iStack_30 = iStack_30 + 1;
          } while (iStack_30 < 0x00000040);
        }
        _fclose(p_Stack_2c);
        engine_2d_c_drawText_FUN_00401fe0(acStack_160,0,0);
        _DAT_01cb80dc = _DAT_01cb80dc + 1;
        return;
      }
    }
  }
  return;
}
