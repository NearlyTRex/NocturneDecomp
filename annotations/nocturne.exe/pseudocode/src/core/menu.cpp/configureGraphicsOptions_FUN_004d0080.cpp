// Name: core_menu.cpp_configureGraphicsOptions_FUN_004d0080
// Address: 004d0080
// Address Range: [[004d0080, 004d0cc5]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_configureGraphicsOptions_FUN_004d0080(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004d03ba) */
/* WARNING: Removing unreachable block (ram,0x004d075e) */
/* WARNING: Removing unreachable block (ram,0x004d03d0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_configureGraphicsOptions_FUN_004d0080(void)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  byte bVar14;
  char local_120 [256];
  uint local_20;
  int local_1c [3];
  
  bVar14 = 0;
  local_20 = 0;
  core_game_cpp_CGame_saveClockTime_FUN_0049a890(0x01C775EC);
  iVar7 = 0x1cc5b80;
  iVar4 = 0;
  do {
    *(int *)(iVar4 + 0x1cc6480) = iVar7;
    iVar4 = iVar4 + 4;
    iVar7 = iVar7 + 0x100;
  } while (iVar4 != 0x24);
  FUN_00532d20(&DAT_01cc64a8,0x1cc64ac,&DAT_01cc64ec,&DAT_01cc652c,0x1cc656c);
  if (_DAT_01cc64a8 <= _DAT_01cc64a4) {
    _DAT_01cc64a4 = 0;
  }
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  FUN_00532cd0(local_1c,local_1c + 1,local_1c + 2);
  iVar4 = engine_dosio_cpp_getFileSize_FUN_004568c0(&CHAR_00h_0058869e,"tridx6.dll");
  bVar2 = false;
  iVar7 = engine_dosio_cpp_getFileSize_FUN_004568c0(&CHAR_00h_005886ab,"tri3dfx.dll");
  if (iVar4 == iVar7) {
    bVar2 = true;
  }
  do {
    pcVar10 = local_120;
    core_game_cpp_CGame_updateDT_FUN_0049a8a0(0x01C775EC);
    core_moon_cpp_CMoon_update_FUN_004deae0(0x1cc5780,0x01C775EC[0x99]);
    core_moon_cpp_CMoon_render_FUN_004dec50(0x1cc5780);
    puVar3 = 0x01C775EC;
    if ((0 < _DAT_01cc64a8) && (_DAT_02dc9d60 != 0)) {
      if ((*(int *)(&DAT_01cc652c + _DAT_01cc64a4 * 4) == 0x121a) &&
         (*(int *)(_DAT_01cc64a4 * 4 + 0x1cc656c) < 6)) {
        0x01C775EC[2] = 0x10;
        *puVar3 = 0x280;
        puVar3[1] = 0x1e0;
        iVar7 = _stricmp(&DAT_005c0e80,"tri3dfx.dll");
        iVar4 = _DAT_01cc64a8;
        if (iVar7 != 0) {
          pcVar9 = "tri3dfx.dll";
          pcVar11 = &DAT_005c0e80;
          do {
            cVar1 = *pcVar9;
            *pcVar11 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar9[1];
            pcVar9 = pcVar9 + 2;
            pcVar11[1] = cVar1;
            pcVar11 = pcVar11 + 2;
          } while (cVar1 != '\0');
          wincore_windll_cpp_kill_FUN_005322b0();
          wincore_windll_cpp_loadExternalRenderer_FUN_00531780(0);
          iVar4 = _DAT_02dc9d60;
          if (_DAT_02dc9d60 != 0) {
LAB_004d0249:
            FUN_00532d20(&DAT_01cc64a8,0x1cc64ac,&DAT_01cc64ec,&DAT_01cc652c,0x1cc656c);
            FUN_00532cd0(local_1c,local_1c + 1,local_1c + 2);
            iVar4 = _DAT_01cc64a8;
          }
        }
      }
      else {
        iVar7 = _stricmp(&DAT_005c0e80,"tri3dfx.dll");
        iVar4 = _DAT_01cc64a8;
        if (iVar7 == 0) {
          pcVar9 = "tridx6.dll";
          pcVar11 = &DAT_005c0e80;
          do {
            cVar1 = *pcVar9;
            *pcVar11 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar9[1];
            pcVar9 = pcVar9 + 2;
            pcVar11[1] = cVar1;
            pcVar11 = pcVar11 + 2;
          } while (cVar1 != '\0');
          wincore_windll_cpp_kill_FUN_005322b0();
          wincore_windll_cpp_loadExternalRenderer_FUN_00531780(0);
          if (_DAT_02dc9d60 != 0) goto LAB_004d0249;
          _DAT_01cc64a8 = _DAT_02dc9d60;
          iVar4 = _DAT_01cc64a8;
        }
      }
      _DAT_01cc64a8 = iVar4;
      puVar3 = 0x01C775EC;
      if ((*(int *)(&DAT_01cc652c + _DAT_01cc64a4 * 4) == 0x8086) &&
         (*(int *)(_DAT_01cc64a4 * 4 + 0x1cc656c) == 0x7800)) {
        0x01C775EC[2] = 0x10;
        *puVar3 = 0x280;
        puVar3[1] = 0x1e0;
      }
      puVar3 = 0x01C775EC;
      if ((*(int *)(&DAT_01cc652c + _DAT_01cc64a4 * 4) == 0x12d2) &&
         (*(int *)(_DAT_01cc64a4 * 4 + 0x1cc656c) == 0x18)) {
        0x01C775EC[2] = 0x10;
        *puVar3 = 0x280;
        puVar3[1] = 0x1e0;
      }
      puVar3 = 0x01C775EC;
      if ((*(int *)(&DAT_01cc652c + _DAT_01cc64a4 * 4) == 0x12d2) &&
         (*(int *)(_DAT_01cc64a4 * 4 + 0x1cc656c) == 0x19)) {
        0x01C775EC[2] = 0x10;
        *puVar3 = 0x280;
        puVar3[1] = 0x1e0;
      }
    }
    puVar3 = 0x01C775EC;
    if ((_DAT_02dc9d60 == 0) && (0x1e0 < (int)0x01C775EC[1])) {
      0x01C775EC[1] = 0x1e0;
      *puVar3 = 0x280;
    }
    iVar4 = 0x01C775EC[1];
    if (iVar4 == 0xf0) {
      pcVar9 = "Resolution : 320x240";
    }
    else if (iVar4 == 300) {
      pcVar9 = "Resolution : 400x300";
    }
    else if (iVar4 == 0x180) {
      pcVar9 = "Resolution : 512x384";
    }
    else if (iVar4 == 0x1e0) {
      pcVar9 = "Resolution : 640x480";
    }
    else if (iVar4 == 600) {
      pcVar9 = "Resolution : 800x600";
    }
    else if (iVar4 == 0x300) {
      pcVar9 = "Resolution : 1024x768";
    }
    else if (iVar4 == 0x400) {
      pcVar9 = "Resolution : 1280x1024";
    }
    else {
      pcVar9 = "Resolution : 320x240";
    }
    uVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar9);
    _sprintf(0x1cc5b80,uVar5);
    uVar8 = 0x01C775EC[3];
    if (uVar8 == 0) {
      pcVar9 = "Flashlight halo : Off";
LAB_004d039c:
      uVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar9);
      _sprintf(0x1cc5c80,uVar5);
    }
    else {
      if (uVar8 < 2) {
        pcVar9 = "Flashlight halo : Simple";
        goto LAB_004d039c;
      }
      if (uVar8 == 2) {
        pcVar9 = "Flashlight halo : Complex";
        goto LAB_004d039c;
      }
    }
    if (_DAT_02dc9d60 == 0) {
      pcVar9 = "3D Hardware : Off";
    }
    else {
      pcVar9 = "3D Hardware : On";
    }
    uVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar9);
    _sprintf(0x1cc5d80,uVar5);
    iVar4 = _stricmp(&DAT_005c0e80,"trid3d.dll");
    if (iVar4 == 0) {
      pcVar9 = "3D API : DirectX 5";
    }
    else {
      iVar4 = _stricmp(&DAT_005c0e80,"tridx6.dll");
      if (iVar4 == 0) {
        pcVar9 = "3D API : DirectX 6";
      }
      else {
        iVar4 = _stricmp(&DAT_005c0e80,"tridx7.dll");
        if (iVar4 == 0) {
          pcVar9 = "3D API : DirectX 7";
        }
        else {
          iVar4 = _stricmp(&DAT_005c0e80,"tri3dfx.dll");
          if (iVar4 == 0) {
            if (bVar2) {
              pcVar9 = "3D API : DirectX 6";
            }
            else {
              pcVar9 = "3D API : Voodoo Blit Emulation";
            }
          }
          else {
            pcVar9 = "3D API : Custom";
          }
        }
      }
    }
    uVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar9);
    _sprintf(0x1cc5e80,uVar5);
    if (_DAT_01cc64a8 == 0) {
      uVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("No 3D Hardware detected")
      ;
      _sprintf(&DAT_01cc5f80,uVar5);
    }
    else {
      pcVar9 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370("3D Card : ");
      pcVar11 = &DAT_01cc5f80;
      do {
        cVar1 = *pcVar9;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      pcVar9 = *(char **)(&DAT_01cc64ec + _DAT_01cc64a4 * 4);
      iVar4 = -1;
      pcVar11 = &DAT_01cc5f80;
      do {
        pcVar12 = pcVar11;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar12 = pcVar11 + (uint)bVar14 * -2 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
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
    }
    pcVar9 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370("Bits per pixel : ");
    pcVar11 = &DAT_01cc6080;
    do {
      cVar1 = *pcVar9;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    _sprintf(local_120,"%d",0x01C775EC[2]);
    iVar4 = -1;
    pcVar9 = &DAT_01cc6080;
    do {
      pcVar11 = pcVar9;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar11 = pcVar9 + (uint)bVar14 * -2 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar1 = *pcVar10;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    uVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Monitor calibration");
    _sprintf(0x1cc6180,uVar5);
    if (0x01C775EC[4] == 0) {
      pcVar10 = "Subtitles : Off";
    }
    else {
      pcVar10 = "Subtitles : On";
    }
    pcVar10 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar10);
    pcVar9 = &DAT_01cc6280;
    do {
      cVar1 = *pcVar10;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    if (0x01C775EC[8] == 0) {
      if (0x01C775EC[6] == 0) {
        pcVar10 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370("Rating: Teen")
        ;
        pcVar9 = &DAT_01cc6380;
        do {
          cVar1 = *pcVar10;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar10[1];
          pcVar10 = pcVar10 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
      }
      else {
        pcVar10 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                    ("Rating: Mature");
        pcVar9 = &DAT_01cc6380;
        do {
          cVar1 = *pcVar10;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar10[1];
          pcVar10 = pcVar10 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
      }
    }
    uVar5 = 9;
    if (0x01C775EC[8] != 0) {
      uVar5 = 8;
    }
    uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Graphic Options");
    uVar5 = core_menu_cpp_renderMenuAndGetChoice_FUN_004cf440(0x1cc6480,uVar5,&local_20,0xfa,uVar6);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    iVar4 = _stricmp(&DAT_005c0e80,"trid3d.dll");
    puVar3 = 0x01C775EC;
    bVar13 = iVar4 != 0;
    if ((!bVar13) && (0x1e0 < (int)0x01C775EC[1])) {
      0x01C775EC[1] = 0x1e0;
      *puVar3 = 0x280;
    }
    puVar3 = 0x01C775EC;
    iVar4 = _DAT_01cc64a4;
    iVar7 = _DAT_01cc64a8;
    switch(uVar5) {
    case 0:
      if (_DAT_01cc5b5c == 1) {
        if (((0x01C775EC[1] == 0xf0) && (24000000 < local_1c[0])) && (bVar13)) {
          *0x01C775EC = 0x500;
          puVar3[1] = 0x400;
          iVar4 = _DAT_01cc64a4;
          iVar7 = _DAT_01cc64a8;
        }
        else if (((0x01C775EC[1] == 0xf0) && (12000000 < local_1c[0])) && (bVar13)) {
LAB_004d08e7:
          0x01C775EC[1] = 0x300;
          *puVar3 = 0x400;
          iVar4 = _DAT_01cc64a4;
          iVar7 = _DAT_01cc64a8;
        }
        else {
          iVar4 = 0x01C775EC[1];
          if (iVar4 == 0xf0) {
LAB_004d061e:
            0x01C775EC[1] = 0x1e0;
            *puVar3 = 0x280;
            iVar4 = _DAT_01cc64a4;
            iVar7 = _DAT_01cc64a8;
          }
          else if (iVar4 == 300) {
            0x01C775EC[1] = 0xf0;
            *puVar3 = 0x140;
            iVar4 = _DAT_01cc64a4;
            iVar7 = _DAT_01cc64a8;
          }
          else if (iVar4 == 0x180) {
LAB_004d091b:
            0x01C775EC[1] = 0xf0;
            *puVar3 = 0x140;
            iVar4 = _DAT_01cc64a4;
            iVar7 = _DAT_01cc64a8;
          }
          else if (iVar4 == 0x1e0) {
            0x01C775EC[1] = 0x180;
            *puVar3 = 0x200;
            iVar4 = _DAT_01cc64a4;
            iVar7 = _DAT_01cc64a8;
          }
          else {
            if (iVar4 == 600) goto LAB_004d061e;
            if (iVar4 != 0x300) goto LAB_004d091b;
            0x01C775EC[1] = 600;
            *puVar3 = 800;
            iVar4 = _DAT_01cc64a4;
            iVar7 = _DAT_01cc64a8;
          }
        }
      }
      else {
        iVar4 = 0x01C775EC[1];
        if (iVar4 == 0xf0) {
          *0x01C775EC = 0x200;
          puVar3[1] = 0x180;
          iVar4 = _DAT_01cc64a4;
          iVar7 = _DAT_01cc64a8;
        }
        else if (iVar4 == 300) {
          *0x01C775EC = 0x200;
          puVar3[1] = 0x180;
          iVar4 = _DAT_01cc64a4;
          iVar7 = _DAT_01cc64a8;
        }
        else if (iVar4 == 0x180) {
          *0x01C775EC = 0x280;
          puVar3[1] = 0x1e0;
          iVar4 = _DAT_01cc64a4;
          iVar7 = _DAT_01cc64a8;
        }
        else if (((local_1c[0] < 0xb71b01) || (0x01C775EC[1] != 0x1e0)) || (!bVar13)) {
          if (((12000000 < local_1c[0]) && (0x01C775EC[1] == 600)) && (bVar13)) goto LAB_004d08e7;
          if (((local_1c[0] < 0x16e3601) || (0x01C775EC[1] != 0x300)) || (!bVar13)) {
            *0x01C775EC = 0x140;
            puVar3[1] = 0xf0;
            iVar4 = _DAT_01cc64a4;
            iVar7 = _DAT_01cc64a8;
          }
          else {
            0x01C775EC[1] = 0x400;
            *puVar3 = 0x500;
            iVar4 = _DAT_01cc64a4;
            iVar7 = _DAT_01cc64a8;
          }
        }
        else {
          *0x01C775EC = 800;
          puVar3[1] = 600;
          iVar4 = _DAT_01cc64a4;
          iVar7 = _DAT_01cc64a8;
        }
      }
      break;
    case 1:
      if (_DAT_01cc5b5c == 1) {
        if (0x01C775EC[3] == 0) {
          0x01C775EC[3] = 2;
          iVar4 = _DAT_01cc64a4;
          iVar7 = _DAT_01cc64a8;
        }
        else if (0x01C775EC[3] == 1) {
LAB_004d0a84:
          0x01C775EC[3] = 0;
          iVar4 = _DAT_01cc64a4;
          iVar7 = _DAT_01cc64a8;
        }
        else {
          0x01C775EC[3] = 1;
          iVar4 = _DAT_01cc64a4;
          iVar7 = _DAT_01cc64a8;
        }
      }
      else if (0x01C775EC[3] == 0) {
        0x01C775EC[3] = 1;
        iVar4 = _DAT_01cc64a4;
        iVar7 = _DAT_01cc64a8;
      }
      else {
        if (0x01C775EC[3] != 1) goto LAB_004d0a84;
        0x01C775EC[3] = 2;
        iVar4 = _DAT_01cc64a4;
        iVar7 = _DAT_01cc64a8;
      }
      break;
    case 2:
      _DAT_02dc9d60 = 1 - _DAT_02dc9d60;
      iVar7 = _DAT_02dc9d60;
      if (_DAT_02dc9d60 != 0) {
        wincore_windll_cpp_kill_FUN_005322b0();
        wincore_windll_cpp_loadExternalRenderer_FUN_00531780(0);
        if (_DAT_02dc9d60 == 0) {
          _DAT_01cc64a8 = _DAT_02dc9d60;
          iVar4 = _DAT_01cc64a4;
          iVar7 = _DAT_01cc64a8;
        }
        else {
LAB_004d0af9:
          FUN_00532d20(&DAT_01cc64a8,0x1cc64ac,&DAT_01cc64ec,&DAT_01cc652c,0x1cc656c);
          FUN_00532cd0(local_1c,local_1c + 1,local_1c + 2);
          iVar4 = _DAT_01cc64a4;
          iVar7 = _DAT_01cc64a8;
        }
      }
      break;
    case 3:
      if (*(int *)(&DAT_01cc652c + _DAT_01cc64a4 * 4) != 0x121a) {
        iVar4 = _stricmp(&DAT_005c0e80,"trid3d.dll");
        if (iVar4 == 0) {
          pcVar10 = "tridx6.dll";
LAB_004d0b7a:
          pcVar9 = &DAT_005c0e80;
          do {
            cVar1 = *pcVar10;
            *pcVar9 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar10[1];
            pcVar10 = pcVar10 + 2;
            pcVar9[1] = cVar1;
            pcVar9 = pcVar9 + 2;
          } while (cVar1 != '\0');
        }
        else {
          iVar4 = _stricmp(&DAT_005c0e80,"tridx6.dll");
          if (iVar4 == 0) {
            pcVar10 = "tridx7.dll";
            goto LAB_004d0b7a;
          }
          iVar4 = _stricmp(&DAT_005c0e80,"tridx7.dll");
          if (iVar4 == 0) {
            pcVar10 = "trid3d.dll";
            goto LAB_004d0b7a;
          }
          iVar4 = _stricmp(&DAT_005c0e80,"tri3dfx.dll");
          if (iVar4 == 0) {
            pcVar10 = "trid3d.dll";
            goto LAB_004d0b7a;
          }
        }
        wincore_windll_cpp_kill_FUN_005322b0();
        wincore_windll_cpp_loadExternalRenderer_FUN_00531780(0);
        iVar4 = _DAT_01cc64a4;
        iVar7 = _DAT_02dc9d60;
        if (_DAT_02dc9d60 != 0) goto LAB_004d0af9;
      }
      break;
    case 4:
      iVar4 = _DAT_01cc64a8;
      if (_DAT_01cc64a8 != 0) {
        _DAT_01cc64a4 = _DAT_01cc64a4 + 1;
        if (_DAT_01cc64a8 <= _DAT_01cc64a4) {
          _DAT_01cc64a4 = 0;
        }
        wincore_windll_cpp_selectCard_FUN_00532d00(_DAT_01cc64a4);
        iVar4 = _DAT_01cc64a4;
        iVar7 = _DAT_01cc64a8;
      }
      break;
    case 5:
      if (0x01C775EC[2] == 0x10) {
        0x01C775EC[2] = 0x20;
        iVar4 = _DAT_01cc64a4;
        iVar7 = _DAT_01cc64a8;
      }
      else {
        0x01C775EC[2] = 0x10;
        iVar4 = _DAT_01cc64a4;
        iVar7 = _DAT_01cc64a8;
      }
      break;
    case 6:
      core_menu_cpp_showCalibrationTest_FUN_004cffa0();
      iVar4 = _DAT_01cc64a4;
      iVar7 = _DAT_01cc64a8;
      break;
    case 7:
      0x01C775EC[4] = (uint)(0x01C775EC[4] == 0);
      iVar4 = _DAT_01cc64a4;
      iVar7 = _DAT_01cc64a8;
      break;
    case 8:
      uVar8 = (uint)(0x01C775EC[6] == 0);
      0x01C775EC[6] = uVar8;
      puVar3[5] = uVar8;
      puVar3[7] = uVar8;
      iVar4 = _DAT_01cc64a4;
      iVar7 = _DAT_01cc64a8;
    }
    _DAT_01cc64a8 = iVar7;
    _DAT_01cc64a4 = iVar4;
    iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,1);
    if (iVar4 != 0) {
      return;
    }
  } while( true );
}
