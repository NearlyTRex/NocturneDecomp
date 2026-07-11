// Name: FUN_004d12e0
// Address: 004d12e0
// Address Range: [[004d12e0, 004d21a9]]
// Convention: unknown
// Signature: void FUN_004d12e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d12e0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  int iVar7;
  byte *puVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  byte bVar13;
  float10 fVar14;
  float10 fVar15;
  ulonglong uVar16;
  uint local_808;
  uint uStack_804;
  float local_7f8;
  float local_7f0;
  float local_7ec;
  byte local_7e8 [368];
  char local_678 [264];
  int local_570;
  byte local_560 [280];
  char local_448 [256];
  char local_348 [256];
  char local_248 [256];
  char local_148 [256];
  ulonglong local_48;
  int local_40;
  uint local_3c [2];
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar13 = 0;
  local_3c[0] = 0;
  FUN_0049a890(0x01C775EC);
  puVar8 = &DAT_01cc6ed8;
  iVar2 = 0;
  do {
    *(byte **)(iVar2 + 0x1cc78d8) = puVar8;
    iVar2 = iVar2 + 4;
    puVar8 = puVar8 + 0x100;
  } while (iVar2 != 0x28);
  do {
    FUN_0049a8a0(0x01C775EC);
    FUN_004deae0(0x1cc5780,*(uint *)(0x01C775EC + 0x264));
    FUN_004dec50(0x1cc5780);
    local_2c = 0;
    pcVar3 = (char *)FUN_004ee370(">Sound : " + 1);
    pcVar9 = &DAT_01cc6ed8;
    do {
      cVar1 = *pcVar3;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    iVar2 = FUN_00526ca0();
    if (iVar2 == 0) {
      pcVar3 = &DAT_00588b5a;
    }
    else {
      pcVar3 = "Muted";
    }
    pcVar9 = (char *)FUN_004ee370(pcVar3);
    iVar2 = local_2c;
    iVar7 = -1;
    pcVar3 = &DAT_01cc6ed8;
    do {
      pcVar10 = pcVar3;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar3 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
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
    iVar11 = local_2c + 1;
    iVar7 = FUN_00527490(0);
    local_34 = iVar2 + 2;
    pcVar3 = &DAT_01cc6ed8 + iVar11 * 0x100;
    local_2c = iVar11;
    if (iVar7 == 0) {
      uVar4 = FUN_004ee370("Sound effects : Off");
      iVar2 = local_34;
      FUN_00563c90(pcVar3,uVar4);
    }
    else {
      uVar4 = FUN_004ee370("Sound effects : ");
      FUN_00563c90(pcVar3,uVar4);
      local_14 = (float)FUN_00527380(0);
      fVar14 = ((float10)local_14 * (float10)_DAT_00588c83) / (float10)_DAT_005a0574 +
               (float10)_DAT_00588c8b;
      FUN_00563a30();
      local_14 = (float)(int)ROUND(fVar14);
      FUN_00563c90(local_348,&DAT_00588b6e,local_14);
      pcVar9 = local_348;
      iVar2 = -1;
      pcVar10 = pcVar3;
      do {
        pcVar12 = pcVar10;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar12 = pcVar10 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar9 = (char *)FUN_004ee370(&DAT_00588b71);
      iVar2 = -1;
      do {
        pcVar10 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar10 = pcVar3 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar10 = cVar1;
        iVar2 = local_34;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
    }
    iVar11 = FUN_00527490(2);
    iVar7 = iVar2 + 1;
    pcVar3 = &DAT_01cc6ed8 + iVar2 * 0x100;
    local_30 = iVar7;
    if (iVar11 == 0) {
      uVar4 = FUN_004ee370("Dialog : Off");
      FUN_00563c90(pcVar3,uVar4);
    }
    else {
      pcVar10 = (char *)FUN_004ee370("Dialog : ");
      pcVar9 = pcVar3;
      do {
        cVar1 = *pcVar10;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      local_14 = (float)FUN_00527380(2);
      fVar14 = ((float10)local_14 * (float10)_DAT_00588c83) / (float10)_DAT_005a0578 +
               (float10)_DAT_00588c8b;
      FUN_00563a30();
      local_14 = (float)(int)ROUND(fVar14);
      FUN_00563c90(local_148,&DAT_00588b92,local_14);
      pcVar9 = local_148;
      iVar2 = -1;
      pcVar10 = pcVar3;
      do {
        pcVar12 = pcVar10;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar12 = pcVar10 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar9 = (char *)FUN_004ee370(&DAT_00588b95);
      iVar2 = -1;
      do {
        pcVar10 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar10 = pcVar3 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar10 = cVar1;
        iVar7 = local_30;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
    }
    iVar2 = FUN_00527490(1);
    iVar11 = iVar7 + 1;
    pcVar3 = &DAT_01cc6ed8 + iVar7 * 0x100;
    local_40 = iVar11;
    if (iVar2 == 0) {
      uVar4 = FUN_004ee370("Music Vol : Off");
      local_24 = iVar11;
      FUN_00563c90(pcVar3,uVar4);
    }
    else {
      pcVar10 = (char *)FUN_004ee370("Music Vol : ");
      pcVar9 = pcVar3;
      do {
        cVar1 = *pcVar10;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      local_14 = (float)FUN_00527380(1);
      fVar14 = ((float10)local_14 * (float10)_DAT_00588c83) / (float10)_DAT_005a0570 +
               (float10)_DAT_00588c8b;
      FUN_00563a30();
      local_14 = (float)(int)ROUND(fVar14);
      FUN_00563c90(local_448,&DAT_00588bb2,local_14);
      pcVar9 = local_448;
      iVar2 = -1;
      pcVar10 = pcVar3;
      do {
        pcVar12 = pcVar10;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar12 = pcVar10 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar9 = (char *)FUN_004ee370(&DAT_00588bb5);
      iVar2 = -1;
      do {
        pcVar10 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar10 = pcVar3 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar10;
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
      local_24 = local_40;
    }
    pcVar10 = (char *)FUN_004ee370("Output rate : ");
    pcVar3 = &DAT_01cc6ed8 + local_24 * 0x100;
    pcVar9 = pcVar3;
    do {
      cVar1 = *pcVar10;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    uVar4 = FUN_005281b0();
    FUN_00563c90(local_248,&DAT_00588bd7,uVar4);
    pcVar9 = local_248;
    iVar2 = -1;
    pcVar10 = pcVar3;
    do {
      pcVar12 = pcVar10;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar12 = pcVar10 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar9;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    pcVar9 = (char *)FUN_004ee370(&DAT_00588bda);
    iVar2 = local_24;
    iVar7 = -1;
    do {
      pcVar10 = pcVar3;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar3 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
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
    iVar7 = local_24 + 1;
    pcVar10 = (char *)FUN_004ee370("Output quality : ");
    pcVar3 = &DAT_01cc6ed8 + iVar7 * 0x100;
    pcVar9 = pcVar3;
    do {
      cVar1 = *pcVar10;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    local_24 = iVar7;
    uVar4 = FUN_005281a0();
    FUN_00563c90(local_248,&DAT_00588bef,uVar4);
    pcVar9 = local_248;
    iVar7 = -1;
    pcVar10 = pcVar3;
    do {
      pcVar12 = pcVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar12 = pcVar10 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar9;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    pcVar9 = (char *)FUN_004ee370(&DAT_00588bf2);
    iVar7 = -1;
    do {
      pcVar10 = pcVar3;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar3 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
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
    iVar7 = iVar2 + 2;
    uVar5 = FUN_005281c0();
    local_24 = iVar7;
    if (((uVar5 == 0) || (uVar5 < 2)) || (uVar5 != 2)) {
      uVar4 = FUN_004ee370("Output type : MONO");
      iVar2 = local_24 + 1;
      iVar7 = local_24;
    }
    else {
      uVar4 = FUN_004ee370("Output type : STEREO");
      iVar2 = iVar2 + 3;
    }
    local_24 = iVar2;
    FUN_00563c90(&DAT_01cc6ed8 + iVar7 * 0x100,uVar4);
    iVar2 = FUN_00528610();
    if ((iVar2 < 0) || (iVar7 = FUN_00528230(), iVar7 <= iVar2)) {
      local_570 = 0;
      local_678[0] = '\0';
    }
    else {
      FUN_005282c0(iVar2,local_678);
    }
    pcVar9 = (char *)FUN_004ee370("Device : ");
    iVar2 = local_24 * 0x100;
    pcVar3 = &DAT_01cc6ed8 + iVar2;
    do {
      cVar1 = *pcVar9;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    pcVar3 = local_678;
    local_24 = local_24 + 1;
    iVar7 = -1;
    pcVar9 = &DAT_01cc6ed8 + iVar2;
    do {
      pcVar10 = pcVar9;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar9 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar1 = *pcVar3;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    if (local_570 != 0) {
      iVar7 = local_24 * 0x100;
      iVar2 = FUN_005284e0();
      pcVar3 = &DAT_01cc6ed8 + iVar7;
      if (iVar2 == 0) {
        pcVar9 = "Hardware mixing: Off";
      }
      else {
        pcVar9 = "Hardware mixing: On";
      }
      pcVar9 = (char *)FUN_004ee370(pcVar9);
      do {
        cVar1 = *pcVar9;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      local_24 = local_24 + 1;
    }
    _DAT_01cc5b64 = _DAT_01cc5b64 + _DAT_01bd1d80 * 0x18;
    if (0x7ffff < _DAT_01cc5b64) {
      _DAT_01cc5b64 = _DAT_01cc5b64 + -0x80000;
    }
    iVar2 = FUN_00528490();
    if (iVar2 != 0) {
      iVar2 = FUN_005281c0();
      local_1c = DAT_005b761c / 0x14;
      local_18 = DAT_005b761c / iVar2;
      iVar7 = local_18 + local_1c * -2;
      iVar11 = iVar7 >> 0x1f;
      fVar6 = (float)((int)((iVar7 + iVar11 * -4) - (uint)(iVar11 << 1 < 0)) >> 2);
      fVar14 = (float10)_DAT_00588c93;
      local_20 = iVar2;
      local_14 = fVar6;
      FUN_00565ad6();
      iVar7 = 0;
      if (0 < iVar2) {
        do {
          local_808 = 0;
          uStack_804 = 0x40690000;
          if (0 < (int)fVar6) {
            iVar2 = local_18 * iVar7 + local_1c;
            iVar11 = (int)fVar6 * 4 + iVar2;
            do {
              fVar15 = (float10)__BITCAST_DOUBLE(CONCAT44(uStack_804,local_808)) * (float10)(double)fVar14;
              local_48 = (double)fVar15;
              local_14 = (float)FUN_00528e60(iVar7,(float)__BITCAST_DOUBLE(CONCAT44(uStack_804,local_808)),
                                             (float)fVar15);
              fVar15 = (float10)DAT_005b7620 -
                       (float10)local_14 * (float10)DAT_005b7620 * (float10)_DAT_00588c87;
              uVar16 = FUN_00563a30();
              local_14 = (float)(int)ROUND(fVar15);
              FUN_004cf2b0(iVar2,(int)uVar16,((int)((ulonglong)uVar16 >> 0x20) - (int)local_14) + 1)
              ;
              local_808 = (uint)local_48;
              uStack_804 = local_48._4_4_;
              iVar2 = iVar2 + 4;
            } while (iVar2 < iVar11);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_20);
      }
    }
    uVar4 = FUN_004ee370("Sound Options");
    uVar4 = FUN_004cf440(0x1cc78d8,local_24,local_3c,0xe1,uVar4);
    FUN_00553910();
    local_28 = 0.2;
    switch(uVar4) {
    case 0:
      iVar2 = FUN_00526ca0();
      FUN_00526cb0(iVar2 == 0);
      iVar2 = FUN_00526ca0();
      if (iVar2 == 0) goto LAB_004d1b85;
      break;
    case 1:
      local_14 = (float)FUN_00527380(0);
      local_7ec = local_14 / _DAT_005a0574;
      if (_DAT_01cc5b5c == 1) {
        iVar2 = FUN_00527490(0);
        if (iVar2 == 0) {
          FUN_00527410(0,1);
          local_7ec = 1.0;
        }
        else {
          local_7ec = local_7ec - local_28;
          if (local_7ec < (float)_DAT_00588cbb) {
LAB_004d1cd1:
            local_7ec = 0.0;
            FUN_00527410(0,0);
          }
        }
      }
      else {
        iVar2 = FUN_00527490(0);
        if (iVar2 == 0) {
          FUN_00527410(0,1);
          local_7ec = 0.2;
        }
        else {
          local_7ec = local_7ec + local_28;
          if ((float)_DAT_00588ca3 < local_7ec) goto LAB_004d1cd1;
          if ((float)_DAT_00588cab < local_7ec) {
            local_7ec = 1.0;
          }
        }
      }
      FUN_005272e0(0,local_7ec * _DAT_005a0574);
      FUN_00526340();
      FUN_00526240(1);
      FUN_005265a0("colt45-0.wav");
      FUN_005263c0();
      break;
    case 2:
      local_14 = (float)FUN_00527380(2);
      local_7f8 = local_14 / _DAT_005a0578;
      if (_DAT_01cc5b5c == 1) {
        iVar2 = FUN_00527490(2);
        if (iVar2 == 0) {
          FUN_00527410(2,1);
          local_7f8 = 1.0;
        }
        else {
          local_7f8 = local_7f8 - local_28;
          if (local_7f8 < (float)_DAT_00588cbb) {
LAB_004d1df6:
            local_7f8 = 0.0;
            FUN_00527410(2,0);
          }
        }
      }
      else {
        iVar2 = FUN_00527490(2);
        if (iVar2 == 0) {
          FUN_00527410(2,1);
          local_7f8 = 0.2;
        }
        else {
          local_7f8 = local_7f8 + local_28;
          if ((float)_DAT_00588ca3 < local_7f8) goto LAB_004d1df6;
          if ((float)_DAT_00588cab < local_7f8) {
            local_7f8 = 1.0;
          }
        }
      }
      FUN_005272e0(2,local_7f8 * _DAT_005a0578);
      break;
    case 3:
      local_14 = (float)FUN_00527380(1);
      local_7f0 = local_14 / _DAT_005a0570;
      if (_DAT_01cc5b5c == 1) {
        iVar2 = FUN_00527490(1);
        if (iVar2 == 0) {
          FUN_00527410(1,1);
          FUN_0052e850(0x02DC9450);
          local_7f0 = 1.0;
        }
        else {
          local_7f0 = local_7f0 + _DAT_00588cb3;
          if (local_7f0 < (float)_DAT_00588cbb) {
LAB_004d1ef7:
            local_7f0 = 0.0;
            FUN_00527410(1,0);
          }
        }
      }
      else {
        iVar2 = FUN_00527490(1);
        if (iVar2 == 0) {
          FUN_00527410(1,1);
          FUN_0052e850(0x02DC9450);
          local_7f0 = 0.2;
        }
        else {
          local_7f0 = local_7f0 + _DAT_00588c9b;
          if ((float)_DAT_00588ca3 < local_7f0) goto LAB_004d1ef7;
          if (_DAT_00588cab < (double)local_7f0) {
            local_7f0 = 1.0;
          }
        }
      }
      FUN_005272e0(1,local_7f0 * _DAT_005a0570);
      break;
    case 4:
      iVar2 = FUN_005281b0();
      if (_DAT_01cc5b5c == 1) {
        if (iVar2 == 0x5622) {
LAB_004d1fd6:
          iVar2 = 0x2b2a;
        }
        else if (iVar2 == 0xac44) {
          iVar2 = 0x5622;
        }
        else {
          iVar2 = 0xac44;
        }
      }
      else if (iVar2 < 0x5622) {
        iVar2 = 0x5622;
      }
      else {
        if (0xac43 < iVar2) goto LAB_004d1fd6;
        iVar2 = 0xac44;
      }
      iVar7 = FUN_005284f0();
      if (iVar7 != 0) {
        iVar2 = 0xac44;
      }
      iVar7 = FUN_005281b0();
      if (iVar2 != iVar7) {
        FUN_00528080();
        FUN_00528210(iVar2);
        goto LAB_004d1b85;
      }
      break;
    case 5:
      iVar2 = FUN_005281a0();
      if (iVar2 == 0x10) {
        iVar2 = 8;
      }
      else {
        iVar2 = 0x10;
      }
      iVar7 = FUN_005284f0();
      if (iVar7 != 0) {
        iVar2 = 0x10;
      }
      iVar7 = FUN_005281a0();
      if (iVar2 != iVar7) {
        FUN_00528080();
        FUN_005281d0(iVar2);
        goto LAB_004d1b85;
      }
      break;
    case 6:
      iVar2 = FUN_005281c0();
      iVar2 = (iVar2 == 1) + 1;
      iVar7 = FUN_005284f0();
      if (iVar7 != 0) {
        iVar2 = 2;
      }
      iVar7 = FUN_005281c0();
      if (iVar2 != iVar7) {
        FUN_00528080();
        FUN_005281f0(iVar2);
        goto LAB_004d1b85;
      }
      break;
    case 7:
      FUN_00474c90(local_7e8);
      for (iVar2 = 0; iVar7 = FUN_00528230(), iVar2 < iVar7; iVar2 = iVar2 + 1) {
        FUN_005282c0(iVar2,local_560);
        FUN_00473cb0(local_7e8,local_560);
      }
      uVar4 = FUN_00528610();
      iVar2 = FUN_00474d70(local_7e8,"Select sound device",uVar4);
      if (-1 < iVar2) {
        FUN_005285b0();
        FUN_00528410(iVar2);
        FUN_00528500();
        iVar2 = FUN_005284f0();
        if (iVar2 != 0) {
          FUN_005280c0(0x10,2,0xac44);
        }
        FUN_0052e850(0x02DC9450);
      }
      FUN_00474cf0(local_7e8,0);
      break;
    case 8:
      FUN_005285b0();
      iVar2 = FUN_005284e0();
      FUN_005284a0(iVar2 == 0);
      FUN_00528500();
LAB_004d1b85:
      FUN_0052e850(0x02DC9450);
    }
    iVar2 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,1);
    if (iVar2 != 0) {
      return;
    }
  } while( true );
}
