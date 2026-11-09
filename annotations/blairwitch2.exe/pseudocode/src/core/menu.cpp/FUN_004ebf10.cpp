// Name: core_menu.cpp_FUN_004ebf10
// Address: 004ebf10
// Address Range: [[004ebf10, 004ecc0d]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_FUN_004ebf10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_FUN_004ebf10(void)

{
  char cVar1;
  CGame *pCVar2;
  CDemonSet *this_ptr;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  bool bVar12;
  byte bVar13;
  int color_mode;
  int color_value;
  char local_258 [256];
  char local_158 [256];
  char local_58 [32];
  uint local_38;
  int local_34 [5];
  int iStack_20;
  int local_1c;
  int iStack_18;
  
  bVar13 = 0;
  local_38 = 0;
  core_game_cpp_FUN_004b3000(g_CGamePtr);
  iVar4 = 0x1d06150;
  iVar3 = 0;
  do {
    *(int *)(iVar3 + 0x1d06a50) = iVar4;
    iVar3 = iVar3 + 4;
    iVar4 = iVar4 + 0x100;
  } while (iVar3 != 0x24);
  local_1c = 0;
  engine_special_cpp_FUN_005600e0(&DAT_01d06a78,0x1d06a7c,&DAT_01d06abc,0x1d06afc);
  if (_DAT_01d06a78 <= _DAT_01d06a74) {
    _DAT_01d06a74 = 0;
  }
  local_34[0] = 0;
  local_34[1] = 0;
  local_34[2] = 0;
  engine_special_cpp_FUN_00560090(local_34,local_34 + 1,local_34 + 2);
  do {
    pcVar8 = local_258;
    core_game_cpp_FUN_004b3010(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 1;
    core_set_cpp_FUN_005344c0(this_ptr,50000,50000,0x10000);
    *(uint *)&g_CDemonSetPtr->field_0x15ae94 = 0xdac;
    core_moon_cpp_FUN_005024a0(&g_CMoonInstance);
    pcVar7 = &DAT_005dcc8d;
    core_moon_cpp_FUN_00502510();
    pcVar9 = &DAT_0061e180;
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 0;
    do {
      cVar1 = *pcVar7;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    pCVar2 = g_CGamePtr;
    if ((0 < _DAT_01d06a78) && (_DAT_0264bba0 != 0)) {
      if ((*(int *)(_DAT_01d06a74 * 4 + 0x1d06afc) == 0x121a) &&
         (*(int *)(_DAT_01d06a74 * 4 + 0x1d06b3c) < 6)) {
        *(uint *)&g_CGamePtr->field_0x8 = 0x10;
        *(uint *)pCVar2 = 0x280;
        *(uint *)&pCVar2->field_0x4 = 0x1e0;
      }
      pCVar2 = g_CGamePtr;
      if ((*(int *)(_DAT_01d06a74 * 4 + 0x1d06afc) == 0x8086) &&
         (*(int *)(_DAT_01d06a74 * 4 + 0x1d06b3c) == 0x7800)) {
        *(uint *)&g_CGamePtr->field_0x8 = 0x10;
        *(uint *)pCVar2 = 0x280;
        *(uint *)&pCVar2->field_0x4 = 0x1e0;
      }
      pCVar2 = g_CGamePtr;
      if ((*(int *)(_DAT_01d06a74 * 4 + 0x1d06afc) == 0x12d2) &&
         (*(int *)(_DAT_01d06a74 * 4 + 0x1d06b3c) == 0x18)) {
        *(uint *)&g_CGamePtr->field_0x8 = 0x10;
        *(uint *)pCVar2 = 0x280;
        *(uint *)&pCVar2->field_0x4 = 0x1e0;
      }
      pCVar2 = g_CGamePtr;
      if ((*(int *)(_DAT_01d06a74 * 4 + 0x1d06afc) == 0x12d2) &&
         (*(int *)(_DAT_01d06a74 * 4 + 0x1d06b3c) == 0x19)) {
        *(uint *)&g_CGamePtr->field_0x8 = 0x10;
        *(uint *)pCVar2 = 0x280;
        *(uint *)&pCVar2->field_0x4 = 0x1e0;
      }
    }
    pCVar2 = g_CGamePtr;
    if ((_DAT_0264bba0 == 0) && (0x1e0 < *(int *)&g_CGamePtr->field_0x4)) {
      *(uint *)&g_CGamePtr->field_0x4 = 0x1e0;
      *(uint *)pCVar2 = 0x280;
    }
    iVar3 = *(int *)&g_CGamePtr->field_0x4;
    if (iVar3 == 0xf0) {
      pcVar7 = "Resolution : 320x240";
    }
    else if (iVar3 == 300) {
      pcVar7 = "Resolution : 400x300";
    }
    else if (iVar3 == 0x180) {
      pcVar7 = "Resolution : 512x384";
    }
    else if (iVar3 == 0x1e0) {
      pcVar7 = "Resolution : 640x480";
    }
    else if (iVar3 == 600) {
      pcVar7 = "Resolution : 800x600";
    }
    else if (iVar3 == 0x300) {
      pcVar7 = "Resolution : 1024x768";
    }
    else if (iVar3 == 0x3c0) {
      pcVar7 = "Resolution : 1280x960";
    }
    else {
      pcVar7 = "Resolution : 320x240";
    }
    support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar7);
    FUN_005b7790(0x1d06150);
    *(uint *)&g_CGamePtr->field_0xc = 0;
    if (local_1c == 0) {
      if (_DAT_0264bba0 == 0) {
        pcVar7 = "3D Hardware : Off";
      }
      else {
        pcVar7 = "3D Hardware : On";
      }
    }
    else {
      _DAT_0264bba0 = 0;
      if (_DAT_01d06a78 == 0) {
        pcVar7 = "No 3D Hardware";
      }
      else {
        pcVar7 = "Not enough video memory for 3D card";
      }
    }
    support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar7);
    FUN_005b7790(0x1d06250);
    if (DAT_0061e180 == '\0') {
      pcVar7 = "3D API : None";
    }
    else {
      iVar3 = _stricmp(&DAT_0061e180,"trid3d.dll");
      if (iVar3 == 0) {
        pcVar7 = "3D API : DirectX 5";
      }
      else {
        iVar3 = _stricmp(&DAT_0061e180,"tridx6.dll");
        if (iVar3 == 0) {
          pcVar7 = "3D API : DirectX 6";
        }
        else {
          iVar3 = _stricmp(&DAT_0061e180,"tridx7.dll");
          if (iVar3 == 0) {
            pcVar7 = "3D API : DirectX 7";
          }
          else {
            iVar3 = _stricmp(&DAT_0061e180,"tri3dfx.dll");
            if (iVar3 == 0) {
              pcVar7 = "3D API : Voodoo Blit Emulation";
            }
            else {
              pcVar7 = "3D API : Custom";
            }
          }
        }
      }
    }
    support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar7);
    FUN_005b7790(0x1d06350);
    if (_DAT_01d06a78 == 0) {
      support_newmsg_cpp_getLocalizedString_FUN_0050fe80("No 3D Hardware detected");
      FUN_005b7790(&DAT_01d06450);
    }
    else {
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("3D Card : ");
      pcVar9 = &DAT_01d06450;
      do {
        cVar1 = *pcVar7;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar7 = *(char **)(&DAT_01d06abc + _DAT_01d06a74 * 4);
      iVar3 = -1;
      pcVar9 = &DAT_01d06450;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar13 * -2 + 1;
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
      FUN_005b7790(local_58," (%d)");
      pcVar7 = local_58;
      iVar3 = -1;
      pcVar9 = &DAT_01d06450;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar13 * -2 + 1;
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
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Bits per pixel : ");
    pcVar9 = &DAT_01d06550;
    do {
      cVar1 = *pcVar7;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    FUN_005b7790(local_258,&DAT_005dce76);
    iVar3 = -1;
    pcVar7 = &DAT_01d06550;
    do {
      pcVar9 = pcVar7;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar9 = pcVar7 + (uint)bVar13 * -2 + 1;
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
    support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Monitor calibration");
    FUN_005b7790(0x1d06650);
    if (*(int *)&g_CGamePtr->field_0x10 == 0) {
      pcVar8 = "Subtitles : Off";
    }
    else {
      pcVar8 = "Subtitles : On";
    }
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar8);
    pcVar7 = &DAT_01d06750;
    do {
      cVar1 = *pcVar8;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    if (*(int *)&g_CGamePtr->field_0x20 == 0) {
      if (*(int *)&g_CGamePtr->field_0x18 == 0) {
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Rating: Teen");
        pcVar7 = &DAT_01d06850;
        do {
          cVar1 = *pcVar8;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
      }
      else {
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Rating: Mature");
        pcVar7 = &DAT_01d06850;
        do {
          cVar1 = *pcVar8;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
      }
    }
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Particle Density : ");
    pcVar7 = &DAT_01d06950;
    do {
      cVar1 = *pcVar8;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    FUN_005b7790(local_158,"%5.2f",(double)DAT_0061ec60 * _DAT_005dcf0d);
    pcVar8 = local_158;
    iVar3 = -1;
    pcVar7 = &DAT_01d06950;
    do {
      pcVar9 = pcVar7;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar9 = pcVar7 + (uint)bVar13 * -2 + 1;
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
    uVar6 = 9;
    if (*(int *)&g_CGamePtr->field_0x20 != 0) {
      uVar6 = 8;
    }
    support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Graphic Options");
    uVar6 = core_menu_cpp_FUN_004eb0e0(0x1d06a50,uVar6,&local_38,0x122);
    wincore_wddvmem_cpp_FUN_00589560();
    pCVar2 = g_CGamePtr;
    switch(uVar6) {
    case 0:
      if (_DAT_01d0612c == 1) {
        if ((*(int *)&g_CGamePtr->field_0x4 == 0xf0) && (24000000 < local_34[0])) {
          *(uint *)g_CGamePtr = 0x500;
          *(uint *)&pCVar2->field_0x4 = 0x3c0;
        }
        else if ((*(int *)&g_CGamePtr->field_0x4 == 0xf0) && (12000000 < local_34[0])) {
LAB_004ec6e7:
          *(uint *)&g_CGamePtr->field_0x4 = 0x300;
          *(uint *)pCVar2 = 0x400;
        }
        else {
          iVar3 = *(int *)&g_CGamePtr->field_0x4;
          if (iVar3 == 0xf0) {
LAB_004ec460:
            *(uint *)&g_CGamePtr->field_0x4 = 0x1e0;
            *(uint *)pCVar2 = 0x280;
          }
          else if (iVar3 == 300) {
            *(uint *)&g_CGamePtr->field_0x4 = 0xf0;
            *(uint *)pCVar2 = 0x140;
          }
          else {
            if (iVar3 != 0x180) {
              if (iVar3 == 0x1e0) {
                *(uint *)&g_CGamePtr->field_0x4 = 0x180;
                *(uint *)pCVar2 = 0x200;
                break;
              }
              if (iVar3 == 600) goto LAB_004ec460;
              if (iVar3 == 0x300) goto LAB_004ec75b;
            }
            *(uint *)&g_CGamePtr->field_0x4 = 0xf0;
            *(uint *)pCVar2 = 0x140;
          }
        }
      }
      else {
        iVar3 = *(int *)&g_CGamePtr->field_0x4;
        if (iVar3 == 0xf0) {
          *(uint *)g_CGamePtr = 0x200;
          *(uint *)&pCVar2->field_0x4 = 0x180;
        }
        else if (iVar3 == 300) {
          *(uint *)g_CGamePtr = 0x200;
          *(uint *)&pCVar2->field_0x4 = 0x180;
        }
        else {
          if (iVar3 == 0x180) goto LAB_004ec460;
          if ((local_34[0] < 0xb71b01) || (iVar3 != 0x1e0)) {
            if ((12000000 < local_34[0]) && (*(int *)&g_CGamePtr->field_0x4 == 600))
            goto LAB_004ec6e7;
            if ((local_34[0] < 0x16e3601) || (*(int *)&g_CGamePtr->field_0x4 != 0x300)) {
              *(uint *)g_CGamePtr = 0x140;
              *(uint *)&pCVar2->field_0x4 = 0xf0;
            }
            else {
              *(uint *)&g_CGamePtr->field_0x4 = 0x3c0;
              *(uint *)pCVar2 = 0x500;
            }
          }
          else {
LAB_004ec75b:
            *(uint *)&g_CGamePtr->field_0x4 = 600;
            *(uint *)pCVar2 = 800;
          }
        }
      }
      break;
    case 1:
      bVar12 = _DAT_0264bba0 == 0;
      _DAT_0264bba0 = (uint)bVar12;
      if (bVar12) {
        engine_special_cpp_kill_FUN_0055f4d0();
        engine_special_cpp_FUN_0055e8c0((HWND)0x0);
        if (_DAT_0264bba0 != 0) {
          engine_special_cpp_FUN_005600e0(&DAT_01d06a78,0x1d06a7c,&DAT_01d06abc,0x1d06afc);
          engine_special_cpp_FUN_00560090(local_34,local_34 + 1,local_34 + 2);
          break;
        }
      }
      _DAT_01d06a78 = 0;
      break;
    case 3:
      if (_DAT_01d06a78 == 0) {
        _DAT_01d06a74 = 0;
      }
      else {
        _DAT_01d06a74 = _DAT_01d06a74 + 1;
        if (_DAT_01d06a78 <= _DAT_01d06a74) {
          _DAT_01d06a74 = 0;
        }
        engine_special_cpp_FUN_005600c0(_DAT_01d06a74);
      }
      break;
    case 4:
      if (*(int *)&g_CGamePtr->field_0x8 == 0x10) {
        *(uint *)&g_CGamePtr->field_0x8 = 0x20;
      }
      else {
        *(uint *)&g_CGamePtr->field_0x8 = 0x10;
      }
      break;
    case 5:
      core_menu_cpp_showCalibrationTest_FUN_004ebe30();
      break;
    case 6:
      *(uint *)&g_CGamePtr->field_0x10 = (uint)(*(int *)&g_CGamePtr->field_0x10 == 0);
      break;
    case 7:
      uVar5 = (uint)(*(int *)&g_CGamePtr->field_0x18 == 0);
      *(uint *)&g_CGamePtr->field_0x18 = uVar5;
      *(uint *)&pCVar2->field_0x14 = uVar5;
      *(uint *)&pCVar2->field_0x1c = uVar5;
      break;
    case 8:
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                         ("Adjust Particle Density");
      iVar3 = DAT_006141b8 * 3 >> 0x1f;
      shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047e1d0
                (g_CEditorToolsPtr,
                 (int)((DAT_006141b8 * 3 + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2,0x2c,pcVar8,0)
      ;
      if (DAT_0061ec60 < 0x3fff) {
LAB_004ec9a8:
        DAT_0061ec60 = 0x3fff;
      }
      else if (DAT_0061ec60 < 0x10000) {
        if (DAT_0061ec60 < 0x3fff) goto LAB_004ec9a8;
        if (0xffff < DAT_0061ec60) {
          DAT_0061ec60 = 0xffff;
        }
      }
      else {
        DAT_0061ec60 = 0xffff;
      }
      iVar3 = DAT_0061ec60;
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      wincore_winrun_cpp_setCursorPosition_FUN_0058ed10
                ((int)(((longlong)(DAT_006141b8 + -1) * (longlong)(iVar3 + -0x3fff)) / 0xc000),
                 _DAT_01c2a380);
      local_34[3] = 0;
      do {
        shape_edittool_cpp_FUN_0047e870();
        if (_DAT_01c2a37c != local_34[3]) {
          iVar3 = (int)(((longlong)_DAT_01c2a37c * 0xc000) / (longlong)(DAT_006141b8 + -1)) + 0x3fff
          ;
          local_34[3] = _DAT_01c2a37c;
        }
        iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
        if (iVar4 != 0) {
          iVar3 = iVar3 + -700;
        }
        iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
        if (iVar4 != 0) {
          iVar3 = iVar3 + 700;
        }
        if (iVar3 < 0x3fff) {
          iVar3 = 0x3fff;
        }
        else if (0xffff < iVar3) {
          iVar3 = 0xffff;
        }
        local_34[4] = _DAT_01c35e4c + 1;
        iStack_20 = _DAT_01c35e54 + -1;
        iVar4 = _DAT_01c35e50 + -1;
        iVar11 = _DAT_01c35e48 + 1;
        engine_2d_c_fillRectWithBorder_FUN_00403250(iVar11,local_34[4],iVar4,iStack_20,0,0xff);
        engine_2d_c_fillRectColor_FUN_004031c0
                  (iVar11,local_34[4],
                   (int)(((longlong)(iVar4 - iVar11) * (longlong)(iVar3 + -0x3fff)) / 0xc000) +
                   iVar11,iStack_20,4);
        pcVar8 = "%4.2f";
        color_value = 0;
        color_mode = 0xff;
        iVar11 = _DAT_01c35e54 + _DAT_01c35e4c;
        iStack_18 = iVar3;
        iVar4 = engine_font_cpp_FUN_004ab560(_DAT_01c25590,0x41);
        engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004a93f0
                  (_DAT_01c25590,_DAT_01c35e48,_DAT_01c35e50,(iVar11 - iVar4) / 2,color_mode,
                   color_value,pcVar8);
        wincore_wddvmem_cpp_FUN_00589560();
        iVar11 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
        iVar4 = DAT_0061ec60;
      } while (((iVar11 == 0) &&
               (iVar11 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar4 = iVar3, iVar11 == 0)
               ) && (iVar11 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84), iVar11 == 0));
      DAT_0061ec60 = iVar4;
      shape_edittool_cpp_FUN_0047e760();
    }
    iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84);
    if (iVar3 != 0) {
      return;
    }
  } while( true );
}
