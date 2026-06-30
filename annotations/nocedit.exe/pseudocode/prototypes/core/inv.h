#pragma once

// Function prototypes for core/inv.cpp
// Generated from Ghidra function signatures

// Original: core_inv.cpp_staticInit_FUN_004fcc30
// Address: 004fcc30
void __cdecl staticInit(void);

// Original: core_inv.cpp_getItemModel_FUN_004fcda0
// Address: 004fcda0
CKeyFramedModelInstance * __cdecl getItemModel(CDemonActor *actor_ptr);

// Original: core_inv.cpp_getItemDisplayName_FUN_004fcf00
// Address: 004fcf00
char * __cdecl getItemDisplayName(CDemonActor *actor_ptr);

// Original: core_inv.cpp_getItemIconName_FUN_004fcf70
// Address: 004fcf70
char * __cdecl getItemIconName(CDemonActor *actor_ptr);

// Original: core_inv.cpp_loadItem_FUN_004fcfe0
// Address: 004fcfe0
int __cdecl loadItem(SInventoryItemInfo *item_info,_FILE *file_handle);

// Original: core_inv.cpp_CInventory_ctor_FUN_004fd020
// Address: 004fd020
CInventory * __cdecl CInventory::ctor(CInventory *this_ptr);

// Original: core_inv.cpp_CInventory_dtor_FUN_004fd0c0
// Address: 004fd0c0
CInventory * __cdecl CInventory::dtor(CInventory *this_ptr,uint flags);

// Original: core_inv.cpp_CInventory_clear_FUN_004fd0e0
// Address: 004fd0e0
void __cdecl CInventory::clear(CInventory *this_ptr);

// Original: core_inv.cpp_CInventory_initialize_FUN_004fd190
// Address: 004fd190
void __cdecl CInventory::initialize(CInventory *this_ptr);

// Original: core_inv.cpp_loadAssets_FUN_004fd220
// Address: 004fd220
void __cdecl loadAssets(void);

// Original: core_inv.cpp_freeInventory_FUN_004fd510
// Address: 004fd510
void __cdecl freeInventory(void);

// Original: core_inv.cpp_clampWeaponAmmoCount_FUN_004fd5d0
// Address: 004fd5d0
void __cdecl clampWeaponAmmoCount(CDemonActor *actor_ptr);

// Original: core_inv.cpp_CInventory_addItem_FUN_004fd600
// Address: 004fd600
int __cdecl CInventory::addItem(CInventory *this_ptr,CDemonActor *item_actor,int show_tutorial_message);

// Original: core_inv.cpp_CInventory_createAmmoFromWeapon_FUN_004fe900
// Address: 004fe900
void __cdecl CInventory::createAmmoFromWeapon(CInventory *this_ptr,CWeapon *weapon);

// Original: core_inv.cpp_CInventory_findItemByName_FUN_004fe9d0
// Address: 004fe9d0
CDemonActor * __cdecl CInventory::findItemByName(CInventory *this_ptr,char *item_name);

// Original: core_inv.cpp_CInventory_hasItemOfClass_FUN_004fea20
// Address: 004fea20
int __cdecl CInventory::hasItemOfClass(CInventory *this_ptr,char *class_name);

// Original: core_inv.cpp_CInventory_removeItem_FUN_004fea70
// Address: 004fea70
void __cdecl CInventory::removeItem(CInventory *this_ptr,CDemonActor *item_to_remove,int should_delete_actor);

// Original: core_inv.cpp_CInventory_selectWeapon_FUN_004feb10
// Address: 004feb10
void __cdecl CInventory::selectWeapon(CInventory *this_ptr,CDemonActor *specific_weapon,int weapon_category,int direction);

// Original: core_inv.cpp_CInventory_selectItem_FUN_004fec10
// Address: 004fec10
void __cdecl CInventory::selectItem(CInventory *this_ptr,int direction);

// Original: core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10
// Address: 004fed10
void __cdecl CInventory::cycleWeaponOfSameClass(CInventory *this_ptr,int direction);

// Original: core_inv.cpp_CInventory_renderItemModel_FUN_004fee00
// Address: 004fee00
void __cdecl CInventory::renderItemModel(CInventory *this_ptr,CDemonActor *item,int viewport_x,int viewport_y,int viewport_size,float rotation_y,int alpha);

