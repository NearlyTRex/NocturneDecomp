// Name: FUN_004ff2c0
// Address: 004ff2c0
// Address Range: [[004ff2c0, 005049ad]]
// Convention: unknown
// Signature: uint FUN_004ff2c0(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004ff2c0(uint *param_1,uint param_2)

{
  float fVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  byte *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  byte bVar15;
  float local_3f80;
  float local_3f7c;
  float local_3f78;
  float local_3f74;
  float local_3f70;
  byte local_3f6c [512];
  byte local_3d6c [512];
  byte local_3b6c [500];
  byte local_3978 [500];
  byte local_3784 [300];
  byte local_3658 [300];
  byte local_352c [300];
  byte local_3400 [300];
  byte local_32d4 [200];
  byte local_320c [200];
  byte local_3144 [200];
  byte local_307c [200];
  byte local_2fb4 [200];
  byte local_2eec [200];
  byte local_2e24 [200];
  byte local_2d5c [200];
  byte local_2c94 [200];
  byte local_2bcc [200];
  byte local_2b04 [200];
  byte local_2a3c [200];
  byte local_2974 [200];
  byte local_28ac [200];
  byte local_27e4 [200];
  byte local_271c [200];
  byte local_2654 [200];
  byte local_258c [200];
  byte local_24c4 [200];
  byte local_23fc [200];
  byte local_2334 [200];
  byte local_226c [200];
  byte local_21a4 [200];
  byte local_20dc [200];
  byte local_2014 [200];
  byte local_1f4c [200];
  byte local_1e84 [200];
  byte local_1dbc [200];
  byte local_1cf4 [200];
  byte local_1c2c [200];
  byte local_1b64 [200];
  byte local_1a9c [200];
  byte local_19d4 [200];
  byte local_190c [200];
  byte local_1844 [200];
  byte local_177c [200];
  byte local_16b4 [200];
  byte local_15ec [200];
  byte local_1524 [200];
  byte local_145c [200];
  byte local_1394 [200];
  byte local_12cc [200];
  byte local_1204 [200];
  byte local_113c [200];
  byte local_1074 [199];
  char acStack_fad [201];
  char local_ee4 [200];
  byte local_e1c [200];
  byte local_d54 [200];
  int local_c8c [30];
  byte local_c14 [100];
  byte local_bb0 [100];
  byte local_b4c [100];
  byte local_ae8 [100];
  byte local_a84 [100];
  char local_a20 [100];
  byte local_9bc [100];
  byte local_958 [100];
  byte local_8f4 [100];
  byte local_890 [100];
  byte local_82c [100];
  byte local_7c8 [100];
  byte local_764 [100];
  byte local_700 [100];
  byte local_69c [100];
  byte local_638 [100];
  byte local_5d4 [100];
  char local_570 [100];
  byte local_50c [100];
  byte local_4a8 [100];
  char local_444 [100];
  byte local_3e0 [100];
  byte local_37c [100];
  byte local_318 [100];
  byte local_2b4 [100];
  byte local_250 [100];
  byte local_1ec [100];
  byte local_188 [40];
  byte local_160 [12];
  byte local_154 [12];
  byte local_148 [4];
  byte local_144 [4];
  byte local_140 [4];
  byte local_13c [12];
  byte local_130 [12];
  uint local_124;
  uint local_120;
  uint local_11c;
  char *local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  byte *local_104;
  byte local_100 [4];
  int local_fc;
  byte *local_f8;
  byte *local_f4;
  int local_f0;
  uint local_ec;
  int local_e8;
  byte *local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  uint local_d0;
  int local_cc;
  int local_c8;
  uint local_c4;
  int local_c0;
  int local_bc;
  uint local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  uint local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  int local_98;
  int local_94;
  uint local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  uint local_7c;
  int local_78;
  int local_74;
  uint local_70;
  int local_6c;
  float local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  int local_54;
  int local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  bVar15 = 0;
  if (((int)param_1[0x10] < 0) || ((int)param_1[10] <= (int)param_1[0x10])) {
    _DAT_01cc4800 = "..\\core\\script.cpp";
    _DAT_01cc4804 = 0x46d;
    FUN_004c8440("CScript::step - Invalid instruction pointer!\n(This is an internal script processing error,\nand doesn't mean there's anything wrong with the\nscript file.)");
  }
  pcVar12 = "(no error message provided)";
  pcVar14 = &DAT_01e56420;
  do {
    cVar3 = *pcVar12;
    *pcVar14 = cVar3;
    if (cVar3 == '\0') break;
    cVar3 = pcVar12[1];
    pcVar12 = pcVar12 + 2;
    pcVar14[1] = cVar3;
    pcVar14 = pcVar14 + 2;
  } while (cVar3 != '\0');
  pcVar12 = *(char **)(param_1[0xb] + 4 + param_1[0x10] * 8);
  local_11c = *(uint *)(param_1[0xb] + param_1[0x10] * 8);
  local_114 = param_1[0x10];
  local_124 = 1;
  param_1[0x10] = local_114 + 1;
  cVar3 = *pcVar12;
  if ((cVar3 == '{') || (cVar3 == '}')) {
    local_118 = &DAT_0058e552;
  }
  else if (cVar3 == ':') {
    local_118 = (char *)FUN_004fe070(pcVar12 + 1);
    dVar2 = __BITCAST_DOUBLE(CONCAT44(local_11c,local_118));
    if (_DAT_01e56418 != 0) {
      cVar3 = *local_118;
      for (pcVar12 = local_118;
          (cVar3 != '\0' &&
          ((((&DAT_005c168c)[(byte)(*pcVar12 + 1)] & 0xe0) != 0 || (*pcVar12 == '_'))));
          pcVar12 = pcVar12 + 1) {
        cVar3 = pcVar12[1];
      }
      if (*pcVar12 != '\0') {
        pcVar12 = "Invalid label \"%s\" on line";
        goto LAB_004ff42f;
      }
      iVar4 = FUN_00504c10(param_1,local_118);
      if (iVar4 < 0) {
        _DAT_01cc4800 = "..\\core\\script.cpp";
        _DAT_01cc4804 = 0x49f;
        FUN_004c8440("Internal script error checking for duplicate label.");
      }
      if (iVar4 != local_114) {
        FUN_00563c90(&DAT_01e56420,"Duplicate label %s on lines %d and %d",local_118,local_11c,
                     *(uint *)(param_1[0xb] + iVar4 * 8));
        return 0xffffffff;
      }
    }
    local_118 = &DAT_0058e5db;
  }
  else {
    iVar4 = FUN_00564bc0(pcVar12,"syntaxCheckOn",0xd);
    if ((iVar4 == 0) && (((&DAT_005c168c)[(byte)(pcVar12[0xd] + 1)] & 0xe0) == 0)) {
      if (_DAT_01e56418 != 0) {
        _DAT_01e56418 = 1;
      }
      local_118 = &DAT_0058e5ea;
    }
    else {
      iVar4 = FUN_00564bc0(pcVar12,"syntaxCheckOff",0xe);
      if ((iVar4 == 0) && (((&DAT_005c168c)[(byte)(pcVar12[0xe] + 1)] & 0xe0) == 0)) {
        if (_DAT_01e56418 != 0) {
          _DAT_01e56418 = 2;
        }
        local_118 = &DAT_0058e5fa;
      }
      else if (_DAT_01e56418 != 2) {
        iVar4 = FUN_00564bc0(pcVar12,"advanceLightFilter",0x12);
        if (((((((((iVar4 == 0) && (((&DAT_005c168c)[(byte)(pcVar12[0x12] + 1)] & 0xe0) == 0)) ||
                 ((iVar4 = FUN_00564bc0(pcVar12,"createExplosion",0xf), iVar4 == 0 &&
                  (((&DAT_005c168c)[(byte)(pcVar12[0xf] + 1)] & 0xe0) == 0)))) ||
                ((iVar4 = FUN_00564bc0(pcVar12,"deleteActor",0xb), iVar4 == 0 &&
                 (((&DAT_005c168c)[(byte)(pcVar12[0xb] + 1)] & 0xe0) == 0)))) ||
               ((iVar4 = FUN_00564bc0(pcVar12,"displayBitmap",0xd), iVar4 == 0 &&
                (((&DAT_005c168c)[(byte)(pcVar12[0xd] + 1)] & 0xe0) == 0)))) ||
              (((((iVar4 = FUN_00564bc0(pcVar12,"hurtCharacter",0xd), iVar4 == 0 &&
                  (((&DAT_005c168c)[(byte)(pcVar12[0xd] + 1)] & 0xe0) == 0)) ||
                 ((iVar4 = FUN_00564bc0(pcVar12,"incCounter",10), iVar4 == 0 &&
                  (((&DAT_005c168c)[(byte)(pcVar12[10] + 1)] & 0xe0) == 0)))) ||
                ((iVar4 = FUN_00564bc0(pcVar12,"fadeSfx",7), iVar4 == 0 &&
                 (((&DAT_005c168c)[(byte)(pcVar12[7] + 1)] & 0xe0) == 0)))) ||
               ((iVar4 = FUN_00564bc0(pcVar12,"fadeAmbientSound",0x10), iVar4 == 0 &&
                (((&DAT_005c168c)[(byte)(pcVar12[0x10] + 1)] & 0xe0) == 0)))))) ||
             ((((iVar4 = FUN_00564bc0(pcVar12,"flagOn",6), iVar4 == 0 &&
                (((&DAT_005c168c)[(byte)(pcVar12[6] + 1)] & 0xe0) == 0)) ||
               ((iVar4 = FUN_00564bc0(pcVar12,"flagOff",7), iVar4 == 0 &&
                (((&DAT_005c168c)[(byte)(pcVar12[7] + 1)] & 0xe0) == 0)))) ||
              ((((iVar4 = FUN_00564bc0(pcVar12,"gameFlagOn",10), iVar4 == 0 &&
                 (((&DAT_005c168c)[(byte)(pcVar12[10] + 1)] & 0xe0) == 0)) ||
                ((iVar4 = FUN_00564bc0(pcVar12,"gameFlagOff",0xb), iVar4 == 0 &&
                 (((&DAT_005c168c)[(byte)(pcVar12[0xb] + 1)] & 0xe0) == 0)))) ||
               ((((iVar4 = FUN_00564bc0(pcVar12,"killCharacter",0xd), iVar4 == 0 &&
                  (((&DAT_005c168c)[(byte)(pcVar12[0xd] + 1)] & 0xe0) == 0)) ||
                 ((iVar4 = FUN_00564bc0(pcVar12,"killHero",8), iVar4 == 0 &&
                  (((&DAT_005c168c)[(byte)(pcVar12[8] + 1)] & 0xe0) == 0)))) ||
                ((iVar4 = FUN_00564bc0(pcVar12,"killSfx",7), iVar4 == 0 &&
                 (((&DAT_005c168c)[(byte)(pcVar12[7] + 1)] & 0xe0) == 0)))))))))) ||
            ((iVar4 = FUN_00564bc0(pcVar12,"lightning",9), iVar4 == 0 &&
             (((&DAT_005c168c)[(byte)(pcVar12[9] + 1)] & 0xe0) == 0)))) ||
           ((((iVar4 = FUN_00564bc0(pcVar12,"playSfx",7), iVar4 == 0 &&
              (((&DAT_005c168c)[(byte)(pcVar12[7] + 1)] & 0xe0) == 0)) ||
             ((iVar4 = FUN_00564bc0(pcVar12,"setCameraAmbient",0x10), iVar4 == 0 &&
              (((&DAT_005c168c)[(byte)(pcVar12[0x10] + 1)] & 0xe0) == 0)))) ||
            ((((iVar4 = FUN_00564bc0(pcVar12,"setCounter",10), iVar4 == 0 &&
               (((&DAT_005c168c)[(byte)(pcVar12[10] + 1)] & 0xe0) == 0)) ||
              (((iVar4 = FUN_00564bc0(pcVar12,"setGroupAmbient",0xf), iVar4 == 0 &&
                (((&DAT_005c168c)[(byte)(pcVar12[0xf] + 1)] & 0xe0) == 0)) ||
               ((((iVar4 = FUN_00564bc0(pcVar12,"setLightFilterFrame",0x13), iVar4 == 0 &&
                  (((&DAT_005c168c)[(byte)(pcVar12[0x13] + 1)] & 0xe0) == 0)) ||
                 ((iVar4 = FUN_00564bc0(pcVar12,"setLeverState",0xd), iVar4 == 0 &&
                  (((&DAT_005c168c)[(byte)(pcVar12[0xd] + 1)] & 0xe0) == 0)))) ||
                ((iVar4 = FUN_00564bc0(pcVar12,"setModelState",0xd), iVar4 == 0 &&
                 (((&DAT_005c168c)[(byte)(pcVar12[0xd] + 1)] & 0xe0) == 0)))))))) ||
             (((iVar4 = FUN_00564bc0(pcVar12,"setTimer",8), iVar4 == 0 &&
               (((&DAT_005c168c)[(byte)(pcVar12[8] + 1)] & 0xe0) == 0)) ||
              (((((iVar4 = FUN_00564bc0(pcVar12,"setWeather",10), iVar4 == 0 &&
                  (((&DAT_005c168c)[(byte)(pcVar12[10] + 1)] & 0xe0) == 0)) ||
                 ((iVar4 = FUN_00564bc0(pcVar12,"shakeScreen",0xb), iVar4 == 0 &&
                  (((&DAT_005c168c)[(byte)(pcVar12[0xb] + 1)] & 0xe0) == 0)))) ||
                ((iVar4 = FUN_00564bc0(pcVar12,"slamModelToMotion",0x11), iVar4 == 0 &&
                 (((&DAT_005c168c)[(byte)(pcVar12[0x11] + 1)] & 0xe0) == 0)))) ||
               ((iVar4 = FUN_00564bc0(pcVar12,"warpTo",6), iVar4 == 0 &&
                (((&DAT_005c168c)[(byte)(pcVar12[6] + 1)] & 0xe0) == 0)))))))))))) {
          if (_DAT_01e56418 == 0) {
            FUN_0047ab70(0x01C03A10,pcVar12);
          }
          else {
            pcVar12 = (char *)FUN_0047dcd0(0x01C03A10,pcVar12);
            if (pcVar12 != (char *)0x0) goto LAB_0050064d;
          }
          local_118 = &DAT_0058e756;
        }
        else {
          iVar4 = FUN_00564bc0(pcVar12,"addItemToInventory",0x12);
          if ((iVar4 == 0) && (((&DAT_005c168c)[(byte)(pcVar12[0x12] + 1)] & 0xe0) == 0)) {
            local_118 = (char *)FUN_004fe070(pcVar12 + 0x12);
            local_e8 = -1;
            FUN_00566b5c(local_118," ( %[^,], %[^)])%n",local_e1c,local_27e4,&local_e8);
            if (local_e8 < 3) {
              FUN_00563c90(&DAT_01e56420,"Error parsing addItemToInventory command parms");
              return 0xffffffff;
            }
            local_118 = local_118 + local_e8;
            FUN_004fe000(local_e1c);
            FUN_004fe000(local_27e4);
            iVar4 = FUN_004fe180(local_e1c,_DAT_01cae124,0x1cae0ec);
            if ((iVar4 == 0) ||
               (iVar9 = FUN_004fe180(local_27e4,DAT_00763e80,&DAT_00763e48), iVar9 == 0))
            goto joined_r0x00500ad6;
            if (_DAT_01e56418 == 0) {
              FUN_004bf360(iVar4 + 0x1f5a0,iVar9,0);
            }
          }
          else {
            iVar4 = FUN_00564bc0(pcVar12,"addLightFilter",0xe);
            if ((iVar4 == 0) && (((&DAT_005c168c)[(byte)(pcVar12[0xe] + 1)] & 0xe0) == 0)) {
              local_118 = (char *)FUN_004fe070(pcVar12 + 0xe);
              local_e0 = -1;
              FUN_00566b5c(local_118,"( %[^,], %[^,], %f )%n",local_5d4,local_3e0,&local_a0
                           ,&local_e0);
              if (local_e0 < 5) {
                FUN_00563c90(&DAT_01e56420,"Error parsing addLightFilter command parms");
                return 0xffffffff;
              }
              local_118 = local_118 + local_e0;
              FUN_0050e5d0(0x01E57284,local_5d4,&local_110,local_100);
              if (local_110 == 0) {
                FUN_00563c90(&DAT_01e56420,"Light \"%s\" does not exist",local_5d4);
                return 0xffffffff;
              }
              iVar4 = FUN_004568c0(&DAT_0058e817,local_3e0);
              if (iVar4 < 1) {
                FUN_00563c90(&DAT_01e56420,"Can't open filter \"%s\"",local_3e0);
                return 0xffffffff;
              }
              if (_DAT_01e56418 == 0) {
                FUN_00515710(local_110,local_3e0,local_a0,0);
              }
            }
            else {
              iVar4 = FUN_00564bc0(pcVar12,"allowEnemyAttack",0x10);
              if ((iVar4 == 0) && (((&DAT_005c168c)[(byte)(pcVar12[0x10] + 1)] & 0xe0) == 0)) {
                local_118 = (char *)FUN_004fe070(pcVar12 + 0x10);
                pcVar12 = (char *)FUN_004fe140(&local_118,local_4a8);
                if (pcVar12 != (char *)0x0) {
LAB_0050064d:
                  pcVar14 = &DAT_01e56420;
                  do {
                    cVar3 = *pcVar12;
                    *pcVar14 = cVar3;
                    if (cVar3 == '\0') {
                      return 0xffffffff;
                    }
                    cVar3 = pcVar12[1];
                    pcVar12 = pcVar12 + 2;
                    pcVar14[1] = cVar3;
                    pcVar14 = pcVar14 + 2;
                  } while (cVar3 != '\0');
                  return 0xffffffff;
                }
                if (_DAT_01e56418 == 0) {
                  uVar8 = FUN_0047dc30(0x01C03A10,local_4a8);
                  *(uint *)(0x01C775EC + 0x230) = uVar8;
                }
              }
              else {
                iVar4 = FUN_00564bc0(pcVar12,"allowHeroControls",0x11);
                if ((iVar4 == 0) && (((&DAT_005c168c)[(byte)(pcVar12[0x11] + 1)] & 0xe0) == 0)) {
                  local_118 = (char *)FUN_004fe070(pcVar12 + 0x11);
                  pcVar12 = (char *)FUN_004fe140(&local_118,local_b4c);
                  if (pcVar12 != (char *)0x0) goto LAB_0050064d;
                  if (_DAT_01e56418 == 0) {
                    iVar4 = FUN_0047dc30(0x01C03A10,local_b4c);
                    _DAT_01e56c24 = (uint)(iVar4 == 0);
                    *(uint *)(0x01C775EC + 0x238) = _DAT_01e56c24;
                  }
                }
                else {
                  iVar4 = FUN_00564bc0(pcVar12,"allowHeroDamage",0xf);
                  if ((iVar4 == 0) && (((&DAT_005c168c)[(byte)(pcVar12[0xf] + 1)] & 0xe0) == 0)) {
                    local_118 = (char *)FUN_004fe070(pcVar12 + 0xf);
                    pcVar12 = (char *)FUN_004fe140(&local_118,local_ae8);
                    if (pcVar12 != (char *)0x0) goto LAB_0050064d;
                    if (_DAT_01e56418 == 0) {
                      uVar8 = FUN_0047dc30(0x01C03A10,local_ae8);
                      *(uint *)(0x01C775EC + 0x22c) = uVar8;
                    }
                  }
                  else {
                    iVar4 = FUN_00564bc0(pcVar12,"attachActorToPlatform",0x15);
                    if ((iVar4 == 0) && (((&DAT_005c168c)[(byte)(pcVar12[0x15] + 1)] & 0xe0) == 0))
                    {
                      local_118 = (char *)FUN_004fe070(pcVar12 + 0x15);
                      local_10c = -1;
                      FUN_00566b5c(local_118,"(%[^,], %[^)])%n",local_190c,local_d54,
                                   &local_10c);
                      if (local_10c < 2) {
                        FUN_00563c90(&DAT_01e56420,"Error parsing attachActorToPlatform command parms");
                        return 0xffffffff;
                      }
                      local_118 = local_118 + local_10c;
                      FUN_004fe000(local_190c);
                      FUN_004fe000(local_d54);
                      iVar4 = FUN_004fe180(local_d54,_DAT_01e428cc,0x1e42894);
                      if ((iVar4 == 0) ||
                         (iVar9 = FUN_004fe180(local_190c,DAT_00763e80,&DAT_00763e48), iVar9 == 0))
                      goto joined_r0x00500ad6;
                      if (_DAT_01e56418 == 0) {
                        FUN_004f75c0(iVar4,iVar9);
                      }
                    }
                    else {
                      iVar4 = FUN_00564bc0(pcVar12,"beginFadeIn",0xb);
                      if ((iVar4 == 0) && (((&DAT_005c168c)[(byte)(pcVar12[0xb] + 1)] & 0xe0) == 0))
                      {
                        local_118 = (char *)FUN_004fe070(pcVar12 + 0xb);
                        if (_DAT_01e56418 == 0) {
                          FUN_004a37e0(0x01C775EC);
                        }
                      }
                      else {
                        iVar4 = FUN_00564bc0(pcVar12,"beginFadeOut",0xc);
                        if ((iVar4 == 0) &&
                           (((&DAT_005c168c)[(byte)(pcVar12[0xc] + 1)] & 0xe0) == 0)) {
                          local_118 = (char *)FUN_004fe070(pcVar12 + 0xc);
                          if (_DAT_01e56418 == 0) {
                            FUN_004a3820(0x01C775EC);
                          }
                        }
                        else {
                          iVar4 = FUN_00564bc0(pcVar12,"breakPoint",10);
                          if ((iVar4 == 0) &&
                             (((&DAT_005c168c)[(byte)(pcVar12[10] + 1)] & 0xe0) == 0)) {
                            local_118 = (char *)FUN_004fe070(pcVar12 + 10);
                            if (_DAT_01e56418 == 0) {
                              FUN_00563c90(local_958,"Script breakpoint reached at line %d",
                                           local_11c);
                              FUN_0049aa30(0x01C775EC,local_958,0x40a00000);
                              param_1[6] = 2;
                            }
                          }
                          else {
                            iVar4 = FUN_00564bc0(pcVar12,"cancelCameraHold",0x10);
                            if ((iVar4 == 0) &&
                               (((&DAT_005c168c)[(byte)(pcVar12[0x10] + 1)] & 0xe0) == 0)) {
                              local_118 = (char *)FUN_004fe070(pcVar12 + 0x10);
                              if (_DAT_01e56418 == 0) {
                                FUN_005135f0(0x01E57284);
                              }
                            }
                            else {
                              iVar4 = FUN_00564bc0(pcVar12,"cancelWalkTo",0xc);
                              if ((iVar4 == 0) &&
                                 (((&DAT_005c168c)[(byte)(pcVar12[0xc] + 1)] & 0xe0) == 0)) {
                                local_118 = (char *)FUN_004fe070(pcVar12 + 0xc);
                                pcVar12 = (char *)FUN_004fe090(&local_118,local_2334,200);
                                if (pcVar12 != (char *)0x0) {
                                  pcVar14 = &DAT_01e56420;
                                  do {
                                    cVar3 = *pcVar12;
                                    *pcVar14 = cVar3;
                                    if (cVar3 == '\0') {
                                      return 0xffffffff;
                                    }
                                    cVar3 = pcVar12[1];
                                    pcVar12 = pcVar12 + 2;
                                    pcVar14[1] = cVar3;
                                    pcVar14 = pcVar14 + 2;
                                  } while (cVar3 != '\0');
                                  return 0xffffffff;
                                }
                                iVar4 = FUN_00564520(local_2334,&DAT_0058e925);
                                if (iVar4 == 0) {
                                  if (_DAT_01e56418 == 0) {
                                    iVar9 = 0;
                                    for (iVar4 = 0; iVar4 < *(int *)(0x01E57284 + 0x14cd6c);
                                        iVar4 = iVar4 + 1) {
                                      iVar7 = FUN_0040d890(*(uint *)
                                                            (iVar9 + 0x14cd70 + 0x01E57284),
                                                           DAT_00765a98);
                                      if (iVar7 != 0) {
                                        (**(code **)(*(int *)(iVar7 + 0x14c) + 0x128))(iVar7,0,0,0);
                                      }
                                      iVar9 = iVar9 + 4;
                                    }
                                  }
                                }
                                else {
                                  iVar4 = FUN_004fe180(local_2334,DAT_00765a98,&DAT_00765a60);
                                  if (iVar4 == 0) goto joined_r0x00500ad6;
                                  if (_DAT_01e56418 == 0) {
                                    (**(code **)(*(int *)(iVar4 + 0x14c) + 0x128))(iVar4,0,0,0);
                                  }
                                }
                              }
                              else {
                                iVar4 = FUN_00564bc0(pcVar12,"chainToMission",0xe);
                                if ((iVar4 == 0) &&
                                   (((&DAT_005c168c)[(byte)(pcVar12[0xe] + 1)] & 0xe0) == 0)) {
                                  local_118 = (char *)FUN_004fe070(pcVar12 + 0xe);
                                  pcVar12 = (char *)FUN_004fe090(&local_118,local_2e24,200);
                                  if (pcVar12 != (char *)0x0) {
                                    pcVar14 = &DAT_01e56420;
                                    do {
                                      cVar3 = *pcVar12;
                                      *pcVar14 = cVar3;
                                      if (cVar3 == '\0') {
                                        return 0xffffffff;
                                      }
                                      cVar3 = pcVar12[1];
                                      pcVar12 = pcVar12 + 2;
                                      pcVar14[1] = cVar3;
                                      pcVar14 = pcVar14 + 2;
                                    } while (cVar3 != '\0');
                                    return 0xffffffff;
                                  }
                                  FUN_004fe000(local_2e24);
                                  uVar10 = _DAT_01e56418;
                                  if (_DAT_01e56418 == 0) {
                                    FUN_004d9650(0x01CC9450,local_2e24);
                                    *param_1 = 1;
                                    local_124 = uVar10;
                                  }
                                }
                                else {
                                  iVar4 = FUN_00564bc0(pcVar12,"clearActorVariable",0x12);
                                  if ((iVar4 == 0) &&
                                     (((&DAT_005c168c)[(byte)(pcVar12[0x12] + 1)] & 0xe0) == 0)) {
                                    local_118 = (char *)FUN_004fe070(pcVar12 + 0x12);
                                    pcVar12 = (char *)FUN_004fe090(&local_118,local_3658,300);
                                    if (pcVar12 != (char *)0x0) {
LAB_00500e2e:
                                      pcVar14 = &DAT_01e56420;
                                      do {
                                        cVar3 = *pcVar12;
                                        *pcVar14 = cVar3;
                                        if (cVar3 == '\0') {
                                          return 0xffffffff;
                                        }
                                        cVar3 = pcVar12[1];
                                        pcVar12 = pcVar12 + 2;
                                        pcVar14[1] = cVar3;
                                        pcVar14 = pcVar14 + 2;
                                      } while (cVar3 != '\0');
                                      return 0xffffffff;
                                    }
                                    iVar4 = FUN_004fdec0(local_3658);
                                    if (iVar4 == 0) {
                                      return 0xffffffff;
                                    }
                                    if (_DAT_01e56418 == 0) {
                                      FUN_00480950(0x01C03A10,local_3658,0);
                                    }
                                  }
                                  else {
                                    iVar4 = FUN_00564bc0(pcVar12,"dbSay",5);
                                    if ((iVar4 == 0) &&
                                       (((&DAT_005c168c)[(byte)(pcVar12[5] + 1)] & 0xe0) == 0)) {
                                      local_118 = (char *)FUN_004fe070(pcVar12 + 5);
                                      local_108 = -1;
                                      FUN_00566b5c(local_118,"(%[^)])%n",local_570,
                                                   &local_108);
                                      if (local_108 < 3) {
                                        FUN_00563c90(&DAT_01e56420,
                                                     "Error parsing dbSay arguments");
                                        return 0xffffffff;
                                      }
                                      FUN_004fe000(local_570);
                                      local_118 = local_118 + local_108;
                                      iVar4 = FUN_00505180(param_1,local_570);
                                      if (iVar4 < 0) {
                                        local_104 = local_226c;
                                        local_e4 = &DAT_0058e979;
                                        FUN_00563c90(local_226c,
                                                     "[Can't find %s in database]",
                                                     local_570);
                                        FUN_00473cb0(0x1e56c30,local_226c);
                                      }
                                      else {
                                        iVar4 = iVar4 * 0x226 + param_1[8];
                                        local_e4 = (byte *)(iVar4 + 0x78);
                                        local_104 = (byte *)(iVar4 + 0x96);
                                        pcVar14 = local_570;
                                        pcVar12 = (char *)(iVar4 + 0x3c);
                                        do {
                                          cVar3 = *pcVar12;
                                          *pcVar14 = cVar3;
                                          if (cVar3 == '\0') break;
                                          cVar3 = pcVar12[1];
                                          pcVar12 = pcVar12 + 2;
                                          pcVar14[1] = cVar3;
                                          pcVar14 = pcVar14 + 2;
                                        } while (cVar3 != '\0');
                                      }
                                      if ((float)param_1[0x12] < 0.0) {
                                        local_14 = FUN_005049b0(param_1,local_e4,local_570,local_104
                                                               );
                                        param_1[0x12] = local_14;
                                        if ((float)param_1[0x12] < 0.0) {
                                          return 0xffffffff;
                                        }
                                      }
                                      if ((_DAT_01e56418 == 0) &&
                                         (local_124 = FUN_00504b70(param_1,param_1[0x12],param_2),
                                         0 < (int)local_124)) {
                                        FUN_00504bf0(param_1,param_1[1]);
                                      }
                                    }
                                    else {
                                      iVar4 = FUN_00564bc0(pcVar12,"dbStartSay",10);
                                      if ((iVar4 == 0) &&
                                         (((&DAT_005c168c)[(byte)(pcVar12[10] + 1)] & 0xe0) == 0)) {
                                        local_118 = (char *)FUN_004fe070(pcVar12 + 10);
                                        local_fc = -1;
                                        FUN_00566b5c(local_118,"(%[^)])%n",local_444,
                                                     &local_fc);
                                        if (local_fc < 3) {
                                          FUN_00563c90(&DAT_01e56420,
                                                       "Error parsing dbSay arguments");
                                          return 0xffffffff;
                                        }
                                        FUN_004fe000(local_444);
                                        local_118 = local_118 + local_fc;
                                        iVar4 = FUN_00505180(param_1,local_444);
                                        if (iVar4 < 0) {
                                          local_f4 = local_2654;
                                          local_f8 = &DAT_0058e9ca;
                                          FUN_00563c90(local_2654,
                                                       "[Can't find %s in database]",
                                                       local_444);
                                          FUN_00473cb0(0x1e56c30,local_2654);
                                        }
                                        else {
                                          iVar4 = iVar4 * 0x226 + param_1[8];
                                          local_f8 = (byte *)(iVar4 + 0x78);
                                          local_f4 = (byte *)(iVar4 + 0x96);
                                          pcVar14 = local_444;
                                          pcVar12 = (char *)(iVar4 + 0x3c);
                                          do {
                                            cVar3 = *pcVar12;
                                            *pcVar14 = cVar3;
                                            if (cVar3 == '\0') break;
                                            cVar3 = pcVar12[1];
                                            pcVar12 = pcVar12 + 2;
                                            pcVar14[1] = cVar3;
                                            pcVar14 = pcVar14 + 2;
                                          } while (cVar3 != '\0');
                                        }
                                        local_14 = FUN_005049b0(param_1,local_f8,local_444,local_f4)
                                        ;
                                        param_1[0x12] = local_14;
                                        fVar1 = (float)param_1[0x12];
joined_r0x00504194:
                                        if (fVar1 < 0.0) {
                                          return 0xffffffff;
                                        }
                                      }
                                      else {
                                        iVar4 = FUN_00564bc0(pcVar12,"debug",5);
                                        if ((iVar4 == 0) &&
                                           (((&DAT_005c168c)[(byte)(pcVar12[5] + 1)] & 0xe0) == 0))
                                        {
                                          local_118 = (char *)FUN_004fe070(pcVar12 + 5);
                                          pcVar12 = (char *)FUN_004fe090(&local_118,local_3784,300);
                                          if (pcVar12 != (char *)0x0) goto LAB_00500e2e;
                                          if (_DAT_01e56418 == 0) {
                                            FUN_0046fe60(0x01BCD074,
                                                         "Script debug message at line %d:\n%s"
                                                         ,local_11c,local_3784);
                                          }
                                        }
                                        else {
                                          iVar4 = FUN_00564bc0(pcVar12,"dismember",9);
                                          if ((iVar4 == 0) &&
                                             (((&DAT_005c168c)[(byte)(pcVar12[9] + 1)] & 0xe0) == 0)
                                             ) {
                                            local_118 = (char *)FUN_004fe070(pcVar12 + 9);
                                            local_5c = -1;
                                            FUN_00566b5c(local_118,"(%[^,], %[^,)]%n",
                                                         local_2bcc,local_1844,&local_5c);
                                            if (local_5c < 5) {
                                              FUN_00563c90(&DAT_01e56420,
                                                                                                                      
                                                  "Error parsing dismember command parms");
                                              return 0xffffffff;
                                            }
                                            local_118 = local_118 + local_5c;
                                            FUN_004fe000(local_2bcc);
                                            FUN_004fe000(local_1844);
                                            local_f0 = FUN_004fe180(local_2bcc,DAT_00765a98,
                                                                    &DAT_00765a60);
                                            if (local_f0 == 0) goto joined_r0x00500ad6;
                                            iVar4 = FUN_004fe3d0(local_f0,local_1844,local_c8c);
                                            if (iVar4 == 0) {
                                              return 0xffffffff;
                                            }
                                            FUN_0040e160(local_148);
                                            puVar5 = (byte *)0x0;
                                            if (*local_118 == ',') {
                                              local_5c = -1;
                                              FUN_00566b5c(local_118,",%f ,%f ,%f ,%f %n",
                                                           local_148,local_144,local_140,&local_3f80
                                                           ,&local_5c);
                                              if (local_5c < 5) {
                                                FUN_00563c90(&DAT_01e56420,
                                                                                                                          
                                                  "Error parsing dismember command parms");
                                                return 0xffffffff;
                                              }
                                              local_118 = local_118 + local_5c;
                                              if (0.0 < local_3f80) {
                                                local_3f80 = local_3f80 * (float)_DAT_0058fa7a *
                                                             (float)_DAT_0058fa82;
                                                local_14 = FUN_0040dda0(-local_3f80,local_3f80);
                                                local_14 = FUN_0040dda0(-local_3f80,local_3f80,0,
                                                                        local_14);
                                                uVar8 = FUN_00505880(local_154,local_14);
                                                FUN_0044d7a0(local_188,uVar8);
                                                uVar8 = FUN_0044da40(local_188,local_130,local_148);
                                                FUN_0040e180(local_148,uVar8);
                                              }
                                              puVar5 = local_148;
                                            }
                                            if (*local_118 != ')') {
                                              FUN_00563c90(&DAT_01e56420,
                                                                                                                      
                                                  "Error parsing dismember command parms near '%s'",
                                                  local_118);
                                              return 0xffffffff;
                                            }
                                            local_118 = local_118 + 1;
                                            if (_DAT_01e56418 == 0) {
                                              local_ec = FUN_00415b30(local_f0 + 0x20,
                                                                      local_f0 + 0x30,puVar5,
                                                                      local_f0,0,0,
                                                                      *(uint *)
                                                                       (local_f0 + 0x2608));
                                              iVar9 = 0;
                                              iVar4 = 0;
                                              do {
                                                if (*(int *)((int)local_c8c + iVar9) != 0) {
                                                  FUN_00427eb0(local_f0,local_ec,iVar4,0);
                                                }
                                                iVar4 = iVar4 + 1;
                                                iVar9 = iVar9 + 4;
                                              } while (iVar4 < 0x1e);
                                              FUN_00416d40(local_ec);
                                            }
                                          }
                                          else {
                                            iVar4 = FUN_00564bc0(pcVar12,"display",7);
                                            if ((iVar4 == 0) &&
                                               (((&DAT_005c168c)[(byte)(pcVar12[7] + 1)] & 0xe0) ==
                                                0)) {
                                              local_118 = (char *)FUN_004fe070(pcVar12 + 7);
                                              iVar4 = FUN_004fe090(&local_118,param_1 + 0x13,0x400);
                                              if (iVar4 != 0) {
                                                FUN_00563c90(&DAT_01e56420,
                                                                                                                          
                                                  "Error parsing message text on display statament: %s",iVar4)
                                                ;
                                                return 0xffffffff;
                                              }
                                            }
                                            else {
                                              iVar4 = FUN_00564bc0(pcVar12,&DAT_0058eaf8,4);
                                              if ((iVar4 == 0) &&
                                                 (((&DAT_005c168c)[(byte)(pcVar12[4] + 1)] & 0xe0)
                                                  == 0)) {
                                                local_118 = (char *)FUN_004fe070(pcVar12 + 4);
                                                iVar4 = FUN_00504c70(param_1,param_1[0x10],1);
                                                if (iVar4 < 0) {
                                                  FUN_00563c90(&DAT_01e56420,
                                                                                                                              
                                                  "Can't skip next command after else statement on line %d",
                                                  local_11c);
                                                  return 0xffffffff;
                                                }
                                                param_1[0x10] = iVar4;
                                              }
                                              else {
                                                iVar4 = FUN_00564bc0(pcVar12,"enableCamera"
                                                                     ,0xc);
                                                if ((iVar4 == 0) &&
                                                   (((&DAT_005c168c)[(byte)(pcVar12[0xc] + 1)] &
                                                    0xe0) == 0)) {
                                                  local_118 = (char *)FUN_004fe070(pcVar12 + 0xc);
                                                  local_48 = -1;
                                                  FUN_00566b5c(local_118,"(%[^,], %[^)])%n"
                                                               ,local_307c,local_2d5c,&local_48);
                                                  if (local_48 < 3) {
                                                    FUN_00563c90(&DAT_01e56420,
                                                                                                                                  
                                                  "Error parsing enableCamera parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_48;
                                                  FUN_004fe000(local_307c);
                                                  FUN_004fe000(local_2d5c);
                                                  iVar4 = FUN_005090a0(0x01E57284,local_307c);
                                                  if (iVar4 < 0) {
                                                    FUN_00563c90(&DAT_01e56420,
                                                                                                                                  
                                                  "Camera \"%s\" does not exist.",local_307c)
                                                  ;
                                                  return 0xffffffff;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    uVar8 = FUN_0047dc30(0x01C03A10,local_2d5c);
                                                    FUN_0050e550(0x01E57284,iVar4,uVar8);
                                                  }
                                                  else {
                                                    pcVar12 = (char *)FUN_0047dc90(0x01C03A10,
                                                                                   local_2d5c);
                                                    if (pcVar12 != (char *)0x0) {
                                                      pcVar14 = &DAT_01e56420;
                                                      do {
                                                        cVar3 = *pcVar12;
                                                        *pcVar14 = cVar3;
                                                        if (cVar3 == '\0') {
                                                          return 0xffffffff;
                                                        }
                                                        cVar3 = pcVar12[1];
                                                        pcVar12 = pcVar12 + 2;
                                                        pcVar14[1] = cVar3;
                                                        pcVar14 = pcVar14 + 2;
                                                      } while (cVar3 != '\0');
                                                      return 0xffffffff;
                                                    }
                                                  }
                                                }
                                                else {
                                                  iVar4 = FUN_00564bc0(pcVar12,
                                                  "enableCameraGroup",0x11);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[0x11] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 0x11)
                                                    ;
                                                    local_44 = -1;
                                                    FUN_00566b5c(local_118,"(%d , %[^)])%n"
                                                                 ,&local_a8,local_1dbc,&local_44);
                                                    if (local_44 < 3) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing enableCameraGroup parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_44;
                                                  FUN_004fe000(local_1dbc);
                                                  if (_DAT_01e56418 == 0) {
                                                    uVar8 = FUN_0047dc30(0x01C03A10,local_1dbc);
                                                    FUN_0050e580(0x01E57284,local_a8,uVar8);
                                                  }
                                                  else {
                                                    pcVar12 = (char *)FUN_0047dc90(0x01C03A10,
                                                                                   local_1dbc);
                                                    if (pcVar12 != (char *)0x0) {
LAB_00501802:
                                                      pcVar14 = &DAT_01e56420;
                                                      do {
                                                        cVar3 = *pcVar12;
                                                        *pcVar14 = cVar3;
                                                        if (cVar3 == '\0') {
                                                          return 0xffffffff;
                                                        }
                                                        cVar3 = pcVar12[1];
                                                        pcVar12 = pcVar12 + 2;
                                                        pcVar14[1] = cVar3;
                                                        pcVar14 = pcVar14 + 2;
                                                      } while (cVar3 != '\0');
                                                      return 0xffffffff;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "enableHealthBar",0xf);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[0xf] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 0xf);
                                                    local_dc = -1;
                                                    FUN_00566b5c(local_118,
                                                                 "(%[^,], %[^)])%n",
                                                                 local_32d4,local_1f4c,&local_dc);
                                                    if (local_dc < 3) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing enableHealthBar parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_dc;
                                                  FUN_004fe000(local_32d4);
                                                  FUN_004fe000(local_1f4c);
                                                  iVar4 = FUN_004fe180(local_32d4,DAT_00765a98,
                                                                       &DAT_00765a60);
                                                  if (iVar4 == 0) goto joined_r0x00500ad6;
                                                  iVar9 = FUN_00564520(local_1f4c,"false");
                                                  uVar8 = 0;
                                                  if (iVar9 != 0) {
                                                    iVar9 = FUN_00564520(local_1f4c,&DAT_0058ec22);
                                                    if (iVar9 == 0) {
                                                      uVar8 = 1;
                                                    }
                                                    else {
                                                      iVar9 = FUN_00564520(local_1f4c,
                                                                           "always");
                                                      if (iVar9 != 0) {
                                                        FUN_00563c90(&DAT_01e56420,
                                                                                                                                          
                                                  "Invalid health bar mode '%s'",local_1f4c
                                                  );
                                                  return 0xffffffff;
                                                  }
                                                  uVar8 = 2;
                                                  }
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    *(uint *)(iVar4 + 0x243c) = uVar8;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,&DAT_0058ec4b,3);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar12[3] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = (char *)FUN_004fe070(pcVar12 + 3);
                                                      if (_DAT_01e56418 == 0) {
                                                        local_124 = _DAT_01e56418;
                                                        *param_1 = 1;
                                                      }
                                                    }
                                                    else {
                                                      iVar4 = FUN_00564bc0(pcVar12,"fadeIn"
                                                                           ,6);
                                                      if ((iVar4 == 0) &&
                                                         (((&DAT_005c168c)[(byte)(pcVar12[6] + 1)] &
                                                          0xe0) == 0)) {
                                                        local_118 = (char *)FUN_004fe070(pcVar12 + 6
                                                                                        );
                                                        if (_DAT_01e56418 == 0) {
                                                          local_124 = _DAT_01e56418;
                                                          if (0.0 <= (float)param_1[0x11]) {
                                                            iVar4 = FUN_004a3a50(0x01C775EC);
                                                            if (iVar4 != 0) {
                                                              local_124 = 1;
                                                              *(uint *)(0x01C775EC + 0x22c)
                                                                   = 1;
                                                            }
                                                          }
                                                          else {
                                                            FUN_004a37e0(0x01C775EC);
                                                            param_1[0x11] = 0x3f800000;
                                                          }
                                                        }
                                                      }
                                                      else {
                                                        iVar4 = FUN_00564bc0(pcVar12,
                                                  "fadeOut",7);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[7] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 7);
                                                    uVar10 = _DAT_01e56418;
                                                    iVar4 = 0x01C775EC;
                                                    if (_DAT_01e56418 == 0) {
                                                      *(uint *)(0x01C775EC + 0x22c) = 0;
                                                      local_124 = uVar10;
                                                      if (0.0 <= (float)param_1[0x11]) {
                                                        iVar4 = FUN_004a3a50(iVar4);
                                                        if (iVar4 != 0) {
                                                          local_124 = 1;
                                                        }
                                                      }
                                                      else {
                                                        FUN_004a3820(iVar4);
                                                        param_1[0x11] = 0x3f800000;
                                                      }
                                                    }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,"gesture",
                                                                         7);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar12[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = (char *)FUN_004fe070(pcVar12 + 7);
                                                      local_d8 = -1;
                                                      FUN_00566b5c(local_118,
                                                                   "(%[^,], %[^)])%n",
                                                                   local_1a9c,local_19d4,&local_d8);
                                                      if (local_d8 < 5) {
                                                        FUN_00563c90(&DAT_01e56420,
                                                                                                                                          
                                                  "Error parsing gesture command parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_d8;
                                                  FUN_004fe000(local_1a9c);
                                                  FUN_004fe000(local_19d4);
                                                  iVar4 = FUN_004fe180(local_1a9c,DAT_00765a98,
                                                                       &DAT_00765a60);
                                                  if (iVar4 == 0) goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                    uVar10 = FUN_00429520(iVar4,local_19d4);
                                                  }
                                                  else {
                                                    uVar8 = FUN_004e1890(iVar4 + 0x150,local_19d4,0)
                                                    ;
                                                    iVar9 = FUN_004e1010(uVar8);
                                                    uVar10 = (uint)(-1 < iVar9);
                                                  }
                                                  if (uVar10 == 0) {
                                                    uVar8 = FUN_00423d30(iVar4 + 0x150);
                                                    FUN_00563c90(&DAT_01e56420,
                                                                                                                                  
                                                  "Gesture name %s is not valid for actor %s, model %s",
                                                  local_19d4,local_1a9c,uVar8);
                                                  return 0xffffffff;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "getIniInt",9);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[9] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 9);
                                                    local_d4 = -1;
                                                    FUN_00566b5c(local_118,
                                                                 "(%[^,], %[^,)] )%n",
                                                                 local_145c,local_1e84,&local_d4);
                                                    if (local_d4 < 5) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing getIniInt command parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_d4;
                                                  FUN_004fe000(local_145c);
                                                  FUN_004fe000(local_1e84);
                                                  if (_DAT_01e56418 == 0) {
                                                    FUN_004bd860(local_3d6c,
                                                                 "system\\nocturne.ini",
                                                                 &DAT_0058ed12);
                                                    local_d0 = FUN_004807e0(0x01C03A10,local_1e84)
                                                    ;
                                                    FUN_004bda20(local_3d6c,local_145c,&local_d0);
                                                    FUN_004806d0(0x01C03A10,local_1e84,local_d0);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "getTriggerActor",0xf);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[0xf] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 0xf);
                                                    local_c8 = -1;
                                                    FUN_00566b5c(local_118,
                                                                 "(%[^,], %[^)])%n",
                                                                 local_16b4,local_1b64,&local_c8);
                                                    if (local_c8 < 5) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing getTriggerActor command parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_c8;
                                                  FUN_004fe000(local_16b4);
                                                  FUN_004fe000(local_1b64);
                                                  iVar4 = FUN_004fdec0(local_16b4);
                                                  if (iVar4 == 0) {
                                                    return 0xffffffff;
                                                  }
                                                  iVar4 = FUN_004fe180(local_1b64,_DAT_02dd10bc,
                                                                       0x2dd1084);
                                                  if (iVar4 == 0) goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                    FUN_00480950(0x01C03A10,local_16b4,
                                                                 *(uint *)(iVar4 + 0x2f4));
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,"gosub",5)
                                                    ;
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar12[5] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = (char *)FUN_004fe070(pcVar12 + 5);
                                                      iVar4 = FUN_00504c10(param_1,local_118);
                                                      if (iVar4 < 0) {
                                                        dVar2 = __BITCAST_DOUBLE(CONCAT44(local_11c,local_118
                                                                                ));
                                                        pcVar12 = 
                                                  "Undefined label %s used in gosub statement on line %d";
LAB_004ff42f:
                                                  FUN_00563c90(&DAT_01e56420,pcVar12,dVar2);
                                                  return 0xffffffff;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    if (7 < (int)param_1[0x115]) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Call stack overflow detected on script line %d.",
                                                  local_11c);
                                                  return 0xffffffff;
                                                  }
                                                  param_1[param_1[0x115] + 0x116] = param_1[0x10];
                                                  param_1[0x10] = iVar4;
                                                  param_1[0x115] = param_1[0x115] + 1;
                                                  local_118 = &DAT_0058ede4;
                                                  }
                                                  else {
                                                    local_118 = &DAT_0058ede4;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,&DAT_0058ede5,4);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar12[4] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = (char *)FUN_004fe070(pcVar12 + 4);
                                                      iVar4 = FUN_00504c10(param_1,local_118);
                                                      if (iVar4 < 0) {
                                                        dVar2 = __BITCAST_DOUBLE(CONCAT44(local_11c,local_118
                                                                                ));
                                                        pcVar12 = 
                                                  "Undefined label %s used in goto statement on line %d";
                                                  goto LAB_004ff42f;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    param_1[0x10] = iVar4;
                                                    local_118 = &DAT_0058ee1f;
                                                  }
                                                  else {
                                                    local_118 = &DAT_0058ee1f;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,&DAT_0058ee20,4);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar12[4] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = (char *)FUN_004fe070(pcVar12 + 4);
                                                      pcVar12 = (char *)FUN_004fe090(&local_118,
                                                                                     local_3400,300)
                                                      ;
                                                      if (pcVar12 != (char *)0x0) goto LAB_00501802;
                                                      if (_DAT_01e56418 == 0) {
                                                        FUN_0046fcd0(0x01BCD074,
                                                                                                                                          
                                                  "Script GTFO at line %d:\n%s\nTerminating mission.",
                                                  local_11c,local_3400);
                                                  *param_1 = 1;
                                                  local_124 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "holsterWeapon",0xd);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 0xd);
                                                    local_c4 = 0xffffffff;
                                                    FUN_00566b5c(local_118,"(%[^,)]%n",
                                                                 local_1524,&local_c4);
                                                    if ((int)local_c4 < 2) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing holsterWeapon command parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_c4;
                                                  FUN_004fe000(local_1524);
                                                  local_c0 = FUN_004fe180(local_1524,_DAT_01cae124,
                                                                          0x1cae0ec);
                                                  if (local_c0 == 0) goto joined_r0x00500ad6;
                                                  local_bc = 1;
                                                  if (*local_118 == ',') {
                                                    local_118 = local_118 + 1;
                                                    uVar10 = 0xffffffff;
                                                    pcVar12 = local_118;
                                                    do {
                                                      if (uVar10 == 0) break;
                                                      uVar10 = uVar10 - 1;
                                                      cVar3 = *pcVar12;
                                                      pcVar12 = pcVar12 + (uint)bVar15 * -2 + 1;
                                                    } while (cVar3 != '\0');
                                                    uVar10 = ~uVar10 - 2;
                                                    local_c4 = uVar10;
                                                    if ((int)uVar10 < 1) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing holsterWeapon command parms");
                                                  return 0xffffffff;
                                                  }
                                                  pcVar12 = local_118;
                                                  pcVar14 = acStack_fad + 1;
                                                  for (uVar11 = uVar10 >> 2; uVar11 != 0;
                                                      uVar11 = uVar11 - 1) {
                                                    *(uint *)pcVar14 = *(uint *)pcVar12;
                                                    pcVar12 = pcVar12 + (uint)bVar15 * -8 + 4;
                                                    pcVar14 = pcVar14 + (uint)bVar15 * -8 + 4;
                                                  }
                                                  for (uVar10 = uVar10 & 3; uVar10 != 0;
                                                      uVar10 = uVar10 - 1) {
                                                    *pcVar14 = *pcVar12;
                                                    pcVar12 = pcVar12 + (uint)bVar15 * -2 + 1;
                                                    pcVar14 = pcVar14 + (uint)bVar15 * -2 + 1;
                                                  }
                                                  pcVar12 = local_118 + local_c4;
                                                  acStack_fad[local_c4 + 1] = '\0';
                                                  local_118 = pcVar12;
                                                  if (_DAT_01e56418 == 0) {
                                                    local_bc = FUN_0047dc30(0x01C03A10,
                                                                            acStack_fad + 1);
                                                  }
                                                  else {
                                                    pcVar12 = (char *)FUN_0047dc90(0x01C03A10,
                                                                                   acStack_fad + 1);
                                                    if (pcVar12 != (char *)0x0) goto LAB_005021b8;
                                                  }
                                                  }
                                                  if (*local_118 != ')') {
                                                    FUN_00563c90(&DAT_01e56420,
                                                                                                                                  
                                                  "Missing closing ')' in holsterWeapon command");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + 1;
                                                  if (_DAT_01e56418 == 0) {
                                                    (**(code **)(*(int *)(local_c0 + 0x14c) + 0x13c)
                                                    )(local_c0,local_bc == 0);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,&DAT_0058eeee,4);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar12[4] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = (char *)FUN_004fe070(pcVar12 + 4);
                                                      local_114 = param_1[0x10];
                                                      local_124 = 0;
                                                    }
                                                    else {
                                                      iVar4 = FUN_00564bc0(pcVar12,&DAT_0058eef3,2);
                                                      if ((iVar4 == 0) &&
                                                         (((&DAT_005c168c)[(byte)(pcVar12[2] + 1)] &
                                                          0xe0) == 0)) {
                                                        local_118 = (char *)FUN_004fe070(pcVar12 + 2
                                                                                        );
                                                        pcVar12 = (char *)FUN_004fe140(&local_118,
                                                                                       local_8f4);
                                                        if (pcVar12 != (char *)0x0)
                                                        goto LAB_005021b8;
                                                        if ((_DAT_01e56418 == 0) &&
                                                           (iVar4 = FUN_0047dc30(0x01C03A10,
                                                                                 local_8f4),
                                                           iVar4 == 0)) {
                                                          iVar4 = FUN_00504c70(param_1,param_1[0x10]
                                                                               ,0);
                                                          if (iVar4 < 0) {
                                                            FUN_00563c90(&DAT_01e56420,
                                                                                                                                                  
                                                  "Can't skip next command after if statement on line %d",
                                                  local_11c);
                                                  return 0xffffffff;
                                                  }
                                                  iVar9 = FUN_00564bc0(*(uint *)
                                                                        (param_1[0xb] + 4 +
                                                                        iVar4 * 8),&DAT_0058ef2c,4);
                                                  if (iVar9 == 0) {
                                                    iVar4 = iVar4 + 1;
                                                  }
                                                  param_1[0x10] = iVar4;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "finishedAct",0xb);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 0xb);
                                                    local_18 = -1;
                                                    FUN_00566b5c(local_118," ( )%n",
                                                                 &local_18);
                                                    uVar10 = _DAT_01e56418;
                                                    iVar4 = 0x01C775EC;
                                                    if (local_18 < 2) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing finishedAct command");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_18;
                                                  if (_DAT_01e56418 == 0) {
                                                    *param_1 = 1;
                                                    local_124 = uVar10;
                                                    *(uint *)(iVar4 + 600) = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "letterbox",9);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[9] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 9);
                                                    pcVar12 = (char *)FUN_004fe090(&local_118,
                                                                                   local_890,100);
                                                    if (pcVar12 != (char *)0x0) {
LAB_005021b8:
                                                      pcVar14 = &DAT_01e56420;
                                                      do {
                                                        cVar3 = *pcVar12;
                                                        *pcVar14 = cVar3;
                                                        if (cVar3 == '\0') {
                                                          return 0xffffffff;
                                                        }
                                                        cVar3 = pcVar12[1];
                                                        pcVar12 = pcVar12 + 2;
                                                        pcVar14[1] = cVar3;
                                                        pcVar14 = pcVar14 + 2;
                                                      } while (cVar3 != '\0');
                                                      return 0xffffffff;
                                                    }
                                                    iVar9 = -1;
                                                    iVar4 = FUN_00564520(local_890,"false")
                                                    ;
                                                    if (iVar4 == 0) {
                                                      iVar9 = 0;
                                                    }
                                                    iVar4 = FUN_00564520(local_890,&DAT_0058ef76);
                                                    if (iVar4 == 0) {
                                                      iVar9 = 1;
                                                    }
                                                    iVar7 = FUN_00564520(local_890,"bottom"
                                                                        );
                                                    iVar4 = 0x01C775EC;
                                                    if (iVar7 == 0) {
                                                      iVar9 = 2;
                                                    }
                                                    else if (iVar9 < 0) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Invalid letterBox mode: %s",local_890);
                                                  return 0xffffffff;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    *(int *)(0x01C775EC + 0x228) = iVar9;
                                                    *(uint *)(iVar4 + 0x22c) = (uint)(iVar9 == 0);
                                                    *(uint *)(iVar4 + 0x230) =
                                                         (uint)(*(int *)(iVar4 + 0x228) == 0);
                                                    *(uint *)(iVar4 + 0x238) =
                                                         *(uint *)(iVar4 + 0x228);
                                                    param_1[0x114] = 0xffffffff;
                                                    iVar9 = 0x01E57284;
                                                    _DAT_01e56c24 = 1;
                                                    if ((*(int *)(iVar4 + 0x240) != 0) &&
                                                       (*(int *)(iVar4 + 0x228) != 0)) {
                                                      *(uint *)(iVar4 + 0x240) = 0;
                                                      iVar9 = FUN_00481920(iVar9);
                                                      FUN_005125a0(0x01E57284,
                                                                   *(uint *)
                                                                    (0x01E56DA0 + 0xc),1);
                                                      iVar4 = 0x01E57284;
                                                      *(uint *)(0x01E56DA0 + 0x10) = 0;
                                                      iVar4 = FUN_00481920(iVar4);
                                                      if (iVar9 == iVar4) {
                                                        FUN_005088f0(0x01E57284,iVar4);
                                                      }
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "lockFocusActor",0xe);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[0xe] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 0xe);
                                                    pcVar12 = (char *)FUN_004fe140(&local_118,
                                                                                   local_2b4);
                                                    if (pcVar12 != (char *)0x0) goto LAB_005021b8;
                                                    if (_DAT_01e56418 == 0) {
                                                      uVar8 = FUN_0047dc30(0x01C03A10,local_2b4);
                                                      param_1[5] = uVar8;
                                                    }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,"lookAt",6
                                                                        );
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar12[6] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = (char *)FUN_004fe070(pcVar12 + 6);
                                                      local_b4 = -1;
                                                      FUN_00566b5c(local_118,"(%[^,)]%n",
                                                                   local_1394,&local_b4);
                                                      if (local_b4 < 2) {
                                                        FUN_00563c90(&DAT_01e56420,
                                                                                                                                          
                                                  "Error parsing lookAt command parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_b4;
                                                  FUN_004fe000(local_1394);
                                                  iVar4 = FUN_004fe180(local_1394,DAT_00765a98,
                                                                       &DAT_00765a60);
                                                  if (iVar4 == 0) {
joined_r0x00500ad6:
                                                    if (_DAT_01e56c2c == 0) {
                                                      return 0xffffffff;
                                                    }
                                                    goto LAB_004ff384;
                                                  }
                                                  iVar9 = 0;
                                                  if (*local_118 == ',') {
                                                    local_b4 = -1;
                                                    FUN_00566b5c(local_118,", %[^)]%n",
                                                                 local_2fb4,&local_b4);
                                                    if (local_b4 < 3) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing lookAt command parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_b4;
                                                  FUN_004fe000(local_2fb4);
                                                  iVar9 = FUN_004fe180(local_2fb4,DAT_00763e80,
                                                                       &DAT_00763e48);
                                                  if (iVar9 == 0) goto joined_r0x00500ad6;
                                                  }
                                                  if (*local_118 != ')') {
                                                    FUN_00563c90(&DAT_01e56420,
                                                                                                                                  
                                                  "Missing closing ')' in lookAt command");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + 1;
                                                  if (_DAT_01e56418 == 0) {
                                                    FUN_00429f60(iVar4,iVar9);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "movePlatform",0xc);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 0xc);
                                                    local_b0 = -1;
                                                    FUN_00566b5c(local_118,
                                                                 "(%[^,], %f , %f )%n",
                                                                 local_177c,&local_3f70,&local_3f7c,
                                                                 &local_b0);
                                                    if (local_b0 < 5) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing movePlatform command parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_b0;
                                                  FUN_004fe000(local_177c);
                                                  iVar4 = FUN_004fe180(local_177c,_DAT_01e428cc,
                                                                       0x1e42894);
                                                  if (iVar4 == 0) goto joined_r0x00500ad6;
                                                  if ((local_3f70 < 0.0) || (1.0 < local_3f70)) {
                                                    FUN_00563c90(&DAT_01e56420,
                                                                                                                                  
                                                  "Paramater must be in range 0.0 .. 1.0");
                                                  return 0xffffffff;
                                                  }
                                                  dVar2 = (double)local_3f7c;
                                                  if (dVar2 <= 0.0) {
                                                    pcVar12 = "Invalid movement rate %f";
                                                    goto LAB_004ff42f;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    FUN_004f6bd0(iVar4,local_3f70,local_3f7c);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,"openDoor"
                                                                         ,8);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar12[8] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = (char *)FUN_004fe070(pcVar12 + 8);
                                                      local_ac = -1;
                                                      FUN_00566b5c(local_118,
                                                                   "(%[^,], %[^)])%n",
                                                                   local_28ac,local_3144,&local_ac);
                                                      if (local_ac < 5) {
                                                        FUN_00563c90(&DAT_01e56420,
                                                                                                                                          
                                                  "Error parsing openDoor command parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_ac;
                                                  FUN_004fe000(local_3144);
                                                  FUN_004fe000(local_28ac);
                                                  iVar4 = FUN_004fe180(local_3144,_DAT_01af4ed4,
                                                                       0x1af4e9c);
                                                  if ((iVar4 == 0) ||
                                                     (iVar9 = FUN_004fe180(local_28ac,DAT_00765a98,
                                                                           &DAT_00765a60),
                                                     iVar9 == 0)) goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                    local_124 = _DAT_01e56418;
                                                    if (0.0 <= (float)param_1[0x11]) {
                                                      iVar4 = (**(code **)(*(int *)(iVar9 + 0x14c) +
                                                                          0x11c))(iVar9);
                                                      if (iVar4 != 0) {
                                                        local_124 = 1;
                                                      }
                                                    }
                                                    else {
                                                      (**(code **)(*(int *)(iVar9 + 0x14c) + 0x114))
                                                                (iVar9,iVar4);
                                                      param_1[0x11] = 0x3f800000;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "pressButton",0xb);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 0xb);
                                                    local_a4 = -1;
                                                    FUN_00566b5c(local_118,
                                                                 "( %[^,], %[^)])%n",
                                                                 local_250,local_50c,&local_a4);
                                                    if (local_a4 < 5) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing pressButton() command parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_a4;
                                                  FUN_004fe000(local_250);
                                                  FUN_004fe000(local_50c);
                                                  iVar4 = FUN_004fe180(local_250,_DAT_01cae124,
                                                                       0x1cae0ec);
                                                  if (iVar4 == 0) goto joined_r0x00500ad6;
                                                  puVar6 = (uint *)
                                                           FUN_004fe300(iVar4 + 0xbc94,local_50c);
                                                  if (puVar6 == (uint *)0x0) {
                                                    FUN_00563c90(&DAT_01e56420,
                                                                 "Invalid button name: %s",
                                                                 local_50c);
                                                    return 0xffffffff;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    if (_DAT_01e56c24 != 0) {
                                                      FUN_0049f8c0(0x01C775EC);
                                                      _DAT_01e56c24 = 0;
                                                    }
                                                    *puVar6 = 1;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,"raise",5)
                                                    ;
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar12[5] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = (char *)FUN_004fe070(pcVar12 + 5);
                                                      iVar4 = FUN_004fe090(&local_118,local_1ec,100)
                                                      ;
                                                      if (iVar4 != 0) {
                                                        FUN_00563c90(&DAT_01e56420,
                                                                                                                                          
                                                  "Error parsing event expression on raise statament: %s",iVar4)
                                                  ;
                                                  return 0xffffffff;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    FUN_0047ab70(0x01C03A10,local_1ec);
                                                  }
                                                  else {
                                                    pcVar12 = (char *)FUN_0047dcd0(0x01C03A10,
                                                                                   local_1ec);
                                                    if (pcVar12 != (char *)0x0) {
                                                      pcVar14 = &DAT_01e56420;
                                                      do {
                                                        cVar3 = *pcVar12;
                                                        *pcVar14 = cVar3;
                                                        if (cVar3 == '\0') {
                                                          return 0xffffffff;
                                                        }
                                                        cVar3 = pcVar12[1];
                                                        pcVar12 = pcVar12 + 2;
                                                        pcVar14[1] = cVar3;
                                                        pcVar14 = pcVar14 + 2;
                                                      } while (cVar3 != '\0');
                                                      return 0xffffffff;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "releaseButton",0xd);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 0xd);
                                                    local_9c = -1;
                                                    FUN_00566b5c(local_118,
                                                                 "( %[^,], %[^)])%n",
                                                                 local_bb0,local_c14,&local_9c);
                                                    if (local_9c < 5) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing releaseButton() command parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_9c;
                                                  FUN_004fe000(local_bb0);
                                                  FUN_004fe000(local_c14);
                                                  iVar4 = FUN_004fe180(local_bb0,_DAT_01cae124,
                                                                       0x1cae0ec);
                                                  if (iVar4 == 0) goto joined_r0x00500ad6;
                                                  puVar6 = (uint *)
                                                           FUN_004fe300(iVar4 + 0xbc94,local_c14);
                                                  uVar10 = _DAT_01e56418;
                                                  if (puVar6 == (uint *)0x0) {
                                                    FUN_00563c90(&DAT_01e56420,
                                                                 "Invalid button name: %s",
                                                                 local_c14);
                                                    return 0xffffffff;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    if (_DAT_01e56c24 != 0) {
                                                      FUN_0049f8c0(0x01C775EC);
                                                      _DAT_01e56c24 = uVar10;
                                                    }
                                                    *puVar6 = 0;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "removeAllItemsFromInventory",0x1b);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[0x1b] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 0x1b)
                                                    ;
                                                    local_98 = -1;
                                                    FUN_00566b5c(local_118," ( %[^)])%n",
                                                                 local_271c,&local_98);
                                                    if (local_98 < 3) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing removeAllItemsFromInventory command parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_98;
                                                  FUN_004fe000(local_271c);
                                                  iVar4 = FUN_004fe180(local_271c,_DAT_01cae124,
                                                                       0x1cae0ec);
                                                  if (iVar4 == 0) goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                    FUN_004bef10(iVar4 + 0x1f5a0);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "removeItemFromInventory",0x17);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[0x17] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 0x17)
                                                    ;
                                                    local_94 = -1;
                                                    FUN_00566b5c(local_118,
                                                                 " ( %[^,], %[^)])%n",
                                                                 local_20dc,local_2014,&local_94);
                                                    if (local_94 < 3) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing removeItemFromInventory command parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_94;
                                                  FUN_004fe000(local_20dc);
                                                  FUN_004fe000(local_2014);
                                                  iVar4 = FUN_004fe180(local_20dc,_DAT_01cae124,
                                                                       0x1cae0ec);
                                                  if (iVar4 == 0) goto joined_r0x00500ad6;
                                                  if ((_DAT_01e56418 == 0) &&
                                                     (iVar9 = FUN_004c0710(*(int *)(_DAT_01cae0e8 *
                                                                                    4 + 0x1cae0d8) +
                                                                           0x1f5a0,local_2014),
                                                     iVar9 != 0)) {
                                                    FUN_004c07b0(iVar4 + 0x1f5a0,iVar9,1);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "removeKeys",10);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[10] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 10);
                                                    local_8c = -1;
                                                    FUN_00566b5c(local_118," (%d )%n",
                                                                 &local_90,&local_8c);
                                                    if (local_8c < 3) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing removeKeys() command parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_8c;
                                                  if (*0x01CEA280 != 0) {
                                                    FUN_00563c90(&DAT_01e56420,
                                                                                                                                  
                                                  "Can't use removeKeys command in multi-player");
                                                  return 0xffffffff;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    FUN_004b5cb0(*(uint *)
                                                                  (_DAT_01cae0e8 * 4 + 0x1cae0d8),
                                                                 local_90);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,"return",6
                                                                        );
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar12[6] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = (char *)FUN_004fe070(pcVar12 + 6);
                                                      if (_DAT_01e56418 == 0) {
                                                        iVar4 = param_1[0x115];
                                                        if (iVar4 < 1) {
                                                          FUN_00563c90(&DAT_01e56420,
                                                                                                                                              
                                                  "Return without gosub detected on script line %d.",
                                                  local_11c);
                                                  return 0xffffffff;
                                                  }
                                                  param_1[0x115] = iVar4 + -1;
                                                  param_1[0x10] = param_1[iVar4 + 0x115];
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "rollCredits",0xb);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 0xb);
                                                    local_88 = -1;
                                                    FUN_00566b5c(local_118," ( )%n",
                                                                 &local_88);
                                                    uVar10 = _DAT_01e56418;
                                                    iVar4 = 0x01C775EC;
                                                    if (local_88 < 2) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing rollCredits command");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_88;
                                                  if (_DAT_01e56418 == 0) {
                                                    *param_1 = 1;
                                                    local_124 = uVar10;
                                                    *(uint *)(iVar4 + 600) = 2;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,&DAT_0058f391,3);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar12[3] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = (char *)FUN_004fe070(pcVar12 + 3);
                                                      pcVar12 = (char *)FUN_004fe090(&local_118,
                                                                                     local_3978,500)
                                                      ;
                                                      if (pcVar12 != (char *)0x0) {
LAB_00503106:
                                                        pcVar14 = &DAT_01e56420;
                                                        do {
                                                          cVar3 = *pcVar12;
                                                          *pcVar14 = cVar3;
                                                          if (cVar3 == '\0') {
                                                            return 0xffffffff;
                                                          }
                                                          cVar3 = pcVar12[1];
                                                          pcVar12 = pcVar12 + 2;
                                                          pcVar14[1] = cVar3;
                                                          pcVar14 = pcVar14 + 2;
                                                        } while (cVar3 != '\0');
                                                        return 0xffffffff;
                                                      }
                                                      local_84 = -1;
                                                      FUN_00566b5c(local_3978,
                                                                   "%[^,], %[^,], %n",
                                                                   local_2eec,local_12cc,&local_84);
                                                      if (local_84 < 5) {
                                                        FUN_00563c90(&DAT_01e56420,
                                                                                                                                          
                                                  "Error parsing speaker and wav arguments");
                                                  return 0xffffffff;
                                                  }
                                                  FUN_004fe000(local_2eec);
                                                  FUN_004fe000(local_12cc);
                                                  if ((float)param_1[0x12] < 0.0) {
                                                    uVar8 = FUN_004fe070(local_3978 + local_84);
                                                    local_14 = FUN_005049b0(param_1,local_2eec,
                                                                            local_12cc,uVar8);
                                                    param_1[0x12] = local_14;
                                                    if ((float)param_1[0x12] < 0.0) {
                                                      return 0xffffffff;
                                                    }
                                                  }
                                                  if ((_DAT_01e56418 == 0) &&
                                                     (local_124 = FUN_00504b70(param_1,param_1[0x12]
                                                                               ,param_2),
                                                     0 < (int)local_124)) {
                                                    FUN_00504bf0(param_1,param_1[1]);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "selectWeapon",0xc);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 0xc);
                                                    local_80 = -1;
                                                    FUN_00566b5c(local_118,
                                                                 " (%[^,], %[^)])%n",
                                                                 local_700,local_69c,&local_80);
                                                    if (local_80 < 5) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing selectWeapon parameters.");
                                                  return 0xffffffff;
                                                  }
                                                  FUN_004fe000(local_700);
                                                  FUN_004fe000(local_69c);
                                                  local_118 = local_118 + local_80;
                                                  iVar4 = FUN_004fe180(local_700,_DAT_01cae124,
                                                                       0x1cae0ec);
                                                  if (iVar4 == 0) goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                    iVar4 = iVar4 + 0x1f5a0;
                                                    local_7c = _DAT_01e56418;
                                                    iVar9 = FUN_0049a160(iVar4);
                                                    local_78 = iVar9;
                                                    if (iVar9 != 0) {
                                                      do {
                                                        if (iVar9 == 0) {
                                                          _DAT_01cc4800 =
                                                               "..\\core\\script.cpp";
                                                          _DAT_01cc4804 = 0xad9;
                                                          FUN_004c8440(
                                                  "script selectWeapon() command - hell froze.");
                                                  }
                                                  iVar9 = FUN_0040d7e0(iVar9,local_69c);
                                                  if (iVar9 != 0) goto LAB_004ff36b;
                                                  FUN_004c0850(iVar4,0,5,1);
                                                  iVar9 = FUN_0049a160(iVar4);
                                                  } while (iVar9 != local_78);
                                                  }
                                                  if (local_7c == 0) {
                                                    FUN_0043ac60(PTR_DAT_005ad350,
                                                                                                                                  
                                                  "%s can't selectWeapon(%s)\n",local_700,
                                                  local_69c);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "setActorVariable",0x10);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[0x10] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 0x10)
                                                    ;
                                                    local_74 = -1;
                                                    FUN_00566b5c(local_118,
                                                                 "(%[^,], %[^)])%n",
                                                                 local_258c,local_24c4,&local_74);
                                                    if (local_74 < 5) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing setActorVariable command parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_74;
                                                  FUN_004fe000(local_258c);
                                                  FUN_004fe000(local_24c4);
                                                  iVar4 = FUN_004fdec0(local_258c);
                                                  if (iVar4 == 0) {
                                                    return 0xffffffff;
                                                  }
                                                  iVar4 = FUN_004fe180(local_24c4,DAT_00763e80,
                                                                       &DAT_00763e48);
                                                  if (_DAT_01e56418 == 0) {
                                                    FUN_00480950(0x01C03A10,local_258c,iVar4);
                                                  }
                                                  else if ((iVar4 == 0) && (_DAT_01e56c2c == 0)) {
                                                    return 0xffffffff;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "setAmbientSound",0xf);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[0xf] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 0xf);
                                                    pcVar12 = (char *)FUN_004fe090(&local_118,
                                                                                   local_37c,100);
                                                    if (pcVar12 != (char *)0x0) goto LAB_00503106;
                                                    if (_DAT_01e56418 == 0) {
                                                      FUN_0052e9d0(0x02DC9450,local_37c);
                                                    }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "setCameraGroup",0xe);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[0xe] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 0xe);
                                                    local_6c = -1;
                                                    FUN_00566b5c(local_118,"(%[^,], %d)%n",
                                                                 local_2b04,&local_70,&local_6c);
                                                    if (local_6c < 3) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing setCameragroup parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_6c;
                                                  FUN_004fe000(local_2b04);
                                                  iVar4 = FUN_005090a0(0x01E57284,local_2b04);
                                                  if (iVar4 < 0) {
                                                    FUN_00563c90(&DAT_01e56420,
                                                                                                                                  
                                                  "Camera \"%s\" does not exist.",local_2b04)
                                                  ;
                                                  return 0xffffffff;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    *(uint *)
                                                     (0x01E57284 + iVar4 * 0x1a0 + 0x14c) =
                                                         local_70;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "setCharacterHealth",0x12);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[0x12] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 0x12)
                                                    ;
                                                    local_64 = -1;
                                                    FUN_00566b5c(local_118,"(%[^,], %f)%n",
                                                                 local_23fc,&local_68,&local_64);
                                                    if (local_64 < 3) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing setCharacterHealth parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_64;
                                                  FUN_004fe000(local_23fc);
                                                  iVar4 = FUN_004fe180(local_23fc,DAT_00765a98,
                                                                       &DAT_00765a60);
                                                  if (iVar4 == 0) goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                    *(float *)(iVar4 + 0x2434) =
                                                         *(float *)(iVar4 + 0x2438) * local_68;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "setFocusActor",0xd);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 0xd);
                                                    pcVar12 = (char *)FUN_004fe090(&local_118,
                                                                                   local_9bc,100);
                                                    if (pcVar12 != (char *)0x0) {
                                                      pcVar14 = &DAT_01e56420;
                                                      do {
                                                        cVar3 = *pcVar12;
                                                        *pcVar14 = cVar3;
                                                        if (cVar3 == '\0') {
                                                          return 0xffffffff;
                                                        }
                                                        cVar3 = pcVar12[1];
                                                        pcVar12 = pcVar12 + 2;
                                                        pcVar14[1] = cVar3;
                                                        pcVar14 = pcVar14 + 2;
                                                      } while (cVar3 != '\0');
                                                      return 0xffffffff;
                                                    }
                                                    iVar4 = FUN_004fe180(local_9bc,DAT_00763e80,
                                                                         &DAT_00763e48);
                                                    if (iVar4 == 0) goto joined_r0x00500ad6;
                                                    if (iVar4 != param_1[3]) {
                                                      param_1[4] = 1;
                                                      param_1[3] = iVar4;
                                                    }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "setHeroTask",0xb);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[0xb] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 0xb);
                                                    local_60 = -1;
                                                    FUN_00566b5c(local_118,
                                                                 " (%[^,], %[^)])%n",
                                                                 local_638,local_82c,&local_60);
                                                    if (local_60 < 5) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing setHeroTask parameters.");
                                                  return 0xffffffff;
                                                  }
                                                  FUN_004fe000(local_638);
                                                  FUN_004fe000(local_82c);
                                                  local_118 = local_118 + local_60;
                                                  iVar4 = FUN_004fe180(local_638,_DAT_01cae124,
                                                                       0x1cae0ec);
                                                  if (iVar4 == 0) goto joined_r0x00500ad6;
                                                  iVar9 = FUN_00564520(local_82c,"stand");
                                                  uVar8 = 0;
                                                  if (iVar9 != 0) {
                                                    iVar9 = FUN_00564520(local_82c,"follow"
                                                                        );
                                                    if (iVar9 == 0) {
                                                      uVar8 = 1;
                                                    }
                                                    else {
                                                      iVar9 = FUN_00564520(local_82c,&DAT_0058f5d0);
                                                      if (iVar9 == 0) {
                                                        uVar8 = 2;
                                                      }
                                                      else {
                                                        iVar9 = FUN_00564520(local_82c,
                                                                             "guard");
                                                        if (iVar9 == 0) {
                                                          uVar8 = 3;
                                                        }
                                                        else {
                                                          iVar9 = FUN_00564520(local_82c,
                                                                               "suspend");
                                                          if (iVar9 != 0) {
                                                            FUN_00563c90(&DAT_01e56420,
                                                                         "Invalid Task: %s"
                                                                         ,local_82c);
                                                            return 0xffffffff;
                                                          }
                                                          uVar8 = 4;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    FUN_004b5cd0(iVar4,uVar8);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "setIniInt",9);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[9] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 9);
                                                    local_54 = -1;
                                                    FUN_00566b5c(local_118,"(%[^,], %d )%n"
                                                                 ,local_1074,&local_58,&local_54);
                                                    if (local_54 < 5) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing setIniInt command parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_54;
                                                  FUN_004fe000(local_1074);
                                                  if (_DAT_01e56418 == 0) {
                                                    FUN_004bd860(local_3f6c,
                                                                 "system\\nocturne.ini",
                                                                 &DAT_0058f633);
                                                    FUN_004bda80(local_3f6c,local_1074,local_58);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "setSayTimeOverride",0x12);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[0x12] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 0x12)
                                                    ;
                                                    local_50 = -1;
                                                    FUN_00566b5c(local_118," (%n %n",
                                                                 &local_50,&local_50);
                                                    if (local_50 < 1) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing setSayTimeOverride parameters.");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_50;
                                                  local_4c = 0xbf800000;
                                                  if (*local_118 == ')') {
                                                    local_118 = local_118 + 1;
                                                  }
                                                  else {
                                                    local_50 = -1;
                                                    FUN_00566b5c(local_118,"%f )%n",
                                                                 &local_4c,&local_50);
                                                    if (local_50 < 1) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing setSayTimeOverride parameters.");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_50;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    param_1[0x113] = local_4c;
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "setSkipLabel",0xc);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 0xc);
                                                    pcVar12 = (char *)FUN_004fe090(&local_118,
                                                                                   local_764,100);
                                                    if (pcVar12 != (char *)0x0) {
LAB_00503b62:
                                                      pcVar14 = &DAT_01e56420;
                                                      do {
                                                        cVar3 = *pcVar12;
                                                        *pcVar14 = cVar3;
                                                        if (cVar3 == '\0') {
                                                          return 0xffffffff;
                                                        }
                                                        cVar3 = pcVar12[1];
                                                        pcVar12 = pcVar12 + 2;
                                                        pcVar14[1] = cVar3;
                                                        pcVar14 = pcVar14 + 2;
                                                      } while (cVar3 != '\0');
                                                      return 0xffffffff;
                                                    }
                                                    iVar4 = FUN_00504c10(param_1,local_764);
                                                    if (iVar4 < 0) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                   "Undefined label '%s'",
                                                                   local_764);
                                                      return 0xffffffff;
                                                    }
                                                    if (_DAT_01e56418 == 0) {
                                                      param_1[0x114] = iVar4;
                                                    }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "setSpeaker",10);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[10] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 10);
                                                    pcVar12 = (char *)FUN_004fe090(&local_118,
                                                                                   local_a20,100);
                                                    if (pcVar12 != (char *)0x0) goto LAB_00503b62;
                                                    if (local_a20[0] == '\0') {
                                                      param_1[1] = 0;
                                                    }
                                                    else {
                                                      iVar4 = FUN_004fe180(local_a20,DAT_00765a98,
                                                                           &DAT_00765a60);
                                                      param_1[1] = iVar4;
                                                      if (iVar4 == 0) goto joined_r0x00500ad6;
                                                    }
                                                    param_1[2] = param_1[1];
                                                    if ((param_1[5] == 0) &&
                                                       (param_1[1] != param_1[3])) {
                                                      param_1[4] = 1;
                                                      param_1[3] = param_1[1];
                                                    }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "setTimeFactor",0xd);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[0xd] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 0xd);
                                                    pcVar12 = (char *)FUN_004fe090(&local_118,
                                                                                   local_318,100);
                                                    if (pcVar12 != (char *)0x0) {
                                                      pcVar14 = &DAT_01e56420;
                                                      do {
                                                        cVar3 = *pcVar12;
                                                        *pcVar14 = cVar3;
                                                        if (cVar3 == '\0') {
                                                          return 0xffffffff;
                                                        }
                                                        cVar3 = pcVar12[1];
                                                        pcVar12 = pcVar12 + 2;
                                                        pcVar14[1] = cVar3;
                                                        pcVar14 = pcVar14 + 2;
                                                      } while (cVar3 != '\0');
                                                      return 0xffffffff;
                                                    }
                                                    local_3f74 = -1.0;
                                                    FUN_00566b5c(local_318,&DAT_0058f703,&local_3f74
                                                                );
                                                    if (((double)local_3f74 <= 0.0) ||
                                                       (_DAT_0058fa8a < (double)local_3f74)) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                   "Invalid time factor %s"
                                                                   ,local_318);
                                                      return 0xffffffff;
                                                    }
                                                    if (_DAT_01e56418 == 0) {
                                                      *(float *)(0x01C775EC + 0x1ec) = local_3f74;
                                                    }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "setVictim",9);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[9] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 9);
                                                    local_40 = -1;
                                                    FUN_00566b5c(local_118,"(%[^,)]%n",
                                                                 local_1cf4,&local_40);
                                                    if (local_40 < 2) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing setVictim command parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_40;
                                                  FUN_004fe000(local_1cf4);
                                                  iVar4 = FUN_004fe180(local_1cf4,_DAT_01bcdef4,
                                                                       0x1bcdebc);
                                                  if (iVar4 == 0) goto joined_r0x00500ad6;
                                                  iVar9 = 0;
                                                  if (*local_118 == ',') {
                                                    local_40 = -1;
                                                    FUN_00566b5c(local_118,", %[^)]%n",
                                                                 local_1204,&local_40);
                                                    if (local_40 < 3) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing setVictim command parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_40;
                                                  FUN_004fe000(local_1204);
                                                  iVar7 = FUN_00564520(local_1204,"disable"
                                                                      );
                                                  iVar9 = 0xFFFFFFFF;
                                                  if ((iVar7 != 0) &&
                                                     (iVar9 = FUN_004fe180(local_1204,DAT_00765a98,
                                                                           &DAT_00765a60),
                                                     iVar9 == 0)) goto joined_r0x00500ad6;
                                                  }
                                                  if (*local_118 != ')') {
                                                    FUN_00563c90(&DAT_01e56420,
                                                                                                                                  
                                                  "Missing closing ')' in setVictim command");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + 1;
                                                  if (_DAT_01e56418 == 0) {
                                                    FUN_00479f50(iVar4,iVar9);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "snapToFace",10);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[10] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 10);
                                                    local_3c = -1;
                                                    FUN_00566b5c(local_118,
                                                                 "(%[^,], %[^)])%n",
                                                                 local_2c94,local_1c2c,&local_3c);
                                                    if (local_3c < 5) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error snaping turnToFace command parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_3c;
                                                  FUN_004fe000(local_2c94);
                                                  FUN_004fe000(local_1c2c);
                                                  iVar4 = FUN_004fe180(local_2c94,DAT_00763e80,
                                                                       &DAT_00763e48);
                                                  if ((iVar4 == 0) ||
                                                     (iVar9 = FUN_004fe180(local_1c2c,DAT_00763e80,
                                                                           &DAT_00763e48),
                                                     iVar9 == 0)) goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                    FUN_00417f90(iVar9 + 0x20,local_13c,iVar4 + 0x20
                                                                );
                                                    iVar9 = FUN_0054e4a0(local_160,local_13c);
                                                    *(uint *)(iVar4 + 0x34) =
                                                         *(uint *)(iVar9 + 4);
                                                    FUN_0040a000(iVar4);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,"startSay"
                                                                         ,8);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar12[8] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = (char *)FUN_004fe070(pcVar12 + 8);
                                                      pcVar12 = (char *)FUN_004fe090(&local_118,
                                                                                     local_3b6c,500)
                                                      ;
                                                      if (pcVar12 != (char *)0x0) {
                                                        pcVar14 = &DAT_01e56420;
                                                        do {
                                                          cVar3 = *pcVar12;
                                                          *pcVar14 = cVar3;
                                                          if (cVar3 == '\0') {
                                                            return 0xffffffff;
                                                          }
                                                          cVar3 = pcVar12[1];
                                                          pcVar12 = pcVar12 + 2;
                                                          pcVar14[1] = cVar3;
                                                          pcVar14 = pcVar14 + 2;
                                                        } while (cVar3 != '\0');
                                                        return 0xffffffff;
                                                      }
                                                      local_38 = -1;
                                                      FUN_00566b5c(local_3b6c,
                                                                   "%[^,], %[^,], %n",
                                                                   local_15ec,local_21a4,&local_38);
                                                      if (local_38 < 5) {
                                                        FUN_00563c90(&DAT_01e56420,
                                                                                                                                          
                                                  "Error parsing speaker and wav arguments");
                                                  return 0xffffffff;
                                                  }
                                                  FUN_004fe000(local_15ec);
                                                  FUN_004fe000(local_21a4);
                                                  uVar8 = FUN_004fe070(local_3b6c + local_38);
                                                  local_14 = FUN_005049b0(param_1,local_15ec,
                                                                          local_21a4,uVar8);
                                                  param_1[0x12] = local_14;
                                                  fVar1 = (float)param_1[0x12];
                                                  goto joined_r0x00504194;
                                                  }
                                                  iVar4 = FUN_00564bc0(pcVar12,
                                                  "switchCamera",0xc);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 0xc);
                                                    pcVar12 = (char *)FUN_004fe090(&local_118,
                                                                                   local_ee4,200);
                                                    if (pcVar12 != (char *)0x0) {
                                                      pcVar14 = &DAT_01e56420;
                                                      do {
                                                        cVar3 = *pcVar12;
                                                        *pcVar14 = cVar3;
                                                        if (cVar3 == '\0') {
                                                          return 0xffffffff;
                                                        }
                                                        cVar3 = pcVar12[1];
                                                        pcVar12 = pcVar12 + 2;
                                                        pcVar14[1] = cVar3;
                                                        pcVar14 = pcVar14 + 2;
                                                      } while (cVar3 != '\0');
                                                      return 0xffffffff;
                                                    }
                                                    pcVar12 = local_ee4;
                                                    do {
                                                      pcVar14 = pcVar12;
                                                      if (*pcVar12 == ',') goto LAB_0050421a;
                                                      if (*pcVar12 == '\0') break;
                                                      pcVar14 = pcVar12 + 1;
                                                      if (*pcVar14 == ',') goto LAB_0050421a;
                                                      pcVar12 = pcVar12 + 2;
                                                    } while (*pcVar14 != '\0');
                                                    pcVar14 = (char *)0x0;
