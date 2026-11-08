// Name: FUN_00570460
// Address: 00570460
// Address Range: [[00570460, 00570a3d]]
// Convention: unknown
// Signature: undefined4 FUN_00570460(int param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00570460(int param_1,float param_2,float param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte *puVar11;
  uint *puVar12;
  byte bVar13;
  float10 fVar14;
  char *pcVar15;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_1c;
  int local_18;
  
  bVar13 = 0;
  if (_DAT_02c807ec < 1) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x90a;
    FUN_005030e0("SfxSlot::pollStream - must be locked!");
  }
  if (-1 < *(int *)(param_1 + 0x160)) {
    iVar1 = *(int *)(param_1 + 0x160) * 0x11c;
    if ((*(int *)(&DAT_02c74650 + iVar1) == 0) || (param_1 != *(int *)(&DAT_02c74654 + iVar1))) {
      _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
      _DAT_01d1d404 = 0x918;
      FUN_005030e0("SfxSample::pollStream - my sfx isn't active with me!");
    }
    if (_DAT_02c80650 == 0) {
      FUN_005773f0("SfxSample::pollStream - no sound device?\n");
      goto LAB_00570713;
    }
    if (*(int *)(param_1 + 0x124) != 1) {
      _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
      _DAT_01d1d404 = 0x929;
      FUN_005030e0("SfxSample::pollStream - cannot stream sample with exotic loop points: %s",param_1);
    }
    if (*(int *)(&DAT_02c7464c + iVar1) != 0) {
      iVar5 = FUN_00571fa0(iVar1 + 0x2c745ec);
      if (iVar5 == 0) {
        FUN_005773f0("SfxSample::pollStream - error querrying hw playback position\n");
LAB_00570713:
        FUN_00571d70(iVar1 + 0x2c745ec);
        FUN_00570020(param_1);
        return 0;
      }
      iVar5 = FUN_00572680(param_1);
      if (((iVar5 == 0) && (-1 < *(int *)(param_1 + 0x110))) &&
         ((double)*(int *)(param_1 + 0x110) <= *(double *)(iVar1 + 0x2c7463c))) goto LAB_00570713;
    }
    fVar14 = (float10)*(int *)(param_1 + 0x10c) * (float10)param_2;
    iVar5 = *(int *)(param_1 + 0x164);
    FUN_005c03a0();
    local_38 = (int)ROUND(fVar14);
    if (iVar5 < (int)ROUND(fVar14)) {
      local_38 = iVar5;
    }
    fVar14 = (float10)*(int *)(param_1 + 0x170) - (float10)*(double *)(iVar1 + 0x2c746f8);
    FUN_005c03a0();
    local_30 = (int)ROUND(fVar14);
    if (local_30 < 0) {
      local_30 = local_30 + *(int *)(param_1 + 0x164);
    }
    if (local_30 < local_38) {
      local_2c = 99999999;
      if (*(int *)(param_1 + 0x158) != 0) {
        local_2c = FUN_005723e0(param_1,0x3c00);
      }
      fVar14 = (float10)*(int *)(param_1 + 0x10c) * (float10)param_3;
      iVar5 = FUN_005c03a0();
      local_34 = (int)ROUND(fVar14);
      if (iVar5 < (int)ROUND(fVar14)) {
        local_34 = iVar5;
      }
      local_1c = local_34 - local_30;
      if (0 < local_1c) {
        do {
          if ((*(int *)(param_1 + 0x170) < 0) ||
             (*(int *)(param_1 + 0x164) <= *(int *)(param_1 + 0x170))) {
            _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
            _DAT_01d1d404 = 0x96e;
            FUN_005030e0("nextLoadSampleDest = %d, allocLength = %d",*(uint *)(param_1 + 0x170),
                         *(uint *)(param_1 + 0x164));
          }
          iVar5 = *(int *)(param_1 + 0x164) - *(int *)(param_1 + 0x170);
          if (local_1c < iVar5) {
            iVar5 = local_1c;
          }
          if (local_2c < iVar5) {
            iVar5 = local_2c;
          }
          iVar6 = *(int *)(param_1 + 0x110);
          bVar2 = false;
          if (-1 < iVar6) {
            if (*(int *)(param_1 + 0x16c) < iVar6) {
              iVar6 = iVar6 - *(int *)(param_1 + 0x16c);
              if (iVar6 < iVar5) {
                iVar5 = iVar6;
              }
            }
            else {
              iVar6 = FUN_00572680(*(uint *)(&DAT_02c74654 + iVar1));
              if ((iVar6 == 0) ||
                 (iVar6 = *(int *)(&DAT_02c74654 + iVar1),
                 *(int *)(iVar6 + 0x110) == *(int *)(iVar6 + 0x164))) {
                if (*(int *)(param_1 + 0x158) == 0) {
                  return 1;
                }
                bVar2 = true;
              }
              else {
                FUN_005702c0(iVar6,0,*(uint *)(param_1 + 0x170));
              }
            }
          }
          puVar11 = &DAT_02c68388;
          bVar3 = false;
          bVar4 = true;
          if (*(int *)(param_1 + 0x158) == 0) {
            puVar11 = (byte *)FUN_00570160(param_1,*(uint *)(param_1 + 0x170),iVar5);
            if (puVar11 != (byte *)0x0) {
              bVar4 = false;
              bVar3 = true;
              goto LAB_005707e9;
            }
            pcVar15 = "Error locking %s while streaming\n";
LAB_0057070b:
            FUN_005773f0(pcVar15,param_1);
            goto LAB_00570713;
          }
LAB_005707e9:
          local_18 = iVar5;
          if (bVar2) {
            iVar6 = *(int *)(*(int *)(&DAT_02c74654 + iVar1) + 0x108) * iVar5;
            uVar8 = *(uint *)(*(int *)(&DAT_02c74654 + iVar1) + 0x104);
            if (uVar8 < 8) {
LAB_00570810:
              _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
              _DAT_01d1d404 = 0x689;
              FUN_005030e0("generateSilence - invalid bit depth!");
            }
            else if (uVar8 < 9) {
              FUN_005bfb70(puVar11,0x80,iVar6);
            }
            else {
              if (uVar8 != 0x10) goto LAB_00570810;
              FUN_005bfb70(puVar11,0,iVar6 * 2);
            }
          }
          else if (*(int *)(param_1 + 0x174) == 0) {
            iVar6 = FUN_005a0d70(param_1 + 0x17c);
            if (iVar6 == 0) {
              _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
              _DAT_01d1d404 = 0x9c0;
              FUN_005030e0("Can't stream unless we have mp3 decoder or open wav file!");
            }
            iVar6 = FUN_00572400(param_1,iVar5);
            iVar9 = FUN_005a0c10(param_1 + 0x17c,puVar11,iVar6);
            if (iVar9 != iVar6) {
              FUN_00570260(param_1);
              pcVar15 = "Error reading %s while streaming\n";
              goto LAB_0057070b;
            }
            if (*(int *)(*(int *)(&DAT_02c74654 + iVar1) + 0x104) == 0x10) {
              for (iVar6 = 0; iVar6 < *(int *)(*(int *)(&DAT_02c74654 + iVar1) + 0x108) * iVar5;
                  iVar6 = iVar6 + 1) {
              }
            }
          }
          else {
            local_18 = FUN_0052b170(*(int *)(param_1 + 0x174),puVar11,iVar5);
          }
          if ((bVar4) && (0 < local_18)) {
            puVar7 = (uint *)FUN_00570160(param_1,*(uint *)(param_1 + 0x170),local_18);
            if (puVar7 == (uint *)0x0) {
              pcVar15 = "Error locking %s while streaming\n";
              goto LAB_0057070b;
            }
            uVar8 = FUN_00572400(param_1,local_18);
            puVar12 = (uint *)&DAT_02c68388;
            for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *puVar7 = *puVar12;
              puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
              puVar7 = puVar7 + (uint)bVar13 * -2 + 1;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(byte *)puVar7 = *(byte *)puVar12;
              puVar12 = (uint *)((int)puVar12 + (uint)bVar13 * -2 + 1);
              puVar7 = (uint *)((int)puVar7 + (uint)bVar13 * -2 + 1);
            }
LAB_0057088d:
            FUN_00570260(param_1);
          }
          else if (bVar3) goto LAB_0057088d;
          if (iVar5 < local_18) {
            _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
            _DAT_01d1d404 = 0x9f3;
            FUN_005030e0("MP3 decoded more than batch: r = %d, batch = %d",local_18,iVar5);
          }
          if (iVar5 != local_18) {
            *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x16c) + local_18;
          }
          local_1c = local_1c - local_18;
          iVar5 = *(int *)(param_1 + 0x170) + local_18;
          *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x16c) + local_18;
          *(int *)(param_1 + 0x170) = iVar5;
          if (*(int *)(param_1 + 0x164) <= iVar5) {
            *(uint *)(param_1 + 0x170) = 0;
          }
        } while (0 < local_1c);
      }
      return 1;
    }
  }
  return 1;
}
