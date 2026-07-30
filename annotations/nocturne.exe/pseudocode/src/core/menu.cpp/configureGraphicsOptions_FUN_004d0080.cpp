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
  CGame *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  byte bVar13;
  char local_120 [256];
  int local_20;
  int local_1c [3];
  
  bVar13 = 0;
  local_20 = 0;
  core_game_cpp_CGame_saveClockTime_FUN_0049a890(0x01C775EC);
  iVar6 = 0x1cc5b80;
  iVar5 = 0;
  do {
    *(int *)(iVar5 + 0x1cc6480) = iVar6;
    iVar5 = iVar5 + 4;
    iVar6 = iVar6 + 0x100;
  } while (iVar5 != 0x24);
  engine_special_cpp_FUN_00532d20(&DAT_01cc64a8,0x1cc64ac,&DAT_01cc64ec,&DAT_01cc652c,0x1cc656c);
  if (_DAT_01cc64a8 <= _DAT_01cc64a4) {
    _DAT_01cc64a4 = 0;
  }
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  engine_special_cpp_FUN_00532cd0(local_1c,local_1c + 1,local_1c + 2);
  iVar5 = engine_dosio_cpp_getFileSize_FUN_004568c0(&CHAR_00h_0058869e,"tridx6.dll");
  bVar2 = false;
  iVar6 = engine_dosio_cpp_getFileSize_FUN_004568c0(&CHAR_00h_005886ab,"tri3dfx.dll");
  if (iVar5 == iVar6) {
    bVar2 = true;
  }
  do {
    pcVar9 = local_120;
    core_game_cpp_CGame_updateDT_FUN_0049a8a0(0x01C775EC);
    core_moon_cpp_CMoon_update_FUN_004deae0((CMoon *)&DAT_01cc5780,0x01C775EC->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_004dec50((CMoon *)&DAT_01cc5780);
    pCVar3 = 0x01C775EC;
    if ((0 < _DAT_01cc64a8) && (INT_02dc9d60 != 0)) {
      if ((*(int *)(&DAT_01cc652c + _DAT_01cc64a4 * 4) == 0x121a) &&
         (*(int *)(_DAT_01cc64a4 * 4 + 0x1cc656c) < 6)) {
        0x01C775EC->game_bpp = 0x10;
        pCVar3->game_pixx = 0x280;
        pCVar3->game_pixy = 0x1e0;
        iVar6 = _stricmp(&DAT_005c0e80,"tri3dfx.dll");
        iVar5 = _DAT_01cc64a8;
        if (iVar6 != 0) {
          pcVar8 = "tri3dfx.dll";
          pcVar10 = &DAT_005c0e80;
          do {
            cVar1 = *pcVar8;
            *pcVar10 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar8[1];
            pcVar8 = pcVar8 + 2;
            pcVar10[1] = cVar1;
            pcVar10 = pcVar10 + 2;
          } while (cVar1 != '\0');
          engine_special_cpp_kill_FUN_005322b0();
          engine_special_cpp_loadExternalRenderer_FUN_00531780(0);
          iVar5 = INT_02dc9d60;
          if (INT_02dc9d60 != 0) {
LAB_004d0249:
            engine_special_cpp_FUN_00532d20
                      (&DAT_01cc64a8,0x1cc64ac,&DAT_01cc64ec,&DAT_01cc652c,0x1cc656c);
            engine_special_cpp_FUN_00532cd0(local_1c,local_1c + 1,local_1c + 2);
            iVar5 = _DAT_01cc64a8;
          }
        }
      }
      else {
        iVar6 = _stricmp(&DAT_005c0e80,"tri3dfx.dll");
        iVar5 = _DAT_01cc64a8;
        if (iVar6 == 0) {
          pcVar8 = "tridx6.dll";
          pcVar10 = &DAT_005c0e80;
          do {
            cVar1 = *pcVar8;
            *pcVar10 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar8[1];
            pcVar8 = pcVar8 + 2;
            pcVar10[1] = cVar1;
            pcVar10 = pcVar10 + 2;
          } while (cVar1 != '\0');
          engine_special_cpp_kill_FUN_005322b0();
          engine_special_cpp_loadExternalRenderer_FUN_00531780(0);
          if (INT_02dc9d60 != 0) goto LAB_004d0249;
          _DAT_01cc64a8 = INT_02dc9d60;
          iVar5 = _DAT_01cc64a8;
        }
      }
      _DAT_01cc64a8 = iVar5;
      pCVar3 = 0x01C775EC;
      if ((*(int *)(&DAT_01cc652c + _DAT_01cc64a4 * 4) == 0x8086) &&
         (*(int *)(_DAT_01cc64a4 * 4 + 0x1cc656c) == 0x7800)) {
        0x01C775EC->game_bpp = 0x10;
        pCVar3->game_pixx = 0x280;
        pCVar3->game_pixy = 0x1e0;
      }
      pCVar3 = 0x01C775EC;
      if ((*(int *)(&DAT_01cc652c + _DAT_01cc64a4 * 4) == 0x12d2) &&
         (*(int *)(_DAT_01cc64a4 * 4 + 0x1cc656c) == 0x18)) {
        0x01C775EC->game_bpp = 0x10;
        pCVar3->game_pixx = 0x280;
        pCVar3->game_pixy = 0x1e0;
      }
      pCVar3 = 0x01C775EC;
      if ((*(int *)(&DAT_01cc652c + _DAT_01cc64a4 * 4) == 0x12d2) &&
         (*(int *)(_DAT_01cc64a4 * 4 + 0x1cc656c) == 0x19)) {
        0x01C775EC->game_bpp = 0x10;
        pCVar3->game_pixx = 0x280;
        pCVar3->game_pixy = 0x1e0;
      }
    }
    pCVar3 = 0x01C775EC;
    if ((INT_02dc9d60 == 0) && (0x1e0 < 0x01C775EC->game_pixy)) {
      0x01C775EC->game_pixy = 0x1e0;
      pCVar3->game_pixx = 0x280;
    }
    iVar5 = 0x01C775EC->game_pixy;
    if (iVar5 == 0xf0) {
      pcVar8 = "Resolution : 320x240";
    }
    else if (iVar5 == 300) {
      pcVar8 = "Resolution : 400x300";
    }
    else if (iVar5 == 0x180) {
      pcVar8 = "Resolution : 512x384";
    }
    else if (iVar5 == 0x1e0) {
      pcVar8 = "Resolution : 640x480";
    }
    else if (iVar5 == 600) {
      pcVar8 = "Resolution : 800x600";
    }
    else if (iVar5 == 0x300) {
      pcVar8 = "Resolution : 1024x768";
    }
    else if (iVar5 == 0x400) {
      pcVar8 = "Resolution : 1280x1024";
    }
    else {
      pcVar8 = "Resolution : 320x240";
    }
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar8);
    _sprintf(0x1cc5b80,pcVar8);
    uVar7 = 0x01C775EC->halo_mode;
    if (uVar7 == 0) {
      pcVar8 = "Flashlight halo : Off";
LAB_004d039c:
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar8);
      _sprintf(0x1cc5c80,pcVar8);
    }
    else {
      if (uVar7 < 2) {
        pcVar8 = "Flashlight halo : Simple";
        goto LAB_004d039c;
      }
      if (uVar7 == 2) {
        pcVar8 = "Flashlight halo : Complex";
        goto LAB_004d039c;
      }
    }
    if (INT_02dc9d60 == 0) {
      pcVar8 = "3D Hardware : Off";
    }
    else {
      pcVar8 = "3D Hardware : On";
    }
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar8);
    _sprintf(0x1cc5d80,pcVar8);
    iVar5 = _stricmp(&DAT_005c0e80,"trid3d.dll");
    if (iVar5 == 0) {
      pcVar8 = "3D API : DirectX 5";
    }
    else {
      iVar5 = _stricmp(&DAT_005c0e80,"tridx6.dll");
      if (iVar5 == 0) {
        pcVar8 = "3D API : DirectX 6";
      }
      else {
        iVar5 = _stricmp(&DAT_005c0e80,"tridx7.dll");
        if (iVar5 == 0) {
          pcVar8 = "3D API : DirectX 7";
        }
        else {
          iVar5 = _stricmp(&DAT_005c0e80,"tri3dfx.dll");
          if (iVar5 == 0) {
            if (bVar2) {
              pcVar8 = "3D API : DirectX 6";
            }
            else {
              pcVar8 = "3D API : Voodoo Blit Emulation";
            }
          }
          else {
            pcVar8 = "3D API : Custom";
          }
        }
      }
    }
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar8);
    _sprintf(0x1cc5e80,pcVar8);
    if (_DAT_01cc64a8 == 0) {
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                         ("No 3D Hardware detected");
      _sprintf(&DAT_01cc5f80,pcVar8);
    }
    else {
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("3D Card : ");
      pcVar10 = &DAT_01cc5f80;
      do {
        cVar1 = *pcVar8;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar8 = *(char **)(&DAT_01cc64ec + _DAT_01cc64a4 * 4);
      iVar5 = -1;
      pcVar10 = &DAT_01cc5f80;
      do {
        pcVar11 = pcVar10;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
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
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Bits per pixel : ");
    pcVar10 = &DAT_01cc6080;
    do {
      cVar1 = *pcVar8;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    _sprintf(local_120,"%d",0x01C775EC->game_bpp);
    iVar5 = -1;
    pcVar8 = &DAT_01cc6080;
    do {
      pcVar10 = pcVar8;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
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
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Monitor calibration");
    _sprintf(0x1cc6180,pcVar9);
    if (0x01C775EC->subtitle_mode == 0) {
      pcVar9 = "Subtitles : Off";
    }
    else {
      pcVar9 = "Subtitles : On";
    }
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar9);
    pcVar8 = &DAT_01cc6280;
    do {
      cVar1 = *pcVar9;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    if (0x01C775EC->quimby_flag == 0) {
      if (0x01C775EC->nudity_flag == 0) {
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Rating: Teen");
        pcVar8 = &DAT_01cc6380;
        do {
          cVar1 = *pcVar9;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar9[1];
          pcVar9 = pcVar9 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
      }
      else {
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Rating: Mature");
        pcVar8 = &DAT_01cc6380;
        do {
          cVar1 = *pcVar9;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar9[1];
          pcVar9 = pcVar9 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
      }
    }
    iVar5 = 9;
    if (0x01C775EC->quimby_flag != 0) {
      iVar5 = 8;
    }
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Graphic Options");
    iVar5 = core_menu_cpp_renderMenuAndGetChoice_FUN_004cf440
                      ((char **)0x1cc6480,iVar5,&local_20,0xfa,pcVar9);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    iVar6 = _stricmp(&DAT_005c0e80,"trid3d.dll");
    pCVar3 = 0x01C775EC;
    bVar12 = iVar6 != 0;
    if ((!bVar12) && (0x1e0 < 0x01C775EC->game_pixy)) {
      0x01C775EC->game_pixy = 0x1e0;
      pCVar3->game_pixx = 0x280;
    }
    pCVar3 = 0x01C775EC;
    iVar6 = _DAT_01cc64a4;
    iVar4 = _DAT_01cc64a8;
    switch(iVar5) {
    case 0:
      if (_DAT_01cc5b5c == 1) {
        if (((0x01C775EC->game_pixy == 0xf0) && (24000000 < local_1c[0])) && (bVar12)) {
          0x01C775EC->game_pixx = 0x500;
          pCVar3->game_pixy = 0x400;
          iVar6 = _DAT_01cc64a4;
          iVar4 = _DAT_01cc64a8;
        }
        else if (((0x01C775EC->game_pixy == 0xf0) && (12000000 < local_1c[0])) && (bVar12)) {
LAB_004d08e7:
          0x01C775EC->game_pixy = 0x300;
          pCVar3->game_pixx = 0x400;
          iVar6 = _DAT_01cc64a4;
          iVar4 = _DAT_01cc64a8;
        }
        else {
          iVar5 = 0x01C775EC->game_pixy;
          if (iVar5 == 0xf0) {
LAB_004d061e:
            0x01C775EC->game_pixy = 0x1e0;
            pCVar3->game_pixx = 0x280;
            iVar6 = _DAT_01cc64a4;
            iVar4 = _DAT_01cc64a8;
          }
          else if (iVar5 == 300) {
            0x01C775EC->game_pixy = 0xf0;
            pCVar3->game_pixx = 0x140;
            iVar6 = _DAT_01cc64a4;
            iVar4 = _DAT_01cc64a8;
          }
          else if (iVar5 == 0x180) {
LAB_004d091b:
            0x01C775EC->game_pixy = 0xf0;
            pCVar3->game_pixx = 0x140;
            iVar6 = _DAT_01cc64a4;
            iVar4 = _DAT_01cc64a8;
          }
          else if (iVar5 == 0x1e0) {
            0x01C775EC->game_pixy = 0x180;
            pCVar3->game_pixx = 0x200;
            iVar6 = _DAT_01cc64a4;
            iVar4 = _DAT_01cc64a8;
          }
          else {
            if (iVar5 == 600) goto LAB_004d061e;
            if (iVar5 != 0x300) goto LAB_004d091b;
            0x01C775EC->game_pixy = 600;
            pCVar3->game_pixx = 800;
            iVar6 = _DAT_01cc64a4;
            iVar4 = _DAT_01cc64a8;
          }
        }
      }
      else {
        iVar5 = 0x01C775EC->game_pixy;
        if (iVar5 == 0xf0) {
          0x01C775EC->game_pixx = 0x200;
          pCVar3->game_pixy = 0x180;
          iVar6 = _DAT_01cc64a4;
          iVar4 = _DAT_01cc64a8;
        }
        else if (iVar5 == 300) {
          0x01C775EC->game_pixx = 0x200;
          pCVar3->game_pixy = 0x180;
          iVar6 = _DAT_01cc64a4;
          iVar4 = _DAT_01cc64a8;
        }
        else if (iVar5 == 0x180) {
          0x01C775EC->game_pixx = 0x280;
          pCVar3->game_pixy = 0x1e0;
          iVar6 = _DAT_01cc64a4;
          iVar4 = _DAT_01cc64a8;
        }
        else if (((local_1c[0] < 0xb71b01) || (0x01C775EC->game_pixy != 0x1e0)) || (!bVar12)) {
          if (((12000000 < local_1c[0]) && (0x01C775EC->game_pixy == 600)) && (bVar12))
          goto LAB_004d08e7;
          if (((local_1c[0] < 0x16e3601) || (0x01C775EC->game_pixy != 0x300)) || (!bVar12)) {
            0x01C775EC->game_pixx = 0x140;
            pCVar3->game_pixy = 0xf0;
            iVar6 = _DAT_01cc64a4;
            iVar4 = _DAT_01cc64a8;
          }
          else {
            0x01C775EC->game_pixy = 0x400;
            pCVar3->game_pixx = 0x500;
            iVar6 = _DAT_01cc64a4;
            iVar4 = _DAT_01cc64a8;
          }
        }
        else {
          0x01C775EC->game_pixx = 800;
          pCVar3->game_pixy = 600;
          iVar6 = _DAT_01cc64a4;
          iVar4 = _DAT_01cc64a8;
        }
      }
      break;
    case 1:
      if (_DAT_01cc5b5c == 1) {
        if (0x01C775EC->halo_mode == 0) {
          0x01C775EC->halo_mode = 2;
          iVar6 = _DAT_01cc64a4;
          iVar4 = _DAT_01cc64a8;
        }
        else if (0x01C775EC->halo_mode == 1) {
LAB_004d0a84:
          0x01C775EC->halo_mode = 0;
          iVar6 = _DAT_01cc64a4;
          iVar4 = _DAT_01cc64a8;
        }
        else {
          0x01C775EC->halo_mode = 1;
          iVar6 = _DAT_01cc64a4;
          iVar4 = _DAT_01cc64a8;
        }
      }
      else if (0x01C775EC->halo_mode == 0) {
        0x01C775EC->halo_mode = 1;
        iVar6 = _DAT_01cc64a4;
        iVar4 = _DAT_01cc64a8;
      }
      else {
        if (0x01C775EC->halo_mode != 1) goto LAB_004d0a84;
        0x01C775EC->halo_mode = 2;
        iVar6 = _DAT_01cc64a4;
        iVar4 = _DAT_01cc64a8;
      }
      break;
    case 2:
      INT_02dc9d60 = 1 - INT_02dc9d60;
      iVar4 = INT_02dc9d60;
      if (INT_02dc9d60 != 0) {
        engine_special_cpp_kill_FUN_005322b0();
        engine_special_cpp_loadExternalRenderer_FUN_00531780(0);
        if (INT_02dc9d60 == 0) {
          _DAT_01cc64a8 = INT_02dc9d60;
          iVar6 = _DAT_01cc64a4;
          iVar4 = _DAT_01cc64a8;
        }
        else {
LAB_004d0af9:
          engine_special_cpp_FUN_00532d20
                    (&DAT_01cc64a8,0x1cc64ac,&DAT_01cc64ec,&DAT_01cc652c,0x1cc656c);
          engine_special_cpp_FUN_00532cd0(local_1c,local_1c + 1,local_1c + 2);
          iVar6 = _DAT_01cc64a4;
          iVar4 = _DAT_01cc64a8;
        }
      }
      break;
    case 3:
      if (*(int *)(&DAT_01cc652c + _DAT_01cc64a4 * 4) != 0x121a) {
        iVar5 = _stricmp(&DAT_005c0e80,"trid3d.dll");
        if (iVar5 == 0) {
          pcVar9 = "tridx6.dll";
LAB_004d0b7a:
          pcVar8 = &DAT_005c0e80;
          do {
            cVar1 = *pcVar9;
            *pcVar8 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar9[1];
            pcVar9 = pcVar9 + 2;
            pcVar8[1] = cVar1;
            pcVar8 = pcVar8 + 2;
          } while (cVar1 != '\0');
        }
        else {
          iVar5 = _stricmp(&DAT_005c0e80,"tridx6.dll");
          if (iVar5 == 0) {
            pcVar9 = "tridx7.dll";
            goto LAB_004d0b7a;
          }
          iVar5 = _stricmp(&DAT_005c0e80,"tridx7.dll");
          if (iVar5 == 0) {
            pcVar9 = "trid3d.dll";
            goto LAB_004d0b7a;
          }
          iVar5 = _stricmp(&DAT_005c0e80,"tri3dfx.dll");
          if (iVar5 == 0) {
            pcVar9 = "trid3d.dll";
            goto LAB_004d0b7a;
          }
        }
        engine_special_cpp_kill_FUN_005322b0();
        engine_special_cpp_loadExternalRenderer_FUN_00531780(0);
        iVar6 = _DAT_01cc64a4;
        iVar4 = INT_02dc9d60;
        if (INT_02dc9d60 != 0) goto LAB_004d0af9;
      }
      break;
    case 4:
      iVar6 = _DAT_01cc64a8;
      if (_DAT_01cc64a8 != 0) {
        _DAT_01cc64a4 = _DAT_01cc64a4 + 1;
        if (_DAT_01cc64a8 <= _DAT_01cc64a4) {
          _DAT_01cc64a4 = 0;
        }
        engine_special_cpp_selectCard_FUN_00532d00(_DAT_01cc64a4);
        iVar6 = _DAT_01cc64a4;
        iVar4 = _DAT_01cc64a8;
      }
      break;
    case 5:
      if (0x01C775EC->game_bpp == 0x10) {
        0x01C775EC->game_bpp = 0x20;
        iVar6 = _DAT_01cc64a4;
        iVar4 = _DAT_01cc64a8;
      }
      else {
        0x01C775EC->game_bpp = 0x10;
        iVar6 = _DAT_01cc64a4;
        iVar4 = _DAT_01cc64a8;
      }
      break;
    case 6:
      core_menu_cpp_showCalibrationTest_FUN_004cffa0();
      iVar6 = _DAT_01cc64a4;
      iVar4 = _DAT_01cc64a8;
      break;
    case 7:
      0x01C775EC->subtitle_mode = (uint)(0x01C775EC->subtitle_mode == 0);
      iVar6 = _DAT_01cc64a4;
      iVar4 = _DAT_01cc64a8;
      break;
    case 8:
      uVar7 = (uint)(0x01C775EC->nudity_flag == 0);
      0x01C775EC->nudity_flag = uVar7;
      pCVar3->blood_flag = uVar7;
      pCVar3->foul_language_flag = uVar7;
      iVar6 = _DAT_01cc64a4;
      iVar4 = _DAT_01cc64a8;
    }
    _DAT_01cc64a8 = iVar4;
    _DAT_01cc64a4 = iVar6;
    iVar5 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,1);
    if (iVar5 != 0) {
      return;
    }
  } while( true );
}
