#pragma once

// Function prototypes for core/inv.cpp
// Generated from Ghidra function signatures

// Original: core_inv.cpp_staticInit_FUN_004be9d0
// Address: 004be9d0
void __cdecl staticInit(void);

// Original: core_inv.cpp_getItemModel_FUN_004beb40
// Address: 004beb40
CKeyFramedModelInstance * __cdecl getItemModel(CDemonActor *actor_ptr);

// Original: core_inv.cpp_getItemDisplayName_FUN_004beca0
// Address: 004beca0
char * __cdecl getItemDisplayName(CDemonActor *actor_ptr);

// Original: core_inv.cpp_getItemIconName_FUN_004bed10
// Address: 004bed10
char * __cdecl getItemIconName(CDemonActor *actor_ptr);

// Original: core_inv.cpp_loadItem_FUN_004bed80
// Address: 004bed80
int __cdecl loadItem(SInventoryItemInfo *item_info,_FILE *file_handle);

// Original: core_inv.cpp_CInventory_ctor_FUN_004bedc0
// Address: 004bedc0
CInventory * __cdecl CInventory::ctor(CInventory *this_ptr);

// Original: core_inv.cpp_CInventory_dtor_FUN_004bee60
// Address: 004bee60
CInventory * __cdecl CInventory::dtor(CInventory *this_ptr,uint flags);

// Original: core_inv.cpp_CInventory_clear_FUN_004bee80
// Address: 004bee80
void __cdecl CInventory::clear(CInventory *this_ptr);

// Original: core_inv.cpp_CInventory_initialize_FUN_004bef10
// Address: 004bef10
void __cdecl CInventory::initialize(CInventory *this_ptr);

// Original: core_inv.cpp_loadAssets_FUN_004befa0
// Address: 004befa0
void __cdecl loadAssets(void);

// Original: core_inv.cpp_freeInventory_FUN_004bf270
// Address: 004bf270
void __cdecl freeInventory(void);

// Original: core_inv.cpp_CInventory_addItem_FUN_004bf360
// Address: 004bf360
int __cdecl CInventory::addItem(CInventory *this_ptr,CDemonActor *item_actor,int show_tutorial_message);

// Original: core_inv.cpp_CInventory_createAmmoFromWeapon_FUN_004c0640
// Address: 004c0640
void __cdecl CInventory::createAmmoFromWeapon(CInventory *this_ptr,int param_2);

// Original: core_inv.cpp_CInventory_findItemByName_FUN_004c0710
// Address: 004c0710
CDemonActor * __cdecl CInventory::findItemByName(CInventory *this_ptr,char *item_name);

// Original: core_inv.cpp_CInventory_hasItemOfClass_FUN_004c0760
// Address: 004c0760
int __cdecl CInventory::hasItemOfClass(CInventory *this_ptr,char *class_name);

// Original: core_inv.cpp_CInventory_removeItem_FUN_004c07b0
// Address: 004c07b0
void __cdecl CInventory::removeItem(CInventory *this_ptr,CDemonActor *item_to_remove,int should_delete_actor);

// Original: core_inv.cpp_CInventory_selectWeapon_FUN_004c0850
// Address: 004c0850
void __cdecl CInventory::selectWeapon(CInventory *this_ptr,CDemonActor *specific_weapon,int weapon_category,int direction);

// Original: core_inv.cpp_CInventory_selectItem_FUN_004c0950
// Address: 004c0950
void __cdecl CInventory::selectItem(CInventory *this_ptr,int direction);

// Original: core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004c0a50
// Address: 004c0a50
void __cdecl CInventory::cycleWeaponOfSameClass(CInventory *this_ptr,int direction);

// Original: core_inv.cpp_CInventory_renderItemModel_FUN_004c0b40
// Address: 004c0b40
void __cdecl CInventory::renderItemModel(CInventory *this_ptr,CDemonActor *item,int viewport_x,int viewport_y,int viewport_size,float rotation_y,int alpha);

// Original: core_inv.cpp_CInventory_save_FUN_004c0fa0
// Address: 004c0fa0
void __cdecl CInventory::save(CInventory *this_ptr,_FILE *file_handle);