LAB_0050421a:
                                                    pcVar13 = &DAT_0058f84a;
                                                    local_b8 = (uint)(pcVar14 != (char *)0x0);
                                                    local_34 = -1;
                                                    iVar4 = -1;
                                                    pcVar12 = local_ee4;
                                                    do {
                                                      pcVar14 = pcVar12;
                                                      if (iVar4 == 0) break;
                                                      iVar4 = iVar4 + -1;
                                                      pcVar14 = pcVar12 + (uint)bVar15 * -2 + 1;
                                                      cVar3 = *pcVar12;
                                                      pcVar12 = pcVar14;
                                                    } while (cVar3 != '\0');
                                                    pcVar14 = pcVar14 + -1;
                                                    do {
                                                      cVar3 = *pcVar13;
                                                      *pcVar14 = cVar3;
                                                      if (cVar3 == '\0') break;
                                                      cVar3 = pcVar13[1];
                                                      pcVar13 = pcVar13 + 2;
                                                      pcVar14[1] = cVar3;
                                                      pcVar14 = pcVar14 + 2;
                                                    } while (cVar3 != '\0');
                                                    FUN_00566b5c(local_ee4,&DAT_0058f84c,local_7c8,
                                                                 &local_34);
                                                    if (local_34 < 1) {
                                                      pcVar12 = 
                                                  "Error parsing out camera name";
                                                  pcVar14 = &DAT_01e56420;
                                                  do {
                                                    cVar3 = *pcVar12;
                                                    *pcVar14 = cVar3;
                                                    if (cVar3 == '\0') {
                                                      return 0xffffffff;
                                                    }
                                                    cVar3 = pcVar12[1];
                                                    pcVar12 = pcVar12 + 2;
                                                    pcVar14[1] = cVar3;
                                                    pcVar14 = pcVar14 + 2;
                                                  } while (cVar3 != '\0');
                                                  return 0xffffffff;
                                                  }
                                                  FUN_004fe000(local_7c8);
                                                  iVar4 = FUN_005090a0(0x01E57284,local_7c8);
                                                  if (iVar4 < 0) {
                                                    FUN_00563c90(&DAT_01e56420,
                                                                                                                                  
                                                  "Camera \"%s\" doesn't exist.",local_7c8);
                                                  return 0xffffffff;
                                                  }
                                                  local_3f78 = 1e+10;
                                                  if (local_b8 != 0) {
                                                    FUN_00566b5c(local_ee4 + local_34,&DAT_0058f88e,
                                                                 &local_3f78);
                                                    if (((double)local_3f78 < 0.0) ||
                                                       (_DAT_0058fa92 < (double)local_3f78)) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Invalid hold time value");
                                                  return 0xffffffff;
                                                  }
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    FUN_005135d0(0x01E57284,iVar4,local_3f78);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "timedDisplay",0xc);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[0xc] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 0xc);
                                                    pcVar12 = (char *)FUN_004fe090(&local_118,
                                                                                   local_352c,300);
                                                    if (pcVar12 != (char *)0x0) {
LAB_005043d6:
                                                      pcVar14 = &DAT_01e56420;
                                                      do {
                                                        cVar3 = *pcVar12;
                                                        *pcVar14 = cVar3;
                                                        if (cVar3 == '\0') {
                                                          return 0xffffffff;
                                                        }
                                                        cVar3 = pcVar12[1];
                                                        pcVar12 = pcVar12 + 2;
                                                        pcVar14[1] = cVar3;
                                                        pcVar14 = pcVar14 + 2;
                                                      } while (cVar3 != '\0');
                                                      return 0xffffffff;
                                                    }
                                                    local_30 = -1;
                                                    FUN_00566b5c(local_352c,"%f,%n",
                                                                 &local_2c,&local_30);
                                                    if (local_30 < 2) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing time value");
                                                  return 0xffffffff;
                                                  }
                                                  if (_DAT_01e56418 == 0) {
                                                    pcVar14 = (char *)FUN_004fe070(local_352c +
                                                                                   local_30);
                                                    pcVar12 = (char *)(param_1 + 0x13);
                                                    do {
                                                      cVar3 = *pcVar14;
                                                      *pcVar12 = cVar3;
                                                      if (cVar3 == '\0') break;
                                                      cVar3 = pcVar14[1];
                                                      pcVar14 = pcVar14 + 2;
                                                      pcVar12[1] = cVar3;
                                                      pcVar12 = pcVar12 + 2;
                                                    } while (cVar3 != '\0');
                                                    local_124 = FUN_00504b70(param_1,local_2c,
                                                                             param_2);
                                                    if (0 < (int)local_124) {
                                                      *(byte *)(param_1 + 0x13) = 0;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,
                                                  "turnToFace",10);
                                                  if ((iVar4 == 0) &&
                                                     (((&DAT_005c168c)[(byte)(pcVar12[10] + 1)] &
                                                      0xe0) == 0)) {
                                                    local_118 = (char *)FUN_004fe070(pcVar12 + 10);
                                                    local_cc = -1;
                                                    FUN_00566b5c(local_118,
                                                                 "(%[^,], %[^)])%n",
                                                                 local_320c,local_2974,&local_cc);
                                                    if (local_cc < 5) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing turnToFace command parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_cc;
                                                  FUN_004fe000(local_320c);
                                                  FUN_004fe000(local_2974);
                                                  iVar4 = FUN_004fe180(local_320c,DAT_00765a98,
                                                                       &DAT_00765a60);
                                                  if ((iVar4 == 0) ||
                                                     (iVar9 = FUN_004fe180(local_2974,DAT_00763e80,
                                                                           &DAT_00763e48),
                                                     iVar9 == 0)) goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                    (**(code **)(*(int *)(iVar4 + 0x14c) + 300))
                                                              (iVar4,iVar9);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,&DAT_0058f918,4);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar12[4] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = (char *)FUN_004fe070(pcVar12 + 4);
                                                      local_28 = -1;
                                                      FUN_00566b5c(local_118,"(%f)%n",
                                                                   &local_24,&local_28);
                                                      if (local_28 < 1) {
                                                        FUN_00563c90(&DAT_01e56420,
                                                                                                                                          
                                                  "Error parsing time value on wait statament");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_28;
                                                  if (_DAT_01e56418 == 0) {
                                                    local_124 = FUN_00504b70(param_1,local_24,
                                                                             param_2);
                                                  }
                                                  }
                                                  else {
                                                    iVar4 = FUN_00564bc0(pcVar12,"waitFor",
                                                                         7);
                                                    if ((iVar4 == 0) &&
                                                       (((&DAT_005c168c)[(byte)(pcVar12[7] + 1)] &
                                                        0xe0) == 0)) {
                                                      local_118 = (char *)FUN_004fe070(pcVar12 + 7);
                                                      pcVar12 = (char *)FUN_004fe140(&local_118,
                                                                                     local_a84);
                                                      if (pcVar12 != (char *)0x0) goto LAB_005043d6;
                                                      if ((_DAT_01e56418 == 0) &&
                                                         (iVar4 = FUN_0047dc30(0x01C03A10,
                                                                               local_a84),
                                                         iVar4 == 0)) {
                                                        local_124 = 0;
                                                      }
                                                    }
                                                    else {
                                                      iVar4 = FUN_00564bc0(pcVar12,"walkTo"
                                                                           ,6);
                                                      dVar2 = __BITCAST_DOUBLE(CONCAT44(pcVar12,local_11c));
                                                      if ((iVar4 != 0) ||
                                                         (((&DAT_005c168c)[(byte)(pcVar12[6] + 1)] &
                                                          0xe0) != 0)) {
                                                        pcVar12 = 
                                                  "Unknown command on line %d: %s";
                                                  goto LAB_004ff42f;
                                                  }
                                                  local_118 = (char *)FUN_004fe070(pcVar12 + 6);
                                                  local_20 = -1;
                                                  FUN_00566b5c(local_118,
                                                               "(%[^,], %[^,)] %n",
                                                               local_2a3c,local_113c,&local_20);
                                                  if (local_20 < 5) {
                                                    FUN_00563c90(&DAT_01e56420,
                                                                                                                                  
                                                  "Error parsing walkTo command parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_20;
                                                  FUN_004fe000(local_2a3c);
                                                  FUN_004fe000(local_113c);
                                                  local_120 = 0;
                                                  if (*local_118 == ',') {
                                                    local_20 = -1;
                                                    FUN_00566b5c(local_118,",%f %n",
                                                                 &local_120,&local_20);
                                                    if (local_20 < 1) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing walkTo command parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_20;
                                                  }
                                                  local_1c = 0x501502f9;
                                                  if (*local_118 == ',') {
                                                    local_20 = -1;
                                                    FUN_00566b5c(local_118,",%f %n",
                                                                 &local_1c,&local_20);
                                                    if (local_20 < 1) {
                                                      FUN_00563c90(&DAT_01e56420,
                                                                                                                                      
                                                  "Error parsing walkTo command parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + local_20;
                                                  }
                                                  if (*local_118 != ')') {
                                                    FUN_00563c90(&DAT_01e56420,
                                                                                                                                  
                                                  "Missing closing parenthesis on walkTo parms");
                                                  return 0xffffffff;
                                                  }
                                                  local_118 = local_118 + 1;
                                                  iVar4 = FUN_004fe180(local_2a3c,DAT_00765a98,
                                                                       &DAT_00765a60);
                                                  if ((iVar4 == 0) ||
                                                     (iVar9 = FUN_004fe180(local_113c,DAT_00763e80,
                                                                           &DAT_00763e48),
                                                     iVar9 == 0)) goto joined_r0x00500ad6;
                                                  if (_DAT_01e56418 == 0) {
                                                    (**(code **)(*(int *)(iVar4 + 0x14c) + 0x128))
                                                              (iVar4,iVar9,local_120,local_1c);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_004ff36b:
  if ((_DAT_01e56418 != 2) && (*local_118 != '\0')) {
    FUN_00563c90(&DAT_01e56420,"Extra characters \"%s\" on line %d",local_118,local_11c);
    return 0xffffffff;
  }
LAB_004ff384:
  if (local_124 == 1) {
    param_1[0x12] = 0xbf800000;
    uVar10 = _DAT_01e56418;
    param_1[0x11] = 0xbf800000;
    if ((uVar10 == 0) && ((int)param_1[10] <= (int)param_1[0x10])) {
      FUN_00563c90(&DAT_01e56420,"Overrun past the end of the script.");
      return 0xffffffff;
    }
  }
  else if (-1 < (int)local_124) {
    param_1[0x10] = local_114;
    return local_124;
  }
  return local_124;
}
