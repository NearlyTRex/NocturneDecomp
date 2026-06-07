// Name: core_inv.cpp_CInventory_renderAllItems_FUN_00500690
// Address: 00500690
// MANUAL RECONSTRUCTION
// Address Range: [[00500690, 005013c9]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_renderAllItems_FUN_00500690(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_renderAllItems_FUN_00500690(CInventory *this_ptr)

{
  int iVar2;
  CLightGun *pCVar3;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar5;
  CHealthItem *pCVar7;
  int iVar7;
  CFilmReel *pCVar6;
  char *pcVar7;
  int iVar10;
  int iVar8;
  int iVar11;
  CAlphaBitmap *this_ptr_00;
  char (*pacVar12) [256];
  int iVar9;
  int y;
  char *pcVar13;
  float local_680;
  float local_67c;
  char local_678 [256];
  char local_578 [256];
  char local_478 [256];
  char local_378 [256];
  char local_278 [256];
  char local_178 [256];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  CBitFont *local_18;
  double dVar1;
  byte bVar11;
  
  bVar11 = 0;
  if (g_CGamePtr->letterbox_mode != 0) {
    return;
  }
  if ((CHero *)this_ptr->owner != g_HeroActors[g_LocalHeroIndex]) {
    return;
  }
  if (g_WindowHeight != g_InventoryScreenHeight) {
    core_inv_cpp_loadAssets_FUN_004fd220();
  }
  iVar2 = g_UseExternalRenderer;
  g_UseExternalRenderer = 0;
  local_44 = (int)g_SmallEditorFont;
  if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
    local_44 = (int)g_MicroFont;
  }
  if ((this_ptr->selected_weapon == (CWeapon *)0x0) || (this_ptr->weapon_highlight_timer <= 0.0))
  goto LAB_005009c0;
  local_50 = g_InventoryWidth;
  local_48 = 0x10;
  local_58 = 0x70;
  iVar8 = 0x24;
  local_54 = g_InventoryHeight;
  if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
    local_50 = g_InventoryWidth / 2;
    local_54 = g_InventoryHeight / 2;
    iVar8 = 0x12;
    local_58 = 0x28;
    local_48 = 8;
  }
  local_68 = 0xffff;
  if (this_ptr->weapon_highlight_timer < 1.0) {
    local_68 = (int)ROUND(ROUND(this_ptr->weapon_highlight_timer * 65535.0f));
  }
  pCVar3 = (CLightGun *)
           core_actor_cpp_castToClassHash_FUN_0040c790
                     (&this_ptr->selected_weapon->base,g_CLightGunClassInfo.name_hash);
  if (pCVar3 == (CLightGun *)0x0) {
    iVar3 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70
                      (this_ptr,&this_ptr->selected_weapon->base,3);
    if (iVar3 == 0) {
      iVar10 = g_WindowWidth - iVar8;
      iVar5 = g_WindowHeight - iVar8;
      iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0
                        (&this_ptr->selected_weapon->base,"CTommyGun");
      this_ptr_00 = (CAlphaBitmap *)0x0;
      if (iVar3 != 0) {
        this_ptr_00 = &g_TommyClipIconBitmap;
      }
      iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0
                        (&this_ptr->selected_weapon->base,"CShotgun");
      if (iVar3 != 0) {
        this_ptr_00 = &g_ShotShellIconBitmap;
      }
      iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0
                        (&this_ptr->selected_weapon->base,"CElephantGun");
      if (iVar3 != 0) {
        this_ptr_00 = &g_ShotShellIconBitmap;
      }
      iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0
                        (&this_ptr->selected_weapon->base,"CGun");
      if (iVar3 != 0) {
        if (this_ptr->selected_weapon->ammo_type == 0) {
          this_ptr_00 = &g_BulletIconBitmap;
        }
        if (this_ptr->selected_weapon->ammo_type == 3) {
          this_ptr_00 = &g_LithiumIconBitmap;
        }
        if (this_ptr->selected_weapon->ammo_type == 7) {
          this_ptr_00 = &g_MercuryBulletIconBitmap;
        }
        if (this_ptr->selected_weapon->ammo_type == 8) {
          this_ptr_00 = &g_SilverBulletIconBitmap;
        }
        if (this_ptr->selected_weapon->ammo_type == 1) {
          this_ptr_00 = &g_HolyBulletIconBitmap;
        }
      }
      if (this_ptr_00 != (CAlphaBitmap *)0x0) {
        engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(this_ptr_00,iVar10,iVar5,local_68);
      }
      if ((this_ptr->ammo_detail_timer <= 0.0) || (this_ptr->render_mode_flag != 0)) {
        _sprintf(local_678,"%d",((CWeapon *)this_ptr->selected_weapon)->ammo_count);
      }
      else {
        pcVar13 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(&this_ptr->ammo_ptr->base);
        _sprintf(local_678,"%s %d",pcVar13,((CWeapon *)this_ptr->selected_weapon)->ammo_count);
      }
      iVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0((CBitFont *)local_44,0x58);
      iVar10 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80((CBitFont *)local_44,local_678);
      iVar3 = (g_WindowHeight - local_48) - iVar3;
      iVar10 = (g_WindowWidth - local_48) - iVar10;
      pcVar13 = local_678;
      goto LAB_00500870;
    }
  }
  else {
    _sprintf(local_478,"%d%%",(int)ROUND(ROUND((double)pCVar3->charge_ratio * 100.0)));
    iVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0((CBitFont *)local_44,0x58);
    iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80((CBitFont *)local_44,local_478);
    iVar3 = (g_WindowHeight - local_48) - iVar3;
    iVar10 = (g_WindowWidth - local_48) - iVar4;
    pcVar13 = local_478;
LAB_00500870:
    engine_font_cpp_CBitFont_drawText_FUN_004cda80((CBitFont *)local_44,pcVar13,iVar10,iVar3,0xf8,0)
    ;
  }
  if (this_ptr->render_mode_flag == 0) goto LAB_005009c0;
  iVar3 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70
                    (this_ptr,&this_ptr->selected_weapon->base,3);
  if (iVar3 == 0) {
    iVar3 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70
                      (this_ptr,&this_ptr->selected_weapon->base,0);
    if ((iVar3 == 0) &&
       (iVar3 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70
                          (this_ptr,&this_ptr->selected_weapon->base,1), iVar3 == 0)) {
      pcVar5 = core_inv_cpp_getItemIconName_FUN_004fcf70(&this_ptr->selected_weapon->base);
      pcVar7 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(&this_ptr->selected_weapon->base);
      pcVar13 = "%s\n\n%s";
      goto LAB_005008cd;
    }
    pcVar7 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(&this_ptr->ammo_ptr->base);
    pcVar13 = core_inv_cpp_getItemIconName_FUN_004fcf70(&this_ptr->selected_weapon->base);
    _sprintf(local_178,"%s\n\n%s %s",
             core_inv_cpp_getItemDisplayName_FUN_004fcf00(&this_ptr->selected_weapon->base),
             pcVar13,pcVar7);
    pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" are loaded.");
    strcat(local_178,pcVar13);
  }
  else {
    pcVar5 = core_inv_cpp_getItemIconName_FUN_004fcf70(&this_ptr->selected_weapon->base);
    pcVar7 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(&this_ptr->selected_weapon->base);
    pcVar13 = "%s\n\n%s";
LAB_005008cd:
    _sprintf(local_178,pcVar13,pcVar7,pcVar5);
  }
  iVar3 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                    ((CBitFont *)local_44,local_178,g_InventoryWrappedTextLines[0],10,0x100,
                     local_50 - local_58);
  iVar10 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0((CBitFont *)local_44,0x58);
  iVar5 = g_WindowWidth - local_50;
  iVar11 = (g_WindowHeight - local_54) + local_48;
  iVar9 = 0;
  if (0 < iVar3) {
    pacVar12 = g_InventoryWrappedTextLines;
    do {
      iVar9 = iVar9 + 1;
      engine_font_cpp_CBitFont_drawText_FUN_004cda80
                ((CBitFont *)local_44,*pacVar12,local_48 + iVar5,iVar11,0xf8,0);
      pacVar12 = pacVar12 + 1;
      iVar11 = iVar11 + iVar10;
    } while (iVar9 < iVar3);
  }