// Original: core_inv.cpp_CInventory_save_FUN_004ff210
// Address: 004ff210
void __cdecl CInventory::save(CInventory *this_ptr,_FILE *file_handle);

// Original: core_inv.cpp_CInventory_saveItems_FUN_004ff3b0
// Address: 004ff3b0
void __cdecl CInventory::saveItems(CInventory *this_ptr,_FILE *file_handle);

// Original: core_inv.cpp_CInventory_load_FUN_004ff400
// Address: 004ff400
void __cdecl CInventory::load(CInventory *this_ptr,_FILE *file_handle);

// Original: core_inv.cpp_CInventory_loadItems_FUN_004ff740
// Address: 004ff740
void __cdecl CInventory::loadItems(CInventory *this_ptr);

// Original: core_inv.cpp_CInventory_setupItems_FUN_004ff780
// Address: 004ff780
void __cdecl CInventory::setupItems(CInventory *this_ptr);

// Original: core_inv.cpp_CInventory_select_FUN_004ff800
// Address: 004ff800
int __cdecl CInventory::select(CInventory *this_ptr,CDemonActor *actor_ptr);

// Original: core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0
// Address: 004ffab0
CLightGun * __cdecl CInventory::getActiveLightGun(CInventory *this_ptr);

// Original: core_inv.cpp_CInventory_updateInventory_FUN_004ffad0
// Address: 004ffad0
void __cdecl CInventory::updateInventory(CInventory *this_ptr);

// Original: core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004ffda0
// Address: 004ffda0
float __cdecl CInventory::calculateTotalBatteryCharge(CInventory *inventory_ptr,float max_charge);

// Original: core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10
// Address: 004ffe10
void __cdecl CInventory::updateSelectedWeaponAmmoDisplay(CInventory *this_ptr,int ammo_type);

// Original: core_inv.cpp_CInventory_isWeaponInCategory_FUN_004ffe70
// Address: 004ffe70
int __cdecl CInventory::isWeaponInCategory(CInventory *this_ptr,CDemonActor *weapon_actor,int weapon_category);

// Original: core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0
// Address: 004fffa0
void __cdecl CInventory::resetWeaponSwitchTimers(CInventory *this_ptr,int reset_both);

// Original: core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004ffff0
// Address: 004ffff0
void __cdecl CInventory::resetItemSwitchTimers(CInventory *this_ptr);

// Original: core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_00500020
// Address: 00500020
void __cdecl CInventory::resetInventoryDisplayTimer(CInventory *this_ptr);

// Original: core_inv.cpp_drawWeaponIconBackground_FUN_00500050
// Address: 00500050
void __cdecl drawWeaponIconBackground(int x1,int y1,int x2,int y2,int alpha);

// Original: core_inv.cpp_drawItemIconBackground_FUN_005001e0
// Address: 005001e0
void __cdecl drawItemIconBackground(int x1,int y1,int x2,int y2,int alpha);

// Original: core_inv.cpp_CInventory_renderSelectedItems_FUN_00500370
// Address: 00500370
void __cdecl CInventory::renderSelectedItems(CInventory *this_ptr);

// Original: core_inv.cpp_CInventory_renderAllItems_FUN_00500690
// Address: 00500690
void __cdecl CInventory::renderAllItems(CInventory *this_ptr);

// Original: core_inv.cpp_CInventory_checkHasMatchingKey_FUN_005013d0
// Address: 005013d0
int __cdecl CInventory::checkHasMatchingKey(CInventory *this_ptr,uint key_mask,int show_message);

// Original: core_inv.cpp_CInventory_removeMatchingKeys_FUN_005014a0
// Address: 005014a0
void __cdecl CInventory::removeMatchingKeys(CInventory *this_ptr,uint key_mask);

// Original: core_inv.cpp_CInventory_toggleDetailView_FUN_00501500
// Address: 00501500
void __cdecl CInventory::toggleDetailView(CInventory *this_ptr);

// Original: core_inv.cpp_CInventory_autoUseHealthItem_FUN_00501570
// Address: 00501570
void __cdecl CInventory::autoUseHealthItem(CInventory *this_ptr);
