// Name: FUN_004ce580
// Address: 004ce580
// Address Range: [[004ce580, 004cf429]]
// Convention: unknown
// Signature: void FUN_004ce580(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ce580(int param_1)

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
  if (*(int *)(param_1 + 0x228) != 0) {
    local_48 = FUN_005b2420();
  }
  iVar4 = 0x01D51C20;
  _DAT_01e7dac8 = 0;
  if ((*(int *)(param_1 + 0xe0) == 0) && (*(int *)(0x01D51C20 + 0x170) == 0)) {
    if (_DAT_01c50948 != 0) {
      FUN_005acb10();
      local_44 = 1;
    }
    if ((*(int *)(param_1 + 0x2a8) != 0) || (*(int *)(param_1 + 0x2ac) != 0)) {
      FUN_0057dc40();
    }
    if (((*(int *)(0x01CC8004 + 0x40) == 0) && (*(int *)(param_1 + 0x25c) == 0)) &&
       (DAT_007c3978 == (int *)0x0)) {
      FUN_00550580(0x01E82168,1);
    }
    if (DAT_007c3978 != (int *)0x0) {
      (**(code **)(*DAT_007c3978 + 0x1c))(DAT_007c3978);
    }
    FUN_00530340(0x01D51C20);
    if (*(int *)(param_1 + 0x218) == 0) {
      FUN_004d8060(param_1);
      FUN_0057ce10(0x02C82A60);
    }
    else {
      FUN_0056ba00(&uStack_a8);
      iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      if (&uStack_a8 != (uint *)(iVar4 + 0x20)) {
        uStack_a8 = *(uint *)(iVar4 + 0x20);
        uStack_a4 = *(uint *)(iVar4 + 0x24);
        uStack_a0 = *(uint *)(iVar4 + 0x28);
      }
      iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      if (&uStack_9c != (uint *)(iVar4 + 0x30)) {
        uStack_9c = *(uint *)(iVar4 + 0x30);
        uStack_98 = *(uint *)(iVar4 + 0x34);
        uStack_94 = *(uint *)(iVar4 + 0x38);
      }
      FUN_0056ba50(&uStack_a8);
      iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      (**(code **)(*(int *)(iVar4 + 0x154) + 0x68))(iVar4,&uStack_a8,&uStack_9c);
      if ((DAT_01c43544 & 1) != 0) {
        FUN_0044dd70(0x1fe37ec,_DAT_01c4353c,_DAT_01c43540);
        piVar14 = &iStack_8c;
        iStack_8c = iStack_68;
        aiStack_88[(uint)bVar13 * -2] = aiStack_64[(uint)bVar13 * -2];
        aiStack_88[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
             aiStack_64[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        FUN_0044de40(0x1fe37ec,piVar14);
        iStack_8c = aiStack_88[2];
        aiStack_88[(uint)bVar13 * -2] = aiStack_88[(uint)bVar13 * -2 + 3];
        aiStack_88[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
             aiStack_88[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
        fStack_74 = (float)iStack_8c * _DAT_00600f74;
        fStack_70 = (float)aiStack_88[0] * _DAT_00600f74;
        fStack_6c = (float)aiStack_88[1] * _DAT_00600f74;
        iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        (**(code **)(*(int *)(iVar4 + 0x154) + 0x68))(iVar4,&fStack_74,iVar4 + 0x30);
        DAT_01c43544 = DAT_01c43544 & 0xfe;
      }
    }
    FUN_004cbf20(param_1);
    FUN_0052fee0(0x01D51C20);
    if (((*(int *)(0x01CC8004 + 0x40) == 0) && (*(int *)(param_1 + 0x25c) == 0)) &&
       (DAT_007c3978 == (int *)0x0)) {
      FUN_00550260(0x01E82168);
    }
    FUN_00483de0(DAT_00612560,0xffff);
    if (*(int *)(param_1 + 0x228) != 0) {
      iStack_18 = FUN_005b2420();
      iStack_18 = iStack_18 - local_48;
      FUN_00445430(PTR_DAT_00611100,"screen paint : %3.2f ms\n",
                   ((double)iStack_18 * _DAT_005e171c * _DAT_005e1724 * _DAT_005e172c) /
                   (double)*(float *)(0x01CCF390 + 0x294));
    }
    if (*(int *)(param_1 + 0x224) == 0) {
      FUN_00581f50();
      if (*(int *)(0x01CC8004 + 0x40) == 0) {
        if (DAT_007c3978 == (int *)0x0) {
          if (*(int *)(param_1 + 0x25c) == 0) {
            if (*(int *)(param_1 + 0x260) != 0) {
              FUN_00551170(0x01E82168);
            }
          }
          else {
            FUN_00550da0(0x01E82168);
          }
        }
        else {
          (**(code **)(*DAT_007c3978 + 0x18))(DAT_007c3978);
        }
      }
      else {
        FUN_004be0f0(0x01CC8004);
      }
      if (((*(int *)(param_1 + 0x22c) != 0) ||
          (iVar4 = FUN_005c3050("SPOOKHOUSE"), iVar4 != 0)) &&
         (iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x3e), iVar4 != 0)) {
        _DAT_01ccfe94 = _DAT_01ccfe94 + 1;
        FUN_005bfb40(0x1ccfe98,"demon%d.pcx",_DAT_01ccfe94);
        FUN_00535d80(0x1ccfe98);
      }
      FUN_004fae10(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8);
      if (*(int *)(param_1 + 0x2a8) != 0) {
        FUN_00551a50(0x01E82168);
      }
      FUN_004cc0c0(param_1);
      if (_DAT_01cd0c38 != 0) {
        iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d);
        if ((iVar4 != 0) &&
           (iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x2f), iVar4 != 0)) {
          iVar4 = _DAT_01cd0c3c;
          if (_DAT_01cd0c3c == 0) {
            _DAT_01cd0c3c = 1;
            _DAT_01cd0c44 = iVar4;
          }
          else {
            _DAT_01cd0c3c = 0;
          }
        }
        if ((_DAT_01cd0c40 < 1) || (_DAT_01cd0c44 < _DAT_01cd0c40)) {
          if (_DAT_01cd0c3c != 0) {
            FUN_005bfb40(auStack_10c,"noc%05d.raw",_DAT_01cd0c44);
            FUN_005bfb40(auStack_1d4,"Movie recording active: movie\\%s",auStack_10c);
            iStack_38 = FUN_00479180("movie",auStack_10c,&DAT_005e135d);
            if (iStack_38 != 0) {
              iStack_3c = 0;
              if (0 < 0x00000040) {
                do {
                  iStack_34 = 0;
                  if (0 < 0x00000040) {
                    iStack_40 = iStack_3c + 1;
                    do {
                      iStack_2c = (iStack_34 * DAT_0061b498) / 0x00000040;
                      iStack_24 = ((iStack_34 + 1) * DAT_0061b498) / 0x00000040;
                      iVar4 = (iStack_3c * DAT_0061b49c) / 0x00000040;
                      iVar6 = (iStack_40 * DAT_0061b49c) / 0x00000040;
                      iStack_1c = 0;
                      iStack_20 = 0;
                      iVar10 = 0;
                      iVar7 = 0;
                      if (iVar4 < iVar6) {
                        iStack_28 = iVar4 << 2;
                        iStack_30 = iVar6 << 2;
                        do {
                          if (iStack_2c < iStack_24) {
                            puVar9 = (uint *)(iStack_2c * 4 + *(int *)(&DAT_01c4354c + iStack_28));
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
                      FUN_005c2f00(iStack_20,iStack_38);
                      FUN_005c2f00(iVar7,iStack_38);
                      FUN_005c2f00(iVar10,iStack_38);
                      iStack_34 = iStack_34 + 1;
                    } while (iStack_34 < 0x00000040);
                  }
                  iStack_3c = iStack_3c + 1;
                } while (iStack_3c < 0x00000040);
              }
              FUN_005c0d10(iStack_38);
              FUN_00401fe0(auStack_1d4,0,0);
              _DAT_01cd0c44 = _DAT_01cd0c44 + 1;
            }
          }
        }
        else {
          _DAT_01cd0c3c = 0;
        }
      }
      FUN_005439b0(0x01E81C80);
      FUN_004cc2b0(param_1);
      FUN_004d61e0(param_1);
      if (*(int *)(param_1 + 0x200) == 0) {
        _DAT_01cc9ba0 = 0.0;
        _DAT_01cc9ba8 = 0;
      }
      else {
        FUN_00479580(0x01E82168 + 0x14d0f0,0,0,auStack_5d4,0);
        FUN_005bfb40(auStack_2d4,"Set: %s Camera: \"%s\" group %d",auStack_5d4,0x1fe382c,
                     *(uint *)
                      (*(int *)(0x01E82168 + 0x15aeb8) * 0x1a4 + 0x150 + 0x01E82168));
        FUN_00401fe0(auStack_2d4,0,DAT_0061b49c + -0x16);
        _DAT_01cc9ba8 = _DAT_01cc9ba8 + 1;
        _DAT_01cc9ba0 = _DAT_01cc9ba0 + (double)*(float *)(param_1 + 0x294);
        FUN_005bfb40(auStack_2d4,"FR: %f, AVG: %f, PC: %d",
                     1.0 / (double)*(float *)(param_1 + 0x294),(double)_DAT_01cc9ba8 / _DAT_01cc9ba0
                     ,_DAT_01e7dac8);
        FUN_00401fe0(auStack_2d4,0,DAT_0061b49c + -0xb);
        iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        fVar3 = (float)_DAT_005e173c;
        FUN_005bfb40(auStack_2d4,"Hero : %4.2f,%4.2f,%4.2f xyz and %3.2f,%3.2f,%3.2f pbh",(double)*(float *)(iVar4 + 0x20)
                     ,(double)*(float *)(iVar4 + 0x24),(double)*(float *)(iVar4 + 0x28),
                     (double)(fVar3 * *(float *)(iVar4 + 0x30) * _DAT_005e1734),
                     (double)(*(float *)(iVar4 + 0x38) * _DAT_005e1734 * fVar3),
                     (double)(*(float *)(iVar4 + 0x34) * _DAT_005e1734 * fVar3));
        FUN_00401fe0(auStack_2d4,0,0);
        FUN_005bfb40(auStack_2d4,"Slew : %s, Virtual Director : %s",
                     (&PTR_DAT_0061d960)[*(int *)(param_1 + 0x218)],
                     (&PTR_DAT_0061d960)[*(int *)(param_1 + 0x2a4)]);
        FUN_00401fe0(auStack_2d4,0,0xb);
        pfVar2 = *(float **)(param_1 + 0x9f0);
        if (pfVar2 != (float *)0x0) {
          FUN_005bfb40(auStack_2d4,"Fudge: %g,%g,%g",(double)*pfVar2,(double)pfVar2[1],
                       (double)pfVar2[2]);
          FUN_00401fe0(auStack_2d4,0,DAT_0061b49c + -0x4d);
        }
        FUN_005746e0(aiStack_64 + 4,&iStack_728,&uStack_50,&iStack_72c,auStack_4c,&iStack_730);
        iStack_18 = iStack_728;
        uVar5 = FUN_00573e20(iStack_54,(double)iStack_728 * _DAT_005e1744,uStack_50,
                             (double)iStack_72c * _DAT_005e1744,
                             (double)(iStack_728 + iStack_72c) * _DAT_005e1744,
                             (double)iStack_730 * _DAT_005e1744);
        FUN_005bfb40(auStack_2d4,"SFX: %d Samples: Active: %d/%.1fk Avail: %d/%.1fk Total alloc: %.1fk Free: %.1fk",uVar5);
        FUN_00401fe0(auStack_2d4,0,DAT_0061b49c + -0x42);
        FUN_00597cd0(auStack_2d4);
        FUN_00401fe0(auStack_2d4,0,DAT_0061b49c + -0x37);
        FUN_0056b780(auStack_2d4);
        FUN_00401fe0(auStack_2d4,0,DAT_0061b49c + -0x2c);
        FUN_00401fe0(param_1 + 0xec,0,DAT_0061b49c + -0x21);
        if (_DAT_02c83370 != 0) {
          uVar5 = FUN_00582bf0(0x400);
          uVar5 = FUN_00582bf0(0x200,uVar5);
          uVar5 = FUN_00582bf0(0x100,uVar5);
          uVar5 = FUN_00582bf0(0x80,uVar5);
          uVar5 = FUN_00582bf0(0x40,uVar5);
          uVar5 = FUN_00582bf0(0x20,uVar5);
          FUN_005bfb40(auStack_2d4,"32:%d,64:%d,128:%d,256:%d,512:%d,1024:%d",uVar5);
          FUN_00401fe0(auStack_2d4,0,0x2c);
        }
      }
      if (_DAT_01cd0c48 != 0) {
        iVar6 = FUN_00573d20();
        iVar4 = 0x37;
        for (; iVar6 != 0; iVar6 = FUN_00573d60(iVar6)) {
          FUN_00572340(auStack_724);
          iVar7 = FUN_00573620(iVar6,auStack_724);
          if (iVar7 != 0) {
            FUN_00402140(0,iVar4,auStack_724);
            iVar4 = iVar4 + 0xb;
          }
        }
      }
      if (*(int *)(param_1 + 500) != 0) {
        FUN_004a6d80(0x01C51D80);
      }
      if ((*(int *)(param_1 + 0x1f8) != 0) && (*(int *)(param_1 + 0x2a8) != 0)) {
        FUN_00543c00(0x01E81C80,0,0xf0,DAT_0061b498 + -1,DAT_0061b49c + -1);
      }
      if (*(int *)(param_1 + 0x214) != 0) {
        FUN_00498e40(0x01C3EB54,auStack_4d4);
        FUN_00401fe0(auStack_4d4,0,DAT_0061b49c + -0x42);
      }
      iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
      if (iVar4 == 2) {
        pcVar8 = (char *)FUN_00531090("You're dead.  Game over.");
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
      if (*(int *)(param_1 + 0xafc) != 0) {
        FUN_004ccc40(param_1);
      }
      if (*(int *)(param_1 + 0x2b0) != 0) {
        FUN_00445690(PTR_DAT_00611100);
      }
      if (0 < _DAT_01cd01fc) {
        FUN_0049b830(&DAT_01cd01fc);
      }
      if (*(int *)(param_1 + 0x218) != 0) {
        FUN_00497870(0x01C3EB54,0);
      }
      if ((*(int *)(param_1 + 0xd0) == 3) &&
         (FUN_004a1b70(0x01C51D80,"MouseControlMode"), -1 < _DAT_01cd0b40)) {
        FUN_004dc1a0(param_1);
      }
      uVar11 = *(uint *)(param_1 + 0x25c) | *(uint *)(param_1 + 0x260);
      if ((uVar11 == 0) && (_DAT_01cd0c5c != 0)) {
        FUN_0057dc40();
      }
      _DAT_01cd0c5c = uVar11;
      FUN_00581fa0(0);
    }
    if (local_44 != 0) {
      FUN_005acc00();
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x218) = 0;
    FUN_00530340(iVar4);
    FUN_004d8060(param_1);
    if (*(int *)(param_1 + 0xe0) == 0) {
      FUN_004cbf20(param_1);
    }
    else {
      FUN_004d7f50(param_1,0x3e800000);
    }
    FUN_0052fee0(0x01D51C20);
  }
  return;
}