LAB_005009c0:
  if ((this_ptr->selected_item != (CDemonActor *)0x0) && (0.0 < this_ptr->item_highlight_timer)) {
    local_5c = 0x70;
    local_4c = 0x10;
    iVar3 = g_InventoryWidth;
    iVar10 = g_InventoryHeight;
    if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
      iVar3 = g_InventoryWidth / 2;
      iVar10 = g_InventoryHeight / 2;
      local_5c = 0x28;
      local_4c = 8;
    }
    pCVar7 = (CHealthItem *)
             core_actor_cpp_castToClassHash_FUN_0040c790
                       (this_ptr->selected_item,g_CHealthItemClassInfo.name_hash);
    if (pCVar7 != (CHealthItem *)0x0) {
      _sprintf
                (local_378,"%d x%3.0f%%",pCVar7->use_count,(double)pCVar7->hp_restored);
      iVar5 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0((CBitFont *)local_44,0x58);
      iVar7 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80((CBitFont *)local_44,local_378);
      engine_font_cpp_CBitFont_drawText_FUN_004cda80
                ((CBitFont *)local_44,local_378,(g_WindowWidth - local_4c) - iVar7,
                 (g_WindowHeight - local_4c) - iVar5,0xf8,0);
    }
    pCVar6 = (CFilmReel *)
             core_actor_cpp_castToClassHash_FUN_0040c790
                       (this_ptr->selected_item,g_CFilmReelClassInfo.name_hash);
    if (pCVar6 != (CFilmReel *)0x0) {
      pcVar13 = core_inv_cpp_getItemDisplayName_FUN_004fcf00((CDemonActor *)pCVar6);
      _sprintf(local_278,"%s",pcVar13);
      iVar5 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0((CBitFont *)local_44,0x58);
      iVar11 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80((CBitFont *)local_44,local_278);
      engine_font_cpp_CBitFont_drawText_FUN_004cda80
                ((CBitFont *)local_44,local_278,(g_WindowWidth - local_4c) - iVar11,
                 (g_WindowHeight - local_4c) - iVar5,0xf8,0);
    }
    if (this_ptr->render_mode_flag != 0) {
      pcVar7 = core_inv_cpp_getItemIconName_FUN_004fcf70(this_ptr->selected_item);
      pcVar13 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(this_ptr->selected_item);
      _sprintf(local_578,"%s\n\n%s",pcVar13,pcVar7);
      iVar5 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                        ((CBitFont *)local_44,local_578,g_InventoryWrappedTextLines2[0],10,0x100,
                         iVar3 - local_5c);
      iVar11 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0((CBitFont *)local_44,0x58);
      y = (g_WindowHeight - iVar10) + local_4c;
      iVar3 = g_WindowWidth - iVar3;
      iVar10 = 0;
      if (0 < iVar5) {
        pacVar12 = g_InventoryWrappedTextLines2;
        do {
          iVar10 = iVar10 + 1;
          engine_font_cpp_CBitFont_drawText_FUN_004cda80
                    ((CBitFont *)local_44,*pacVar12,local_4c + iVar3,y,0xf8,0);
          pacVar12 = pacVar12 + 1;
          y = y + iVar11;
        } while (iVar10 < iVar5);
      }
    }
  }
  iVar3 = g_WindowHeight;
  if ((g_CGamePtr->flashlight_active != 0) || (g_CGamePtr->goggles_active != 0)) {
    iVar10 = g_WindowHeight + -6;
    engine_2d_c_fillRectColor_FUN_00403170
              (6,(int)ROUND(ROUND((float)iVar10 +
                                  (float)((g_WindowHeight + -0x21) - iVar10) *
                                  this_ptr->battery_charge * (float)0.01)),0x10,iVar10,2)
    ;
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950
              (&g_BatteryIconBitmap,4,iVar3 + -0x24,0xffff);
  }
  if ((0.0 < this_ptr->item_highlight_timer) || (0.0 < this_ptr->inventory_display_timer)) {
    local_67c = this_ptr->inventory_display_timer;
    if (local_67c < this_ptr->item_highlight_timer) {
      local_67c = this_ptr->item_highlight_timer;
    }
    local_64 = 0xffff;
    if (local_67c < 1.0) {
      local_64 = (int)ROUND(ROUND(local_67c * 65535.0f));
    }
    local_680 = (g_HeroActors[g_LocalHeroIndex]->base).hit_points * (float)0.01;
    if (local_680 < 0.0) {
      local_680 = 0.0;
    }
    if (1.0 < local_680) {
      local_680 = 1.0;
    }
    iVar3 = 0x3f;
    iVar10 = 0x1b;
    if (g_WindowHeight < 0x180) {
      iVar3 = 0x1f;
      iVar10 = 0xd;
    }
    iVar11 = (g_WindowWidth + -4) - iVar10;
    iVar5 = (int)ROUND(ROUND((float)iVar3 - (float)iVar3 * local_680));
    engine_alphabit_cpp_CAlphaBitmap_render_FUN_00410b00
              (&g_HealthBar1Bitmap,iVar11,iVar5 + 4,0,iVar5,iVar10 + -1,iVar3,local_64 / 2);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(&g_HealthBar2Bitmap,iVar11,4,local_64 / 2)
    ;
  }
  dVar1 = (double)this_ptr->message_display_timer;
  if (0.0 < dVar1) {
    local_60 = 0xffff;
    if (dVar1 < 1.0) {
      local_60 = (int)ROUND(ROUND(dVar1 * 65535));
    }
    engine_3d_c_setRenderAlpha_FUN_00406d80(local_60);
    local_18 = g_SmallEditorFont;
    iVar3 = g_InventoryHeight;
    if (g_WindowHeight < 0x180) {
      iVar3 = g_InventoryHeight / 2;
      local_18 = g_MicroFont;
    }
    iVar3 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                      (local_18,this_ptr->message_text,g_InventoryWrappedTextLines3[0],10,0x100,
                       (g_WindowWidth - iVar3) + -4);
    iVar10 = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(local_18,0x58);
    iVar5 = (g_WindowHeight + -4) - iVar10 * iVar3;
    if (((g_MicroFont != local_18) || (g_MessageCount == 0)) && (iVar11 = 0, 0 < iVar3)) {
      pacVar12 = g_InventoryWrappedTextLines3;
      do {
        iVar11 = iVar11 + 1;
        engine_font_cpp_CBitFont_drawText_FUN_004cda80(local_18,*pacVar12,4,iVar5,0xf8,0);
        pacVar12 = pacVar12 + 1;
        iVar5 = iVar5 + iVar10;
      } while (iVar11 < iVar3);
    }
  }
  g_UseExternalRenderer = iVar2;
  return;
}
