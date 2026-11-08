// Name: FUN_004b6f30
// Address: 004b6f30
// Address Range: [[004b6f30, 004b7dd9]]
// Convention: unknown
// Signature: void FUN_004b6f30(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b6f30(int param_1)

{
  char cVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  byte bVar13;
  int aiStackY_1074 [579];
  int *piVar14;
  int iStack_730;
  int iStack_72c;
  int iStack_728;
  byte auStack_724 [336];
  byte auStack_5d4 [256];
  byte auStack_4d4 [256];
  char acStack_3d4 [256];
  byte auStack_2d4 [256];
  byte auStack_1d4 [200];
  byte auStack_10c [100];
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  int iStack_8c;
  int aiStack_88 [5];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  int iStack_68;
  int aiStack_64 [4];
  int iStack_54;
  uint uStack_50;
  byte auStack_4c [4];
  int local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  bVar13 = 0;
  local_44 = 0;
  if (*(int *)(param_1 + 0x230) != 0) {
    local_48 = FUN_005806a0();
  }
  iVar4 = 0x01DA62F0;
  _DAT_01ed3198 = 0;
  if ((*(int *)(param_1 + 0xe8) == 0) && (*(int *)(0x01DA62F0 + 0x178) == 0)) {
    if (_DAT_01c6cee8 != 0) {
      FUN_0057a3c0();
      local_44 = 1;
    }
    if ((*(int *)(param_1 + 0x328) != 0) || (*(int *)(param_1 + 0x32c) != 0)) {
      FUN_00560d70();
    }
    if (((*(int *)(0x01D1A05C + 0x40) == 0) && (*(int *)(param_1 + 0x264) == 0)) &&
       (DAT_007dffb4 == (int *)0x0)) {
      FUN_00535da0(0x01ED78C8,1);
    }
    if (DAT_007dffb4 != (int *)0x0) {
      (**(code **)(*DAT_007dffb4 + 0x1c))(DAT_007dffb4);
    }
    FUN_00507c00(0x01DA62F0);
    if (*(int *)(param_1 + 0x220) == 0) {
      FUN_004bf4b0(param_1);
      FUN_0055ff40(0x02CF5680);
    }
    else {
      FUN_00550590(&uStack_a8);
      iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      if (&uStack_a8 != (uint *)(iVar4 + 0x20)) {
        uStack_a8 = *(uint *)(iVar4 + 0x20);
        uStack_a4 = *(uint *)(iVar4 + 0x24);
        uStack_a0 = *(uint *)(iVar4 + 0x28);
      }
      iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      if (&uStack_9c != (uint *)(iVar4 + 0x30)) {
        uStack_9c = *(uint *)(iVar4 + 0x30);
        uStack_98 = *(uint *)(iVar4 + 0x34);
        uStack_94 = *(uint *)(iVar4 + 0x38);
      }
      FUN_005505e0(&uStack_a8);
      iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      (**(code **)(*(int *)(iVar4 + 0x154) + 0x68))(iVar4,&uStack_a8,&uStack_9c);
      if ((DAT_01c5fae4 & 1) != 0) {
        FUN_00449eb0(0x2038f4c,_DAT_01c5fadc,_DAT_01c5fae0);
        piVar14 = &iStack_8c;
        iStack_8c = iStack_68;
        aiStack_88[(uint)bVar13 * -2] = aiStack_64[(uint)bVar13 * -2];
        aiStack_88[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
             aiStack_64[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        FUN_00449f80(0x2038f4c,piVar14);
        iStack_8c = aiStack_88[2];
        aiStack_88[(uint)bVar13 * -2] = aiStack_88[(uint)bVar13 * -2 + 3];
        aiStack_88[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
             aiStack_88[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
        fStack_74 = (float)iStack_8c * _DAT_005e06e4;
        fStack_70 = (float)aiStack_88[0] * _DAT_005e06e4;
        fStack_6c = (float)aiStack_88[1] * _DAT_005e06e4;
        iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        (**(code **)(*(int *)(iVar4 + 0x154) + 0x68))(iVar4,&fStack_74,iVar4 + 0x30);
        DAT_01c5fae4 = DAT_01c5fae4 & 0xfe;
      }
    }
    FUN_004b4440(param_1);
    FUN_00507790(0x01DA62F0);
    if (((*(int *)(0x01D1A05C + 0x40) == 0) && (*(int *)(param_1 + 0x264) == 0)) &&
       (DAT_007dffb4 == (int *)0x0)) {
      FUN_00535a80(0x01ED78C8);
    }
    FUN_0046d4c0(DAT_005f2afc,0xffff);
    if (*(int *)(param_1 + 0x230) != 0) {
      iStack_18 = FUN_005806a0();
      iStack_18 = iStack_18 - local_48;
      FUN_00441ff0(PTR_DAT_005f1690,"screen paint : %3.2f ms\n",
                   ((double)iStack_18 * _DAT_005c2578 * _DAT_005c2580 * _DAT_005c2588) /
                   (double)*(float *)(0x01D2130C + 0x314));
    }
    if (*(int *)(param_1 + 0x22c) == 0) {
      FUN_00565820();
      if (*(int *)(0x01D1A05C + 0x40) == 0) {
        if (DAT_007dffb4 == (int *)0x0) {
          if (*(int *)(param_1 + 0x264) == 0) {
            if (*(int *)(param_1 + 0x268) != 0) {
              FUN_00536990(0x01ED78C8);
            }
          }
          else {
            FUN_005365c0(0x01ED78C8);
          }
        }
        else {
          (**(code **)(*DAT_007dffb4 + 0x18))(DAT_007dffb4);
        }
      }
      else {
        FUN_004abe00(0x01D1A05C);
      }
      if (((*(int *)(param_1 + 0x234) != 0) ||
          (iVar4 = FUN_005a5ec0("SPOOKHOUSE"), iVar4 != 0)) &&
         (iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x3e), iVar4 != 0)) {
        _DAT_01d21e9c = _DAT_01d21e9c + 1;
        FUN_005a28c0(0x1d21ea0,"demon%d.pcx",_DAT_01d21e9c);
        FUN_0050da60(0x1d21ea0);
      }
      FUN_004dda90(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8);
      if (*(int *)(param_1 + 0x328) != 0) {
        FUN_005373e0(0x01ED78C8);
      }
      FUN_004b45e0(param_1);
      if (_DAT_01d22c40 != 0) {
        iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d);
        if ((iVar4 != 0) &&
           (iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x2f), iVar4 != 0)) {
          iVar4 = _DAT_01d22c44;
          if (_DAT_01d22c44 == 0) {
            _DAT_01d22c44 = 1;
            _DAT_01d22c4c = iVar4;
          }
          else {
            _DAT_01d22c44 = 0;
          }
        }
        if ((_DAT_01d22c48 < 1) || (_DAT_01d22c4c < _DAT_01d22c48)) {
          if (_DAT_01d22c44 != 0) {
            FUN_005a28c0(auStack_10c,"noc%05d.raw",_DAT_01d22c4c);
            FUN_005a28c0(auStack_1d4,"Movie recording active: movie\\%s",auStack_10c);
            iStack_38 = FUN_004659c0("movie",auStack_10c,&DAT_005c21d9);
            if (iStack_38 != 0) {
              iStack_3c = 0;
              if (0 < 0x00000040) {
                do {
                  iStack_34 = 0;
                  if (0 < 0x00000040) {
                    iStack_40 = iStack_3c + 1;
                    do {
                      iStack_2c = (iStack_34 * DAT_005fba18) / 0x00000040;
                      iStack_24 = ((iStack_34 + 1) * DAT_005fba18) / 0x00000040;
                      iVar4 = (iStack_3c * DAT_005fba1c) / 0x00000040;
                      iVar6 = (iStack_40 * DAT_005fba1c) / 0x00000040;
                      iStack_1c = 0;
                      iStack_20 = 0;
                      iVar10 = 0;
                      iVar7 = 0;
                      if (iVar4 < iVar6) {
                        iStack_28 = iVar4 << 2;
                        iStack_30 = iVar6 << 2;
                        do {
                          if (iStack_2c < iStack_24) {
                            puVar9 = (uint *)(iStack_2c * 4 + *(int *)(&DAT_01c5faec + iStack_28));
                            iVar4 = iStack_2c;
                            do {
                              uVar11 = *puVar9;
                              puVar9 = puVar9 + 1;
                              iStack_20 = iStack_20 + (uVar11 >> 0x10 & 0xff);
                              iVar4 = iVar4 + 1;
                              iVar10 = iVar10 + (uVar11 & 0xff);
                              iStack_1c = iStack_1c + 1;
                              iVar7 = iVar7 + (uVar11 >> 8 & 0xff);
                            } while (iVar4 < iStack_24);
                          }
                          iStack_28 = iStack_28 + 4;
                        } while (iStack_28 < iStack_30);
                      }
                      iStack_20 = iStack_20 / iStack_1c;
                      iVar7 = iVar7 / iStack_1c;
                      iVar10 = iVar10 / iStack_1c;
                      FUN_005a5d70(iStack_20,iStack_38);
                      FUN_005a5d70(iVar7,iStack_38);
                      FUN_005a5d70(iVar10,iStack_38);
                      iStack_34 = iStack_34 + 1;
                    } while (iStack_34 < 0x00000040);
                  }
                  iStack_3c = iStack_3c + 1;
                } while (iStack_3c < 0x00000040);
              }
              FUN_005a3a90(iStack_38);
              FUN_00401fe0(auStack_1d4,0,0);
              _DAT_01d22c4c = _DAT_01d22c4c + 1;
            }
          }
        }
        else {
          _DAT_01d22c44 = 0;
        }
      }
      FUN_00528fc0(0x01ED73E0);
      FUN_004b47d0(param_1);
      FUN_004bd7d0(param_1);
      if (*(int *)(param_1 + 0x208) == 0) {
        _DAT_01d1bb10 = 0.0;
        _DAT_01d1bb18 = 0;
      }
      else {
        FUN_00465e50(0x01ED78C8 + 0x14d0f0,0,0,auStack_5d4,0);
        FUN_005a28c0(auStack_2d4,"Set: %s Camera: \"%s\" group %d",auStack_5d4,0x2038f8c,
                     *(uint *)
                      (*(int *)(0x01ED78C8 + 0x15aeb8) * 0x1a4 + 0x150 + 0x01ED78C8));
        FUN_00401fe0(auStack_2d4,0,DAT_005fba1c + -0x16);
        _DAT_01d1bb18 = _DAT_01d1bb18 + 1;
        _DAT_01d1bb10 = _DAT_01d1bb10 + (double)*(float *)(param_1 + 0x314);
        FUN_005a28c0(auStack_2d4,"FR: %f, AVG: %f, PC: %d",
                     1.0 / (double)*(float *)(param_1 + 0x314),(double)_DAT_01d1bb18 / _DAT_01d1bb10
                     ,_DAT_01ed3198);
        FUN_00401fe0(auStack_2d4,0,DAT_005fba1c + -0xb);
        iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        fVar3 = (float)_DAT_005c2598;
        FUN_005a28c0(auStack_2d4,"Hero : %4.2f,%4.2f,%4.2f xyz and %3.2f,%3.2f,%3.2f pbh",(double)*(float *)(iVar4 + 0x20)
                     ,(double)*(float *)(iVar4 + 0x24),(double)*(float *)(iVar4 + 0x28),
                     (double)(fVar3 * *(float *)(iVar4 + 0x30) * _DAT_005c2590),
                     (double)(*(float *)(iVar4 + 0x38) * _DAT_005c2590 * fVar3),
                     (double)(*(float *)(iVar4 + 0x34) * _DAT_005c2590 * fVar3));
        FUN_00401fe0(auStack_2d4,0,0);
        FUN_005a28c0(auStack_2d4,"Slew : %s, Virtual Director : %s",
                     (&PTR_DAT_005fe9e0)[*(int *)(param_1 + 0x220)],
                     (&PTR_DAT_005fe9e0)[*(int *)(param_1 + 0x324)]);
        FUN_00401fe0(auStack_2d4,0,0xb);
        pfVar2 = *(float **)(param_1 + 0xa70);
        if (pfVar2 != (float *)0x0) {
          FUN_005a28c0(auStack_2d4,"Fudge: %g,%g,%g",(double)*pfVar2,(double)pfVar2[1],
                       (double)pfVar2[2]);
          FUN_00401fe0(auStack_2d4,0,DAT_005fba1c + -0x4d);
        }
        FUN_00557840(aiStack_64 + 4,&iStack_728,&uStack_50,&iStack_72c,auStack_4c,&iStack_730);
        iStack_18 = iStack_728;
        uVar5 = FUN_00556f80(iStack_54,(double)iStack_728 * _DAT_005c25a0,uStack_50,
                             (double)iStack_72c * _DAT_005c25a0,
                             (double)(iStack_728 + iStack_72c) * _DAT_005c25a0,
                             (double)iStack_730 * _DAT_005c25a0);
        FUN_005a28c0(auStack_2d4,"SFX: %d Samples: Active: %d/%.1fk Avail: %d/%.1fk Total alloc: %.1fk Free: %.1fk",uVar5);
        FUN_00401fe0(auStack_2d4,0,DAT_005fba1c + -0x42);
        FUN_0056acc0(auStack_2d4);
        FUN_00401fe0(auStack_2d4,0,DAT_005fba1c + -0x37);
        FUN_00550310(auStack_2d4);
        FUN_00401fe0(auStack_2d4,0,DAT_005fba1c + -0x2c);
        FUN_00401fe0(param_1 + 0xf4,0,DAT_005fba1c + -0x21);
        if (_DAT_02cf5fcc != 0) {
          uVar5 = FUN_005664c0(0x400);
          uVar5 = FUN_005664c0(0x200,uVar5);
          uVar5 = FUN_005664c0(0x100,uVar5);
          uVar5 = FUN_005664c0(0x80,uVar5);
          uVar5 = FUN_005664c0(0x40,uVar5);
          uVar5 = FUN_005664c0(0x20,uVar5);
          FUN_005a28c0(auStack_2d4,"32:%d,64:%d,128:%d,256:%d,512:%d,1024:%d",uVar5);
          FUN_00401fe0(auStack_2d4,0,0x2c);
        }
      }
      if (_DAT_01d22c50 != 0) {
        iVar6 = FUN_00556e80();
        iVar4 = 0x37;
        for (; iVar6 != 0; iVar6 = FUN_00556ec0(iVar6)) {
          FUN_00555840(auStack_724);
          iVar7 = FUN_00556780(iVar6,auStack_724);
          if (iVar7 != 0) {
            FUN_00402140(0,iVar4,auStack_724);
            iVar4 = iVar4 + 0xb;
          }
        }
      }
      if (*(int *)(param_1 + 0x1fc) != 0) {
        FUN_00491bf0(0x01C6E360);
      }
      if ((*(int *)(param_1 + 0x200) != 0) && (*(int *)(param_1 + 0x328) != 0)) {
        FUN_00529210(0x01ED73E0,0,0xf0,DAT_005fba18 + -1,DAT_005fba1c + -1);
      }
      if (*(int *)(param_1 + 0x21c) != 0) {
        FUN_004819e0(0x01C5B0E4,auStack_4d4);
        FUN_00401fe0(auStack_4d4,0,DAT_005fba1c + -0x42);
      }
      iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
      if (iVar4 == 2) {
        pcVar8 = (char *)FUN_00508960("You're dead.  Game over.");
        pcVar12 = acStack_3d4;
        do {
          cVar1 = *pcVar8;
          *pcVar12 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar12[1] = cVar1;
          pcVar12 = pcVar12 + 2;
        } while (cVar1 != '\0');
      }
      if (*(int *)(param_1 + 0xb7c) != 0) {
        FUN_004b51e0(param_1);
      }
      if (*(int *)(param_1 + 0x330) != 0) {
        FUN_00442250(PTR_DAT_005f1690);
      }
      if (0 < _DAT_01d22204) {
        FUN_004843d0(&DAT_01d22204);
      }
      if (*(int *)(param_1 + 0x220) != 0) {
        FUN_00480410(0x01C5B0E4,0);
      }
      if ((*(int *)(param_1 + 0xd4) == 3) &&
         (FUN_0048c150(0x01C6E360,"MouseControlMode"), -1 < _DAT_01d22b48)) {
        FUN_004c4a10(param_1);
      }
      uVar11 = *(uint *)(param_1 + 0x264) | *(uint *)(param_1 + 0x268);
      if ((uVar11 == 0) && (_DAT_01d22c64 != 0)) {
        FUN_00560d70();
      }
      _DAT_01d22c64 = uVar11;
      FUN_00565870(0);
    }
    if (local_44 != 0) {
      FUN_0057a4b0();
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x220) = 0;
    FUN_00507c00(iVar4);
    FUN_004bf4b0(param_1);
    if (*(int *)(param_1 + 0xe8) == 0) {
      FUN_004b4440(param_1);
    }
    else {
      FUN_004bf3a0(param_1,0x3e800000);
    }
    FUN_00507790(0x01DA62F0);
  }
  return;
}
