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
  CDemonActor *pCVar4;
  CDemonActor *pCVar5;
  char *pcVar6;
  CDemonActor *actor;
  int iVar7;
  char *pcVar8;
  CInventory *pCVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  byte bVar17;
  float10 fVar18;
  char local_33c [256];
  char local_23c [256];
  char local_13c [256];
  char *local_3c;
  CDemonActor *local_38;
  CDemonActor *local_30;
  CDemonActor *local_24;
  int local_20;
  int local_1c;
  CInventory *local_18;
  CDemonActor *local_14;
  
  bVar17 = 0;
  bVar2 = true;
  pCVar4 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c840(item_actor,g_CAmmoClassInfo.name_hash);
  if ((pCVar4 != (CDemonActor *)0x0) &&
     (pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                         (this_ptr->owner,g_CHeroClassInfo.name_hash), pCVar5 != (CDemonActor *)0x0)
     ) {
    if (pCVar4[2].validation_magic == 10) {
      iVar7 = *(int *)(pCVar5[0x185].create_event + 0x50) + pCVar4[2].health;
      *(int *)(pCVar5[0x185].create_event + 0x50) = iVar7;
      if (100 < iVar7) {
        pCVar5[0x185].create_event[0x50] = 'd';
        pCVar5[0x185].create_event[0x51] = '\0';
        pCVar5[0x185].create_event[0x52] = '\0';
        pCVar5[0x185].create_event[0x53] = '\0';
      }
      core_sound_cpp_CSound_playActorSound_FUN_005609d0
                (0x02CF5680,pCVar5,"wp_getmana.wav",&(pCVar5->location).position);
      bVar2 = false;
    }
    else {
      if (pCVar4[2].validation_magic == 0xb) {
        iVar7 = *(int *)(pCVar5[0x185].create_event + 0x54) + pCVar4[2].health;
        *(int *)(pCVar5[0x185].create_event + 0x54) = iVar7;
        if (0x32 < iVar7) {
          pCVar5[0x185].create_event[0x54] = '2';
          pCVar5[0x185].create_event[0x55] = '\0';
          pCVar5[0x185].create_event[0x56] = '\0';
          pCVar5[0x185].create_event[0x57] = '\0';
        }
        core_sound_cpp_CSound_playActorSound_FUN_005609d0
                  (0x02CF5680,pCVar5,"wp_getammo.wav",&(pCVar5->location).position);
      }
      bVar2 = false;
    }
  }
  pCVar4 = (CHealthItem *)core_actor_cpp_castToClassHash_FUN_0040c840(item_actor,g_CHealthItemClassInfo.name_hash);
  local_38 = pCVar4;
  if ((pCVar4 == (CDemonActor *)0x0) || (pCVar4[2].orient.vec.x == 0.0)) {
    if (bVar2) {
      if (99 < this_ptr->item_count) {
        return 0;
      }
      pCVar4 = (*((item_actor->vtable)._ub)->getCarrier)(item_actor);
      if (pCVar4 != this_ptr->owner) {
        (*((item_actor->vtable)._ub)->onDropped)(item_actor,(CVector3f *)0x0);
        if (this_ptr->owner != (CDemonActor *)0x0) {
          (*((item_actor->vtable)._ub)->pickup)(item_actor,this_ptr->owner);
        }
      }
    }
  }
  else {
    pCVar5 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c840(this_ptr->owner,g_CHeroClassInfo.name_hash)
    ;
    if (pCVar5 != (CDemonActor *)0x0) {
      core_health_cpp_FUN_004d20c0(pCVar4,pCVar5);
    }
    bVar2 = false;
  }
  pcVar12 = local_33c;
  pcVar13 = local_33c;
  pcVar14 = local_33c;
  pcVar15 = local_33c;
  pcVar16 = local_33c;
  pcVar8 = local_33c;
  if (((this_ptr->owner != *(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) ||
      (show_tutorial_message == 0)) || (g_CGamePtr->letterbox_mode != 0)) goto LAB_004db104;
  local_3c = core_inv_cpp_getItemDisplayName_FUN_004d9e40(item_actor);
  core_inv_cpp_getItemDescription_FUN_004d9eb0(item_actor);
  pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960("You've found : ");
  pcVar10 = local_23c;
  do {
    cVar1 = *pcVar6;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  local_30 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c840(item_actor,g_CAmmoClassInfo.name_hash);
  pCVar4 = (CHealthItem *)core_actor_cpp_castToClassHash_FUN_0040c840(item_actor,g_CHealthItemClassInfo.name_hash);
  if (local_30 == (CDemonActor *)0x0) {
    pcVar10 = local_3c;
    if ((pCVar4 == (CDemonActor *)0x0) || (bVar2)) goto LAB_004daa3e;
    fVar18 = (float10)pCVar4[2].location.position.z;
    round();
    local_14 = (CDemonActor *)(int)ROUND(fVar18);
    _sprintf(local_23c,"You've received : %d health");
  }
  else {
    _sprintf(local_13c,&DAT_005c6010);
    pcVar10 = local_13c;
    iVar7 = -1;
    pcVar6 = local_23c;
    do {
      pcVar11 = pcVar6;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar6 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar11;
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
    if (local_30[2].validation_magic == 0xb) {
      pcVar10 = "bullets";
    }
    else {
      if (local_30[2].validation_magic != 10) goto LAB_004daa67;
      pcVar10 = &DAT_005c601c;
    }
LAB_004daa3e:
    iVar7 = -1;
    pcVar6 = local_23c;
    do {
      pcVar11 = pcVar6;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar6 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar11;
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
  }
LAB_004daa67:
  local_33c[0] = '\0';
  iVar7 = core_actor_cpp_isOfClass_FUN_0040c790(item_actor,"CHealthItem");
  if ((iVar7 != 0) && (bVar2)) {
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Press ");
    do {
      cVar1 = *pcVar10;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    pcVar10 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60(g_CGamePtr->key_next_item);
    iVar7 = -1;
    pcVar12 = local_33c;
    do {
      pcVar6 = pcVar12;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar6 = pcVar12 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar1 = *pcVar10;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00508960(" and ");
    iVar7 = -1;
    pcVar12 = local_33c;
    do {
      pcVar6 = pcVar12;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar6 = pcVar12 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar1 = *pcVar10;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    pcVar10 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60(g_CGamePtr->key_prev_item);
    iVar7 = -1;
    pcVar12 = local_33c;
    do {
      pcVar6 = pcVar12;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar6 = pcVar12 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar1 = *pcVar10;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                        (" to cycle through your inventory.  Press ");
    iVar7 = -1;
    pcVar12 = local_33c;
    do {
      pcVar6 = pcVar12;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar6 = pcVar12 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar1 = *pcVar10;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    pcVar10 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60(g_CGamePtr->key_use_item);
    iVar7 = -1;
    pcVar12 = local_33c;
    do {
      pcVar6 = pcVar12;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar6 = pcVar12 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar1 = *pcVar10;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                        (" to use this item to restore some health.");
    iVar7 = -1;
    pcVar12 = local_33c;
    do {
      pcVar6 = pcVar12;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar6 = pcVar12 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar1 = *pcVar10;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
  }
  iVar7 = core_actor_cpp_isOfClass_FUN_0040c790(item_actor,"CKeyActor");
  if (iVar7 != 0) {
    pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_00508960("With your guns put away, press ")
    ;
    do {
      cVar1 = *pcVar12;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    pcVar12 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60(g_CGamePtr->key_fire);
    iVar7 = -1;
    pcVar13 = local_33c;
    do {
      pcVar10 = pcVar13;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar13 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar1 = *pcVar12;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                        (" to open a previously locked door.");
    iVar7 = -1;
    pcVar13 = local_33c;
    do {
      pcVar10 = pcVar13;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar13 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar1 = *pcVar12;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
  }
  iVar7 = core_actor_cpp_isOfClass_FUN_0040c790(item_actor,"CBoxActor");
  if (iVar7 != 0) {
    pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Press ");
    do {
      cVar1 = *pcVar13;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    pcVar13 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60(g_CGamePtr->key_next_item);
    iVar7 = -1;
    pcVar14 = local_33c;
    do {
      pcVar12 = pcVar14;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar12 = pcVar14 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar13;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_00508960(" and ");
    iVar7 = -1;
    pcVar14 = local_33c;
    do {
      pcVar12 = pcVar14;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar12 = pcVar14 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar13;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    pcVar13 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60(g_CGamePtr->key_prev_item);
    iVar7 = -1;
    pcVar14 = local_33c;
    do {
      pcVar12 = pcVar14;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar12 = pcVar14 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar13;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                        (" to cycle through your inventory.  Press ");
    iVar7 = -1;
    pcVar14 = local_33c;
    do {
      pcVar12 = pcVar14;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar12 = pcVar14 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar13;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    pcVar13 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60(g_CGamePtr->key_use_item);
    iVar7 = -1;
    pcVar14 = local_33c;
    do {
      pcVar12 = pcVar14;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar12 = pcVar14 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar13;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_00508960(" to use this item.");
    iVar7 = -1;
    pcVar14 = local_33c;
    do {
      pcVar12 = pcVar14;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar12 = pcVar14 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar13;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
  }
  iVar7 = core_actor_cpp_isOfClass_FUN_0040c790(item_actor,"CLightActor");
  if (iVar7 != 0) {
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
    pcVar14 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60(g_CGamePtr->key_light);
    iVar7 = -1;
    pcVar15 = local_33c;
    do {
      pcVar13 = pcVar15;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar13 = pcVar15 + (uint)bVar17 * -2 + 1;
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
    pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_00508960(" to use the lantern.");
    iVar7 = -1;
    pcVar15 = local_33c;
    do {
      pcVar13 = pcVar15;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar13 = pcVar15 + (uint)bVar17 * -2 + 1;
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
  iVar7 = core_actor_cpp_isOfClass_FUN_0040c790(item_actor,"CWeapon");
  if (iVar7 != 0) {
    local_14 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c840(item_actor,g_CWeaponClassInfo.name_hash);
    pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Select your ");
    do {
      cVar1 = *pcVar15;
      *pcVar16 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar15[1];
      pcVar15 = pcVar15 + 2;
      pcVar16[1] = cVar1;
      pcVar16 = pcVar16 + 2;
    } while (cVar1 != '\0');
    pcVar15 = core_inv_cpp_getItemDisplayName_FUN_004d9e40(local_14);
    iVar7 = -1;
    pcVar16 = local_33c;
    do {
      pcVar14 = pcVar16;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar14 = pcVar16 + (uint)bVar17 * -2 + 1;
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
    pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_00508960(" with ");
    iVar7 = -1;
    pcVar16 = local_33c;
    do {
      pcVar14 = pcVar16;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar14 = pcVar16 + (uint)bVar17 * -2 + 1;
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
    pcVar15 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60(g_CGamePtr->key_next_weapon);
    iVar7 = -1;
    pcVar16 = local_33c;
    do {
      pcVar14 = pcVar16;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar14 = pcVar16 + (uint)bVar17 * -2 + 1;
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
    pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_00508960(" and ");
    iVar7 = -1;
    pcVar16 = local_33c;
    do {
      pcVar14 = pcVar16;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar14 = pcVar16 + (uint)bVar17 * -2 + 1;
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
    pcVar15 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60(g_CGamePtr->key_prev_weapon);
    iVar7 = -1;
    pcVar16 = local_33c;
    do {
      pcVar14 = pcVar16;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar14 = pcVar16 + (uint)bVar17 * -2 + 1;
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
    pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c6195);
    iVar7 = -1;
    pcVar16 = local_33c;
    do {
      pcVar14 = pcVar16;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar14 = pcVar16 + (uint)bVar17 * -2 + 1;
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
  core_game_cpp_CGame_displayMessage_FUN_004b46b0(g_CGamePtr,local_23c,10.0);
  pcVar16 = this_ptr->message_text;
  do {
    cVar1 = *pcVar8;
    *pcVar16 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar16[1] = cVar1;
    pcVar16 = pcVar16 + 2;
  } while (cVar1 != '\0');
  local_14 = (CDemonActor *)
             engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80
                       (_DAT_01549ab4,this_ptr->message_text);
  this_ptr->message_display_timer = (float)(int)local_14 * (float)_DAT_005c627f;
LAB_004db104:
  if ((local_38 != (CDemonActor *)0x0) && (!bVar2)) {
    core_mission_cpp_FUN_004f6f10(0x01D81080,item_actor,1);
    return 1;
  }
  local_24 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c840(item_actor,g_CAmmoClassInfo.name_hash);
  if (local_24 != (CDemonActor *)0x0) {
    core_mission_cpp_FUN_004f6f10(0x01D81080,item_actor,1);
    return 1;
  }
  pCVar4 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c840(item_actor,g_CWeaponClassInfo.name_hash);
  if (pCVar4 != (CDemonActor *)0x0) {
    pCVar5 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar4,g_CMeleeClassInfo.name_hash);
    if (pCVar5 != (CDemonActor *)0x0) {
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
      pCVar9 = this_ptr;
      do {
        pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                           (pCVar9->items[0],g_CWeaponClassInfo.name_hash);
        if (pCVar5 != (CDemonActor *)0x0) {
          pcVar16 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870(pCVar5);
          pcVar15 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870(pCVar4);
          iVar7 = _strcmp(pcVar15,pcVar16);
          if ((iVar7 == 0) &&
             (*(int *)(pCVar5[4].actor_name + 0xc) == *(int *)(pCVar4[4].actor_name + 0xc))) {
            *(int *)(pCVar5[4].actor_name + 8) =
                 *(int *)(pCVar5[4].actor_name + 8) + *(int *)(pCVar4[4].actor_name + 8);
            engine_console_cpp_CConsole_printf_FUN_00441ff0
                      (g_CConsolePtr,"Found same weapon, increasing ammoCount\n");
            core_mission_cpp_FUN_004f6f10(0x01D81080,item_actor,1);
            return 1;
          }
        }
        pCVar9 = (CInventory *)&pCVar9->owner;
        local_1c = local_1c + 1;
      } while (local_1c < this_ptr->item_count);
    }
    bVar2 = false;
    local_20 = 0;
    if (0 < this_ptr->item_count) {
      local_18 = this_ptr;
      do {
        pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                           (local_18->items[0],g_CAmmoClassInfo.name_hash);
        if (pCVar5 != (CDemonActor *)0x0) {
          pcVar16 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870(pCVar4);
          iVar7 = _strcmp((char *)&pCVar5[2].location.position.y,pcVar16);
          if (iVar7 == 0) {
            pcVar16 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870(pCVar4);
            actor = core_actor_cpp_createActorByName_FUN_0040c4f0(pcVar16);
            core_mission_cpp_CDemonMission_generateActorName_FUN_004f7530(0x01D81080,actor);
            (*((actor->vtable)._ub)->setup)(actor);
            *(int *)(actor[4].actor_name + 8) = pCVar5[2].health;
            *(uintptr_t *)(actor[4].actor_name + 0xc) = pCVar5[2].validation_magic;
            (*((actor->vtable)._ub)->pickup)(actor,this_ptr->owner);
            (*((actor->vtable)._ub)->onPickup)(actor,(CDemonActor *)this_ptr);
            core_actor_cpp_FUN_004085a0(local_18->items[0]);
            local_18->items[0] = actor;
            core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870(pCVar4);
            bVar2 = true;
            engine_console_cpp_CConsole_printf_FUN_00441ff0
                      (g_CConsolePtr,"Converting existing ammo for %s to weapon\n");
          }
        }
        local_18 = (CInventory *)&local_18->owner;
        local_20 = local_20 + 1;
      } while (local_20 < this_ptr->item_count);
    }
    if (bVar2) {
      core_mission_cpp_FUN_004f6f10(0x01D81080,pCVar4,1);
      return 1;
    }
  }
  this_ptr->items[this_ptr->item_count] = item_actor;
  pCVar3 = 0x01D81080;
  this_ptr->item_count = this_ptr->item_count + 1;
  core_mission_cpp_CDemonMission_removeActorFromList_FUN_004f69a0(pCVar3,item_actor);
  (*((item_actor->vtable)._ub)->onPickup)(item_actor,(CDemonActor *)this_ptr);
  if ((pCVar4 != (CDemonActor *)0x0) && (this_ptr->selected_weapon == (CWeapon *)0x0)) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40(this_ptr,pCVar4,5,1);
  }
  return 1;
}
