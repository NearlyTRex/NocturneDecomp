// Name: FUN_00523ea0
// Address: 00523ea0
// Address Range: [[00523ea0, 0052440e]]
// Convention: unknown
// Signature: undefined4 FUN_00523ea0(int param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00523ea0(int param_1,float param_2,float param_3)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte *puVar10;
  uint *puVar11;
  byte bVar12;
  float10 fVar13;
  char *pcVar14;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_14;
  
  bVar12 = 0;
  if (_DAT_02dc84bc < 1) {
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0x7be;
    FUN_004c8440("SfxSlot::kill - must be locked!");
  }
  if (-1 < *(int *)(param_1 + 0x134)) {
    iVar2 = *(int *)(param_1 + 0x134) * 0x120;
    if ((*(int *)(&DAT_02dbd3e4 + iVar2) == 0) || (param_1 != *(int *)(&DAT_02dbd3e8 + iVar2))) {
      _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
      _DAT_01cc4804 = 0x7cb;
      FUN_004c8440("SfxSample::pollStream - my sfx isn't active with me!");
    }
    if (_DAT_02dc8318 == 0) {
      FUN_00529980("SfxSample::pollStream - no sound device?\n");
      goto LAB_005240fa;
    }
    if (*(int *)(iVar2 + 0x2dbd3e0) != 0) {
      iVar5 = FUN_005257e0(iVar2 + 0x2dbd374);
      if (iVar5 == 0) {
        FUN_00529980("SfxSample::pollStream - error querrying hw playback position\n");
        goto LAB_005240fa;
      }
      if (((*(int *)(param_1 + 0x124) == 0) && (-1 < *(int *)(param_1 + 0x110))) &&
         ((double)*(int *)(param_1 + 0x110) <= *(double *)(iVar2 + 0x2dbd3d4))) goto LAB_005240fa;
    }
    fVar13 = (float10)*(int *)(param_1 + 0x10c) * (float10)param_2;
    iVar5 = *(int *)(param_1 + 0x138);
    FUN_00563a30();
    local_30 = (int)ROUND(fVar13);
    if (iVar5 < (int)ROUND(fVar13)) {
      local_30 = iVar5;
    }
    fVar13 = (float10)*(int *)(param_1 + 0x140) - (float10)*(double *)(iVar2 + 0x2dbd48c);
    FUN_00563a30();
    local_2c = (int)ROUND(fVar13);
    if (local_2c < 0) {
      local_2c = local_2c + *(int *)(param_1 + 0x138);
    }
    if (local_2c < local_30) {
      local_28 = 99999999;
      if (*(int *)(param_1 + 0x130) != 0) {
        iVar5 = FUN_00525c40(param_1);
        local_28 = (int)(0x3c00 / (longlong)iVar5);
      }
      fVar13 = (float10)*(int *)(param_1 + 0x10c) * (float10)param_3;
      iVar5 = FUN_00563a30();
      local_34 = (int)ROUND(fVar13);
      if (iVar5 < (int)ROUND(fVar13)) {
        local_34 = iVar5;
      }
      local_34 = local_34 - local_2c;
      while( true ) {
        if (local_34 < 1) {
          return 1;
        }
        if ((*(int *)(param_1 + 0x140) < 0) ||
           (*(int *)(param_1 + 0x138) <= *(int *)(param_1 + 0x140))) {
          _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
          _DAT_01cc4804 = 0x81a;
          FUN_004c8440("nextLoadSampleDest = %d, allocLength = %d",*(uint *)(param_1 + 0x140),
                       *(uint *)(param_1 + 0x138));
        }
        iVar5 = *(int *)(param_1 + 0x138) - *(int *)(param_1 + 0x140);
        if (local_34 < iVar5) {
          iVar5 = local_34;
        }
        if (local_28 < iVar5) {
          iVar5 = local_28;
        }
        iVar8 = *(int *)(param_1 + 0x110);
        bVar4 = false;
        if (-1 < iVar8) {
          if (*(int *)(param_1 + 0x13c) < iVar8) {
            iVar8 = iVar8 - *(int *)(param_1 + 0x13c);
            if (iVar8 < iVar5) {
              iVar5 = iVar8;
            }
          }
          else {
            iVar8 = *(int *)(&DAT_02dbd3e8 + iVar2);
            if ((*(int *)(iVar8 + 0x124) == 0) ||
               (*(int *)(iVar8 + 0x138) == *(int *)(iVar8 + 0x110))) {
              if (*(int *)(param_1 + 0x130) == 0) {
                return 1;
              }
              bVar4 = true;
            }
            else {
              FUN_00523d10(iVar8,0,*(uint *)(param_1 + 0x140));
            }
          }
        }
        puVar10 = &DAT_02db1118;
        bVar1 = true;
        bVar3 = false;
        if (*(int *)(param_1 + 0x130) == 0) break;
LAB_005241ef:
        if (bVar4) {
          iVar8 = *(int *)(*(int *)(&DAT_02dbd3e8 + iVar2) + 0x108) * iVar5;
          uVar9 = *(uint *)(*(int *)(&DAT_02dbd3e8 + iVar2) + 0x104);
          local_14 = iVar5;
          if (uVar9 < 8) {
LAB_00524219:
            _DAT_01cc4800 = "C..\\sound\\sndmain.cpp" + 1;
            _DAT_01cc4804 = 0x5c4;
            FUN_004c8440("generateSilence - invalid bit depth!");
          }
          else if (uVar9 < 9) {
            FUN_00563cc0(puVar10,0x80,iVar8);
          }
          else {
            if (uVar9 != 0x10) goto LAB_00524219;
            FUN_00563cc0(puVar10,0,iVar8 * 2);
          }
        }
        else if (*(int *)(param_1 + 0x144) == 0) {
          if (*(int *)(param_1 + 0x14c) == 0) {
            _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
            _DAT_01cc4804 = 0x86c;
            FUN_004c8440("Can't stream unless we have mp3 decoder or open wav file!");
          }
          uVar7 = FUN_00525c40(param_1,iVar5,*(uint *)(param_1 + 0x14c));
          local_14 = FUN_005636d0(puVar10,uVar7);
          if ((*(byte *)(*(int *)(param_1 + 0x14c) + 0xc) & 0x20) != 0) {
            FUN_00523cb0(param_1);
            pcVar14 = "Error reading %s while streaming\n";
            goto LAB_005240f2;
          }
        }
        else {
          local_14 = FUN_004e82d0(*(int *)(param_1 + 0x144),puVar10,iVar5);
        }
        if ((bVar1) && (0 < local_14)) {
          puVar6 = (uint *)FUN_00523ba0(param_1,*(uint *)(param_1 + 0x140),local_14);
          if (puVar6 == (uint *)0x0) {
            pcVar14 = "Error locking %s while streaming\n";
            goto LAB_005240f2;
          }
          iVar8 = FUN_00525c40(param_1);
          puVar11 = (uint *)&DAT_02db1118;
          for (uVar9 = (uint)(local_14 * iVar8) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar6 = *puVar11;
            puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar12 * -2 + 1;
          }
          for (uVar9 = local_14 * iVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(byte *)puVar6 = *(byte *)puVar11;
            puVar11 = (uint *)((int)puVar11 + (uint)bVar12 * -2 + 1);
            puVar6 = (uint *)((int)puVar6 + (uint)bVar12 * -2 + 1);
          }
LAB_00524292:
          FUN_00523cb0(param_1);
        }
        else if (bVar3) goto LAB_00524292;
        if (iVar5 < local_14) {
          _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
          _DAT_01cc4804 = 0x893;
          FUN_004c8440("MP3 decoded more than batch: r = %d, batch = %d",local_14,iVar5);
        }
        if (iVar5 != local_14) {
          *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x13c) + local_14;
        }
        local_34 = local_34 - local_14;
        iVar5 = *(int *)(param_1 + 0x140) + local_14;
        *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + local_14;
        *(int *)(param_1 + 0x140) = iVar5;
        if (*(int *)(param_1 + 0x138) <= iVar5) {
          *(uint *)(param_1 + 0x140) = 0;
        }
      }
      puVar10 = (byte *)FUN_00523ba0(param_1,*(uint *)(param_1 + 0x140),iVar5);
      if (puVar10 != (byte *)0x0) {
        bVar3 = true;
        bVar1 = false;
        goto LAB_005241ef;
      }
      pcVar14 = "Error locking %s while streaming\n";
LAB_005240f2:
      FUN_00529980(pcVar14,param_1);
LAB_005240fa:
      FUN_00525570(iVar2 + 0x2dbd374);
      FUN_00523a60(param_1);
      return 0;
    }
  }
  return 1;
}
