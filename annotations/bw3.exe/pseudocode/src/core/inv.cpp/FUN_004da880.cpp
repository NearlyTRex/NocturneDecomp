// Name: core_inv.cpp_FUN_004da880
// Address: 004da880
// Address Range: [[004da880, 004db8c3]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_FUN_004da880(CInventory *this_ptr,CDemonActor *item_actor,int show_tutorial_message)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004db142) */
/* WARNING: Removing unreachable block (ram,0x004db14b) */
/* WARNING: Removing unreachable block (ram,0x004db159) */
/* WARNING: Removing unreachable block (ram,0x004db49d) */
/* WARNING: Removing unreachable block (ram,0x004db4bb) */
/* WARNING: Removing unreachable block (ram,0x004db4d4) */
/* WARNING: Removing unreachable block (ram,0x004db176) */
/* WARNING: Removing unreachable block (ram,0x004db181) */
/* WARNING: Removing unreachable block (ram,0x004db193) */
/* WARNING: Removing unreachable block (ram,0x004db1a2) */
/* WARNING: Removing unreachable block (ram,0x004db52b) */
/* WARNING: Removing unreachable block (ram,0x004db546) */
/* WARNING: Removing unreachable block (ram,0x004db1bc) */
/* WARNING: Removing unreachable block (ram,0x004db1c7) */
/* WARNING: Removing unreachable block (ram,0x004db1d5) */
/* WARNING: Removing unreachable block (ram,0x004db1f3) */
/* WARNING: Removing unreachable block (ram,0x004db54b) */
/* WARNING: Removing unreachable block (ram,0x004db56d) */
/* WARNING: Removing unreachable block (ram,0x004db586) */
/* WARNING: Removing unreachable block (ram,0x004db20f) */
/* WARNING: Removing unreachable block (ram,0x004db21a) */
/* WARNING: Removing unreachable block (ram,0x004db2b5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_inv_cpp_FUN_004da880(CInventory *this_ptr,CDemonActor *item_actor,int show_tutorial_message)

{
  char cVar1;
  bool bVar2;
  CDemonMission *pCVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  CDemonActor *pCVar7;
  CDemonActor *pCVar8;
  char *pcVar9;
  CInventory *pCVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  byte bVar18;
  float10 fVar19;
  char local_33c [256];
  char local_23c [256];
  char local_13c [256];
  char *local_3c;
  int local_38;
  int local_30;
  int local_24;
  int local_20;
  int local_1c;
  CInventory *local_18;
  int local_14;
  
  bVar18 = 0;
  bVar2 = true;
  iVar4 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c840(item_actor,g_CAmmoClassInfo.name_hash);
  if ((iVar4 != 0) &&
     (pCVar7 = (CDemonActor *)
               core_actor_cpp_castToClassHash_FUN_0040c840
                         (this_ptr->owner,g_CHeroClassInfo.name_hash), pCVar7 != (CDemonActor *)0x0)
     ) {
    if (*(int *)(iVar4 + 0x318) == 10) {
      iVar4 = *(int *)(pCVar7[0x185].create_event + 0x50) + *(int *)(iVar4 + 0x314);
      *(int *)(pCVar7[0x185].create_event + 0x50) = iVar4;
      if (100 < iVar4) {
        pCVar7[0x185].create_event[0x50] = 'd';
        pCVar7[0x185].create_event[0x51] = '\0';
        pCVar7[0x185].create_event[0x52] = '\0';
        pCVar7[0x185].create_event[0x53] = '\0';
      }
      core_sound_cpp_CSound_playActorSound_FUN_005609d0
                (0x02CF5680,pCVar7,"wp_getmana.wav",&(pCVar7->location).position);
      bVar2 = false;
    }
    else {
      if (*(int *)(iVar4 + 0x318) == 0xb) {
        iVar4 = *(int *)(pCVar7[0x185].create_event + 0x54) + *(int *)(iVar4 + 0x314);
        *(int *)(pCVar7[0x185].create_event + 0x54) = iVar4;
        if (0x32 < iVar4) {
          pCVar7[0x185].create_event[0x54] = '2';
          pCVar7[0x185].create_event[0x55] = '\0';
          pCVar7[0x185].create_event[0x56] = '\0';
          pCVar7[0x185].create_event[0x57] = '\0';
        }
        core_sound_cpp_CSound_playActorSound_FUN_005609d0
                  (0x02CF5680,pCVar7,"wp_getammo.wav",&(pCVar7->location).position);
      }
      bVar2 = false;
    }
  }
  iVar4 = (CHealthItem *)core_actor_cpp_castToClassHash_FUN_0040c840(item_actor,g_CHealthItemClassInfo.name_hash);
  local_38 = iVar4;
  if ((iVar4 == 0) || (*(int *)(iVar4 + 0x2e0) == 0)) {
    if (bVar2) {
      if (99 < this_ptr->item_count) {
        return 0;
      }
      pCVar7 = (*((item_actor->vtable)._ub)->getCarrier)(item_actor);
      if (pCVar7 != this_ptr->owner) {
        (*((item_actor->vtable)._ub)->onDropped)(item_actor,(CVector3f *)0x0);
        if (this_ptr->owner != (CDemonActor *)0x0) {
          (*((item_actor->vtable)._ub)->pickup)(item_actor,this_ptr->owner);
        }
      }
    }
  }
  else {
    iVar5 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c840(this_ptr->owner,g_CHeroClassInfo.name_hash);
    if (iVar5 != 0) {
      core_health_cpp_FUN_004d20c0(iVar4,iVar5);
    }
    bVar2 = false;
  }
  pcVar13 = local_33c;
  pcVar14 = local_33c;
  pcVar15 = local_33c;
  pcVar16 = local_33c;
  pcVar17 = local_33c;
  pcVar9 = local_33c;
  if (((this_ptr->owner != *(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) ||
      (show_tutorial_message == 0)) || (g_CGamePtr->letterbox_mode != 0)) goto LAB_004db104;
  local_3c = (char *)core_inv_cpp_getItemDisplayName_FUN_004d9e40(item_actor);
  core_inv_cpp_getItemDescription_FUN_004d9eb0(item_actor);
  pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960("You've found : ");
  pcVar11 = local_23c;
  do {
    cVar1 = *pcVar6;
    *pcVar11 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar11[1] = cVar1;
    pcVar11 = pcVar11 + 2;
  } while (cVar1 != '\0');
  local_30 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c840(item_actor,g_CAmmoClassInfo.name_hash);
  iVar4 = (CHealthItem *)core_actor_cpp_castToClassHash_FUN_0040c840(item_actor,g_CHealthItemClassInfo.name_hash);
  if (local_30 == 0) {
    pcVar11 = local_3c;
    if ((iVar4 == 0) || (bVar2)) goto LAB_004daa3e;
    fVar19 = (float10)*(float *)(iVar4 + 0x2d8);
    round();
    local_14 = (int)ROUND(fVar19);
    _sprintf(local_23c,"You've received : %d health");
  }
  else {
    _sprintf(local_13c,&DAT_005c6010);
    pcVar11 = local_13c;
    iVar4 = -1;
    pcVar6 = local_23c;
    do {
      pcVar12 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar12 = pcVar6 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    if (*(int *)(local_30 + 0x318) == 0xb) {
      pcVar11 = "bullets";
    }
    else {
      if (*(int *)(local_30 + 0x318) != 10) goto LAB_004daa67;
      pcVar11 = &DAT_005c601c;
    }
LAB_004daa3e:
    iVar4 = -1;
    pcVar6 = local_23c;
    do {
      pcVar12 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar12 = pcVar6 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
  }
LAB_004daa67:
  local_33c[0] = '\0';
  iVar4 = core_actor_cpp_isOfClass_FUN_0040c790(item_actor,"CHealthItem");
  if ((iVar4 != 0) && (bVar2)) {
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Press ");
    do {
      cVar1 = *pcVar11;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    pcVar11 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60(g_CGamePtr->key_next_item);
    iVar4 = -1;
    pcVar13 = local_33c;
    do {
      pcVar6 = pcVar13;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar6 = pcVar13 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00508960(" and ");
    iVar4 = -1;
    pcVar13 = local_33c;
    do {
      pcVar6 = pcVar13;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar6 = pcVar13 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    pcVar11 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60(g_CGamePtr->key_prev_item);
    iVar4 = -1;
    pcVar13 = local_33c;
    do {
      pcVar6 = pcVar13;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar6 = pcVar13 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                        (" to cycle through your inventory.  Press ");
    iVar4 = -1;
    pcVar13 = local_33c;
    do {
      pcVar6 = pcVar13;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar6 = pcVar13 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    pcVar11 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60(g_CGamePtr->key_use_item);
    iVar4 = -1;
    pcVar13 = local_33c;
    do {
      pcVar6 = pcVar13;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar6 = pcVar13 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                        (" to use this item to restore some health.");
    iVar4 = -1;
    pcVar13 = local_33c;
    do {
      pcVar6 = pcVar13;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar6 = pcVar13 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
  }
  iVar4 = core_actor_cpp_isOfClass_FUN_0040c790(item_actor,"CKeyActor");
  if (iVar4 != 0) {
    pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_00508960("With your guns put away, press ")
    ;
    do {
      cVar1 = *pcVar13;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    pcVar13 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60(g_CGamePtr->key_fire);
    iVar4 = -1;
    pcVar14 = local_33c;
    do {
      pcVar11 = pcVar14;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar11 = pcVar14 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar11;
    } while (cVar1 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar1 = *pcVar13;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                        (" to open a previously locked door.");
    iVar4 = -1;
    pcVar14 = local_33c;
    do {
      pcVar11 = pcVar14;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar11 = pcVar14 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar11;
    } while (cVar1 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar1 = *pcVar13;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
  }
  iVar4 = core_actor_cpp_isOfClass_FUN_0040c790(item_actor,"CBoxActor");
  if (iVar4 != 0) {
    pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Press ");
    do {
      cVar1 = *pcVar14;
      *pcVar15 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar15[1] = cVar1;
      pcVar15 = pcVar15 + 2;
    } while (cVar1 != '\0');
    pcVar14 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60(g_CGamePtr->key_next_item);
    iVar4 = -1;
    pcVar15 = local_33c;
    do {
      pcVar13 = pcVar15;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar13 = pcVar15 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar1 != '\0');
    pcVar13 = pcVar13 + -1;
    do {
      cVar1 = *pcVar14;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_00508960(" and ");
    iVar4 = -1;
    pcVar15 = local_33c;
    do {
      pcVar13 = pcVar15;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar13 = pcVar15 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar1 != '\0');
    pcVar13 = pcVar13 + -1;
    do {
      cVar1 = *pcVar14;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    pcVar14 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60(g_CGamePtr->key_prev_item);
    iVar4 = -1;
    pcVar15 = local_33c;
    do {
      pcVar13 = pcVar15;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar13 = pcVar15 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar1 != '\0');
    pcVar13 = pcVar13 + -1;
    do {
      cVar1 = *pcVar14;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                        (" to cycle through your inventory.  Press ");
    iVar4 = -1;
    pcVar15 = local_33c;
    do {
      pcVar13 = pcVar15;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar13 = pcVar15 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar1 != '\0');
    pcVar13 = pcVar13 + -1;
    do {
      cVar1 = *pcVar14;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    pcVar14 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60(g_CGamePtr->key_use_item);
    iVar4 = -1;
    pcVar15 = local_33c;
    do {
      pcVar13 = pcVar15;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar13 = pcVar15 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar1 != '\0');
    pcVar13 = pcVar13 + -1;
    do {
      cVar1 = *pcVar14;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_00508960(" to use this item.");
    iVar4 = -1;
    pcVar15 = local_33c;
    do {
      pcVar13 = pcVar15;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar13 = pcVar15 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar1 != '\0');
    pcVar13 = pcVar13 + -1;
    do {
      cVar1 = *pcVar14;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
  }
  iVar4 = core_actor_cpp_isOfClass_FUN_0040c790(item_actor,"CLightActor");
  if (iVar4 != 0) {
    pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Press ");
    do {
      cVar1 = *pcVar15;
      *pcVar16 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar15[1];
      pcVar15 = pcVar15 + 2;
      pcVar16[1] = cVar1;
      pcVar16 = pcVar16 + 2;
    } while (cVar1 != '\0');
    pcVar15 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60(g_CGamePtr->key_light);
    iVar4 = -1;
    pcVar16 = local_33c;
    do {
      pcVar14 = pcVar16;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar14 = pcVar16 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar16;
      pcVar16 = pcVar14;
    } while (cVar1 != '\0');
    pcVar14 = pcVar14 + -1;
    do {
      cVar1 = *pcVar15;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar15[1];
      pcVar15 = pcVar15 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_00508960(" to use the lantern.");
    iVar4 = -1;
    pcVar16 = local_33c;
    do {
      pcVar14 = pcVar16;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar14 = pcVar16 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar16;
      pcVar16 = pcVar14;
    } while (cVar1 != '\0');
    pcVar14 = pcVar14 + -1;
    do {
      cVar1 = *pcVar15;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar15[1];
      pcVar15 = pcVar15 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
  }
  iVar4 = core_actor_cpp_isOfClass_FUN_0040c790(item_actor,"CWeapon");
  if (iVar4 != 0) {
    local_14 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c840(item_actor,g_CWeaponClassInfo.name_hash);
    pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Select your ");
    do {
      cVar1 = *pcVar16;
      *pcVar17 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar16[1];
      pcVar16 = pcVar16 + 2;
      pcVar17[1] = cVar1;
      pcVar17 = pcVar17 + 2;
    } while (cVar1 != '\0');
    pcVar16 = (char *)core_inv_cpp_getItemDisplayName_FUN_004d9e40(local_14);
    iVar4 = -1;
    pcVar17 = local_33c;
    do {
      pcVar15 = pcVar17;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar15 = pcVar17 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar15;
    } while (cVar1 != '\0');
    pcVar15 = pcVar15 + -1;
    do {
      cVar1 = *pcVar16;
      *pcVar15 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar16[1];
      pcVar16 = pcVar16 + 2;
      pcVar15[1] = cVar1;
      pcVar15 = pcVar15 + 2;
    } while (cVar1 != '\0');
    pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_00508960(" with ");
    iVar4 = -1;
    pcVar17 = local_33c;
    do {
      pcVar15 = pcVar17;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar15 = pcVar17 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar15;
    } while (cVar1 != '\0');
    pcVar15 = pcVar15 + -1;
    do {
      cVar1 = *pcVar16;
      *pcVar15 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar16[1];
      pcVar16 = pcVar16 + 2;
      pcVar15[1] = cVar1;
      pcVar15 = pcVar15 + 2;
    } while (cVar1 != '\0');
    pcVar16 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60(g_CGamePtr->key_next_weapon);
    iVar4 = -1;
    pcVar17 = local_33c;
    do {
      pcVar15 = pcVar17;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar15 = pcVar17 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar15;
    } while (cVar1 != '\0');
    pcVar15 = pcVar15 + -1;
    do {
      cVar1 = *pcVar16;
      *pcVar15 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar16[1];
      pcVar16 = pcVar16 + 2;
      pcVar15[1] = cVar1;
      pcVar15 = pcVar15 + 2;
    } while (cVar1 != '\0');
    pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_00508960(" and ");
    iVar4 = -1;
    pcVar17 = local_33c;
    do {
      pcVar15 = pcVar17;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar15 = pcVar17 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar15;
    } while (cVar1 != '\0');
    pcVar15 = pcVar15 + -1;
    do {
      cVar1 = *pcVar16;
      *pcVar15 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar16[1];
      pcVar16 = pcVar16 + 2;
      pcVar15[1] = cVar1;
      pcVar15 = pcVar15 + 2;
    } while (cVar1 != '\0');
    pcVar16 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60(g_CGamePtr->key_prev_weapon);
    iVar4 = -1;
    pcVar17 = local_33c;
    do {
      pcVar15 = pcVar17;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar15 = pcVar17 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar15;
    } while (cVar1 != '\0');
    pcVar15 = pcVar15 + -1;
    do {
      cVar1 = *pcVar16;
      *pcVar15 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar16[1];
      pcVar16 = pcVar16 + 2;
      pcVar15[1] = cVar1;
      pcVar15 = pcVar15 + 2;
    } while (cVar1 != '\0');
    pcVar16 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c6195);
    iVar4 = -1;
    pcVar17 = local_33c;
    do {
      pcVar15 = pcVar17;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar15 = pcVar17 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar15;
    } while (cVar1 != '\0');
    pcVar15 = pcVar15 + -1;
    do {
      cVar1 = *pcVar16;
      *pcVar15 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar16[1];
      pcVar16 = pcVar16 + 2;
      pcVar15[1] = cVar1;
      pcVar15 = pcVar15 + 2;
    } while (cVar1 != '\0');
  }
  core_game_cpp_CGame_displayMessage_FUN_004b46b0(g_CGamePtr,local_23c,10.0);
  pcVar17 = this_ptr->message_text;
  do {
    cVar1 = *pcVar9;
    *pcVar17 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar17[1] = cVar1;
    pcVar17 = pcVar17 + 2;
  } while (cVar1 != '\0');
  local_14 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80
                       (_DAT_01549ab4,this_ptr->message_text);
  this_ptr->message_display_timer = (float)local_14 * (float)_DAT_005c627f;
LAB_004db104:
  if ((local_38 != 0) && (!bVar2)) {
    core_mission_cpp_FUN_004f6f10(0x01D81080,item_actor,1);
    return 1;
  }
  local_24 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c840(item_actor,g_CAmmoClassInfo.name_hash);
  if (local_24 != 0) {
    core_mission_cpp_FUN_004f6f10(0x01D81080,item_actor,1);
    return 1;
  }
  pCVar7 = (CDemonActor *)
           core_actor_cpp_castToClassHash_FUN_0040c840(item_actor,g_CWeaponClassInfo.name_hash);
  if (pCVar7 != (CDemonActor *)0x0) {
    iVar4 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar7,g_CMeleeClassInfo.name_hash);
    if (iVar4 != 0) {
      this_ptr->items[this_ptr->item_count] = item_actor;
      pCVar3 = 0x01D81080;
      this_ptr->item_count = this_ptr->item_count + 1;
      core_mission_cpp_FUN_004f6f10(pCVar3,item_actor,0);
      (*((item_actor->vtable)._ub)->onPickup)(item_actor,(CDemonActor *)this_ptr);
      return 1;
    }
    local_1c = 0;
    if (0 < this_ptr->item_count) {
      local_1c = 0;
      pCVar10 = this_ptr;
      do {
        pCVar8 = (CDemonActor *)
                 core_actor_cpp_castToClassHash_FUN_0040c840
                           (pCVar10->items[0],g_CWeaponClassInfo.name_hash);
        if (pCVar8 != (CDemonActor *)0x0) {
          pcVar17 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870(pCVar8);
          pcVar16 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870(pCVar7);
          iVar4 = _strcmp(pcVar16,pcVar17);
          if ((iVar4 == 0) &&
             (*(int *)(pCVar8[4].actor_name + 0xc) == *(int *)(pCVar7[4].actor_name + 0xc))) {
            *(int *)(pCVar8[4].actor_name + 8) =
                 *(int *)(pCVar8[4].actor_name + 8) + *(int *)(pCVar7[4].actor_name + 8);
            engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"Found same weapon, increasing ammoCount\n");
            core_mission_cpp_FUN_004f6f10(0x01D81080,item_actor,1);
            return 1;
          }
        }
        pCVar10 = (CInventory *)&pCVar10->owner;
        local_1c = local_1c + 1;
      } while (local_1c < this_ptr->item_count);
    }
    bVar2 = false;
    local_20 = 0;
    if (0 < this_ptr->item_count) {
      local_18 = this_ptr;
      do {
        iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (local_18->items[0],g_CAmmoClassInfo.name_hash);
        if (iVar4 != 0) {
          pcVar17 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870(pCVar7);
          iVar5 = _strcmp((char *)(iVar4 + 0x2d4),pcVar17);
          if (iVar5 == 0) {
            pcVar17 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870(pCVar7);
            pCVar8 = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c4f0(pcVar17);
            core_mission_cpp_CDemonMission_generateActorName_FUN_004f7530(0x01D81080,pCVar8);
            (*((pCVar8->vtable)._ub)->setup)(pCVar8);
            *(uint *)(pCVar8[4].actor_name + 8) = *(uint *)(iVar4 + 0x314);
            *(uint *)(pCVar8[4].actor_name + 0xc) = *(uint *)(iVar4 + 0x318);
            (*((pCVar8->vtable)._ub)->pickup)(pCVar8,this_ptr->owner);
            (*((pCVar8->vtable)._ub)->onPickup)(pCVar8,(CDemonActor *)this_ptr);
            core_actor_cpp_FUN_004085a0(local_18->items[0]);
            local_18->items[0] = pCVar8;
            pcVar17 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870(pCVar7);
            bVar2 = true;
            engine_console_cpp_FUN_00441ff0
                      (g_CConsolePtr,"Converting existing ammo for %s to weapon\n",pcVar17);
          }
        }
        local_18 = (CInventory *)&local_18->owner;
        local_20 = local_20 + 1;
      } while (local_20 < this_ptr->item_count);
    }
    if (bVar2) {
      core_mission_cpp_FUN_004f6f10(0x01D81080,pCVar7,1);
      return 1;
    }
  }
  this_ptr->items[this_ptr->item_count] = item_actor;
  pCVar3 = 0x01D81080;
  this_ptr->item_count = this_ptr->item_count + 1;
  core_mission_cpp_FUN_004f69a0(pCVar3,item_actor);
  (*((item_actor->vtable)._ub)->onPickup)(item_actor,(CDemonActor *)this_ptr);
  if ((pCVar7 != (CDemonActor *)0x0) && (this_ptr->selected_weapon == (CWeapon *)0x0)) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40(this_ptr,pCVar7,5,1);
  }
  return 1;
}
