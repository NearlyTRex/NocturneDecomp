// Name: FUN_004e85a0
// Address: 004e85a0
// Address Range: [[004e85a0, 004e8f2a]]
// Convention: unknown
// Signature: void FUN_004e85a0(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004e882d) */
/* WARNING: Removing unreachable block (ram,0x004e8ae1) */
/* WARNING: Removing unreachable block (ram,0x004e8843) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e85a0(void)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  byte bVar12;
  char local_140 [256];
  char local_40 [32];
  uint local_20;
  int local_1c [3];
  
  bVar12 = 0;
  local_20 = 0;
  FUN_004b4430(0x01D2130C);
  iVar6 = 0x1d73800;
  iVar4 = 0;
  do {
    *(int *)(iVar4 + 0x1d74000) = iVar6;
    iVar4 = iVar4 + 4;
    iVar6 = iVar6 + 0x100;
  } while (iVar4 != 0x20);
  FUN_00566400(&DAT_01d74024,0x1d74028,&DAT_01d74068,&DAT_01d740a8,0x1d740e8);
  if ((int)_DAT_01d74024 <= _DAT_01d74020) {
    _DAT_01d74020 = 0;
  }
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  FUN_005663b0(local_1c,local_1c + 1,local_1c + 2);
  do {
    pcVar8 = local_140;
    FUN_004b4440(0x01D2130C);
    iVar4 = 0x01ED78C8;
    *(uint *)(0x01ED78C8 + 0x15ae84) = 1;
    FUN_0053b100(iVar4,50000,50000,0x10000);
    pcVar7 = &DAT_005c73f6;
    *(uint *)(0x01ED78C8 + 0x15ae94) = 0xdac;
    FUN_004f9670(0x1d72cb0);
    pcVar9 = &DAT_00606730;
    *(uint *)(0x01ED78C8 + 0x15ae84) = 0;
    do {
      cVar1 = *pcVar7;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    puVar2 = 0x01D2130C;
    if ((0 < (int)_DAT_01d74024) && (_DAT_02cf5fcc != 0)) {
      if ((*(int *)(&DAT_01d740a8 + _DAT_01d74020 * 4) == 0x121a) &&
         (*(int *)(_DAT_01d74020 * 4 + 0x1d740e8) < 6)) {
        0x01D2130C[2] = 0x10;
        *puVar2 = 0x280;
        puVar2[1] = 0x1e0;
      }
      puVar2 = 0x01D2130C;
      if ((*(int *)(&DAT_01d740a8 + _DAT_01d74020 * 4) == 0x8086) &&
         (*(int *)(_DAT_01d74020 * 4 + 0x1d740e8) == 0x7800)) {
        0x01D2130C[2] = 0x10;
        *puVar2 = 0x280;
        puVar2[1] = 0x1e0;
      }
      puVar2 = 0x01D2130C;
      if ((*(int *)(&DAT_01d740a8 + _DAT_01d74020 * 4) == 0x12d2) &&
         (*(int *)(_DAT_01d74020 * 4 + 0x1d740e8) == 0x18)) {
        0x01D2130C[2] = 0x10;
        *puVar2 = 0x280;
        puVar2[1] = 0x1e0;
      }
      puVar2 = 0x01D2130C;
      if ((*(int *)(&DAT_01d740a8 + _DAT_01d74020 * 4) == 0x12d2) &&
         (*(int *)(_DAT_01d74020 * 4 + 0x1d740e8) == 0x19)) {
        0x01D2130C[2] = 0x10;
        *puVar2 = 0x280;
        puVar2[1] = 0x1e0;
      }
    }
    puVar2 = 0x01D2130C;
    if ((_DAT_02cf5fcc == 0) && (0x1e0 < (int)0x01D2130C[1])) {
      0x01D2130C[1] = 0x1e0;
      *puVar2 = 0x280;
    }
    iVar4 = 0x01D2130C[1];
    if (iVar4 == 0xf0) {
      pcVar7 = "Resolution : 320x240";
    }
    else if (iVar4 == 300) {
      pcVar7 = "Resolution : 400x300";
    }
    else if (iVar4 == 0x180) {
      pcVar7 = "Resolution : 512x384";
    }
    else if (iVar4 == 0x1e0) {
      pcVar7 = "Resolution : 640x480";
    }
    else if (iVar4 == 600) {
      pcVar7 = "Resolution : 800x600";
    }
    else if (iVar4 == 0x300) {
      pcVar7 = "Resolution : 1024x768";
    }
    else if (iVar4 == 0x3c0) {
      pcVar7 = "Resolution : 1280x960";
    }
    else {
      pcVar7 = "Resolution : 320x240";
    }
    uVar5 = FUN_00508960(pcVar7);
    FUN_005a28c0(0x1d73800,uVar5);
    0x01D2130C[3] = 0;
    if (_DAT_02cf5fcc == 0) {
      pcVar7 = "3D Hardware : Off";
    }
    else {
      pcVar7 = "3D Hardware : On";
    }
    uVar5 = FUN_00508960(pcVar7);
    FUN_005a28c0(0x1d73900,uVar5);
    if (_DAT_01d74024 == 0) {
      uVar5 = FUN_00508960("No 3D Hardware detected");
      FUN_005a28c0(&DAT_01d73a00,uVar5);
    }
    else {
      pcVar7 = (char *)FUN_00508960("3D Card : ");
      pcVar9 = &DAT_01d73a00;
      do {
        cVar1 = *pcVar7;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar7 = *(char **)(&DAT_01d74068 + _DAT_01d74020 * 4);
      iVar4 = -1;
      pcVar9 = &DAT_01d73a00;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
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
      FUN_005a28c0(local_40," (%d)",_DAT_01d74020);
      pcVar7 = local_40;
      iVar4 = -1;
      pcVar9 = &DAT_01d73a00;
      do {
        pcVar10 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
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
    pcVar7 = (char *)FUN_00508960("Bits Per Pixel : ");
    pcVar9 = &DAT_01d73b00;
    do {
      cVar1 = *pcVar7;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    FUN_005a28c0(local_140,&DAT_005c753c,0x01D2130C[2]);
    iVar4 = -1;
    pcVar7 = &DAT_01d73b00;
    do {
      pcVar9 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar9 = pcVar7 + (uint)bVar12 * -2 + 1;
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
    uVar5 = FUN_00508960("Monitor Calibration");
    FUN_005a28c0(0x1d73c00,uVar5);
    if (0x01D2130C[4] == 0) {
      pcVar8 = "Subtitles : Off";
    }
    else {
      pcVar8 = "Subtitles : On";
    }
    pcVar8 = (char *)FUN_00508960(pcVar8);
    pcVar7 = &DAT_01d73d00;
    do {
      cVar1 = *pcVar8;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    if (0x01D2130C[0x38] == 0) {
      pcVar8 = "Health/Mana Numbers : Off";
    }
    else {
      pcVar8 = "Health/Mana Numbers : On";
    }
    pcVar8 = (char *)FUN_00508960(pcVar8);
    pcVar7 = &DAT_01d73e00;
    do {
      cVar1 = *pcVar8;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    if (0x01D2130C[0x39] == 0) {
      pcVar8 = "Display Crosshair : Off";
    }
    else {
      pcVar8 = "Display Crosshair : On";
    }
    pcVar8 = (char *)FUN_00508960(pcVar8);
    pcVar7 = &DAT_01d73f00;
    do {
      cVar1 = *pcVar8;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    uVar5 = FUN_00508960("Graphic Options");
    uVar5 = FUN_004e7860(0x1d74000,8,&local_20,200,uVar5);
    FUN_0057a8a0();
    puVar2 = 0x01D2130C;
    uVar3 = _DAT_01d74024;
    switch(uVar5) {
    case 0:
      if (_DAT_01d737d4 == 1) {
        if ((0x01D2130C[1] == 0xf0) && (24000000 < local_1c[0])) {
LAB_004e8a3b:
          0x01D2130C[1] = 0x3c0;
          *puVar2 = 0x500;
          uVar3 = _DAT_01d74024;
        }
        else if ((0x01D2130C[1] == 0xf0) && (12000000 < local_1c[0])) {
LAB_004e8c0d:
          0x01D2130C[1] = 0x300;
          *puVar2 = 0x400;
          uVar3 = _DAT_01d74024;
        }
        else {
          iVar4 = 0x01D2130C[1];
          if (iVar4 == 0xf0) {
            0x01D2130C[1] = 0x1e0;
            *puVar2 = 0x280;
            uVar3 = _DAT_01d74024;
          }
          else if (iVar4 == 300) {
            0x01D2130C[1] = 0xf0;
            *puVar2 = 0x140;
            uVar3 = _DAT_01d74024;
          }
          else if (iVar4 == 0x180) {
LAB_004e8c41:
            0x01D2130C[1] = 0xf0;
            *puVar2 = 0x140;
            uVar3 = _DAT_01d74024;
          }
          else if (iVar4 == 0x1e0) {
            0x01D2130C[1] = 0x180;
            *puVar2 = 0x200;
            uVar3 = _DAT_01d74024;
          }
          else if (iVar4 == 600) {
            0x01D2130C[1] = 0x1e0;
            *puVar2 = 0x280;
            uVar3 = _DAT_01d74024;
          }
          else {
            if (iVar4 != 0x300) goto LAB_004e8c41;
            0x01D2130C[1] = 600;
            *puVar2 = 800;
            uVar3 = _DAT_01d74024;
          }
        }
      }
      else {
        iVar4 = 0x01D2130C[1];
        if (iVar4 == 0xf0) {
          0x01D2130C[1] = 0x180;
          *puVar2 = 0x200;
          uVar3 = _DAT_01d74024;
        }
        else if (iVar4 == 300) {
          0x01D2130C[1] = 0x180;
          *puVar2 = 0x200;
          uVar3 = _DAT_01d74024;
        }
        else if (iVar4 == 0x180) {
          0x01D2130C[1] = 0x1e0;
          *puVar2 = 0x280;
          uVar3 = _DAT_01d74024;
        }
        else if ((local_1c[0] < 0xb71b01) || (iVar4 != 0x1e0)) {
          if ((12000000 < local_1c[0]) && (0x01D2130C[1] == 600)) goto LAB_004e8c0d;
          if ((24000000 < local_1c[0]) && (0x01D2130C[1] == 0x300)) goto LAB_004e8a3b;
          *0x01D2130C = 0x140;
          puVar2[1] = 0xf0;
          uVar3 = _DAT_01d74024;
        }
        else {
          0x01D2130C[1] = 600;
          *puVar2 = 800;
          uVar3 = _DAT_01d74024;
        }
      }
      break;
    case 1:
      bVar11 = _DAT_02cf5fcc == 0;
      _DAT_02cf5fcc = (uint)bVar11;
      uVar3 = _DAT_02cf5fcc;
      if (bVar11) {
        FUN_005657f0();
        FUN_00564be0(0);
        uVar3 = _DAT_02cf5fcc;
        if (_DAT_02cf5fcc != 0) {
          FUN_00566400(&DAT_01d74024,0x1d74028,&DAT_01d74068,&DAT_01d740a8,0x1d740e8);
          FUN_005663b0(local_1c,local_1c + 1,local_1c + 2);
          uVar3 = _DAT_01d74024;
        }
        _DAT_01d74024 = uVar3;
        puVar2 = 0x01D2130C;
        uVar3 = _DAT_01d74024;
        if (*(int *)(&DAT_01d740a8 + _DAT_01d74020 * 4) == 0x121a) {
          0x01D2130C[2] = 0x10;
          *puVar2 = 0x280;
          puVar2[1] = 0x1e0;
          uVar3 = _DAT_01d74024;
        }
      }
      break;
    case 2:
      if (_DAT_01d74024 == 0) {
        _DAT_01d74020 = 0;
      }
      else {
        _DAT_01d74020 = _DAT_01d74020 + 1;
        if ((int)_DAT_01d74024 <= _DAT_01d74020) {
          _DAT_01d74020 = 0;
        }
        FUN_005663e0(_DAT_01d74020);
        puVar2 = 0x01D2130C;
        uVar3 = _DAT_01d74024;
        if (*(int *)(&DAT_01d740a8 + _DAT_01d74020 * 4) == 0x121a) {
          0x01D2130C[2] = 0x10;
          *puVar2 = 0x280;
          puVar2[1] = 0x1e0;
          uVar3 = _DAT_01d74024;
        }
      }
      break;
    case 3:
      if (0x01D2130C[2] == 0x10) {
        0x01D2130C[2] = 0x20;
        uVar3 = _DAT_01d74024;
      }
      else {
        0x01D2130C[2] = 0x10;
        uVar3 = _DAT_01d74024;
      }
      break;
    case 4:
      FUN_004e84d0();
      uVar3 = _DAT_01d74024;
      break;
    case 5:
      0x01D2130C[4] = (uint)(0x01D2130C[4] == 0);
      uVar3 = _DAT_01d74024;
      break;
    case 6:
      0x01D2130C[0x38] = (uint)(0x01D2130C[0x38] == 0);
      uVar3 = _DAT_01d74024;
      break;
    case 7:
      0x01D2130C[0x39] = (uint)(0x01D2130C[0x39] == 0);
      uVar3 = _DAT_01d74024;
    }
    _DAT_01d74024 = uVar3;
    iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,1);
    if (iVar4 != 0) {
      return;
    }
  } while( true );
}
