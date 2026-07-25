// Name: FUN_0049a320
// Address: 0049a320
// Address Range: [[0049a320, 0049a645]]
// Convention: unknown
// Signature: void FUN_0049a320(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049a320(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte auStack_160 [200];
  byte auStack_98 [100];
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (_DAT_01c78ac8 != 0) {
    iVar2 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x1d);
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x2f);
      if (iVar2 != 0) {
        iVar2 = _DAT_01c78acc;
        if (_DAT_01c78acc == 0) {
          _DAT_01c78acc = 1;
          _DAT_01c78ad4 = iVar2;
        }
        else {
          _DAT_01c78acc = 0;
        }
      }
    }
    if ((0 < _DAT_01c78ad0) && (_DAT_01c78ad0 <= _DAT_01c78ad4)) {
      _DAT_01c78acc = 0;
      return;
    }
    if (_DAT_01c78acc != 0) {
      _sprintf(auStack_98,"noc%05d.raw",_DAT_01c78ad4);
      _sprintf(auStack_160,"Movie recording active: movie\\%s",auStack_98);
      iStack_2c = engine_dosio_cpp_getFile_FUN_00456a60("movie",auStack_98,"wb");
      if (iStack_2c != 0) {
        iStack_30 = 0;
        if (0 < 0x00000040) {
          do {
            iStack_28 = 0;
            if (0 < 0x00000040) {
              iStack_34 = iStack_30 + 1;
              do {
                iVar2 = iStack_2c;
                iStack_20 = (iStack_28 * DAT_005b761c) / 0x00000040;
                iStack_18 = ((iStack_28 + 1) * DAT_005b761c) / 0x00000040;
                iVar3 = (iStack_30 * DAT_005b7620) / 0x00000040;
                iVar4 = (iStack_34 * DAT_005b7620) / 0x00000040;
                iVar8 = 0;
                iVar6 = 0;
                iVar7 = 0;
                iStack_14 = 0;
                if (iVar3 < iVar4) {
                  iStack_1c = iVar3 * 4;
                  iStack_24 = iVar4 << 2;
                  do {
                    if (iStack_20 < iStack_18) {
                      puVar5 = (uint *)(iStack_20 * 4 + *(int *)(&DAT_01bd2fa0 + iStack_1c));
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
                _fputc(iVar6 / iStack_14,iStack_2c);
                _fputc(iVar7,iVar2);
                _fputc(iVar8,iVar2);
                iStack_28 = iStack_28 + 1;
              } while (iStack_28 < 0x00000040);
            }
            iStack_30 = iStack_30 + 1;
          } while (iStack_30 < 0x00000040);
        }
        _fclose(iStack_2c);
        engine_2d_c_drawText_FUN_00402600(auStack_160,0,0);
        _DAT_01c78ad4 = _DAT_01c78ad4 + 1;
        return;
      }
    }
  }
  return;
}