// Original: core_inv.cpp_CInventory_saveItems_FUN_004c1140
// Address: 004c1140
void __cdecl CInventory::saveItems(CInventory *this_ptr,_FILE *file_handle);

// Original: core_inv.cpp_CInventory_load_FUN_004c1190
// Address: 004c1190
void __cdecl CInventory::load(CInventory *this_ptr,_FILE *file_handle);

// Original: core_inv.cpp_CInventory_loadItems_FUN_004c14d0
// Address: 004c14d0
void __cdecl CInventory::loadItems(CInventory *this_ptr);

// Original: core_inv.cpp_CInventory_setupItems_FUN_004c1510
// Address: 004c1510
void __cdecl CInventory::setupItems(CInventory *this_ptr);

// Original: core_inv.cpp_CInventory_select_FUN_004c1580
// Address: 004c1580
int __cdecl CInventory::select(CInventory *this_ptr,CDemonActor *actor_ptr);

// Original: core_inv.cpp_CInventory_getActiveLightGun_FUN_004c1830
// Address: 004c1830
CLightGun * __cdecl CInventory::getActiveLightGun(CInventory *this_ptr);

// Original: core_inv.cpp_CInventory_updateInventory_FUN_004c1850
// Address: 004c1850
void __cdecl CInventory::updateInventory(CInventory *this_ptr);

// Original: core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004c1b20
// Address: 004c1b20
float __cdecl CInventory::calculateTotalBatteryCharge(CInventory *this_ptr,float max_charge);

// Original: core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004c1b90
// Address: 004c1b90
void __cdecl CInventory::updateSelectedWeaponAmmoDisplay(CInventory *this_ptr,int ammo_type);

// Original: core_inv.cpp_CInventory_isWeaponInCategory_FUN_004c1bf0
// Address: 004c1bf0
int __cdecl CInventory::isWeaponInCategory(CInventory *this_ptr,CDemonActor *weapon_actor,int weapon_category);

// Original: core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20
// Address: 004c1d20
void __cdecl CInventory::resetWeaponSwitchTimers(CInventory *this_ptr,int reset_both);

// Original: core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004c1d70
// Address: 004c1d70
void __cdecl CInventory::resetItemSwitchTimers(CInventory *this_ptr);

// Original: core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_004c1da0
// Address: 004c1da0
void __cdecl CInventory::resetInventoryDisplayTimer(CInventory *this_ptr);

// Original: core_inv.cpp_drawWeaponIconBackground_FUN_004c1dd0
// Address: 004c1dd0
void __cdecl drawWeaponIconBackground(int x1,int y1,int x2,int y2,int alpha);

// Original: core_inv.cpp_drawItemIconBackground_FUN_004c1f90
// Address: 004c1f90
void __cdecl drawItemIconBackground(int x1,int y1,int x2,int y2,int alpha);

// Original: core_inv.cpp_CInventory_renderSelectedItems_FUN_004c2150
// Address: 004c2150
void __cdecl CInventory::renderSelectedItems(CInventory *this_ptr);

// Original: core_inv.cpp_CInventory_renderAllItems_FUN_004c2470
// Address: 004c2470
void __cdecl CInventory::renderAllItems(CInventory *this_ptr);

// Original: core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004c31b0
// Address: 004c31b0
int __cdecl CInventory::checkHasMatchingKey(CInventory *this_ptr,uint key_mask,int show_message);

// Original: core_inv.cpp_CInventory_removeMatchingKeys_FUN_004c3280
// Address: 004c3280
void __cdecl CInventory::removeMatchingKeys(CInventory *this_ptr,uint key_mask);

// Original: core_inv.cpp_CInventory_toggleDetailView_FUN_004c32e0
// Address: 004c32e0
void __cdecl CInventory::toggleDetailView(CInventory *this_ptr);

// Original: core_inv.cpp_CInventory_autoUseHealthItem_FUN_004c3350
// Address: 004c3350
void __cdecl CInventory::autoUseHealthItem(CInventory *this_ptr);
