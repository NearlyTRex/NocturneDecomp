// Name: FUN_0050aa90
// Address: 0050aa90
// Address Range: [[0050aa90, 0050b40c]]
// Convention: unknown
// Signature: void FUN_0050aa90(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0050ad1d) */
/* WARNING: Removing unreachable block (ram,0x0050af8b) */
/* WARNING: Removing unreachable block (ram,0x0050ad33) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050aa90(void)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  byte bVar13;
  char local_140 [256];
  char local_40 [32];
  uint local_20;
  int local_1c [3];
  
  bVar13 = 0;
  local_20 = 0;
  FUN_004cbf10(0x01CCF390);
  iVar7 = 0x1d1eeb8;
  iVar4 = 0;
  do {
    *(int *)(iVar4 + 0x1d1f5b8) = iVar7;
    iVar4 = iVar4 + 4;
    iVar7 = iVar7 + 0x100;
  } while (iVar4 != 0x1c);
  FUN_00582b30(&DAT_01d1f5d8,0x1d1f5dc,&DAT_01d1f61c,&DAT_01d1f65c,0x1d1f69c);
  if ((int)_DAT_01d1f5d8 <= _DAT_01d1f5d4) {
    _DAT_01d1f5d4 = 0;
  }
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  FUN_00582ae0(local_1c,local_1c + 1,local_1c + 2);
  do {
    pcVar9 = local_140;
    FUN_004cbf20(0x01CCF390);
    iVar4 = 0x01E82168;
    *(uint *)(0x01E82168 + 0x15ae84) = 1;
    FUN_00555770(iVar4,50000,50000,0x10000);
    pcVar8 = "tridx7.dll";
    *(uint *)(0x01E82168 + 0x15ae94) = 0xdac;
    FUN_00521e40(0x1d1e380);
    pcVar10 = &DAT_006257d0;
    *(uint *)(0x01E82168 + 0x15ae84) = 0;
    do {
      cVar1 = *pcVar8;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    puVar2 = 0x01CCF390;
    if ((0 < (int)_DAT_01d1f5d8) && (_DAT_02c83370 != 0)) {
      if ((*(int *)(&DAT_01d1f65c + _DAT_01d1f5d4 * 4) == 0x121a) &&
         (*(int *)(_DAT_01d1f5d4 * 4 + 0x1d1f69c) < 6)) {
        0x01CCF390[2] = 0x10;
        *puVar2 = 0x280;
        puVar2[1] = 0x1e0;
      }
      puVar2 = 0x01CCF390;
      if ((*(int *)(&DAT_01d1f65c + _DAT_01d1f5d4 * 4) == 0x8086) &&
         (*(int *)(_DAT_01d1f5d4 * 4 + 0x1d1f69c) == 0x7800)) {
        0x01CCF390[2] = 0x10;
        *puVar2 = 0x280;
        puVar2[1] = 0x1e0;
      }
      puVar2 = 0x01CCF390;
      if ((*(int *)(&DAT_01d1f65c + _DAT_01d1f5d4 * 4) == 0x12d2) &&
         (*(int *)(_DAT_01d1f5d4 * 4 + 0x1d1f69c) == 0x18)) {
        0x01CCF390[2] = 0x10;
        *puVar2 = 0x280;
        puVar2[1] = 0x1e0;
      }
      puVar2 = 0x01CCF390;
      if ((*(int *)(&DAT_01d1f65c + _DAT_01d1f5d4 * 4) == 0x12d2) &&
         (*(int *)(_DAT_01d1f5d4 * 4 + 0x1d1f69c) == 0x19)) {
        0x01CCF390[2] = 0x10;
        *puVar2 = 0x280;
        puVar2[1] = 0x1e0;
      }
    }
    puVar2 = 0x01CCF390;
    if ((_DAT_02c83370 == 0) && (0x1e0 < (int)0x01CCF390[1])) {
      0x01CCF390[1] = 0x1e0;
      *puVar2 = 0x280;
    }
    iVar4 = 0x01CCF390[1];
    if (iVar4 == 0xf0) {
      pcVar8 = "Resolution : 320x240";
    }
    else if (iVar4 == 300) {
      pcVar8 = "Resolution : 400x300";
    }
    else if (iVar4 == 0x180) {
      pcVar8 = "Resolution : 512x384";
    }
    else if (iVar4 == 0x1e0) {
      pcVar8 = "Resolution : 640x480";
    }
    else if (iVar4 == 600) {
      pcVar8 = "Resolution : 800x600";
    }
    else if (iVar4 == 0x300) {
      pcVar8 = "Resolution : 1024x768";
    }
    else if (iVar4 == 0x3c0) {
      pcVar8 = "Resolution : 1280x960";
    }
    else {
      pcVar8 = "Resolution : 320x240";
    }
    uVar5 = FUN_00531090(pcVar8);
    FUN_005bfb40(0x1d1eeb8,uVar5);
    0x01CCF390[3] = 0;
    if (_DAT_02c83370 == 0) {
      pcVar8 = "3D Hardware : Off";
    }
    else {
      pcVar8 = "3D Hardware : On";
    }
    uVar5 = FUN_00531090(pcVar8);
    FUN_005bfb40(0x1d1efb8,uVar5);
    if (DAT_006257d0 == '\0') {
      pcVar8 = "3D API : None";
    }
    else {
      iVar4 = FUN_005c04e0(&DAT_006257d0,"trid3d.dll");
      if (iVar4 == 0) {
        pcVar8 = "3D API : DirectX 5";
      }
      else {
        iVar4 = FUN_005c04e0(&DAT_006257d0,"tridx6.dll");
        if (iVar4 == 0) {
          pcVar8 = "3D API : DirectX 6";
        }
        else {
          iVar4 = FUN_005c04e0(&DAT_006257d0,"tridx7.dll");
          if (iVar4 == 0) {
            pcVar8 = "3D API : DirectX 7";
          }
          else {
            iVar4 = FUN_005c04e0(&DAT_006257d0,"tri3dfx.dll");
            if (iVar4 == 0) {
              pcVar8 = "3D API : Voodoo Blit Emulation";
            }
            else {
              pcVar8 = "3D API : Custom";
            }
          }
        }
      }
    }
    uVar5 = FUN_00531090(pcVar8);
    FUN_005bfb40(0x1d1f0b8,uVar5);
    if (_DAT_01d1f5d8 == 0) {
      uVar5 = FUN_00531090("No 3D Hardware detected");
      FUN_005bfb40(&DAT_01d1f1b8,uVar5);
    }
    else {
      pcVar8 = (char *)FUN_00531090("3D Card : ");
      pcVar10 = &DAT_01d1f1b8;
      do {
        cVar1 = *pcVar8;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar8 = *(char **)(&DAT_01d1f61c + _DAT_01d1f5d4 * 4);
      iVar4 = -1;
      pcVar10 = &DAT_01d1f1b8;
      do {
        pcVar11 = pcVar10;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar11 = pcVar10 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      pcVar11 = pcVar11 + -1;
      do {
        cVar1 = *pcVar8;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      FUN_005bfb40(local_40," (%d)",_DAT_01d1f5d4);
      pcVar8 = local_40;
      iVar4 = -1;
      pcVar10 = &DAT_01d1f1b8;
      do {
        pcVar11 = pcVar10;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar11 = pcVar10 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      pcVar11 = pcVar11 + -1;
      do {
        cVar1 = *pcVar8;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
    }
    pcVar8 = (char *)FUN_00531090("Bits per pixel : ");
    pcVar10 = &DAT_01d1f2b8;
    do {
      cVar1 = *pcVar8;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    FUN_005bfb40(local_140,&DAT_005e7e43,0x01CCF390[2]);
    iVar4 = -1;
    pcVar8 = &DAT_01d1f2b8;
    do {
      pcVar10 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar10 = pcVar8 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar1 = *pcVar9;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    uVar5 = FUN_00531090("Monitor calibration");
    FUN_005bfb40(0x1d1f3b8,uVar5);
    if (0x01CCF390[4] == 0) {
      pcVar9 = "Subtitles : Off";
    }
    else {
      pcVar9 = "Subtitles : On";
    }
    pcVar9 = (char *)FUN_00531090(pcVar9);
    pcVar8 = &DAT_01d1f4b8;
    do {
      cVar1 = *pcVar9;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    uVar5 = 7;
    if (0x01CCF390[8] != 0) {
      uVar5 = 6;
    }
    uVar6 = FUN_00531090("Graphic Options");
    uVar5 = FUN_00509e20(0x1d1f5b8,uVar5,&local_20,0x32,uVar6);
    FUN_005acff0();
    puVar2 = 0x01CCF390;
    switch(uVar5) {
    case 0:
      if (_DAT_01d1ee8c == 1) {
        if ((0x01CCF390[1] == 0xf0) && (24000000 < local_1c[0])) {
LAB_0050aee5:
          0x01CCF390[1] = 0x3c0;
          *puVar2 = 0x500;
        }
        else if ((0x01CCF390[1] == 0xf0) && (12000000 < local_1c[0])) {
LAB_0050b12d:
          0x01CCF390[1] = 0x300;
          *puVar2 = 0x400;
        }
        else {
          iVar4 = 0x01CCF390[1];
          if (iVar4 == 0xf0) {
            0x01CCF390[1] = 0x1e0;
            *puVar2 = 0x280;
          }
          else if (iVar4 == 300) {
            0x01CCF390[1] = 0xf0;
            *puVar2 = 0x140;
          }
          else if (iVar4 == 0x180) {
LAB_0050b161:
            0x01CCF390[1] = 0xf0;
            *puVar2 = 0x140;
          }
          else if (iVar4 == 0x1e0) {
            0x01CCF390[1] = 0x180;
            *puVar2 = 0x200;
          }
          else if (iVar4 == 600) {
            0x01CCF390[1] = 0x1e0;
            *puVar2 = 0x280;
          }
          else {
            if (iVar4 != 0x300) goto LAB_0050b161;
            0x01CCF390[1] = 600;
            *puVar2 = 800;
          }
        }
      }
      else {
        iVar4 = 0x01CCF390[1];
        if (iVar4 == 0xf0) {
          0x01CCF390[1] = 0x180;
          *puVar2 = 0x200;
        }
        else if (iVar4 == 300) {
          0x01CCF390[1] = 0x180;
          *puVar2 = 0x200;
        }
        else if (iVar4 == 0x180) {
          0x01CCF390[1] = 0x1e0;
          *puVar2 = 0x280;
        }
        else if ((local_1c[0] < 0xb71b01) || (iVar4 != 0x1e0)) {
          if ((12000000 < local_1c[0]) && (0x01CCF390[1] == 600)) goto LAB_0050b12d;
          if ((24000000 < local_1c[0]) && (0x01CCF390[1] == 0x300)) goto LAB_0050aee5;
          *0x01CCF390 = 0x140;
          puVar2[1] = 0xf0;
        }
        else {
          0x01CCF390[1] = 600;
          *puVar2 = 800;
        }
      }
      break;
    case 1:
      bVar12 = _DAT_02c83370 == 0;
      _DAT_02c83370 = (uint)bVar12;
      if (bVar12) {
        FUN_00581f20();
        FUN_00581310(0);
        uVar3 = _DAT_02c83370;
        if (_DAT_02c83370 != 0) {
          FUN_00582b30(&DAT_01d1f5d8,0x1d1f5dc,&DAT_01d1f61c,&DAT_01d1f65c,0x1d1f69c);
          FUN_00582ae0(local_1c,local_1c + 1,local_1c + 2);
          uVar3 = _DAT_01d1f5d8;
        }
        _DAT_01d1f5d8 = uVar3;
        puVar2 = 0x01CCF390;
        if (*(int *)(&DAT_01d1f65c + _DAT_01d1f5d4 * 4) == 0x121a) {
          0x01CCF390[2] = 0x10;
          *puVar2 = 0x280;
          puVar2[1] = 0x1e0;
        }
      }
      else {
        _DAT_01d1f5d8 = 0;
      }
      break;
    case 3:
      if (_DAT_01d1f5d8 == 0) {
        _DAT_01d1f5d4 = 0;
      }
      else {
        _DAT_01d1f5d4 = _DAT_01d1f5d4 + 1;
        if ((int)_DAT_01d1f5d8 <= _DAT_01d1f5d4) {
          _DAT_01d1f5d4 = 0;
        }
        FUN_00582b10(_DAT_01d1f5d4);
        puVar2 = 0x01CCF390;
        if (*(int *)(&DAT_01d1f65c + _DAT_01d1f5d4 * 4) == 0x121a) {
          0x01CCF390[2] = 0x10;
          *puVar2 = 0x280;
          puVar2[1] = 0x1e0;
        }
      }
      break;
    case 4:
      if (0x01CCF390[2] == 0x10) {
        0x01CCF390[2] = 0x20;
      }
      else {
        0x01CCF390[2] = 0x10;
      }
      break;
    case 5:
      FUN_0050a9c0();
      break;
    case 6:
      0x01CCF390[4] = (uint)(0x01CCF390[4] == 0);
    }
    iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,1);
    if (iVar4 != 0) {
      return;
    }
  } while( true );
}
