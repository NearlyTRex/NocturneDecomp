// Name: FUN_1000b950
// Address: 1000b950
// Address Range: [[1000b950, 1000bafb]]
// Convention: unknown
// Signature: int FUN_1000b950(int param_1,int param_2)

#include "nocturne.h"

int FUN_1000b950(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  _ptiddata p_Var5;
  uint *puVar6;
  int iVar7;
  BOOL BVar8;
  DWORD *pDVar9;
  DWORD DVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  byte bVar14;
  int iStack_4;
  
  bVar14 = 0;
  if ((param_2 != 4) && (param_2 != 3)) {
    if ((param_1 == 2) || (((param_1 == 0x15 || (param_1 == 0x16)) || (param_1 == 0xf)))) {
      __lock(1);
      if (((param_1 == 2) || (param_1 == 0x15)) && (DAT_10017908 == 0)) {
        BVar8 = SetConsoleCtrlHandler(FUN_1000bb30,1);
        if (BVar8 != 1) {
          pDVar9 = (DWORD *)FUN_10008a30();
          DVar10 = GetLastError();
          *pDVar9 = DVar10;
          FUN_10005a10(1);
          goto LAB_1000ba94;
        }
        DAT_10017908 = 1;
      }
      iVar4 = DAT_10017904;
      iVar3 = DAT_10017900;
      iVar2 = DAT_100178fc;
      iVar7 = DAT_100178f8;
      switch(param_1) {
      case 2:
        DAT_100178f8 = param_2;
        break;
      default:
        iVar7 = iStack_4;
        break;
      case 0xf:
        DAT_10017904 = param_2;
        iVar7 = iVar4;
        break;
      case 0x15:
        DAT_100178fc = param_2;
        iVar7 = iVar2;
        break;
      case 0x16:
        DAT_10017900 = param_2;
        iVar7 = iVar3;
      }
      FUN_10005a10(1);
      return iVar7;
    }
    if (((param_1 == 8) || (param_1 == 4)) || (param_1 == 0xb)) {
      p_Var5 = __getptd();
      if (*(uint **)(p_Var5->_con_ch_buf + 4) == &DAT_100176d0) {
        puVar6 = (uint *)FUN_10008830(0x00000078);
        *(uint **)(p_Var5->_con_ch_buf + 4) = puVar6;
        uVar12 = 0x00000078;
        if (puVar6 == (uint *)0x0) goto LAB_1000ba94;
        puVar13 = &DAT_100176d0;
        for (uVar11 = 0x00000078 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar6 = *puVar13;
          puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar14 * -2 + 1;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(byte *)puVar6 = *(byte *)puVar13;
          puVar13 = (uint *)((int)puVar13 + (uint)bVar14 * -2 + 1);
          puVar6 = (uint *)((int)puVar6 + (uint)bVar14 * -2 + 1);
        }
      }
      iVar7 = FUN_1000bda0(param_1,*(uint *)(p_Var5->_con_ch_buf + 4));
      if (iVar7 != 0) {
        iVar2 = *(int *)(iVar7 + 8);
        if (*(int *)(iVar7 + 4) != param_1) {
          return iVar2;
        }
        do {
          *(int *)(iVar7 + 8) = param_2;
          piVar1 = (int *)(iVar7 + 0x10);
          iVar7 = iVar7 + 0xc;
        } while (*piVar1 == param_1);
        return iVar2;
      }
    }
  }
LAB_1000ba94:
  puVar6 = (uint *)FUN_10008a20();
  *puVar6 = 0x16;
  return -1;
}
