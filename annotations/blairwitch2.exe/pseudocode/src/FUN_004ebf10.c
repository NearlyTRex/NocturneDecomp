// Name: FUN_004ebf10
// Address: 004ebf10
// Address Range: [[004ebf10, 004ecc0d]]
// Convention: unknown
// Signature: void FUN_004ebf10(void)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ebf10(void)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  bool bVar12;
  byte bVar13;
  char local_258 [256];
  char local_158 [256];
  char local_58 [32];
  uint local_38;
  int local_34 [5];
  int iStack_20;
  int local_1c;
  int iStack_18;
  
  bVar13 = 0;
  local_38 = 0;
  FUN_004b3000();
  iVar4 = 0x1d06150;
  iVar3 = 0;
  do {
    *(int *)(iVar3 + 0x1d06a50) = iVar4;
    iVar3 = iVar3 + 4;
    iVar4 = iVar4 + 0x100;
  } while (iVar3 != 0x24);
  local_1c = 0;
  FUN_005600e0(&DAT_01d06a78,0x1d06a7c,&DAT_01d06abc,0x1d06afc);
  if (_DAT_01d06a78 <= _DAT_01d06a74) {
    _DAT_01d06a74 = 0;
  }
  local_34[0] = 0;
  local_34[1] = 0;
  local_34[2] = 0;
  FUN_00560090(local_34,local_34 + 1);
  do {
    pcVar8 = local_258;
    FUN_004b3010();
    iVar3 = 0x01E661B8;
    *(uint *)(0x01E661B8 + 0x15ae84) = 1;
    FUN_005344c0(iVar3,50000,50000);
    *(uint *)(0x01E661B8 + 0x15ae94) = 0xdac;
    FUN_005024a0(0x1d05620);
    pcVar7 = &DAT_005dcc8d;
    FUN_00502510();
    pcVar9 = &DAT_0061e180;
    *(uint *)(0x01E661B8 + 0x15ae84) = 0;
    do {
      cVar1 = *pcVar7;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    puVar2 = 0x01CB6900;
    if ((0 < _DAT_01d06a78) && (_DAT_0264bba0 != 0)) {
      if ((*(int *)(_DAT_01d06a74 * 4 + 0x1d06afc) == 0x121a) &&
         (*(int *)(_DAT_01d06a74 * 4 + 0x1d06b3c) < 6)) {
        0x01CB6900[2] = 0x10;
        *puVar2 = 0x280;
        puVar2[1] = 0x1e0;
      }
      puVar2 = 0x01CB6900;
      if ((*(int *)(_DAT_01d06a74 * 4 + 0x1d06afc) == 0x8086) &&
         (*(int *)(_DAT_01d06a74 * 4 + 0x1d06b3c) == 0x7800)) {
        0x01CB6900[2] = 0x10;
        *puVar2 = 0x280;
        puVar2[1] = 0x1e0;
      }
      puVar2 = 0x01CB6900;
      if ((*(int *)(_DAT_01d06a74 * 4 + 0x1d06afc) == 0x12d2) &&
         (*(int *)(_DAT_01d06a74 * 4 + 0x1d06b3c) == 0x18)) {
        0x01CB6900[2] = 0x10;
        *puVar2 = 0x280;
        puVar2[1] = 0x1e0;
      }
      puVar2 = 0x01CB6900;
      if ((*(int *)(_DAT_01d06a74 * 4 + 0x1d06afc) == 0x12d2) &&
         (*(int *)(_DAT_01d06a74 * 4 + 0x1d06b3c) == 0x19)) {
        0x01CB6900[2] = 0x10;
        *puVar2 = 0x280;
        puVar2[1] = 0x1e0;
      }
    }
    puVar2 = 0x01CB6900;
    if ((_DAT_0264bba0 == 0) && (0x1e0 < (int)0x01CB6900[1])) {
      0x01CB6900[1] = 0x1e0;
      *puVar2 = 0x280;
    }
    FUN_0050fe80();
    FUN_005b7790(0x1d06150);
    0x01CB6900[3] = 0;
    if (local_1c != 0) {
      _DAT_0264bba0 = 0;
    }
    FUN_0050fe80();
    FUN_005b7790(0x1d06250);
    if ((((DAT_0061e180 != '\0') && (iVar3 = FUN_005b8130(&DAT_0061e180), iVar3 != 0)) &&
        (iVar3 = FUN_005b8130(&DAT_0061e180), iVar3 != 0)) &&
       (iVar3 = FUN_005b8130(&DAT_0061e180), iVar3 != 0)) {
      FUN_005b8130(&DAT_0061e180);
    }
    FUN_0050fe80();
    FUN_005b7790(0x1d06350);
    if (_DAT_01d06a78 == 0) {
      FUN_0050fe80();
      FUN_005b7790(&DAT_01d06450);
    }
    else {
      pcVar7 = (char *)FUN_0050fe80();
      pcVar9 = &DAT_01d06450;
      do {
        cVar1 = *pcVar7;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar7 = *(char **)(&DAT_01d06abc + _DAT_01d06a74 * 4);
      iVar3 = -1;
      pcVar9 = &DAT_01d06450;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      FUN_005b7790(local_58," (%d)");
      pcVar7 = local_58;
      iVar3 = -1;
      pcVar9 = &DAT_01d06450;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
    }
    pcVar7 = (char *)FUN_0050fe80();
    pcVar9 = &DAT_01d06550;
    do {
      cVar1 = *pcVar7;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    FUN_005b7790(local_258,&DAT_005dce76);
    iVar3 = -1;
    pcVar7 = &DAT_01d06550;
    do {
      pcVar9 = pcVar7;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar9 = pcVar7 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar1 = *pcVar8;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    FUN_0050fe80();
    FUN_005b7790(0x1d06650);
    pcVar8 = (char *)FUN_0050fe80();
    pcVar7 = &DAT_01d06750;
    do {
      cVar1 = *pcVar8;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    if (0x01CB6900[8] == 0) {
      if (0x01CB6900[6] == 0) {
        pcVar8 = (char *)FUN_0050fe80();
        pcVar7 = &DAT_01d06850;
        do {
          cVar1 = *pcVar8;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
      }
      else {
        pcVar8 = (char *)FUN_0050fe80();
        pcVar7 = &DAT_01d06850;
        do {
          cVar1 = *pcVar8;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
      }
    }
    pcVar8 = (char *)FUN_0050fe80();
    pcVar7 = &DAT_01d06950;
    do {
      cVar1 = *pcVar8;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    FUN_005b7790(local_158,"%5.2f",(double)DAT_0061ec60 * _DAT_005dcf0d);
    pcVar8 = local_158;
    iVar3 = -1;
    pcVar7 = &DAT_01d06950;
    do {
      pcVar9 = pcVar7;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar9 = pcVar7 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar1 = *pcVar8;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    uVar6 = 9;
    if (0x01CB6900[8] != 0) {
      uVar6 = 8;
    }
    FUN_0050fe80();
    uVar6 = FUN_004eb0e0(0x1d06a50,uVar6,&local_38,0x122);
    FUN_00589560();
    puVar2 = 0x01CB6900;
    switch(uVar6) {
    case 0:
      if (_DAT_01d0612c == 1) {
        if ((0x01CB6900[1] == 0xf0) && (24000000 < local_34[0])) {
          *0x01CB6900 = 0x500;
          puVar2[1] = 0x3c0;
        }
        else if ((0x01CB6900[1] == 0xf0) && (12000000 < local_34[0])) {
LAB_004ec6e7:
          0x01CB6900[1] = 0x300;
          *puVar2 = 0x400;
        }
        else {
          iVar3 = 0x01CB6900[1];
          if (iVar3 == 0xf0) {
LAB_004ec460:
            0x01CB6900[1] = 0x1e0;
            *puVar2 = 0x280;
          }
          else if (iVar3 == 300) {
            0x01CB6900[1] = 0xf0;
            *puVar2 = 0x140;
          }
          else {
            if (iVar3 != 0x180) {
              if (iVar3 == 0x1e0) {
                0x01CB6900[1] = 0x180;
                *puVar2 = 0x200;
                break;
              }
              if (iVar3 == 600) goto LAB_004ec460;
              if (iVar3 == 0x300) goto LAB_004ec75b;
            }
            0x01CB6900[1] = 0xf0;
            *puVar2 = 0x140;
          }
        }
      }
      else {
        iVar3 = 0x01CB6900[1];
        if (iVar3 == 0xf0) {
          *0x01CB6900 = 0x200;
          puVar2[1] = 0x180;
        }
        else if (iVar3 == 300) {
          *0x01CB6900 = 0x200;
          puVar2[1] = 0x180;
        }
        else {
          if (iVar3 == 0x180) goto LAB_004ec460;
          if ((local_34[0] < 0xb71b01) || (iVar3 != 0x1e0)) {
            if ((12000000 < local_34[0]) && (0x01CB6900[1] == 600)) goto LAB_004ec6e7;
            if ((local_34[0] < 0x16e3601) || (0x01CB6900[1] != 0x300)) {
              *0x01CB6900 = 0x140;
              puVar2[1] = 0xf0;
            }
            else {
              0x01CB6900[1] = 0x3c0;
              *puVar2 = 0x500;
            }
          }
          else {
LAB_004ec75b:
            0x01CB6900[1] = 600;
            *puVar2 = 800;
          }
        }
      }
      break;
    case 1:
      bVar12 = _DAT_0264bba0 == 0;
      _DAT_0264bba0 = (uint)bVar12;
      if (bVar12) {
        FUN_0055f4d0();
        FUN_0055e8c0();
        if (_DAT_0264bba0 != 0) {
          FUN_005600e0(&DAT_01d06a78,0x1d06a7c,&DAT_01d06abc,0x1d06afc);
          FUN_00560090(local_34,local_34 + 1);
          break;
        }
      }
      _DAT_01d06a78 = 0;
      break;
    case 3:
      if (_DAT_01d06a78 == 0) {
        _DAT_01d06a74 = 0;
      }
      else {
        _DAT_01d06a74 = _DAT_01d06a74 + 1;
        if (_DAT_01d06a78 <= _DAT_01d06a74) {
          _DAT_01d06a74 = 0;
        }
        FUN_005600c0();
      }
      break;
    case 4:
      if (0x01CB6900[2] == 0x10) {
        0x01CB6900[2] = 0x20;
      }
      else {
        0x01CB6900[2] = 0x10;
      }
      break;
    case 5:
      FUN_004ebe30();
      break;
    case 6:
      0x01CB6900[4] = (uint)(0x01CB6900[4] == 0);
      break;
    case 7:
      uVar5 = (uint)(0x01CB6900[6] == 0);
      0x01CB6900[6] = uVar5;
      puVar2[5] = uVar5;
      puVar2[7] = uVar5;
      break;
    case 8:
      uVar6 = FUN_0050fe80();
      iVar3 = DAT_006141b8 * 3 >> 0x1f;
      FUN_0047e1d0(0x01C25594,(int)((DAT_006141b8 * 3 + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2
                   ,0x2c,uVar6,0);
      if (DAT_0061ec60 < 0x3fff) {
LAB_004ec9a8:
        DAT_0061ec60 = 0x3fff;
      }
      else if (DAT_0061ec60 < 0x10000) {
        if (DAT_0061ec60 < 0x3fff) goto LAB_004ec9a8;
        if (0xffff < DAT_0061ec60) {
          DAT_0061ec60 = 0xffff;
        }
      }
      else {
        DAT_0061ec60 = 0xffff;
      }
      iVar3 = DAT_0061ec60;
      FUN_004032b0();
      FUN_0058ed10((int)(((longlong)(DAT_006141b8 + -1) * (longlong)(iVar3 + -0x3fff)) / 0xc000),
                   _DAT_01c2a380);
      local_34[3] = 0;
      do {
        FUN_0047e870();
        if (_DAT_01c2a37c != local_34[3]) {
          iVar3 = (int)(((longlong)_DAT_01c2a37c * 0xc000) / (longlong)(DAT_006141b8 + -1)) + 0x3fff
          ;
          local_34[3] = _DAT_01c2a37c;
        }
        iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x4b);
        if (iVar4 != 0) {
          iVar3 = iVar3 + -700;
        }
        iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x4d);
        if (iVar4 != 0) {
          iVar3 = iVar3 + 700;
        }
        if (iVar3 < 0x3fff) {
          iVar3 = 0x3fff;
        }
        else if (0xffff < iVar3) {
          iVar3 = 0xffff;
        }
        local_34[4] = _DAT_01c35e4c + 1;
        iStack_20 = _DAT_01c35e54 + -1;
        iVar4 = _DAT_01c35e50 + -1;
        iVar11 = _DAT_01c35e48 + 1;
        FUN_00403250(iVar11,local_34[4],iVar4,iStack_20,0,0xff);
        FUN_004031c0(iVar11,local_34[4],
                     (int)(((longlong)(iVar4 - iVar11) * (longlong)(iVar3 + -0x3fff)) / 0xc000) +
                     iVar11,iStack_20,4);
        iVar11 = _DAT_01c35e54 + _DAT_01c35e4c;
        iStack_18 = iVar3;
        iVar4 = FUN_004ab560(_DAT_01c25590,0x41,0xff,0,"%4.2f",
                             (double)iVar3 * _DAT_005dcf15);
        FUN_004a93f0(_DAT_01c25590,_DAT_01c35e48,_DAT_01c35e50,(iVar11 - iVar4) / 2);
        FUN_00589560();
        iVar11 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
        iVar4 = DAT_0061ec60;
      } while (((iVar11 == 0) &&
               (iVar11 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar4 = iVar3, iVar11 == 0)
               ) && (iVar11 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar11 == 0));
      DAT_0061ec60 = iVar4;
      FUN_0047e760();
    }
    iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
    if (iVar3 != 0) {
      return;
    }
  } while( true );
}
